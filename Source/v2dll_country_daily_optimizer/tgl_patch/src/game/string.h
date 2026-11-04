#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>

namespace cp::game {

// MSVC 2010 std::string as the game lays it out: 16-byte inline buffer or heap pointer, size, capacity
// (inline while below 16), then the empty allocator padded to four bytes. 0x1C bytes: a by-value string
// argument spans 0x1C (the modifier tooltips' [ESP+0xC..0x27]), strings in game objects are 0x1C apart.
struct GameString {
    static constexpr uint32_t kInlineCapacity = 15;

    union {
        char buf[16];
        const char* ptr;
    };
    uint32_t size;
    uint32_t capacity;
    uint32_t allocator;

    const char* c_str() const { return capacity > kInlineCapacity ? ptr : buf; }
};
static_assert(sizeof(GameString) == 0x1C, "VS2010 std::string is 28 bytes");
static_assert(offsetof(GameString, size) == 0x10 && offsetof(GameString, capacity) == 0x14,
              "fields where the game reads them");

constexpr uint32_t kStringSizeOffset = offsetof(GameString, size);
constexpr uint32_t kStringCapacityOffset = offsetof(GameString, capacity);

// A string for the game to read (copy from): short text inline, longer text by pointer to `text`, which
// must outlive the call. Never handed to the game to destroy.
inline GameString view_of(const char* text, size_t length) {
    GameString s{};
    if (length <= GameString::kInlineCapacity) {
        std::memcpy(s.buf, text, length);
        s.buf[length] = '\0';
        s.capacity = GameString::kInlineCapacity;
    } else {
        s.ptr = text;
        s.capacity = static_cast<uint32_t>(length);
    }
    s.size = static_cast<uint32_t>(length);
    return s;
}

inline GameString view_of(const char* text) { return view_of(text, std::strlen(text)); }

// A copy of the game's std::string at `at`, at most `max` characters (names for logs and reports).
inline std::string string_at(uintptr_t at, size_t max) {
    const auto* s = reinterpret_cast<const GameString*>(at);
    return std::string(s->c_str(), s->size < max ? s->size : max);
}

}  // namespace cp::game
