#!/usr/bin/env python3
"""Walk the generated law decisions for the 1836 United Kingdom (LAW-0 step 5).

    python tools/test_gen_laws.py

A small interpreter for the subset of Vic2 script that tools/gen_laws.py
writes (random_owned IF emulation, flags, variables, modifiers, the upper
house) runs the generated decisions/tgcx_laws.txt as a player would click
them, and checks the numbers in docs/law-design.md §4-§6:

    presenting free_press        yes 10, no 90, margin -80, quorum 100
    after the §5 purchases       yes 30, no 20, margin 10,  quorum 50, 35 favours spent
    the Crown (hms_government)   vetoes a Liberal government's bill; signs after an audience

It checks the script's logic, not the engine: what the game really does is
U-3. Exits with 1 on the first difference.
"""

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from tgc_scan import parse, read  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


class Country:
    def __init__(self, **kw):
        self.flags, self.vars, self.mods = set(), {}, set()
        self.events, self.laws = [], {}
        self.__dict__.update(kw)

    # --- triggers

    def test(self, items):
        return all(self.cond(k, v) for k, v in items)

    def cond(self, k, v):
        if k == "AND":
            return self.test(v)
        if k == "OR":
            return any(self.cond(kk, vv) for kk, vv in v)
        if k == "NOT":  # Vic2: none of them
            return not any(self.cond(kk, vv) for kk, vv in v)
        if k == "ai":
            return v == "no"
        if k == "has_country_flag":
            return v in self.flags
        if k == "has_country_modifier":
            return v in self.mods
        if k == "check_variable":
            d = dict(v)
            return self.vars.get(d["which"], 0) >= float(d["value"])
        if k == "upper_house":
            d = dict(v)
            return self.house.get(d["ideology"], 0) >= float(d["value"])
        if k == "government":
            return self.government == v
        if k == "ruling_party_ideology":
            return self.ruling == v
        if k in ("prestige", "war_exhaustion", "average_militancy", "average_consciousness"):
            return getattr(self, k) >= float(v)
        if k in self.laws:
            return self.laws[k] == v
        raise SystemExit(f"test_gen_laws: unknown trigger {k}")

    # --- effects

    def run(self, items):
        for k, v in items:
            if k == "random_owned":
                d = dict(v)
                if self.test(dict(d["limit"])["owner"]):
                    self.run(d["owner"])
            elif k == "set_country_flag":
                self.flags.add(v)
            elif k == "clr_country_flag":
                self.flags.discard(v)
            elif k == "set_variable":
                d = dict(v)
                self.vars[d["which"]] = float(d["value"])
            elif k == "change_variable":
                d = dict(v)
                self.vars[d["which"]] = self.vars.get(d["which"], 0) + float(d["value"])
            elif k == "add_country_modifier":
                self.mods.add(dict(v)["name"])
            elif k == "remove_country_modifier":
                self.mods.discard(v)
            elif k == "country_event":
                self.events.append(int(v))
            elif k in ("political_reform", "social_reform"):
                self.reform = v
            else:
                raise SystemExit(f"test_gen_laws: unknown effect {k}")


