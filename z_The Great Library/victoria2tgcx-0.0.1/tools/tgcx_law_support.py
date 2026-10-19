"""Import installed ideology support rules; compile country-scoped vote inputs.

Native evidence: docs/report-law-1-native-1012.md. No native patch is needed.
Only the political/social rule grammar actually used by TGC 2.5.2 is accepted.
"""

from decimal import Decimal
from pathlib import Path

from gen_laws import chg, ser, setv, when
from tgc_scan import parse, read

MODES = ("add_political_reform", "remove_political_reform",
         "add_social_reform", "remove_social_reform")


def thousandths(value):
    number = Decimal(value) * 1000
    if number != int(number):
        raise ValueError("support numbers require at most three decimal places")
    return int(number)


def conditions(items):
    for key, value in items:
        if key in ("OR", "AND", "NOT") and isinstance(value, list):
            conditions(value)
        elif key in ("militancy", "political_movement_strength", "social_movement_strength"):
            thousandths(value)
        elif key == "ruling_party_ideology" and isinstance(value, str):
            pass
        else:
            raise ValueError(f"unsupported native support condition: {key}")
    return ser(items, 0).replace("\n", " ")


class SupportRule:
    def __init__(self, body):
        bases = [v for k, v in body if k == "base"]
        if len(bases) != 1:
            raise ValueError("native support rule requires one base")
        self.base = thousandths(bases[0])
        self.terms = []
        for key, value in body:
            if key == "base":
                continue
            if key == "modifier":
                self.terms.append(self.modifier(value))
            elif key == "group":
                prefix = []
                for tag, modifier in value:
                    if tag != "modifier":
                        raise ValueError("native support group requires ordered modifiers")
                    factor, triggers = self.modifier(modifier)
                    prefix += triggers
                    self.terms.append((factor, list(prefix)))
            else:
                raise ValueError(f"unsupported native support field: {key}")
        # Enumerate algebraic outcomes to compile constant script thresholds.
        # TGC's conditions may make some outcomes unreachable, which is harmless.
        values = {self.base}
        for factor, _ in self.terms:
            values |= {v + factor for v in values}
        if min(values) < 0 or max(values) > 1000:
            raise ValueError("political/social support outside 0..1 needs explicit native handling")
        self.values = sorted(values)

    @staticmethod
    def modifier(body):
        factors = [v for k, v in body if k == "factor"]
        if len(factors) != 1:
            raise ValueError("native modifier requires one factor")
        triggers = [(k, v) for k, v in body if k != "factor"]
        conditions(triggers)
        return thousandths(factors[0]), triggers

    def script(self, variable):
        return [setv(variable, self.base)] + [
            when(conditions(triggers), chg(variable, factor))
            for factor, triggers in self.terms]

    def evaluate(self, test):
        return self.base + sum(factor for factor, triggers in self.terms if test(triggers))


def load_support(tgc, ideologies):
    rows = {}
    for _, members in parse(read(Path(tgc) / "common/ideologies.txt")):
        for ideology, body in members:
            if ideology in rows:
                raise ValueError(f"duplicate native ideology: {ideology}")
            rows[ideology] = dict(body)
    if set(rows) != set(ideologies):
        raise ValueError("native support ideology inventory differs")
    return {i: {mode: SupportRule(rows[i][mode]) for mode in MODES} for i in ideologies}


def native_weighted_support(house_raw, support_raw):
    """Reference aggregation: thousandths -> Q15 -> weighted Q15, per bloc.

    Mirrors the two integer truncations in FUN_00525A20/FUN_00525BE0.
    The five-seat negotiation parliament intentionally quantizes this further.
    """
    return sum((house_raw[i] * (support_raw[i] * 32768 // 1000)) >> 15
               for i in house_raw)
