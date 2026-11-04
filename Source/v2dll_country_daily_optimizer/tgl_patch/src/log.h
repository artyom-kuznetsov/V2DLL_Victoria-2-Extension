#pragma once

#include <cstdarg>
#include <cstdio>

namespace cp {
using LogFn = void(__cdecl*)(const char*, ...);
void set_log(LogFn fn);
void logf(const char* fmt, ...);
}
