#pragma once

#include <string>

namespace cp {

struct Config {
    int engine_worker_threads = 0;  // 0 = leave the game default
    bool cull_cb_checks = false;     // skip per-defender can_use checks once an attacker-only condition failed
    bool cull_cb_profiling = false;  // count and time the CB checks, report every 30 game days
    int tick_profiler = 0;           // 0 off, 1 tick blocks + frame, 2 + DayTick calls, 3 + market/pre-pass,
                                     // 4 + frame calls, 5 + internals
    bool cull_decision_checks = false;  // skip decision potentials that cannot pass (tag-locked, dead flag gate)
    bool decision_profiling = false;    // per-decision cost table in performance_patch_decisions.log every 30 game days
    int sample_profiler = 0;            // 0 off, N = sample the game thread every N ms
                                        // into performance_patch_samples.tsv
    bool skip_network_wait = false;     // poll the network every frame without blocking (vanilla blocks)
    bool prefetch_relations = false;    // prefetch relation objects before the three daily country x country scans
    bool prefetch_pops = false;         // prefetch each country's pops before its daily market update
    bool prefetch_ai_relations = false; // prefetch relations before the AI's daily target scan
    bool skip_clean_resets = false;     // skip Country_PrePass's per-country table reset when it would write
                                        // what is already there
    bool compress_flag_cache = false;   // create, cache and load the flag atlases as DXT1 instead of uncompressed
    bool fast_ai_queue = false;         // at max speed, finish the AI job queue in the frame it started in
    int parallel_decisions = 0;         // 0 off, 1 AI decision checks on worker threads, 2 shadow mode (compare only)
    int parallel_events = 0;            // 0 off, 1 event scan triggers on worker threads, 2 shadow mode (compare only)
    bool state_checksum = false;        // multiplayer: append state hashes to the daily sync vector
    bool oos_log = false;               // multiplayer: log which element of the sync vector differed
    bool pin_fpu = false;               // multiplayer: fixed x87 control word and MXCSR at every tick
    int fpu_precision = 24;             // with pin_fpu: 24 (what Direct3D leaves on Windows) or 53
    bool oos_test_button = false;       // multiplayer test aid: Force OOS button and Ctrl+Shift+O
    bool fix_rng_resync = false;        // multiplayer: on a sync mismatch, realign the RNG to the host's position,
                                        // not to the seed
    bool sync_world_rng = false;        // multiplayer: lockstep draws from the world RNG come from the shared,
                                        // counted generator
    int mp_host_wait_days = 0;          // multiplayer: host holds its ticks while a player is more than N days behind
                                        // (0 = off, not during a player's war)
    int background_sleep_ms = 1;        // per-frame sleep while the render device is lost (vanilla 100; 100 = leave it)
    bool fix_supply_crash = false;      // crash prevention: factory with no local-supply source in the production view
    bool fix_tech_window_crash = false; // crash prevention: invention without a status object in the technology window
    bool fix_missing_modifier = false;  // crash prevention: add/remove modifier effects naming a modifier
                                        // that does not exist
    bool fix_missing_state_crash = false;  // crash prevention: AI scan over a unit in a province without a state
                                           // (uncolonised)
    bool borderless_fullscreen = false;  // stability: borderless window at the monitor's size (no device loss on alt-tab)
    bool fix_edge_scroll = false;       // stability: edge scroll only with the cursor inside the focused window
    int edge_scroll_lock = 0;           // stability: cursor held in the window; mouse counts pushed past an
                                        // edge to leave it (0 = no hold, needs fix_edge_scroll)
    bool clipboard_paste = false;       // interface: Ctrl+V types the clipboard text into text fields
    bool save_last_ip = false;          // interface: write the join address to settings.txt when joining
    bool join_port = false;             // interface: the join dialog accepts address:port (the game always uses 1638)
    bool network_log = false;           // multiplayer diagnostics: log ENet connections, disconnections and silences
    bool oos_notice = false;            // multiplayer: notice instead of dialog and pause when an out-of-sync
                                        // is recovered
    int chat_line_seconds = 60;         // interface: seconds before the oldest in-game chat line goes (vanilla 60)
};

// Reads the ini at `config_file`; unknown keys are ignored, missing keys keep their defaults.
Config load_config(const std::wstring& config_file);

}  // namespace cp
