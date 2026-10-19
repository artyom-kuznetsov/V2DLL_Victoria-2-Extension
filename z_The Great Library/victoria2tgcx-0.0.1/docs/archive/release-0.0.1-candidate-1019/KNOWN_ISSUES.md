# Known issues and scope

- **Single-player beta candidate.** Multiplayer has not been tested.
- **Exact executable required.** Other 3.04 distributions/builds with a
  different executable hash are unsupported, even if the menu says 3.04.
- **Other mods remain untested.** Custom interface layouts, unit definitions
  or competing DLL hooks may require changes. HFM and older TGC versions
  have no current Universal gameplay acceptance.
- **Conform tracking lasts one session.** After loading a save, previously
  queued regiments finish independently. Pressing Conform again builds the
  missing composition anew; it does not collect nearby idle regiments.
  Avoid submitting the same missing units again after a reload unless
  that is what you want.
- **Conform needs a safe land route.** Disconnected overseas recruitment is
  excluded. ATCU does not arrange naval transport. Shortage is reported
  instead. Straits, access changes and moving the target to another
  landmass have limited extended coverage.
- **Builder recruitment has no continent selector yet.** It can recruit
  eligible units overseas. Culture-filter buttons are also planned.
- **V2DLL has a single mod-DLL slot.** ATCU must be the first active mod
  for that route. Another slot consumer is not supported concurrently.
- **Local templates use unit keys.** Switching to a base with incompatible
  unit keys can prevent a library from loading. Back up the preference
  file before moving between significantly different mods; the log gives
  the exact path. A compatible library may be carried over from another
  local mod profile when the current profile has no library yet.
- **Interface coverage is bounded.** Native Navy/fleet switching, repeated
  selection, library reload and longer sessions have partial coverage;
  short checks on four bases do not establish every combination.
- **Two version labels are intentional.** Distribution candidate 0.0.1
  contains the unchanged accepted engine build 0.10.4. Use both labels in
  reports. Politics and other TGCX mechanics are not enabled by this package.

The DLL queues game commands for recruitment, detachment and movement.
This does not establish multiplayer compatibility.