def main():
    text = read(os.path.join(ROOT, "submod", "TGCX", "decisions", "tgcx_laws.txt"))
    decisions = {name: dict(body) for name, body in dict(parse(text))["political_decisions"]}
    failures = []

    def click(c, name, must_allow=True):
        d = decisions[name]
        if not c.test(d["potential"]):
            failures.append(f"{name}: not visible")
            return
        if c.test(d["allow"]) != must_allow:
            failures.append(f"{name}: allow is {not must_allow}, expected {must_allow}")
            return
        if must_allow:
            c.run(d["effect"])

    def expect(c, what, **want):
        got = {k: c.vars.get(f"tgcx_{k}", 0) for k in want}
        ok = all(got[k] == v for k, v in want.items())
        print(f"{'ok  ' if ok else 'FAIL'} {what}: {got}")
        if not ok:
            failures.append(f"{what}: got {got}, want {want}")

    def uk():
        return Country(house={"conservative": 0.83, "liberal": 0.12, "reactionary": 0.05},
                       government="hms_government", ruling="liberal", prestige=250, war_exhaustion=0,
                       average_militancy=0.9, average_consciousness=1.4,
                       laws={"press_rights": "censored_press", "vote_franschise": "wealth_voting"})

    # The monthly tick: base 2 + prestige 250 (2 of 3 steps) - a hostile house (Whigs 12 %) = 3.
    c = uk()
    click(c, "tgcx_collect_favours")
    expect(c, "favours tick, 1836 United Kingdom", rate=3, favours=3)
    if decisions["tgcx_collect_favours"] and c.test(decisions["tgcx_collect_favours"]["potential"]):
        failures.append("tick: still available in the same month")

    # The bill, the purchases of §5, the promise, the Crown.
    c = uk()
    c.vars["tgcx_favours"] = 48
    click(c, "tgcx_law_press_rights_free_press")
    expect(c, "presenting free_press", yes=5 * 2, no=90, margin=-80, quorum=100)
    for _ in range(10):
        click(c, "tgcx_buy_abstain_conservative_m1")
    for _ in range(3):
        click(c, "tgcx_buy_vote_conservative_m1")
    expect(c, "10 abstentions + 3 votes", yes=25, no=25, margin=0, quorum=50, spent=35, left_conservative=20)
    click(c, "tgcx_promise_reactionary")
    expect(c, "reactionaries promised", yes=30, no=20, margin=10, quorum=50)
    click(c, "tgcx_count_votes")
    expect(c, "recount", yes=30, no=20, margin=10, quorum=50)
    if c.events[-1] != 420000111:
        failures.append(f"whip count: event {c.events[-1]}, want 420000111 (passes by 10)")

    # The same bill with the 25-seat lots: 4 clicks instead of 13.
    lots = uk()
    lots.vars["tgcx_favours"] = 48
    click(lots, "tgcx_law_press_rights_free_press")
    click(lots, "tgcx_buy_vote_conservative_m1_25")
    click(lots, "tgcx_buy_abstain_conservative_m1_25")
    click(lots, "tgcx_buy_abstain_conservative_m1")
    click(lots, "tgcx_buy_abstain_conservative_m1")
    expect(lots, "25-seat lots, 4 clicks", yes=35, no=30, margin=5, quorum=65, spent=39, left_conservative=25)
    click(lots, "tgcx_count_votes")
    expect(lots, "recount after the lots", yes=35, no=30, margin=5, quorum=65)

    click(c, "tgcx_call_vote", must_allow=False)  # the debate is still on
    c.mods.discard("tgcx_debate")
    veto = Country(**{k: (set(v) if isinstance(v, set) else dict(v) if isinstance(v, dict) else list(v) if isinstance(v, list) else v)
                      for k, v in c.__dict__.items()})
    click(veto, "tgcx_call_vote")
    if veto.events[-1] != 420000101 or getattr(veto, "reform", None) or "tgcx_law_active" in veto.flags:
        failures.append(f"veto: events {veto.events[-3:]}, reform {getattr(veto, 'reform', None)}")
    else:
        print("ok   a Liberal bill under hms_government without an audience: vetoed, bill cleared")
    if "tgcx_debt_reactionary" not in veto.flags or "tgcx_bill_cooldown" not in veto.mods:
        failures.append("veto: the debt or the cooldown is missing")

    c.vars["tgcx_favours"] = 48 - 35 + 10
    click(c, "tgcx_audience")
    click(c, "tgcx_call_vote")
    if getattr(c, "reform", None) != "free_press" or c.events[-1] != 420000100:
        failures.append(f"pass: reform {getattr(c, 'reform', None)}, events {c.events[-3:]}")
    else:
        print("ok   after an audience: political_reform = free_press, 'The Bill Passes'")
    left = [f for f in c.flags if f.startswith(("tgcx_law", "tgcx_stance", "tgcx_promised", "tgcx_crown", "tgcx_outcome"))]
    left += [v for v in ("yes", "no", "margin", "quorum", "spent") if c.vars.get(f"tgcx_{v}", 0)]
    if left:
        failures.append(f"cleanup: still set {left}")
    else:
        print("ok   every bill flag and variable cleared; the debt to the Reactionaries stands:",
              "tgcx_debt_reactionary" in c.flags and "tgcx_debt_deadline_reactionary" in c.mods)

    if failures:
        print("\n".join(["", "FAILED:"] + failures))
        sys.exit(1)
    print("\nALL OK")


if __name__ == "__main__":
    main()
