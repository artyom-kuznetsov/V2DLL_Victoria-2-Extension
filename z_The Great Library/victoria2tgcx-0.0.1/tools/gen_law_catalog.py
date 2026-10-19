#!/usr/bin/env python3
"""LAW-1: build a reviewable political/social bill catalogue from installed TGC.

Preview (pending affinity choices allowed, output outside the live submod):
    python tools/gen_law_catalog.py --preview E:/v2re/logs/tgcx-law1-preview
Release (only user-reviewed groups, explicit output directory required):
    python tools/gen_law_catalog.py --release <staging> [--groups press_rights ...]

This tool never installs anything. The default LAW-0 generator stays available.
"""

import argparse
import re
from pathlib import Path

from gen_laws import (BLOC, DEFAULT_TGC, ROOT, Gen, as_dict, balanced, chg, chk,
                      flag, gov_in, load, ors, ser, setv, share, when)
from tgc_scan import parse, read
from tgcx_law_support import MODES, load_support

CATALOG = Path(ROOT) / "data/tgcx_law_catalog.txt"
CATEGORIES = ("political_reforms", "social_reforms")
EV_CATALOG_COUNT = 420000194


def unique(items, context):
    result = {}
    for key, value in items:
        if key in result:
            raise ValueError(f"{context}: duplicate {key}")
        result[key] = value
    return result


def catalog_data(tgc=DEFAULT_TGC, path=CATALOG, selected=None, release=False):
    laws, _, groups, ideologies = load(tgc)
    catalog = unique(parse(read(path)), "catalogue")
    expected = {g for g, body in groups.items() if body["category"] in CATEGORIES}
    if set(catalog) != expected:
        raise ValueError(f"catalogue groups differ from TGC: missing {sorted(expected-set(catalog))}, "
                         f"unknown {sorted(set(catalog)-expected)}")
    chosen = list(catalog) if selected is None else list(selected)
    if not chosen or len(set(chosen)) != len(chosen) or set(chosen)-expected:
        raise ValueError("select distinct political/social groups present in the catalogue")
    affinity = {i: [] for i in ideologies}
    reviews = {}
    for g, body in catalog.items():
        spec = unique(body, g)
        if set(spec) != {"review", *ideologies}:
            raise ValueError(f"{g}: require review status and all {len(ideologies)} ideology entries")
        reviews[g] = spec["review"]
        if reviews[g] not in ("pending", "approved"):
            raise ValueError(f"{g}: unknown review status")
        for i in ideologies:
            row = unique(spec[i], f"{g}/{i}")
            if set(row) != {"ideal", "intensity"} or row["intensity"] not in ("1", "2"):
                raise ValueError(f"{g}/{i}: require ideal and intensity 1 or 2")
            if row["ideal"] not in ["status_quo", *groups[g]["options"]]:
                raise ValueError(f"{g}/{i}: ideal {row['ideal']} is not an option")
            if g in chosen:
                affinity[i].append((g, spec[i]))
    if release and any(reviews[g] != "approved" for g in chosen):
        raise ValueError("release requires user-approved affinity for every selected group; use --preview")
    bills = []
    for g in chosen:
        opts = groups[g]["options"]
        for frm, to in zip(opts, opts[1:]):
            bills += [(g, [("from", frm), ("to", to)]),
                      (g, [("from", to), ("to", frm)])]
    laws = [(k, bills if k == "bills" else v) for k, v in laws]
    return laws, list(affinity.items()), groups, ideologies, chosen, reviews


