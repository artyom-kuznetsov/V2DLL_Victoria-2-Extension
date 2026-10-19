#!/usr/bin/env python3
"""Generate the law mechanic's script from our data and TGC v2.5.2 (LAW-0).

    python tools/gen_laws.py [--tgc <TGC folder>]

Reads data/tgcx_affinity.txt and data/tgcx_laws.txt (ours) and TGC's
common/issues.txt and common/ideologies.txt (names, options, `allow`), and
writes:

    submod/TGCX/decisions/tgcx_laws.txt      bills, purchases, promise, audience, vote, tick
    submod/TGCX/events/tgcx_laws.txt         reports, results, broken promises
    submod/TGCX/localisation/tgcx_laws.csv   English column only (D10), cp1252
    submod/tgcx_event_modifiers.txt          our block for the generated event_modifiers.txt (install_submod.py)

The generated files are never edited by hand: change the data and rerun.
Design: docs/law-design.md (v3, D7, D11). Steps: docs/instructions-law-0.md.
Vic2 has no `if` (P16) and a fired event skips its `trigger` (P21): every
condition is a `random_owned = { limit = { owner = { ... } } owner = { ... } }`.
"""

import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from tgc_scan import parse, read  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_TGC = r"E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC"
SUB = os.path.join(ROOT, "submod")

# Event ids (D8 range; LAW-0 owns 420 000 100 - 420 000 199).
EV_PASSED, EV_VETOED, EV_CHANGED = 420000100, 420000101, 420000102
EV_PASS_BY = 420000110         # + margin/5 - 1: passes by 5 ... 100
EV_FAIL_BY = 420000130         # + (-margin)/5: fails by 0 ... 100
EV_NO_QUORUM = 420000151       # + quorum/5: 0 ... 45 present
EV_FAVOURS = 420000170         # + favours/5: about 0 ... 100
# Stable across data ordering. Preserve LAW-0's Reactionary event 420000105.
# 110..160 belong to whip reports; 170..190 to the LAW-0 test aid.
BROKEN_EVENTS = dict(zip(
    ("liberal", "conservative", "reactionary", "socialist", "communist", "anarchist", "fascist", "anarcho_liberal", "tribalist"),
    (420000103, 420000104, 420000105, 420000106, 420000107, 420000108, 420000109, 420000192, 420000193)))

STANCES = ["p2", "p1", "z", "m1", "m2"]  # +2 strongly for ... -2 strongly against
STANCE_TEXT = {"p2": "strongly for", "p1": "for", "z": "undecided", "m1": "against", "m2": "strongly against"}
BLOC = {"liberal": "Liberals", "conservative": "Conservatives", "reactionary": "Reactionaries",
        "socialist": "Socialists", "communist": "Communists", "anarchist": "Anarchists",
        "fascist": "Fascists", "anarcho_liberal": "Anarcho-Liberals", "tribalist": "Tribalists"}


# ---------------------------------------------------------------- reading

def tree_get(items, key):
    for k, v in items:
        if k == key:
            return v
    return None


def as_dict(items):
    return {k: v for k, v in items}


def ser(items, indent):
    """Parsed Paradox script back to text."""
    out = []
    pad = "\t" * indent
    for k, v in items:
        if isinstance(v, list):
            if all(not isinstance(x, list) for _, x in v) and len(v) <= 3:
                inner = " ".join((f"{kk} = {vv}" if kk else vv) for kk, vv in v)
                out.append(f"{pad}{k} = {{ {inner} }}" if k else f"{pad}{{ {inner} }}")
            else:
                out.append(f"{pad}{k} = {{")
                out.append(ser(v, indent + 1))
                out.append(f"{pad}}}")
        else:
            out.append(f"{pad}{k} = {v}" if k else f"{pad}{v}")
    return "\n".join(out)


def load(tgc):
    laws = parse(read(os.path.join(ROOT, "data", "tgcx_laws.txt")))
    affinity = parse(read(os.path.join(ROOT, "data", "tgcx_affinity.txt")))
    issues = parse(read(os.path.join(tgc, "common", "issues.txt")))
    groups = {}
    for category, gs in issues:
        for g, body in gs:
            if isinstance(body, list):
                opts = [o for o, ob in body if isinstance(ob, list)]
                groups[g] = {"category": category, "options": opts, "body": as_dict(body)}
    ideologies = []
    for _, members in parse(read(os.path.join(tgc, "common", "ideologies.txt"))):
        if isinstance(members, list):
            ideologies += [name for name, body in members if isinstance(body, list)]
    return laws, affinity, groups, ideologies


