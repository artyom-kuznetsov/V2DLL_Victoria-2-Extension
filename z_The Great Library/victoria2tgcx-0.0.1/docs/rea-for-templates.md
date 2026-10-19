# REA as a candidate tool for GH-4 and army templates

2026-10-12. The user asked to keep [morluto/rea](https://github.com/morluto/rea)
in mind, especially for army templates. It has been reviewed and recorded;
it is **not installed or registered** in this session.

REA provides agent and CLI access to native assembly, pseudocode, symbols,
calls and references through analysis providers including Ghidra. Those
operations could help trace `CConstructUnitCommand` construction and its
queueing path. This is an inference about our use case, not evidence
that REA has already analysed Victoria II. See the
[project README](https://github.com/morluto/rea#readme).

Its [Windows Ghidra guide](https://github.com/morluto/rea/blob/main/docs/windows-ghidra-p0.md)
describes an experimental, read-only native PE boundary. Ghidra 12.1.4
and Java 21 match our existing installations. It distinguishes x86
support on repository `main` from npm releases through 5.0.0, which admit
x86-64 PE on Windows. Our executable is **x86**, so confirm the specific
package's support before adopting it; do not assume latest npm is suitable.
The guide also lists Node version requirements and excludes GUI state
and annotations from this provider.

When GH-4 is selected:

1. Recheck the release boundary and installed Node prerequisites. Pin the
   candidate version/commit in the report.
2. Validate read-only x86 analysis on a small source-owned fixture before
   pointing it at the reference executable.
3. Run `tools/check_exe.py`; analyse only the construction subsystem.
   Preserve the existing Ghidra project's one-writer rule and keep
   binary snapshots and tool caches outside git.
4. Start with the known `CConstructUnitCommand` RTTI/vtable. Follow callers
   to the build-unit UI, recover constructor fields and calling convention,
   then identify the engine's command submission route.
5. Record bytes, RVAs, confidence and evidence in the normal project
   reports/signature gate. Tool output alone does not confirm runtime
   behavior or multiplayer synchronization.
6. Implement recruitment through engine commands (R5); request quantities
   and compositions through our own UI only after the command format is
   verified. REA does not change that contract.

Any future setup should review the exact configuration changes described
in the [installation guide](https://github.com/morluto/rea/blob/main/docs/installation.md).
Keep DLL-0/U-4 moving independently of this optional tooling evaluation.
