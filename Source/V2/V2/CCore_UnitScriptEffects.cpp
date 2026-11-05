#include <windows.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include "CCore_Shared.h"

// Route unit availability directives in country-scope script effects through
// the native scalar set_country_flag parser, then replace only that instance's
// execute method. The parsed flag string stores the requested unit id.
static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int KW_SET_COUNTRY_FLAG_EFFECT = 0x40B;
static const int EFFECT_EXECUTE_SLOT = 11;
static const int EFFECT_TOOLTIP_SLOT = 8;
static const int EFFECT_VTABLE_SLOTS = 16;
static const DWORD RVA_COUNTRIES_VECTOR = 0xE587E4;
static const DWORD RVA_WORLD_PTR = 0xE588E8;
static const int OFF_WORLD_PLAYER_INDEX = 0xB60;
static const DWORD RVA_CURRENT_NAME_MAP = 0xE5FDD8; // DAT_0125fdd8, PE ImageBase 0x00400000
static const DWORD RVA_NATIVE_UNIT_LOOKUP = 0x001C2AD0; // FUN_005C2AD0, PE ImageBase 0x00400000
static const DWORD RVA_UNIT_EFFECT_CINVENTION_VTABLE = 0x00A000C0;
static const DWORD RVA_UNIT_EFFECT_CTECHNOLOGY_VTABLE = 0x00A00A84;
static const int OFF_CTX_COUNTRY = 0x0C;
static const int OFF_COUNTRY_UNIT_MANAGER = 0xBCC;
static const int OFF_COUNTRY_UNIT_FLAGS_BEGIN = 0x2DC;
static const int OFF_UNIT_INDEX = 0x24;

static const int OFF_FLAG_EFFECT_NAME = 0x20; // std::string in CSetCountryFlagEffect
static const unsigned MAX_UNIT_EFFECTS = 8192;
static const DWORD RVA_STD_STRING_ASSIGN = 0x009350;
static const DWORD RVA_GAME_OPERATOR_DELETE = 0x6AE91B;
static const DWORD RVA_FMT_FROM_KEY = 0x5A8EE0;
static const DWORD RVA_FMT_FINISH = 0x5A9880;
static const DWORD RVA_FMT_FREE = 0x5A9740;
static const DWORD RVA_FMT_REPLACE = 0x5A9980;
static const DWORD RVA_LOC_SINGLETON = 0x075500;

typedef void(__fastcall* tEffectExecute)(void* self, void* edx, void* context, int arg);
// Native CEffect tooltip ABI: output string plus ten additional 32-bit stack
// arguments. Preserve all arguments when forwarding to the original method.
typedef void*(__thiscall* tEffectTooltip)(void* self, void* out,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9, uintptr_t a10);

struct UnitEffectGameString
{
    union { char buf[16]; char* ptr; } data;
    unsigned size;
    unsigned capacity;
};

typedef void*(__thiscall* tUnitEffectStringAssign)(void*, const char*, unsigned);
typedef void(__cdecl* tUnitEffectGameDelete)(void*);
struct UnitScriptEffectMeta;
static UnitScriptEffectMeta* FindUnitEffect(void* effect);

struct UnitScriptEffectMeta
{
    void* effect;
    void* ownerInvention;
    bool activate;
    char unitName[64];
    void* originalTooltip;
    void* vtableWithRtti[EFFECT_VTABLE_SLOTS + 1];
};

static UnitScriptEffectMeta g_unitEffects[MAX_UNIT_EFFECTS];
static unsigned g_unitEffectCount = 0;
__declspec(align(16)) static void* g_overflowVtable[EFFECT_VTABLE_SLOTS + 1];
static bool g_overflowVtableReady = false;
static bool g_unitScriptEffectsEnabled = false;

