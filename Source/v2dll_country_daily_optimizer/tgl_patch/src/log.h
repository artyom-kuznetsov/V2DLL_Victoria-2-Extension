#pragma once

#include <cstdarg>
#include <cstdio>

namespace cp {
using LogFn = void(__cdecl*)(const char*, ...);
void set_log(LogFn fn);
void logf(const char* fmt, ...);
// Dedicated host/join log (hostjoin.log). The plugin sets it to its own writer;
// sync_check routes the host-comparison dumps here so a host and a client can be
// diffed without the daily simulation noise. It also forwards to the shared log.
void set_hostjoin_log(LogFn fn);
void hostjoin_logf(const char* fmt, ...);
}
