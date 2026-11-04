#include "log.h"

#include <cstdarg>
#include <cstdio>

namespace cp {
namespace {
LogFn g_log = nullptr;
}

void set_log(LogFn fn) { g_log = fn; }

void logf(const char* fmt, ...) {
    if (!g_log) return;
    char message[2048] = {};
    va_list args;
    va_start(args, fmt);
    const int n = vsnprintf(message, sizeof(message), fmt, args);
    va_end(args);
    if (n >= 0) g_log("[multiplayer patches] %s", message);
}
}