# ---------------------------------------------------------------- script helpers

def when(cond, effect):
    """IF emulation (wiki; P16): the effect runs once if the country meets cond."""
    return f"random_owned = {{ limit = {{ owner = {{ {cond} }} }} owner = {{ {effect} }} }}"


def chg(var, n):
    return f"change_variable = {{ which = {var} value = {n} }}"


def setv(var, n):
    return f"set_variable = {{ which = {var} value = {n} }}"


def chk(var, n):
    return f"check_variable = {{ which = {var} value = {n} }}"


def flag(name):
    return f"has_country_flag = tgcx_{name}"


def share(ideology, k):
    """The bloc holds slice k (5k seats, rounded to the nearest: >= 5k - 2.5 %)."""
    return f"upper_house = {{ ideology = {ideology} value = {0.05 * k - 0.025:.3f} }}"


def ors(conds):
    return conds[0] if len(conds) == 1 else "OR = { " + " ".join(conds) + " }"


def gov_in(names):
    return ors([f"government = {g}" for g in names])


# ---------------------------------------------------------------- the generator

class Gen:
    def __init__(self, laws, affinity, groups, ideologies):
        self.L = as_dict(laws)
        self.aff = {ideo: as_dict(body) for ideo, body in affinity}
        self.groups = groups
        self.all_ideologies = ideologies
        self.blocs = [i for i in self.aff if i in ideologies]  # ideologies with a stance
        leg = as_dict(self.L["legislature"])
        self.limited = [v for _, v in leg["limited"]]
        self.full = [v for _, v in leg["full"]]
        self.distrust = [v for _, v in self.L["crown_distrusts"]]
        self.bills = []
        for g, spec in self.L["bills"]:
            spec = as_dict(spec)
            self.bills.append((g, spec["from"], spec["to"]))
        self.loc = []
        self.events = []
        self.decisions = []

    def n(self, key):
        return self.L[key]

    def span(self, key):
        d = int(self.n(key))
        return f"{d // 365} years" if d >= 365 else f"{d} days"

    def text(self, key, english):
        assert ";" not in english, key
        self.loc.append((key, english))

    # --- stances (docs/law-design.md §3)

    def stance(self, ideology, group, frm, to):
        spec = as_dict(self.aff[ideology].get(group, [])) if group in self.aff[ideology] else None
        if spec is None:
            return "z"
        opts = self.groups[group]["options"]
        ideal = frm if spec["ideal"] == "status_quo" else spec["ideal"]
        i_ideal, i_from, i_to = opts.index(ideal), opts.index(frm), opts.index(to)
        before, after = abs(i_from - i_ideal), abs(i_to - i_ideal)
        k = int(spec["intensity"])
        return "z" if before == after else (f"p{k}" if after < before else f"m{k}")

    # --- the count (§4): constants per slice, conditions on the stance flags

    def count_block(self):
        lines = [setv(v, 0) for v in ("tgcx_yes", "tgcx_no", "tgcx_margin", "tgcx_quorum")]
        lines += [setv(f"tgcx_left_{i}", 0) for i in self.blocs]
        yes = " ".join([chg("tgcx_yes", 5), chg("tgcx_margin", 5), chg("tgcx_quorum", 5)])
        for i in self.blocs:
            yes_flag = ors([flag(f"stance_{i}_p2"), flag(f"stance_{i}_p1")])
            no_flag = ors([flag(f"stance_{i}_m1"), flag(f"stance_{i}_m2")])
            promised = flag(f"promised_{i}")
            for k in range(1, 21):
                s, n = share(i, k), 5 * k
                bought_yes, bought_any = chk(f"tgcx_buy_{i}_yes", n), chk(f"tgcx_buy_{i}_total", n)
                left = chg(f"tgcx_left_{i}", 5)
                lines += [
                    when(f"{s} {yes_flag}", yes),
                    when(f"{s} {flag(f'stance_{i}_z')} {bought_yes}", yes),
                    when(f"{s} {flag(f'stance_{i}_z')} NOT = {{ {bought_any} }}", left),
                    when(f"{s} {flag(f'stance_{i}_m2')} {promised}", yes),
                    when(f"{s} {no_flag} NOT = {{ {promised} }} {bought_yes}", yes),
                    when(f"{s} {no_flag} NOT = {{ {promised} }} NOT = {{ {bought_any} }}",
                         f"{chg('tgcx_no', 5)} {chg('tgcx_margin', -5)} {chg('tgcx_quorum', 5)} {left}"),
                ]
        return lines

    def report_block(self):
        """One whip-count window, chosen by the fresh tallies (P21: chosen here, not in a trigger)."""
        lines = []
        for q in range(0, 50, 5):
            lines.append(when(f"{chk('tgcx_quorum', q)} NOT = {{ {chk('tgcx_quorum', q + 5)} }}",
                              f"country_event = {EV_NO_QUORUM + q // 5}"))
        quorum = chk("tgcx_quorum", 50)
        for m in range(5, 101, 5):
            upper = f" NOT = {{ {chk('tgcx_margin', m + 5)} }}" if m < 100 else ""
            lines.append(when(f"{quorum} {chk('tgcx_margin', m)}{upper}", f"country_event = {EV_PASS_BY + m // 5 - 1}"))
        for m in range(0, 101, 5):
            low = f"{chk('tgcx_margin', -m)} " if m < 100 else ""
            lines.append(when(f"{quorum} {low}NOT = {{ {chk('tgcx_margin', -m + 5)} }}", f"country_event = {EV_FAIL_BY + m // 5}"))
        return lines

    def cleanup_block(self):
        """Every flag, variable and modifier of the bill. Debts and favours are the country's: kept."""
        bill_flags = ["tgcx_law_active", "tgcx_crown_signs"]
        bill_flags += [f"tgcx_law_{g}_{to}" for g, _, to in self.bills]
        bill_flags += [f"tgcx_stance_{i}_{s}" for i in self.blocs for s in STANCES]
        bill_flags += [f"tgcx_promised_{i}" for i in self.blocs]
        bill_flags += self.extra_bill_flags()
        bill_flags = list(dict.fromkeys(bill_flags))
        bill_vars = ["tgcx_yes", "tgcx_no", "tgcx_margin", "tgcx_quorum", "tgcx_spent"]
        bill_vars += [f"tgcx_{v}_{i}{s}" for i in self.blocs for v, s in (("left", ""),)]
        bill_vars += [f"tgcx_buy_{i}_{s}" for i in self.blocs for s in ("yes", "total")]
        self.bill_state = (bill_flags, bill_vars, ["tgcx_debate"])
        return ([f"clr_country_flag = {f}" for f in bill_flags] + [setv(v, 0) for v in bill_vars]
                + ["remove_country_modifier = tgcx_debate"])

    def crown_signs(self):
        distrusted = ors([f"ruling_party_ideology = {i}" for i in self.distrust])
        return f"OR = {{ {gov_in(self.full)} {flag('crown_signs')} NOT = {{ {distrusted} }} }}"

    def extra_bill_flags(self):
        return []

    def vote_validation(self):
        return [], ""

    def promise_requirements(self, ideology):
        return []

    def purchase_requirements(self, ideology):
        return []

    def changed_text(self):
        return ("Since the last count the upper house has changed, and the bill no longer has the votes to pass. "
                "The bill stays on the table: buy more support, or wait.")

    # --- decisions

    def decision(self, name, title, desc, potential, allow, effect, picture="cogs_blue"):
        self.text(f"{name}_title", title)
        self.text(f"{name}_desc", desc)
        body = [f"\t{name} = {{", f"\t\tpicture = {picture}",
                "\t\tpotential = {", *[f"\t\t\t{p}" for p in potential], "\t\t}",
                "\t\tallow = {", *[f"\t\t\t{a}" for a in allow], "\t\t}",
                "\t\teffect = {", *[f"\t\t\t{e}" for e in effect], "\t\t}",
                "\t\tai_will_do = { factor = 0 }", "\t}", ""]
        self.decisions.append("\n".join(body))

    def event(self, eid, key, title, desc, option, effect=(), trigger=None, polled=False, picture="senate_debate"):
        self.text(f"{key}_title", title)
        self.text(f"{key}_desc", desc)
        self.text(f"{key}_ok", option)
        body = ["country_event = {", f"\tid = {eid}", f'\ttitle = "{key}_title"', f'\tdesc = "{key}_desc"',
                f'\tpicture = "{picture}"', ""]
        if polled:
            body += ["\ttrigger = {", *[f"\t\t{t}" for t in trigger], "\t}", "",
                     "\tmean_time_to_happen = { days = 1 }", ""]
        else:
            body += ["\tis_triggered_only = yes", ""]
        body += ["\toption = {", f'\t\tname = "{key}_ok"', *[f"\t\t{e}" for e in effect], "\t}", "}", ""]
        self.events.append("\n".join(body))

    def build(self):
        count = self.count_block()
        report = self.report_block()
        cleanup = self.cleanup_block()
        legislature = gov_in(self.limited + self.full)

        self.build_bills(count, report, legislature)
        self.build_negotiation(count, report, cleanup)

    def build_bills(self, count, report, legislature):

        # Present one bill per (group, target): the bill's own decision.
        for g, frm, to in self.bills:
            grp = self.groups[g]
            if frm not in grp["options"] or to not in grp["options"]:
                sys.exit(f"gen_laws: {g}: {frm} or {to} is not an option in TGC's issues.txt")
            allow = as_dict(grp["body"][to]).get("allow", [])
            stance_flags = [f"set_country_flag = tgcx_stance_{i}_{self.stance(i, g, frm, to)}" for i in self.blocs]
            name = f"tgcx_law_{g}_{to}"
            self.decision(
                name, f"Bill: {self.pretty(to)}",
                f"Present a bill to move {self.pretty(g)} from {self.pretty(frm)} to {self.pretty(to)}. The upper house "
                f"debates it for {self.n('debate_days')} days. Each bloc votes by its ideological closeness to the law: "
                f"{', '.join(BLOC.get(i, i) + ' ' + STANCE_TEXT[self.stance(i, g, frm, to)] for i in self.blocs)}. "
                "Abstentions and votes can be bought with political favours, and the strongly opposed can be promised a law.",
                ["ai = no", f"{g} = {frm}", f"NOT = {{ {flag('law_active')} }}",
                 "NOT = { has_country_modifier = tgcx_bill_cooldown }", legislature],
                [ser(allow, 0).replace("\n", " ")] if allow else [],
                ["set_country_flag = tgcx_law_active", f"set_country_flag = {name}", *stance_flags,
                 setv("tgcx_spent", 0),
                 *[setv(f"tgcx_buy_{i}_{s}", 0) for i in self.blocs for s in ("yes", "total")],
                 f"add_country_modifier = {{ name = tgcx_debate duration = {self.n('debate_days')} }}",
                 *count, *report],
                picture="free_press_in_baden" if to == "free_press" else "cogs_blue")

    def build_negotiation(self, count, report, cleanup):
        # Purchases: generic, per bloc x kind x stance x lot, and a double-price twin under a broken debt.
        # A lot of n seats costs n/5 times the price per 5 seats (user, U-3: fewer clicks).
        price = {kind: as_dict(v) for kind, v in self.L["price"]}
        factor = int(self.n("broken_debt_price_factor"))
        lots = [int(v) for _, v in self.L["lots"]]
        for i in self.blocs:
            bloc = BLOC.get(i, i)
            for kind, st, cost in [("abstain", s, int(c)) for s, c in price["abstain"].items()] +                                   [("vote", s, int(c)) for s, c in price["vote"].items()]:
                for lot in lots:
                    for twin in (False, True):
                        c = cost * lot // 5 * (factor if twin else 1)
                        if kind == "abstain":   # from Nay to abstain
                            moves = [chg("tgcx_no", -lot), chg("tgcx_margin", lot), chg("tgcx_quorum", -lot)]
                        elif st == "z":         # from abstain to Aye
                            moves = [chg("tgcx_yes", lot), chg("tgcx_margin", lot), chg("tgcx_quorum", lot),
                                     chg(f"tgcx_buy_{i}_yes", lot)]
                        else:                   # from Nay to Aye
                            moves = [chg("tgcx_no", -lot), chg("tgcx_yes", lot), chg("tgcx_margin", 2 * lot),
                                     chg(f"tgcx_buy_{i}_yes", lot)]
                        mod = "has_country_modifier = tgcx_debt_broken_" + i
                        self.decision(
                            f"tgcx_buy_{kind}_{i}_{st}" + (f"_{lot}" if lot != 5 else "") + ("_x2" if twin else ""),
                            f"{bloc}: {'abstention' if kind == 'abstain' else 'vote Aye'}, {lot} seats ({c} favours)",
                            f"The {bloc} are {STANCE_TEXT[st]} on the bill. For {c} political favours, {lot} of their seats "
                            f"{'abstain instead of voting Nay' if kind == 'abstain' else 'vote Aye'}. "
                            + ("Prices are doubled: a promise to them was broken. " if twin else "")
                            + "Spent favours are lost if the bill fails.",
                            ["ai = no", flag("law_active"), flag(f"stance_{i}_{st}"), f"NOT = {{ {flag(f'promised_{i}')} }}",
                             mod if twin else f"NOT = {{ {mod} }}", *self.purchase_requirements(i)],
                            [chk("tgcx_favours", c), chk(f"tgcx_left_{i}", lot)],
                            [chg("tgcx_favours", -c), chg("tgcx_spent", c), chg(f"tgcx_left_{i}", -lot),
                             chg(f"tgcx_buy_{i}_total", lot), *moves])

            # A promise: only for the strongly opposed (§5). The debt outlives the bill.
            self.decision(
                f"tgcx_promise_{i}", f"{bloc}: promise a law",
                f"Promise the {bloc} a law they want, within {self.span('debt_days')}. In exchange "
                f"they vote Aye in full. If the promise is broken: +{self.n('broken_debt_militancy')} militancy among "
                f"their supporters, and their votes cost double for {int(self.n('broken_debt_days')) // 365} years.",
                ["ai = no", flag("law_active"), flag(f"stance_{i}_m2"), f"NOT = {{ {flag(f'promised_{i}')} }}"],
                [f"NOT = {{ {flag(f'debt_{i}')} }}", *self.promise_requirements(i)],
                [f"set_country_flag = tgcx_debt_{i}", f"set_country_flag = tgcx_promised_{i}",
                 f"add_country_modifier = {{ name = tgcx_debt_deadline_{i} duration = {self.n('debt_days')} }}", *count])

        aud = int(self.n("audience"))
        self.decision(
            "tgcx_audience", f"Audience with the Crown ({aud} favours)",
            "Ask the Crown for an audience. If granted, it will sign this bill even if it dislikes it.",
            ["ai = no", flag("law_active"), f"NOT = {{ {flag('crown_signs')} }}", gov_in(self.limited)],
            [chk("tgcx_favours", aud)],
            [chg("tgcx_favours", -aud), chg("tgcx_spent", aud), "set_country_flag = tgcx_crown_signs"])

        self.decision(
            "tgcx_count_votes", "Count the votes",
            "The whips count the upper house as it stands today. Use it after an election.",
            ["ai = no", flag("law_active")], [], [*count, *report])

        # Call the vote: recount, decide the outcome into flags first, then act (the acts change the tallies).
        validation, valid = self.vote_validation()
        ok = f"{chk('tgcx_margin', 5)} {chk('tgcx_quorum', 50)} {valid}".rstrip()
        crown = self.crown_signs()
        act = [when(f"{ok} {crown}", "set_country_flag = tgcx_outcome_pass"),
               when(f"{ok} NOT = {{ {crown} }}", "set_country_flag = tgcx_outcome_veto"),
               when(f"NOT = {{ {chk('tgcx_margin', 5)} }}", "set_country_flag = tgcx_outcome_changed"),
               when(f"NOT = {{ {chk('tgcx_quorum', 50)} }}", "set_country_flag = tgcx_outcome_changed")]
        if valid:
            act.append(when(f"NOT = {{ {valid} }}", "set_country_flag = tgcx_outcome_changed"))
        for g, to in dict.fromkeys((g, to) for g, _, to in self.bills):
            kind = "political_reform" if self.groups[g]["category"] == "political_reforms" else "social_reform"
            act.append(when(f"{flag('outcome_pass')} {flag(f'law_{g}_{to}')}", f"{kind} = {to}"))
        for i in self.blocs:  # a law the bloc wanted pays its debt
            act.append(when(f"{flag('outcome_pass')} {ors([flag(f'stance_{i}_p2'), flag(f'stance_{i}_p1')])} {flag(f'debt_{i}')}",
                            f"clr_country_flag = tgcx_debt_{i} remove_country_modifier = tgcx_debt_deadline_{i}"))
        act += [when(flag("outcome_pass"), f"country_event = {EV_PASSED}"),
                when(flag("outcome_veto"), f"country_event = {EV_VETOED} add_country_modifier = {{ name = tgcx_bill_cooldown duration = {self.n('cooldown_days')} }}"),
                when(flag("outcome_changed"), f"country_event = {EV_CHANGED}"),
                when(ors([flag("outcome_pass"), flag("outcome_veto")]), " ".join(cleanup)),
                "clr_country_flag = tgcx_outcome_pass", "clr_country_flag = tgcx_outcome_veto",
                "clr_country_flag = tgcx_outcome_changed"]
        self.decision(
            "tgcx_call_vote", "Call the vote",
            "The upper house votes. It passes if more seats vote Aye than Nay and at least 50 of 100 vote. "
            "Then the Crown signs or vetoes. Favours spent are lost if the bill fails.",
            ["ai = no", flag("law_active")],
            ["NOT = { has_country_modifier = tgcx_debate }", chk("tgcx_margin", 5), chk("tgcx_quorum", 50)],
            [*count, *validation, *act], picture="hellenic_parliament")

        self.decision(
            "tgcx_withdraw", "Withdraw the bill",
            f"Withdraw the bill. Favours spent are lost, promises stand, and no bill can be presented for "
            f"{self.n('cooldown_days')} days.",
            ["ai = no", flag("law_active")], [],
            [*cleanup, f"add_country_modifier = {{ name = tgcx_bill_cooldown duration = {self.n('cooldown_days')} }}"])

        self.build_tick()
        self.build_debug()

        # Events: results, reports, broken promises.
        self.event(EV_PASSED, "tgcx_law_passed", "The Bill Passes",
                   "The upper house has passed the bill and the Crown has signed it into law.", "Splendid.")
        self.event(EV_VETOED, "tgcx_law_vetoed", "The Crown Vetoes the Bill",
                   "The upper house passed the bill, but the Crown refused to sign it. The favours spent are lost.",
                   "So be it.")
        self.event(EV_CHANGED, "tgcx_law_changed", "The Count Has Changed",
                   self.changed_text(), "We need more votes.")
        for m in range(5, 101, 5):
            self.event(EV_PASS_BY + m // 5 - 1, f"tgcx_whip_pass_{m}", "The Whips Report",
                       f"If the vote were held today, the bill would pass by {m} seats.", "Good.")
        for m in range(0, 101, 5):
            self.event(EV_FAIL_BY + m // 5, f"tgcx_whip_fail_{m}", "The Whips Report",
                       f"If the vote were held today, the bill would fail: Nay leads by {m} seats." if m else
                       "If the vote were held today, the bill would fail: Aye and Nay are tied.", "We need more votes.")
        for q in range(0, 50, 5):
            self.event(EV_NO_QUORUM + q // 5, f"tgcx_whip_quorum_{q}", "The Whips Report",
                       f"If the vote were held today, only {q} seats would vote, short of the quorum of 50.",
                       "We need more votes.")
        for i in self.blocs:
            if not any(self.stance(i, g, f, t) == "m2" for g, f, t in self.bills):
                continue
            self.event(BROKEN_EVENTS[i], f"tgcx_promise_broken_{i}", f"A Promise to the {BLOC.get(i, i)} Broken",
                       f"The law we promised the {BLOC.get(i, i)} was never passed. Their supporters are furious, "
                       f"and their votes will cost us double for {int(self.n('broken_debt_days')) // 365} years.",
                       "We will pay for this.",
                       [f"clr_country_flag = tgcx_debt_{i}",
                        f"any_pop = {{ scaled_militancy = {{ ideology = {i} factor = {self.n('broken_debt_militancy')} }} }}",
                        f"add_country_modifier = {{ name = tgcx_debt_broken_{i} duration = {self.n('broken_debt_days')} }}"],
                       trigger=[f"has_country_flag = tgcx_debt_{i}",
                                f"NOT = {{ has_country_modifier = tgcx_debt_deadline_{i} }}"],
                       polled=True)

        self.modifiers = [("tgcx_debate", 6, "Bill in debate", "The upper house is debating a bill. The vote can be called when this ends."),
                          ("tgcx_bill_cooldown", 6, "Bill recently failed", "A bill failed or was withdrawn: no new bill until this ends."),
                          ("tgcx_favours_tick", 6, "Political favours: this month's collected", "Favours are collected again when this ends.")]
        for i in self.blocs:
            self.modifiers += [(f"tgcx_debt_deadline_{i}", 6, f"Promise to the {BLOC.get(i, i)}: law owed",
                                f"Pass a law the {BLOC.get(i, i)} want before this ends, or the promise is broken."),
                               (f"tgcx_debt_broken_{i}", 6, f"Broken promise to the {BLOC.get(i, i)}",
                                f"Buying the {BLOC.get(i, i)}' votes costs double while this lasts.")]
        for name, _, title, desc in self.modifiers:
            self.text(name, title)
            self.text(f"{name}_desc", desc)

    # --- the favours tick (§5, D11)

    def build_tick(self):
        R = {k: as_dict(v) for k, v in self.L["rate"]}
        flags = []
        eff = [setv("tgcx_rate", self.n("rate_base"))]

        def factor(cond, value, fname):
            flags.append(f"tgcx_rate_{fname}")
            eff.append(when(cond, f"{chg('tgcx_rate', value)} set_country_flag = tgcx_rate_{fname}"))

        for p, v in sorted(R["prestige"].items(), key=lambda kv: int(kv[0])):
            factor(f"prestige = {p}", v, f"prestige_{p}")
        maj = R["majority"]
        for i in self.all_ideologies:
            factor(f"ruling_party_ideology = {i} upper_house = {{ ideology = {i} value = {maj['working']} }}",
                   maj["working_value"], "majority")
            factor(f"ruling_party_ideology = {i} NOT = {{ upper_house = {{ ideology = {i} value = {maj['hostile']} }} }}",
                   maj["hostile_value"], "hostile")
        for m, v in R["modifiers"].items():
            factor(f"has_country_modifier = {m}", v, m)
        for t in ("war_exhaustion", "average_militancy", "average_consciousness"):
            for th, v in R[t].items():
                factor(f"{t} = {th}", v, f"{t}_{th}")
        for opt, v in R["vote_franschise"].items():
            if opt not in self.groups["vote_franschise"]["options"]:
                sys.exit(f"gen_laws: vote_franschise has no option {opt} in TGC")
            factor(f"vote_franschise = {opt}", v, f"franchise_{opt}")
        clear = [f"clr_country_flag = {f}" for f in dict.fromkeys(flags)]
        add = [when(chk("tgcx_rate", k), chg("tgcx_favours", 1)) for k in range(1, int(self.n("rate_max")) + 1)]
        cap = self.n("favours_cap")
        self.decision(
            "tgcx_collect_favours", "Collect political favours",
            "This month's political favours. Base 2, plus prestige, a working majority in the upper house, a "
            "narrow franchise and a skilled political leader. Minus instability, war exhaustion, militancy, "
            "consciousness, a hostile upper house and a broad franchise. Between 0 and 8 a month, up to 100.",
            ["ai = no", "NOT = { has_country_modifier = tgcx_favours_tick }"], [],
            [*clear, *eff, *add, when(chk("tgcx_favours", cap), setv("tgcx_favours", cap)),
             f"add_country_modifier = {{ name = tgcx_favours_tick duration = {self.n('tick_days')} }}"],
            picture="cogs_yellow")

    # --- test aids for U-3 (removed in LAW-1)

    def build_debug(self):
        self.decision("tgcx_debug_show_favours", "[TGCX test] How many favours?",
                      "Test aid for LAW-0: reports the political favours, rounded down to 5.",
                      ["ai = no"], [],
                      [when(f"{chk('tgcx_favours', f)} NOT = {{ {chk('tgcx_favours', f + 5)} }}" if f < 100 else chk("tgcx_favours", 100),
                            f"country_event = {EV_FAVOURS + f // 5}") for f in range(0, 101, 5)],
                      picture="cogs_red")
        for f in range(0, 101, 5):
            self.event(EV_FAVOURS + f // 5, f"tgcx_debug_favours_{f}", "Political Favours",
                       f"Test aid: we have {f} political favours or a few more (under {f + 5})." if f < 100 else
                       "Test aid: we have 100 political favours, the cap.", "Noted.")
        cap = self.n("favours_cap")
        self.decision("tgcx_debug_add_favours", "[TGCX test] +50 favours", "Test aid for LAW-0: adds 50 favours (up to the cap).",
                      ["ai = no"], [], [chg("tgcx_favours", 50), when(chk("tgcx_favours", cap), setv("tgcx_favours", cap))],
                      picture="cogs_red")

    @staticmethod
    def pretty(name):
        return name.replace("_", " ").title().replace("Franschise", "Franchise")

    # --- output

    def files(self):
        f, v, m = self.bill_state
        header = ("# Generated by tools/gen_laws.py from data/tgcx_*.txt and TGC v2.5.2. Do not edit: rerun the script.\n"
                  "# Design: docs/law-design.md. IF emulation everywhere (P16, P21).\n#\n"
                  "# The bill's state, all cleared by every exit (withdraw, pass, veto):\n"
                  f"#   flags:     {' '.join(f)}\n#   variables: {' '.join(v)}\n#   modifiers: {' '.join(m)}\n"
                  "# The country's state, kept between bills: tgcx_favours, tgcx_rate, tgcx_rate_* flags,\n"
                  "#   tgcx_debt_<bloc> flags and the tgcx_debt_deadline_* / tgcx_debt_broken_* / tgcx_favours_tick /\n"
                  "#   tgcx_bill_cooldown modifiers.\n\n")
        decisions = header + "political_decisions = {\n\n" + "\n".join(self.decisions) + "}\n"
        events = header + "\n".join(self.events)
        seen = set()
        loc = ["CODE;ENGLISH;FRENCH;GERMAN;POLISH;SPANISH;ITALIAN;SWEDISH;CZECH;HUNGARIAN;DUTCH;PORTUGUESE;RUSSIAN;FINNISH;x"]
        for key, text in self.loc:
            if key in seen:
                sys.exit(f"gen_laws: localisation key twice: {key}")
            seen.add(key)
            loc.append(f"{key};{text}" + ";" * 13 + "x")
        mods = ("# >>> tgcx\n# Generated by tools/gen_laws.py; appended to TGC's event_modifiers.txt by install_submod.py.\n"
                + "".join(f"{name} = {{\n\ticon = {icon}\n}}\n\n" for name, icon, _, _ in self.modifiers)
                + "# <<< tgcx\n")
        return {
            os.path.join(SUB, "TGCX", "decisions", "tgcx_laws.txt"): decisions,
            os.path.join(SUB, "TGCX", "events", "tgcx_laws.txt"): events,
            os.path.join(SUB, "TGCX", "localisation", "tgcx_laws.csv"): "\n".join(loc) + "\n",
            os.path.join(SUB, "tgcx_event_modifiers.txt"): mods,
        }