static void UnitEffectGameStringSet(UnitEffectGameString* value, const char* text)
{
    memset(value, 0, sizeof(*value));
    value->capacity = 15;
    ((tUnitEffectStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
        value, text, (unsigned)strlen(text));
}

static void UnitEffectGameStringFree(UnitEffectGameString* value)
{
    if (value->capacity >= 16 && value->data.ptr)
        ((tUnitEffectGameDelete)(g_base + RVA_GAME_OPERATOR_DELETE))(value->data.ptr);
    memset(value, 0, sizeof(*value));
}

static void UnitEffectFormatReplace(void* formatter, const char* name, const char* text)
{
    UnitEffectGameString key, value;
    UnitEffectGameStringSet(&key, name);
    UnitEffectGameStringSet(&value, text);
    UnitEffectGameString* keyPtr = &key;
    UnitEffectGameString* valuePtr = &value;
    DWORD replace = g_base + RVA_FMT_REPLACE;
    __asm
    {
        push valuePtr
        mov ecx, formatter
        mov esi, keyPtr
        call replace
    }
    UnitEffectGameStringFree(&key);
    UnitEffectGameStringFree(&value);
}

static bool UnitEffectLocalize(const char* key, const char* unitName,
    char* output, unsigned outputCapacity)
{
    UnitEffectGameString keyString, formatted;
    unsigned char formatter[0x60];
    void* formatterPtr = formatter;
    DWORD freeFmt = g_base + RVA_FMT_FREE;
    bool formatterStarted = false;
    memset(&keyString, 0, sizeof(keyString));
    memset(&formatted, 0, sizeof(formatted));
    memset(formatter, 0, sizeof(formatter));
    formatted.capacity = 15;
    if (!output || outputCapacity < 2 || !key || !unitName || !g_base)
        return false;
    output[0] = 0;
    __try
    {
        UnitEffectGameStringSet(&keyString, key);
        UnitEffectGameString* keyPtr = &keyString;
        DWORD fromKey = g_base + RVA_FMT_FROM_KEY;
        __asm
        {
            push keyPtr
            push formatterPtr
            mov ecx, keyPtr
            mov edx, formatterPtr
            call fromKey
        }
        formatterStarted = true;
        char label[160] = {};
        UnitEffectGameString unitKey, unitValue;
        memset(&unitKey, 0, sizeof(unitKey));
        memset(&unitValue, 0, sizeof(unitValue));
        UnitEffectGameStringSet(&unitKey, unitName);
        unsigned char unitFormatter[0x60] = {};
        UnitEffectGameString* unitKeyPtr = &unitKey;
        void* unitFormatterPtr = unitFormatter;
        __asm
        {
            push unitKeyPtr
            push unitFormatterPtr
            mov ecx, unitKeyPtr
            mov edx, unitFormatterPtr
            call fromKey
        }
        void* locale = ((void*(__cdecl*)(void))(g_base + RVA_LOC_SINGLETON))();
        if (locale)
        {
            void* labelPtr = &unitValue;
            DWORD finish = g_base + RVA_FMT_FINISH;
            __asm
            {
                mov eax, locale
                movq xmm0, qword ptr [eax + 0x6c]
                sub esp, 0x10
                mov ecx, esp
                movq qword ptr [ecx], xmm0
                movq xmm0, qword ptr [eax + 0x74]
                movq qword ptr [ecx + 8], xmm0
                mov esi, labelPtr
                mov ecx, unitFormatterPtr
                call finish
            }
            const char* localized = unitValue.capacity < 16 ? unitValue.data.buf : unitValue.data.ptr;
            if (localized && unitValue.size > 0 && unitValue.size < sizeof(label))
            {
                memcpy(label, localized, unitValue.size);
                label[unitValue.size] = 0;
            }
            DWORD freeUnitFmt = g_base + RVA_FMT_FREE;
            __asm
            {
                push unitFormatterPtr
                call freeUnitFmt
            }
            UnitEffectGameStringFree(&unitKey);
            UnitEffectGameStringFree(&unitValue);
        }
        if (!label[0])
            strncpy_s(label, sizeof(label), unitName, _TRUNCATE);
        UnitEffectFormatReplace(formatter, "UNIT", label);

        if (!locale)
        {
            __asm
            {
                push formatterPtr
                call freeFmt
            }
            formatterStarted = false;
            UnitEffectGameStringFree(&keyString);
            return false;
        }
        void* outputPtr = &formatted;
        DWORD finish = g_base + RVA_FMT_FINISH;
        __asm
        {
            mov eax, locale
            movq xmm0, qword ptr [eax + 0x6c]
            sub esp, 0x10
            mov ecx, esp
            movq qword ptr [ecx], xmm0
            movq xmm0, qword ptr [eax + 0x74]
            movq qword ptr [ecx + 8], xmm0
            mov esi, outputPtr
            mov ecx, formatterPtr
            call finish
        }
        const char* localized = formatted.capacity < 16 ? formatted.data.buf : formatted.data.ptr;
        bool copied = localized && formatted.size > 0 && formatted.size < outputCapacity;
        if (copied)
        {
            memcpy(output, localized, formatted.size);
            output[formatted.size] = 0;
        }
        __asm
        {
            push formatterPtr
            call freeFmt
        }
        formatterStarted = false;
        UnitEffectGameStringFree(&keyString);
        UnitEffectGameStringFree(&formatted);
        return copied;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (formatterStarted)
        {
            __asm
            {
                push formatterPtr
                call freeFmt
            }
        }
        UnitEffectGameStringFree(&keyString);
        UnitEffectGameStringFree(&formatted);
        return false;
    }
}

static void* __fastcall UnitScriptEffectTooltip(void* self, void*, void* out,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9, uintptr_t a10)
{
    UnitScriptEffectMeta* meta = FindUnitEffect(self);
    if (!meta || !meta->originalTooltip)
        return out;
    void* result = ((tEffectTooltip)meta->originalTooltip)(self, out,
        a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    if (!meta->unitName[0] || !out)
        return result;

    __try
    {
        char line[256];
        const char* key = meta->activate ? "ACTIVATE_UNIT_EFFECT" : "DEACTIVATE_UNIT_EFFECT";
        if (!UnitEffectLocalize(key, meta->unitName, line, sizeof(line)))
            return result;
        UnitEffectGameString* text = (UnitEffectGameString*)out;
        const char* oldText = text->capacity < 16 ? text->data.buf : text->data.ptr;
        if (!oldText || text->size > 2048)
            return result;
        char combined[2304];
        size_t oldLength = text->size;
        memcpy(combined, oldText, oldLength);
        size_t used = oldLength;
        if (used && combined[used - 1] != '\n' && used + 1 < sizeof(combined))
            combined[used++] = '\n';
        size_t lineLength = strlen(line);
        if (used + lineLength >= sizeof(combined))
            return result;
        memcpy(combined + used, line, lineLength);
        used += lineLength;
        combined[used] = 0;
        ((tUnitEffectStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
            out, combined, (unsigned)used);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        // Keep the native tooltip result intact if formatting fails.
    }
    return result;
}

static UnitScriptEffectMeta* FindUnitEffect(void* effect)
{
    for (unsigned i = 0; i < g_unitEffectCount; ++i)
        if (g_unitEffects[i].effect == effect)
            return &g_unitEffects[i];
    return 0;
}

static void* FindCurrentInventionOnParserStack(unsigned* uniqueCount)
{
    if (uniqueCount) *uniqueCount = 0;
    uintptr_t stackPointer = 0;
    __asm mov stackPointer, esp
    uintptr_t scanEnd = stackPointer + 0x5000;
    void* found[16] = {};
    unsigned count = 0;
    for (uintptr_t slot = stackPointer; slot < scanEnd; slot += sizeof(void*))
    {
        void* object = 0;
        __try { object = *(void**)slot; }
        __except (EXCEPTION_EXECUTE_HANDLER) { break; }
        if ((uintptr_t)object < 0x10000) continue;

        void** vtable = 0;
        __try { vtable = *(void***)object; }
        __except (EXCEPTION_EXECUTE_HANDLER) { continue; }
        void* owner = 0;
        if (vtable == (void**)(g_base + RVA_UNIT_EFFECT_CINVENTION_VTABLE))
        {
            owner = object;
        }
        else if (vtable == (void**)(g_base + RVA_UNIT_EFFECT_CTECHNOLOGY_VTABLE) &&
            (uintptr_t)object >= 0x10070)
        {
            void* embeddedOwner = (char*)object - 0x70;
            void** ownerVtable = 0;
            __try { ownerVtable = *(void***)embeddedOwner; }
            __except (EXCEPTION_EXECUTE_HANDLER) { continue; }
            if (ownerVtable == (void**)(g_base + RVA_UNIT_EFFECT_CINVENTION_VTABLE))
                owner = embeddedOwner;
        }
        if (!owner) continue;
        bool duplicate = false;
        for (unsigned i = 0; i < count; ++i)
            if (found[i] == owner) duplicate = true;
        if (!duplicate && count < _countof(found))
            found[count++] = owner;
    }
    if (uniqueCount) *uniqueCount = count;
    return count == 1 ? found[0] : 0;
}

bool UnitScriptEffectMatchesInvention(void* invention, const char* unitName, bool activate)
{
    if (!invention || !unitName || !*unitName)
        return false;
    for (unsigned i = 0; i < g_unitEffectCount; ++i)
    {
        const UnitScriptEffectMeta* meta = &g_unitEffects[i];
        if (meta->ownerInvention == invention && meta->activate == activate &&
            _stricmp(meta->unitName, unitName) == 0)
            return true;
    }
    return false;
}
static bool ReadGameString(const void* object, int offset, char* out, unsigned capacity)
{
    if (!object || !out || capacity < 2)
        return false;
    const char* member = (const char*)object + offset;
    const int length = *(const int*)(member + 0x10);
    const int stringCapacity = *(const int*)(member + 0x14);
    if (length < 0 || length >= (int)capacity || length > 63 || stringCapacity < 0)
        return false;
    const char* data = stringCapacity < 0x10 ? member : *(const char**)member;
    if (!data)
        return false;
    memcpy(out, data, length);
    out[length] = 0;
    return length != 0;
}

// FUN_005C2AD0 performs the native unit-name lookup in DAT_0125FDD8.
// Its observed x86 ABI is: map in EAX, pointer to game std::string on stack;
// the caller removes the single stack argument.
static DWORD g_nativeUnitLookup = 0;
struct UnitLookupString
{
    union { char inlineBuffer[16]; const char* externalBuffer; } data;
    unsigned int length;
    unsigned int capacity;
};

static void* NativeUnitLookup(void* map, const char* name)
{
    if (!map || !name)
        return 0;
    const size_t length = strlen(name);
    if (length == 0 || length > 63)
        return 0;
    UnitLookupString key;
    memset(&key, 0, sizeof(key));
    key.length = (unsigned int)length;
    if (length <= 15)
    {
        key.capacity = 15;
        memcpy(key.data.inlineBuffer, name, length + 1);
    }
    else
    {
        key.capacity = (unsigned int)length;
        key.data.externalBuffer = name;
    }
    void* unit = 0;
    __asm {
        mov eax, map
        lea ecx, key
        push ecx
        call dword ptr [g_nativeUnitLookup]
        mov unit, eax
    }
    return unit;
}

static bool SubunitHasDefinition(void* unit)
{
    if (!unit)
        return false;
    void** vtable = *(void***)unit;
    if (!vtable || !vtable[9])
        return false;
    typedef char(__thiscall* tHasDefinition)(void*);
    return ((tHasDefinition)vtable[9])(unit) != 0;
}

static bool ResolveUnitIndex(const char* name, int* unitIndex)
{
    if (!name || !*name || !unitIndex)
        return false;
    void* map = *(void**)(g_base + RVA_CURRENT_NAME_MAP);
    if (!map)
    {
return false;
    }
    void* unit = NativeUnitLookup(map, name);
    if (!unit)
    {
return false;
    }
    if (!SubunitHasDefinition(unit))
    {
return false;
    }
    const int index = *(int*)((char*)unit + OFF_UNIT_INDEX);
    if (index < 0 || index >= 256)
    {
return false;
    }
    *unitIndex = index;
    return true;
}
bool ResolveUnitDefinitionByName(const char* unitName, void** unitDefinition)
{
    if (!unitName || !*unitName || !unitDefinition || !g_nativeUnitLookup)
        return false;
    *unitDefinition = 0;
    __try
    {
        void* map = *(void**)(g_base + RVA_CURRENT_NAME_MAP);
        if (!map)
            return false;
        void* unit = NativeUnitLookup(map, unitName);
        if (!unit || !SubunitHasDefinition(unit))
            return false;
        *unitDefinition = unit;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        *unitDefinition = 0;
        return false;
    }
}
bool GetCountryUnitEnabled(void* country, const char* unitName, bool* enabled)
{
    if (!country || !unitName || !*unitName || !enabled || !g_nativeUnitLookup)
        return false;
    __try
    {
        char* unitManager = *(char**)((char*)country + OFF_COUNTRY_UNIT_MANAGER);
        if (!unitManager)
            return false;
        unsigned char* flags = *(unsigned char**)(unitManager + OFF_COUNTRY_UNIT_FLAGS_BEGIN);
        int unitIndex = -1;
        if (!flags || !ResolveUnitIndex(unitName, &unitIndex))
            return false;
        *enabled = flags[unitIndex] != 0;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

bool SetCountryUnitEnabled(void* country, const char* unitName, bool enabled)
{
    if (!country || !unitName || !*unitName || !g_nativeUnitLookup)
        return false;
    __try
    {
        char* unitManager = *(char**)((char*)country + OFF_COUNTRY_UNIT_MANAGER);
        if (!unitManager)
            return false;
        unsigned char* flags = *(unsigned char**)(unitManager + OFF_COUNTRY_UNIT_FLAGS_BEGIN);
        int unitIndex = -1;
        if (!flags || !ResolveUnitIndex(unitName, &unitIndex))
            return false;
        flags[unitIndex] = enabled ? 1 : 0;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void* UnitCurrentPlayerCountry()
{
    __try
    {
        void* world = *(void**)(g_base + RVA_WORLD_PTR);
        if (!world) return 0;
        const int countryIndex = *(int*)((char*)world + OFF_WORLD_PLAYER_INDEX);
        if (countryIndex < 0) return 0;
        char* manager = *(char**)(g_base + RVA_COUNTRIES_VECTOR);
        if (!manager) return 0;
        char** countries = *(char***)(manager + 4);
        char** countriesEnd = *(char***)(manager + 8);
        if (!countries || !countriesEnd || countriesEnd < countries ||
            countryIndex >= countriesEnd - countries)
            return 0;
        return countries[countryIndex];
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

static bool UnitConsoleGetArgument(const void* args, int expectedCount, char* out, unsigned capacity)
{
    if (!args || !out || capacity < 2) return false;
    __try
    {
        const uintptr_t begin = *(const uintptr_t*)args;
        const uintptr_t end = *(const uintptr_t*)((const char*)args + 4);
        if (!begin || end < begin || (end - begin) % 0x1C ||
            (end - begin) / 0x1C != (uintptr_t)expectedCount || expectedCount != 1)
            return false;
        const char* item = (const char*)(begin);
        const int length = *(const int*)(item + 0x10);
        const int stringCapacity = *(const int*)(item + 0x14);
        if (length < 1 || length >= (int)capacity || length > 63 || stringCapacity < 0)
            return false;
        const char* data = stringCapacity >= 16 ? *(const char**)item : item;
        if (!data) return false;
        memcpy(out, data, length);
        out[length] = 0;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static unsigned char* UnitConsoleCommand(unsigned char* result, const void* args, bool enabled)
{
    if (!result) return result;
    bool ok = false;
    const char* message = enabled ? "Usage: activate_unit UNIT_TYPE" : "Usage: deactivate_unit UNIT_TYPE";
    char unitName[64] = {};
    if (UnitConsoleGetArgument(args, 1, unitName, sizeof(unitName)))
    {
        void* country = UnitCurrentPlayerCountry();
        if (!country)
            message = "Player country unavailable";
        else if (!SetCountryUnitEnabled(country, unitName, enabled))
            message = "Unknown unit or unit state unavailable";
        else
        {
            ok = true;
            message = enabled ? "Unit activated" : "Unit deactivated";
}
    }
    result[0] = ok ? 1 : 0;
    UnitEffectGameString* text = (UnitEffectGameString*)(result + 4);
    memset(text, 0, sizeof(*text));
    text->capacity = 15;
    ((tUnitEffectStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(text, message, (unsigned)strlen(message));
    return result;
}

unsigned char* __cdecl ActivateUnitConsoleCommand(unsigned char* result, const void* args)
{
    return UnitConsoleCommand(result, args, true);
}

unsigned char* __cdecl DeactivateUnitConsoleCommand(unsigned char* result, const void* args)
{
    return UnitConsoleCommand(result, args, false);
}

static void __fastcall UnitScriptEffectExecute(void* self, void*, void* context, int)
{
    UnitScriptEffectMeta* meta = FindUnitEffect(self);
    if (!meta || !context)
        return;
    __try
    {
        const int countryIndex = *(int*)((char*)context + OFF_CTX_COUNTRY);
        if (countryIndex < 0)
            return;
        char* manager = *(char**)(g_base + RVA_COUNTRIES_VECTOR);
        if (!manager)
            return;
        char** countries = *(char***)(manager + 4);
        char** countriesEnd = *(char***)(manager + 8);
        if (!countries || !countriesEnd || countriesEnd < countries ||
            countryIndex >= countriesEnd - countries || !countries[countryIndex])
            return;
        char* country = countries[countryIndex];
        if (!SetCountryUnitEnabled(country, meta->unitName, meta->activate))
            return;
}
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
}
}

static void __fastcall UnitScriptEffectNoop(void*, void*, void*, int) {}

static bool IsUnitScriptEffectKey(void* ctx, bool* activate)
{
    if (!ctx || !activate)
        return false;
    const char* key = (const char*)ctx + OFF_PARSER_KEY_TEXT;
    if (_stricmp(key, "activate_unit") == 0)
    {
        *activate = true;
        return true;
    }
    if (_stricmp(key, "deactivate_unit") == 0)
    {
        *activate = false;
        return true;
    }
    return false;
}

bool CaptureUnitScriptEffect(void* self, void* edx, void* ctx, int keyId,
    tCoreEffectFactory originalFactory)
{
    if (!g_unitScriptEffectsEnabled)
        return false;
    bool activate = false;
    if (!IsUnitScriptEffectKey(ctx, &activate))
        return false;
    if (!self || !ctx || !originalFactory)
        return true;
    if (g_unitEffectCount >= MAX_UNIT_EFFECTS)
    {
// Consume as a harmless empty scalar effect rather than applying a country flag.
        originalFactory(self, edx, ctx, KW_SET_COUNTRY_FLAG_EFFECT);
        void* node = *(void**)((char*)self + 0x0C);
        void* effect = node ? *(void**)node : 0;
        if (effect)
        {
            void** nativeVtable = *(void***)effect;
            if (nativeVtable)
            {
                if (!g_overflowVtableReady)
                {
                    g_overflowVtable[0] = nativeVtable[-1];
                    memcpy(&g_overflowVtable[1], nativeVtable, sizeof(void*) * EFFECT_VTABLE_SLOTS);
                    g_overflowVtable[1 + EFFECT_EXECUTE_SLOT] = (void*)&UnitScriptEffectNoop;
                    g_overflowVtableReady = true;
                }
                *(void***)effect = &g_overflowVtable[1];
            }
        }
        return true;
    }

    originalFactory(self, edx, ctx, KW_SET_COUNTRY_FLAG_EFFECT);
    void* node = *(void**)((char*)self + 0x0C);
    void* effect = node ? *(void**)node : 0;
    if (!effect)
        return true;

    UnitScriptEffectMeta* meta = &g_unitEffects[g_unitEffectCount];
    memset(meta, 0, sizeof(*meta));
    meta->effect = effect;
    unsigned ownerCandidates = 0;
    meta->ownerInvention = FindCurrentInventionOnParserStack(&ownerCandidates);
    meta->activate = activate;
    if (!ReadGameString(effect, OFF_FLAG_EFFECT_NAME, meta->unitName, sizeof(meta->unitName)))
    {
meta->unitName[0] = 0;
    }
    void* parserSelfVtable = 0;
    void* selfOwnerGuess = 0;
    void* parsedUnitDefinition = 0;
    int parsedUnitIndex = -1;
    __try
    {
        parserSelfVtable = self ? *(void***)self : 0;
        if (parserSelfVtable == (void**)(g_base + RVA_UNIT_EFFECT_CINVENTION_VTABLE))
            selfOwnerGuess = self;
        else if (parserSelfVtable == (void**)(g_base + RVA_UNIT_EFFECT_CTECHNOLOGY_VTABLE) &&
            (uintptr_t)self >= 0x10070)
        {
            void* embeddedOwner = (char*)self - 0x70;
            if (*(void***)embeddedOwner ==
                (void**)(g_base + RVA_UNIT_EFFECT_CINVENTION_VTABLE))
                selfOwnerGuess = embeddedOwner;
        }
        if (meta->unitName[0])
        {
            void* nameMap = *(void**)(g_base + RVA_CURRENT_NAME_MAP);
            parsedUnitDefinition = NativeUnitLookup(nameMap, meta->unitName);
            if (parsedUnitDefinition)
                parsedUnitIndex = *(int*)((char*)parsedUnitDefinition + OFF_UNIT_INDEX);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        parserSelfVtable = 0;
        selfOwnerGuess = 0;
        parsedUnitDefinition = 0;
        parsedUnitIndex = -1;
    }
    void** nativeVtable = *(void***)effect;
    if (!nativeVtable)
    {
        meta->effect = 0;
        return true;
    }
    meta->vtableWithRtti[0] = nativeVtable[-1];
    memcpy(&meta->vtableWithRtti[1], nativeVtable,
        sizeof(void*) * EFFECT_VTABLE_SLOTS);
    meta->vtableWithRtti[1 + EFFECT_EXECUTE_SLOT] = (void*)&UnitScriptEffectExecute;
    meta->originalTooltip = nativeVtable[EFFECT_TOOLTIP_SLOT];
    meta->vtableWithRtti[1 + EFFECT_TOOLTIP_SLOT] = (void*)&UnitScriptEffectTooltip;
    *(void***)effect = &meta->vtableWithRtti[1];
    ++g_unitEffectCount;
return true;
}

bool InitializeUnitLookup()
{
    if (g_nativeUnitLookup)
        return true;
    static const unsigned char lookupSignature[11] =
        { 0x55, 0x8B, 0xEC, 0x51, 0x8B, 0x4D, 0x08, 0x53, 0x56, 0x8B, 0xF0 };
    unsigned char* lookup = (unsigned char*)(g_base + RVA_NATIVE_UNIT_LOOKUP);
    if (memcmp(lookup, lookupSignature, sizeof(lookupSignature)) != 0)
        return false;
    g_nativeUnitLookup = (DWORD)(g_base + RVA_NATIVE_UNIT_LOOKUP);
    return true;
}

bool InstallUnitScriptEffects()
{
    if (!InitializeUnitLookup())
        return false;
    const bool installed = InstallEffectFactoryHook(true);
    g_unitScriptEffectsEnabled = installed;
    return installed;
}
