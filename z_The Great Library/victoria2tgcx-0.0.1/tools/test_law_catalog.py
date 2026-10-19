#!/usr/bin/env python3
"""Exercise LAW-1 generated script without running the game or approving data."""

from pathlib import Path
import sys
import tempfile
import unittest

from gen_laws import BROKEN_EVENTS, DEFAULT_TGC, ROOT, generate
from gen_law_catalog import CATALOG, EV_CATALOG_COUNT, catalog_data, generate_catalog, validate
from tgcx_law_support import SupportRule, native_weighted_support
from test_gen_laws import Country
from tgc_scan import parse, read


class LawCountry(Country):
    tgc_allow_triggers = set()

    def cond(self, key, value):
        if key == "militancy":
            return self.average_militancy >= float(value)
        if key in ("social_movement_strength", "political_movement_strength"):
            return getattr(self, key, 0) >= float(value)
        if key == "upper_house":
            d = dict(value)
            return int(self.house.get(d["ideology"], 0)*32768) >= int(float(d["value"])*32768)
        if key == "has_global_flag":
            return value in getattr(self, "global_flags", set())
        if key == "year":
            return getattr(self, "year", 1836) >= int(value)
        try:
            return super().cond(key, value)
        except SystemExit:
            # Conditions only TGC's own option allow blocks use (D14 offer flags):
            # false unless the test states them, so our own typos still fail.
            if key not in self.tgc_allow_triggers:
                raise
            return getattr(self, "tgc_conditions", {}).get(key, False)

    def run(self, items):
        for key, value in items:
            if key == "any_pop":
                self.punishments = getattr(self, "punishments", []) + [value]
            elif key == "country_event":
                super().run([(key, value)])
                event = self.definitions[int(value)]
                if "immediate" in event:
                    self.run(event["immediate"])
            else:
                super().run([(key, value)])


class CatalogTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.gen, cls.files, cls.reviews = generate_catalog()
        decisions = next(text for path, text in cls.files.items() if Path(path).parent.name == "decisions")
        cls.decisions = {k: dict(v) for k, v in dict(parse(decisions))["political_decisions"]}
        events = next(text for path, text in cls.files.items() if Path(path).parent.name == "events")
        cls.events = {int(dict(v)["id"]): dict(v) for _, v in parse(events)}
        cls.event_trees = {int(dict(v)["id"]): v for _, v in parse(events)}
        names = set()

        def walk(items):
            for k, v in items:
                if k not in ("AND", "OR", "NOT"):
                    names.add(k)
                if isinstance(v, list):
                    walk(v)
        for g in cls.gen.chosen:
            for opt in cls.gen.groups[g]["options"]:
                walk(dict(cls.gen.groups[g]["body"][opt]).get("allow", []))
        LawCountry.tgc_allow_triggers = names - set(cls.gen.groups)

    def country(self, **kw):
        state = dict(house={"liberal": 1.0}, government="democracy", ruling="liberal",
                     prestige=250, war_exhaustion=0, average_militancy=0,
                     average_consciousness=0,
                     laws={g: body["options"][0] for g, body in self.gen.groups.items()})
        state.update(kw)
        c = LawCountry(**state)
        c.definitions = self.events
        c.event_trees = self.event_trees
        c.vars["tgcx_favours"] = 100
        return c

    def click(self, c, name):
        d = self.decisions[name]
        self.assertTrue(c.test(d["potential"]), f"{name}: potential")
        self.assertTrue(c.test(d["allow"]), f"{name}: allow")
        c.run(d["effect"])

    def present(self, c, group, source, direction="up"):
        c.laws[group] = source
        self.click(c, f"tgcx_bill_{group}_{direction}")

    def vote(self, c):
        c.mods.discard("tgcx_debate")
        self.click(c, "tgcx_call_vote")

    def test_inventory_ids_and_no_debug_cheats(self):
        self.assertEqual(len(self.gen.chosen), 23)
        self.assertEqual(sum(self.gen.groups[g]["category"] == "political_reforms" for g in self.gen.chosen), 14)
        self.assertEqual(len(self.gen.bills), 144)
        self.assertEqual(sum(n.startswith("tgcx_bill_") for n in self.decisions), 46)
        self.assertEqual(len(self.gen.blocs), 9)
        self.assertFalse(any(n.startswith("tgcx_debug_") for n in self.decisions))
        self.assertEqual(BROKEN_EVENTS["reactionary"], 420000105)
        validate(self.files)
        # All nine debts can occur across this complete catalogue. No index-based collisions.
        self.assertTrue(set(BROKEN_EVENTS.values()).issuperset(
            n for n, event in self.events.items() if event["title"].startswith("tgcx_promise_broken_")))

    def test_law0_regeneration_is_unchanged(self):
        _, files = generate(DEFAULT_TGC)
        for path, text in files.items():
            self.assertEqual(Path(path).read_bytes(), text.encode("cp1252"), path)

    def test_all_144_routes_select_exactly_one_target_and_source(self):
        # Walk admission effects for every route. TGC's individual allow trees are
        # verified separately; synthetic route fixtures do not claim all are reachable in 1836.
        for group, frm, to in self.gen.bills:
            with self.subTest(group=group, frm=frm, to=to):
                c = self.country()
                c.laws[group] = frm
                opts = self.gen.groups[group]["options"]
                direction = "up" if opts.index(to) > opts.index(frm) else "down"
                d = self.decisions[f"tgcx_bill_{group}_{direction}"]
                self.assertTrue(c.test(d["potential"]))
                c.run(d["effect"])
                targets = {f for f in c.flags if f.startswith("tgcx_law_") and f != "tgcx_law_active"}
                sources = {f for f in c.flags if f.startswith("tgcx_from_")}
                self.assertEqual(targets, {f"tgcx_law_{group}_{to}"})
                self.assertEqual(sources, {f"tgcx_from_{group}_{frm}"})
                self.assertEqual(c.vars["tgcx_gui_bill_id"], self.gen.bills.index((group, frm, to))+1)
                self.assertEqual(c.vars["tgcx_gui_active"], 1)
                for ideology in self.gen.blocs:
                    self.assertEqual(sum(f.startswith(f"tgcx_stance_{ideology}_") for f in c.flags), 1)

    def test_option_allows_are_preserved_in_each_direction(self):
        for group in self.gen.chosen:
            opts = self.gen.groups[group]["options"]
            for direction, pairs in (("up", zip(opts, opts[1:])), ("down", zip(opts[1:], opts))):
                choices = self.decisions[f"tgcx_bill_{group}_{direction}"]["allow"][0]
                branches = choices[1] if choices[0] == "OR" else [choices]
                for (frm, to), (_, branch) in zip(pairs, branches):
                    self.assertEqual(branch[0], (group, frm))
                    expected = dict(self.gen.groups[group]["body"][to]).get("allow", [])
                    self.assertEqual(branch[1:], expected)

    def test_boundaries_active_bill_and_cooldown(self):
        for group in self.gen.chosen:
            c = self.country()
            c.laws[group] = self.gen.groups[group]["options"][0]
            self.assertFalse(c.test(self.decisions[f"tgcx_bill_{group}_down"]["potential"]))
            c.laws[group] = self.gen.groups[group]["options"][-1]
            self.assertFalse(c.test(self.decisions[f"tgcx_bill_{group}_up"]["potential"]))
        c = self.country()
        self.present(c, "press_rights", "censored_press")
        self.assertFalse(c.test(self.decisions["tgcx_bill_public_meetings_up"]["potential"]))
        self.click(c, "tgcx_withdraw")
        self.assertFalse(c.test(self.decisions["tgcx_bill_press_rights_up"]["potential"]))
        self.assertEqual(c.vars["tgcx_favours"], 100)

    def test_political_social_and_reverse_pass_use_correct_effect(self):
        cases = [("press_rights", "censored_press", "free_press", "up", "liberal"),
                 ("press_rights", "censored_press", "state_press", "down", "reactionary"),
                 ("health_care", "no_health_care", "trinket_health_care", "up", "socialist")]
        for group, frm, to, direction, supporter in cases:
            with self.subTest(group=group, target=to):
                c = self.country(house={supporter: 1.0})
                c.flags.add("medicine_invented")
                self.present(c, group, frm, direction)
                self.vote(c)
                self.assertEqual(c.reform, to)
                self.assertEqual(c.events[-1], 420000100)
                self.assertFalse(any(f.startswith(("tgcx_stance_", "tgcx_from_", "tgcx_law_")) for f in c.flags))

    def test_target_allow_current_law_and_government_rechecked_at_vote(self):
        for change in ("blocker", "law", "government", "technology"):
            c = self.country(house={"socialist": 1.0})
            c.flags.add("medicine_invented")
            self.present(c, "health_care", "no_health_care")
            if change == "blocker": c.flags.add("soc_reform_blocker")
            if change == "law": c.laws["health_care"] = "low_health_care"
            if change == "government": c.government = "absolute_monarchy"
            if change == "technology": c.flags.discard("medicine_invented")
            self.vote(c)
            self.assertFalse(hasattr(c, "reform"), change)
            self.assertEqual(c.events[-1], 420000102, change)
            self.assertIn("tgcx_law_active", c.flags)

    def test_prices_fresh_seat_count_and_empty_blocs(self):
        c = self.country(house={"conservative": .85, "liberal": .1, "reactionary": .05})
        self.present(c, "press_rights", "censored_press")
        self.assertFalse(c.test(self.decisions["tgcx_buy_abstain_communist_m2"]["potential"]))
        self.click(c, "tgcx_buy_vote_conservative_m1_25")
        self.assertEqual(c.vars["tgcx_favours"], 75)
        self.assertEqual(c.vars["tgcx_yes"], 35)
        c.house = {"conservative": .05, "liberal": .95}
        # The old cached left count permits a 25-seat click, but the fresh effect
        # must reject spending when the bloc has shrunk below the lot.
        self.click(c, "tgcx_buy_abstain_conservative_m1_25")
        self.assertEqual(c.vars["tgcx_favours"], 75)
        self.assertEqual(c.vars["tgcx_buy_conservative_total"], 25)

    def test_promise_survives_withdraw_and_is_paid_by_later_favourable_law(self):
        c = self.country(house={"reactionary": .05, "liberal": .95})
        self.present(c, "press_rights", "censored_press")
        self.click(c, "tgcx_promise_reactionary")
        self.click(c, "tgcx_withdraw")
        self.assertIn("tgcx_debt_reactionary", c.flags)
        c.mods.discard("tgcx_bill_cooldown")
        c.house = {"reactionary": 1.0}
        self.present(c, "press_rights", "censored_press", "down")
        self.vote(c)
        self.assertNotIn("tgcx_debt_reactionary", c.flags)
        self.assertNotIn("tgcx_debt_deadline_reactionary", c.mods)

    def test_expired_debt_event_and_double_price(self):
        c = self.country(house={"reactionary": .05, "liberal": .95})
        self.present(c, "press_rights", "censored_press")
        self.click(c, "tgcx_promise_reactionary")
        ev = self.events[420000105]
        self.assertFalse(c.test(ev["trigger"]))
        c.mods.discard("tgcx_debt_deadline_reactionary")
        self.assertTrue(c.test(ev["trigger"]))
        c.run(ev["option"][1:])
        self.assertIn("tgcx_debt_broken_reactionary", c.mods)
        self.assertNotIn("tgcx_debt_reactionary", c.flags)
        self.assertEqual(dict(c.punishments[0])["scaled_militancy"], [("ideology", "reactionary"), ("factor", "2")])
        self.click(c, "tgcx_withdraw")
        c.mods.discard("tgcx_bill_cooldown")
        self.present(c, "press_rights", "censored_press")
        self.assertFalse(c.test(self.decisions["tgcx_buy_abstain_reactionary_m2"]["potential"]))
        self.click(c, "tgcx_buy_abstain_reactionary_m2_x2")
        self.assertEqual(c.vars["tgcx_favours"], 90)

    def test_legacy_law0_active_bill_can_finish(self):
        c = self.country()
        c.laws["press_rights"] = "censored_press"
        c.flags.update({"tgcx_law_active", "tgcx_law_press_rights_free_press", "tgcx_stance_liberal_p2",
                        "tgcx_stance_conservative_m1", "tgcx_stance_reactionary_m2"})
        c.vars.update(tgcx_margin=100, tgcx_quorum=100)
        self.vote(c)
        self.assertEqual(c.reform, "free_press")

    def test_pending_review_and_malformed_data_are_rejected(self):
        self.assertTrue(all(status == "approved" for status in self.reviews.values()))
        catalog_data(release=True)
        catalog_data(selected=["press_rights"], release=True)
        original = CATALOG.read_text()
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / "tgcx_pending.txt"
            path.write_text(original.replace("review = approved", "review = pending", 1))
            with self.assertRaisesRegex(ValueError, "user-approved"):
                catalog_data(path=path, release=True)
        for text in (original.replace("intensity = 1", "intensity = 3", 1),
                     original.replace("ideal = status_quo", "ideal = nonexistent", 1),
                     original + original):
            with tempfile.TemporaryDirectory() as folder:
                path = Path(folder) / "tgcx_invalid.txt"
                path.write_text(text)
                with self.assertRaises(ValueError):
                    catalog_data(path=path)

    def test_native_thresholds_and_ruling_party_rules(self):
        c = self.country()
        for militancy, expected in ((0, 0), (3, 100), (4, 100), (5, 200), (9, 600)):
            c.average_militancy = militancy
            self.assertEqual(self.gen.support["conservative"]["add_political_reform"].evaluate(c.test), expected)
        c.average_militancy = 0
        for strength, expected in ((.299, 0), (.3, 100), (.4, 100), (.5, 200), (.9, 600)):
            c.political_movement_strength = strength
            self.assertEqual(self.gen.support["conservative"]["add_political_reform"].evaluate(c.test), expected)
        c.political_movement_strength = 0
        c.social_movement_strength = .7
        self.assertEqual(self.gen.support["conservative"]["add_social_reform"].evaluate(c.test), 600)
        self.assertEqual(self.gen.support["liberal"]["add_social_reform"].evaluate(c.test), 400)
        self.assertEqual(self.gen.support["anarcho_liberal"]["add_social_reform"].evaluate(c.test), 1000)
        for i, mode in (("fascist", "add_political_reform"), ("fascist", "remove_social_reform"),
                        ("communist", "add_social_reform"), ("anarcho_liberal", "remove_political_reform")):
            c.ruling = "liberal"
            self.assertEqual(self.gen.support[i][mode].evaluate(c.test), 0)
            c.ruling = i
            self.assertEqual(self.gen.support[i][mode].evaluate(c.test), 1000)

    def test_group_prefix_and_fixed_point_reference(self):
        rule = SupportRule(parse("base = 0 group = { modifier = { factor = .1 militancy = 5 } "
                                 "modifier = { factor = .2 militancy = 1 } }"))
        c = self.country(average_militancy=2)
        self.assertEqual(rule.evaluate(c.test), 0)
        c.average_militancy = 5
        self.assertEqual(rule.evaluate(c.test), 300)
        self.assertEqual(native_weighted_support({"c": 27197, "l": 3932}, {"c": 600, "l": 1000}), 20249)

    def test_pressure_recount_and_fresh_spending_guard(self):
        c = self.country(house={"conservative": .85, "liberal": .1, "reactionary": .05})
        self.present(c, "press_rights", "censored_press")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (10, 90))
        c.average_militancy = 9
        self.click(c, "tgcx_buy_vote_conservative_m1_25")
        self.assertEqual(c.vars["tgcx_favours"], 100)  # stale pressure refuses spending
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (60, 40))
        self.click(c, "tgcx_buy_vote_conservative_m1_25")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (85, 15))
        self.click(c, "tgcx_buy_abstain_conservative_m1")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"], c.vars["tgcx_quorum"]), (85, 10, 95))
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"], c.vars["tgcx_quorum"]), (85, 10, 95))
        c.average_militancy = 0
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (35, 60))

    def test_friendly_native_nay_can_be_bought_and_fully_supportive_bloc_cannot(self):
        c = self.country(house={"socialist": 1.0})
        self.present(c, "press_rights", "censored_press")
        self.assertEqual(c.vars["tgcx_yes"], 0)
        self.click(c, "tgcx_buy_vote_socialist_p2_25")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"], c.vars["tgcx_favours"]), (25, 75, 90))
        c = self.country(house={"anarcho_liberal": 1.0})
        c.flags.add("medicine_invented")
        self.present(c, "health_care", "no_health_care")
        self.assertEqual(c.vars["tgcx_yes"], 100)
        self.assertFalse(c.test(self.decisions["tgcx_buy_abstain_anarcho_liberal_m2"]["allow"]))
        self.assertFalse(c.test(self.decisions["tgcx_promise_anarcho_liberal"]["allow"]))

    def test_allocation_conservation_and_clipped_negotiations(self):
        import random
        rng = random.Random(1012)
        allocation = parse(" ".join(self.gen.allocation_block()))
        for _ in range(200):
            cuts = sorted([0, 32768, *[rng.randrange(32769) for _ in range(8)]])
            c = self.country(house={i: (b-a)/32768 for i, a, b in zip(self.gen.blocs, cuts, cuts[1:])})
            c.run(allocation)
            self.assertEqual(c.vars["tgcx_house_total"], 100)
            seats = [c.vars[f"tgcx_seats_{i}"] for i in self.gen.blocs]
            self.assertEqual(sum(seats), 100)
            self.assertTrue(all(0 <= n <= 100 and n % 5 == 0 for n in seats))
            for i in self.gen.blocs:
                self.assertLessEqual(abs(c.vars[f"tgcx_seats_{i}"]-100*c.house[i]), 5.01)
        c = self.country(house={"conservative": .85, "liberal": .15})
        self.present(c, "press_rights", "censored_press")
        self.click(c, "tgcx_buy_vote_conservative_m1_25")
        self.click(c, "tgcx_buy_abstain_conservative_m1_25")
        c.house = {"conservative": .1, "liberal": .9}
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"], c.vars["tgcx_quorum"]), (100, 0, 100))
        self.assertEqual(c.vars["tgcx_left_conservative"], 0)
        self.assertEqual(c.vars["tgcx_buy_conservative_total"], 50)  # no refund, clipped while chamber is small

    def test_fresh_vote_can_pass_after_cached_defeat(self):
        c = self.country(house={"conservative": 1.0}, average_militancy=0)
        self.present(c, "press_rights", "censored_press")
        self.assertEqual(c.vars["tgcx_margin"], -100)
        c.average_militancy = 9
        self.vote(c)
        self.assertEqual(c.reform, "free_press")

    def test_partial_native_support_promise_restores_abstentions_once(self):
        c = self.country(house={"communist": 1.0}, political_movement_strength=.8)
        self.present(c, "press_rights", "censored_press")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (60, 40))
        self.click(c, "tgcx_buy_abstain_communist_m2_25")
        self.click(c, "tgcx_promise_communist")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"], c.vars["tgcx_quorum"]), (100, 0, 100))
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"], c.vars["tgcx_quorum"]), (100, 0, 100))
        self.assertEqual(c.vars["tgcx_spent"], 25)
        c = self.country(house={"communist": 1.0}, political_movement_strength=.8)
        self.present(c, "press_rights", "censored_press")
        self.click(c, "tgcx_buy_abstain_communist_m2_25")
        for _ in range(3):
            self.click(c, "tgcx_buy_abstain_communist_m2")
        self.assertEqual(c.vars["tgcx_left_communist"], 0)
        self.click(c, "tgcx_promise_communist")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_quorum"]), (100, 100))

    def test_over_under_rounding_and_floor_boundary_spending_guard(self):
        for small, big in ((.06, .52), (.04, .68)):
            c = self.country(house=dict(zip(self.gen.blocs, [big, *([small]*8)])))
            c.run(parse(" ".join(self.gen.allocation_block())))
            self.assertEqual(c.vars["tgcx_house_total"], 100)
            self.assertEqual(sum(c.vars[f"tgcx_seats_{i}"] for i in self.gen.blocs), 100)
        c = self.country(house={"conservative": .849, "liberal": .151})
        self.present(c, "press_rights", "censored_press")
        c.house = {"conservative": .851, "liberal": .149}  # same nearest buckets; floor sides changed
        self.click(c, "tgcx_buy_vote_conservative_m1_25")
        self.assertEqual(c.vars["tgcx_favours"], 100)
        self.click(c, "tgcx_count_votes")
        self.click(c, "tgcx_buy_vote_conservative_m1_25")
        self.assertEqual(c.vars["tgcx_favours"], 75)

    def test_ruling_party_and_movements_refresh_actual_counts(self):
        c = self.country(house={"fascist": 1.0}, ruling="fascist")
        self.present(c, "press_rights", "censored_press")
        self.assertEqual(c.vars["tgcx_yes"], 100)
        c.ruling = "liberal"
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (0, 100))
        c = self.country(house={"liberal": 1.0})
        c.flags.add("medicine_invented")
        self.present(c, "health_care", "no_health_care")
        self.assertEqual(c.vars["tgcx_yes"], 0)
        c.social_movement_strength = .9
        self.click(c, "tgcx_count_votes")
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (60, 40))

    def test_empty_house_refuses_enactment_and_count_cleanup(self):
        c = self.country(house={})
        self.present(c, "press_rights", "censored_press")
        self.assertEqual(c.vars["tgcx_house_total"], 0)
        self.vote(c)
        self.assertEqual(c.events[-1], 420000102)
        self.assertFalse(hasattr(c, "reform"))
        self.click(c, "tgcx_withdraw")
        self.assertFalse(any(f.startswith(("tgcx_bucket_", "tgcx_allocated_", "tgcx_support_")) for f in c.flags))
        for v in ("seats", "support", "current_support", "base_yes", "opposed"):
            self.assertTrue(all(c.vars.get(f"tgcx_{v}_{i}", 0) == 0 for i in self.gen.blocs))

    def test_generated_program_size_and_idempotence(self):
        self.assertLess(sum(len(s.encode("cp1252")) for s in self.files.values()), 40*1024*1024)
        _, files, _ = generate_catalog(release=True)
        self.assertEqual(self.files, files)

    def test_gui_metadata_migrates_and_clears_with_the_bill(self):
        c = self.country(house={"conservative": .83, "liberal": .12, "reactionary": .05},
                         government="hms_government")
        self.present(c, "press_rights", "censored_press")
        expected_id = self.gen.bills.index(("press_rights", "censored_press", "free_press"))+1
        for key in list(c.vars):
            if key.startswith("tgcx_gui_"): del c.vars[key]
        self.click(c, "tgcx_count_votes")
        self.assertEqual(c.vars["tgcx_gui_schema"], 1)
        self.assertEqual(c.vars["tgcx_gui_bill_id"], expected_id)
        self.assertEqual(c.vars["tgcx_gui_stance_conservative"], -1)
        self.click(c, "tgcx_promise_reactionary")
        self.assertEqual(c.vars["tgcx_gui_promised_reactionary"], 1)
        self.click(c, "tgcx_audience")
        self.assertEqual(c.vars["tgcx_gui_crown_audience"], 1)
        self.click(c, "tgcx_withdraw")
        self.assertEqual(c.vars["tgcx_gui_active"], 0)
        self.assertEqual(c.vars["tgcx_gui_bill_id"], 0)
        self.assertEqual(c.vars["tgcx_gui_schema"], 1)  # Country schema survives cleanup.
        # A queued obsolete recovery after withdrawal cannot resurrect GUI activity.
        c.run(self.events[EV_CATALOG_COUNT]["option"][1:])
        self.assertEqual(c.vars["tgcx_gui_active"], 0)

    def test_bill_sent_decisions_recheck_their_own_conditions(self):
        # The native decision click does not test potential/allow; the effect must.
        c = self.country(house={"conservative": .85, "liberal": .10, "reactionary": .05},
                         government="hms_government", ruling="liberal")
        self.present(c, "press_rights", "censored_press")
        self.assertEqual(c.vars["tgcx_gui_crown_veto"], 1)
        self.assertEqual(c.vars["tgcx_gui_crown_signs"], 0)
        self.assertEqual(c.vars["tgcx_gui_ruling"], self.gen.all_ideologies.index("liberal") + 1)
        self.assertEqual(c.vars["tgcx_gui_government"],
                         (self.gen.limited + self.gen.full).index("hms_government") + 1)
        law = c.laws["press_rights"]
        c.run(self.decisions["tgcx_call_vote"]["effect"])      # still in debate
        self.assertEqual(c.laws["press_rights"], law)
        self.assertIn("tgcx_law_active", c.flags)
        c.vars["tgcx_favours"] = 5
        c.run(self.decisions["tgcx_audience"]["effect"])       # cannot pay
        self.assertEqual(c.vars["tgcx_favours"], 5)
        self.assertNotIn("tgcx_crown_signs", c.flags)
        c.vars["tgcx_favours"] = 100
        self.click(c, "tgcx_audience")
        self.assertEqual((c.vars["tgcx_favours"], c.vars["tgcx_gui_crown_signs"]), (90, 1))
        c.run(self.decisions["tgcx_audience"]["effect"])       # repeated command
        self.assertEqual(c.vars["tgcx_favours"], 90)
        self.click(c, "tgcx_withdraw")
        self.assertNotIn("tgcx_law_active", c.flags)
        c.mods.discard("tgcx_bill_cooldown")
        c.run(self.decisions["tgcx_withdraw"]["effect"])       # no bill: no new cooldown
        self.assertNotIn("tgcx_bill_cooldown", c.mods)

    def test_favour_collection_counts_ticks_and_breaks_down_its_rate(self):
        c = self.country(house={"liberal": .6, "conservative": .4}, ruling="liberal", prestige=60)
        c.vars["tgcx_favours"] = 0
        self.click(c, "tgcx_collect_favours")
        self.assertEqual(c.vars["tgcx_favours_ticks"], 1)
        self.assertEqual(c.vars["tgcx_gui_legislature"], 1)      # the Reforms tab may offer bills
        parts = {p: c.vars[f"tgcx_gui_rate_{p}"] for p in self.gen.RATE_PARTS}
        self.assertEqual(c.vars["tgcx_rate"], int(self.gen.n("rate_base")) + sum(parts.values()))
        self.assertEqual((parts["prestige"], parts["house"]), (1, 1))
        favours = c.vars["tgcx_favours"]
        c.run(self.decisions["tgcx_collect_favours"]["effect"])  # duplicate within the month
        self.assertEqual((c.vars["tgcx_favours"], c.vars["tgcx_favours_ticks"]), (favours, 1))
        c.mods.discard("tgcx_favours_tick")
        self.click(c, "tgcx_collect_favours")
        self.assertEqual(c.vars["tgcx_favours_ticks"], 2)

    def test_collection_writes_the_reforms_offer_from_tgc_allow(self):
        # D14: 1 + the current law whose next step passes the target option allow.
        c = self.country()
        allow = {g: dict(self.gen.groups[g]["body"][self.gen.groups[g]["options"][1]]).get("allow", [])
                 for g in self.gen.chosen}
        self.click(c, "tgcx_collect_favours")
        values = {g: c.vars[f"tgcx_gui_offer_{g}"] for g in self.gen.chosen}
        self.assertEqual(values, {g: 1 if c.test(allow[g]) else 0 for g in self.gen.chosen})
        self.assertEqual(set(values.values()), {0, 1}, "both an offered and a blocked first step")
        g = next(g for g, v in values.items() if v == 1)
        c.laws[g] = self.gen.groups[g]["options"][1]
        second = dict(self.gen.groups[g]["body"][self.gen.groups[g]["options"][2]]).get("allow", [])             if len(self.gen.groups[g]["options"]) > 2 else None
        c.mods.discard("tgcx_favours_tick")
        self.click(c, "tgcx_collect_favours")
        self.assertEqual(c.vars[f"tgcx_gui_offer_{g}"], 2 if second is not None and c.test(second) else 0)
        c.laws[g] = self.gen.groups[g]["options"][-1]                 # no next step
        c.mods.discard("tgcx_favours_tick")
        self.click(c, "tgcx_collect_favours")
        self.assertEqual(c.vars[f"tgcx_gui_offer_{g}"], 0)

    def test_reports_select_one_event_without_conditional_options(self):
        # The game screenshot showed all option triggers ignored. Do not teach
        # the interpreter a UI capability that the real engine did not provide.
        for eid, tree in self.event_trees.items():
            options = [v for k, v in tree if k == "option"]
            self.assertEqual(len(options), 1, eid)
            self.assertFalse(any(k in ("trigger", "allow", "limit") for k, _ in options[0]), eid)
        decisions = next(s for p, s in self.files.items() if Path(p).parent.name == "decisions")
        self.assertNotIn(f"country_event={EV_CATALOG_COUNT}", decisions)
        c = self.country(house={"conservative": .83, "liberal": .12, "reactionary": .05})
        self.present(c, "press_rights", "censored_press")
        self.assertEqual(c.events, [420000146])  # Nay leads by 80.
        self.assertEqual((c.vars["tgcx_yes"], c.vars["tgcx_no"]), (10, 90))
        c.events.clear()
        self.click(c, "tgcx_count_votes")
        self.assertEqual(c.events, [420000146])
        # Each possible tally must choose exactly one result event, including
        # ties and no-quorum counts; the event always has one ordinary option.
        report = parse("\n".join(self.gen.report_block()))
        for yes in range(0, 101, 5):
            for no in range(0, 101-yes, 5):
                c.vars.update(tgcx_yes=yes, tgcx_no=no,
                              tgcx_margin=yes-no, tgcx_quorum=yes+no)
                c.events.clear()
                c.run(report)
                self.assertEqual(len(c.events), 1, (yes, no))
                self.assertNotEqual(c.events[0], EV_CATALOG_COUNT)
                expected = (420000151+(yes+no)//5 if yes+no < 50 else
                            420000110+(yes-no)//5-1 if yes > no else
                            420000130+(no-yes)//5)
                self.assertEqual(c.events[0], expected, (yes, no))
        # Saves with the obsolete dispatcher queued can still request a real
        # fresh count. New Present/Count requests never use that recovery path.
        c.events.clear()
        c.run(self.events[EV_CATALOG_COUNT]["option"][1:])
        self.assertEqual(c.events, [420000146])


if __name__ == "__main__":
    unittest.main(verbosity=2, testRunner=unittest.TextTestRunner(stream=sys.stdout, verbosity=2))
