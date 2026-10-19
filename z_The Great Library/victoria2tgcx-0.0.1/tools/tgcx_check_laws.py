#!/usr/bin/env python3
"""Run the existing law gates and retain current game logs in one private bundle.

    python tools/tgcx_check_laws.py

Does not launch/exit the game, install anything, or claim live acceptance.
The test suites use their own temporary fixtures. Game logs are copied;
their originals and earlier evidence are never overwritten.
"""

import argparse
from datetime import datetime, timezone
from pathlib import Path
import json
import shutil
import subprocess
import sys

from gen_laws import DEFAULT_TGC, ROOT


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--evidence-root", type=Path, default=Path("E:/v2re/logs"))
    ap.add_argument("--game-logs", type=Path, default=Path.home() /
                    "Documents/Paradox Interactive/Victoria II/TGC252_TGCX/logs")
    args = ap.parse_args()
    stamp = datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%S%fZ")
    evidence = args.evidence_root / f"tgcx-law-check-{stamp}"
    evidence.mkdir(parents=True, exist_ok=False)
    records = []
    checks = [
        ("catalogue", ["tools/test_law_catalog.py"]),
        ("law0", ["tools/test_gen_laws.py"]),
        ("bill_gui", ["tools/test_bill_gui.py"]),
        ("installer", ["tools/test_install_submod.py"]),
        ("tgc", ["tools/tgc_scan.py", DEFAULT_TGC,
                 "--out", str((evidence / "tgcx_tgc_inventory.json").resolve())]),
        ("exe", ["tools/check_exe.py"]),
        ("signatures", ["tools/gen_signatures.py", "--check"]),
    ]
    print(f"Evidence: {evidence.resolve()}", flush=True)
    for name, arguments in checks:
        print(f"Checking {name}...", flush=True)
        result = subprocess.run([sys.executable, *arguments], cwd=ROOT,
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        (evidence / f"tgcx_{name}.txt").write_bytes(result.stdout)
        records.append({"check": name, "exit_code": result.returncode})
        print(f"  {'PASS' if result.returncode == 0 else 'FAIL'}", flush=True)

    # Snapshot only; logs from an open game can still change after this copy.
    # Their presence/emptiness is evidence to inspect, not a substitute for a
    # screenshot or confirmation of which mechanics the user exercised.
    logs = {}
    if args.game_logs.is_dir():
        captured = evidence / "game-logs"
        captured.mkdir()
        for source in args.game_logs.iterdir():
            if source.is_file():
                shutil.copy2(source, captured / source.name)
                logs[source.name] = (captured / source.name).stat().st_size
        print(f"Copied {len(logs)} game logs; originals retained.", flush=True)
    else:
        print("No game logs found at the supplied path.", flush=True)
    summary = {
        "automatic_checks": records,
        "game_log_source": str(args.game_logs.resolve()),
        "copied_game_logs_bytes": logs,
        "live_acceptance": "Not inferred by this runner. See the current report for existing evidence and pending game checks.",
    }
    (evidence / "tgcx_summary.json").write_text(json.dumps(summary, indent=2), encoding="utf-8")
    ok = all(record["exit_code"] == 0 for record in records)
    print("All automatic gates passed." if ok else "A gate failed; see the retained output.")
    print("Game presentation, numeric parity and remaining live checks are separate.")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