class CatalogGen(Gen):
    # Decisions the Bill window sends besides purchases/promises (already guarded).
    DLL_SENT = ("tgcx_audience", "tgcx_withdraw", "tgcx_call_vote", "tgcx_collect_favours")
    # The Bill's favour breakdown groups the rate factors (D11) by source.
    RATE_PARTS = ("prestige", "house", "order", "franchise", "leader")

    def __init__(self, laws, affinity, groups, ideologies, chosen, support):
        self.chosen = chosen
        self.support = support
        super().__init__(laws, affinity, groups, ideologies)

    def extra_bill_flags(self):
        return ["tgcx_catalog_bill", "tgcx_target_valid"] + [
            f"tgcx_support_{mode}" for mode in MODES] + [
            f"tgcx_bucket_{i}_{k}" for i in self.blocs for k in range(21)] + [
            f"tgcx_from_{g}_{opt}" for g in self.chosen for opt in self.groups[g]["options"]]

    @staticmethod
    def house_at(ideology, fraction):
        return f"upper_house = {{ ideology = {ideology} value = {fraction:.6f} }}"

    def allocation_block(self):
        """Balanced rounding of twenty five-seat packets.

        Round to nearest five, then correct excess/deficit using only blocs
        rounded up/down respectively, in installed ideology order. Each valid
        bloc receives either floor or ceiling of its true packet count. This
        avoids a large remainder-ranking program in the 32-bit engine.
        """
        lines = [setv("tgcx_house_total", 0)]
        for i in self.blocs:
            lines += [setv(f"tgcx_seats_{i}", 0), setv(f"tgcx_remainder_{i}", 0),
                      f"clr_country_flag = tgcx_allocated_{i}"]
            lines += [f"clr_country_flag = tgcx_bucket_{i}_{k}" for k in range(21)]
            for k in range(20):
                limits = f"NOT = {{ {self.house_at(i, (k+1)/20)} }}"
                if k:
                    limits = f"{self.house_at(i, k/20)} {limits}"
                remainder = when(self.house_at(i, k/20 + .025), " ".join([
                    chg(f"tgcx_seats_{i}", 5), chg("tgcx_house_total", 5),
                    f"set_country_flag = tgcx_allocated_{i}",
                    f"clr_country_flag = tgcx_bucket_{i}_{k}",
                    f"set_country_flag = tgcx_bucket_{i}_{k+1}"]))
                lines.append(when(limits, " ".join([
                    setv(f"tgcx_seats_{i}", 5*k), chg("tgcx_house_total", 5*k),
                    f"set_country_flag = tgcx_bucket_{i}_{k}", remainder])))
            lines.append(when(self.house_at(i, 1), " ".join([
                setv(f"tgcx_seats_{i}", 100), chg("tgcx_house_total", 100),
                f"set_country_flag = tgcx_bucket_{i}_20"])))
        for i in self.blocs:
            lines.append(when(f"{chk('tgcx_house_total', 105)} {flag(f'allocated_{i}')}",
                              " ".join([chg(f"tgcx_seats_{i}", -5), chg("tgcx_house_total", -5)])))
        for i in self.blocs:
            lines.append(when(f"NOT = {{ {chk('tgcx_house_total', 100)} }} "
                              f"NOT = {{ {flag(f'allocated_{i}')} }} {self.house_at(i, .001)}",
                              " ".join([chg(f"tgcx_seats_{i}", 5), chg("tgcx_house_total", 5)])))
        return lines

    def fresh_guard(self, ideology):
        """Validate cached allocation and the selected bloc's current support.

        If quantized chamber inputs or support changed, spending waits for Count.
        This guards the effect itself, including delayed/queued commands (P21).
        """
        chamber = []
        for i in self.blocs:
            up, down = [], []
            for k in range(21):
                bucket = flag(f"bucket_{i}_{k}")
                if k:
                    up.append(f"AND = {{ {bucket} {self.house_at(i, k/20-.025)} "
                              f"NOT = {{ {self.house_at(i, k/20)} }} }}")
                upper = f"NOT = {{ {self.house_at(i, k/20+.025)} }}" if k < 20 else ""
                down.append(f"AND = {{ {bucket} {self.house_at(i, k/20)} {upper} }}")
            rounded_up = flag(f"allocated_{i}")
            chamber.append(f"OR = {{ AND = {{ {rounded_up} {ors(up)} }} "
                           f"AND = {{ NOT = {{ {rounded_up} }} {ors(down)} }} }}")
        raw = f"tgcx_support_{ideology}"
        current = f"tgcx_current_support_{ideology}"
        refresh = [setv(current, 0)]
        values = sorted(set(v for rule in self.support[ideology].values() for v in rule.values))
        for mode in MODES:
            refresh.append(when(flag(f"support_{mode}"), " ".join(self.support[ideology][mode].script(current))))
        same = ors(["AND = { " + " ".join([
            chk(raw, v), f"NOT = {{ {chk(raw, v+1)} }}",
            chk(current, v), f"NOT = {{ {chk(current, v+1)} }}"]) + " }" for v in values])
        return refresh, " ".join([*chamber, same, chk("tgcx_house_total", 100),
                                  f"NOT = {{ {chk('tgcx_house_total', 105)} }}"])

    def baseline_block(self, i):
        raw, baseline = f"tgcx_support_{i}", f"tgcx_base_yes_{i}"
        lines = [setv(raw, 0), setv(baseline, 0)]
        values = sorted(set(v for rule in self.support[i].values() for v in rule.values))
        for mode in MODES:
            lines.append(when(flag(f"support_{mode}"), " ".join(self.support[i][mode].script(raw))))
        for k in range(1, 21):
            choices = []
            for value in values:
                if not value:
                    continue
                packets = ((2*k-1)*1000 + 2*value-1) // (2*value)
                if packets <= 20:
                    choices.append(f"AND = {{ {chk(raw, value)} {chk(f'tgcx_seats_{i}', 5*packets)} }}")
            if choices:
                lines.append(when(ors(choices), chg(baseline, 5)))
        return lines

    def count_block(self):
        lines = [setv(v, 0) for v in ("tgcx_yes", "tgcx_no", "tgcx_margin", "tgcx_quorum")]
        # Read-only DLL view model, written only by the synchronized script.
        # Refreshing it here also migrates active saves made before the GUI.
        lines += [setv("tgcx_gui_schema", 1), setv("tgcx_gui_active", 0),
                  when(flag("law_active"), setv("tgcx_gui_active", 1)), setv("tgcx_gui_bill_id", 0),
                  setv("tgcx_gui_crown_audience", 0),
                  when(flag("crown_signs"), setv("tgcx_gui_crown_audience", 1))]
        for bid, (g, frm, to) in enumerate(self.bills, 1):
            source = flag(f"from_{g}_{frm}")
            if (g, frm, to) == ("press_rights", "censored_press", "free_press"):
                source = f"OR = {{ {source} NOT = {{ {flag('catalog_bill')} }} }}"
            lines.append(when(f"{flag(f'law_{g}_{to}')} {source}", setv("tgcx_gui_bill_id", bid)))
        for i in self.blocs:
            lines += [setv(f"tgcx_gui_stance_{i}", 0), setv(f"tgcx_gui_promised_{i}", 0),
                      when(flag(f"promised_{i}"), setv(f"tgcx_gui_promised_{i}", 1))]
            for stance, value in (("p2", 2), ("p1", 1), ("m1", -1), ("m2", -2)):
                lines.append(when(flag(f"stance_{i}_{stance}"), setv(f"tgcx_gui_stance_{i}", value)))
        # The Bill's Crown panel: the same rule the vote applies, plus the
        # ruling party and government it depends on (1-based; 0 = other).
        lines += [setv("tgcx_gui_ruling", 0), setv("tgcx_gui_government", 0),
                  setv("tgcx_gui_crown_veto", 0), setv("tgcx_gui_crown_signs", 0)]
        lines += [when(f"ruling_party_ideology = {i}", setv("tgcx_gui_ruling", n))
                  for n, i in enumerate(self.all_ideologies, 1)]
        lines += [when(f"government = {g}", setv("tgcx_gui_government", n))
                  for n, g in enumerate(self.limited + self.full, 1)]
        lines += [when(gov_in(self.limited), setv("tgcx_gui_crown_veto", 1)),
                  when(self.crown_signs(), setv("tgcx_gui_crown_signs", 1))]
        # Only the accepted LAW-0 transition exists without catalogue mode flags.
        lines.append(when(f"NOT = {{ {flag('catalog_bill')} }} {flag('law_press_rights_free_press')}",
                          "set_country_flag = tgcx_support_add_political_reform"))
        lines += self.allocation_block()
        yes = " ".join([chg("tgcx_yes", 5), chg("tgcx_margin", 5), chg("tgcx_quorum", 5)])
        for i in self.blocs:
            raw, baseline, opposed = (f"tgcx_support_{i}", f"tgcx_base_yes_{i}", f"tgcx_opposed_{i}")
            lines += self.baseline_block(i) + [setv(opposed, 0), setv(f"tgcx_left_{i}", 0)]
            for k in range(1, 21):
                seat = chk(f"tgcx_seats_{i}", 5*k)
                base = chk(baseline, 5*k)
                lines += [when(base, yes), when(f"{seat} NOT = {{ {base} }}", chg(opposed, 5))]
            for k in range(1, 21):
                seat = chk(opposed, 5*k)
                promised = flag(f"promised_{i}")
                bought_yes = chk(f"tgcx_buy_{i}_yes", 5*k)
                bought_any = chk(f"tgcx_buy_{i}_total", 5*k)
                lines += [
                    when(f"{seat} OR = {{ {promised} {bought_yes} }}", yes),
                    when(f"{seat} NOT = {{ {promised} }} NOT = {{ {bought_any} }}", " ".join([
                        chg("tgcx_no", 5), chg("tgcx_margin", -5), chg("tgcx_quorum", 5),
                        chg(f"tgcx_left_{i}", 5)]))]
        return lines

    def cleanup_block(self):
        lines = super().cleanup_block()
        flags, variables, modifiers = self.bill_state
        flags += [f"tgcx_allocated_{i}" for i in self.blocs]
        variables += ["tgcx_house_total"] + [
            f"tgcx_{kind}_{i}" for i in self.blocs
            for kind in ("seats", "remainder", "support", "current_support", "base_yes", "opposed")]
        variables += ["tgcx_gui_active", "tgcx_gui_bill_id", "tgcx_gui_crown_audience", "tgcx_gui_ruling",
                      "tgcx_gui_government", "tgcx_gui_crown_veto", "tgcx_gui_crown_signs"] + [
            f"tgcx_gui_{kind}_{i}" for i in self.blocs for kind in ("stance", "promised")]
        self.bill_state = (flags, variables, modifiers)
        return lines + [f"clr_country_flag = tgcx_allocated_{i}" for i in self.blocs] + [
            setv(v, 0) for v in variables if v == "tgcx_house_total" or v.startswith("tgcx_gui_") or any(
                v.startswith(f"tgcx_{kind}_") for kind in ("seats", "remainder", "support", "current_support", "base_yes", "opposed"))]

    def build_bills(self, count, report, legislature):
        for g in self.chosen:
            opts = self.groups[g]["options"]
            for direction, pairs in (("up", list(zip(opts, opts[1:]))),
                                     ("down", list(zip(opts[1:], opts)))):
                available, branches = [], []
                descriptions = []
                for frm, to in pairs:
                    allow = ser(as_dict(self.groups[g]["body"][to]).get("allow", []), 0).replace("\n", " ")
                    available.append(f"AND = {{ {g} = {frm} {allow} }}")
                    stances = [f"set_country_flag = tgcx_stance_{i}_{self.stance(i, g, frm, to)}" for i in self.blocs]
                    branches.append(when(f"{g} = {frm}", " ".join([
                        f"set_country_flag = tgcx_law_{g}_{to}", f"set_country_flag = tgcx_from_{g}_{frm}", *stances])))
                    descriptions.append(f"{self.pretty(frm)} -> {self.pretty(to)}")
                self.decision(
                    f"tgcx_bill_{g}_{direction}",
                    f"Bill: {self.pretty(g)} ({'next' if direction == 'up' else 'previous'} option)",
                    f"Negotiate one step in {self.pretty(g)}, following TGC's option order. "
                    + ". ".join(descriptions)
                    + f". Debate: {self.n('debate_days')} days. TGC's conditional rules supply starting votes. "
                    "Reviewed affinity sets bargaining terms and promised-law preferences. "
                    "The current law and TGC's target restrictions are checked again when voting.",
                    ["ai = no", ors([f"{g} = {frm}" for frm, _ in pairs]),
                     f"NOT = {{ {flag('law_active')} }}", "NOT = { has_country_modifier = tgcx_bill_cooldown }", legislature],
                    [ors(available)],
                    [*self.cleanup_block(), "set_country_flag = tgcx_law_active", "set_country_flag = tgcx_catalog_bill",
                     f"set_country_flag = tgcx_support_{'add' if direction == 'up' else 'remove'}_"
                     f"{'political' if self.groups[g]['category'] == 'political_reforms' else 'social'}_reform",
                     *branches, setv("tgcx_spent", 0),
                     f"add_country_modifier = {{ name = tgcx_debate duration = {self.n('debate_days')} }}",
                     *count, *report])

    def vote_validation(self):
        lines = ["clr_country_flag = tgcx_target_valid"]
        legislature = gov_in(self.limited + self.full)
        for g, frm, to in self.bills:
            allow = ser(as_dict(self.groups[g]["body"][to]).get("allow", []), 0).replace("\n", " ")
            source = flag(f"from_{g}_{frm}")
            # LAW-0 saves have no source flag. Only its one known transition can migrate.
            if (g, frm, to) == ("press_rights", "censored_press", "free_press"):
                source = f"OR = {{ {source} NOT = {{ {flag('catalog_bill')} }} }}"
            lines.append(when(f"{flag(f'law_{g}_{to}')} {source} {g} = {frm} {allow} {legislature}",
                              "set_country_flag = tgcx_target_valid"))
        return lines, f"AND = {{ {flag('target_valid')} {chk('tgcx_house_total', 100)} NOT = {{ {chk('tgcx_house_total', 105)} }} }}"

    def promise_requirements(self, ideology):
        return [ors([f"AND = {{ {chk(f'tgcx_opposed_{ideology}', 5*k)} "
                     f"NOT = {{ {chk(f'tgcx_buy_{ideology}_yes', 5*k)} }} }}" for k in range(1, 21)])]

    def purchase_requirements(self, ideology):
        return [self.house_at(ideology, .001)]

    def build_negotiation(self, count, report, cleanup):
        # A friendly affinity can coexist with native Nay (e.g. low-pressure
        # Socialists on a political reform). Use the existing friendly/undecided
        # price, without overriding the bloc's native starting support.
        price = dict(self.L["price"])
        old = self.L["price"]
        self.L["price"] = [(kind, body + [(s, dict(price["vote"])["z"]) for s in ("p1", "p2")])
                           if kind == "vote" else (kind, body) for kind, body in old]
        try:
            super().build_negotiation(count, report, cleanup)
        finally:
            self.L["price"] = old
        # Vic2 displayed every conditional option of the old shared report.
        # New requests count in the decision, then select one ordinary result
        # event through the established LAW-0 firing-effect branches (P21/P34).
        # Keep its ID as a one-option recovery for an already queued save event;
        # no new decision fires this obsolete dispatcher.
        self.event(EV_CATALOG_COUNT, "tgcx_catalog_count", "The Whips Report",
                   "This report was queued by an earlier TGCX candidate. Recount the bill to get its current result.",
                   "Recount the bill.", [*count, *report])

    def files(self):
        files = super().files()
        # Preserve quoted tokens and line breaks while reducing repeated script
        # punctuation whitespace. Both forms have exactly the same script AST.
        for path, content in files.items():
            if path.endswith(".txt"):
                files[path] = re.sub(r'"[^"\n]*"|[ \t]*[{}=][ \t]*',
                                     lambda m: m[0] if m[0].startswith('"') else m[0].strip(), content)
        return files

    def decision(self, name, title, desc, potential, allow, effect, picture="cogs_blue"):
        if name.startswith("tgcx_buy_"):
            # A changed chamber can invalidate the previous count's seats-left value.
            # Check this bloc's remaining seats before spending. The full recount remains
            # the Count/Vote decisions' job, avoiding a whole-house count in every purchase.
            ideology = next(i for i in self.blocs if any(
                name.startswith(f"tgcx_buy_{kind}_{i}_") for kind in ("abstain", "vote")))
            # All unbought seats start Nay, including an undecided affinity.
            if name.startswith("tgcx_buy_vote_") and f"_{ideology}_z" in name:
                effect = [e for e in effect if e not in (chg("tgcx_margin", 5), chg("tgcx_margin", 25),
                                                        chg("tgcx_quorum", 5), chg("tgcx_quorum", 25))]
                lot = 25 if "_25" in name else 5
                effect += [chg("tgcx_no", -lot), chg("tgcx_margin", 2*lot)]
            refresh, fresh = self.fresh_guard(ideology)
            effect = [*refresh, when(fresh + " " + " ".join([*potential, *allow]), " ".join(effect))]
            desc += " If chamber allocation or this bloc's TGC support changed, Count the votes first: no favours are spent."
        elif name.startswith("tgcx_promise_"):
            ideology = name.removeprefix("tgcx_promise_")
            refresh, fresh = self.fresh_guard(ideology)
            # Secure every opposing seat, including an earlier bought abstention.
            moves = []
            for k in range(1, 21):
                available = f"{chk(f'tgcx_opposed_{ideology}', 5*k)} NOT = {{ {chk(f'tgcx_buy_{ideology}_yes', 5*k)} }}"
                bought = chk(f"tgcx_buy_{ideology}_total", 5*k)
                moves += [when(available, chg("tgcx_yes", 5)),
                          when(f"{available} {bought}", " ".join([chg("tgcx_margin", 5), chg("tgcx_quorum", 5)])),
                          when(f"{available} NOT = {{ {bought} }}", " ".join([chg("tgcx_no", -5), chg("tgcx_margin", 10)]))]
            effect = [*refresh, when(fresh + " " + " ".join([*potential, *allow]), " ".join([
                *effect[:3], setv(f"tgcx_gui_promised_{ideology}", 1), *moves, setv(f"tgcx_left_{ideology}", 0)]))]
            desc += " If the chamber or TGC support changed, Count the votes first."
        elif name == "tgcx_call_vote":
            # A previous defeat must not hide a newly winning fresh count.
            allow = ["NOT = { has_country_modifier = tgcx_debate }"]
        elif name == "tgcx_audience":
            effect = [*effect, setv("tgcx_gui_crown_audience", 1), setv("tgcx_gui_crown_signs", 1)]
        if name in self.DLL_SENT:
            # The Bill sends these through the native decision click, which
            # does not test potential/allow (LAW-2, FUN_006DCE10). The effect
            # checks them itself, so a stale or repeated command does nothing.
            effect = [when(" ".join([*potential, *allow]), " ".join(effect))]
        desc = desc.replace("are undecided on the bill", "have an undecided affinity on the bill")
        super().decision(name, title, desc, potential, allow, effect, picture)

    def build_tick(self):
        """LAW-0's monthly collection, plus a per-source breakdown and a counter.

        The breakdown (tgcx_gui_rate_<part>) is what the Bill shows; the counter
        tgcx_favours_ticks lets the DLL see that its automatic collection ran.
        """
        R = {k: as_dict(v) for k, v in self.L["rate"]}
        flags = []
        eff = [setv("tgcx_rate", self.n("rate_base"))] + [setv(f"tgcx_gui_rate_{p}", 0) for p in self.RATE_PARTS]

        def factor(cond, value, fname, part):
            flags.append(f"tgcx_rate_{fname}")
            eff.append(when(cond, f"{chg('tgcx_rate', value)} set_country_flag = tgcx_rate_{fname} "
                                  f"{chg(f'tgcx_gui_rate_{part}', value)}"))

        for p, v in sorted(R["prestige"].items(), key=lambda kv: int(kv[0])):
            factor(f"prestige = {p}", v, f"prestige_{p}", "prestige")
        maj = R["majority"]
        for i in self.all_ideologies:
            factor(f"ruling_party_ideology = {i} upper_house = {{ ideology = {i} value = {maj['working']} }}",
                   maj["working_value"], "majority", "house")
            factor(f"ruling_party_ideology = {i} NOT = {{ upper_house = {{ ideology = {i} value = {maj['hostile']} }} }}",
                   maj["hostile_value"], "hostile", "house")
        for m, v in R["modifiers"].items():
            factor(f"has_country_modifier = {m}", v, m,
                   "order" if m in ("national_instability", "power_vacuum") else "leader")
        for t in ("war_exhaustion", "average_militancy", "average_consciousness"):
            for th, v in R[t].items():
                factor(f"{t} = {th}", v, f"{t}_{th}", "order")
        for opt, v in R["vote_franschise"].items():
            if opt not in self.groups["vote_franschise"]["options"]:
                raise ValueError(f"vote_franschise has no option {opt} in TGC")
            factor(f"vote_franschise = {opt}", v, f"franchise_{opt}", "franchise")
        clear = [f"clr_country_flag = {f}" for f in dict.fromkeys(flags)]
        add = [when(chk("tgcx_rate", k), chg("tgcx_favours", 1)) for k in range(1, int(self.n("rate_max")) + 1)]
        cap = self.n("favours_cap")
        self.decision(
            "tgcx_collect_favours", "Collect political favours",
            "This month's political favours. Base 2, plus prestige, a working majority in the upper house, a "
            "narrow franchise and a skilled political leader. Minus instability, war exhaustion, militancy, "
            "consciousness, a hostile upper house and a broad franchise. Between 0 and 8 a month, up to 100. "
            "With the TGCX DLL this is collected automatically.",
            ["ai = no", "NOT = { has_country_modifier = tgcx_favours_tick }"], [],
            [*clear, *eff, *add, when(chk("tgcx_favours", cap), setv("tgcx_favours", cap)),
             chg("tgcx_favours_ticks", 1),
             # The Reforms tab offers bills only where a chamber can vote one.
             setv("tgcx_gui_legislature", 0), when(gov_in(self.limited + self.full), setv("tgcx_gui_legislature", 1)),
             *self.offer_block(),
             f"add_country_modifier = {{ name = tgcx_favours_tick duration = {self.n('tick_days')} }}"],
            picture="cogs_yellow")

    def offer_block(self):
        """D14: for each group, 1 + the current law whose next step passes the
        target option's own TGC allow (0 = none). The DLL lights a Reforms row
        only for that law, so a law changed since the collection offers nothing."""
        lines = []
        for g in self.chosen:
            opts = self.groups[g]["options"]
            var = f"tgcx_gui_offer_{g}"
            lines.append(setv(var, 0))
            for n, (frm, to) in enumerate(zip(opts, opts[1:]), 1):
                allow = ser(as_dict(self.groups[g]["body"][to]).get("allow", []), 0).replace("\n", " ")
                lines.append(when(f"{g} = {frm} {allow}", setv(var, n)))
        return lines

    def changed_text(self):
        return ("The vote cannot enact this bill: support, the starting law, the government, or TGC's target "
                "restrictions have changed. The bill stays on the table. Recount or withdraw it.")

    def build_debug(self):
        pass