def balanced(text):
    depth = 0
    for ch in text:
        depth += ch == "{"
        depth -= ch == "}"
        if depth < 0:
            return False
    return depth == 0


def check_names(tgc):
    """Names in data/tgcx_laws.txt that the base does not define (MOD-2). Vic2
    ignores an unknown name silently, so a law built on another base would
    quietly do nothing."""
    laws, affinity, groups, ideologies = load(tgc)
    g = Gen(laws, affinity, groups, ideologies)
    governments = set()
    gov_file = os.path.join(tgc, "common", "governments.txt")
    if os.path.isfile(gov_file):
        governments = {name for name, body in parse(read(gov_file)) if isinstance(body, list)}
    bad = [f"issue group {grp}" for grp, _, _ in g.bills if grp not in groups]
    bad += [f"government {name}" for name in g.limited + g.full if name not in governments]
    bad += [f"ideology {name}" for name in g.distrust if name not in ideologies]
    return bad


def generate(tgc, debt_days=None):
    bad = check_names(tgc)
    if bad:
        sys.exit(f"gen_laws: {tgc} does not define {', '.join(bad[:6])}: laws are TGC v2.5.2 only (D1, D7)")
    laws, *rest = load(tgc)
    if debt_days:  # test builds only (U-3 point 6): let a promise expire within a test session
        laws = [(k, str(debt_days) if k == "debt_days" else v) for k, v in laws]
    g = Gen(laws, *rest)
    g.build()
    out = g.files()
    for path, text in out.items():
        if path.endswith(".txt") and not balanced(text):
            sys.exit(f"gen_laws: unbalanced braces in {path}")
    return g, out


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--tgc", default=DEFAULT_TGC)
    ap.add_argument("--debt-days", type=int, help="test build: override debt_days (rerun without it before committing)")
    a = ap.parse_args()
    _, out = generate(a.tgc, a.debt_days)
    for path, text in out.items():
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "wb") as f:
            f.write(text.encode("cp1252"))
        print(f"wrote {os.path.relpath(path, ROOT)} ({len(text.splitlines())} lines)")


if __name__ == "__main__":
    main()