def generate_catalog(tgc=DEFAULT_TGC, path=CATALOG, selected=None, release=False):
    laws, affinity, groups, ideologies, chosen, reviews = catalog_data(tgc, path, selected, release)
    g = CatalogGen(laws, affinity, groups, ideologies, chosen, load_support(tgc, ideologies))
    g.build()
    files = g.files()
    validate(files)
    return g, files, reviews


def validate(files):
    for name, text in files.items():
        text.encode("cp1252")
        if name.endswith(".txt") and not balanced(text):
            raise ValueError(f"unbalanced script: {name}")
        if Path(name).parent.name == "decisions":
            unique(dict(parse(text))["political_decisions"], "generated decisions")
        if Path(name).parent.name == "events":
            events = [body for _, body in parse(text)]
            ids = [int(dict(body)["id"]) for body in events]
            if len(ids) != len(set(ids)) or any(not 420000000 <= n <= 420999999 for n in ids):
                raise ValueError("duplicate or unreserved event ID")
            for body in events:
                for key, option in body:
                    if key == "option" and any(k in ("trigger", "allow", "limit") for k, _ in option):
                        raise ValueError("conditional event options are not supported by this candidate (P34)")


def review_text(tgc=DEFAULT_TGC, path=CATALOG):
    laws, affinity, groups, ideologies, chosen, reviews = catalog_data(tgc, path)
    aff = {i: dict(body) for i, body in affinity}
    pending = [g for g in chosen if reviews[g] == "pending"]
    lines = ["# LAW-1 affinity proposal", "", f"2026-10-12. **{len(chosen)-len(pending)} groups approved, {len(pending)} awaiting user review.**",
             "Generated from our proposed data plus installed TGC v2.5.2 option names/order.",
             "Intensity 1 = weak; 2 = strong. `status_quo` means oppose change weakly where intensity is 1.",
             "These are design proposals, not claims about historical parties or TGC's own voting AI.",
             "The user approved all base affinity rows on 2026-10-12; later corrections remain possible.",
             "TGC conditional rules supply starting votes; affinity controls bargaining and promises.",
             "There are 14 political + 9 social groups, 46 direction decisions and 144 adjacent transitions.",
             "Pending groups are preview only; release generation refuses unreviewed groups.", ""]
    for g in chosen:
        lines += [f"## {g} ({reviews[g]})", "", "TGC option order: " + " -> ".join(groups[g]["options"]), "",
                  "| Bloc | Proposed ideal | Intensity |", "|---|---|---|"]
        for i in ideologies:
            spec = dict(aff[i][g])
            lines.append(f"| {BLOC[i]} | {spec['ideal']} | {spec['intensity']} |")
        lines.append("")
    return "\n".join(lines)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    mode = ap.add_mutually_exclusive_group(required=True)
    mode.add_argument("--preview", type=Path)
    mode.add_argument("--release", type=Path)
    ap.add_argument("--tgc", default=DEFAULT_TGC)
    ap.add_argument("--data", type=Path, default=CATALOG)
    ap.add_argument("--groups", nargs="+")
    a = ap.parse_args()
    output = (a.preview or a.release).resolve()
    live = (Path(ROOT) / "submod").resolve()
    if output == live or output.is_relative_to(live) or live.is_relative_to(output):
        ap.error("use a separate staging directory; this tool does not overwrite the live submod")
    tgc = Path(a.tgc).resolve()
    protected = [tgc, *[p for p in tgc.parents if (p / "v2game.exe").is_file()]]
    if any(output == p or output.is_relative_to(p) or p.is_relative_to(output) for p in protected):
        ap.error("staging must be outside TGC and the installed game")
    try:
        g, files, reviews = generate_catalog(a.tgc, a.data, a.groups, release=bool(a.release))
    except ValueError as exc:
        ap.error(str(exc))
    for source, content in files.items():
        dest = output / Path(source).relative_to(Path(ROOT) / "submod")
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(content.encode("cp1252"))
    (output / "tgcx_affinity_review.md").write_text(review_text(a.tgc, a.data), encoding="utf-8")
    print(f"LAW-1 {'preview' if a.preview else 'release staging'}: {len(g.chosen)*2} bill entries, "
          f"{len(g.bills)} transitions, {len(g.blocs)} blocs; {output}")
    if a.preview:
        print("PENDING USER AFFINITY REVIEW; preview is not installed.")


if __name__ == "__main__":
    main()
