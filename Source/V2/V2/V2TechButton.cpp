// V2TechButton.cpp
//
// Мод для Victoria 2: кнопки, запускающие решения, скрытие этих
// решений из окна политики, процентное изменение цен, байтовые
// правки подкреплений и целей войны, текстовый индикатор.
//
// Собирать: Visual Studio, Dynamic-Link Library, платформа x86 (Win32),
// конфигурация Release, рантайм /MT.
//
// Загружается как прокси lua51.dll: оригинал переименовывается в
// lua51_real.dll, экспорты пересылаются туда через lua51_exports.h.

#ifdef _WIN64
#error This DLL must be built for Win32 (x86)
#endif

#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <signal.h>
#include <wchar.h>
#include <intrin.h>
#include <ctype.h>
#include <float.h>
#include <xmmintrin.h>
#include <pmmintrin.h>

#include "lua51_exports.h"

// ---------------------------------------------------------------
// Настройки сборки
// ---------------------------------------------------------------

// Версия. Игра не сверяет бинарники, поэтому единственная защита от
// "у кого-то старая DLL" — сравнить эту строку в логах перед сетевой
// игрой.
// CLAUDE МЕНЯЙ ВЕРСИЮ ПРИ КАЖДОЙ ПРАВКЕ ФАЙЛА
#define MOD_VERSION "5.46"

// Настройки ниже читаются из v2dll_settings.ini рядом с exe при
// каждом запуске игры. Если файла ещё нет, он создаётся со
// значениями по умолчанию (перечисленными здесь). Правка файла не
// требует пересборки DLL - изменения применяются при следующем
// запуске игры.
struct Settings
{
    // Если true - после чтения этого же файла DLL определяет папку
    // запущенного мода (по "-mod=" в командной строке) и перечитывает
    // v2dll_settings.ini УЖЕ ОТТУДА, независимо от того, что здесь.
    // См. ResolveModFolder/LoadSettings ниже по файлу.
    bool localModConfig = false;

    bool log            = true;  // лог в Logs\v2dll.log (много записей на тик, для раздачи ставить 0)
    bool debugLog       = false; // DEBUG_LOG: отладочные записи (LogDbg) - см. определение рядом с Log
    bool buttons        = true;   // кнопки, запускающие решения
    bool decisionFilter = true;   // скрытие решений из окна политики
    bool priceDelta     = true;  // процентный шаг изменения цен
    bool popDisplay     = false;  // общее население в верхней панели (откачено: не смогли дописать сырое число в скобках без риска)
    bool versionLabel   = true;   // версия мода в подписи главного меню

    // Байтовые патчи exe из таблицы EXE_PATCHES (см. ниже по файлу)
    // управляются напрямую через BytePatch::enabled по ключам
    // PATCH_<ИМЯ> в ini - здесь только патчи exe, не входящие в эту
    // таблицу (каждый - отдельная функция со своим хуком).
    bool patchOccupiedReinforceSplit = true;
    bool patchAllyOwnerCheck         = true;
    // Посадка своей армии на флот постоянного союзника (не только свой
    // флот) - и в пути, и кликом на клетку, где армия уже стоит. Проверено
    // только статически (не в игре) - выключено по умолчанию, см.
    // InstallAllyEmbark.
    bool patchAllyEmbark             = false;
    // Подсказка над "Высадить" у флота: если на борту есть чужие войска,
    // дописывает их теги владельцев. Не зависит технически от
    // patchAllyEmbark (данные читаются, не пишутся), но без него на
    // борту просто не может оказаться чужой армии - смысла нет отдельно
    // включать один без другого.
    bool showAllyEmbarkedTooltip     = true;
    bool patchCivilizeNullCheck      = true;
    bool patchSupplySourceNullCheck  = true;
    // Два краша окна технологий на пустом "статусе" (сортировка списка и
    // иконка папки) - см. InstallTechCompareNullCheck / InstallTechFolderIconNullCheck.
    bool patchTechNullCheckFixes     = true;
    bool patchGraphPointClamp        = false;
    bool patchFactoryDumpScan        = false;
    bool patchProdListVisibility     = true;
    bool patchProdTypeGate           = true;
    bool patchHideNoSupplyFactories  = true;
    bool hideNoSupplyDryRun          = false; // файловый подход подтверждён - см. комментарий у g_hideNoSupplyDryRun
    // Фабрики: накопления уходят владельцам при любом закрытии, а убыточная
    // несубсидируемая фабрика закрывается сама (срок - в common\defines_v2dll.txt).
    // См. InstallFactoryClose. DRY_RUN: только лог, ничего не меняется.
    bool patchFactoryClosePayout     = true;
    bool patchFactoryAutoClose       = true;
    bool factoryCloseDryRun          = true;
    // PATCH_AI_EXPAND_STAFFING: ИИ-страна расширяет существующую фабрику
    // (FUN_00857530, выбор региона) только если она укомплектована рабочими
    // не меньше ai_factory_expand_min_staffing % (common\defines_v2dll.txt).
    bool patchAiExpandStaffing       = true;
    // PATCH_AI_NAVAL_BASE_LIMIT: ИИ не закладывает новую морскую базу (уровень
    // 0 -> 1) в регионе, где базы уже есть в >= ai_naval_base_max_provinces_per_state
    // провинциях (common\defines_v2dll.txt). Улучшение существующей не ограничено.
    bool patchAiNavalBaseLimit       = false;
    // PATCH_FACTORY_MIN_WAGE: фиксированный минимум зарплаты работникам фабрики
    // (factory_min_wage_per_10000 фунтов в день на 10000 работников из
    // common\defines_v2dll.txt), не зависящий от прибыльности.
    bool patchFactoryMinWage         = true;
    // PATCH_NEEDS_HONEST_UI: доли выполнения потребностей попа на экране (подсказки, окно
    // попа) умножаются на фактическое покрытие общего пула денег типа попа. Только вид.
    bool patchNeedsHonestUi          = true;
    // PATCH_FACTORY_PRIORITY_BY_RULE: приоритеты фабрик страны перезаписываются движком не при
    // rules factory_priority = no, а при delete_factory_if_no_input = yes; патч переключает на
    // factory_priority = no.
    bool patchFactoryPriorityByRule  = true;
    // Окно фабрик: не показывать в верхнем ряду фильтров кнопки товаров,
    // чьё имя начинается на "raw_" (см. ComputeGoodsFilterPos).
    bool hideRawGoodsFilter          = true;
    // Окно фабрик: если в регионе есть фабрика, прошедшая фильтр товаров,
    // показывать ВСЕ фабрики региона, а не только прошедшие фильтр
    // (см. InstallFilterShowAllInState).
    bool filterShowAllInState        = true;
    // Окно фабрик: фильтр товара срабатывает только на фабрики, которые
    // ПРОИЗВОДЯТ выбранный товар (оригинал засчитывал и потребителей
    // сырья) - регионы, где товар только потребляют, не показываются.
    bool filterProducersOnly         = true;
    // Иконки товаров из отдельных папок: ключ icon = "<папка>" в common\goods.txt
    // заменяет ячейку товара в resources*.dds (см. InstallGoodsIcons).
    bool goodsIcons                  = true;
    // Кнопка "button_fe_player_next" из interface\topbar.gui пропускает
    // играющий трек (см. SetupPlayerButtons).
    bool playerButtons            = true;
    // Выбор песни (FUN_00455290): настоящий случайный выбор вместо
    // "случайных" чисел из непроинициализированной памяти стека
    // (см. InstallMusicFairRandom).
    bool musicFairRandom             = true;
    bool EventSounds             = true;
    bool restartOnBackendBg      = false; // reiniciar una vez al cargar backend_bg.dds

    // Ежедневный доход "minting" по формуле из <мод>\common\minting.txt
    // (см. InstallMinting). Без файла формулы ничего не делает.
    bool minting                     = true;
    // Ключ goods_consumption в common\buildings.txt: чтение блока (иначе
    // игра падает) и ежедневная закупка товаров государством по рыночной
    // цене для каждого такого здания в стране; сумма - в строке бюджета
    // naval_base_expense (см. InstallGoodsConsumption). false - блок только
    // читается, ничего не покупается.
    bool goodsConsumption            = true;
    // Прибавлять закупленное к спросу рынка (иначе государство только
    // платит деньги, цены не двигаются).
    bool goodsConsumptionDemand      = true;

    // Взаимоисключающе с priceDelta (ENABLE_PRICE_DELTA) - оба
    // патчат один и тот же адрес. Если включены оба, побеждает этот.
    bool patchExponentialPriceDelta = false;

    // Если true - PATCH_PROD_TYPE_GATE разрешает строить в колонии
    // ЛЮБОЙ тип производства. Если false - только типы из белого
    // списка (limit_by_local_supply=yes + PROD_TYPE_GATE_EXTRA_WHITELIST
    // ниже, см. g_extraWhitelistNames).
    bool prodTypeGateAllowAll = false;

    // Разброс броска в бою. Работает только если exe уже несёт
    // "пещеру" от стороннего Vic2_Roll_Changer.py (см. комментарий
    // у InstallCombatRoll ниже по файлу) - без неё сигнатура не
    // совпадёт и патч тихо пропустится.
    bool patchCombatRoll = true;
    int  combatRollMin   = 0;   // минимум броска
    int  combatRollMax   = 4;   // максимум броска

    // Временная диагностика бага с чек-суммой (меняется при входе в
    // партию) - логирует в v2dll.log каждое обращение к источнику
    // чек-суммы. См. InstallChecksumDiagnostic ниже по файлу.
    bool patchChecksumDiagnostic = false;

    // Отдельный Logs\v2dll_oos.log: пишется при вызове FUN_00682EC0
    // (диалог OOS_TITLE / "Games out of synch"). Не каждый тик.
    bool enableOosLog = true;

    // Logs\v2dll_crash.log + Logs\v2dll_crash_*.dmp при необработанном
    // исключении / abort. Не каждый тик. Каждый дамп — отдельный файл.
    bool enableCrashLog = true;
    // memory dump (v2dll_crash_*.dmp) при краше - отдельно от текстового лога,
    // выключен по умолчанию: файл десятки МБ. Работает только вместе с
    // ENABLE_CRASH_LOG=1 (дамп пишется из того же обработчика).
    bool enableCrashDump = false;

    // Стабильность симуляции / память / существующий TBB-пул игры.
    // Все клиенты MP обязаны иметь одну DLL, поэтому эти правки
    // считаются частью протокола, а не опциональным ускорением.
    bool patchFpuFortress      = true;  // PC=53, near, FTZ/DAZ + пин на главном цикле
    bool patchD3dFpuPreserve   = true;  // D3DCREATE_FPU_PRESERVE, чтобы D3D не сбивал CW
    bool patchHeapLfh          = true;  // Low Fragmentation Heap на кучах процесса
    bool patchThreadFpuPin     = true;  // PinFpu на старте потоков exe/tbb
    int  engineWorkerThreads   = 0;     // потолок TBB; 0 = не трогать, игра сама берёт ядра

    // После дневного прохода POP (FUN_00485E40) округляем int64/2^15
    // поля денег/нужд, чтобы младшие биты не разъезжались между клиентами.
    bool patchPopQuantize      = true;
    int  popQuantizeKeepBits   = 12;    // из 15 дробных; 12 = шаг 8 единиц 2^-15

    // MP FPS: select микшера RVA 0x68B47D (14–20 мс) → 1 мс, копия timeval.
    // 3.24: без IAT Sleep/WFSO/QPC/recv/Idle и без записи в timeval игры.
    // Аудио Sleep(30)/Sleep(35) не трогать. Подробно: Source2/FPS_MP_CLIENT.txt.
    bool patchMpClientSleep    = true;
    int  mpClientSleepMs       = 1;

    // Хост/SP главный цикл: 6A 00 Sleep(0) / 6A 64 Sleep(100) по флагу.
    // Sleep(0) не трогаем — это хост. Sleep(100) режем до MAIN_LOOP_SLEEP_MS.
    bool patchMainLoopSleep0   = true;
    int  mainLoopSleepMs       = 1;
    // Наши значения: vsync включён (принудительный IMMEDIATE-режим может
    // рвать кадр при скролле списков), мягкий потолок 70 FPS вместо него.
    bool patchD3dNoVsync       = false;
    int  d3dFpsLimit           = 70;
    bool patchSkipSelProj      = false; // кольцо/mesh selection_projection; 3.32–3.34: не оно ест клик
    bool patchReuseUnitView    = false; // 3.76: патч окна армии снят. Только таймеры 391BB0/393290.
    bool patchSkipArmyIdle     = false; // idle 391BB0 нужен иконкам; skip только NeedRebuild.
    bool patchReuseWindows     = false; // 3.46: Hide-keep GUI = UAF (ивент/диалог удалён, виджет жив)
    bool patchHighPriority     = true;  // ABOVE_NORMAL + без power throttling
    bool patchSkipNestedIdle   = false; // 3.56: не звать IdleInGame при nest; checksum/насос живы
    bool patchSkipChkWin       = false; // 3.57 ОШИБКА: 2859C0 = дневной тик сессии, не окна. Не включать.
    bool patchCamStill         = false; // 3.59 провал: 1e08-skip → лишние IdleInGame, FPS хуже. Не включать.

    // FIX_SFX_MIXER_LAG: select() "микшера" (вызов из 0x689C00-0x68C000,
    // основной 0x68B47D) ждёт 14-20 мс на итерацию - режем до 1 мс копией
    // timeval, структуру игры не трогаем. Независим от PATCH_MP_CLIENT_SLEEP.
    bool fixSfxMixerLag      = true;

    // FIX_ARMY_WINDOW_LAG: алиас на patchSkipNestedIdle в HookIdleIngame
    // (пропуск вложенного IdleInGame). Отдельный InstallFixArmyWindowLag
    // НЕ ставим — LIVE уже хукает 254D80 через InstallWindowFps.
    bool patchFixArmyWindowLag = true;
};

static Settings g_settings;

// Загрузка/сохранение настроек (v2dll_settings.ini) реализовано
// ниже по файлу, после таблицы EXE_PATCHES - подстановка значений
// по ключам PATCH_<ИМЯ> ищет патч в этой таблице по имени.
static void LoadSettings();

static bool g_logStarted = false;
static bool g_oosLogStarted = false;
static CRITICAL_SECTION g_logCs;
static bool g_logCsInit = false;

static HMODULE g_selfModule = 0;
static wchar_t g_logsDir[MAX_PATH];
static wchar_t g_logFile[MAX_PATH];
static wchar_t g_oosLogFile[MAX_PATH];
static wchar_t g_crashLogFile[MAX_PATH];
static wchar_t g_crashDumpFile[MAX_PATH];
static bool g_logDirReady = false;

static void InitLogDir()
{
    if (g_logDirReady)
        return;

    wchar_t exe[MAX_PATH];
    exe[0] = 0;
    DWORD n = GetModuleFileNameW(NULL, exe, MAX_PATH);
    wchar_t* slash = (n && n < MAX_PATH) ? wcsrchr(exe, L'\\') : 0;
    if (slash)
    {
        *slash = 0;
        swprintf_s(g_logsDir, L"%s\\Logs", exe);
    }
    else
    {
        wcscpy_s(g_logsDir, L"Logs");
    }

    if (!CreateDirectoryW(g_logsDir, NULL))
    {
        DWORD err = GetLastError();
        if (err != ERROR_ALREADY_EXISTS)
            wcscpy_s(g_logsDir, L"Logs");
        CreateDirectoryW(g_logsDir, NULL);
    }

    swprintf_s(g_logFile, L"%s\\v2dll.log", g_logsDir);
    swprintf_s(g_oosLogFile, L"%s\\v2dll_oos.log", g_logsDir);
    swprintf_s(g_crashLogFile, L"%s\\v2dll_crash.log", g_logsDir);
    swprintf_s(g_crashDumpFile, L"%s\\v2dll_crash.dmp", g_logsDir);
    g_logDirReady = true;
}

static void Log(const char* fmt, ...)
{
    if (!g_settings.log)
        return;

    InitLogDir();

    if (g_logCsInit)
        EnterCriticalSection(&g_logCs);

    FILE* f = 0;
    // Всегда дописываем: хост и клиент на одном ПК иначе по очереди
    // открывают файл на "w" и затирают Install/Present друг друга.
    if (_wfopen_s(&f, g_logFile, L"a") != 0 || !f)
    {
        if (g_logCsInit)
            LeaveCriticalSection(&g_logCs);
        return;
    }

    g_logStarted = true;

    fprintf(f, "[%u] ", GetCurrentProcessId());

    va_list ap;
    va_start(ap, fmt);
    vfprintf(f, fmt, ap);
    va_end(ap);

    fprintf(f, "\n");
    fclose(f);

    if (g_logCsInit)
        LeaveCriticalSection(&g_logCs);
}

// Отладочный лог: диагностика, которую мы заводили при разработке отдельных
// фич (покадровые/по событию записи, зонды, дампы). По умолчанию выключен
// (DEBUG_LOG=0 в v2dll_settings.ini): иначе лог растёт на десятки мегабайт.
// Строки установки патчей и ошибок (сигнатура не совпала, исключения) идут
// через обычный Log и остаются всегда. Аргументы при выключенном режиме не
// вычисляются.
#define LogDbg(...) do { if (g_settings.debugLog) Log(__VA_ARGS__); } while (0)


// ---------------------------------------------------------------
// НАСТРОЙКА СОДЕРЖИМОГО — правится здесь
// ---------------------------------------------------------------

// Вид — экран игры со своим классом. Чтобы подключить новый, нужны:
//   rvaVtable   — адрес vftable класса минус 0x400000
//   slot        — слот, который вызывается регулярно, пока окно живо
//   tooltipSlot — true, если это слот подсказки (другая сигнатура)
//   offGlue     — смещение любой CButtonObserverGlue внутри вида
//   offContainer— смещение GUI-контейнера, у всех виденных видов 0x4C
//   window      — вложенное окно из .gui, либо 0
//
// Слот подбирается опытом: у технологий сработал 11 (Update),
// у бюджета и производства — 10 (подсказка, срабатывает на наведении).
struct ViewDef
{
    const char* name;
    DWORD       rvaVtable;
    int         slot;
    bool        tooltipSlot;
    int         offGlue;
    int         offContainer;
    const char* window;
};

static const ViewDef VIEWS[] =
{
    { "CTechnologyView", 0xA17FA4, 11, false, 0x60, 0x4C, "selected_tech_window" },
    { "CBudgetView",     0xA059F0, 10, true,  0x5C, 0x4C, 0                      },
    { "CProductionView", 0xA0FECC, 10, true,  0x120, 0x4C, 0                     },
    { "CPoliticsView",   0xA0E458, 10, true,  0x00, 0x4C, 0                      },
};

static const int VIEW_POLITICS = 3;

// Кнопки. view — номер строки в VIEWS, начиная с нуля.
struct ButtonDef
{
    int         view;
    const char* button;      // имя элемента из .gui
    const char* decision;    // имя решения из decisions/*.txt
};

static const ButtonDef BUTTONS[] =
{
    { 0, "FE_ACADEMIES_BDSM",     "open_academy_decisions_dec" },
    { 0, "FE_RPROJECTS_BDSM",     "open_research_projects_dec" },
    { 1, "FE_BUDGET_DIPLO_BDSM",  "exchange_settings_dec"      },
};

static const int VIEW_COUNT = sizeof(VIEWS) / sizeof(VIEWS[0]);
static const int BUTTON_COUNT = sizeof(BUTTONS) / sizeof(BUTTONS[0]);

// Потолки: под каждый вид и каждую кнопку нужен свой переходник,
// а их приходится объявлять заранее — см. макросы ниже.
static const int MAX_VIEWS = 4;
static const int MAX_BUTTONS = 8;


// ---------------------------------------------------------------
// Адреса. RVA = адрес в Ghidra минус 0x400000.
// ASLR включён, поэтому всё считается от базы модуля в рантайме.
// ---------------------------------------------------------------

static const DWORD RVA_ONMAKEDECISION = 0x2DCE10;  // OnMakeDecisionClicked
static const DWORD RVA_VTABLE_DECISION = 0xA29B54;  // CDecision::vftable

static const int VT_SLOT_ISVALID = 6;   // CDecision, смещение 0x18

// Границы PoliticsView_OnClick — функции, строящей список решений.
static const DWORD RVA_POLITICS_DRAW_BEGIN = 0x2DB2E0;
static const DWORD RVA_POLITICS_DRAW_END = 0x2DC750;

// ---------------------------------------------------------------
// Смещения внутри объектов интерфейса
// ---------------------------------------------------------------

static const int GLUE_SIZE = 44;    // размер склейки
static const int OFF_GLUE_METHOD = 0x08;  // склейка -> указатель на метод

static const int VT_FIND_WINDOW = 0x6C;  // контейнер: найти вложенное окно
static const int VT_FIND_CHILD = 0x34;  // окно: найти кнопку по имени
static const int OFF_OBSERVABLE = 0x54;  // кнопка -> Observable
static const int VT_ADD_OBSERVER = 0x04;  // Observable: AddObserver
static const int VT_GET_NAME = 0x44;  // элемент: имя из .gui

// Поддельный элемент для OnMakeDecisionClicked: функция читает у него
// только +0x14 (данные std::string) и +0x28 (_Myres).
static const int ELEM_STRDATA = 0x14;
static const int ELEM_STRRES = 0x28;


// ---------------------------------------------------------------
// std::string движка: буфер 16 байт, _Mysize на +0x10, _Myres на +0x14
// ---------------------------------------------------------------

struct GStr
{
    char     data[16];
    unsigned size;
    unsigned res;
};

static void MakeStr(GStr* s, char* storage, unsigned storageSize, const char* text)
{
    size_t n = strlen(text);

    memset(s, 0, sizeof(GStr));
    s->size = (unsigned)n;

    if (n < 16)
    {
        memcpy(s->data, text, n + 1);
        s->res = 15;
    }
    else
    {
        memcpy(storage, text, n + 1);
        *(char**)s->data = storage;
        s->res = storageSize - 1;
    }
}


// ---------------------------------------------------------------
// Вызов виртуальных методов с соглашением __thiscall.
// MSVC не даёт объявить __thiscall-указатель напрямую, поэтому
// используем __fastcall с фиктивным EDX — раскладка совпадает.
// ---------------------------------------------------------------

typedef void* (__fastcall* tCallNoArgs)(void* ecx, void* edx);
typedef void* (__fastcall* tCallOneArg)(void* ecx, void* edx, void* arg);

static void* VCall0(void* obj, int byteSlot)
{
    void** vt = *(void***)obj;
    tCallNoArgs fn = (tCallNoArgs)vt[byteSlot / 4];
    return fn(obj, 0);
}

static void* VCall1(void* obj, int byteSlot, void* arg)
{
    void** vt = *(void***)obj;
    tCallOneArg fn = (tCallOneArg)vt[byteSlot / 4];
    return fn(obj, 0, arg);
}


// Имя класса объекта через RTTI (MSVC x86): перед таблицей виртуальных
// функций лежит указатель на CompleteObjectLocator, у него 4-е поле —
// указатель на TypeDescriptor, а в нём с +8 лежит "исковерканное" имя
// вида ".?AVCProvinceView@@". Не работает для классов без RTTI/vtable.
static const char* GetRTTIClassName(void* obj)
{
    if (!obj)
        return "(null)";

    void** vtable = *(void***)obj;
    if (!vtable)
        return "(no vtable)";

    DWORD* completeObjectLocator = *(DWORD**)((unsigned char*)vtable - 4);
    if (!completeObjectLocator)
        return "(no RTTI)";

    DWORD* typeDescriptor = (DWORD*)completeObjectLocator[3];
    if (!typeDescriptor)
        return "(no RTTI)";

    return (const char*)typeDescriptor + 8;
}


// Содержимое std::string движка.
static const char* GStrText(void* str)
{
    if (!str)
        return "";

    unsigned char* p = (unsigned char*)str;
    unsigned res = *(unsigned*)(p + 0x14);

    const char* data = (res > 15) ? *(const char**)p : (const char*)p;
    return data ? data : "";
}

// Записать текст в существующую std::string, не превышая ёмкости.
static void GStrSet(void* str, const char* text)
{
    if (!str)
        return;

    unsigned char* p = (unsigned char*)str;
    unsigned res = *(unsigned*)(p + 0x14);
    unsigned len = (unsigned)strlen(text);

    if (len > res)
        len = res;

    char* data = (res > 15) ? *(char**)p : (char*)p;
    if (!data)
        return;

    memcpy(data, text, len);
    data[len] = 0;
    *(unsigned*)(p + 0x10) = len;
}


// ---------------------------------------------------------------
// Состояние
// ---------------------------------------------------------------

static DWORD  g_base = 0;
static DWORD  g_imageSize = 0;
static void* g_fnOnMakeDecision = 0;

typedef BOOL(WINAPI* tIsBadReadPtr)(const void*, UINT_PTR);
static tIsBadReadPtr g_fnIsBadReadPtr = 0;

// Замена запрещённого IsBadReadPtr: та же сигнатура (TRUE = память
// плохая), но через SEH, без обхода PAGE_GUARD ядром.
static BOOL WINAPI SafeIsBadReadPtr(const void* lp, UINT_PTR ucb)
{
    if (!lp || ucb == 0)
        return TRUE;
    __try
    {
        volatile const unsigned char* p = (const unsigned char*)lp;
        (void)p[0];
        if (ucb > 1)
            (void)p[ucb - 1];
        return FALSE;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return TRUE;
    }
}

static unsigned char g_glue[MAX_BUTTONS][GLUE_SIZE];
static unsigned char g_fakeElem[MAX_BUTTONS][0x30];
static char          g_decisionText[MAX_BUTTONS][128];
static char          g_nameStorage[128];


// ---------------------------------------------------------------
// Обработчики кликов
//
// __stdcall: очистку стека делает сама функция. При __cdecl компилятор
// добавлял свой add esp,4 поверх её ret 4, и возврат уходил по битому
// стеку — проверено логом.
// ---------------------------------------------------------------

typedef void(__stdcall* tOnMakeDecision)(void*);

static void __cdecl FireDecision(int index)
{
    if (!g_fnOnMakeDecision || index < 0 || index >= BUTTON_COUNT)
    {
        Log("FireDecision: bad state, index=%d", index);
        return;
    }

    Log("FireDecision: '%s' -> '%s'",
        BUTTONS[index].button, BUTTONS[index].decision);

    ((tOnMakeDecision)g_fnOnMakeDecision)(g_fakeElem[index]);
}


// Склейка хранит один указатель на метод, поэтому у каждой кнопки
// должен быть свой обработчик. Различаются они только номером.
//
// Форма с __asm перед каждой инструкцией: блочная запись __asm { ... }
// внутри макроса схлопывается в одну строку и не разбирается.
#define THUNK(n)                             \
    __declspec(naked) static void Thunk##n() \
    {                                        \
        __asm push ebp                       \
        __asm mov  ebp, esp                  \
        __asm pushad                         \
        __asm push n                         \
        __asm call FireDecision              \
        __asm add  esp, 4                    \
        __asm popad                          \
        __asm mov  esp, ebp                  \
        __asm pop  ebp                       \
        __asm ret                            \
    }

THUNK(0) THUNK(1) THUNK(2) THUNK(3)
THUNK(4) THUNK(5) THUNK(6) THUNK(7)

static void* const THUNKS[MAX_BUTTONS] =
{
    (void*)&Thunk0, (void*)&Thunk1, (void*)&Thunk2, (void*)&Thunk3,
    (void*)&Thunk4, (void*)&Thunk5, (void*)&Thunk6, (void*)&Thunk7,
};


// Строка тултипа "PLURALITY_CHANGE" в игре хардкожена в exe и всегда
// добавляется как "<локализация>: <число>" — вырезать её сборку внутри
// движка рискованно (рядом идут байты состояния раскрутки стека C++
// исключений для временных std::string). Вместо этого текст локализации
// уже очищен (localisation/*.csv), и от строки остаётся голое число
// вида "0.00" на отдельной строке. Убираем такие строки уже из готового
// текста тултипа, после того как оригинал его построил.
static bool IsBareNumberLine(const char* s, size_t len)
{
    // Пустая метка в локализации хранится как один пробел (иначе игра
    // подставляет вместо неё сырой ключ), поэтому строка выглядит как
    // " : 0.00" — пропускаем ведущие пробелы/табы/двоеточие тоже.
    while (len && (s[0] == ' ' || s[0] == '\t' || s[0] == ':'))
    {
        ++s;
        --len;
    }
    while (len && (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\r'))
        --len;

    if (len == 0)
        return false;

    bool sawDigit = false;
    size_t i = 0;
    while (i < len)
    {
        unsigned char c = (unsigned char)s[i];

        // Цветовой код Paradox: 0xA7 + один байт (например §G...§!) —
        // невидим на экране, пропускаем как есть.
        if (c == 0xA7 && i + 1 < len)
        {
            i += 2;
            continue;
        }

        if (c >= '0' && c <= '9')
        {
            sawDigit = true;
            ++i;
            continue;
        }
        if (c == '.' || c == '-' || c == '+')
        {
            ++i;
            continue;
        }
        return false;
    }
    return sawDigit;
}

static void StripBareNumberLines(void* retBuf)
{
    const char* text = GStrText(retBuf);
    if (!text || !*text)
        return;

    char buf[1024];
    size_t n = strlen(text);
    if (n >= sizeof(buf))
        n = sizeof(buf) - 1;
    memcpy(buf, text, n);
    buf[n] = 0;

    char out[1024];
    size_t o = 0;
    size_t lineStart = 0;

    for (size_t i = 0; i <= n; ++i)
    {
        if (i == n || buf[i] == '\n')
        {
            size_t lineLen = i - lineStart;
            if (!IsBareNumberLine(buf + lineStart, lineLen))
            {
                memcpy(out + o, buf + lineStart, lineLen);
                o += lineLen;
                if (i < n)
                    out[o++] = '\n';
            }
            lineStart = i + 1;
        }
    }
    out[o] = 0;

    GStrSet(retBuf, out);
}


// Подсказка над элементом. Вызывается после оригинала: тот кладёт
// свой текст в retBuf.
static void OnTooltip(int viewIndex, void* retBuf, void* element)
{
    if (!retBuf || !element)
        return;

    const char* name = GStrText(VCall0(element, VT_GET_NAME));

    if (viewIndex == VIEW_POLITICS && strcmp(name, "plurality") == 0)
        StripBareNumberLines(retBuf);
}


// ---------------------------------------------------------------
// Подписка кнопок
// ---------------------------------------------------------------

static bool SetupButtons(int viewIndex, void* view)
{
    const ViewDef& vd = VIEWS[viewIndex];
    unsigned char* v = (unsigned char*)view;

    void* container = *(void**)(v + vd.offContainer);
    if (!container)
    {
        Log("Setup[%s]: контейнер пуст", vd.name);
        return false;
    }

    void* host = container;

    if (vd.window)
    {
        GStr sWindow;
        MakeStr(&sWindow, g_nameStorage, sizeof(g_nameStorage), vd.window);

        host = VCall1(container, VT_FIND_WINDOW, &sWindow);
        if (!host)
        {
            Log("Setup[%s]: окно '%s' не найдено", vd.name, vd.window);
            return false;
        }
    }

    int done = 0;

    for (int i = 0; i < BUTTON_COUNT && i < MAX_BUTTONS; ++i)
    {
        if (BUTTONS[i].view != viewIndex)
            continue;

        GStr sButton;
        MakeStr(&sButton, g_nameStorage, sizeof(g_nameStorage), BUTTONS[i].button);

        void* button = VCall1(host, VT_FIND_CHILD, &sButton);
        if (!button)
        {
            Log("Setup[%s]: кнопка '%s' не найдена", vd.name, BUTTONS[i].button);
            continue;
        }

        // У каждой кнопки свой клон склейки со своим обработчиком.
        memcpy(g_glue[i], v + vd.offGlue, GLUE_SIZE);
        *(void**)(g_glue[i] + OFF_GLUE_METHOD) = THUNKS[i];

        void* observable = (unsigned char*)button + OFF_OBSERVABLE;
        VCall1(observable, VT_ADD_OBSERVER, g_glue[i]);

        Log("Setup[%s]: '%s' подписана", vd.name, BUTTONS[i].button);
        ++done;
    }

    return done > 0;
}


// ---------------------------------------------------------------
// Кнопка "Скрыть колонии" в окне производства (вкладка "Фабрики").
//
// Своя, отдельная от BUTTONS[]/THUNKS[] подписка: та система жмёт
// на MakeDecision, а тут нужен обычный флаг + перерисовка списка.
// Склейка берётся из offGlue (для CProductionView это 0x120 —
// найдено в конструкторе FUN_006ee930: param_1[0x48] — единственный
// там CButtonObserverGlue<CProductionView>, чей колбэк — сам
// FUN_006f83b0, обработчик кликов по факторийным кнопкам), но
// клонируется и патчится вручную, в стороне от g_glue[]/THUNKS[],
// чтобы не задевать существующую систему решений.
//
// FUN_006f3e70 (обновление списка вкладки "Фабрики") читает "this"
// не из ECX/стека, а из EDI, оставшегося от вызвавшей её функции
// (FUN_006f83b0, обработчик кликов по кнопкам этой вкладки) — поэтому
// вызываем её сами, выставив EDI вручную.
// ---------------------------------------------------------------

static bool          g_hideColonialStates = false;
static void*         g_hideColonialView = 0;
static void*         g_hideColonialConfiguredView = 0;
static unsigned char g_hideColonialGlue[GLUE_SIZE];

static const DWORD RVA_PRODUCTION_REFRESH_FACTORIES = 0x2F3E70;  // FUN_006f3e70

static void __cdecl OnHideColonialClicked()
{
    g_hideColonialStates = !g_hideColonialStates;
    Log("HideColonialStates: %s", g_hideColonialStates ? "включено" : "выключено");

    if (!g_hideColonialView)
        return;

    void* view = g_hideColonialView;
    void* fn = (void*)(g_base + RVA_PRODUCTION_REFRESH_FACTORIES);

    __asm {
        pushad
        mov edi, view
        call fn
        popad
    }
}

__declspec(naked) static void HideColonialThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        pushad
        call OnHideColonialClicked
        popad
        mov esp, ebp
        pop ebp
        ret
    }
}

static bool SetupHideColonialButton(void* view)
{
    unsigned char* v = (unsigned char*)view;
    const ViewDef& vd = VIEWS[2];  // CProductionView

    void* container = *(void**)(v + vd.offContainer);
    if (!container)
        return false;

    GStr sWindow;
    MakeStr(&sWindow, g_nameStorage, sizeof(g_nameStorage), "factory_buttons");

    void* host = VCall1(container, VT_FIND_WINDOW, &sWindow);
    if (!host)
    {
        Log("SetupHideColonialButton: окно 'factory_buttons' не найдено");
        return false;
    }

    GStr sButton;
    MakeStr(&sButton, g_nameStorage, sizeof(g_nameStorage), "hide_colonial_states");

    void* button = VCall1(host, VT_FIND_CHILD, &sButton);
    if (!button)
    {
        Log("SetupHideColonialButton: кнопка 'hide_colonial_states' не найдена");
        return false;
    }

    memcpy(g_hideColonialGlue, v + vd.offGlue, GLUE_SIZE);
    *(void**)(g_hideColonialGlue + OFF_GLUE_METHOD) = HideColonialThunk;

    void* observable = (unsigned char*)button + OFF_OBSERVABLE;
    VCall1(observable, VT_ADD_OBSERVER, g_hideColonialGlue);

    g_hideColonialView = view;

    Log("SetupHideColonialButton: подписана");
    return true;
}


// ---------------------------------------------------------------
// PLAYER_BUTTONS - кнопки "плеера" в topbar.gui:
//   button_fe_player_next  - пропускает играющий трек, игра сама включает
//                            следующий;
//   button_fe_player_pause - ставит музыку на паузу / снимает с паузы.
//
// Музыка. Текущий объект музыки лежит в DAT_0131cb34 (CMusic на
// DirectShow либо CNullMusic, если звука нет). Автомат состояний -
// DAT_00f20c3c (0 - остановлено, 1 - играет, 2 - пауза, 3 - нет
// звука). Каждый кадр внутрибойного цикла (FUN_00654d80) игра делает:
//     если музыка включена и громкость > 0:
//         если объект "активен" (слот +0x38: состояние не 0 и не 2)
//             и трек ещё не закончился (слот +0x2c) - ничего;
//         иначе - FUN_00455290 выбирает следующую песню из songs.txt
//             (случайно, с весами и без недавно игравших), затем
//             Play(имя) (слот +8) и Start (слот +0xC).
// Поэтому пропуск трека - это обычный Stop (слот +0x10, FUN_009e96b0:
// останавливает граф, состояние -> 0): на следующем кадре игра
// увидит "не активен" и сама запустит следующую песню тем же путём,
// каким делает это по окончании трека. Своего выбора песни мы не
// делаем и ГСЧ игры не трогаем (выбор идёт локальным MT внутри
// FUN_00455290), поэтому на синхронизацию мультиплеера это не влияет.
//
// Пауза. Родной слот паузы игры (+0x14, FUN_009e9710) для нас не годится:
// он переводит автомат в состояние 2, а сразу после этого цикл выше
// видит "не активен" и запускает НОВУЮ песню. Поэтому паузим сам граф
// DirectShow (IMediaControl, DAT_00f20c4c, слоты Run +0x1C / Pause +0x20 /
// GetState +0x28), оставляя автомат игры в состоянии 1 ("играет"): пока
// граф на паузе, событие конца трека не приходит, игра считает, что песня
// ещё играет, и ничего не запускает. Кнопка - переключатель: по
// состоянию графа "работает" -> Pause, "на паузе" -> Run. Если игра
// не в состоянии 1 (пауза между песнями, нет звука) - клик игнорируется.
//
// Кнопки. Имён "button_fe_player_*" движок не знает, поэтому
// подписываем их сами - как кнопки решений и "hide_colonial_states":
// ищем кнопку по имени в окне topbar, клонируем "склейку"
// CButtonObserverGlue (берём vftable и владельца у живой склейки topbar,
// остальные обработчики обнуляем), подставляем свой обработчик клика
// (+8) и вешаем склейку на Observable кнопки.
//
// Когда подписывать. FUN_007129a0 (rva 0x3129A0) при каждом создании
// окна topbar находит его кнопки по имени и подписывает встроенные
// склейки (окно хранится в topbar+0x20). Зовётся она из конструктора
// topbar (call по rva 0x30D090) и виртуально (vftable[0] класса,
// 0xE113D0 - перезагрузка интерфейса). Подменяем оба места: зовём
// оригинал, затем подписываем свою кнопку на свежесозданном окне.
// ---------------------------------------------------------------

static const DWORD RVA_TOPBAR_BUILD       = 0x3129A0;  // FUN_007129a0
static const DWORD RVA_TOPBAR_BUILD_CALL  = 0x30D090;  // call в конструкторе topbar
static const DWORD RVA_TOPBAR_BUILD_VSLOT = 0xA113D0;  // vftable[0] класса topbar
static const int   OFF_TOPBAR_WINDOW = 0x20;           // topbar -> окно из topbar.gui
static const int   OFF_TOPBAR_GLUE   = 0x218;          // склейка у player_flag (любая живая подойдёт)

static const DWORD RVA_MUSIC_OBJECT_PTR = 0xF1CB34;    // DAT_0131cb34
static const DWORD RVA_MUSIC_STATE      = 0xB20C3C;    // DAT_00f20c3c
static const DWORD RVA_MUSIC_MEDIACTL   = 0xB20C4C;    // DAT_00f20c4c: IMediaControl
static const int   VT_MUSIC_STOP        = 0x10;        // слот 4 - Stop
static const int   VT_MC_RUN            = 0x1C;        // IMediaControl::Run
static const int   VT_MC_PAUSE          = 0x20;        // IMediaControl::Pause
static const int   VT_MC_GETSTATE       = 0x28;        // IMediaControl::GetState(ms, OAFilterState*)

// Обработчик клика по слоту +8 склейки: mov eax,[ecx+8]; test eax,eax;
// jz ret; mov ecx,[ecx+4]; jmp eax; ret (FUN_00737d00). Если у склейки
// topbar в этом слоте что-то другое - формат не тот, не подписываем.
static const unsigned char GLUE_CLICK_STUB[13] =
    { 0x8B, 0x41, 0x08, 0x85, 0xC0, 0x74, 0x05, 0x8B, 0x49, 0x04, 0xFF, 0xE0, 0xC3 };

static unsigned char g_playerNextGlue[GLUE_SIZE];
static unsigned char g_playerPauseGlue[GLUE_SIZE];
static DWORD         g_playerNextLastClick = 0;
static DWORD         g_playerPauseLastClick = 0;

static void __cdecl OnPlayerNextClicked()
{
    // Страховка от двойной подписки (перезагрузка интерфейса на том же
    // окне): один клик не должен пропускать два трека.
    DWORD now = GetTickCount();
    if (now - g_playerNextLastClick < 250)
        return;
    g_playerNextLastClick = now;

    __try
    {
        void* music = *(void**)(g_base + RVA_MUSIC_OBJECT_PTR);
        if (!music || SafeIsBadReadPtr(music, 4))
        {
            Log("PlayerNext: объекта музыки нет");
            return;
        }

        DWORD before = *(DWORD*)(g_base + RVA_MUSIC_STATE);
        VCall0(music, VT_MUSIC_STOP);
        DWORD after = *(DWORD*)(g_base + RVA_MUSIC_STATE);
        LogDbg("PlayerNext: трек пропущен (состояние плеера %u -> %u)", before, after);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("PlayerNext: исключение при остановке трека");
    }
}

// Тот же контракт, что у HideColonialThunk: вызывается из слота склейки
// (ECX = владелец, стековых аргументов нет), сохраняет все регистры.
__declspec(naked) static void PlayerNextThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        pushad
        call OnPlayerNextClicked
        popad
        mov esp, ebp
        pop ebp
        ret
    }
}

// Пауза/продолжение: переключатель по реальному состоянию графа
// DirectShow (OAFilterState: 0 - остановлен, 1 - пауза, 2 - работает).
static void __cdecl OnPlayerPauseClicked()
{
    DWORD now = GetTickCount();
    if (now - g_playerPauseLastClick < 250)
        return;
    g_playerPauseLastClick = now;

    __try
    {
        DWORD gameState = *(DWORD*)(g_base + RVA_MUSIC_STATE);
        void* ctl = *(void**)(g_base + RVA_MUSIC_MEDIACTL);
        if (gameState != 1 || !ctl || SafeIsBadReadPtr(ctl, 4))
        {
            LogDbg("PlayerPause: игнорируем клик (состояние плеера %u, IMediaControl=%08X)",
                gameState, (DWORD)(DWORD_PTR)ctl);
            return;
        }

        // IMediaControl - COM-интерфейс: методы __stdcall, "this" первым
        // аргументом на стеке (так же зовёт их и сама игра).
        typedef LONG(__stdcall* tMcNoArgs)(void* self);
        typedef LONG(__stdcall* tMcGetState)(void* self, LONG msTimeout, LONG* state);
        void** mcVt = *(void***)ctl;

        LONG filterState = -1;
        ((tMcGetState)mcVt[VT_MC_GETSTATE / 4])(ctl, 100, &filterState);

        if (filterState == 2)
        {
            LONG hr = ((tMcNoArgs)mcVt[VT_MC_PAUSE / 4])(ctl);
            LogDbg("PlayerPause: пауза (hr=%08X)", (unsigned)hr);
        }
        else if (filterState == 1)
        {
            LONG hr = ((tMcNoArgs)mcVt[VT_MC_RUN / 4])(ctl);
            LogDbg("PlayerPause: продолжение (hr=%08X)", (unsigned)hr);
        }
        else
        {
            LogDbg("PlayerPause: граф в состоянии %d - ничего не делаем", (int)filterState);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("PlayerPause: исключение");
    }
}

__declspec(naked) static void PlayerPauseThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        pushad
        call OnPlayerPauseClicked
        popad
        mov esp, ebp
        pop ebp
        ret
    }
}

// ---------------------------------------------------------------
// Ползунок громкости музыки "fe_player_volume_slider" в topbar.gui -
// дубль ползунка "musicvolume_slider" из окна настроек.
//
// Громкость музыки игра хранит в объекте настроек (FUN_00475500 отдаёт
// синглтон DAT_0125b5e0): float 0..100 по смещению +0x88 (мастер +0x80,
// эффекты +0x84). Каждый кадр функция FUN_009df2b0 считает из них
//     громкость = музыка*0.01 * (мастер*0.01)
// и сама передаёт её в CMusic (слот +0x1C), поэтому нам достаточно
// писать в +0x88 - звук подхватится на следующем кадре.
//
// Ползунок -> настройки: на ползунок вешаем "склейку"
// CScrollbarObserverGlue (vftable 0xE14404 - у окна настроек так
// подписан ползунок гаммы): слот 1 (обработчик в +8, без аргументов,
// ECX = владелец) вызывается при смене значения. Владельцем ставим сам
// ползунок, в обработчике читаем GetValue() и пишем в настройки.
// Настройки -> ползунок (окно настроек, загрузка): каждый кадр (хук на
// единственный call FUN_009df2b0, rva 0x285727) сверяем +0x88 с тем, что
// видели в прошлый раз, и при изменении ставим значение ползунка. Своё
// же значение не зеркалим (g_volSeen), чтобы не драться с перетаскиванием.
//
// Ползунок ищется у окна методом vtable+0x4C (типизированный "найти
// ползунок по имени"; +0x34 - кнопки). GetValue - слот +0x10 подобъекта
// +0x54 (float в ST0), SetValue(int значение*1000, 1, 1) - слот +0x1C
// (так зовёт его окно настроек). Указатель на ползунок живёт, пока жив
// topbar: чистим его в деструкторе topbar (vftable[1]) и пересоздаём при
// каждой перестройке окна.
// ---------------------------------------------------------------
static const int   VT_FIND_SCROLLBAR = 0x4C;
static const int   VT_SB_GETVALUE    = 0x10;
static const int   VT_SB_SETVALUE    = 0x1C;
static const DWORD RVA_OPTIONS_PTR   = 0xE5B5E0;   // DAT_0125b5e0
static const int   OFF_OPT_MUSIC_VOLUME = 0x88;
static const DWORD RVA_SCROLLBAR_GLUE_VTABLE = 0xA14404;  // CScrollbarObserverGlue<CSettingsScreen>
static const DWORD RVA_FRAME_PUMP      = 0x5DF2B0;  // FUN_009df2b0
static const DWORD RVA_FRAME_PUMP_CALL = 0x285727;  // единственный call на неё
static const DWORD RVA_TOPBAR_DTOR     = 0x30D0C0;  // vftable[1] topbar (scalar deleting dtor)
static const char* const PLAYER_VOLUME_SLIDER = "fe_player_volume_slider";

// mov eax,ecx; mov ecx,[eax+4]; mov eax,[eax+8]; jmp eax - слот 1 склейки.
static const unsigned char SCROLL_GLUE_CHANGE_STUB[10] =
    { 0x8B, 0xC1, 0x8B, 0x48, 0x04, 0x8B, 0x40, 0x08, 0xFF, 0xE0 };

static void*         g_volSlider = 0;
static void*         g_volTopbar = 0;
static float         g_volSeen = -1000.0f;     // последнее значение настроек, которое мы уже отразили
static DWORD         g_volLastPoll = 0;
static LONG          g_volLogCount = 0;        // общий предел строк лога про ползунок
static LONG          g_volPumpCalls = 0;
static bool          g_volInternal = false;    // идёт наш собственный SetValue - события игнорируем
static bool          g_volPushToMenu = false;  // наш ползунок сменил настройки - окну настроек нужно обновить свой
static unsigned char g_volGlue[GLUE_SIZE];

typedef float(__fastcall* tSbGetValue)(void* self, void* edx);
typedef void(__fastcall* tSbSetValue)(void* self, void* edx, int value, int a, int b);

static float* OptionsMusicVolumePtr()
{
    void* opt = *(void**)(g_base + RVA_OPTIONS_PTR);
    if (!opt || SafeIsBadReadPtr((char*)opt + OFF_OPT_MUSIC_VOLUME, 4))
        return 0;
    return (float*)((char*)opt + OFF_OPT_MUSIC_VOLUME);
}

static float SliderGetValue(void* slider)
{
    void* sub = (unsigned char*)slider + OFF_OBSERVABLE;
    void** vt = *(void***)sub;
    return ((tSbGetValue)vt[VT_SB_GETVALUE / 4])(sub, 0);
}

static void SliderSetValue(void* slider, float v)
{
    void* sub = (unsigned char*)slider + OFF_OBSERVABLE;
    void** vt = *(void***)sub;
    ((tSbSetValue)vt[VT_SB_SETVALUE / 4])(sub, 0, (int)(v * 1000.0f + 0.5f), 1, 1);
}

// Наш собственный SetValue: событие смены значения, которое он породит
// у нашего же обработчика, игнорируем (иначе получим эхо в настройки).
static void SliderSetInternal(void* slider, float v)
{
    g_volInternal = true;
    SliderSetValue(slider, v);
    g_volInternal = false;
}

// Смена значения нашего ползунка (пользователем) -> настройки игры.
static void __cdecl OnVolumeSliderChanged(void* slider)
{
    if (g_volInternal)
        return;

    __try
    {
        float* p = OptionsMusicVolumePtr();
        if (!slider || !p)
            return;

        float v = SliderGetValue(slider);
        if (v < 0.0f) v = 0.0f;
        if (v > 100.0f) v = 100.0f;

        *p = v;
        g_volSeen = v;
        g_volPushToMenu = true;      // окно настроек подхватит при ближайшем Update

        if (InterlockedIncrement(&g_volLogCount) <= 40)
            LogDbg("PlayerVolume: ползунок topbar -> громкость музыки %.1f", v);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("PlayerVolume: исключение в обработчике ползунка");
    }
}

// ECX = владелец склейки = ползунок. Регистры сохраняем.
__declspec(naked) static void VolumeSliderThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        pushad
        push ecx
        call OnVolumeSliderChanged
        add esp, 4
        popad
        mov esp, ebp
        pop ebp
        ret
    }
}

static bool SetupVolumeSlider(void* window, void* topbar)
{
    g_volSlider = 0;
    g_volTopbar = 0;

    GStr sName;
    MakeStr(&sName, g_nameStorage, sizeof(g_nameStorage), PLAYER_VOLUME_SLIDER);

    void* slider = VCall1(window, VT_FIND_SCROLLBAR, &sName);
    if (!slider)
    {
        Log("PlayerVolume: ползунок '%s' не найден в topbar.gui", PLAYER_VOLUME_SLIDER);
        return false;
    }

    void** gvt = (void**)(g_base + RVA_SCROLLBAR_GLUE_VTABLE);
    if (SafeIsBadReadPtr(gvt, 8) || SafeIsBadReadPtr(gvt[1], sizeof(SCROLL_GLUE_CHANGE_STUB)) ||
        memcmp(gvt[1], SCROLL_GLUE_CHANGE_STUB, sizeof(SCROLL_GLUE_CHANGE_STUB)) != 0)
    {
        Log("PlayerVolume: vftable склейки ползунка (rva %06X) не совпал - не подписываем",
            RVA_SCROLLBAR_GLUE_VTABLE);
        return false;
    }

    // Начальное значение - из настроек, ДО подписки (чтобы SetValue не
    // дёрнул наш же обработчик).
    float* p = OptionsMusicVolumePtr();
    float vol = p ? *p : 0.0f;
    if (p)
    {
        g_volSeen = vol;
        SliderSetInternal(slider, vol);
    }

    memset(g_volGlue, 0, GLUE_SIZE);
    *(void**)(g_volGlue + 0x00) = gvt;
    *(void**)(g_volGlue + 0x04) = slider;
    *(void**)(g_volGlue + OFF_GLUE_METHOD) = (void*)&VolumeSliderThunk;

    void* observable = (unsigned char*)slider + OFF_OBSERVABLE;
    VCall1(observable, VT_ADD_OBSERVER, g_volGlue);

    g_volSlider = slider;
    g_volTopbar = topbar;
    Log("PlayerVolume: ползунок '%s' подписан (slider=%08X, громкость %.1f)",
        PLAYER_VOLUME_SLIDER, (DWORD)(DWORD_PTR)slider, vol);
    return true;
}

// Настройки игры -> ползунок topbar: если значение в настройках изменилось
// не нами (окно настроек, загрузка) - ставим его на ползунок.
static void MirrorOptionsToSlider(const char* who)
{
    void* slider = g_volSlider;
    if (!slider)
        return;

    float* p = OptionsMusicVolumePtr();
    if (!p)
        return;

    float vol = *p;
    if (vol == g_volSeen)
        return;

    g_volSeen = vol;
    SliderSetInternal(slider, vol);
    if (InterlockedIncrement(&g_volLogCount) <= 40)
        LogDbg("PlayerVolume: настройки -> ползунок topbar %.1f (%s)", vol, who);
}

static void RestoreEmbarkMarksIfDue();   // v4.77: определена в блоке SAVE_EMBARKED_ALLY_ARMIES

// Зовётся каждый кадр (перед FUN_009df2b0).
static void __cdecl OnFramePump()
{
    RestoreEmbarkMarksIfDue();
    LONG calls = InterlockedIncrement(&g_volPumpCalls);
    void* slider = g_volSlider;

    if (calls == 1 || calls == 300 || calls == 3000)
        LogDbg("PlayerVolume: покадровый хук жив, вызовов=%d slider=%08X", (int)calls,
            (DWORD)(DWORD_PTR)slider);

    if (!slider)
        return;

    DWORD now = GetTickCount();
    if (now - g_volLastPoll < 100)
        return;
    g_volLastPoll = now;

    __try
    {
        MirrorOptionsToSlider("кадр");
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_volSlider = 0;
        g_volTopbar = 0;
        Log("PlayerVolume: исключение при синхронизации - ползунок отключён");
    }
}

// ---------------------------------------------------------------
// Окно настроек: FUN_0075bb50 (CSettingsScreen, vftable[4]; this+0x328 /
// +0x32C / +0x330 - ползунки мастера / эффектов / музыки). Копирует значения
// СВОИХ ползунков в настройки игры, поэтому если окно держит устаревшие
// значения, оно затирает изменения, сделанные нашим ползунком. Хук:
//  - перед оригиналом: если громкость меняли ползунком topbar, ставим то же
//    значение на ползунок музыки в окне настроек (флаг g_volPushToMenu),
//    тогда оригинал перепишет настройки тем же числом;
//  - после оригинала: если окно изменило настройки (пользователь двигает
//    свой ползунок) - отражаем на ползунок topbar.
// Пролог "push ebp; mov ebp,esp; push ecx; push esi" (5 байт) переносим в
// трамплин и возвращаемся на "mov esi,ecx" (+5). Сигнатура вызова проверена
// по дизассемблеру: __thiscall без аргументов, ret без операнда.
// ---------------------------------------------------------------
static const DWORD RVA_APPLY_VOLUMES = 0x35BB50;
static const unsigned char APPLY_VOLUMES_SIG[7] = { 0x55, 0x8B, 0xEC, 0x51, 0x56, 0x8B, 0xF1 };
static const int OFF_SETTINGS_MUSIC_SLIDER = 0x330;

typedef void(__fastcall* tApplyVolumes)(void* self, void* edx);
static tApplyVolumes g_applyVolumesOrig = 0;
static LONG          g_applyVolCalls = 0;

static void __fastcall ApplyVolumesHook(void* self, void* edx)
{
    LONG n = InterlockedIncrement(&g_applyVolCalls);

    __try
    {
        float* p = OptionsMusicVolumePtr();
        void* menuSlider = self ? *(void**)((unsigned char*)self + OFF_SETTINGS_MUSIC_SLIDER) : 0;
        bool haveMenu = menuSlider && !SafeIsBadReadPtr(menuSlider, 0x60);

        if (n <= 3 || n == 100 || n == 1000)
            LogDbg("SettingsApply: вызов #%d this=%08X настройки=%.1f ползунок окна=%.1f push=%d",
                (int)n, (DWORD)(DWORD_PTR)self, p ? *p : -1.0f,
                haveMenu ? SliderGetValue(menuSlider) : -1.0f, (int)g_volPushToMenu);

        if (g_volPushToMenu && haveMenu && p)
        {
            SliderSetValue(menuSlider, *p);
            g_volPushToMenu = false;
            if (InterlockedIncrement(&g_volLogCount) <= 40)
                LogDbg("PlayerVolume: ползунок topbar -> ползунок окна настроек %.1f", *p);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("SettingsApply: исключение до оригинала");
    }

    g_applyVolumesOrig(self, edx);

    __try
    {
        MirrorOptionsToSlider("окно настроек");
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_volSlider = 0;
        g_volTopbar = 0;
        Log("SettingsApply: исключение после оригинала - ползунок topbar отключён");
    }
}

// Кнопка OK/Применить окна настроек: FUN_0075c650 вызывает FUN_0075d4b0
// (call по rva 0x35C67E), которая переписывает ВСЕ настройки из элементов
// окна, в том числе громкости. Функция берёт "this" из ESI вызывающей
// (нестандартное соглашение), без стековых аргументов, ret без операнда, -
// поэтому заглушка зовёт её как есть (регистры не трогаем) и только
// потом отражает громкость на ползунок topbar.
static const DWORD RVA_SETTINGS_APPLY      = 0x35D4B0;   // FUN_0075d4b0
static const DWORD RVA_SETTINGS_APPLY_CALL = 0x35C67E;   // единственный call на неё
static DWORD g_settingsApplyOrig = 0;

static void __cdecl OnSettingsApplied()
{
    __try
    {
        MirrorOptionsToSlider("кнопка OK окна настроек");
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_volSlider = 0;
        g_volTopbar = 0;
        Log("SettingsApply: исключение после OK - ползунок topbar отключён");
    }
}

__declspec(naked) static void SettingsApplyThunk()
{
    __asm {
        call dword ptr [g_settingsApplyOrig]
        pushad
        call OnSettingsApplied
        popad
        ret
    }
}

static bool PatchSettingsApplyCall()
{
    unsigned char* p = (unsigned char*)(g_base + RVA_SETTINGS_APPLY_CALL);
    DWORD expectRel = (g_base + RVA_SETTINGS_APPLY) - ((DWORD)(DWORD_PTR)p + 5);
    if (p[0] != 0xE8 || *(DWORD*)(p + 1) != expectRel)
    {
        Log("SettingsApply: call применения настроек не совпал rva %06X (%02X %02X %02X %02X %02X)",
            RVA_SETTINGS_APPLY_CALL, p[0], p[1], p[2], p[3], p[4]);
        return false;
    }

    g_settingsApplyOrig = g_base + RVA_SETTINGS_APPLY;

    DWORD rel = (DWORD)(DWORD_PTR)&SettingsApplyThunk - ((DWORD)(DWORD_PTR)p + 5);
    DWORD oldProtect = 0;
    if (!VirtualProtect(p + 1, 4, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    *(DWORD*)(p + 1) = rel;
    VirtualProtect(p + 1, 4, oldProtect, &oldProtect);
    Log("SettingsApply: call применения настроек подменён rva %06X", RVA_SETTINGS_APPLY_CALL);
    return true;
}

static bool InstallApplyVolumesHook()
{
    unsigned char* fn = (unsigned char*)(g_base + RVA_APPLY_VOLUMES);
    if (memcmp(fn, APPLY_VOLUMES_SIG, sizeof(APPLY_VOLUMES_SIG)) != 0)
    {
        Log("SettingsApply: сигнатура не совпала rva %06X - не патчим", RVA_APPLY_VOLUMES);
        return false;
    }

    // Трамплин: перенесённый пролог (5 байт) + jmp на fn+5.
    unsigned char* tramp = (unsigned char*)VirtualAlloc(0, 32, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!tramp)
        return false;
    memcpy(tramp, fn, 5);
    tramp[5] = 0xE9;
    *(DWORD*)(tramp + 6) = (DWORD)(DWORD_PTR)(fn + 5) - ((DWORD)(DWORD_PTR)tramp + 10);
    g_applyVolumesOrig = (tApplyVolumes)(DWORD_PTR)tramp;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&ApplyVolumesHook - ((DWORD)(DWORD_PTR)fn + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(fn, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(fn, patch, sizeof(patch));
    VirtualProtect(fn, sizeof(patch), oldProtect, &oldProtect);

    Log("SettingsApply: хук установлен rva %06X", RVA_APPLY_VOLUMES);
    return true;
}

static DWORD g_framePumpOrig = 0;

__declspec(naked) static void FramePumpThunk()
{
    __asm {
        pushad
        call OnFramePump
        popad
        jmp dword ptr [g_framePumpOrig]
    }
}

typedef void*(__fastcall* tTopbarDtor)(void* self, void* edx, int flags);
static tTopbarDtor g_topbarDtorOrig = 0;

// vftable[1] topbar: __thiscall(this, flags), ret 4, результат - this.
static void* __fastcall TopbarDtorHook(void* self, void* edx, int flags)
{
    if (self == g_volTopbar)
    {
        g_volSlider = 0;
        g_volTopbar = 0;
    }
    return g_topbarDtorOrig(self, edx, flags);
}

struct PlayerButtonDef
{
    const char*    name;
    void*          thunk;
    unsigned char* glue;
};

// Подписывает одну кнопку topbar: клон склейки с обработчиком клика в +8.
static bool SubscribePlayerButton(void* window, unsigned char* srcGlue, const PlayerButtonDef& def)
{
    GStr sButton;
    MakeStr(&sButton, g_nameStorage, sizeof(g_nameStorage), def.name);

    void* button = VCall1(window, VT_FIND_CHILD, &sButton);
    if (!button)
    {
        Log("Player: кнопка '%s' не найдена в topbar.gui", def.name);
        return false;
    }

    // Обработчики оригинальной склейки не копируем - только vftable и
    // владельца; иначе наведение/правый клик вызвали бы чужие обработчики.
    void** vt = *(void***)srcGlue;
    memset(def.glue, 0, GLUE_SIZE);
    *(void**)(def.glue + 0x00) = vt;
    *(void**)(def.glue + 0x04) = *(void**)(srcGlue + 4);
    *(void**)(def.glue + OFF_GLUE_METHOD) = def.thunk;

    void* observable = (unsigned char*)button + OFF_OBSERVABLE;
    VCall1(observable, VT_ADD_OBSERVER, def.glue);

    Log("Player: кнопка '%s' подписана (button=%08X)", def.name, (DWORD)(DWORD_PTR)button);
    return true;
}

static bool SetupPlayerButtons(void* topbar)
{
    unsigned char* t = (unsigned char*)topbar;
    if (!t)
        return false;

    void* window = *(void**)(t + OFF_TOPBAR_WINDOW);
    if (!window)
    {
        Log("Player: у topbar нет окна");
        return false;
    }

    unsigned char* srcGlue = t + OFF_TOPBAR_GLUE;
    void** vt = *(void***)srcGlue;
    if (!vt || SafeIsBadReadPtr(vt, 12) ||
        SafeIsBadReadPtr(vt[2], sizeof(GLUE_CLICK_STUB)) ||
        memcmp(vt[2], GLUE_CLICK_STUB, sizeof(GLUE_CLICK_STUB)) != 0)
    {
        Log("Player: склейка topbar+0x%X не похожа на CButtonObserverGlue - не подписываем",
            (unsigned)OFF_TOPBAR_GLUE);
        return false;
    }

    const PlayerButtonDef defs[] =
    {
        { "button_fe_player_next",  (void*)&PlayerNextThunk,  g_playerNextGlue  },
        { "button_fe_player_pause", (void*)&PlayerPauseThunk, g_playerPauseGlue },
    };

    int done = 0;
    for (int i = 0; i < (int)(sizeof(defs) / sizeof(defs[0])); ++i)
        if (SubscribePlayerButton(window, srcGlue, defs[i]))
            ++done;

    Log("Player: topbar=%08X подписано кнопок: %d", (DWORD)(DWORD_PTR)topbar, done);

    if (SetupVolumeSlider(window, topbar))
        ++done;
    return done > 0;
}

typedef int(__fastcall* tTopbarBuild)(void* self, void* edx);
static tTopbarBuild g_topbarBuildOrig = 0;

// __thiscall без стековых аргументов, ret без операнда; результат - в EAX.
static int __fastcall TopbarBuildHook(void* self, void* edx)
{
    int r = g_topbarBuildOrig(self, edx);

    __try
    {
        SetupPlayerButtons(self);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("PlayerNext: исключение при подписке кнопки");
    }
    return r;
}

static bool PatchTopbarBuildCall()
{
    unsigned char* p = (unsigned char*)(g_base + RVA_TOPBAR_BUILD_CALL);
    DWORD expectRel = (g_base + RVA_TOPBAR_BUILD) - ((DWORD)(DWORD_PTR)p + 5);
    if (p[0] != 0xE8 || *(DWORD*)(p + 1) != expectRel)
    {
        Log("PlayerNext: call в конструкторе topbar не совпал rva %06X (%02X %02X %02X %02X %02X)",
            RVA_TOPBAR_BUILD_CALL, p[0], p[1], p[2], p[3], p[4]);
        return false;
    }

    DWORD rel = (DWORD)(DWORD_PTR)&TopbarBuildHook - ((DWORD)(DWORD_PTR)p + 5);
    DWORD oldProtect = 0;
    if (!VirtualProtect(p + 1, 4, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    *(DWORD*)(p + 1) = rel;
    VirtualProtect(p + 1, 4, oldProtect, &oldProtect);
    Log("PlayerNext: call в конструкторе topbar подменён rva %06X", RVA_TOPBAR_BUILD_CALL);
    return true;
}

static bool PatchTopbarBuildVSlot()
{
    DWORD* slot = (DWORD*)(g_base + RVA_TOPBAR_BUILD_VSLOT);
    if (*slot != g_base + RVA_TOPBAR_BUILD)
    {
        Log("PlayerNext: vftable[0] topbar не совпал rva %06X (%08X)",
            RVA_TOPBAR_BUILD_VSLOT, *slot);
        return false;
    }

    DWORD oldProtect = 0;
    if (!VirtualProtect(slot, 4, PAGE_READWRITE, &oldProtect))
        return false;
    *slot = (DWORD)(DWORD_PTR)&TopbarBuildHook;
    VirtualProtect(slot, 4, oldProtect, &oldProtect);
    Log("PlayerNext: vftable[0] topbar подменён rva %06X", RVA_TOPBAR_BUILD_VSLOT);
    return true;
}

// Деструктор topbar (vftable[1]): чистим указатель на ползунок громкости.
static bool PatchTopbarDtorVSlot()
{
    DWORD* slot = (DWORD*)(g_base + RVA_TOPBAR_BUILD_VSLOT + 4);
    if (*slot != g_base + RVA_TOPBAR_DTOR)
    {
        Log("PlayerVolume: vftable[1] topbar не совпал (%08X)", *slot);
        return false;
    }

    g_topbarDtorOrig = (tTopbarDtor)(DWORD_PTR)(g_base + RVA_TOPBAR_DTOR);

    DWORD oldProtect = 0;
    if (!VirtualProtect(slot, 4, PAGE_READWRITE, &oldProtect))
        return false;
    *slot = (DWORD)(DWORD_PTR)&TopbarDtorHook;
    VirtualProtect(slot, 4, oldProtect, &oldProtect);
    Log("PlayerVolume: vftable[1] topbar (деструктор) подменён");
    return true;
}

// Единственный call на FUN_009df2b0 (покадровая функция звука) - в нашу
// заглушку, которая перед оригиналом зовёт OnFramePump.
static bool PatchFramePumpCall()
{
    unsigned char* p = (unsigned char*)(g_base + RVA_FRAME_PUMP_CALL);
    DWORD expectRel = (g_base + RVA_FRAME_PUMP) - ((DWORD)(DWORD_PTR)p + 5);
    if (p[0] != 0xE8 || *(DWORD*)(p + 1) != expectRel)
    {
        Log("PlayerVolume: call покадровой функции не совпал rva %06X (%02X %02X %02X %02X %02X)",
            RVA_FRAME_PUMP_CALL, p[0], p[1], p[2], p[3], p[4]);
        return false;
    }

    g_framePumpOrig = g_base + RVA_FRAME_PUMP;

    DWORD rel = (DWORD)(DWORD_PTR)&FramePumpThunk - ((DWORD)(DWORD_PTR)p + 5);
    DWORD oldProtect = 0;
    if (!VirtualProtect(p + 1, 4, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    *(DWORD*)(p + 1) = rel;
    VirtualProtect(p + 1, 4, oldProtect, &oldProtect);
    Log("PlayerVolume: call покадровой функции подменён rva %06X", RVA_FRAME_PUMP_CALL);
    return true;
}

static bool InstallPlayerButtons()
{
    g_topbarBuildOrig = (tTopbarBuild)(DWORD_PTR)(g_base + RVA_TOPBAR_BUILD);
    bool a = PatchTopbarBuildCall();
    bool b = PatchTopbarBuildVSlot();

    // Ползунок громкости: без хука деструктора topbar указатель на ползунок
    // мог бы пережить окно, поэтому ставим оба хука или ни одного.
    if (PatchTopbarDtorVSlot())
    {
        PatchFramePumpCall();
        InstallApplyVolumesHook();
        PatchSettingsApplyCall();
    }
    return a || b;
}


// ---------------------------------------------------------------
// MUSIC_FAIR_RANDOM - честный случайный выбор следующей песни.
//
// FUN_00455290 (rva 0x55290) выбирает песню так: обходит песни из
// songs.txt по порядку, пропускает шесть последних сыгранных, для
// каждой остальной берёт "случайное" r и считает
//     счёт = chance(песни) * r,
// побеждает наибольший счёт (при равенстве - ПЕРВАЯ по порядку в файле:
// сравнение "cmp eax,[best]; jle" строгое). Проблемы:
//  1. Генератор - Mersenne twister в локальном массиве из 624 слов на
//     стеке, который НИКОГДА не инициализируется (сида нет вообще): перед
//     первым числом вызывается только шаг "twist" (FUN_009b7700) над тем
//     мусором, что остался в этом месте стека. В одном и том же месте
//     кода мусор почти всегда один и тот же, поэтому "случайные" числа
//     повторяются от вызова к вызову и каждой позиции в списке достаётся
//     практически постоянный r.
//  2. r сильно огрублён: ((y % 5) + 5) * 1000, то есть всего 9 значений
//     1000..9000 - ничьих очень много, а ничья всегда отдаётся раньше
//     стоящей песне (даже с честным генератором ранние позиции получают
//     ~60-66% розыгрышей против 50%).
// Итог: играет устойчивый набор из ~7 песен (6 недавних исключаются, дальше
// побеждают те же лидеры), остальные не выпадают никогда; перестановка
// песен в songs.txt просто меняет, кто лидер.
//
// Правка: инструкция "imul edi,edi,0x3E8" (rva 0x5534D, edi = r) заменяется
// прыжком в thunk, который кладёт в EDI свежее случайное число
// (1..200000)*1000 - без ничьих и не зависящее от мусора в стеке.
// chance по-прежнему умножается на r (песни с chance<=0 не выбираются, как
// и раньше), недавние по-прежнему исключаются. Выбор песни локальный
// и не влияет на состояние игры (мультиплеер не затрагивается).
//
// Регистры в точке перехвата: EAX=scope (сразу пушится), EBX=песня,
// ESI=индекс генератора (сохраняется следом), ECX/EDX свободны, EDI - то,
// что мы задаём. Вызов C-функции - одним блоком push/pop, результат через
// глобальную переменную.
// ---------------------------------------------------------------
static const DWORD RVA_MUSIC_RND_HOOK = 0x5534D;   // imul edi,edi,0x3E8
static const unsigned char MUSIC_RND_SIG[6] = { 0x69, 0xFF, 0xE8, 0x03, 0x00, 0x00 };
static DWORD g_musicRndResume = 0;
static DWORD g_musicRnd = 0;
static DWORD g_musicRndState = 0;
static LONG  g_musicRndCalls = 0;

static DWORD __cdecl MusicFairRandom()
{
    if (g_musicRndState == 0)
    {
        g_musicRndState = (DWORD)__rdtsc() ^ GetTickCount() ^ (GetCurrentProcessId() << 16);
        if (g_musicRndState == 0)
            g_musicRndState = 0x9E3779B9;
    }

    // splitmix32
    g_musicRndState += 0x9E3779B9;
    DWORD z = g_musicRndState;
    z = (z ^ (z >> 16)) * 0x85EBCA6B;
    z = (z ^ (z >> 13)) * 0xC2B2AE35;
    z ^= z >> 16;

    DWORD r = 1 + z % 200000;
    LONG n = InterlockedIncrement(&g_musicRndCalls);
    if (n <= 6)
        LogDbg("MusicFairRandom: вызов #%d r=%u", (int)n, r);
    return r * 1000;
}

__declspec(naked) static void MusicRandomThunk()
{
    __asm {
        push eax
        push ecx
        push edx
        call MusicFairRandom
        mov g_musicRnd, eax
        pop edx
        pop ecx
        pop eax
        mov edi, g_musicRnd
        jmp dword ptr [g_musicRndResume]
    }
}

static bool InstallMusicFairRandom()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_MUSIC_RND_HOOK);

    // Контекст: mov eax,[ebp+0x10] (8B 45 10) перед, push eax (50) после.
    if (memcmp(hook, MUSIC_RND_SIG, sizeof(MUSIC_RND_SIG)) != 0 ||
        hook[-3] != 0x8B || hook[-2] != 0x45 || hook[-1] != 0x10 || hook[6] != 0x50)
    {
        Log("MusicFairRandom: сигнатура не совпала rva %06X - не патчим", RVA_MUSIC_RND_HOOK);
        return false;
    }

    g_musicRndResume = g_base + RVA_MUSIC_RND_HOOK + 6;

    unsigned char patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&MusicRandomThunk - ((DWORD)(DWORD_PTR)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("MusicFairRandom: установлен rva %06X", RVA_MUSIC_RND_HOOK);
    return true;
}


// ---------------------------------------------------------------
// Видимость строк в списке вкладки "Фабрики" (FUN_006f3e70).
//
// Развилка (абс. 0x6F424B, RVA 0x2F424B):
//   CMP dword ptr[ECX+0x84],0 ; JLE +8   (ECX = указатель на state,
//   уже загружен вызывающим кодом чуть раньше)
//   CMP ESI,EBX ; JZ <пропустить строку>  (ESI = кол-во уже
//   построенных фабрик этой категории в регионе)
// Ванильно: колониальный регион без построенных фабрик пропускается
// безусловно, минуя даже обычную проверку "Скрыть свободные" (эта
// часть уже нейтрализована — колониальность сама по себе перестала
// быть отдельным условием). Добавляем сюда третий, наш собственный
// флаг: если g_hideColonialStates включён, колониальный регион
// скрывается всегда, независимо от "Скрыть свободные" и наличия
// построенных фабрик — как и просил пользователь.
// ---------------------------------------------------------------

static const DWORD RVA_PRODLIST_HOOK = 0x2F424B;
static const DWORD RVA_PRODLIST_RESUME_SHOW = 0x2F4255;
static const DWORD RVA_PRODLIST_RESUME_SKIP = 0x2F42DE;
// Проверяем только первые 2 байта (JLE +8) — тот же якорь, что уже
// подтверждён рабочим в версии 2.8 простым байт-патчем. Байты 3-10
// (CMP ESI,EBX ; JZ) переписываются вслепую — их кодировка (39 DE
// или 3B F3 для CMP регистр-регистр — не проверялось напрямую) нашей
// логике не важна, старый код там больше не выполняется.
static const unsigned char PRODLIST_SIG[2] = { 0x7E, 0x08 };
static DWORD g_prodListResumeShow = 0;
static DWORD g_prodListResumeSkip = 0;

__declspec(naked) static void ProdListVisibilityThunk()
{
    __asm {
        cmp byte ptr [g_hideColonialStates], 0
        jz show
        cmp dword ptr [ecx + 0x84], 0
        jle show
        jmp dword ptr [g_prodListResumeSkip]
    show:
        jmp dword ptr [g_prodListResumeShow]
    }
}

static bool InstallProdListVisibilityHook()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_PRODLIST_HOOK);

    if (memcmp(hook, PRODLIST_SIG, sizeof(PRODLIST_SIG)) != 0)
    {
        Log("ProdListVisibilityHook: сигнатура не совпала - не патчим");
        return false;
    }

    g_prodListResumeShow = g_base + RVA_PRODLIST_RESUME_SHOW;
    g_prodListResumeSkip = g_base + RVA_PRODLIST_RESUME_SKIP;

    unsigned char patch[10];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&ProdListVisibilityThunk - ((DWORD)hook + 5);
    for (int i = 5; i < 10; ++i)
        patch[i] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("ProdListVisibilityHook: установлен");
    return true;
}


// ---------------------------------------------------------------
// Скрытие кнопок-фильтров товаров с именем на "raw_" в окне фабрик.
//
// FUN_006e2770 (rva 0x2E2770) - конструктор одной иконки-кнопки
// "goods_filter_template" (верхний ряд фильтров в окне "Фабрики").
// Единственный содержательный вход - ECX = порядковый индекс товара
// (goodIndex); подтверждено дизасмом байт-в-байт, что сама игра
// достаёт указатель на объект товара так:
//   mgrPtr  = *(int*)(DAT_012587f0)          ; DAT_012587f0 = rva 0xE587F0
//   arrBase = *(int*)(mgrPtr + 0xc)
//   goodPtr = *(int*)(arrBase + goodIndex*4)
// Имя товара - обычный MSVC std::string (Dinkumware) по смещению
// goodPtr+0xC: буфер SSO на 16 байт, длина - следующие 4 байта
// (goodPtr+0x1C), вместимость - ещё 4 (goodPtr+0x20). Тот же приём,
// что и в ResolveProdTypeNamePtr для производственных типов, только
// база смещения другая. Подтверждено живым пробником 2026-09-24:
// idx=46..61 в текущей игре - ровно raw_cattle..raw_tobacco.
//
// v4.04 пробовал звать оригинал через трамплин с угаданной сигнатурой
// (3 стековых аргумента) - уронил игру на старте (испорченный
// param_3/"creator" -> виртуальный вызов по мусорному указателю).
// Больше НЕ вызываем оригинал сами - см. пробник v2 ниже
// (GoodsFilterCtorTailThunk), который вместо этого подсматривает
// в САМОМ КОНЦЕ уже выполняющегося оригинала, ничего не переисполняя.
static const DWORD RVA_GOODS_MANAGER = 0xE587F0;

static const char* ResolveGoodNameByIndex(int goodIndex)
{
    __try
    {
        int** mgrSlot = (int**)(g_base + RVA_GOODS_MANAGER);
        if (SafeIsBadReadPtr(mgrSlot, 4))
            return 0;
        int* mgrPtr = *mgrSlot;
        if (!mgrPtr || SafeIsBadReadPtr((char*)mgrPtr + 0xc, 4))
            return 0;
        int* arrBase = *(int**)((char*)mgrPtr + 0xc);
        if (!arrBase || SafeIsBadReadPtr((char*)arrBase + goodIndex * 4, 4))
            return 0;
        void* goodPtr = *(void**)((char*)arrBase + goodIndex * 4);
        if (!goodPtr || SafeIsBadReadPtr(goodPtr, 0x24))
            return 0;

        char* strObj = (char*)goodPtr + 0xC;
        unsigned int length = *(unsigned int*)(strObj + 16);
        const char* name = (length < 16) ? strObj : *(char**)strObj;
        if (!name || SafeIsBadReadPtr((void*)name, 1))
            return 0;
        return name;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

// Живой пробник v2 (2026-09-24, после краша v4.04 - см. память
// feedback_live_probe_hook/project_hide_raw_goods_filter): БЕЗ
// call-through. Вместо честного вызова оригинала с угаданной
// сигнатурой - mid-function jump в САМОМ КОНЦЕ оригинального
// FUN_006e2770, ровно как ProdListVisibilityHook/HideNoSupplyFactory
// Thunk делают в других местах файла. Оригинал выполняется полностью
// без единого изменения; мы лишь подсматриваем ESI (= self, param_2)
// в точке, где он ещё гарантированно жив (PUSH ESI в начале функции,
// POP ESI только на самом выходе - между этим ESI не трогается).
//
// Хвост оригинала (подтверждено дизасмом и байтами обоих exe):
//   006e28bf: MOV ECX,[EBP-0xC]
//   006e28c2: POP EDI
//   006e28c3: POP ESI
//   006e28c4: POP EBX
//   ...
//   RET 0xC
// Первые 3 инструкции - ровно 5 байт (8B 4D F4 5F 5E), без остатка
// под E9 rel32.
static const DWORD RVA_GOODS_FILTER_CTOR_TAIL = 0x2E28BF;
static const unsigned char GOODS_FILTER_CTOR_TAIL_SIG[5] = { 0x8B, 0x4D, 0xF4, 0x5F, 0x5E };
static DWORD g_goodsFilterCtorTailResume = 0;

static void __cdecl LogGoodsFilterConstructed(void* self)
{
    if (!g_settings.debugLog)
        return;
    __try
    {
        if (!self || SafeIsBadReadPtr(self, 0x14))
            return;

        int goodIndex = *(int*)((char*)self + 8);
        const char* name = ResolveGoodNameByIndex(goodIndex);
        if (!name || _strnicmp(name, "raw_", 4) != 0)
            return;

        void* winPtr = *(void**)((char*)self + 4);
        LogDbg("GoodsFilterRaw: idx=%d name=%s self=%p winPtr=%p", goodIndex, name, self, winPtr);
        if (!winPtr || SafeIsBadReadPtr(winPtr, 0x60))
            return;

        unsigned char buf[0x60];
        memcpy(buf, winPtr, sizeof(buf));
        char hex[0x60 * 3 + 1] = "";
        for (int i = 0; i < 0x60; ++i)
        {
            char tmp[4];
            sprintf_s(tmp, "%02X ", buf[i]);
            strcat_s(hex, sizeof(hex), tmp);
        }
        LogDbg("GoodsFilterRaw:   win hex=%s", hex);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbg("GoodsFilterRaw: исключение при чтении self=%p", self);
    }
}

// Изолированный push/call/cleanup блок ДО репликации оригинальных
// инструкций - см. feedback_naked_asm_hook_structure. ESI (self)
// только читается (push отправляет значение, не портит регистр),
// поэтому реплицированный "pop esi" ниже восстанавливает ровно то,
// что восстановил бы оригинал.
__declspec(naked) static void GoodsFilterCtorTailThunk()
{
    __asm {
        push esi
        call LogGoodsFilterConstructed
        add esp, 4
        mov ecx, dword ptr [ebp - 0xC]
        pop edi
        pop esi
        jmp dword ptr [g_goodsFilterCtorTailResume]
    }
}

static bool InstallGoodsFilterProbe()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_GOODS_FILTER_CTOR_TAIL);
    if (memcmp(hook, GOODS_FILTER_CTOR_TAIL_SIG, sizeof(GOODS_FILTER_CTOR_TAIL_SIG)) != 0)
    {
        Log("GoodsFilterProbe: сигнатура не совпала - не патчим");
        return false;
    }

    g_goodsFilterCtorTailResume = g_base + RVA_GOODS_FILTER_CTOR_TAIL + 5;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&GoodsFilterCtorTailThunk - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("GoodsFilterProbe: установлен (диагностика размера дочернего окна для raw_, безопасный вариант)");
    return true;
}

// Раунд 3 живого пробника (2026-09-24): дамп из InstallGoodsFilterProbe
// показал, что дочернее окно в конце FUN_006e2770 ещё полностью
// пустое (только 2-3 общих указателя на vtable, ни размера, ни
// позиции) - значит их выставляет НЕ конструктор, а вызывающий цикл
// FUN_006efdb0 уже ПОСЛЕ возврата. Сразу за CALL 0x006e2770 (вызов 1,
// rva 0x2F1B80) этот цикл считает номер строки/столбца по счётчику
// цикла, дважды виртуально вызывает объект из массива [EDI+0x5c] -
// похоже на получение размера спрайта фона кнопки (слот вида vt+0x60,
// читает word[+0]/word[+2] - ширина/высота) и, судя по всему, кладёт
// вычисленные X/Y в один упакованный DWORD (low16=X, high16=Y - обе
// половины signed 16-бит) и вызывает vt+0x18 на ТОМ ЖЕ объекте -
// SetPosition(x,y), подтверждено живыми данными 2026-09-24
// (packedXY=0x0038007E -> x=126 y=56 для raw_timber).
//
// Патч подменяет ровно это значение для raw_-товаров на координаты
// далеко за пределами видимой области окна - сама кнопка продолжает
// существовать и нормально строится (риск нулевой, ничего в
// оригинальном коде не меняется, кроме одного пуш-аргумента),
// но рисуется/кликается вне экрана, то есть визуально не отображается.
// Перехватываем ровно "mov eax,[esp+0x64]; push eax" (5 байт, без
// остатка) прямо перед CALL EDX.
static const DWORD RVA_GOODS_FILTER_POS_HOOK = 0x2F1C30;
static const unsigned char GOODS_FILTER_POS_SIG[5] = { 0x8B, 0x44, 0x24, 0x64, 0x50 };
static DWORD g_goodsFilterPosResume = 0;

// РАЗГАДАНО в раунде 4 (v4.11): значение, которое читалось как
// "goodIndex" ([ESP+0x50] в исходной точке 0x6f1b88), на самом деле -
// БАЙТОВОЕ СМЕЩЕНИЕ в массиве с шагом 20 байт (= trueIndex*20), а не
// сам индекс. Подтверждено живыми данными: hit#1..4 дали 0/20/40/60,
// что совпало с РЕАЛЬНЫМИ товарами по этим "смещениям" как индексам
// (ammunition/glass/luxury_clothes/raw_timber) только потому что они
// ещё меньше 64 (реального числа товаров) - начиная с hit#5 (80)
// смещение уже вышло за границы массива и ResolveGoodNameByIndex
// читал мусор. Именно поэтому v4.09 сломал canned_food: для настоящей
// итерации trueIndex=3 (canned_food) код искал имя по индексу 3*20=60,
// находил "raw_timber" (совпадает с "raw_") и прятал ЭТУ итерацию -
// то есть визуально пропадал canned_food, а не raw_timber.
// Исправление - просто делить смещение на 20 (шаг совпадает с ADD
// dword ptr[ESP+0x50],0x14 в конце тела цикла, см. дизасм 0x6f1cdf).
//
// Подтверждено в раунде 5 (v4.12, 2026-09-24, живой лог): после деления
// на 20 ровно 64 срабатывания, индексы 0..63 подряд, имена совпадают
// (3=canned_food, 46..63=raw_cattle..raw_precious_metal). Сетка - 24
// кнопок в ряд (шаг x=31), ряды y=56/83/110 (шаг 27); все 18 raw_ лежат
// в самом хвосте (конец 2-го ряда + почти весь 3-й), поэтому скрытие
// не оставляет дыр посередине.
//
// v4.13 - скрытие включено (HIDE_RAW_GOODS_FILTER, по умолчанию 1).
static LONG g_goodsFilterPosHits = 0;
static LONG g_goodsFilterHideLogged = 0;

static DWORD __cdecl ComputeGoodsFilterPos(DWORD packedXY, int byteOffset)
{
    __try
    {
        if (!g_settings.hideRawGoodsFilter)
            return packedXY;

        InterlockedIncrement(&g_goodsFilterPosHits);
        int goodIndex = byteOffset / 20;
        const char* name = ResolveGoodNameByIndex(goodIndex);
        if (name && _strnicmp(name, "raw_", 4) == 0)
        {
            if (InterlockedIncrement(&g_goodsFilterHideLogged) <= 40)
                LogDbg("HideRawGoodsFilter: idx=%d %s спрятан (был x=%d y=%d)",
                    goodIndex, name, (int)(short)(packedXY & 0xFFFF),
                    (int)(short)((packedXY >> 16) & 0xFFFF));
            unsigned short hiddenX = (unsigned short)(short)-2000;
            unsigned short hiddenY = (unsigned short)(short)-2000;
            return ((DWORD)hiddenY << 16) | hiddenX;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("HideRawGoodsFilter: исключение byteOffset=%d", byteOffset);
    }
    return packedXY;
}

// Второй цикл (call site 2, rva 0x2F1E10) - структурно идентичен
// первому (те же слоты [ESP+0x44]/[ESP+0x50]/[ESP+0x54]/[ESP+0x64],
// массив [EDI+0x6c] вместо [EDI+0x5c]), скорее всего вторая вкладка
// окна. Пока ТОЛЬКО наблюдение - смотрим, в какой момент срабатывает
// и те ли индексы, прежде чем что-то в нём менять.
static LONG g_goodsFilterPos2Hits = 0;

static DWORD __cdecl ObserveGoodsFilterPos2(DWORD packedXY, int byteOffset)
{
    __try
    {
        LONG hit = InterlockedIncrement(&g_goodsFilterPos2Hits);
        if (hit <= 70)
        {
            int goodIndex = byteOffset / 20;
            const char* name = ResolveGoodNameByIndex(goodIndex);
            LogDbg("GoodsFilterPos2: hit#%d idx=%d name=%s x=%d y=%d",
                (int)hit, goodIndex, name ? name : "?",
                (int)(short)(packedXY & 0xFFFF), (int)(short)((packedXY >> 16) & 0xFFFF));
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
    return packedXY;
}

// ИСПРАВЛЕНО после краша v4.07: EDX в этой точке уже держит указатель
// на функцию для оригинального "CALL EDX" чуть ниже (SetPosition) -
// предыдущая версия использовала EDX как временный регистр под
// goodIndex и затирала его, поэтому оригинальный CALL улетал по
// мусору. Теперь EDX явно сохраняется push'ем ДО блока и
// восстанавливается pop'ом ПОСЛЕ - вообще не участвует в передаче
// аргументов (они читаются прямыми push'ами из памяти, со сдвигом
// смещений на каждый push). EAX получает готовый (возможно
// подменённый) packedXY прямо из возврата функции - повторно читать
// [esp+0x64] не нужно. ECX безопасно не сохранять - целиком
// перезаписывается сразу после точки возврата ("mov ecx,esi").
__declspec(naked) static void GoodsFilterPosThunk()
{
    __asm {
        push edx                        // сохранить - нужен оригиналу ниже
        push dword ptr [esp + 0x54]     // goodIndex: 0x50 + 4 (push edx)
        push dword ptr [esp + 0x6C]     // packedXY: 0x64 + 4 + 4 (два push выше)
        call ComputeGoodsFilterPos      // eax = packedXY (тот же или подменённый)
        add esp, 8
        pop edx                         // восстановить
        push eax
        jmp dword ptr [g_goodsFilterPosResume]
    }
}

// Тот же thunk для второго цикла (0x2F1EC0): байты и смещения на стеке
// в дизасме идентичны первому, регистры EDX/ECX/EAX ведут себя так же
// (EDX - vtable[0x18] загружен в 0x6f1eb1..b3, CALL EDX в 0x6f1ec7,
// ECX перезаписывается "mov ecx,esi" в 0x6f1ec5).
static const DWORD RVA_GOODS_FILTER_POS_HOOK2 = 0x2F1EC0;
static DWORD g_goodsFilterPosResume2 = 0;

__declspec(naked) static void GoodsFilterPosThunk2()
{
    __asm {
        push edx
        push dword ptr [esp + 0x54]
        push dword ptr [esp + 0x6C]
        call ObserveGoodsFilterPos2
        add esp, 8
        pop edx
        push eax
        jmp dword ptr [g_goodsFilterPosResume2]
    }
}

static bool PlantGoodsFilterPosHook(DWORD rva, void* thunk, const char* tag)
{
    unsigned char* hook = (unsigned char*)(g_base + rva);
    if (memcmp(hook, GOODS_FILTER_POS_SIG, sizeof(GOODS_FILTER_POS_SIG)) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X - не патчим", tag, rva);
        return false;
    }

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)thunk - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);
    Log("%s: установлен rva %06X", tag, rva);
    return true;
}

static bool InstallGoodsFilterPosProbe()
{
    g_goodsFilterPosResume  = g_base + RVA_GOODS_FILTER_POS_HOOK + 5;
    g_goodsFilterPosResume2 = g_base + RVA_GOODS_FILTER_POS_HOOK2 + 5;

    bool ok = PlantGoodsFilterPosHook(RVA_GOODS_FILTER_POS_HOOK,
        (void*)&GoodsFilterPosThunk, "HideRawGoodsFilter");
    PlantGoodsFilterPosHook(RVA_GOODS_FILTER_POS_HOOK2,
        (void*)&GoodsFilterPosThunk2, "GoodsFilterPos2(наблюдение)");
    return ok;
}

// ---------------------------------------------------------------
// FILTER_SHOW_ALL_FACTORIES_IN_STATE - фильтры окна фабрик: если в
// регионе есть хотя бы одна фабрика, прошедшая фильтр, показываем ВСЕ
// фабрики региона, а не только прошедшие.
//
// Ванильно (FUN_006f3e70 - список вкладки 0, FUN_006f7140 - вкладки 1)
// обе функции ходят по регионам и по цепочке "узлов" фабрик региона:
// state+0x60 - первый узел, next = узел+0x224, узел+0x1c - регион,
// узел+0x18 - УКАЗАТЕЛЬ на объект фабрики X (X+300 = тип производства).
// Для каждого узла вызывается предикат FUN_006f7f80 (rva 0x2F7F80;
// соглашение: EAX = окно, ECX = X = *(узел+0x18) - ЗАГРУЗКА значения
// ("mov ecx,[eax+0x18]"), не адрес; результат в AL; сохраняет
// EBX/ESI/EDI). Предикат true, если у фабрики выход ИЛИ входное сырьё
// совпадает с товаром включённой кнопки фильтра (массив кнопок окна:
// view+0x5c / +0x6c, элементы по 0x14, +8=индекс товара, +0xC=включён).
// Регион попадает в список, только если прошла хотя бы одна фабрика
// (либо включён показ пустых).
//
// ОШИБКА v4.14-v4.17: считал, что ECX = узел+0x18 (LEA) и восстанавливал
// узел как ECX-0x18 - на деле это разыменование, поэтому "цепочки"
// брались из мусорной памяти и подмена не попадала в настоящие фабрики
// региона. Теперь сам узел берётся из стека вызывающей функции, где он
// сохранён перед call: вкладка 0 - [ESP+0x6c] (мимо "mov [esp+6ch],eax"
// в 0x6f41ed), вкладка 1 - [ESP+0x24] (0x6f746b); в thunk'е это
// [esp+0x70] и [esp+0x28] (+4 на адрес возврата).
//
// Подмена: меняем 4 байта смещения в двух "call 0x6f7f80" (rva
// 0x2F41F7 и 0x2F7471; после них "test al,al" - смотрят только AL) на
// свои thunk'и с тем же контрактом регистров (клобберим только
// EAX/ECX/EDX, EBX/ESI/EDI сохраняет обычная cdecl-функция). Обёртка,
// увидев ПЕРВЫЙ узел региона (state+0x60 == узел), заранее проходит всю
// цепочку региона ОРИГИНАЛЬНЫМ предикатом; если хоть одна фабрика
// прошла - для всех узлов региона отвечаем "да" (кроме структурно
// невалидных - условия предиката "DAT_01258734 != 0 && тип !=
// DAT_01258734+0x10 && тип != 0" повторяем как есть, чтобы не показывать
// то, что игра не показывала никогда). Иначе - зовём оригинал.
static const DWORD RVA_FILTER_PRED       = 0x2F7F80;
static const DWORD RVA_FILTER_PRED_CALL0 = 0x2F41F7;
static const DWORD RVA_FILTER_PRED_CALL1 = 0x2F7471;
static const DWORD RVA_FILTER_SENTINEL   = 0xE58734; // DAT_01258734

static DWORD g_filterPredAddr = 0;
static int   g_filterForce = 0;
static LONG  g_filterRegionLogged = 0;
static DWORD g_filterLastTick = 0;
static LONG  g_filterGroup = 0;

static int CallOrigFilterPred(void* view, void* arg)
{
    int r = 0;
    DWORD fn = g_filterPredAddr;
    __asm {
        mov eax, view
        mov ecx, arg
        call fn
        movzx eax, al
        mov r, eax
    }
    return r;
}

static int FilterFactoryValid(void* arg)
{
    DWORD sentinel = *(DWORD*)(g_base + RVA_FILTER_SENTINEL);
    DWORD type = *(DWORD*)((char*)arg + 300);
    return sentinel != 0 && type != sentinel + 0x10 && type != 0;
}

// FILTER_PRODUCERS_ONLY: вместо оригинального критерия (выход ИЛИ
// входное сырьё совпадает с включённым фильтром) - только ВЫХОД.
// Читаем те же данные, что оригинал: выходной товар фабрики =
// *(*(X+300)+0x80)+8 (индекс товара), кнопки фильтра - вектор
// view+0x5c (вкладка 0) / +0x6c (вкладка 1), элементы по 0x14,
// +8 = индекс товара, +0xC = включена. Структурную валидность (тип не
// нулевой и не служебный) проверяем тем же условием, что и оригинал.
static int FilterPassProducer(void* view, void* arg)
{
    if (!FilterFactoryValid(arg))
        return 0;
    DWORD type = *(DWORD*)((char*)arg + 300);
    DWORD outGood = *(DWORD*)(type + 0x80);
    if (!outGood)
        return 0;
    int outIdx = *(int*)(outGood + 8);

    int mode = *(int*)((char*)view + 0x1c8);
    char* vec = (char*)view + (mode == 1 ? 0x6c : 0x5c);
    char* b = *(char**)vec;
    char* e = *(char**)(vec + 4);
    for (char* el = b; b && el + 0x14 <= e; el += 0x14)
    {
        if (el[0xC] && *(int*)(el + 8) == outIdx)
            return 1;
    }
    return 0;
}

// Критерий "фабрика проходит фильтр": оригинальный или только-производители.
static int FilterPass(void* view, void* arg)
{
    return g_settings.filterProducersOnly ? FilterPassProducer(view, arg)
                                          : CallOrigFilterPred(view, arg);
}

// Имя выходного товара фабрики - только для диагностики в логе.
static const char* FilterOutName(void* arg)
{
    if (!arg)
        return "?";
    DWORD type = *(DWORD*)((char*)arg + 300);
    if (!type || SafeIsBadReadPtr((void*)(DWORD_PTR)type, 0x84))
        return "?";
    DWORD outGood = *(DWORD*)(type + 0x80);
    if (!outGood || SafeIsBadReadPtr((void*)(DWORD_PTR)outGood, 12))
        return "?";
    const char* nm = ResolveGoodNameByIndex(*(int*)(outGood + 8));
    return nm ? nm : "?";
}

// Диагностика: на старте каждой "перестройки списка" (пауза между
// вызовами предиката > 300 мс) пишем, какие кнопки-фильтры включены.
static void FilterLogRebuildStart(void* view)
{
    LONG grp = InterlockedIncrement(&g_filterGroup);
    if (grp > 40)
        return;
    int mode = *(int*)((char*)view + 0x1c8);
    char* vec = (char*)view + (mode == 1 ? 0x6c : 0x5c);
    char* b = *(char**)vec;
    char* e = *(char**)(vec + 4);
    int n = (b && e >= b) ? (int)((e - b) / 0x14) : 0;
    char names[600] = "";
    int on = 0;
    for (int i = 0; i < n && i < 64; ++i)
    {
        char* el = b + i * 0x14;
        if (el[0xC])
        {
            ++on;
            const char* nm = ResolveGoodNameByIndex(*(int*)(el + 8));
            if (nm && strlen(names) + strlen(nm) + 2 < sizeof(names))
            {
                strcat_s(names, sizeof(names), nm);
                strcat_s(names, sizeof(names), ",");
            }
        }
    }
    LogDbg("FilterShowAll: перестройка #%d mode=%d кнопок=%d включено=%d [%s]",
        (int)grp, mode, n, on, names);
}

static int __cdecl FilterPredHook(void* view, void* factoryArg, char* node)
{
    if (!g_settings.filterShowAllInState && !g_settings.filterProducersOnly)
        return CallOrigFilterPred(view, factoryArg);

    __try
    {
        DWORD now = GetTickCount();
        if (now - g_filterLastTick > 300)
            FilterLogRebuildStart(view);
        g_filterLastTick = now;

        if (!g_settings.filterShowAllInState)
            return FilterPass(view, factoryArg);

        char* state = *(char**)(node + 0x1c);
        if (!state || *(char**)(state + 0x60) == node)
        {
            // первый узел региона - заранее проходим всю цепочку
            g_filterForce = 0;
            if (state)
            {
                int n = 0, pass = 0, origPass = 0, valid = 0, guard = 0;
                char det[400] = "";
                for (char* p = node; p && guard < 4096; p = *(char**)(p + 0x224), ++guard)
                {
                    void* a = *(void**)(p + 0x18);
                    ++n;
                    int pr = FilterPass(view, a);
                    if (CallOrigFilterPred(view, a))
                        ++origPass;
                    if (pr)
                        ++pass;
                    if (FilterFactoryValid(a))
                        ++valid;
                    if (g_filterGroup >= 3 && guard < 8)
                    {
                        char one[64];
                        sprintf_s(one, "%s%s;", FilterOutName(a), pr ? "+" : "-");
                        strcat_s(det, sizeof(det), one);
                    }
                }
                g_filterForce = pass > 0;
                if (g_filterGroup >= 3 && InterlockedIncrement(&g_filterRegionLogged) <= 120)
                    LogDbg("FilterShowAll: регион state=%p фабрик=%d прошло=%d (оригинал=%d) валидных=%d force=%d [%s]",
                        state, n, pass, origPass, valid, g_filterForce, det);
            }
        }

        if (g_filterForce)
            return FilterFactoryValid(factoryArg);
        return FilterPass(view, factoryArg);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_filterForce = 0;
    }
    return CallOrigFilterPred(view, factoryArg);
}

// Тот же контракт, что у подменяемой функции: на входе EAX=окно,
// ECX=X (указатель на объект фабрики), результат в AL; вызывающий код
// ждёт EBX/ESI/EDI/EBP нетронутыми - их сохраняет FilterPredHook как
// обычная cdecl-функция. Узел цепочки берётся прямым push'ем из стека
// вызывающего кода ДО остальных push'ей (иначе смещения съедут).
__declspec(naked) static void FilterPredThunk0()
{
    __asm {
        push dword ptr [esp + 0x70]     // узел: [ESP+0x6c] вызывающего + 4 (адрес возврата)
        push ecx
        push eax
        call FilterPredHook
        add esp, 12
        ret
    }
}

__declspec(naked) static void FilterPredThunk1()
{
    __asm {
        push dword ptr [esp + 0x28]     // узел: [ESP+0x24] вызывающего + 4
        push ecx
        push eax
        call FilterPredHook
        add esp, 12
        ret
    }
}

static bool PatchFilterPredCall(DWORD rva, void* thunk, const char* tag)
{
    unsigned char* p = (unsigned char*)(g_base + rva);
    DWORD expectRel = (g_base + RVA_FILTER_PRED) - ((DWORD)(DWORD_PTR)p + 5);
    if (p[0] != 0xE8 || *(DWORD*)(p + 1) != expectRel)
    {
        Log("%s: сигнатура call предиката не совпала rva %06X (%02X %02X %02X %02X %02X)",
            tag, rva, p[0], p[1], p[2], p[3], p[4]);
        return false;
    }

    DWORD rel = (DWORD)(DWORD_PTR)thunk - ((DWORD)(DWORD_PTR)p + 5);
    DWORD oldProtect = 0;
    if (!VirtualProtect(p + 1, 4, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    *(DWORD*)(p + 1) = rel;
    VirtualProtect(p + 1, 4, oldProtect, &oldProtect);
    Log("%s: call предиката подменён rva %06X", tag, rva);
    return true;
}

static bool InstallFilterShowAllInState()
{
    g_filterPredAddr = g_base + RVA_FILTER_PRED;
    bool a = PatchFilterPredCall(RVA_FILTER_PRED_CALL0, (void*)&FilterPredThunk0, "FilterShowAll(вкладка 0)");
    bool b = PatchFilterPredCall(RVA_FILTER_PRED_CALL1, (void*)&FilterPredThunk1, "FilterShowAll(вкладка 1)");
    return a || b;
}


// ---------------------------------------------------------------
// Запрет конкретных фабрик в колониях по limit_by_local_supply.
//
// FUN_004d04b0(param_1=state, param_2=тип_производства, param_3)
// — единственная проверка, которая реально решает судьбу кнопки
// "Построить" (см. build_confirm_ignore_colonial). Внутри неё
// param_2+0x58 хранит порядковый номер типа производства из
// production_types.txt — подтверждено вживую диагностикой:
// живые значения 2/29/35 совпали с automobile_factory/
// fertilizer_factory/fishing_wharf при подсчёте БЕЗ учёта
// template-блоков (blocks, чьё имя встречается как значение
// "template = X" где-то в файле).
//
// Читаем production_types.txt сами (рядом с DLL, с проверкой
// mod\2\common\ как приоритетного оверрайда) и строим таблицу
// "разрешено ли строить в колонии" по тому же индексу: разрешено,
// если у типа явно указано limit_by_local_supply = yes.
// ---------------------------------------------------------------

static const int MAX_PRODUCTION_TYPES = 512;
static unsigned char g_limitByLocalSupply[MAX_PRODUCTION_TYPES];
static bool g_productionTypesLoaded = false;

// Игровой рантайм присваивает типам производства СВОЙ внутренний
// номер (поле +0x58 у объекта типа), который НЕ совпадает с порядком
// объявления в production_types.txt - подтверждено замером (cattle_factory
// в файле идёт под номером 51, а в рантайме её же объект несёт [+0x58]=1).
// Поэтому сверяемся не по индексу, а по имени: сохраняем имя каждого
// типа при разборе файла и на рантайме ищем совпадение по строке,
// которую движок хранит в самом объекте типа по смещению +0x20.
static const int PRODTYPE_NAME_MAX = 32;
static char g_productionTypeNames[MAX_PRODUCTION_TYPES][PRODTYPE_NAME_MAX];
static int  g_productionTypeCount = 0;

// Единственный товар из "input_goods = { raw_X = ... }" у типов
// limit_by_local_supply=yes — для HideNoSupplyFactories (файловый подход).
static const int GOOD_NAME_MAX = 32;
static char g_productionTypeGood[MAX_PRODUCTION_TYPES][GOOD_NAME_MAX];

static const int OFF_PRODTYPE_NAME = 0x20;

// std::string MSVC Dinkumware: SSO <16 в буфере, иначе указатель в буфере.
static const char* ResolveProdTypeNamePtr(void* typePtr)
{
    char* strObj = (char*)typePtr + OFF_PRODTYPE_NAME;
    unsigned int length = *(unsigned int*)(strObj + 16); // _Mysize
    if (length < 16)
        return strObj;
    return *(char**)strObj;
}

static void GetOwnDllDirectory(char* outDir, size_t outSize)
{
    outDir[0] = 0;

    HMODULE hMod = 0;
    if (!GetModuleHandleExA(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            (LPCSTR)&GetOwnDllDirectory, &hMod))
        return;

    char path[MAX_PATH];
    if (!GetModuleFileNameA(hMod, path, sizeof(path)))
        return;

    char* lastSlash = strrchr(path, '\\');
    if (!lastSlash)
        return;

    *lastSlash = 0;
    strncpy_s(outDir, outSize, path, _TRUNCATE);
}

static bool IsIdentChar(char c)
{
    return isalnum((unsigned char)c) || c == '_';
}

// Читает файл целиком в статический буфер. Возвращает false, если
// файла нет или он не помещается.
static bool ReadWholeFile(const char* path, char* buf, size_t bufSize, size_t* outLen)
{
    FILE* f = 0;
    if (fopen_s(&f, path, "rb") != 0 || !f)
        return false;

    *outLen = fread(buf, 1, bufSize - 1, f);
    buf[*outLen] = 0;
    fclose(f);
    return true;
}

static void ParseProductionTypes(const char* text, size_t len)
{
    // Проход 1: собрать имена блоков, использованных как "template = X"
    // (они сами по себе не являются типами производства и не участвуют
    // в нумерации).
    static char templateNames[256][64];
    int templateCount = 0;

    for (size_t i = 0; i + 8 < len; ++i)
    {
        if (strncmp(text + i, "template", 8) != 0)
            continue;
        if (i > 0 && IsIdentChar(text[i - 1]))
            continue;  // часть более длинного идентификатора
        if (IsIdentChar(text[i + 8]))
            continue;  // тоже часть более длинного идентификатора (с конца)

        size_t p = i + 8;
        while (p < len && (text[p] == ' ' || text[p] == '\t'))
            ++p;
        if (p >= len || text[p] != '=')
            continue;
        ++p;
        while (p < len && (text[p] == ' ' || text[p] == '\t'))
            ++p;

        size_t nameStart = p;
        while (p < len && IsIdentChar(text[p]))
            ++p;
        size_t nameLen = p - nameStart;

        if (nameLen > 0 && nameLen < 64 && templateCount < 256)
        {
            memcpy(templateNames[templateCount], text + nameStart, nameLen);
            templateNames[templateCount][nameLen] = 0;
            ++templateCount;
        }
    }

    // Проход 2: верхнеуровневые блоки "name = { ... }" по порядку;
    // пропускаем комментарии (# до конца строки) и шаблоны.
    int index = 0;
    int depth = 0;
    size_t i = 0;

    while (i < len)
    {
        char c = text[i];

        if (c == '#')
        {
            while (i < len && text[i] != '\n' && text[i] != '\r')
                ++i;
            continue;
        }

        if (depth == 0 && IsIdentChar(c) && (i == 0 || !IsIdentChar(text[i - 1])))
        {
            size_t nameStart = i;
            size_t p = i;
            while (p < len && IsIdentChar(text[p]))
                ++p;
            size_t nameLen = p - nameStart;

            size_t q = p;
            while (q < len && (text[q] == ' ' || text[q] == '\t' || text[q] == '\r' || text[q] == '\n'))
                ++q;

            if (q < len && text[q] == '=')
            {
                ++q;
                while (q < len && (text[q] == ' ' || text[q] == '\t' || text[q] == '\r' || text[q] == '\n'))
                    ++q;

                if (q < len && text[q] == '{')
                {
                    // Нашли верхнеуровневый блок. Найдём конец (парную '}'),
                    // попутно игнорируя комментарии, чтобы случайная '{'/'}'
                    // в тексте комментария не сбила подсчёт глубины.
                    size_t blockStart = q;
                    size_t j = q;
                    int localDepth = 0;

                    while (j < len)
                    {
                        char cj = text[j];
                        if (cj == '#')
                        {
                            while (j < len && text[j] != '\n' && text[j] != '\r')
                                ++j;
                            continue;
                        }
                        if (cj == '{')
                            ++localDepth;
                        else if (cj == '}')
                        {
                            --localDepth;
                            if (localDepth == 0)
                            {
                                ++j;
                                break;
                            }
                        }
                        ++j;
                    }

                    bool isTemplate = false;
                    for (int t = 0; t < templateCount; ++t)
                    {
                        size_t tlen = strlen(templateNames[t]);
                        if (tlen == nameLen && strncmp(templateNames[t], text + nameStart, nameLen) == 0)
                        {
                            isTemplate = true;
                            break;
                        }
                    }

                    if (!isTemplate)
                    {
                        bool hasLimitFlag = false;
                        char goodName[GOOD_NAME_MAX] = "";

                        // Ищем "input_goods" ... "{" ... <первый идентификатор>
                        for (size_t k = blockStart; k + 11 < j; ++k)
                        {
                            if (strncmp(text + k, "input_goods", 11) != 0)
                                continue;
                            if (k > 0 && IsIdentChar(text[k - 1]))
                                continue;
                            if (IsIdentChar(text[k + 11]))
                                continue;

                            size_t r = k + 11;
                            while (r < j && text[r] != '{' && text[r] != '}')
                                ++r;
                            if (r >= j || text[r] != '{')
                                break;
                            ++r;
                            while (r < j && (text[r] == ' ' || text[r] == '\t' ||
                                              text[r] == '\r' || text[r] == '\n'))
                                ++r;

                            size_t goodStart = r;
                            while (r < j && IsIdentChar(text[r]))
                                ++r;
                            size_t goodLen = r - goodStart;
                            if (goodLen > 0 && goodLen < (size_t)(GOOD_NAME_MAX - 1))
                            {
                                memcpy(goodName, text + goodStart, goodLen);
                                goodName[goodLen] = 0;
                            }
                            break;
                        }

                        // Ищем "limit_by_local_supply" ... "yes" внутри
                        // диапазона [blockStart, j) этого конкретного блока.
                        // Длина "limit_by_local_supply" - 21 символ (без
                        // учёта завершающего нуля strncmp здесь не нужен -
                        // раньше тут стояло 22, что сравнивало ЕЩЁ И нуль-
                        // терминатор литерала с реальным символом файла
                        // (обычно пробелом), из-за чего strncmp никогда не
                        // совпадал и флаг не находился ни разу).
                        for (size_t k = blockStart; k + 21 < j; ++k)
                        {
                            if (strncmp(text + k, "limit_by_local_supply", 21) != 0)
                                continue;
                            if (k > 0 && IsIdentChar(text[k - 1]))
                                continue;
                            if (IsIdentChar(text[k + 21]))
                                continue;

                            size_t r = k + 21;
                            while (r < j && (text[r] == ' ' || text[r] == '\t'))
                                ++r;
                            if (r < j && text[r] == '=')
                            {
                                ++r;
                                while (r < j && (text[r] == ' ' || text[r] == '\t'))
                                    ++r;
                                if (r + 3 <= j && strncmp(text + r, "yes", 3) == 0 &&
                                    !IsIdentChar(text[r + 3]))
                                    hasLimitFlag = true;
                            }
                            break;
                        }

                        if (index < MAX_PRODUCTION_TYPES)
                        {
                            g_limitByLocalSupply[index] = hasLimitFlag ? 1 : 0;
                            strcpy_s(g_productionTypeGood[index], goodName);

                            size_t copyLen = nameLen < (size_t)(PRODTYPE_NAME_MAX - 1)
                                ? nameLen : (size_t)(PRODTYPE_NAME_MAX - 1);
                            memcpy(g_productionTypeNames[index], text + nameStart, copyLen);
                            g_productionTypeNames[index][copyLen] = 0;

                            g_productionTypeCount = index + 1;
                        }

                        LogDbg("  [%d] %.*s limit=%d good=%s", index, (int)nameLen, text + nameStart,
                            hasLimitFlag ? 1 : 0, goodName[0] ? goodName : "-");

                        ++index;
                    }

                    i = j;
                    continue;
                }
            }

            i = p;
            continue;
        }

        if (c == '{')
            ++depth;
        else if (c == '}')
            --depth;

        ++i;
    }

    Log("ParseProductionTypes: разобрано %d типов производства (шаблонов пропущено: %d)",
        index, templateCount);
}

static void LoadProductionTypeLimits()
{
    if (g_productionTypesLoaded)
        return;
    g_productionTypesLoaded = true;

    for (int i = 0; i < MAX_PRODUCTION_TYPES; ++i)
        g_limitByLocalSupply[i] = 1;  // безопасный откат: неизвестный индекс - разрешаем

    char dir[MAX_PATH];
    GetOwnDllDirectory(dir, sizeof(dir));
    if (!dir[0])
    {
        Log("LoadProductionTypeLimits: не удалось определить каталог DLL");
        return;
    }

    static char fileBuf[1 << 20];
    size_t fileLen = 0;
    char path[MAX_PATH];

    sprintf_s(path, sizeof(path), "%s\\mod\\2\\common\\production_types.txt", dir);
    bool ok = ReadWholeFile(path, fileBuf, sizeof(fileBuf), &fileLen);

    if (!ok)
    {
        sprintf_s(path, sizeof(path), "%s\\common\\production_types.txt", dir);
        ok = ReadWholeFile(path, fileBuf, sizeof(fileBuf), &fileLen);
    }

    if (!ok)
    {
        Log("LoadProductionTypeLimits: production_types.txt не найден рядом с DLL");
        return;
    }

    Log("LoadProductionTypeLimits: читаю '%s' (%u байт)", path, (unsigned)fileLen);
    ParseProductionTypes(fileBuf, fileLen);
}

// ---------------------------------------------------------------
// "Есть ли сырьё в регионе" - по файлам истории провинций, а не по
// внутренним структурам движка.
//
// Причина: перепробовали несколько внутренних указателей (per-state
// "supply block", per-type "local source" через typePtr+0x12c и
// FUN_0052ca30) - структура читалась похоже на настоящую (та же, что
// использует проверенная FUN_0052ca30), но на практике оказалась НЕ
// про "физически есть ли товар в регионе", а про какой-то более узкий
// колониальный кейс (судя по названиям патчей рядом -
// local_supply_factory_ignore_colonial и соседи): почти все типы
// читались как "разрешено" независимо от реального наличия сырья
// (тестер подтвердил: из 15 типов доступен должен быть только
// timber_factory, а патч не прятал ни одного).
//
// Вместо этого читаем сами: production_types.txt уже даёт нам
// единственный входной товар лимитированных типов (input_goods,
// например "raw_timber" у timber_factory - см. g_productionTypeGood
// выше), а history/provinces/*.txt каждой провинции даёт её
// "trade_goods = raw_timber" - то же самое имя. Совпадают один в
// один, сравниваем строками. Список провинций региона (state+0x48/
// +0x4c) - единственная часть прежнего подхода, которая на практике
// давала правдоподобные данные (реальные id провинций), её оставляем.
static const int MAX_PROVINCE_ID = 8192;
static char g_provinceGood[MAX_PROVINCE_ID][GOOD_NAME_MAX];
static bool g_provinceGoodsLoaded = false;

static void ParseProvinceGoodFile(const char* filePath, const char* fileName)
{
    int id = 0;
    int i = 0;
    while (fileName[i] >= '0' && fileName[i] <= '9')
    {
        id = id * 10 + (fileName[i] - '0');
        ++i;
    }
    if (i == 0 || id <= 0 || id >= MAX_PROVINCE_ID)
        return;

    static char fileBuf[1 << 15];
    size_t fileLen = 0;
    if (!ReadWholeFile(filePath, fileBuf, sizeof(fileBuf), &fileLen))
        return;

    for (size_t k = 0; k + 11 < fileLen; ++k)
    {
        if (strncmp(fileBuf + k, "trade_goods", 11) != 0)
            continue;
        if (k > 0 && IsIdentChar(fileBuf[k - 1]))
            continue;
        if (IsIdentChar(fileBuf[k + 11]))
            continue;

        size_t r = k + 11;
        while (r < fileLen && (fileBuf[r] == ' ' || fileBuf[r] == '\t'))
            ++r;
        if (r < fileLen && fileBuf[r] == '=')
        {
            ++r;
            while (r < fileLen && (fileBuf[r] == ' ' || fileBuf[r] == '\t'))
                ++r;
            size_t goodStart = r;
            while (r < fileLen && IsIdentChar(fileBuf[r]))
                ++r;
            size_t goodLen = r - goodStart;
            if (goodLen > 0 && goodLen < (size_t)(GOOD_NAME_MAX - 1))
            {
                memcpy(g_provinceGood[id], fileBuf + goodStart, goodLen);
                g_provinceGood[id][goodLen] = 0;
            }
        }
        break;
    }
}

// Рекурсивный обход - структура history/provinces/<регион>/<id> - <имя>.txt
// (плюс изредка файлы прямо в provinces/), глубина небольшая и
// фиксированная, так что простая рекурсия безопасна.
static void ScanProvinceGoodsInDir(const char* dirPath)
{
    char pattern[MAX_PATH];
    sprintf_s(pattern, sizeof(pattern), "%s\\*", dirPath);

    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(pattern, &fd);
    if (h == INVALID_HANDLE_VALUE)
        return;

    do
    {
        if (strcmp(fd.cFileName, ".") == 0 || strcmp(fd.cFileName, "..") == 0)
            continue;

        char fullPath[MAX_PATH];
        sprintf_s(fullPath, sizeof(fullPath), "%s\\%s", dirPath, fd.cFileName);

        if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
        {
            ScanProvinceGoodsInDir(fullPath);
        }
        else
        {
            size_t nameLen = strlen(fd.cFileName);
            if (nameLen > 4 && _stricmp(fd.cFileName + nameLen - 4, ".txt") == 0)
                ParseProvinceGoodFile(fullPath, fd.cFileName);
        }
    } while (FindNextFileA(h, &fd));

    FindClose(h);
}

// Ванильные файлы лежат прямо под каталогом DLL (та же папка, что и
// v2game.exe - иначе lua51.dll не подхватился бы игрой), файлы мода -
// в mod\2\history\provinces и ПЕРЕКРЫВАЮТ ванильные для тех же id
// (обычная семантика мода Paradox: мод переопределяет только часть
// провинций, остальные наследуются) - поэтому сканируем сначала
// ванильную папку, потом модовую поверх.
static void LoadProvinceGoods()
{
    if (g_provinceGoodsLoaded)
        return;
    g_provinceGoodsLoaded = true;

    char dir[MAX_PATH];
    GetOwnDllDirectory(dir, sizeof(dir));
    if (!dir[0])
    {
        Log("LoadProvinceGoods: не удалось определить каталог DLL");
        return;
    }

    char vanillaDir[MAX_PATH];
    sprintf_s(vanillaDir, sizeof(vanillaDir), "%s\\history\\provinces", dir);
    DWORD vanillaAttrs = GetFileAttributesA(vanillaDir);
    if (vanillaAttrs != INVALID_FILE_ATTRIBUTES && (vanillaAttrs & FILE_ATTRIBUTE_DIRECTORY))
    {
        LogDbg("LoadProvinceGoods: сканирую ванильную '%s'", vanillaDir);
        ScanProvinceGoodsInDir(vanillaDir);
    }
    else
    {
        Log("LoadProvinceGoods: ванильная history\\provinces не найдена (%s)", vanillaDir);
    }

    char modDir[MAX_PATH];
    sprintf_s(modDir, sizeof(modDir), "%s\\mod\\2\\history\\provinces", dir);
    DWORD modAttrs = GetFileAttributesA(modDir);
    if (modAttrs != INVALID_FILE_ATTRIBUTES && (modAttrs & FILE_ATTRIBUTE_DIRECTORY))
    {
        LogDbg("LoadProvinceGoods: сканирую мод '%s' (перекрывает ванильные id)", modDir);
        ScanProvinceGoodsInDir(modDir);
    }

    int count = 0;
    for (int i = 0; i < MAX_PROVINCE_ID; ++i)
        if (g_provinceGood[i][0])
            ++count;
    Log("LoadProvinceGoods: готово, %d провинций с trade_goods", count);
}


// Развилка внутри FUN_004d04b0 (абс. 0x4D04BC, RVA 0xD04BC):
//   CMP dword ptr[ECX+0x84],0 ; PUSH EBX ; PUSH ESI ; PUSH EDI
//   ; JLE +8 (0xD04C6, -> 0xD04D3 продолжение) ; иначе 0xD04C8: XOR AL,AL (return false)
//
// ВАЖНО: 0xD04C8 — это НЕ только цель нашей проверки. По всей
// остальной функции ЕЩЁ ДЕСЯТОК разных условий (доступность товара,
// разрешение правящей партии, лимит фабрик и т.д.) прыгают именно
// туда как на общий "return false". Первая версия патча по ошибке
// перезаписывала 8 байт НАЧИНАЯ С JLE — это стирало и сам 0xD04C8,
// ломая вообще ВСЕ эти несвязанные проверки (крах при любом вызове
// функции, что и объясняло вылет на загрузке партии). Правильный
// патч ставится РАНЬШЕ, с самого CMP (10 байт до JLE включительно:
// CMP+PUSH EBX+PUSH ESI+PUSH EDI), и НЕ трогает 0xD04C6+ вообще —
// поэтому 0xD04C8 остаётся целым, и путь "заблокировано" просто
// прыгает туда как обычно.
static const DWORD RVA_PRODTYPE_GATE_HOOK = 0xD04BC;
static const DWORD RVA_PRODTYPE_GATE_RESUME_ALLOW = 0xD04D3;
static const DWORD RVA_PRODTYPE_GATE_RESUME_BLOCK = 0xD04C8;
static const unsigned char PRODTYPE_GATE_SIG[10] =
    { 0x83, 0xB9, 0x84, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x57 };
static DWORD g_prodTypeGateResumeAllow = 0;
static DWORD g_prodTypeGateResumeBlock = 0;

// Указатель param_2 ([EBP+0xC] внутри FUN_004d04b0) - это и есть
// объект типа производства; имя типа (как в production_types.txt)
// хранится в нём самом по смещению OFF_PRODTYPE_NAME в виде обычной
// C-строки. Сверяем эту строку с именами, сохранёнными при разборе
// файла, и смотрим найденный по имени индекс в g_limitByLocalSupply -
// НЕ читаем числовой индекс из самого объекта (см. комментарий у
// объявления g_productionTypeNames: он не совпадает с файловым).
// Точечные исключения сверх limit_by_local_supply: типы, которым
// тоже нужно разрешить постройку в колонии, но заводить для них
// целый отдельный флаг в production_types.txt не стали - patch
// только по имени. По умолчанию это fishery (is_coastal = yes);
// список редактируется из ini (PROD_TYPE_GATE_EXTRA_WHITELIST) без
// пересборки DLL - см. ParseExtraWhitelist. Используется только когда
// PROD_TYPE_GATE_ALLOW_ALL=0 (иначе разрешены все типы, до этого
// списка дело не доходит).
static const int MAX_EXTRA_WHITELIST = 32; // наше значение, не 16 из тестовой ветки
static const int EXTRA_WHITELIST_NAME_MAX = 64;
static char g_extraWhitelistNames[MAX_EXTRA_WHITELIST][EXTRA_WHITELIST_NAME_MAX] = { "fishery" };
static int g_extraWhitelistCount = 1;

static int __cdecl IsProdTypeWhitelistedByName(void* typePtr)
{
    if (!typePtr)
        return 0;

    const char* src = ResolveProdTypeNamePtr(typePtr);
    if (!src)
        return 0;
    char name[PRODTYPE_NAME_MAX];

    int i = 0;
    for (; i < PRODTYPE_NAME_MAX - 1; ++i)
    {
        char c = src[i];
        if (c == 0)
            break;
        name[i] = c;
    }
    name[i] = 0;

    for (int e = 0; e < g_extraWhitelistCount; ++e)
        if (_stricmp(g_extraWhitelistNames[e], name) == 0)
            return 1;

    for (int t = 0; t < g_productionTypeCount; ++t)
    {
        if (strcmp(g_productionTypeNames[t], name) == 0)
            return g_limitByLocalSupply[t] ? 1 : 0;
    }
    return 0;
}

static DWORD g_prodTypeGateWhitelisted = 0;

// Плоская копия g_settings.prodTypeGateAllowAll - в наked-asm проще
// и безопаснее читать отдельный global bool, чем поле структуры.
static unsigned char g_prodTypeGateAllowAll = 1;

__declspec(naked) static void ProdTypeGateThunk()
{
    __asm {
        // Сначала, ДО воспроизведения затёртых байт и ветвления,
        // одним изолированным блоком считаем "разрешено ли по имени".
        // ECX (состояние) сохраняем на всё время блока одной парой
        // push/pop - так же, как это делала более ранняя диагностика,
        // которая отработала без сбоев; вложенные push/pop вокруг
        // вызова C-функции ПОСРЕДИ уже разветвлённой логики (предыдущая
        // версия патча) на практике приводили к падению игры при
        // загрузке партии - как именно, не установлено, но структура
        // "один вызов - один save/restore - только потом ветвление"
        // проверена и безопасна.
        push ecx

        // PROD_TYPE_GATE_ALLOW_ALL=1 - разрешаем любой тип, дальше по
        // имени вообще не проверяем (белый список ниже используется
        // только в противоположном режиме, ALLOW_ALL=0).
        cmp byte ptr [g_prodTypeGateAllowAll], 0
        jz check_by_name
        mov eax, 1
        jmp store_result

    check_by_name:
        mov eax, dword ptr [ebp + 0x0c]
        test eax, eax
        jz faulty_allow
        push 0x5C
        push eax
        mov edx, g_fnIsBadReadPtr
        test edx, edx
        jz faulty_allow_clean8
        call edx
        test eax, eax
        jnz faulty_allow
        push dword ptr [ebp + 0x0c]
        call IsProdTypeWhitelistedByName
        add esp, 4
        jmp store_result
    faulty_allow_clean8:
        add esp, 8
    faulty_allow:
        mov eax, 1   // указатель плохой/пуст - безопасный откат: разрешаем, как раньше
    store_result:
        mov dword ptr [g_prodTypeGateWhitelisted], eax

        pop ecx

        // Воспроизводим переписанные байты (это НЕ цель прыжков извне,
        // так что их можно спокойно исполнить здесь же).
        cmp dword ptr [ecx + 0x84], 0
        push ebx
        push esi
        push edi
        jle allow
        cmp dword ptr [g_prodTypeGateWhitelisted], 0
        jnz allow
        jmp dword ptr [g_prodTypeGateResumeBlock]
    allow:
        jmp dword ptr [g_prodTypeGateResumeAllow]
    }
}

static bool InstallProdTypeGateHook()
{
    LoadProductionTypeLimits();

    g_prodTypeGateAllowAll = g_settings.prodTypeGateAllowAll ? 1 : 0;

    g_fnIsBadReadPtr = SafeIsBadReadPtr;

    unsigned char* hook = (unsigned char*)(g_base + RVA_PRODTYPE_GATE_HOOK);

    if (memcmp(hook, PRODTYPE_GATE_SIG, sizeof(PRODTYPE_GATE_SIG)) != 0)
    {
        Log("ProdTypeGateHook: сигнатура не совпала - не патчим");
        return false;
    }

    g_prodTypeGateResumeAllow = g_base + RVA_PRODTYPE_GATE_RESUME_ALLOW;
    g_prodTypeGateResumeBlock = g_base + RVA_PRODTYPE_GATE_RESUME_BLOCK;

    unsigned char patch[10];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&ProdTypeGateThunk - ((DWORD)hook + 5);
    for (int i = 5; i < 10; ++i)
        patch[i] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("ProdTypeGateHook: установлен");
    return true;
}

// ---------------------------------------------------------------

static const DWORD RVA_HIDE_NO_SUPPLY_HOOK        = 0x2F9E41;
static const DWORD RVA_HIDE_NO_SUPPLY_RESUME_SHOW = 0x2F9E48;
static const DWORD RVA_HIDE_NO_SUPPLY_RESUME_SKIP = 0x2F9EB0;
static const DWORD RVA_OPERATOR_NEW_0X30          = 0x6AE9AF;

// Проверяем "push 0x30" (6A 30) и первый байт "call" (E8) - опкод
// call rel32 однозначен, а вот форму кодирования push imm8/imm32
// напрямую через Ghidra MCP не смотрели (инструмент отдаёт только
// мнемонику, не байты) - если сигнатура не совпадёт, патч тихо
// пропустится и залогируется, как и остальные патчи в этом файле.
static const unsigned char HIDE_NO_SUPPLY_SIG[3] = { 0x6A, 0x30, 0xE8 };

static DWORD g_hideNoSupplyResumeShow = 0;
static DWORD g_hideNoSupplyResumeSkip = 0;
static DWORD g_operatorNewAddr        = 0;

// Тестовый режим: считаем и логируем вердикт как обычно, но НИКОГДА
// не прячем строку. Третий заход на эту фичу - весь подход к проверке
// сырья переписан на чтение файлов (production_types.txt +
// history/provinces/*.txt) вместо внутренних структур движка, которые
// оказались не про то (см. комментарий у FindLimitByLocalSupplyIndex).
// Подтверждено по логу (cattle/grain/timber -> 0, остальные 12 -> 1,
// совпадает с реальными ресурсами региона) - выключено. Единственный
// критерий скрытия - наличие сырья; "уже построено" НЕ считается
// причиной скрытия (см. комментарий у SafeShouldHideNoSupplyFactory).
static unsigned char g_hideNoSupplyDryRun = 0;

// Тот же разбор имени, что и в IsProdTypeWhitelistedByName, но без
// PROD_TYPE_GATE_EXTRA_WHITELIST - этот список только для патча
// "разрешить строить в колонии", к видимости в списке не относится.
// Возвращает индекс в g_productionTypeNames (и параллельных массивах
// g_limitByLocalSupply/g_productionTypeGood), или -1, если тип
// неизвестен.
static int FindProductionTypeIndex(void* typePtr)
{
    if (!typePtr)
        return -1;

    const char* src = ResolveProdTypeNamePtr(typePtr);
    if (!src)
        return -1;

    char name[PRODTYPE_NAME_MAX];
    int i = 0;
    for (; i < PRODTYPE_NAME_MAX - 1; ++i)
    {
        char c = src[i];
        if (c == 0)
            break;
        name[i] = c;
    }
    name[i] = 0;

    for (int t = 0; t < g_productionTypeCount; ++t)
    {
        if (strcmp(g_productionTypeNames[t], name) == 0)
            return t;
    }
    return -1;
}

static int FindLimitByLocalSupplyIndex(void* typePtr)
{
    int t = FindProductionTypeIndex(typePtr);
    return (t >= 0 && g_limitByLocalSupply[t]) ? t : -1;
}

// Второй заход на эту фичу: сначала пробовали читать "источник
// снабжения" через внутренние структуры движка (typePtr+0x12c,
// FUN_0052ca30 - см. память проекта project_hide_no_supply_factories)
// - структура читалась похоже на настоящую (та же, что использует
// проверенная FUN_0052ca30), но на практике оказалась НЕ про "физически
// есть ли товар в регионе": тестер подтвердил, что из 15 типов в его
// регионе доступен должен быть только timber_factory, а патч не прятал
// НИ ОДНОГО - похоже, это другая, более узкая (колониальная) проверка.
// Вместо гадания по памяти читаем сами: production_types.txt уже даёт
// нам единственный входной товар лимитированных типов (input_goods,
// см. g_productionTypeGood), а history/provinces/*.txt каждой
// провинции - её "trade_goods" тем же именем (см. LoadProvinceGoods).
// Сравниваем строками. Список провинций региона (state+0x48/+0x4c) -
// единственная часть прежнего подхода, которая давала правдоподобные
// данные (реальные id провинций), её и оставляем.
// Лёгкий throttle-лог по имени типа - только чтобы подтвердить исход
// на реальных данных этого тестового захода.
static const int HIDE_NO_SUPPLY_LOG_CACHE = 32;
static char g_hideNoSupplyLogName[HIDE_NO_SUPPLY_LOG_CACHE][PRODTYPE_NAME_MAX];
static int  g_hideNoSupplyLogResult[HIDE_NO_SUPPLY_LOG_CACHE];
static int  g_hideNoSupplyLogCount = 0;

static void LogHideNoSupplyResult(const char* name, int result)
{
    if (!g_settings.debugLog)
        return;
    for (int i = 0; i < g_hideNoSupplyLogCount; ++i)
    {
        if (strcmp(g_hideNoSupplyLogName[i], name) == 0)
        {
            if (g_hideNoSupplyLogResult[i] == result)
                return;
            g_hideNoSupplyLogResult[i] = result;
            LogDbg("HideNoSupply: %s -> hide=%d (изменился)", name, result);
            return;
        }
    }
    if (g_hideNoSupplyLogCount < HIDE_NO_SUPPLY_LOG_CACHE)
    {
        strcpy_s(g_hideNoSupplyLogName[g_hideNoSupplyLogCount], name);
        g_hideNoSupplyLogResult[g_hideNoSupplyLogCount] = result;
        ++g_hideNoSupplyLogCount;
    }
    LogDbg("HideNoSupply: %s -> hide=%d (впервые)", name, result);
}

// Отдельная задача "скрыть fishery, если регион не прибрежный" (не
// limit_by_local_supply, а is_coastal=yes) была опробована и брошена:
// три независимых статических захода через Ghidra не нашли, где
// движок хранит признак "этот регион прибрежный" -
//   1) байты самого объекта state - все отличия между заведомо
//      приморским и сухопутным регионом оказались просто "шумными"
//      (население/экономика/уже построенные фабрики), без чистого
//      флага 0/1;
//   2) байты объектов провинций региона и указатель +0xC8 у них -
//      похож на узел графа/пространственного индекса, а разница в
//      диапазоне памяти между группами - похоже, случайность порядка
//      выделения кучи, а не признак;
//   3) typePtr+0x12c ("локальный источник", который для
//      limit_by_local_supply типов бесполезен из-за их bypass-флага
//      +0x130) - оказался ОДНИМ И ТЕМ ЖЕ объектом независимо от
//      региона (это поле общее у типа в целом, не завязано на
//      конкретный регион), так что в принципе не может нести
//      региональную информацию.
// Решение (см. память проекта project_hide_no_supply_factories):
// оставить fishery как есть (всегда видна, как и в ванильном
// поведении) и не тратить больше времени на RTTI/vtable-подобный
// тупик - если понадобится вернуться, нужен live-инструмент
// (Cheat Engine и т.п.), а не статический Ghidra.

// Заворачиваем чтение списка провинций региона в SEH - state пришёл
// из [EDI+0xD0] окна постройки (см. поток вызовов, подтверждённый на
// province dump с реальными id), но перестраховка от битого указателя
// дешева и уже стандартна для этого файла (см. SafeCheckTypeName).
// (Пробовали ещё и доп. условие "уже построена - тоже скрыть" по
// связному списку state+0x60, тестер сначала подтвердил это как
// ожидаемое, потом уточнил обратное: "доступные, но уже построенные
// скрывать не нужно" - убрано, единственный критерий скрытия -
// наличие сырья в регионе.)
static int SafeShouldHideNoSupplyFactory(void* typePtr, void* statePtr, const char* name, const char* goodName)
{
    void* idBeginRaw = 0;
    void* idEndRaw = 0;

    __try
    {
        if (!statePtr)
            return 0;

        int* idBegin = *(int**)((char*)statePtr + 0x48);
        int* idEnd   = *(int**)((char*)statePtr + 0x4c);
        idBeginRaw = idBegin;
        idEndRaw = idEnd;

        if (!idBegin || !idEnd || idEnd < idBegin || (idEnd - idBegin) > 64)
            return 0; // подозрительный диапазон - безопасный откат, не трогаем

        for (int* p = idBegin; p < idEnd; ++p)
        {
            int provinceId = *p;
            if (provinceId > 0 && provinceId < MAX_PROVINCE_ID &&
                g_provinceGood[provinceId][0] &&
                strcmp(g_provinceGood[provinceId], goodName) == 0)
                return 0; // нашли провинцию с нужным сырьём - показываем
        }

        return 1; // ни одна провинция региона не производит нужный товар - скрываем
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("HideNoSupply: %s -> исключение! typePtr=%p statePtr=%p idBegin=%p idEnd=%p, не трогаем",
            name, typePtr, statePtr, idBeginRaw, idEndRaw);
        return 0;
    }
}

static int __cdecl ShouldHideNoSupplyFactory(void* typePtr, void* statePtr)
{
    int typeIndex = FindLimitByLocalSupplyIndex(typePtr);
    if (typeIndex < 0)
        return 0; // тип не привязан к местному сырью - не трогаем

    const char* goodName = g_productionTypeGood[typeIndex];
    if (!goodName[0])
        return 0; // не смогли распарсить input_goods - безопасный откат

    const char* name = g_productionTypeNames[typeIndex];
    int result = SafeShouldHideNoSupplyFactory(typePtr, statePtr, name, goodName);
    LogHideNoSupplyResult(name, result);
    return result;
}

// Один изолированный push/call/cleanup блок ПЕРЕД любым ветвлением -
// та же структура, что уже проверена на этом файле в ProdTypeGateThunk
// (см. комментарий там: вложенные push/pop посреди уже разветвлённой
// логики роняли игру на загрузке партии). ecx/eax/edx - единственные
// регистры, которые здесь вообще нужны; esi/edi (индекс цикла и "this"
// окна) и ebx/ebp не трогаем вовсе, поэтому даже не сохраняем.
// state снова нужен (список провинций региона для файлового подхода) -
// берём из [EDI+0xD0], как и раньше (правдоподобный, реальный список
// провинций - см. ShouldHideNoSupplyFactory).
__declspec(naked) static void HideNoSupplyFactoryThunk()
{
    __asm {
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + esi * 4]   // eax = typePtr кандидата
        mov edx, dword ptr [edi + 0xd0]      // edx = statePtr окна постройки

        push edx
        push eax
        call ShouldHideNoSupplyFactory
        add esp, 8
        cmp byte ptr [g_hideNoSupplyDryRun], 0
        jnz not_hidden   // тестовый режим - вердикт залогирован внутри вызова, но не применяем
        test eax, eax
        jnz hidden

    not_hidden:
        push 0x30
        call dword ptr [g_operatorNewAddr]
        jmp dword ptr [g_hideNoSupplyResumeShow]

    hidden:
        jmp dword ptr [g_hideNoSupplyResumeSkip]
    }
}

static bool InstallHideNoSupplyFactoriesHook()
{
    LoadProductionTypeLimits();
    LoadProvinceGoods();

    g_hideNoSupplyDryRun = g_settings.hideNoSupplyDryRun ? 1 : 0;

    unsigned char* hook = (unsigned char*)(g_base + RVA_HIDE_NO_SUPPLY_HOOK);

    if (memcmp(hook, HIDE_NO_SUPPLY_SIG, sizeof(HIDE_NO_SUPPLY_SIG)) != 0)
    {
        Log("HideNoSupplyFactoriesHook: сигнатура не совпала - не патчим");
        return false;
    }

    g_hideNoSupplyResumeShow = g_base + RVA_HIDE_NO_SUPPLY_RESUME_SHOW;
    g_hideNoSupplyResumeSkip = g_base + RVA_HIDE_NO_SUPPLY_RESUME_SKIP;
    g_operatorNewAddr        = g_base + RVA_OPERATOR_NEW_0X30;

    unsigned char patch[7];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&HideNoSupplyFactoryThunk - ((DWORD)hook + 5);
    patch[5] = 0x90;
    patch[6] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("HideNoSupplyFactoriesHook: установлен");
    return true;
}



// ---------------------------------------------------------------
// Подменённые слоты видов
// ---------------------------------------------------------------

// Слот Update: __thiscall без стековых аргументов, плоский ret.
typedef void(__fastcall* tUpdate)(void* ecx, void* edx);

// Слот подсказки: __thiscall с двумя стековыми аргументами и ret 8 —
// буфер под результат и элемент под курсором.
typedef void* (__fastcall* tTooltip)(void* ecx, void* edx, void* retBuf, void* element);

static void* g_origSlot[MAX_VIEWS] = { 0 };
static void* g_configuredView[MAX_VIEWS] = { 0 };
static int   g_updateSeen[MAX_VIEWS] = { 0 };

static void OnViewUpdate(int viewIndex, void* view)
{
    if (!view)
        return;

    if (g_updateSeen[viewIndex] < 2)
    {
        ++g_updateSeen[viewIndex];
        LogDbg("Update[%s]: вызван, view=%08X",
            VIEWS[viewIndex].name, (DWORD)(DWORD_PTR)view);
    }

    // Указатель сменился — вид пересоздан, например новой партией.
    if (view == g_configuredView[viewIndex])
        return;

    if (g_settings.buttons && SetupButtons(viewIndex, view))
        g_configuredView[viewIndex] = view;

    if (viewIndex == 2 && view != g_hideColonialConfiguredView)
    {
        if (SetupHideColonialButton(view))
            g_hideColonialConfiguredView = view;
    }
}

#define VIEW_THUNKS(n)                                              \
    static void __fastcall Update##n(void* view, void* edx)         \
    {                                                               \
        if (n < VIEW_COUNT)                                         \
            OnViewUpdate(n, view);                                  \
        if (g_origSlot[n])                                          \
            ((tUpdate)g_origSlot[n])(view, 0);                      \
    }                                                               \
    static void* __fastcall Tip##n(void* view, void* edx,           \
                                   void* retBuf, void* element)     \
    {                                                               \
        if (n < VIEW_COUNT)                                         \
            OnViewUpdate(n, view);                                  \
        void* result = g_origSlot[n]                                \
            ? ((tTooltip)g_origSlot[n])(view, 0, retBuf, element)    \
            : retBuf;                                               \
        OnTooltip(n, result, element);                               \
        return result;                                              \
    }

VIEW_THUNKS(0) VIEW_THUNKS(1) VIEW_THUNKS(2) VIEW_THUNKS(3)

static void* const UPDATE_THUNKS[MAX_VIEWS] =
{
    (void*)&Update0, (void*)&Update1, (void*)&Update2, (void*)&Update3,
};

static void* const TOOLTIP_THUNKS[MAX_VIEWS] =
{
    (void*)&Tip0, (void*)&Tip1, (void*)&Tip2, (void*)&Tip3,
};


// ---------------------------------------------------------------
// Фильтр списка решений
//
// Слот 0x18 в vtable CDecision — заглушка, всегда возвращавшая 1.
// Движок зовёт её и при отрисовке списка, и при исполнении, поэтому
// различаем по адресу возврата: он детерминирован и одинаков на всех
// машинах, в отличие от таймера, который ломал мультиплеер.
// ---------------------------------------------------------------

typedef char(__fastcall* tIsValid)(void* ecx, void* edx);
static tIsValid g_origIsValid = 0;

static const int OFF_DECISION_NAME = 0x08;

static const char* DecisionName(void* decision)
{
    const char* p = (const char*)decision + OFF_DECISION_NAME;

    unsigned res = *(const unsigned*)(p + 0x14);
    unsigned size = *(const unsigned*)(p + 0x10);

    // Грубая проверка на вменяемость: имена решений короткие, а
    // ёмкость не бывает меньше длины.
    if (size > 250 || res < size)
        return "";

    if (res > 15)
    {
        p = *(const char* const*)p;
        if (!p)
            return "";
    }

    return p;
}

static char __fastcall MyDecisionIsValid(void* decision, void* edx)
{
    if (!decision)
        return 1;

    const char* name = DecisionName(decision);
    if (!*name)
        return 1;

    bool mine = false;
    for (int i = 0; i < BUTTON_COUNT; ++i)
    {
        if (strcmp(name, BUTTONS[i].decision) == 0)
        {
            mine = true;
            break;
        }
    }

    if (!mine)
        return 1;

    DWORD caller = (DWORD)(DWORD_PTR)_ReturnAddress();
    bool fromList = caller >= g_base + RVA_POLITICS_DRAW_BEGIN
        && caller < g_base + RVA_POLITICS_DRAW_END;

    return fromList ? 0 : 1;
}




// ---------------------------------------------------------------
// Процентный шаг изменения цены
//
// Ванильно шаг фиксирован: по 0x0125B9E0 лежит int64 = 328, то есть
// 0.01 в фиксированной точке (0.01 * 2^15). Перехватываем место, где
// в ECX:EAX уже лежит текущая цена, и переписываем константу на долю
// от неё. Константу не читает никто, кроме этой функции.
//
// Арифметика целочисленная, от времени и порядка событий не зависит:
// при одинаковой DLL все клиенты получают побитно одинаковый результат.
// ---------------------------------------------------------------

// Шаг в сотых долях процента: 25 = 0.25% в день, 100 = 1%.
static const int PRICE_BASIS_POINTS = 25;

static const DWORD PRICE_MUL = (DWORD)((PRICE_BASIS_POINTS * 65536LL) / 10000);

static const DWORD RVA_PRICE_HOOK = 0x82BA9;   // SAR EDX,0Fh
static const DWORD RVA_PRICE_RESUME = 0x82BAE;   // SUB EDI,[delta]
static const DWORD RVA_PRICE_DELTA = 0xE5B9E0;  // int64, младшее слово

static const unsigned char PRICE_SIG[5] = { 0xC1, 0xFA, 0x0F, 0x8B, 0xF8 };

static bool InstallPriceDelta()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_PRICE_HOOK);

    if (memcmp(hook, PRICE_SIG, sizeof(PRICE_SIG)) != 0)
    {
        Log("PriceDelta: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 128, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    DWORD deltaLo = g_base + RVA_PRICE_DELTA;
    DWORD deltaHi = deltaLo + 4;

    int n = 0;

    // Восстанавливаем то, что перекрыли прыжком.
    cave[n++] = 0xC1; cave[n++] = 0xFA; cave[n++] = 0x0F;   // sar edx, 0Fh
    cave[n++] = 0x8B; cave[n++] = 0xF8;                     // mov edi, eax

    // EAX и ECX — цена, EDX — целевая цена; MUL затирает EDX.
    cave[n++] = 0x50;                                       // push eax
    cave[n++] = 0x51;                                       // push ecx
    cave[n++] = 0x52;                                       // push edx

    cave[n++] = 0xB9;                                       // mov ecx, PRICE_MUL
    *(DWORD*)(cave + n) = PRICE_MUL; n += 4;
    cave[n++] = 0xF7; cave[n++] = 0xE1;                     // mul ecx
    cave[n++] = 0x0F; cave[n++] = 0xAC; cave[n++] = 0xD0;
    cave[n++] = 0x10;                                       // shrd eax, edx, 16
    cave[n++] = 0xC1; cave[n++] = 0xEA; cave[n++] = 0x10;   // shr edx, 16

    // У дешёвых товаров доля округляется в ноль, и цена застыла бы.
    cave[n++] = 0x85; cave[n++] = 0xD2;                     // test edx, edx
    cave[n++] = 0x75; cave[n++] = 0x05;                     // jnz store
    cave[n++] = 0x85; cave[n++] = 0xC0;                     // test eax, eax
    cave[n++] = 0x75; cave[n++] = 0x01;                     // jnz store
    cave[n++] = 0x40;                                       // inc eax

    cave[n++] = 0xA3;                                       // mov [deltaLo], eax
    *(DWORD*)(cave + n) = deltaLo; n += 4;
    cave[n++] = 0x89; cave[n++] = 0x15;                     // mov [deltaHi], edx
    *(DWORD*)(cave + n) = deltaHi; n += 4;

    cave[n++] = 0x5A;                                       // pop edx
    cave[n++] = 0x59;                                       // pop ecx
    cave[n++] = 0x58;                                       // pop eax

    cave[n++] = 0xE9;                                       // jmp обратно
    *(DWORD*)(cave + n) = (g_base + RVA_PRICE_RESUME) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)cave - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("PriceDelta: %d сотых процента, множитель %u",
        PRICE_BASIS_POINTS, PRICE_MUL);
    return true;
}


// ---------------------------------------------------------------
// Экспоненциальный шаг изменения цены (альтернатива InstallPriceDelta)
//
// Та же самая точка перехвата (RVA_PRICE_HOOK/RVA_PRICE_RESUME,
// PRICE_SIG), поэтому взаимоисключающе с ENABLE_PRICE_DELTA - см.
// проверку в Install(). Получен готовым дизасмом (radare2), байты
// сверены вручную побайтово с исходным дампом:
//
//   sar edx, 0xf              ; воспроизводим перекрытое
//   mov edi, eax              ; воспроизводим перекрытое
//   shrd edi, ecx, 8          ; НОВОЕ: EDI = (ECX:EAX) >> 8, младшие 32 бита
//   mov [deltaLo], edi        ; записываем в младшее слово шага
//   mov edi, ecx
//   sar edi, 7                ; НОВОЕ: старшее слово = ECX >> 7 (не 8!)
//   mov [deltaHi], edi        ; записываем в старшее слово шага
//   mov edi, eax              ; воспроизводим перекрытое ещё раз
//   sub edi, [deltaLo]        ; воспроизводим перекрытое (RVA_PRICE_RESUME)
//   jmp RVA_PRICE_RESUME
//
// ECX:EAX на входе — текущая цена (см. комментарий у InstallPriceDelta).
// Шаг (0x0125B9E0/E4, тот же int64, что и в InstallPriceDelta) отсюда
// больше не константа, а производная от самой цены через сдвиги —
// то есть шаг растёт вместе с ценой, а не остаётся фиксированным
// абсолютным числом. Несимметричные сдвиги (8 для младшего слова,
// 7 для старшего) взяты как есть из готового патча - самостоятельно
// вывести точный процент из этого несоответствия не пытались, байты
// просто перенесены без изменений на другой (нашей) адрес пещеры.
// ---------------------------------------------------------------

static bool InstallExponentialPriceDelta()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_PRICE_HOOK);

    if (memcmp(hook, PRICE_SIG, sizeof(PRICE_SIG)) != 0)
    {
        Log("ExponentialPriceDelta: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    DWORD deltaLo = g_base + RVA_PRICE_DELTA;
    DWORD deltaHi = deltaLo + 4;

    int n = 0;

    cave[n++] = 0xC1; cave[n++] = 0xFA; cave[n++] = 0x0F;   // sar edx, 0Fh
    cave[n++] = 0x89; cave[n++] = 0xC7;                     // mov edi, eax

    cave[n++] = 0x0F; cave[n++] = 0xAC; cave[n++] = 0xCF; cave[n++] = 0x08; // shrd edi, ecx, 8

    cave[n++] = 0x89; cave[n++] = 0x3D;                     // mov [deltaLo], edi
    *(DWORD*)(cave + n) = deltaLo; n += 4;

    cave[n++] = 0x89; cave[n++] = 0xCF;                     // mov edi, ecx
    cave[n++] = 0xC1; cave[n++] = 0xFF; cave[n++] = 0x07;   // sar edi, 7

    cave[n++] = 0x89; cave[n++] = 0x3D;                     // mov [deltaHi], edi
    *(DWORD*)(cave + n) = deltaHi; n += 4;

    cave[n++] = 0x89; cave[n++] = 0xC7;                     // mov edi, eax

    cave[n++] = 0x2B; cave[n++] = 0x3D;                     // sub edi, [deltaLo]
    *(DWORD*)(cave + n) = deltaLo; n += 4;

    cave[n++] = 0xE9;                                       // jmp обратно
    *(DWORD*)(cave + n) = (g_base + RVA_PRICE_RESUME) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)cave - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("ExponentialPriceDelta: установлен, пещера %08X", (DWORD)(DWORD_PTR)cave);
    return true;
}


// ---------------------------------------------------------------
// Байтовые правки exe
//
// Смещения заданы как в exe-модах ZombieFreak115 — как смещения в
// ФАЙЛЕ. Переводим их через таблицу секций PE в рантайме.
// Правки меняют симуляцию, поэтому DLL должна быть одинаковой у всех.
// ---------------------------------------------------------------

// Правка задаётся либо смещением в файле (как в exe-модах
// ZombieFreak115), либо сразу RVA. Заполняется одно из двух.
struct BytePatch
{
    const char* name;
    DWORD         fileOffset;
    DWORD         rva;
    int           len;
    unsigned char expect[16];
    unsigned char replace[16];
    bool          enabled;
};

static BytePatch EXE_PATCHES[] =
{
    // Постоянно включённый debug alwaysaddwargoal.
    { "always_add_wargoals", 0x137EFF, 0, 1, { 0x00 }, { 0x02 }, true },

    // Было: mov [esp+20h], ecx — пересылка ослабленного снабжения
    // на следующую бригаду в стеке.
    { "land_reinforce",      0x1C809B, 0, 4, { 0x89, 0x4C, 0x24, 0x20 },
                                             { 0x90, 0x90, 0x90, 0x90 }, true },

                                             // 89 -> 8B: направление пересылки меняется на обратное.
                                             { "naval_reinforce",     0x1C7F1C, 0, 1, { 0x89 }, { 0x8B }, true },

    // Относительный максимум цены (double, значение хранится x16384):
    // было ~10x базовой цены, пробовали x100 (сломало экономику - см.
    // историю правок и common/defines.lua) и x20 (в игре видимый потолок
    // в Trade-окне всё равно остался x10 - разбирались через Ghidra,
    // константа реально читается в двух местах в FUN_00482930/0082f430,
    // но точную причину "почему всё равно x10" статическим анализом
    // выяснить не удалось - функция слишком плотная). Ставим x40 как
    // эмпирическую проверку: если видимый потолок сдвинется - константа
    // всё же влияет, просто нелинейно/с обходным путём; если останется
    // x10 - дело не в этой константе вообще. rva задан напрямую (адрес
    // в Ghidra 0xE45C28 минус imagebase 0x400000).
    { "max_relative_price",  0, 0xA45C28, 8,
        { 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x41 },
        { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x41 }, true },

    // Ежемесячный рост plurality от средней сознательности страны.
    // Было: add eax,[ebx+0x1A8]  (eax = вклад от consciousness, [ebx+0x1A8] = plurality)
    // Стало: mov eax,[ebx+0x1A8] — вклад отбрасывается, plurality не меняется
    // от этой формулы; остальная часть функции (клампы, прочие поля) не тронута,
    // второй писатель plurality (скриптовый эффект "plurality = X" из событий,
    // rva 0x496470) тоже не тронут.
    { "consciousness_plurality_growth", 0, 0x10C5DE, 1, { 0x03 }, { 0x8B }, true },

    // Локальный показатель пополнения (FUN_005D7420, ветка LAB_005d74bb):
    // было 1000 (100.0%, "allied or occupied territory" из вики), ставим
    // 1500 (150.0%). Та же ветка используется и для юнитов тега REB в одном
    // узком случае (совпадение провинции с "домашней" для родительской
    // страны) — разделить без добавления ветвления нельзя, это одна и та
    // же инструкция mov eax,imm32.
    { "allied_reinforce_150", 0, 0x1D74BE, 5,
        { 0xB8, 0xE8, 0x03, 0x00, 0x00 },
        { 0xB8, 0xDC, 0x05, 0x00, 0x00 }, true },

    // Всплывающие цифры потерь над боем (map-text "CombatLoss").
    // FUN_0059CA40 - посуточное обновление боя (сухопутного и морского,
    // одна виртуальная функция). После расчёта дня она проверяет, участвует
    // ли в бою страна, для которой рисуется интерфейс (param_2, метод
    // vtable+0x58 даёт ссылку на страну, у неё +4 = id): сперва ищет id в
    // списке участников стороны A (side+0x34..+0x38, записи по 8 байт), если
    // не нашёл - в списке стороны B (FUN_0042BB00). Только если страна
    // нашлась в одном из списков, вызывается FUN_00595820 (по разу для
    // каждой стороны) - она создаёт плавающий текст с потерями дня. То есть
    // цифры видит только участник боя.
    // Было: rva 0x19CC5D  je 0x59CCA9 (страна не нашлась ни в A, ни в B ->
    // перепрыгнуть показ цифр). Стало: два NOP - проваливаемся в показ
    // всегда, любой стране. Остальной код функции не тронут; показ - чистый
    // UI (создание текстового объекта на карте, ГСЧ и состояние боя не
    // трогает; ветка и так зависела от клиента - у каждого свой игрок).
    { "combat_loss_popup_all", 0, 0x19CC5D, 2, { 0x74, 0x4A }, { 0x90, 0x90 }, true },

    // Окно бюджета: строка "Общие доходы" (textbox total_inc, поле окна
    // +0x160) считалась как FUN_0052b610(...) минус пошлины, т.е. без
    // доходов от пошлин (они лежат в записи окна (DAT_00f096c8+0xd)*0x10,
    // поле +0x18, ключ "TARIFFS_INCOME"; в подсказке "Общие доходы" они
    // есть, потому число в строке и в подсказке расходилось). В
    // FUN_005FEDE0 после call FUN_0052b610 (0x6010C5):
    //   0x6010CC  sub edi,[esp+0x120]   (2B BC 24 20 01 00 00)
    //   0x6010D6  sbb esi,[esp+0x124]   (1B B4 24 24 01 00 00)
    // вычитают пошлины. Оба NOPим - строка совпадает с подсказкой. Баланс
    // (поле +0x168, другая цепочка 0x601549) не трогаем. Чистый UI.
    { "budget_total_income_tariffs_1", 0, 0x2010CC, 7,
        { 0x2B, 0xBC, 0x24, 0x20, 0x01, 0x00, 0x00 },
        { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 }, true },
    { "budget_total_income_tariffs_2", 0, 0x2010D6, 7,
        { 0x1B, 0xB4, 0x24, 0x24, 0x01, 0x00, 0x00 },
        { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 }, true },

    // Разрешить строить фабрики в колониальных регионах.
    // Обе функции чек-листа постройки (FUN_004d06a0 и FUN_0052e9f0)
    // независимо инлайнят одну и ту же проверку "state+0x84 > 0" для
    // пункта "Неколониальная область" (BUILD_COLONIAL). Проверено вживую
    // (диагностический хук): для колониального региона +0x84 = 2, и
    // результат SETZ = 0 передаётся в отрисовщик иконки как "крестик" —
    // то есть 0 = крестик, 1 = галочка (обратно тому, что предполагалось
    // изначально). Патчим SETZ так, чтобы результат был всегда 1.
    // FUN_004d06a0 подтверждённо не вызывается для кнопки "+" (0
    // попаданий), но правим и её для согласованности — вдруг
    // используется в другом месте (чек-лист "Расширить"?).
    { "build_factory_ignore_colonial_1", 0, 0xD0C57, 3,
        { 0x0F, 0x94, 0xC1 },
        { 0xB1, 0x01, 0x90 }, true },
    { "build_factory_ignore_colonial_2", 0, 0x12FA4E, 3,
        { 0x0F, 0x94, 0xC0 },
        { 0xB0, 0x01, 0x90 }, true },

    // Третья, независимая копия той же проверки — но эта единственная
    // реально решает, активна ли кнопка "+" (FUN_0052e960, вызывается
    // из FUN_0073f300 для виджета "build_factory_button" и напрямую
    // определяет, какой из виртуальных методов включения/выключения
    // кнопки будет вызван). Патчи _1/_2 выше правят только текст
    // чек-листа, на саму кнопку не влияют.
    // Было: CMP dword ptr [EAX+0x84],0 ; JG +0x5F (если колония — сразу
    // возврат "выключено", минуя все остальные условия). NOP'аем JG,
    // чтобы колониальность не мешала остальной цепочке проверок
    // (цивилизованность / лимит фабрик / разрешение правящей партии).
    { "build_factory_button_enable_ignore_colonial", 0, 0x12E977, 2,
        { 0x7F, 0x5F },
        { 0x90, 0x90 }, true },

    // FUN_004d0e70 (абс. 0x4D0E70) - отдельная, независимая от
    // FUN_004d04b0 проверка, вызываемая ТОЛЬКО для production_type с
    // заполненным полем +300 (привязка к "локальному источнику" -
    // судя по всему заполняется именно у limit_by_local_supply=yes
    // типов, поэтому обычные фабрики её вообще не проходят). Внутри:
    // if (тип_источника == 2 && состояние.colonial > 0 && <совпадение
    // владельца/тега>) return false. Это и есть настоящая причина
    // "не могу построить collapsed-РГО-фабрику именно в колонии" -
    // никак не связанная ни с нашим гейтом, ни с limit_by_local_supply
    // как таковым. Меняем JLE (0x7E) на безусловный JMP (0xEB) на
    // rva 0xD0E9D - переход на 0xD0ED4 (пропуск блокировки) теперь
    // происходит всегда, независимо от colonial, а остальные условия
    // функции (владелец/тег и т.д.) продолжают работать как раньше.
    { "local_supply_factory_ignore_colonial", 0, 0xD0E9D, 2,
        { 0x7E, 0x35 },
        { 0xEB, 0x35 }, true },

    // Разрешить нецивилизованным странам строить фабрики.
    //
    // FUN_0052e960 (rva 0x12E960) - единственная функция, реально
    // решающая, активна ли кнопка "+" (см. коммент выше про
    // local_supply_factory_ignore_colonial - она из той же серии
    // проверок). Первым делом: cmp byte ptr[EDI+0x12D0],0 ; jz -> сразу
    // "выключено", если страна (EDI, "мы") не цивилизована. NOP'аем JZ,
    // чтобы гейт цивилизованности не мешал остальной цепочке проверок
    // (колониальность / лимит фабрик / прочее) - как и в
    // build_factory_button_enable_ignore_colonial для колоний.
    { "build_factory_ignore_uncivilized_button", 0, 0x12E96E, 2,
        { 0x74, 0x68 },
        { 0x90, 0x90 }, true },

    // FUN_0052e9f0 (rva 0x12E9F0) - функция чек-листа постройки,
    // формирует пункт "Цивилизованная страна". Ветка "наша территория"
    // (rva 0x12EA67): mov al,[ESI+0x12D0] читает наш флаг цивилизации
    // напрямую в результат пункта чек-листа. Подменяем на mov al,1 -
    // пункт всегда показывает галочку, независимо от статуса.
    { "build_factory_checklist_uncivilized_own", 0, 0x12EA67, 6,
        { 0x8A, 0x86, 0xD0, 0x12, 0x00, 0x00 },
        { 0xB0, 0x01, 0x90, 0x90, 0x90, 0x90 }, true },

    // Та же функция, ветка "не наша территория" (rva 0x12F0D4):
    // cmp byte ptr[ESI+0x12D0],0 ; jz -> пункт=0, если МЫ не
    // цивилизованы (независимо от статуса владельца провинции).
    // NOP'аем JZ - оставляем в силе только проверку цивилизации
    // владельца провинции, которая к этому патчу не относится.
    { "build_factory_checklist_uncivilized_other", 0, 0x12F0D4, 2,
        { 0x74, 0x0C },
        { 0x90, 0x90 }, true },


    // Настоящий гейт "Построить" найден: FUN_0052c9b0 (реальная
    // проверка "можно ли построить фабрику этого типа сейчас", в
    // отличие от FUN_0052e960, который только решает состояние
    // кнопки "+") вызывает ПОСЛЕДОВАТЕЛЬНО FUN_0052e960() (уже
    // пропатчена тремя патчами выше), FUN_0052ca30() и проверку
    // денег. FUN_0052ca30 - тонкая обёртка над FUN_004d04b0 (общий
    // чек-лист "тип доступен в этом штате", патчи _ignore_colonial
    // выше правят другую его часть), которая ДОБАВЛЯЕТ СВОЮ
    // НЕЗАВИСИМУЮ проверку civilized ПЕРЕД вызовом FUN_004d04b0:
    // cmp byte ptr[EDI+0x12D0],0 ; jnz continue ; xor al,al ; ret
    // (если не цивилизованы - сразу false, FUN_004d04b0 не
    // вызывается вовсе). Меняем JNZ (0x75) на безусловный JMP
    // (0xEB) - тот же байт смещения, тот же путь, что и при
    // civilized != 0.
    { "build_factory_ignore_uncivilized_can_build", 0, 0x12CA3E, 2,
        { 0x75, 0x08 },
        { 0xEB, 0x08 }, true },

    // Разрешить нецивилизованным странам исследовать технологии.
    //
    // human_player_patch, byte-в-byte как был дан изначально (адрес,
    // длина, expect/replace - без изменений). ПО ЗАПРОСУ пользователя,
    // несмотря на то, что этот конкретный адрес (0x3A9B57, как fileOffset)
    // не резолвится в Ghidra как код в этой сборке - есть отдельная,
    // самостоятельно найденная и рабочая альтернатива (xref на строку
    // "UNCIV_CANT_RESEARCH" -> FUN_007a9950, rva 0x3A9F21, near jmp,
    // см. историю правок этого файла), но её результат в игре не
    // подтверждён (возможен второй, независимый гейт внутри
    // FUN_00569920). Сигнатура ниже, вероятнее всего, не совпадёт при
    // запуске - InstallExePatches просто пропустит эту запись и
    // залогирует "сигнатура не совпала", без вреда.
    { "allow_unciv_tech_research", 0x3A9B57, 0, 1,
        { 0x75 },
        { 0xEB }, false },

    // Доля дохода РГО, уходящая владельцам/аристократам - меняет
    // масштаб формулы в FUN_004ee990 (VA 0x4EE990). Проверено через
    // Ghidra (decompile_function_by_address на VA 0x4EEA2B):
    //
    //   lVar10 = __alldiv(uVar1<<0x1f, uVar1>>1,           ; числитель:  uVar1 * 2^31 (64-бит)
    //                      uVar5<<0xf,  sign(uVar5)<<0xf | uVar5>>0x11); ; знаменатель: (int64)uVar5 * 2^15
    //   ; результат = (uVar1/uVar5) * 2^16, дальше клампится сверху
    //   ; константой (DAT_0125d758/5c) - потолок этим патчем не трогается
    //
    // uVar1 - количество нужного типа попов (владельцы/аристократы),
    // uVar5 - размер занятой рабочей силы (сравнение через отношение,
    // не фиксированный процент из defines).
    //
    // Патч _1/_2 меняет сдвиг числителя 31->17 бит (owners<<0x1F
    // -> owners<<0x11 в двух половинах 64-битного сдвига). Патчи
    // _3/_4/_5 убирают сдвиг+маску знаменателя (15 бит) целиком -
    // uVar5 входит в деление НЕмасштабированным.
    //
    // Итог: result = (uVar1/uVar5) * 2^17 - РОВНО в 2 раза (+100%)
    // больше ванильного (uVar1/uVar5) * 2^16, при том же отношении
    // владельцы/рабочие. Потолок (кламп) не меняется - там, где
    // ванильное значение уже упиралось в потолок, эффекта не будет.
    { "aristocrat_income_share_patch_1", 0, 0xEEA2B, 1, { 0x1F }, { 0x11 }, false },
    { "aristocrat_income_share_patch_2", 0, 0xEEA2E, 1, { 0x1F }, { 0x11 }, false },
    { "aristocrat_income_share_patch_3", 0, 0xEEA32, 4,
        { 0x0F, 0xA4, 0xC2, 0x0F },
        { 0x90, 0x90, 0x90, 0x90 }, false },
    { "aristocrat_income_share_patch_4", 0, 0xEEA37, 3,
        { 0xC1, 0xE0, 0x0F },
        { 0x90, 0x90, 0x90 }, false },
    { "aristocrat_income_share_patch_5", 0, 0xEEA3C, 6,
        { 0x81, 0xE7, 0x00, 0x80, 0xFF, 0xFF },
        { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 }, false },

    // Чек-сумма (в углу экрана) уходит на +1 после каждого входа в
    // партию/лобби, из-за чего она не совпадает с той, что была при
    // запуске - и в мультиплеере приходится перезапускать клиент,
    // чтобы чек-суммы у игроков снова совпали. Воспроизводится и на
    // ванили. Найдено через живое логирование из нашего же DLL +
    // подтверждено Cheat Engine ("find out what writes to this
    // address" на адрес аккумулятора чек-суммы):
    //
    // Конструктор CBackEndIdler (FUN_005f8110, грузит
    // interface/backend.gui - экран загрузки между меню и партией,
    // т.е. срабатывает на каждый вход) в конце безусловно делает
    // (*(int*)(param_4+0x30))++ - param_4 это тот же объект, чьё
    // поле +0x30 отдельно читает FUN_006377a0 как итоговое целое
    // чек-суммы перед тем, как построить текст "Checksum is X".
    // Кроме этих двух мест (чтение в FUN_006377a0, инкремент здесь)
    // поле нигде больше не встречается - похоже на посторонний
    // счётчик загрузок, случайно заведённый в то же поле.
    //
    // Убираем ровно "INC EAX" (1 байт), оставляя чтение и запись
    // того же значения обратно - безобидная no-op пара вместо
    // инкремента, минимальное вмешательство.
    //
    // Выключено по умолчанию (2026-09-24, наше прежнее решение): патч
    // действительно чинит дрейф ЭТОЙ чек-суммы, но реальная посуточная
    // сверка хода ("Games out of synch", FUN_00682ec0) от неё не зависит
    // и всё равно расходится - патч просто маскирует несовместимость
    // вместо того, чтобы дать лобби честно отказать на входе. Вместо
    // патча - перезапуск обеих копий игры перед сессией.
    { "checksum_drift_fix", 0, 0x1F8268, 1,
        { 0x40 },
        { 0x90 }, false },
};

static const int EXE_PATCH_COUNT = sizeof(EXE_PATCHES) / sizeof(EXE_PATCHES[0]);


// ---------------------------------------------------------------
// Загрузка/сохранение настроек (v2dll_settings.ini)
//
// Ключи ENABLE_* и семь именованных PATCH_* правят поля g_settings.
// Любой другой ключ PATCH_<ИМЯ> ищется (без учёта регистра) в
// таблице EXE_PATCHES выше и правит BytePatch::enabled найденной
// записи - поэтому весь блок объявлен здесь, после таблицы, а не
// в начале файла.
// ---------------------------------------------------------------

static bool ParseBoolValue(const char* value)
{
    while (*value == ' ' || *value == '\t')
        ++value;
    return atoi(value) != 0;
}

// Формат значения: имена типов производства через запятую, например
// "fishery,some_other_type". Пробелы вокруг имён и запятых игнорируются.
static void ParseExtraWhitelist(const char* value)
{
    g_extraWhitelistCount = 0;
    const char* p = value;

    while (*p && g_extraWhitelistCount < MAX_EXTRA_WHITELIST)
    {
        while (*p == ' ' || *p == '\t' || *p == ',')
            ++p;
        if (!*p || *p == '\n' || *p == '\r')
            break;

        int i = 0;
        while (*p && *p != ',' && *p != '\n' && *p != '\r' && i < EXTRA_WHITELIST_NAME_MAX - 1)
            g_extraWhitelistNames[g_extraWhitelistCount][i++] = *p++;

        while (i > 0 && (g_extraWhitelistNames[g_extraWhitelistCount][i - 1] == ' ' ||
                         g_extraWhitelistNames[g_extraWhitelistCount][i - 1] == '\t'))
            --i;
        g_extraWhitelistNames[g_extraWhitelistCount][i] = '\0';

        if (i > 0)
            ++g_extraWhitelistCount;

        while (*p && *p != ',')
            ++p;
    }
}

static void ApplySetting(const char* key, const char* value)
{
    bool v = ParseBoolValue(value);

    if (_stricmp(key, "LOCAL_MOD_CONFIG") == 0)             { g_settings.localModConfig = v; return; }

    if (_stricmp(key, "ENABLE_LOG") == 0)                  { g_settings.log            = v; return; }
    if (_stricmp(key, "DEBUG_LOG") == 0)                   { g_settings.debugLog       = v; return; }
    if (_stricmp(key, "ENABLE_BUTTONS") == 0)               { g_settings.buttons        = v; return; }
    if (_stricmp(key, "ENABLE_DECISION_FILTER") == 0)       { g_settings.decisionFilter = v; return; }
    if (_stricmp(key, "ENABLE_PRICE_DELTA") == 0)           { g_settings.priceDelta     = v; return; }
    if (_stricmp(key, "ENABLE_POP_DISPLAY") == 0)           { g_settings.popDisplay     = v; return; }
    if (_stricmp(key, "ENABLE_VERSION_LABEL") == 0)         { g_settings.versionLabel   = v; return; }

    if (_stricmp(key, "PATCH_OCCUPIED_REINFORCE_SPLIT") == 0) { g_settings.patchOccupiedReinforceSplit = v; return; }
    if (_stricmp(key, "PATCH_ALLY_OWNER_CHECK") == 0)          { g_settings.patchAllyOwnerCheck         = v; return; }
    if (_stricmp(key, "PATCH_ALLY_EMBARK") == 0)                { g_settings.patchAllyEmbark             = v; return; }
    if (_stricmp(key, "SHOW_ALLY_EMBARKED_TOOLTIP") == 0)       { g_settings.showAllyEmbarkedTooltip     = v; return; }
    if (_stricmp(key, "PATCH_CIVILIZE_NULL_CHECK") == 0)       { g_settings.patchCivilizeNullCheck      = v; return; }
    if (_stricmp(key, "PATCH_SUPPLY_SOURCE_NULL_CHECK") == 0)  { g_settings.patchSupplySourceNullCheck  = v; return; }
    if (_stricmp(key, "PATCH_TECH_NULL_CHECK_FIXES") == 0)     { g_settings.patchTechNullCheckFixes     = v; return; }
    if (_stricmp(key, "PATCH_GRAPH_POINT_CLAMP") == 0)         { g_settings.patchGraphPointClamp        = v; return; }
    if (_stricmp(key, "PATCH_FACTORY_DUMP_SCAN") == 0)         { g_settings.patchFactoryDumpScan        = v; return; }
    if (_stricmp(key, "PATCH_PROD_LIST_VISIBILITY") == 0)      { g_settings.patchProdListVisibility     = v; return; }
    if (_stricmp(key, "PATCH_PROD_TYPE_GATE") == 0)            { g_settings.patchProdTypeGate           = v; return; }
    if (_stricmp(key, "HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES") == 0) { g_settings.patchHideNoSupplyFactories = v; return; }
    if (_stricmp(key, "HIDE_NO_SUPPLY_DRY_RUN") == 0)          { g_settings.hideNoSupplyDryRun          = v; return; }
    if (_stricmp(key, "PATCH_FACTORY_CLOSE_PAYOUT") == 0)      { g_settings.patchFactoryClosePayout     = v; return; }
    if (_stricmp(key, "PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE") == 0) { g_settings.patchFactoryAutoClose = v; return; }
    if (_stricmp(key, "FACTORY_CLOSE_DRY_RUN") == 0)           { g_settings.factoryCloseDryRun          = v; return; }
    if (_stricmp(key, "PATCH_AI_EXPAND_STAFFING") == 0)        { g_settings.patchAiExpandStaffing       = v; return; }
    if (_stricmp(key, "PATCH_AI_NAVAL_BASE_LIMIT") == 0)       { g_settings.patchAiNavalBaseLimit       = v; return; }
    if (_stricmp(key, "PATCH_FACTORY_MIN_WAGE") == 0)          { g_settings.patchFactoryMinWage         = v; return; }
    if (_stricmp(key, "PATCH_NEEDS_HONEST_UI") == 0)           { g_settings.patchNeedsHonestUi          = v; return; }
    if (_stricmp(key, "PATCH_FACTORY_PRIORITY_BY_RULE") == 0)  { g_settings.patchFactoryPriorityByRule  = v; return; }
    if (_stricmp(key, "PROD_TYPE_GATE_ALLOW_ALL") == 0)         { g_settings.prodTypeGateAllowAll        = v; return; }
    if (_stricmp(key, "PATCH_EXPONENTIAL_PRICE_DELTA") == 0)    { g_settings.patchExponentialPriceDelta  = v; return; }
    if (_stricmp(key, "PATCH_COMBAT_ROLL") == 0)                { g_settings.patchCombatRoll             = v; return; }
    if (_stricmp(key, "PATCH_CHECKSUM_DIAGNOSTIC") == 0)        { g_settings.patchChecksumDiagnostic     = v; return; }
    if (_stricmp(key, "ENABLE_OOS_LOG") == 0)                   { g_settings.enableOosLog                = v; return; }
    if (_stricmp(key, "ENABLE_CRASH_LOG") == 0)                 { g_settings.enableCrashLog              = v; return; }
    if (_stricmp(key, "ENABLE_CRASH_DUMP") == 0)                { g_settings.enableCrashDump             = v; return; }

    if (_stricmp(key, "PATCH_FPU_FORTRESS") == 0)               { g_settings.patchFpuFortress            = v; return; }
    if (_stricmp(key, "PATCH_D3D_FPU_PRESERVE") == 0)           { g_settings.patchD3dFpuPreserve         = v; return; }
    if (_stricmp(key, "PATCH_HEAP_LFH") == 0)                   { g_settings.patchHeapLfh                = v; return; }
    if (_stricmp(key, "PATCH_THREAD_FPU_PIN") == 0)             { g_settings.patchThreadFpuPin           = v; return; }
    if (_stricmp(key, "ENGINE_WORKER_THREADS") == 0)
    {
        g_settings.engineWorkerThreads = atoi(value);
        if (g_settings.engineWorkerThreads < 0)
            g_settings.engineWorkerThreads = 0;
        if (g_settings.engineWorkerThreads > 32)
            g_settings.engineWorkerThreads = 32;
        return;
    }
    if (_stricmp(key, "PATCH_POP_QUANTIZE") == 0)               { g_settings.patchPopQuantize            = v; return; }
    if (_stricmp(key, "POP_QUANTIZE_KEEP_BITS") == 0)
    {
        g_settings.popQuantizeKeepBits = atoi(value);
        return;
    }
    if (_stricmp(key, "PATCH_MP_CLIENT_SLEEP") == 0)            { g_settings.patchMpClientSleep          = v; return; }
    if (_stricmp(key, "MP_CLIENT_SLEEP_MS") == 0)
    {
        g_settings.mpClientSleepMs = atoi(value);
        return;
    }
    if (_stricmp(key, "PATCH_MAIN_LOOP_SLEEP0") == 0)           { g_settings.patchMainLoopSleep0         = v; return; }
    if (_stricmp(key, "MAIN_LOOP_SLEEP_MS") == 0)
    {
        g_settings.mainLoopSleepMs = atoi(value);
        return;
    }
    if (_stricmp(key, "PATCH_D3D_NO_VSYNC") == 0)               { g_settings.patchD3dNoVsync             = v; return; }
    if (_stricmp(key, "D3D_FPS_LIMIT") == 0)
    {
        g_settings.d3dFpsLimit = atoi(value);
        if (g_settings.d3dFpsLimit < 0)
            g_settings.d3dFpsLimit = 0;
        return;
    }
    if (_stricmp(key, "PATCH_SKIP_SEL_PROJ") == 0)              { g_settings.patchSkipSelProj            = v; return; }
    if (_stricmp(key, "PATCH_REUSE_UNIT_VIEW") == 0)            { g_settings.patchReuseUnitView          = v; return; }
    if (_stricmp(key, "PATCH_SKIP_ARMY_IDLE") == 0)             { g_settings.patchSkipArmyIdle           = v; return; }
    if (_stricmp(key, "PATCH_REUSE_WINDOWS") == 0)              { g_settings.patchReuseWindows           = v; return; }
    if (_stricmp(key, "PATCH_HIGH_PRIORITY") == 0)              { g_settings.patchHighPriority           = v; return; }
    if (_stricmp(key, "PATCH_SKIP_NESTED_IDLE") == 0)           { g_settings.patchSkipNestedIdle         = v; return; }
    if (_stricmp(key, "PATCH_SKIP_CHK_WIN") == 0)               { g_settings.patchSkipChkWin             = v; return; }
    if (_stricmp(key, "PATCH_CAM_STILL") == 0)                  { g_settings.patchCamStill               = v; return; }
    if (_stricmp(key, "FIX_SFX_MIXER_LAG") == 0)                { g_settings.fixSfxMixerLag              = v; return; }
    if (_stricmp(key, "FIX_ARMY_WINDOW_LAG") == 0)              { g_settings.patchFixArmyWindowLag       = v; return; }
    if (_stricmp(key, "HIDE_RAW_GOODS_FILTER") == 0)            { g_settings.hideRawGoodsFilter          = v; return; }
    if (_stricmp(key, "ENABLE_GOODS_ICONS") == 0)               { g_settings.goodsIcons                  = v; return; }
    if (_stricmp(key, "FILTER_SHOW_ALL_FACTORIES_IN_STATE") == 0) { g_settings.filterShowAllInState      = v; return; }
    if (_stricmp(key, "FILTER_PRODUCERS_ONLY") == 0)            { g_settings.filterProducersOnly         = v; return; }
    if (_stricmp(key, "PLAYER_BUTTONS") == 0)               { g_settings.playerButtons            = v; return; }
    if (_stricmp(key, "MUSIC_FAIR_RANDOM") == 0)                { g_settings.musicFairRandom             = v; return; }
    if (_stricmp(key, "ENABLE_EVENT_SOUNDS") == 0)               { g_settings.EventSounds                 = v; return; }
    if (_stricmp(key, "RESTART_ON_BACKEND_BG") == 0)              { g_settings.restartOnBackendBg           = v; return; }
    if (_stricmp(key, "ENABLE_MINTING") == 0)                   { g_settings.minting                     = v; return; }
    if (_stricmp(key, "ENABLE_GOODS_CONSUMPTION") == 0)         { g_settings.goodsConsumption            = v; return; }
    if (_stricmp(key, "GOODS_CONSUMPTION_MARKET_DEMAND") == 0)  { g_settings.goodsConsumptionDemand      = v; return; }

    if (_stricmp(key, "COMBAT_ROLL_MIN") == 0) { g_settings.combatRollMin = atoi(value); return; }
    if (_stricmp(key, "COMBAT_ROLL_MAX") == 0) { g_settings.combatRollMax = atoi(value); return; }

    if (_stricmp(key, "PROD_TYPE_GATE_EXTRA_WHITELIST") == 0) { ParseExtraWhitelist(value); return; }

    // Пять частей одного патча (числитель/знаменатель формулы доли
    // аристократов) должны применяться только вместе - один ключ
    // на все 5 записей таблицы, а не по одной.
    if (_stricmp(key, "PATCH_ARISTOCRAT_INCOME_SHARE") == 0)
    {
        static const char* const names[] =
        {
            "aristocrat_income_share_patch_1",
            "aristocrat_income_share_patch_2",
            "aristocrat_income_share_patch_3",
            "aristocrat_income_share_patch_4",
            "aristocrat_income_share_patch_5",
        };
        for (int n = 0; n < 5; ++n)
            for (int i = 0; i < EXE_PATCH_COUNT; ++i)
                if (_stricmp(EXE_PATCHES[i].name, names[n]) == 0)
                    EXE_PATCHES[i].enabled = v;
        return;
    }

    if (_stricmp(key, "PATCH_BUDGET_TOTAL_INCOME_TARIFFS") == 0)
    {
        for (int i = 0; i < EXE_PATCH_COUNT; ++i)
            if (_strnicmp(EXE_PATCHES[i].name, "budget_total_income_tariffs_", 28) == 0)
                EXE_PATCHES[i].enabled = v;
        return;
    }

    if (_strnicmp(key, "PATCH_", 6) == 0)
    {
        const char* patchName = key + 6;
        for (int i = 0; i < EXE_PATCH_COUNT; ++i)
        {
            if (_stricmp(EXE_PATCHES[i].name, patchName) == 0)
            {
                EXE_PATCHES[i].enabled = v;
                return;
            }
        }
    }
}

// Ищет запись в EXE_PATCHES по имени - используется здесь, чтобы
// печатать записи таблицы в порядке категорий (Military/Economic/
// UI/Miscellaneous), а не в порядке объявления в таблице.
static bool FindExePatchEnabled(const char* name)
{
    for (int i = 0; i < EXE_PATCH_COUNT; ++i)
        if (_stricmp(EXE_PATCHES[i].name, name) == 0)
            return EXE_PATCHES[i].enabled;
    return false;
}

static void WriteDefaultSettings(const char* path)
{
    FILE* f = 0;
    if (fopen_s(&f, path, "w") != 0 || !f)
        return;

    fprintf(f,
        "LOCAL_MOD_CONFIG=%d\n"
        "\n",
        (int)g_settings.localModConfig);

    fprintf(f,
        "; Military\n"
        "PATCH_ALWAYS_ADD_WARGOALS=%d\n"
        "PATCH_LAND_REINFORCE=%d\n"
        "PATCH_NAVAL_REINFORCE=%d\n"
        "PATCH_ALLIED_REINFORCE_150=%d\n"
        "PATCH_OCCUPIED_REINFORCE_SPLIT=%d\n"
        "PATCH_ALLY_OWNER_CHECK=%d\n"
        "PATCH_ALLY_EMBARK=%d\n"
        "SHOW_ALLY_EMBARKED_TOOLTIP=%d\n"
        "PATCH_COMBAT_ROLL=%d\n"
        "COMBAT_ROLL_MIN=%d\n"
        "COMBAT_ROLL_MAX=%d\n"
        "PATCH_COMBAT_LOSS_POPUP_ALL=%d\n"
        "\n",
        (int)FindExePatchEnabled("always_add_wargoals"),
        (int)FindExePatchEnabled("land_reinforce"),
        (int)FindExePatchEnabled("naval_reinforce"),
        (int)FindExePatchEnabled("allied_reinforce_150"),
        (int)g_settings.patchOccupiedReinforceSplit,
        (int)g_settings.patchAllyOwnerCheck,
        (int)g_settings.patchAllyEmbark,
        (int)g_settings.showAllyEmbarkedTooltip,
        (int)g_settings.patchCombatRoll,
        g_settings.combatRollMin,
        g_settings.combatRollMax,
        (int)FindExePatchEnabled("combat_loss_popup_all"));

    char extraWhitelistJoined[MAX_EXTRA_WHITELIST * EXTRA_WHITELIST_NAME_MAX] = "";
    for (int w = 0; w < g_extraWhitelistCount; ++w)
    {
        if (w > 0)
            strcat_s(extraWhitelistJoined, sizeof(extraWhitelistJoined), ",");
        strcat_s(extraWhitelistJoined, sizeof(extraWhitelistJoined), g_extraWhitelistNames[w]);
    }

    fprintf(f,
        "; Economic\n"
        "ENABLE_PRICE_DELTA=%d\n"
        "PATCH_EXPONENTIAL_PRICE_DELTA=%d\n"
        "PATCH_MAX_RELATIVE_PRICE=%d\n"
        "PATCH_BUILD_FACTORY_IGNORE_COLONIAL_1=%d\n"
        "PATCH_BUILD_FACTORY_IGNORE_COLONIAL_2=%d\n"
        "PATCH_BUILD_FACTORY_BUTTON_ENABLE_IGNORE_COLONIAL=%d\n"
        "PATCH_LOCAL_SUPPLY_FACTORY_IGNORE_COLONIAL=%d\n"
        "PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_BUTTON=%d\n"
        "PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OWN=%d\n"
        "PATCH_BUILD_FACTORY_CHECKLIST_UNCIVILIZED_OTHER=%d\n"
        "PATCH_BUILD_FACTORY_IGNORE_UNCIVILIZED_CAN_BUILD=%d\n"
        "PATCH_PROD_TYPE_GATE=%d\n"
        "PROD_TYPE_GATE_ALLOW_ALL=%d\n"
        "PROD_TYPE_GATE_EXTRA_WHITELIST=%s\n"
        "PATCH_FACTORY_CLOSE_PAYOUT=%d\n"
        "PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE=%d\n"
        "FACTORY_CLOSE_DRY_RUN=%d\n"
        "PATCH_AI_EXPAND_STAFFING=%d\n"
        "PATCH_FACTORY_MIN_WAGE=%d\n"
        "PATCH_NEEDS_HONEST_UI=%d\n"
        "PATCH_FACTORY_PRIORITY_BY_RULE=%d\n"
        "\n",
        (int)g_settings.priceDelta,
        (int)g_settings.patchExponentialPriceDelta,
        (int)FindExePatchEnabled("max_relative_price"),
        (int)FindExePatchEnabled("build_factory_ignore_colonial_1"),
        (int)FindExePatchEnabled("build_factory_ignore_colonial_2"),
        (int)FindExePatchEnabled("build_factory_button_enable_ignore_colonial"),
        (int)FindExePatchEnabled("local_supply_factory_ignore_colonial"),
        (int)FindExePatchEnabled("build_factory_ignore_uncivilized_button"),
        (int)FindExePatchEnabled("build_factory_checklist_uncivilized_own"),
        (int)FindExePatchEnabled("build_factory_checklist_uncivilized_other"),
        (int)FindExePatchEnabled("build_factory_ignore_uncivilized_can_build"),
        (int)g_settings.patchProdTypeGate,
        (int)g_settings.prodTypeGateAllowAll,
        extraWhitelistJoined,
        (int)g_settings.patchFactoryClosePayout,
        (int)g_settings.patchFactoryAutoClose,
        (int)g_settings.factoryCloseDryRun,
        (int)g_settings.patchAiExpandStaffing,
        (int)g_settings.patchFactoryMinWage,
        (int)g_settings.patchNeedsHonestUi,
        (int)g_settings.patchFactoryPriorityByRule);

    fprintf(f,
        "; UI\n"
        "ENABLE_BUTTONS=%d\n"
        "ENABLE_DECISION_FILTER=%d\n"
        "ENABLE_POP_DISPLAY=%d\n"
        "ENABLE_VERSION_LABEL=%d\n"
        "PATCH_PROD_LIST_VISIBILITY=%d\n"
        "HIDE_UNAVAILABLE_LIMIT_BY_SUPPLY_FACTORIES=%d\n"
        "HIDE_RAW_GOODS_FILTER=%d\n"
        "FILTER_SHOW_ALL_FACTORIES_IN_STATE=%d\n"
        "FILTER_PRODUCERS_ONLY=%d\n"
        "PLAYER_BUTTONS=%d\n"
        "ENABLE_GOODS_ICONS=%d\n"
        "\n",
        (int)g_settings.buttons,
        (int)g_settings.decisionFilter,
        (int)g_settings.popDisplay,
        (int)g_settings.versionLabel,
        (int)g_settings.patchProdListVisibility,
        (int)g_settings.patchHideNoSupplyFactories,
        (int)g_settings.hideRawGoodsFilter,
        (int)g_settings.filterShowAllInState,
        (int)g_settings.filterProducersOnly,
        (int)g_settings.playerButtons,
        (int)g_settings.goodsIcons);

    fprintf(f,
        "; Miscellaneous\n"
        "PATCH_CONSCIOUSNESS_PLURALITY_GROWTH=%d\n"
        "PATCH_CIVILIZE_NULL_CHECK=%d\n"
        "PATCH_GRAPH_POINT_CLAMP=%d\n"
        "PATCH_CHECKSUM_DRIFT_FIX=%d\n"
        "PATCH_ALLOW_UNCIV_TECH_RESEARCH=%d\n"
        "PATCH_ARISTOCRAT_INCOME_SHARE=%d\n"
        "MUSIC_FAIR_RANDOM=%d\n"
        "ENABLE_EVENT_SOUNDS=%d\n"
        "RESTART_ON_BACKEND_BG=%d\n"
        "PATCH_TECH_NULL_CHECK_FIXES=%d\n"
        "PATCH_SUPPLY_SOURCE_NULL_CHECK=%d\n"
        "PATCH_AI_NAVAL_BASE_LIMIT=%d\n"
        "ENABLE_MINTING=%d\n"
        "ENABLE_GOODS_CONSUMPTION=%d\n"
        "GOODS_CONSUMPTION_MARKET_DEMAND=%d\n"
        "PATCH_BUDGET_TOTAL_INCOME_TARIFFS=%d\n"
        "\n",
        (int)FindExePatchEnabled("consciousness_plurality_growth"),
        (int)g_settings.patchCivilizeNullCheck,
        (int)g_settings.patchGraphPointClamp,
        (int)FindExePatchEnabled("checksum_drift_fix"),
        (int)FindExePatchEnabled("allow_unciv_tech_research"),
        (int)FindExePatchEnabled("aristocrat_income_share_patch_1"),
        (int)g_settings.musicFairRandom,
        (int)g_settings.EventSounds,
        (int)g_settings.restartOnBackendBg,
        (int)g_settings.patchTechNullCheckFixes,
        (int)g_settings.patchSupplySourceNullCheck,
        (int)g_settings.patchAiNavalBaseLimit,
        (int)g_settings.minting,
        (int)g_settings.goodsConsumption,
        (int)g_settings.goodsConsumptionDemand,
        (int)FindExePatchEnabled("budget_total_income_tariffs_1"));

    fprintf(f,
        "; Stability\n"
        "PATCH_FPU_FORTRESS=%d\n"
        "PATCH_D3D_FPU_PRESERVE=%d\n"
        "PATCH_HEAP_LFH=%d\n"
        "PATCH_THREAD_FPU_PIN=%d\n"
        "ENGINE_WORKER_THREADS=%d\n"
        "PATCH_POP_QUANTIZE=%d\n"
        "POP_QUANTIZE_KEEP_BITS=%d\n"
        "PATCH_MP_CLIENT_SLEEP=%d\n"
        "MP_CLIENT_SLEEP_MS=%d\n"
        "PATCH_MAIN_LOOP_SLEEP0=%d\n"
        "MAIN_LOOP_SLEEP_MS=%d\n"
        "PATCH_D3D_NO_VSYNC=%d\n"
        "D3D_FPS_LIMIT=%d\n"
        "PATCH_SKIP_SEL_PROJ=%d\n"
        "PATCH_REUSE_UNIT_VIEW=%d\n"
        "PATCH_SKIP_ARMY_IDLE=%d\n"
        "PATCH_REUSE_WINDOWS=%d\n"
        "PATCH_HIGH_PRIORITY=%d\n"
        "PATCH_SKIP_NESTED_IDLE=%d\n"
        "PATCH_SKIP_CHK_WIN=%d\n"
        "PATCH_CAM_STILL=%d\n"
        "FIX_SFX_MIXER_LAG=%d\n"
        "FIX_ARMY_WINDOW_LAG=%d\n"
        "\n",
        (int)g_settings.patchFpuFortress,
        (int)g_settings.patchD3dFpuPreserve,
        (int)g_settings.patchHeapLfh,
        (int)g_settings.patchThreadFpuPin,
        g_settings.engineWorkerThreads,
        (int)g_settings.patchPopQuantize,
        g_settings.popQuantizeKeepBits,
        (int)g_settings.patchMpClientSleep,
        g_settings.mpClientSleepMs,
        (int)g_settings.patchMainLoopSleep0,
        g_settings.mainLoopSleepMs,
        (int)g_settings.patchD3dNoVsync,
        g_settings.d3dFpsLimit,
        (int)g_settings.patchSkipSelProj,
        (int)g_settings.patchReuseUnitView,
        (int)g_settings.patchSkipArmyIdle,
        (int)g_settings.patchReuseWindows,
        (int)g_settings.patchHighPriority,
        (int)g_settings.patchSkipNestedIdle,
        (int)g_settings.patchSkipChkWin,
        (int)g_settings.patchCamStill,
        (int)g_settings.fixSfxMixerLag,
        (int)g_settings.patchFixArmyWindowLag);

    fprintf(f,
        "; Diagnostics\n"
        "ENABLE_LOG=%d\n"
        "DEBUG_LOG=%d\n"
        "PATCH_FACTORY_DUMP_SCAN=%d\n"
        "PATCH_CHECKSUM_DIAGNOSTIC=%d\n"
        "ENABLE_OOS_LOG=%d\n"
        "ENABLE_CRASH_LOG=%d\n"
        "ENABLE_CRASH_DUMP=%d\n"
        "HIDE_NO_SUPPLY_DRY_RUN=%d\n",
        (int)g_settings.log,
        (int)g_settings.debugLog,
        (int)g_settings.patchFactoryDumpScan,
        (int)g_settings.patchChecksumDiagnostic,
        (int)g_settings.enableOosLog,
        (int)g_settings.enableCrashLog,
        (int)g_settings.enableCrashDump,
        (int)g_settings.hideNoSupplyDryRun);

    fclose(f);
}

// Формат строки: KEY=VALUE, необязательный "; комментарий" в
// хвосте строки не мешает разбору (atoi останавливается на первой
// нецифровой позиции). Строки без '=' (пустые, комментарии) пропускаются.
// Если файла по path нет - создаёт его со значениями по умолчанию.
static void LoadSettingsFrom(const char* path)
{
    FILE* f = 0;
    if (fopen_s(&f, path, "r") != 0 || !f)
    {
        Log("LoadSettingsFrom: '%s' не найден - создаю со значениями по умолчанию", path);
        WriteDefaultSettings(path);
        return;
    }

    Log("LoadSettingsFrom: читаю '%s'", path);

    char line[4096];
    while (fgets(line, sizeof(line), f))
    {
        char* eq = strchr(line, '=');
        if (!eq)
            continue;

        *eq = '\0';
        const char* value = eq + 1;

        char key[64];
        size_t klen = strlen(line);
        if (klen >= sizeof(key))
            klen = sizeof(key) - 1;
        memcpy(key, line, klen);
        key[klen] = '\0';
        while (klen > 0 && (key[klen - 1] == ' ' || key[klen - 1] == '\t'))
            key[--klen] = '\0';

        ApplySetting(key, value);
    }

    fclose(f);
}

static bool ResolveModFolder(char* outFolder, size_t outSize)
{
    const char* cmdLine = GetCommandLineA();
    const char* modArg = strstr(cmdLine, "-mod=");
    if (!modArg)
        return false;
    modArg += 5;

    char modFile[MAX_PATH] = { 0 };
    size_t i = 0;
    if (*modArg == '"')
    {
        ++modArg;
        while (*modArg && *modArg != '"' && i < sizeof(modFile) - 1)
            modFile[i++] = *modArg++;
    }
    else
    {
        while (*modArg && i < sizeof(modFile) - 1)
        {
            if (modArg[0] == ' ' && modArg[1] == '-')
                break;
            modFile[i++] = *modArg++;
        }
        while (i > 0 && modFile[i - 1] == ' ')
            --i;
    }
    modFile[i] = '\0';

    if (modFile[0] == '\0')
        return false;

    FILE* f = 0;
    if (fopen_s(&f, modFile, "r") != 0 || !f)
    {
        Log("ResolveModFolder: не смог открыть %s (из командной строки)", modFile);
        return false;
    }

    bool found = false;
    char line[512];
    while (fgets(line, sizeof(line), f))
    {
        char* p = strstr(line, "path");
        if (!p)
            continue;

        char* eq = strchr(p, '=');
        if (!eq)
            continue;

        char* q1 = strchr(eq, '"');
        if (!q1)
            continue;
        char* q2 = strchr(q1 + 1, '"');
        if (!q2)
            continue;

        size_t len = (size_t)(q2 - q1 - 1);
        if (len >= outSize)
            len = outSize - 1;
        memcpy(outFolder, q1 + 1, len);
        outFolder[len] = '\0';
        found = true;
        break;
    }

    fclose(f);
    return found;
}

// Сначала общий v2dll_settings.ini рядом с exe (LOCAL_MOD_CONFIG).
// Если включён - перечитываем из папки запущенного мода.
static void LoadSettings()
{
    static const char* ROOT_PATH = "v2dll_settings.ini";

    LoadSettingsFrom(ROOT_PATH);

    if (!g_settings.localModConfig)
        return;

    char modFolder[MAX_PATH];
    if (!ResolveModFolder(modFolder, sizeof(modFolder)))
    {
        Log("LOCAL_MOD_CONFIG=1, но папку запущенного мода определить не "
            "удалось (нет -mod= в командной строке или .mod не читается) - "
            "использую %s", ROOT_PATH);
        return;
    }

    char modPath[MAX_PATH];
    _snprintf_s(modPath, sizeof(modPath), _TRUNCATE, "%s\\v2dll_settings.ini", modFolder);

    Log("LOCAL_MOD_CONFIG=1: настройки берутся из %s", modPath);
    LoadSettingsFrom(modPath);
}


static DWORD FileOffsetToRVA(DWORD fileOffset)
{
    IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)g_base;
    if (dos->e_magic != IMAGE_DOS_SIGNATURE)
        return 0;

    IMAGE_NT_HEADERS* nt = (IMAGE_NT_HEADERS*)(g_base + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE)
        return 0;

    IMAGE_SECTION_HEADER* sec = IMAGE_FIRST_SECTION(nt);

    for (int i = 0; i < nt->FileHeader.NumberOfSections; ++i, ++sec)
    {
        DWORD start = sec->PointerToRawData;
        DWORD size = sec->SizeOfRawData;

        if (fileOffset >= start && fileOffset < start + size)
            return sec->VirtualAddress + (fileOffset - start);
    }

    return 0;
}


static void InstallExePatches()
{
    for (int i = 0; i < EXE_PATCH_COUNT; ++i)
    {
        BytePatch& bp = EXE_PATCHES[i];

        if (!bp.enabled)
            continue;

        DWORD rva = bp.rva ? bp.rva : FileOffsetToRVA(bp.fileOffset);
        if (!rva)
        {
            Log("Patch '%s': смещение %06X вне секций", bp.name, bp.fileOffset);
            continue;
        }

        unsigned char* at = (unsigned char*)(g_base + rva);

        if (memcmp(at, bp.expect, bp.len) != 0)
        {
            Log("Patch '%s': сигнатура не совпала - не патчим", bp.name);
            continue;
        }

        DWORD oldProtect = 0;
        if (!VirtualProtect(at, bp.len, PAGE_EXECUTE_READWRITE, &oldProtect))
            continue;

        memcpy(at, bp.replace, bp.len);
        VirtualProtect(at, bp.len, oldProtect, &oldProtect);

        Log("Patch '%s': применён на rva %06X", bp.name, rva);
    }
}


// ---------------------------------------------------------------
// Разделение ставки пополнения: occupied vs allied
//
// allied_reinforce_150 выше правит ЕДИНСТВЕННУЮ инструкцию
// mov eax,1000 на LAB_005d74bb (FUN_005d7420) — но в эту точку
// сходятся ДВЕ разные ветки: "мы сами контролируем провинцию,
// не являющуюся нашим кором" (occupied) и "провинция под контролем
// союзника, не в состоянии войны" (allied). Общий mov затрагивает
// обе сразу, разделить его без ветвления нельзя (см. коммент выше).
//
// Перехватываем ветку occupied ДО слияния: "cmp edx,[ecx+0x20];
// jz LAB_005d74bb" (rva 0x1D751B, 5 байт) — это и есть проверка
// "владелец юнита == страна, контролирующая провинцию". Прыгаем
// в пещеру, повторяем cmp; при совпадении (occupied) пишем свою
// ставку и уходим в общий эпилог функции (rva 0x1D74C5,
// mov eax,ecx; pop edi; pop esi; pop ebx; mov esp,ebp; pop ebp;
// ret 4) — он лежит ПОСЛЕ патчуемой allied_reinforce_150
// инструкции и ею не затронут. При несовпадении (allied)
// повторяем перекрытую "mov esi,[ecx+0xbe8]" и прыгаем обратно
// в оригинальный код (rva 0x1D7526) — та ветка идёт дальше как
// раньше и сама попадает на LAB_005d74bb, где её по-прежнему
// ждут патченные 1500 (150.0%) от allied_reinforce_150.
// ---------------------------------------------------------------

static const int OCCUPIED_REINFORCE_RATE = 1000;   // 100.0%, как в ванили

static const DWORD RVA_OCC_REINFORCE_HOOK   = 0x1D751B;   // cmp edx,[ecx+0x20]; jz
static const DWORD RVA_OCC_REINFORCE_RESUME = 0x1D7526;   // mov edx,[esi+edx*4] (продолжение allied-ветки)
static const DWORD RVA_OCC_REINFORCE_TAIL   = 0x1D74C5;   // mov eax,ecx; pop edi; ...; ret 4
static const DWORD RVA_LAB_74BB             = 0x1D74BB;   // mov ecx,[ebp+8]; mov eax,1000(->1500) — LAB_005d74bb

static const unsigned char OCC_REINFORCE_SIG[5] =
{ 0x3B, 0x51, 0x20, 0x74, 0x9B };

static bool InstallOccupiedReinforceSplit()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_OCC_REINFORCE_HOOK);

    if (memcmp(hook, OCC_REINFORCE_SIG, sizeof(OCC_REINFORCE_SIG)) != 0)
    {
        Log("OccupiedReinforceSplit: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    // Повторяем перекрытые прыжком байты.
    cave[n++] = 0x3B; cave[n++] = 0x51; cave[n++] = 0x20;   // cmp edx,[ecx+0x20]

    int jzAt = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz occupied (адрес допишем ниже)

    // allied: восстанавливаем перекрытую "mov esi,[ecx+0xbe8]"
    // и уходим обратно в оригинальный код.
    cave[n++] = 0x8B; cave[n++] = 0xB1;
    *(DWORD*)(cave + n) = 0xBE8; n += 4;

    cave[n++] = 0xE9;                                       // jmp обратно (allied продолжается как раньше)
    *(DWORD*)(cave + n) = (g_base + RVA_OCC_REINFORCE_RESUME) - (DWORD)(cave + n + 4);
    n += 4;

    int occupiedAt = n;
    cave[jzAt + 1] = (unsigned char)(occupiedAt - (jzAt + 2));

    cave[n++] = 0x8B; cave[n++] = 0x4D; cave[n++] = 0x08;   // mov ecx,[ebp+8]
    cave[n++] = 0xB8;                                       // mov eax, OCCUPIED_REINFORCE_RATE
    *(DWORD*)(cave + n) = (DWORD)OCCUPIED_REINFORCE_RATE; n += 4;
    cave[n++] = 0x89; cave[n++] = 0x01;                     // mov [ecx],eax

    cave[n++] = 0xE9;                                       // jmp в общий эпилог функции
    *(DWORD*)(cave + n) = (g_base + RVA_OCC_REINFORCE_TAIL) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)cave - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("OccupiedReinforceSplit: occupied=%d.%d%%, пещера %08X",
        OCCUPIED_REINFORCE_RATE / 10, OCCUPIED_REINFORCE_RATE % 10, (DWORD)(DWORD_PTR)cave);
    return true;
}


// ---------------------------------------------------------------
// Разделение ставки пополнения: occupied-by-ally vs owned-by-ally
//
// InstallOccupiedReinforceSplit выше ловит только случай "мы сами
// контролируем провинцию не по кору" (Check A, cmp edx,[ecx+0x20]).
// Но в ту же ветку LAB_005d74bb ведёт и Check B — "провинция под
// контролем страны, дружественной нам" (relations[controller][us]
// == 0), — а Check B срабатывает НЕЗАВИСИМО от того, владеет ли
// эта дружественная страна провинцией по кору или тоже просто
// оккупировала её. То есть "союзник владеет" и "союзник оккупирует
// чужую территорию" сейчас неотличимы и обе идут на 150%.
//
// Три JNZ на rva 0x1D7544/0x1D754E/0x1D7558 (проверка тега
// контроллера на "REB" побайтово) при непопадании ведут именно на
// LAB_005d74bb — это единственные точки входа в Check B. Все три
// уже закодированы компилятором как near jmp (0F 85 rel32, 6 байт,
// т.к. LAB_005d74bb не достаётся коротким прыжком отсюда), поэтому
// правим только 4-байтовый rel32, без пещеры-трамплина для самих
// прыжков — только для новой развилки, куда они теперь ведут.
//
// В развилке провинция (EDI, не меняется по всей функции) даёт
// owner (+0x12c) и controller (+0x134) напрямую, без опоры на ECX/
// EDX, которые Check B успел затереть под свои нужды: если они
// равны — контроллер и есть настоящий владелец, это owned-by-ally
// (150%, уходим на исходный LAB_005d74bb); если нет — оккупация
// союзником чужой земли (100%, тот же хвост-эпилог, что и у Check A).
// ---------------------------------------------------------------

static const DWORD RVA_ALLY_JNZ1 = 0x1D7544;   // jnz LAB_005d74bb (controller.tag[0] != 'R')
static const DWORD RVA_ALLY_JNZ2 = 0x1D754E;   // jnz LAB_005d74bb (controller.tag[1] != 'E')
static const DWORD RVA_ALLY_JNZ3 = 0x1D7558;   // jnz LAB_005d74bb (controller.tag[2] != 'B')

static const unsigned char ALLY_JNZ1_SIG[6] = { 0x0F, 0x85, 0x71, 0xFF, 0xFF, 0xFF };
static const unsigned char ALLY_JNZ2_SIG[6] = { 0x0F, 0x85, 0x67, 0xFF, 0xFF, 0xFF };
static const unsigned char ALLY_JNZ3_SIG[6] = { 0x0F, 0x85, 0x5D, 0xFF, 0xFF, 0xFF };

static bool RepointNearJnz(DWORD rva, const unsigned char* sig, DWORD newTargetVA)
{
    unsigned char* at = (unsigned char*)(g_base + rva);

    if (memcmp(at, sig, 6) != 0)
    {
        Log("AllyOwnerCheck: сигнатура не совпала на rva %06X - не патчим", rva);
        return false;
    }

    unsigned char patch[6];
    patch[0] = 0x0F;
    patch[1] = 0x85;
    *(DWORD*)(patch + 2) = newTargetVA - ((DWORD)at + 6);

    DWORD oldProtect = 0;
    if (!VirtualProtect(at, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(at, patch, sizeof(patch));
    VirtualProtect(at, sizeof(patch), oldProtect, &oldProtect);
    return true;
}

static bool InstallAllyOwnerCheck()
{
    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    cave[n++] = 0x8B; cave[n++] = 0x97;                     // mov edx,[edi+0x12c]  (province.owner_id)
    *(DWORD*)(cave + n) = 0x12C; n += 4;

    cave[n++] = 0x3B; cave[n++] = 0x97;                     // cmp edx,[edi+0x134]  (province.controller_id)
    *(DWORD*)(cave + n) = 0x134; n += 4;

    cave[n++] = 0x0F; cave[n++] = 0x84;                     // jz owned-by-ally -> исходный LAB_005d74bb (150%)
    *(DWORD*)(cave + n) = (g_base + RVA_LAB_74BB) - (DWORD)(cave + n + 4);
    n += 4;

    // occupied-by-ally: своя ставка, тот же хвост-эпилог, что и у Check A.
    cave[n++] = 0x8B; cave[n++] = 0x4D; cave[n++] = 0x08;   // mov ecx,[ebp+8]
    cave[n++] = 0xB8;                                       // mov eax, OCCUPIED_REINFORCE_RATE
    *(DWORD*)(cave + n) = (DWORD)OCCUPIED_REINFORCE_RATE; n += 4;
    cave[n++] = 0x89; cave[n++] = 0x01;                     // mov [ecx],eax

    cave[n++] = 0xE9;                                       // jmp в общий эпилог функции
    *(DWORD*)(cave + n) = (g_base + RVA_OCC_REINFORCE_TAIL) - (DWORD)(cave + n + 4);
    n += 4;

    DWORD target = (DWORD)(DWORD_PTR)cave;

    bool ok = true;
    ok &= RepointNearJnz(RVA_ALLY_JNZ1, ALLY_JNZ1_SIG, target);
    ok &= RepointNearJnz(RVA_ALLY_JNZ2, ALLY_JNZ2_SIG, target);
    ok &= RepointNearJnz(RVA_ALLY_JNZ3, ALLY_JNZ3_SIG, target);

    Log("AllyOwnerCheck: owned-by-ally=150%%, occupied-by-ally=%d.%d%%, пещера %08X, ok=%d",
        OCCUPIED_REINFORCE_RATE / 10, OCCUPIED_REINFORCE_RATE % 10, target, (int)ok);
    return ok;
}


// ---------------------------------------------------------------
// PATCH_ALLY_EMBARK - посадка своей армии на флот постоянного союзника
// (не только свой флот), как при подходе к морской клетке по маршруту,
// так и кликом на клетку, где армия уже стоит.
//
// Единственная проверка владельца, общая для ВСЕХ мест посадки
// (посуточный ход армии FUN_005D25C0 - 2 её собственных вызова, клик
// "сесть на этой же клетке" FUN_005CCEC0, подсказки кнопок и другие
// места - 8 xref всего) - FUN_005D77A0(ECX=флот, EDI=наша армия):
//
//   mov eax,[ecx+0xc4]   ; индекс страны-владельца флота
//   cmp eax,[edi+0xc4]   ; индекс страны-владельца нашей армии (общее
//   jz  ok                 поле CUnit, не CArmy/CNavy - те же байты и
//   -> false                у флота, и у армии)
//   ok: ...дальше проверка вместимости (бой/маршрут/место, [ecx+0x74],
//        [ecx+0xec], [ecx+0x104], [ecx+0xa4]) - НЕ трогаем: она вся
//        про сам флот, а не про его владельца, и вместимость там уже
//        общая НА ФЛОТ (один счётчик, не по каждой стране отдельно) -
//        поэтому после ослабления владельца лимит бригад сам станет
//        общим, ровно как просил пользователь.
//
// "Союзник" определяем так же, как это делает игра для скриптового
// триггера alliance_with (FUN_008d9f20, class CAllianceWithTrigger,
// найден через RTTI по строке ".?AVCAllianceWithTrigger@@") - не своя
// реализация, воспроизводим ванильную: у каждой страны по смещению
// +0xBE8 лежит база массива указателей "отношения[индекс_страны]" (тот
// же country-индекс, что и в +0xc4 выше), а в самой записи отношений
// по +0x20 - признак действующего союза (!=0 = союзники). Таблица
// стран - глобал DAT_012587e4 (+4 = данные vector<CCountry*>), которым
// уже пользуется ванильный FUN_005D7420 (подкрепление на союзной
// территории, см. InstallAllyOwnerCheck выше) - тот же country-индекс,
// тот же +0xBE8, но там смещение в записи другое (+0x34 - "доступ на
// территорию", более широкое понятие, чем сам союз).
//
// v4.35: alliance_with - не единственное "мы не чужие". Пользователь
// показал, что посадка армии сателлита (субъекта) на флот работает,
// только если между сторонами ЕЩЁ И отдельный договорной союз, а
// голого отношения вассал-сюзерен (playing as сателлит) недостаточно -
// ожидаемо, это разные поля в движке. Добавили симметричную проверку
// is_our_vassal/vassal_of (CIsOurVassalTrigger/CVassalOfTrigger,
// 0x8D9800/0x8D90B0, тот же RTTI-приём) - у страны есть свой индекс
// сюзерена (+0xCFC, валиден если хоть один из флагов +0xCF4/+0xCF5 не
// ноль). Проверяем в обе стороны (A - субъект B, или B - субъект A) -
// см. IsSubjectOf/IsOwnerAllied ниже.
//
// Второе место патча: FUN_005CCEC0 (обработчик приказа движения) -
// отдельная, более ранняя проверка ПЕРЕД вызовом того же FUN_005D77A0,
// именно на случай "приказ на клетку, где армия уже стоит" (посадка
// без похода):
//
//   mov eax,[edi+0xcc]        ; тот же индекс владельца нашей армии,
//   cmp [esi+0xcc],eax        ; но взят с "сырого" CUnit кандидата,
//   jne skip_candidate          без геттера vtable+0x2c/+0x30
//
// Без этого второго патча посадка сработала бы только "в пути" (по
// маршруту в несколько провинций), а прямой клик на свою же клетку с
// союзным флотом - нет. Патчим оба места одним и тем же хелпером
// (IsOwnerAllied) - оба сравнения используют один и тот же
// country-индекс, просто по разным путям к нему.
//
// ЭКСПЕРИМЕНТАЛЬНО: проверено только статически (Ghidra + сверка byte
// в byte с диском), вживую посадка на чужой флот не тестировалась -
// выключено по умолчанию (PATCH_ALLY_EMBARK=0), до подтверждения в игре.
// ---------------------------------------------------------------

static const DWORD RVA_EMBARK_OWNER_HOOK      = 0x1D77A0;  // FUN_005d77a0: mov eax,[ecx+0xc4]; cmp eax,[edi+0xc4]
static const DWORD RVA_EMBARK_OWNER_RESUME_OK = 0x1D77B1;  // cmp dword ptr[ecx+0x74],0 (проверка вместимости/боя дальше)

static const DWORD RVA_EMBARK_CLICK_HOOK        = 0x1CD058;  // FUN_005ccec0: mov eax,[edi+0xcc]; cmp [esi+0xcc],eax; jne
static const DWORD RVA_EMBARK_CLICK_RESUME_SAME = 0x1CD066;  // владелец совпал/союзник - mov eax,[esi] (дальше как в оригинале)
static const DWORD RVA_EMBARK_CLICK_RESUME_SKIP = 0x1CD07A;  // не подошёл - следующий кандидат в списке клетки

// v4.31: третье место, найденное после того, как пользователь сообщил,
// что армия вообще не отправляется на союзный флот (ни маршрутом, ни
// кликом на свою же клетку) - FUN_005D77A0/FUN_005CCEC0 сами по себе не
// объясняли такой полный отказ. Оказалось, что ПРИКАЗ на дальнюю морскую
// клетку (в отличие от посадки "тут же") принимается только если игра
// заранее сочтёт его вообще осмысленным - слот виртуальной функции +0x84
// у CArmy (FUN_005D5E30, вызывается из +0x88 - FUN_005CD3D0, "приказ
// допустим?") складывает суммарную вместимость СВОИХ ЖЕ флотов в целевой
// клетке и сравнивает с суммарным размером СВОИХ ЖЕ армий, которым нужно
// сесть - ДО того, как FUN_005D77A0 вообще получает шанс сработать. Если
// в клетке стоит только союзный флот (наших - 0), эта проверка возвращает
// "вместимости нет", и игра просто не принимает приказ - маршрут не
// создаётся, посуточная посадка (уже пропатченная выше) никогда не
// запускается. Патчим ровно накопление вместимости флота (вторая из двух
// одинаковых проверок владельца в этой функции - первая считает СВОИ ЖЕ
// армии, уже стоящие в клетке, в требуемый объём, и её трогать не нужно).
static const DWORD RVA_EMBARK_CAPACITY_HOOK        = 0x1D5E97;  // FUN_005d5e30: mov ecx,[esi+0xc4]; cmp ecx,[ebx+0xc4]; jne
static const DWORD RVA_EMBARK_CAPACITY_RESUME_SAME = 0x1D5EA5;  // владелец совпал/союзник - mov eax,esi (дальше как в оригинале)
static const DWORD RVA_EMBARK_CAPACITY_RESUME_SKIP = 0x1D5EAF;  // не подошёл - следующий кандидат в списке клетки

static const DWORD RVA_COUNTRIES_VECTOR  = 0xE587E4;  // DAT_012587e4; +4 = vector<CCountry*>.data()
static const int   OFF_COUNTRY_RELATIONS = 0xBE8;     // CCountry: база массива указателей "отношения[индекс_другой_страны]"
static const int   OFF_RELATION_ALLIANCE = 0x20;      // CRelation: !=0 - действующий союз (то же поле, что у alliance_with)

// v4.35: пользователь показал, что армия сателлита (субъекта), которой
// командует сюзерен, садится нормально (там ещё и отдельный договорной
// союз был - отрабатывает выше), а вот попытка сесть, играя САМИМ
// сателлитом (без отдельного союза, чисто на отношении вассал-сюзерен),
// не проходит - что и ожидалось: alliance_with и is_our_vassal/vassal_of
// в игре - РАЗНЫЕ отношения, разные поля. Нашли поля второго через RTTI
// класс триггеров CIsOurVassalTrigger/CVassalOfTrigger (Evaluate по
// 0x8D9800/0x8D90B0) - оба симметрично читают у СТРАНЫ (не у пары):
//   +0xCF4, +0xCF5 - два флаговых байта; оба нулевые = независима, нет
//   надсубъектных отношений вообще (сюзерена нет)
//   +0xCFC - индекс страны-сюзерена (если хоть один из флагов выше не 0)
// Проверяем в обе стороны: A - субъект B, или B - субъект A.
static const int OFF_COUNTRY_SUBJECT_FLAG1  = 0xCF4;
static const int OFF_COUNTRY_SUBJECT_FLAG2  = 0xCF5;
static const int OFF_COUNTRY_OVERLORD_INDEX = 0xCFC;

static const unsigned char EMBARK_OWNER_SIG[12] =
{ 0x8B, 0x81, 0xC4, 0x00, 0x00, 0x00, 0x3B, 0x87, 0xC4, 0x00, 0x00, 0x00 };

static const unsigned char EMBARK_CLICK_SIG[14] =
{
    0x8B, 0x87, 0xCC, 0x00, 0x00, 0x00,   // mov eax,[edi+0xcc]
    0x39, 0x86, 0xCC, 0x00, 0x00, 0x00,   // cmp [esi+0xcc],eax
    0x75, 0x14                            // jne +0x14
};

static const unsigned char EMBARK_CAPACITY_SIG[14] =
{
    0x8B, 0x8E, 0xC4, 0x00, 0x00, 0x00,   // mov ecx,[esi+0xc4]
    0x3B, 0x8B, 0xC4, 0x00, 0x00, 0x00,   // cmp ecx,[ebx+0xc4]
    0x75, 0x0A                            // jne +0xA
};

static DWORD g_embarkOwnerResumeOk      = 0;
static DWORD g_embarkClickResumeSame    = 0;
static DWORD g_embarkClickResumeSkip    = 0;
static DWORD g_embarkCapacityResumeSame = 0;
static DWORD g_embarkCapacityResumeSkip = 0;

// Диагностика (v4.31+): считаем и логируем каждую проверку двух РАЗНЫХ
// владельцев (при равных индексах IsOwnerAllied выходит раньше, без
// лога - этот случай не интересен, он и так работал). Если после
// попытки посадки на союзный флот в логе вообще нет строк "AllyEmbark:"
// - оба наших хука не были достигнуты вовсе, и дело не в самой проверке
// союза, а в более раннем гейте (например, у самого приказа движения на
// дальнюю морскую клетку - см. память проекта).
static LONG g_embarkAlliedLogged = 0;

// world -> vector<CCountry*>.data() -> countries[idx]. -1/-2 читались
// неверно в v4.30-4.33 (см. память проекта, разбор DAT_012587e4);
// здесь и далее - уже исправленная, дважды разыменованная формула.
static void* GetCountryPtr(int idx)
{
    if (idx < 0)
        return 0;
    __try
    {
        void* world = *(void**)(g_base + RVA_COUNTRIES_VECTOR);
        void** countries = world ? *(void***)((char*)world + 4) : 0;
        if (!countries || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(countries + idx, 4)))
            return 0;
        return countries[idx];
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

// countryA - объект (см. GetCountryPtr), countryIdxB - индекс второй
// страны. 1 - действующий союз (то же поле, что читает alliance_with),
// 0 - прочитали, союза нет, -1 - не смогли прочитать (плохой указатель).
static int IsAllianceRelation(void* countryA, int countryIdxB)
{
    __try
    {
        if (!countryA || (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)countryA + OFF_COUNTRY_RELATIONS, 4)))
            return -1;
        void** relations = *(void***)((char*)countryA + OFF_COUNTRY_RELATIONS);
        if (!relations || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(relations + countryIdxB, 4)))
            return -1;
        void* relation = relations[countryIdxB];
        if (!relation || (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)relation + OFF_RELATION_ALLIANCE, 4)))
            return -1;
        return (*(int*)((char*)relation + OFF_RELATION_ALLIANCE) != 0) ? 1 : 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return -1;
    }
}

// v4.35: пользователь показал, что посадка на флот сателлита, которым
// он командует НЕ как сюзерен (сам играет за сателлита, отдельного
// договорного союза нет - только вассалитет), срывается - ожидаемо,
// alliance_with и is_our_vassal/vassal_of читают разные поля. countryX
// - проверяемая сторона, overlordIdx - индекс её предполагаемого
// сюзерена. 1 - countryX действительно субъект (вассал/сателлит/etc.)
// именно этой страны, 0 - прочитали, не подчинена (или независима),
// -1 - не смогли прочитать.
static int IsSubjectOf(void* countryX, int overlordIdx)
{
    __try
    {
        if (!countryX || (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)countryX + OFF_COUNTRY_SUBJECT_FLAG1, 2)))
            return -1;
        char f1 = *((char*)countryX + OFF_COUNTRY_SUBJECT_FLAG1);
        char f2 = *((char*)countryX + OFF_COUNTRY_SUBJECT_FLAG2);
        if (f1 == 0 && f2 == 0)
            return 0;   // полностью независима - сюзерена нет вовсе
        if (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)countryX + OFF_COUNTRY_OVERLORD_INDEX, 4))
            return -1;
        return (*(int*)((char*)countryX + OFF_COUNTRY_OVERLORD_INDEX) == overlordIdx) ? 1 : 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return -1;
    }
}

static const char* TriStr(int v) { return v > 0 ? "да" : v == 0 ? "нет" : "?"; }

// v4.74: однократная чисто читающая диагностика таблицы провинций
// (DAT_0125870c = RVA 0xE5870C, +0x2238 -> массив province*, индекс =
// ID провинции, подтверждено по FUN_004FB6F0/FUN_005D1570: ID берётся из
// узлов пути и сверяется с province+0x58). Размер массива не известен -
// у v4.72 граница 4000 была взята наугад; здесь читаем std::vector-подобные
// begin/end (+0x2238/+0x223C) и несколько образцов, чтобы узнать реальный
// размер ДО повторной попытки сканирования.
static void MaybeDumpAfterLoad();   // v4.76: определена ниже (блок SAVE_EMBARKED_ALLY_ARMIES)
static LONG g_provTableLogged = 0;
static void LogProvinceTableOnce()
{
    if (!g_settings.debugLog)
        return;
    if (InterlockedCompareExchange(&g_provTableLogged, 1, 0) != 0)
        return;
    __try
    {
        char* owner = *(char**)(g_base + 0xE5870C);
        if (!owner)
        {
            LogDbg("ProvTable: владелец таблицы = null");
            return;
        }
        if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(owner + 0x2238, 12))
        {
            LogDbg("ProvTable: владелец %p нечитаем", owner);
            return;
        }
        DWORD begin = *(DWORD*)(owner + 0x2238);
        DWORD end   = *(DWORD*)(owner + 0x223C);
        DWORD cap   = *(DWORD*)(owner + 0x2240);
        int count   = (end >= begin) ? (int)((end - begin) / 4) : -1;
        LogDbg("ProvTable: владелец=%p begin=%08X end=%08X cap=%08X count(end-begin)=%d",
            owner, begin, end, cap, count);

        int probe[8] = { 0, 1, 2, 100, count - 1, count, count + 1, count + 50 };
        for (int k = 0; k < 8; ++k)
        {
            int i = probe[k];
            if (i < 0 || !begin) continue;
            DWORD slot = begin + (DWORD)i * 4;
            if (g_fnIsBadReadPtr && g_fnIsBadReadPtr((void*)slot, 4))
            {
                LogDbg("ProvTable: [%d] слот %08X нечитаем", i, slot);
                continue;
            }
            DWORD prov = *(DWORD*)slot;
            int id = -1;
            if (prov && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr((void*)(prov + 0x58), 4)))
                id = *(int*)(prov + 0x58);
            LogDbg("ProvTable: [%d] province*=%08X +0x58=%d", i, prov, id);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbg("ProvTable: исключение при чтении");
    }
}

// Возвращает !=0, если countryIdxA==countryIdxB, страны состоят в
// действующем союзе, либо одна - субъект (вассал/сателлит/etc.) другой
// в любую сторону. Индекс вне таблицы стран/нулевые указатели где-то по
// пути - тихо 0 (посадка ведёт себя как раньше, только свои).
static int __cdecl IsOwnerAllied(int countryIdxA, int countryIdxB)
{
    int result = 0;
    int allied = -2, subAB = -2, subBA = -2;   // -2 = не проверяли (индекс<0)

    LogProvinceTableOnce();
    MaybeDumpAfterLoad();

    if (countryIdxA == countryIdxB)
        return 1;

    if (countryIdxA >= 0 && countryIdxB >= 0)
    {
        void* countryA = GetCountryPtr(countryIdxA);

        allied = IsAllianceRelation(countryA, countryIdxB);
        if (allied == 1)
            result = 1;

        if (!result)
        {
            subAB = IsSubjectOf(countryA, countryIdxB);
            if (subAB == 1)
                result = 1;
        }

        if (!result)
        {
            void* countryB = GetCountryPtr(countryIdxB);
            subBA = IsSubjectOf(countryB, countryIdxA);
            if (subBA == 1)
                result = 1;
        }
    }

    if (InterlockedIncrement(&g_embarkAlliedLogged) <= 60)
        LogDbg("AllyEmbark: %d/%d союз=%s суб(A/B)=%s суб(B/A)=%s -> %s",
            countryIdxA, countryIdxB, TriStr(allied), TriStr(subAB), TriStr(subBA),
            result ? "союзники" : "не союзники");
    return result;
}

static const DWORD RVA_FLEET_COUNT_EMBARKED = 0x1DC560;  // FUN_005dc560(fleet+0x1A4) - сколько бригад уже на борту (любых наций)
static const DWORD RVA_ARMY_COUNT_BRIGADES  = 0x1D0650;  // FUN_005d0650(armySpecialObj) - бригад в нашей армии

typedef int(__fastcall* tCountEmbarkedBrigades)(void* fleetSlackPtr);
typedef int(__fastcall* tCountArmyBrigades)(void* armySpecialObj);

// ---------------------------------------------------------------
// v4.72 - SAVE_EMBARKED_ALLY_ARMIES. Пользователь подтвердил: после
// загрузки сейва армия, посаженная на СОЮЗНЫЙ (не свой) флот,
// перестаёт быть по-настоящему посаженной - список +0x1A4 флота её
// не содержит, хотя сама армия физически остаётся на клетке флота в
// море (не видна в списке армий/бригад страны, но выбирается и может
// получить обычный приказ). Через день срабатывает уже пропатченная
// проверка союза (FUN_005D77A0 внутри FUN_005D25C0) и ДАЖЕ ПРОХОДИТ
// (видно в логе AllyEmbark сразу после загрузки), но вызываемая следом
// FUN_005D3980 лишь переставляет армию на клетку флота - заново В
// СПИСОК +0x1A4 её не добавляет (просмотрен целиком - такой записи
// там нет). Итог: ванильный формат сейва, видимо, вообще не хранит
// для посаженной армии отдельного "я могу быть на чужом флоте" -
// при загрузке её просто не восстанавливают в списке у флота другой
// нации. Чинить сериализацию (100+ КБ функция) слишком рискованно -
// вместо этого сами сохраняем список "кто на чьём союзном флоте" в
// компаньон-файле рядом с сейвом и (в следующей итерации) чиним
// список +0x1A4 после загрузки сами.
//
// Хук стоит на PHYSFS_openWrite (статически слинкованная функция
// PhysFS, которой ванильный код открывает ЛЮБОЙ файл на запись,
// включая сейвы; адрес стабилен, т.к. не импорт, а часть самого exe).
// Это тонкая обёртка в 6 байт пролога (PUSH EBP; MOV EBP,ESP; MOV
// EAX,[EBP+8]) - воспроизводим эти 3 инструкции, читаем путь из EAX,
// и если это файл сейва (".v2"), сканируем живую память (НЕ сам
// записываемый файл - никакой зависимости от его готовности) и
// синхронно пишем компаньон-файл обычным WinAPI. Задача считывает
// ТОЛЬКО существующее состояние игры, никак его не меняет - риск
// такой же, как у остальных read-only зондов в этом файле.
// ---------------------------------------------------------------

static const DWORD RVA_PHYSFS_OPENWRITE          = 0x721F00;  // PHYSFS_openWrite(filename) - 6-байтный пролог
static const DWORD RVA_PHYSFS_GETWRITEDIR        = 0x71FF30;  // PHYSFS_getWriteDir(void) - const char*
static const DWORD RVA_DAT_PROVINCE_TABLE_OWNER  = 0xE5870C;  // DAT_0125870c: владелец таблицы провинций
static const int   OFF_PROVINCE_TABLE_PTR        = 0x2238;    // DAT_0125870c+это -> provinceId -> province* таблица
static const int   OFF_PROVINCE_UNIT_LIST        = 0xEC;      // province -> список ВСЕХ юнитов в ней (армии+флоты)
static const int   PROVINCE_SCAN_MAX_ID          = 4000;      // консервативная граница (ванильный максимум ~2950)
// Те же смещения/слот, что VT_GET_SPECIAL_OBJECT/OFF_SPECIAL_*/
// OFF_FLEET_EMBARKED_LIST ниже по файлу (см. блок SHOW_ALLY_EMBARKED_TOOLTIP) -
// свои имена здесь только чтобы не зависеть от порядка объявления.
static const int   SE_VT_GET_SPECIAL_OBJECT      = 0x30;
static const int   SE_OFF_SPECIAL_OWNER_INDEX    = 0xC4;
static const int   SE_OFF_SPECIAL_TAG            = 0xC0;
static const int   SE_OFF_FLEET_EMBARKED_LIST    = 0x1A4;

typedef const char* (__cdecl* tPhysfsGetWriteDir)(void);

static void* g_physfsOpenWriteResumeAddr = 0;
static LONG  g_saveEmbarkLogCount = 0;

static bool IsV2SavePath(const char* path)
{
    if (!path) return false;
    size_t len = strlen(path);
    return len > 3 && _stricmp(path + len - 3, ".v2") == 0;
}

// Перед виртуальным вызовом убеждаемся, что vtable юнита лежит внутри
// образа exe и нужные слоты (0x30/0x3C) указывают в код exe - иначе это не
// настоящий CUnit и звать через него нельзя.
static bool SeUnitVtableOk(void* unit)
{
    __try
    {
        DWORD vt = *(DWORD*)unit;
        if (!g_imageSize || vt < g_base || vt + 0x40 >= g_base + g_imageSize)
            return false;
        DWORD f30 = *(DWORD*)(vt + 0x30);
        DWORD f3c = *(DWORD*)(vt + 0x3C);
        return f30 >= g_base && f30 < g_base + g_imageSize &&
               f3c >= g_base && f3c < g_base + g_imageSize;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

// ---------------------------------------------------------------
// v4.77 - носитель настоящего владельца ВНУТРИ сейва (нужно для
// мультиплеера: побочный файл есть только у сохранявшего). Сейв пишет
// вложенную в флот армию без каких-либо ключей владельца, а загрузчик
// (FUN_005D7B90, ключ "army") ставит ей владельца флота. Но у юнита есть
// поле "expeditionary_owner" (+0x188 тег / +0x18C индекс страны), которое
// сейв, по таблице ключей, сохраняет и загрузчик восстанавливает ПОСЛЕ
// SetOwner. Поэтому в момент записи сейва на чужом флоте ставим на
// посаженных армиях эту метку = их настоящий владелец (а армия при этом
// ещё имеет правильного владельца), а через несколько секунд (когда
// синхронная запись точно закончилась) возвращаем прежние значения - чтобы
// метка не влияла на игру. Пишется ли ключ в файл, проверяется тестом.
// ---------------------------------------------------------------
struct EmbarkMark { void* army; DWORD oldTag; int oldIdx; DWORD markTag; int markIdx; };
static EmbarkMark g_embarkMarks[32];
static int        g_embarkMarkCount = 0;
static DWORD      g_embarkMarkRestoreAt = 0;
static const int  UNIT_OFF_EXPED_TAG = 0x188;
static const int  UNIT_OFF_EXPED_IDX = 0x18C;

static void RestoreEmbarkMarksNow()
{
    for (int i = 0; i < g_embarkMarkCount; ++i)
    {
        EmbarkMark& m = g_embarkMarks[i];
        __try
        {
            if (m.army && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)m.army + UNIT_OFF_EXPED_TAG, 8)) &&
                *(DWORD*)((char*)m.army + UNIT_OFF_EXPED_TAG) == m.markTag &&
                *(int*)((char*)m.army + UNIT_OFF_EXPED_IDX) == m.markIdx)
            {
                *(DWORD*)((char*)m.army + UNIT_OFF_EXPED_TAG) = m.oldTag;
                *(int*)((char*)m.army + UNIT_OFF_EXPED_IDX) = m.oldIdx;
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) { }
    }
    if (g_embarkMarkCount)
        LogDbg("SaveEmbark: метки expeditionary_owner сняты (%d)", g_embarkMarkCount);
    g_embarkMarkCount = 0;
}

static void RestoreEmbarkMarksIfDue()
{
    if (!g_embarkMarkCount)
        return;
    if ((int)(GetTickCount() - g_embarkMarkRestoreAt) < 0)
        return;
    RestoreEmbarkMarksNow();
}

static void DumpArmyRegiments(void* army, int* lines);   // v4.79: определена ниже

static void ScanAndSaveForeignEmbarks(const char* saveFilename)
{
    RestoreEmbarkMarksNow();   // метки от предыдущего сохранения, если ещё не сняты
    __try
    {
        void* provinceTableOwner = *(void**)(g_base + RVA_DAT_PROVINCE_TABLE_OWNER);
        if (!provinceTableOwner ||
            (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)provinceTableOwner + OFF_PROVINCE_TABLE_PTR, 8)))
            return;

        // v4.75: точная граница из самого массива (begin/end, подтверждено
        // логом ProvTable: 3255 записей, ID 0..3254, province+0x58 == индекс;
        // слоты за концом - куски текста, не указатели). В v4.72 граница 4000
        // заставляла читать ~745 слотов текста как province*.
        DWORD arrBegin = *(DWORD*)((char*)provinceTableOwner + OFF_PROVINCE_TABLE_PTR);
        DWORD arrEnd   = *(DWORD*)((char*)provinceTableOwner + OFF_PROVINCE_TABLE_PTR + 4);
        if (!arrBegin || arrEnd <= arrBegin)
            return;
        int provCount = (int)((arrEnd - arrBegin) / 4);
        if (provCount < 2 || provCount > PROVINCE_SCAN_MAX_ID)
            return;
        void* provinceArrayBase = (void*)arrBegin;

        if (!saveFilename)
            return;

        // v4.75: файл кладём в Logs\allyembark\, а не рядом с сейвом (чтобы
        // исключить влияние постороннего файла в папке сейвов) и без вызова
        // PHYSFS_getWriteDir из хука PhysFS.
        const char* baseName = saveFilename;
        for (const char* p = saveFilename; *p; ++p)
            if (*p == '/' || *p == '\\') baseName = p + 1;

        InitLogDir();
        wchar_t dirW[MAX_PATH + 32];
        swprintf_s(dirW, L"%s\\allyembark", g_logsDir);
        CreateDirectoryW(dirW, NULL);

        wchar_t baseW[260];
        if (!MultiByteToWideChar(CP_ACP, 0, baseName, -1, baseW, 260))
            return;
        wchar_t pathW[MAX_PATH + 300];
        swprintf_s(pathW, L"%s\\%s.allyembark", dirW, baseW);

        FILE* f = 0;
        if (_wfopen_s(&f, pathW, L"w") != 0 || !f)
        {
            if (InterlockedIncrement(&g_saveEmbarkLogCount) <= 20)
                Log("SaveEmbark: не удалось открыть компаньон-файл для '%s'", baseName);
            return;
        }
        char companionPath[300];
        _snprintf_s(companionPath, sizeof(companionPath), _TRUNCATE, "Logs\\allyembark\\%s.allyembark", baseName);

        tCountArmyBrigades countArmy = (tCountArmyBrigades)(g_base + RVA_ARMY_COUNT_BRIGADES);
        int found = 0;

        for (int provId = 1; provId < provCount; ++provId)
        {
            if (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)provinceArrayBase + provId * 4, 4))
                continue;

            void* province = *(void**)((char*)provinceArrayBase + provId * 4);
            if (!province ||
                (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)province + OFF_PROVINCE_UNIT_LIST, 4)) ||
                (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)province + 0x58, 4)) ||
                *(int*)((char*)province + 0x58) != provId)
                continue;

            void** node = *(void***)((char*)province + OFF_PROVINCE_UNIT_LIST);
            int guard = 0;
            while (node && guard < 256)
            {
                ++guard;
                if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(node, 12)) break;
                void* unit = node[0];
                void* next = node[2];

                if (unit && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(unit, 0x40)) &&
                    SeUnitVtableOk(unit))
                {
                    __try
                    {
                        bool isNavy = ((unsigned char)(DWORD_PTR)VCall0(unit, 0x3c)) != 0;   // метод возвращает bool в AL, остальные байты EAX - мусор
                        if (isNavy)
                        {
                            void* fleetSpecial = VCall0(unit, SE_VT_GET_SPECIAL_OBJECT);
                            if (fleetSpecial &&
                                !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(fleetSpecial, SE_OFF_FLEET_EMBARKED_LIST + 4)))
                            {
                                int fleetOwner = *(int*)((char*)fleetSpecial + SE_OFF_SPECIAL_OWNER_INDEX);
                                char fleetTag[4] = { 0 };
                                if (!(g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)fleetSpecial + SE_OFF_SPECIAL_TAG, 3)))
                                {
                                    fleetTag[0] = *((char*)fleetSpecial + SE_OFF_SPECIAL_TAG + 0);
                                    fleetTag[1] = *((char*)fleetSpecial + SE_OFF_SPECIAL_TAG + 1);
                                    fleetTag[2] = *((char*)fleetSpecial + SE_OFF_SPECIAL_TAG + 2);
                                }

                                void** armyNode = *(void***)((char*)fleetSpecial + SE_OFF_FLEET_EMBARKED_LIST);
                                int armyGuard = 0;
                                while (armyNode && armyGuard < 64)
                                {
                                    ++armyGuard;
                                    if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(armyNode, 12)) break;
                                    void* army = armyNode[0];
                                    void* armyNext = armyNode[2];

                                    if (army && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(army, SE_OFF_SPECIAL_OWNER_INDEX + 4)))
                                    {
                                        int armyOwner = *(int*)((char*)army + SE_OFF_SPECIAL_OWNER_INDEX);
                                        if (armyOwner != fleetOwner && fleetTag[0] >= 'A' && fleetTag[0] <= 'Z')
                                        {
                                            char armyTag[4] = { 0 };
                                            armyTag[0] = *((char*)army + SE_OFF_SPECIAL_TAG + 0);
                                            armyTag[1] = *((char*)army + SE_OFF_SPECIAL_TAG + 1);
                                            armyTag[2] = *((char*)army + SE_OFF_SPECIAL_TAG + 2);

                                            int brigades = -1;
                                            __try { brigades = countArmy(army); }
                                            __except (EXCEPTION_EXECUTE_HANDLER) { brigades = -1; }

                                            fprintf(f, "%d %s %d %d %s %d\n",
                                                fleetOwner, fleetTag, provId, armyOwner, armyTag, brigades);
                                            ++found;

                                            // v4.79: те же поля бригад ДО сохранения (владелец ещё верный) -
                                            // для сравнения с дампом после загрузки.
                                            if (found <= 3)
                                            {
                                                int dl = 0;
                                                LogDbg("SaveEmbark: бригады армии %p (владелец %d) ПЕРЕД сохранением:", army, armyOwner);
                                                DumpArmyRegiments(army, &dl);
                                            }

                                            // v4.78: метки отключены (ключ в сейв не попал, см. InstallEmbarkLoadRepair)
                                            if (false && g_embarkMarkCount < 32 &&
                                                !(g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)army + UNIT_OFF_EXPED_TAG, 8)) &&
                                                !(g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)army + SE_OFF_SPECIAL_TAG, 4)))
                                            {
                                                EmbarkMark& m = g_embarkMarks[g_embarkMarkCount++];
                                                m.army = army;
                                                m.oldTag = *(DWORD*)((char*)army + UNIT_OFF_EXPED_TAG);
                                                m.oldIdx = *(int*)((char*)army + UNIT_OFF_EXPED_IDX);
                                                m.markTag = *(DWORD*)((char*)army + SE_OFF_SPECIAL_TAG);
                                                m.markIdx = armyOwner;
                                                *(DWORD*)((char*)army + UNIT_OFF_EXPED_TAG) = m.markTag;
                                                *(int*)((char*)army + UNIT_OFF_EXPED_IDX) = m.markIdx;
                                            }
                                        }
                                    }
                                    armyNode = (void**)armyNext;
                                }
                            }
                        }
                    }
                    __except (EXCEPTION_EXECUTE_HANDLER) { }
                }
                node = (void**)next;
            }
        }

        fclose(f);
        if (g_embarkMarkCount)
            g_embarkMarkRestoreAt = GetTickCount() + 5000;   // снимем метки через 5 с (синхронная запись сейва к тому времени завершена)
        if (InterlockedIncrement(&g_saveEmbarkLogCount) <= 20)
            Log("SaveEmbark: сохранено %d запис(ей) о посаженных союзных армиях в '%s' (меток expeditionary_owner: %d)",
                found, companionPath, g_embarkMarkCount);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("SaveEmbark: исключение при сканировании провинций");
    }
}

static void __cdecl OnPhysfsOpenWriteFilename(const char* filename)
{
    __try
    {
        if (g_settings.patchAllyEmbark && IsV2SavePath(filename))
            ScanAndSaveForeignEmbarks(filename);
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { }
}

__declspec(naked) static void PhysfsOpenWriteThunk()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm push ecx
    __asm push edx
    __asm push eax
    __asm call OnPhysfsOpenWriteFilename
    __asm add esp, 4
    __asm pop edx
    __asm pop ecx
    __asm pop eax
    __asm jmp dword ptr [g_physfsOpenWriteResumeAddr]
}

static bool InstallSaveEmbarkedAllyArmies()
{
    BYTE* hook = (BYTE*)(g_base + RVA_PHYSFS_OPENWRITE);
    static const unsigned char SIG[6] = { 0x55, 0x8B, 0xEC, 0x8B, 0x45, 0x08 };

    if (memcmp(hook, SIG, sizeof(SIG)) != 0)
    {
        Log("SaveEmbark: сигнатура PHYSFS_openWrite не совпала - не патчим");
        return false;
    }

    g_physfsOpenWriteResumeAddr = (void*)(g_base + RVA_PHYSFS_OPENWRITE + 6);

    BYTE patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&PhysfsOpenWriteThunk - ((DWORD)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("SaveEmbark: установлен (rva %06X)", RVA_PHYSFS_OPENWRITE);
    return true;
}

// ---------------------------------------------------------------
// v4.76 - стадия 2а: ЧИСТО ЧИТАЮЩИЙ дамп состояния после загрузки.
// Стадия 1 (v4.75) подтверждена: сейв пишет Logs\allyembark\<имя>.allyembark
// (пример: "106 ENG 2791 46 EIC 19" - флот ENG в провинции 2791 везёт
// 19 бригад EIC). Прежде чем чинить список +0x1A4 после загрузки, надо
// увидеть, КАК именно выглядит состояние в этой провинции сразу после
// загрузки (владелец/тег армии и флота, лежит ли армия в списке флота,
// сколько бригад). Хук на PHYSFS_openRead (VA 0xB21F40, пролог
// 55 8B EC 83 EC 10 - это НАСТОЯЩАЯ реализация, не тонкая обёртка, потому
// хук только запоминает имя .v2 и резюмирует) ставит флаг; при первом
// вызове IsOwnerAllied (суточный тик уже идёт, мир загружен) читаем
// компаньон-файл последнего открытого .v2 и логируем юнитов в записанных
// провинциях. Ничего не меняем. Заметка: игра может открывать .v2 на
// чтение и ради заголовков в меню загрузки - поэтому имя логируется при
// каждом открытии (LoadEmbark: открыт на чтение ...).
// ---------------------------------------------------------------
static const DWORD RVA_PHYSFS_OPENREAD = 0x721F40;
static char  g_lastOpenedV2[260] = { 0 };
static LONG  g_afterLoadDumpPending = 0;
static LONG  g_openReadLogCount = 0;
static LONG  g_embarkRepairApplied = 0;   // v4.81: исправлений в текущей загрузке (сброс при открытии .v2)

static void __cdecl OnPhysfsOpenReadFilename(const char* filename)
{
    __try
    {
        if (!g_settings.patchAllyEmbark || !IsV2SavePath(filename))
            return;
        const char* b = filename;
        for (const char* p = filename; *p; ++p)
            if (*p == '/' || *p == '\\') b = p + 1;
        strncpy_s(g_lastOpenedV2, sizeof(g_lastOpenedV2), b, _TRUNCATE);
        InterlockedExchange(&g_afterLoadDumpPending, 1);
        InterlockedExchange(&g_embarkRepairApplied, 0);
        if (InterlockedIncrement(&g_openReadLogCount) <= 40)
            LogDbg("LoadEmbark: открыт на чтение '%s'", b);
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { }
}

// Сам хук PHYSFS_openRead (HookPhysfsOpenRead / InstallPhysfsOpenReadHook) живёт ниже по файлу,
// рядом с GOODS_ICONS: он общий для ally-embark (имя .v2) и иконок товаров (атласы, goods.txt).

// v4.79: пробный прогон (только чтение) - бригады армии, их pop и поля
// кандидатов на "провинцию набора", чтобы найти надёжный способ вывести
// настоящего владельца армии без побочных данных. Метка +0x188/+0x18C у
// обычных армий оказалась =2 (v4.77), поэтому её значение тоже выводим.
static void DumpArmyRegiments(void* army, int* lines)
{
    __try
    {
        if (!army || (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)army + 0x190, 4)))
            return;
        LogDbg("LoadDump:   армия %p +0x188=%08X +0x18C=%d +0xC8=%08X +0xCC=%d",
            army, *(DWORD*)((char*)army + 0x188), *(int*)((char*)army + 0x18C),
            *(DWORD*)((char*)army + 0xC8), *(int*)((char*)army + 0xCC));
        ++*lines;
        void** node = *(void***)((char*)army + 0x38);
        int g = 0;
        while (node && g < 24 && *lines < 200)
        {
            ++g;
            if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(node, 12)) break;
            char* reg = (char*)node[0];
            void** next = (void**)node[2];
            if (reg && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(reg, 0x68)))
            {
                DWORD rt = *(DWORD*)(reg + 0x60);
                char rtag[5] = { (char)rt, (char)(rt >> 8), (char)(rt >> 16), 0, 0 };
                char* pop = *(char**)(reg + 0x30);
                LogDbg("LoadDump:     рег %p +60=%s +64=%d pop=%p", reg, rtag, *(int*)(reg + 0x64), pop);
                ++*lines;
                if (pop && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(pop + 0x58, 0x24)))
                {
                    DWORD* d = (DWORD*)(pop + 0x58);
                    LogDbg("LoadDump:       pop+58..78: %08X %08X %08X %08X %08X %08X %08X %08X %08X",
                        d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8]);
                    ++*lines;
                    char* pv = *(char**)(pop + 0x64);
                    if (pv && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(pv + 0x58, 4)) &&
                        !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(pv + 0x128, 0x10)))
                    {
                        LogDbg("LoadDump:       pop+64=%p: +58=%d +128=%08X +12C=%d +130=%08X +134=%d",
                            pv, *(int*)(pv + 0x58), *(DWORD*)(pv + 0x128), *(int*)(pv + 0x12C),
                            *(DWORD*)(pv + 0x130), *(int*)(pv + 0x134));
                        ++*lines;
                    }
                }
            }
            node = next;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { }
}

static void DumpUnitLine(int provId, void* unit, int* lines)
{
    if (*lines >= 200) return;
    if (!unit || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(unit, 0xD0)) || !SeUnitVtableOk(unit))
        return;
    __try
    {
        bool isNavy = ((unsigned char)(DWORD_PTR)VCall0(unit, 0x3c)) != 0;   // метод возвращает bool в AL, остальные байты EAX - мусор
        void* special = VCall0(unit, SE_VT_GET_SPECIAL_OBJECT);
        int rawOwner = *(int*)((char*)unit + 0xCC);
        if (!special || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(special, SE_OFF_FLEET_EMBARKED_LIST + 4)))
        {
            LogDbg("LoadDump: пров=%d unit=%p флот=%d rawOwner=%d special=%p (нечитаем)",
                provId, unit, (int)isNavy, rawOwner, special);
            ++*lines;
            return;
        }
        int owner = *(int*)((char*)special + SE_OFF_SPECIAL_OWNER_INDEX);
        char tag[4] = { ((char*)special)[SE_OFF_SPECIAL_TAG], ((char*)special)[SE_OFF_SPECIAL_TAG + 1],
                        ((char*)special)[SE_OFF_SPECIAL_TAG + 2], 0 };
        int brig = -1;
        if (!isNavy)
        {
            tCountArmyBrigades countArmy = (tCountArmyBrigades)(g_base + RVA_ARMY_COUNT_BRIGADES);
            __try { brig = countArmy(special); } __except (EXCEPTION_EXECUTE_HANDLER) { brig = -2; }
        }
        LogDbg("LoadDump: пров=%d unit=%p флот=%d rawOwner(+CC)=%d special=%p owner(+C4)=%d тег=%s бригад=%d",
            provId, unit, (int)isNavy, rawOwner, special, owner, tag, brig);
        ++*lines;

        if (isNavy)
        {
            void** an = *(void***)((char*)special + SE_OFF_FLEET_EMBARKED_LIST);
            int g = 0;
            while (an && g < 32 && *lines < 200)
            {
                ++g;
                if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(an, 12)) break;
                void* army = an[0];
                void* nxt = an[2];
                if (army && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(army, SE_OFF_SPECIAL_OWNER_INDEX + 4)))
                {
                    int ao = *(int*)((char*)army + SE_OFF_SPECIAL_OWNER_INDEX);
                    char at[4] = { ((char*)army)[SE_OFF_SPECIAL_TAG], ((char*)army)[SE_OFF_SPECIAL_TAG + 1],
                                   ((char*)army)[SE_OFF_SPECIAL_TAG + 2], 0 };
                    int ab = -1;
                    tCountArmyBrigades countArmy = (tCountArmyBrigades)(g_base + RVA_ARMY_COUNT_BRIGADES);
                    __try { ab = countArmy(army); } __except (EXCEPTION_EXECUTE_HANDLER) { ab = -2; }
                    LogDbg("LoadDump:   на борту: army=%p owner=%d тег=%s бригад=%d", army, ao, at, ab);
                    ++*lines;
                    DumpArmyRegiments(army, lines);
                }
                an = (void**)nxt;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { }
}

static void MaybeDumpAfterLoad()
{
    if (InterlockedCompareExchange(&g_afterLoadDumpPending, 0, 1) != 1)
        return;
    __try
    {
        if (!g_lastOpenedV2[0]) return;
        InitLogDir();
        wchar_t baseW[260];
        if (!MultiByteToWideChar(CP_ACP, 0, g_lastOpenedV2, -1, baseW, 260)) return;
        wchar_t pathW[MAX_PATH + 300];
        swprintf_s(pathW, L"%s\\allyembark\\%s.allyembark", g_logsDir, baseW);

        FILE* f = 0;
        if (_wfopen_s(&f, pathW, L"r") != 0 || !f)
        {
            LogDbg("LoadDump: компаньон-файла для '%s' нет", g_lastOpenedV2);
            return;
        }

        void* owner = *(void**)(g_base + 0xE5870C);
        if (!owner || (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)owner + 0x2238, 8))) { fclose(f); return; }
        DWORD arrBegin = *(DWORD*)((char*)owner + 0x2238);
        DWORD arrEnd   = *(DWORD*)((char*)owner + 0x223C);
        int provCount  = (arrEnd > arrBegin) ? (int)((arrEnd - arrBegin) / 4) : 0;

        LogDbg("LoadDump: дамп по компаньон-файлу '%s' (таблица провинций: %d)", g_lastOpenedV2, provCount);
        int lines = 0;
        int fo, prov, ao, br;
        char ft[8], at[8];
        while (lines < 200 &&
               fscanf_s(f, "%d %3s %d %d %3s %d", &fo, ft, 8u, &prov, &ao, at, 8u, &br) == 6)
        {
            LogDbg("LoadDump: запись: флот %d/%s пров=%d армия %d/%s бригад=%d", fo, ft, prov, ao, at, br);
            if (prov < 1 || prov >= provCount) continue;
            if (g_fnIsBadReadPtr && g_fnIsBadReadPtr((void*)(arrBegin + prov * 4), 4)) continue;
            char* province = *(char**)(arrBegin + prov * 4);
            if (!province || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(province + 0x58, 4)) ||
                *(int*)(province + 0x58) != prov ||
                (g_fnIsBadReadPtr && g_fnIsBadReadPtr(province + OFF_PROVINCE_UNIT_LIST, 4)))
                continue;
            void** node = *(void***)(province + OFF_PROVINCE_UNIT_LIST);
            int guard = 0;
            while (node && guard < 256)
            {
                ++guard;
                if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(node, 12)) break;
                DumpUnitLine(prov, node[0], &lines);
                node = (void**)node[2];
            }
        }
        fclose(f);
        LogDbg("LoadDump: готово (%d строк)", lines);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbg("LoadDump: исключение");
    }
}

// ---------------------------------------------------------------
// v4.77 - стадия 2б: ремонт владельца ПРЯМО В ЗАГРУЗЧИКЕ флота.
// FUN_005D7B90, ключ 0x2F3 ("army", вложенная армия):
//   5D7CA8 SetOwner(тег флота, владелец флота)   ; ESI=армия
//   5D7CAD загрузка полей армии (в т.ч. expeditionary_owner +0x188/+0x18C)
//   5D7CBF attach (FUN_005D7810)                  ; ESI=флот, EDI=армия
//   5D7CC4 MOV EAX,[EBX+0xB8]  <- ХУК (6 байт 8B 83 B8 00 00 00)
//          MOV ECX,[countries]; MOV EBX,[EBX+0xBC]; MOV EDX,[ECX+4]
//          MOV [ESP+0x10],EAX; MOV EAX,EDI; MOV EDI,[EDX+EBX*4]
//   5D7CE2 CALL FUN_00513C80 (Country::AddArmy: EAX=армия, EDI=страна)
//   5D7CE7 эпилог
// Если загруженная армия несёт метку expeditionary_owner (пишется нашим
// сохранением, см. EmbarkMark) и она != владелец флота, то вместо страны
// флота регистрируем армию в списке НАСТОЯЩЕЙ страны: SetOwner(тег, idx)
// (проставляет и бригады), восстанавливаем "исходного владельца"
// +0xC8/+0xCC (SetOwner пишет их только при нуле) и зовём AddArmy с её
// страной. Метку обнуляем. Никакого побочного файла - решение целиком
// определяется содержимым сейва, значит одинаково у всех клиентов MP.
// Нет метки (всё остальное) -> оригинальная последовательность один-в-один.
// ---------------------------------------------------------------
static const DWORD RVA_EMBARK_LOAD_HOOK   = 0x1D7CC4;
static const DWORD RVA_EMBARK_LOAD_RESUME = 0x1D7CE7;
static const DWORD RVA_UNIT_SET_OWNER     = 0x1C93B0;   // FUN_005C93B0: ESI=юнит, push idx, push tag (callee чистит)
static const DWORD RVA_COUNTRY_ADD_ARMY   = 0x113C80;   // FUN_00513C80: EAX=армия, EDI=страна
static const unsigned char EMBARK_LOAD_SIG[8] = { 0x8B, 0x83, 0xB8, 0x00, 0x00, 0x00, 0x8B, 0x0D };

static DWORD g_embarkLoadResumeAddr = 0;
static DWORD g_countriesGlobalAddr  = 0;
static DWORD g_addArmyAddr          = 0;
static DWORD g_setOwnerAddr         = 0;
static LONG  g_embarkRepairLogCount = 0;

__declspec(naked) static void __cdecl CallUnitSetOwner(void* army, DWORD tag, int idx)
{
    __asm
    {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esp + 10h]
        push ecx
        push eax
        call dword ptr [g_setOwnerAddr]
        pop esi
        ret
    }
}

// v4.80: владелец выводится из провинций набора бригад. После загрузки
// владелец армии и её бригад подменён на владельца флота, но у бригады
// (reg+0x30) остаётся pop, у pop (+0x64) - провинция, у провинции
// +0x134 = индекс страны-владельца (+0x130 тег). Проверено дампом:
// все 19 бригад EIC-армии на флоте ENG ведут в провинции с владельцем 46.
// Принимаем вывод только если ВСЕ бригады дают одну и ту же страну, а
// каждый указатель провинции подтверждён таблицей провинций (по id).
static bool ProvincePtrValid(char* pv)
{
    __try
    {
        char* ownerObj = *(char**)(g_base + RVA_DAT_PROVINCE_TABLE_OWNER);
        if (!ownerObj || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(ownerObj + OFF_PROVINCE_TABLE_PTR, 8)))
            return false;
        DWORD b = *(DWORD*)(ownerObj + OFF_PROVINCE_TABLE_PTR);
        DWORD e = *(DWORD*)(ownerObj + OFF_PROVINCE_TABLE_PTR + 4);
        if (!b || e <= b || !pv || (g_fnIsBadReadPtr && g_fnIsBadReadPtr(pv + 0x58, 4)))
            return false;
        int id = *(int*)(pv + 0x58);
        int cnt = (int)((e - b) / 4);
        if (id < 1 || id >= cnt)
            return false;
        return *(DWORD*)(b + (DWORD)id * 4) == (DWORD)pv;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

// Возвращает индекс страны по провинциям бригад или -1 (нет бригад /
// pop не привязан / указатель не подтверждён / бригады из разных стран).
static int DeriveArmyTrueOwner(void* army, int* outRegs, int* outBad)
{
    *outRegs = 0;
    *outBad = 0;
    int result = -1;
    __try
    {
        if (!army || (g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)army + 0x38, 4)))
            return -1;
        void** node = *(void***)((char*)army + 0x38);
        int g = 0;
        while (node && g < 64)
        {
            ++g;
            if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(node, 12)) break;
            char* reg = (char*)node[0];
            void** next = (void**)node[2];
            ++*outRegs;
            int own = -1;
            if (reg && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(reg + 0x30, 4)))
            {
                char* pop = *(char**)(reg + 0x30);
                if (pop && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(pop + 0x64, 4)))
                {
                    char* pv = *(char**)(pop + 0x64);
                    if (ProvincePtrValid(pv) && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(pv + 0x134, 4)))
                        own = *(int*)(pv + 0x134);
                }
            }
            if (own < 0) { ++*outBad; return -1; }
            if (result == -1) result = own;
            else if (result != own) { ++*outBad; return -1; }
            node = next;
        }
        if (*outRegs == 0) return -1;
        return result;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return -1;
    }
}

// v4.80: ПРОБНЫЙ прогон - только лог, ничего не меняем. Когда лог на
// обычных сейвах подтвердит, что ложных срабатываний нет, поставить true.
// v4.81: ВКЛЮЧЕНО после пробного прогона v4.80: на TEST2 вывод дал 46 для
// EIC-армии на флоте ENG, у остальных посаженных армий (ИИ) вывод совпал с
// владельцем флота, ложных срабатываний нет. Проверку союза убрали: в момент
// загрузки дипломатия ещё не загружена (показывала 0 даже для настоящих
// союзников). Защита: все бригады -> одна страна; страна существует; не более
// 40 исправлений за одну загрузку (g_embarkRepairApplied сбрасывается при
// каждом открытии .v2 на чтение).
static const bool EMBARK_REPAIR_APPLY = true;
static const LONG EMBARK_REPAIR_MAX_PER_LOAD = 40;

// Возвращает индекс настоящей страны (после SetOwner) или -1 - "оставить как есть".
static int __cdecl RepairEmbarkedArmyOwner(void* army, int navyOwner)
{
    __try
    {
        if (!g_settings.patchAllyEmbark || !army)
            return -1;

        int regs = 0, bad = 0;
        int derived = DeriveArmyTrueOwner(army, &regs, &bad);

        static LONG s_total = 0;
        LONG total = InterlockedIncrement(&s_total);

        if (derived >= 0 && derived != navyOwner)
        {
            char* country = (char*)GetCountryPtr(derived);
            bool countryOk = country && !(g_fnIsBadReadPtr && g_fnIsBadReadPtr(country + 0x1C, 8)) &&
                             *(int*)(country + 0x20) == derived;
            int ally = -2;
            if (countryOk)
            {
                ally = IsAllianceRelation(country, navyOwner);
                if (ally != 1)
                {
                    int sub = IsSubjectOf(country, navyOwner);
                    if (sub == 1) ally = 1;
                    else
                    {
                        void* navyCountry = GetCountryPtr(navyOwner);
                        if (navyCountry && IsSubjectOf(navyCountry, derived) == 1) ally = 1;
                    }
                }
            }
            if (InterlockedIncrement(&g_embarkRepairLogCount) <= 80)
                Log("LoadRepair: [%s] армия %p владелец флота %d, по бригадам (%d) владелец %d, союз/субъект=%d, страна=%d",
                    EMBARK_REPAIR_APPLY ? "ПРИМЕНЕНО" : "пробный", army, navyOwner, regs, derived, ally, (int)countryOk);

            if (!EMBARK_REPAIR_APPLY || !countryOk)
                return -1;
            if (InterlockedIncrement(&g_embarkRepairApplied) > EMBARK_REPAIR_MAX_PER_LOAD)
            {
                Log("LoadRepair: превышен лимит исправлений за загрузку (%d) - дальше не трогаем", (int)EMBARK_REPAIR_MAX_PER_LOAD);
                return -1;
            }

            DWORD tag = *(DWORD*)(country + 0x1C);
            CallUnitSetOwner(army, tag, derived);
            *(DWORD*)((char*)army + 0xC8) = tag;      // "исходный владелец" (SetOwner пишет его только при нуле)
            *(int*)((char*)army + 0xCC) = derived;
            return derived;
        }

        if (derived < 0 && regs > 0 && InterlockedIncrement(&g_embarkRepairLogCount) <= 80)
            Log("LoadRepair: [вывод не удался] армия %p владелец флота %d, бригад %d, без вывода %d (pop ещё не привязан?)",
                army, navyOwner, regs, bad);
        else if (total <= 5)
            LogDbg("LoadRepair: армия %p владелец флота %d, бригад %d, по бригадам %d (совпало или не отличается)",
                army, navyOwner, regs, derived);
        return -1;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return -1;
    }
}

__declspec(naked) static void EmbarkLoadOwnerThunk()
{
    __asm
    {
        push dword ptr [ebx + 0BCh]
        push edi
        call RepairEmbarkedArmyOwner
        add esp, 8
        cmp eax, -1
        jne use_fixed

        mov eax, dword ptr [ebx + 0B8h]
        mov ecx, dword ptr [g_countriesGlobalAddr]
        mov ecx, dword ptr [ecx]
        mov ebx, dword ptr [ebx + 0BCh]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [esp + 10h], eax
        mov eax, edi
        mov edi, dword ptr [edx + ebx * 4]
        jmp do_add

    use_fixed:
        mov ebx, eax
        mov ecx, dword ptr [g_countriesGlobalAddr]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx + 4]
        mov eax, edi
        mov edi, dword ptr [edx + ebx * 4]

    do_add:
        call dword ptr [g_addArmyAddr]
        jmp dword ptr [g_embarkLoadResumeAddr]
    }
}

static bool InstallEmbarkLoadRepair()
{
    BYTE* hook = (BYTE*)(g_base + RVA_EMBARK_LOAD_HOOK);
    if (memcmp(hook, EMBARK_LOAD_SIG, sizeof(EMBARK_LOAD_SIG)) != 0)
    {
        Log("LoadRepair: сигнатура загрузчика флота не совпала - не патчим");
        return false;
    }
    // CALL FUN_00513C80 на hook+0x1E должен вести ровно в Country::AddArmy
    BYTE* callSite = hook + 0x1E;
    if (callSite[0] != 0xE8 ||
        (DWORD)(callSite + 5 + *(int*)(callSite + 1)) != g_base + RVA_COUNTRY_ADD_ARMY)
    {
        Log("LoadRepair: CALL AddArmy не на ожидаемом месте - не патчим");
        return false;
    }

    g_embarkLoadResumeAddr = g_base + RVA_EMBARK_LOAD_RESUME;
    g_countriesGlobalAddr  = g_base + RVA_COUNTRIES_VECTOR;
    g_addArmyAddr          = g_base + RVA_COUNTRY_ADD_ARMY;
    g_setOwnerAddr         = g_base + RVA_UNIT_SET_OWNER;

    BYTE patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&EmbarkLoadOwnerThunk - ((DWORD)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("LoadRepair: установлен (rva %06X)", RVA_EMBARK_LOAD_HOOK);
    return true;
}

// Диагностика (v4.33): пользователь подтвердил, что приказ теперь
// принимается (третий патч выше сработал), но в день прихода посадка
// срывается. Сама проверка владельца в FUN_005D77A0 (эта функция) -
// не единственное условие: следом идут бой/маршрут флота/флаг104/
// вместимость, которые мы НЕ трогаем и не проверяли вживую. Логируем
// их все, когда владелец прошёл (свой или союзник), чтобы понять,
// какое из НЕ владельческих условий рвёт посадку, если рвёт.
// v4.55: кэш для индикатора посаженных войск. Заполняется ЗДЕСЬ, в уже
// проверенном коде посадки, который получает fleetObj гарантированно
// правильным способом (ECX от самой ванили, без единой догадки) - а
// не в UI-тултипе, где все попытки вычислить тот же указатель заново
// (через thisObj+0x258 и разные vtable-слоты) были либо неверны, либо
// роняли игру. Тултип теперь только ЧИТАЕТ этот кэш, не трогая
// thisObj/unit вообще.
static char g_cachedEmbarkedTags[512] = { 0 };  // v4.66: многострочный формат, с запасом
static LONG g_embarkCacheLogCount = 0;  // v4.57: ограничивает диагностику обхода списка 20 строками

static void __cdecl LogEmbarkFleetState(void* fleetObj, void* armyObj)
{
    if (!g_settings.debugLog)
        return;
    __try
    {
        int ownerFleet = *(int*)((char*)fleetObj + 0xC4);
        int ownerArmy = *(int*)((char*)armyObj + 0xC4);
        int combat = *(int*)((char*)fleetObj + 0x74);
        int routeCount = *(int*)((char*)fleetObj + 0xEC);
        char flag104 = *(char*)((char*)fleetObj + 0x104);
        void* leader = *(void**)((char*)fleetObj + 0xA4);
        int rawCap = leader ? *(int*)((char*)leader + 0x258) : -1;
        int capacity = rawCap / 100;

        tCountEmbarkedBrigades countEmbarked = (tCountEmbarkedBrigades)(g_base + RVA_FLEET_COUNT_EMBARKED);
        tCountArmyBrigades countArmy = (tCountArmyBrigades)(g_base + RVA_ARMY_COUNT_BRIGADES);
        int already = countEmbarked((char*)fleetObj + 0x1A4);
        int mine = countArmy(armyObj);

        bool ok = combat == 0 && routeCount <= 0 && flag104 == 0 && (already + mine) <= capacity;

        LogDbg("AllyEmbark: владелец флота/армии %d/%d бой=%d маршрут_флота=%d флаг104=%d "
            "вместимость=%d занято=%d+%d -> %s",
            ownerFleet, ownerArmy, combat, routeCount, (int)flag104,
            capacity, already, mine, ok ? "должна пройти" : "ОСТАЛЬНОЕ УСЛОВИЕ НЕ ПРОШЛО");

        // v4.58: +0x1A4 у ЭТОГО fleetObj пуст (узлов=0), хотя армия точно
        // посажена и панель корректно показывает занято 19/26 - похоже,
        // это другой объект, чем тот, что видит UI. Вместо догадок о
        // новом офсете - безопасный, только читающий скан: ищем в памяти
        // armyObj (ограниченный диапазон, под SEH) DWORD, РАВНЫЙ самому
        // указателю fleetObj. Если у армии есть поле "мой текущий
        // носитель", оно будет хранить именно это значение.
        if (InterlockedIncrement(&g_embarkCacheLogCount) <= 10)
        {
            DWORD_PTR needle = (DWORD_PTR)fleetObj;
            char found[256];
            found[0] = 0;
            int hits = 0;
            for (int off = 0; off < 0x300 && hits < 6; off += 4)
            {
                void* p = (char*)armyObj + off;
                if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(p, 4))
                    continue;
                __try
                {
                    DWORD_PTR val = *(DWORD_PTR*)p;
                    if (val == needle)
                    {
                        char piece[16];
                        _snprintf_s(piece, sizeof(piece), _TRUNCATE, "%s+0x%X", hits ? "," : "", off);
                        strcat_s(found, sizeof(found), piece);
                        ++hits;
                    }
                }
                __except (EXCEPTION_EXECUTE_HANDLER) { }
            }
            LogDbg("AllyEmbark: скан armyObj=%p на совпадение с fleetObj=%p -> смещения:%s (найдено %d)",
                armyObj, fleetObj, found[0] ? found : " нет", hits);
        }

        // v4.57 здесь раньше ТОЖЕ писал в g_cachedEmbarkedTags, обходя
        // +0x1A4 у ЭТОГО fleetObj - но v4.57/4.58 логи подтвердили: этот
        // fleetObj (из FUN_005D77A0) не тот объект, что видит панель, и
        // его +0x1A4 всегда пуст. Запись отсюда УДАЛЕНА в v4.61 - она
        // периодически затирала ПРАВИЛЬНЫЕ данные от
        // UpdateEmbarkedTagsCacheFromCapturedFleet (см. ниже, v4.60)
        // пустой строкой, создавая гонку. Кэш тултипа теперь пишет
        // только тот, проверенно верный источник.
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbg("AllyEmbark: исключение при диагностике состояния флота");
    }
}

// ---------------------------------------------------------------
// v4.60: источник fleetObj в LogEmbarkFleetState (из FUN_005D77A0)
// оказался НЕ тем объектом, что видит панель - у него пустой +0x1A4
// (подтверждено логом v4.57) и армия нигде не хранит на него прямой
// указатель (скан v4.58). Дизассемблировали FUN_0078E820 (та самая
// функция, что каждый кадр корректно считает "Место: X (Y)" для
// ЛЮБОЙ открытой панели юнита) и нашли ТОЧНОЕ место, где вычисляется
// правильный "особый объект" флота:
//
//   0078F554: MOV EDX, dword ptr [EAX+0x30]   ; слот 0x30 из vtable
//   0078F557: CALL EDX                         ; -> EAX = особый объект флота
//   0078F559: LEA ECX, [EAX+0x1A4]             ; <- ЗДЕСЬ патчим
//   0078F55F: CALL FUN_005dc560                ; подсчёт бригад (тот же, что и в embark-коде)
//
// Патчим РОВНО одну инструкцию (6 байт, LEA - не CALL), по
// установленному в проекте безопасному правилу "только читаем,
// воспроизводим оригинальную инструкцию и прыгаем назад" - никакой
// реконструкции сигнатуры вызова, никаких тронутых регистров кроме
// записи EAX в свою же глобальную переменную (сам EAX не меняется).
// Срабатывает каждый кадр для ЛЮБОЙ панели юнита с грузом на борту -
// то есть кэш обновляется, когда открыта панель именно ФЛОТА (не
// армии, как было с LogEmbarkFleetState/unload_button), от уже
// доказанно верного источника данных.
// ---------------------------------------------------------------

static const DWORD RVA_FLEET_CAPTURE_HOOK   = 0x38F559;  // LEA ECX,[EAX+0x1A4]
static const DWORD RVA_FLEET_CAPTURE_RESUME = 0x38F55F;  // CALL FUN_005dc560 (сразу после патча)

static const unsigned char FLEET_CAPTURE_SIG[6] =
{ 0x8D, 0x88, 0xA4, 0x01, 0x00, 0x00 };  // LEA ECX,[EAX+0x1A4]

static void* g_fleetCaptureResumeAddr = 0;
static void* g_capturedFleetSpecial = 0;
static LONG  g_fleetCaptureCount = 0;

// Опережающее объявление - зовётся из naked-asm заглушки ниже,
// определена сразу после неё.
static void __cdecl UpdateEmbarkedTagsCacheFromCapturedFleet();

__declspec(naked) static void FleetCaptureThunk()
{
    __asm mov g_capturedFleetSpecial, eax
    __asm push eax
    __asm push ecx
    __asm push edx
    __asm call UpdateEmbarkedTagsCacheFromCapturedFleet
    __asm pop edx
    __asm pop ecx
    __asm pop eax
    __asm lea ecx, [eax + 0x1A4]
    __asm jmp dword ptr [g_fleetCaptureResumeAddr]
}

// Читает g_capturedFleetSpecial (уже проверенно верный указатель,
// только что сохранённый заглушкой выше) и собирает теги чужих
// посаженных армий тем же безопасным обходом, что и в
// LogEmbarkFleetState. cdecl без аргументов - вызов из naked-заглушки
// безопасен (регистры сохранены/восстановлены вокруг call).
static void __cdecl UpdateEmbarkedTagsCacheFromCapturedFleet()
{
    void* fleetSpecial = g_capturedFleetSpecial;
    if (!fleetSpecial)
        return;

    __try
    {
        int ownerFleet = *(int*)((char*)fleetSpecial + 0xC4);
        char fresh[512];
        fresh[0] = 0;
        int shown = 0;
        void** node = *(void***)((char*)fleetSpecial + 0x1A4);
        int guard = 0;
        // v4.63: добавлено число бригад на тег (пользователь попросил
        // больше информации, чем просто тег) - используем тот же
        // проверенный countArmy(armySpecialObj), что и в
        // LogEmbarkFleetState/капасити-патче.
        tCountArmyBrigades countArmy = (tCountArmyBrigades)(g_base + RVA_ARMY_COUNT_BRIGADES);
        while (node && shown < 8 && guard < 64)
        {
            ++guard;
            if (g_fnIsBadReadPtr && g_fnIsBadReadPtr(node, 12))
                break;
            void* army = node[0];
            void** next = (void**)node[2];
            if (army &&
                !(g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)army + 0xC0, 3)) &&
                !(g_fnIsBadReadPtr && g_fnIsBadReadPtr((char*)army + 0xC4, 4)))
            {
                int ownerIdx = *(int*)((char*)army + 0xC4);
                if (ownerIdx != ownerFleet)
                {
                    char tag[4];
                    tag[0] = *((char*)army + 0xC0 + 0);
                    tag[1] = *((char*)army + 0xC0 + 1);
                    tag[2] = *((char*)army + 0xC0 + 2);
                    tag[3] = 0;
                    if (tag[0] >= 'A' && tag[0] <= 'Z')
                    {
                        int brigades = -1;
                        __try { brigades = countArmy(army); } __except (EXCEPTION_EXECUTE_HANDLER) { brigades = -1; }

                        // v4.66: формат по запросу пользователя - шапка
                        // один раз, затем КАЖДЫЙ союзник на своей строке
                        // как "@TAG - N бригад" ("@TAG" - стандартная
                        // ванильная подстановка флага страны, та же, что
                        // видели в собственном тексте ванили на
                        // attach_unit_button ещё в v4.39). Кириллица -
                        // CP1251-байтами (см. v4.65): "Армии союзников на
                        // флоте:" = \xC0\xF0\xEC\xE8\xE8\x20\xF1\xEE\xFE
                        // \xE7\xED\xE8\xEA\xEE\xE2\x20\xED\xE0\x20\xF4
                        // \xEB\xEE\xF2\xE5\x3A; " бригад" = \x20\xE1\xF0
                        // \xE8\xE3\xE0\xE4.
                        char piece[64];
                        if (brigades >= 0)
                            _snprintf_s(piece, sizeof(piece), _TRUNCATE, "\n@%s - %d\x20\xE1\xF0\xE8\xE3\xE0\xE4", tag, brigades);
                        else
                            _snprintf_s(piece, sizeof(piece), _TRUNCATE, "\n@%s", tag);

                        if (!shown)
                            strcat_s(fresh, sizeof(fresh),
                                "\xC0\xF0\xEC\xE8\xE8\x20\xF1\xEE\xFE\xE7\xED\xE8\xEA\xEE\xE2\x20\xED\xE0\x20\xF4\xEB\xEE\xF2\xE5\x3A");
                        strcat_s(fresh, sizeof(fresh), piece);
                        ++shown;
                    }
                }
            }
            node = next;
        }

        if (InterlockedIncrement(&g_fleetCaptureCount) <= 20)
            LogDbg("FleetCapture: fleetSpecial=%p владелец=%d итог='%s'", fleetSpecial, ownerFleet, fresh);

        if (strcmp(g_cachedEmbarkedTags, fresh) != 0)
            LogDbg("FleetCapture: кэш тултипа обновлён: '%s' -> '%s'", g_cachedEmbarkedTags, fresh);
        strcpy_s(g_cachedEmbarkedTags, sizeof(g_cachedEmbarkedTags), fresh);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static bool InstallFleetCaptureHook()
{
    BYTE* hook = (BYTE*)(g_base + RVA_FLEET_CAPTURE_HOOK);

    if (memcmp(hook, FLEET_CAPTURE_SIG, sizeof(FLEET_CAPTURE_SIG)) != 0)
    {
        Log("FleetCapture: сигнатура не совпала - не патчим");
        return false;
    }

    g_fleetCaptureResumeAddr = (void*)(g_base + RVA_FLEET_CAPTURE_RESUME);

    BYTE patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&FleetCaptureThunk - ((DWORD)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("FleetCapture: установлен (rva %06X)", RVA_FLEET_CAPTURE_HOOK);
    return true;
}

// v4.67-v4.70: временная разведка "почему клик по союзному флоту не
// выбирает мою посаженную армию" удалена отсюда - задача решена без
// патчей движка (обычный игровой список армий/флотов уже позволяет
// выбрать посаженную армию на чужом флоте, в обход общего клика по
// карте). Подробности расследования - в памяти
// project_select_embarked_army.md.

// FUN_005d77a0(ECX=флот, EDI=наша армия) - единственная проверка
// владельца на пути посуточной посадки (FUN_005D25C0). "Иначе false"
// заменяем на "иначе - проверить союз"; вместимость/бой/маршрут флота
// дальше не трогаем - см. комментарий блока выше. Для союзника (не
// самого себя) дополнительно логируем эти остальные условия.
__declspec(naked) static void EmbarkOwnerCheckThunk()
{
    __asm {
        mov eax, dword ptr [ecx + 0xC4]
        mov edx, dword ptr [edi + 0xC4]
        cmp eax, edx
        jz resume_ok

        push ecx
        push edi
        push edx
        push eax
        call IsOwnerAllied
        add esp, 8
        pop edi
        pop ecx
        test eax, eax
        jz fail

        push ecx
        push edi
        push edi
        push ecx
        call LogEmbarkFleetState
        add esp, 8
        pop edi
        pop ecx

    resume_ok:
        jmp dword ptr [g_embarkOwnerResumeOk]

    fail:
        xor eax, eax
        ret
    }
}

// FUN_005ccec0 - обработчик приказа движения: отдельная, более ранняя
// проверка на случай "кликнули на клетку, где армия уже стоит" (без
// похода). EDI = наша армия (объект CUnit), ESI = кандидат из списка
// юнитов этой клетки.
__declspec(naked) static void EmbarkClickFilterThunk()
{
    __asm {
        mov eax, dword ptr [edi + 0xCC]
        cmp dword ptr [esi + 0xCC], eax
        jz resume_same

        push ecx
        push edx
        mov edx, dword ptr [esi + 0xCC]
        push edx
        push eax
        call IsOwnerAllied
        add esp, 8
        pop edx
        pop ecx
        test eax, eax
        jnz resume_same
        jmp dword ptr [g_embarkClickResumeSkip]

    resume_same:
        jmp dword ptr [g_embarkClickResumeSame]
    }
}

// FUN_005d5e30 (CArmy::vftable[0x84], вызывается из "приказ допустим?"
// FUN_005CD3D0/vftable[0x88]) - вторая из двух одинаковых проверок
// владельца в этой функции: накопление вместимости своих флотов,
// стоящих в целевой морской клетке. EBX = наша армия, ESI = кандидат
// (уже подтверждён как флот по vtable+0x3c до этого хука).
__declspec(naked) static void EmbarkCapacityFilterThunk()
{
    __asm {
        mov ecx, dword ptr [esi + 0xC4]
        cmp dword ptr [ebx + 0xC4], ecx
        jz resume_same

        push eax
        push edx
        push ecx
        mov edx, dword ptr [ebx + 0xC4]
        push edx
        call IsOwnerAllied
        add esp, 8
        pop edx
        pop eax
        test eax, eax
        jnz resume_same
        jmp dword ptr [g_embarkCapacityResumeSkip]

    resume_same:
        jmp dword ptr [g_embarkCapacityResumeSame]
    }
}

static bool InstallAllyEmbark()
{
    unsigned char* hookOwner    = (unsigned char*)(g_base + RVA_EMBARK_OWNER_HOOK);
    unsigned char* hookClick    = (unsigned char*)(g_base + RVA_EMBARK_CLICK_HOOK);
    unsigned char* hookCapacity = (unsigned char*)(g_base + RVA_EMBARK_CAPACITY_HOOK);

    if (memcmp(hookOwner, EMBARK_OWNER_SIG, sizeof(EMBARK_OWNER_SIG)) != 0)
    {
        Log("AllyEmbark: сигнатура владельца флота не совпала - не патчим");
        return false;
    }
    if (memcmp(hookClick, EMBARK_CLICK_SIG, sizeof(EMBARK_CLICK_SIG)) != 0)
    {
        Log("AllyEmbark: сигнатура клика по своей клетке не совпала - не патчим");
        return false;
    }
    if (memcmp(hookCapacity, EMBARK_CAPACITY_SIG, sizeof(EMBARK_CAPACITY_SIG)) != 0)
    {
        Log("AllyEmbark: сигнатура вместимости (приказ допустим?) не совпала - не патчим");
        return false;
    }

    g_fnIsBadReadPtr = SafeIsBadReadPtr;

    g_embarkOwnerResumeOk      = g_base + RVA_EMBARK_OWNER_RESUME_OK;
    g_embarkClickResumeSame    = g_base + RVA_EMBARK_CLICK_RESUME_SAME;
    g_embarkClickResumeSkip    = g_base + RVA_EMBARK_CLICK_RESUME_SKIP;
    g_embarkCapacityResumeSame = g_base + RVA_EMBARK_CAPACITY_RESUME_SAME;
    g_embarkCapacityResumeSkip = g_base + RVA_EMBARK_CAPACITY_RESUME_SKIP;

    unsigned char patchOwner[12];
    patchOwner[0] = 0xE9;
    *(DWORD*)(patchOwner + 1) = (DWORD)(DWORD_PTR)&EmbarkOwnerCheckThunk - ((DWORD)hookOwner + 5);
    for (int i = 5; i < 12; ++i)
        patchOwner[i] = 0x90;

    unsigned char patchClick[14];
    patchClick[0] = 0xE9;
    *(DWORD*)(patchClick + 1) = (DWORD)(DWORD_PTR)&EmbarkClickFilterThunk - ((DWORD)hookClick + 5);
    for (int i = 5; i < 14; ++i)
        patchClick[i] = 0x90;

    unsigned char patchCapacity[14];
    patchCapacity[0] = 0xE9;
    *(DWORD*)(patchCapacity + 1) = (DWORD)(DWORD_PTR)&EmbarkCapacityFilterThunk - ((DWORD)hookCapacity + 5);
    for (int i = 5; i < 14; ++i)
        patchCapacity[i] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hookOwner, sizeof(patchOwner), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hookOwner, patchOwner, sizeof(patchOwner));
    VirtualProtect(hookOwner, sizeof(patchOwner), oldProtect, &oldProtect);

    if (!VirtualProtect(hookClick, sizeof(patchClick), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hookClick, patchClick, sizeof(patchClick));
    VirtualProtect(hookClick, sizeof(patchClick), oldProtect, &oldProtect);

    if (!VirtualProtect(hookCapacity, sizeof(patchCapacity), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hookCapacity, patchCapacity, sizeof(patchCapacity));
    VirtualProtect(hookCapacity, sizeof(patchCapacity), oldProtect, &oldProtect);

    Log("AllyEmbark: установлен (владелец rva %06X, клик rva %06X, вместимость rva %06X)",
        RVA_EMBARK_OWNER_HOOK, RVA_EMBARK_CLICK_HOOK, RVA_EMBARK_CAPACITY_HOOK);
    return true;
}


// ---------------------------------------------------------------
// SHOW_ALLY_EMBARKED_TOOLTIP - подсказка над кнопкой "Высадить" у
// флота: если на борту есть чужие (союзные) войска, дописывает к
// ванильному тексту тег их владельца ("| ALLY: FRA, ENG").
//
// Сознательно НЕ трогаем byte-в-byte хрупкий диспетчер тултипов кнопок
// (FUN_0078F980, VA 0x78F980 - там же лежат load/unload/attach/detach
// и решения по текстам, живьём собранные из полутора десятков вызовов
// с нестандартной "умной строкой" - именно в этом районе раньше уже
// дважды падала игра при работе над HIDE_RAW_GOODS_FILTER). Вместо
// патча байтов - перехват ЦЕЛОГО СЛОТА виртуальной таблицы, тем же
// приёмом, что уже используется для тултипов VIEWS (см. TOOLTIP_THUNKS/
// OnTooltip выше): подменяем указатель, зовём оригинал ПЕРВЫМ (никакой
// внутренней логики не трогаем и не повторяем), и уже ПОСЛЕ, над готовым
// результатом, дописываем свой текст. Класс - CSingleUnitButtons (RTTI
// по строке ".?AVCSingleUnitButtons@@"), слот 12 - как раз FUN_0078F980.
//
// this(=CSingleUnitButtons)+0x258 - выбранный юнит (тот же raw CUnit*,
// что диспетчер сам читает по этому смещению); +0xCC на нём - индекс
// страны-владельца (как в EmbarkClickFilterThunk). vtable+0x2C у этого
// юнита -> "особый объект" флота; на нём +0x1A4 - голова списка
// посаженных армий (тот же список, что считает FUN_005DC560 для
// вместимости), каждый узел - {армия, ?, next}; на самой армии (тоже
// "особый объект") +0xC0..+0xC2 - тег страны, +0xC4 - её индекс
// (сравниваем с индексом владельца флота - если не совпал, значит
// пассажир не свой).
//
// Дописываем текст через уже готовый GStrSet - он пишет строго В
// ПРЕДЕЛАХ существующей ёмкости std::string, ничего не аллоцирует и не
// зовёт сторонние функции с угадываемым соглашением (тот самый урок из
// project_hide_raw_goods_filter) - в худшем случае наш хвост обрежется
// по ёмкости, крашнуться тут нечему.
// ---------------------------------------------------------------

static const DWORD RVA_UNIT_BUTTONS_TOOLTIP_VTABLE = 0xA16BD0;  // CSingleUnitButtons::vftable
static const int   VT_SLOT_UNIT_BUTTONS_TOOLTIP     = 12;       // FUN_0078F980 (тултип load/unload/attach/detach)

static const int OFF_PANEL_SELECTED_UNIT  = 0x258;  // CSingleUnitButtons -> выбранный юнит (raw CUnit*)
static const int OFF_UNIT_OWNER_RAW       = 0xCC;   // raw CUnit: индекс страны-владельца
// v4.43: FUN_0078e820 (тот же класс CSingleUnitButtons, второй vtable,
// живьём считает LOAD_CAPACITY_LABEL для той же панели) декомпилирован
// заново - объект, который передаётся в уже проверенный FUN_005dc560
// (подсчёт посаженных войск, используется и в PATCH_ALLY_EMBARK),
// получается вызовом слота 0x30 у выбранного юнита, а НЕ 0x2C. Слот
// 0x2C нигде в уже рабочем коде посадки не используется вовсе - это
// была непроверенная догадка, вот и причина пустого списка. Заменено.
static const int VT_GET_SPECIAL_OBJECT    = 0x30;   // CUnit: получить объект для FUN_005dc560 (капасити/список посадки)
static const int OFF_SPECIAL_OWNER_INDEX  = 0xC4;   // особый объект: тот же индекс страны
static const int OFF_SPECIAL_TAG          = 0xC0;   // особый объект: 3-буквенный тег страны
static const int OFF_FLEET_EMBARKED_LIST  = 0x1A4;  // особый объект флота: голова списка посаженных армий

static void* g_origUnitButtonsTooltipSlot = 0;

// Диагностика (v4.37, уточнена v4.38): в первом прогоне слот дёргался
// 81 раз - и все 81 раз с ОДНИМ И ТЕМ ЖЕ элементом "select_land",
// "unload_button" не встретился ни разу. Похоже, это не общий
// диспетчер "что сейчас под курсором", а что-то более узкое (может,
// периодическое обновление именно чекбокса select_land). Логируем
// теперь только ПЕРВОЕ появление КАЖДОГО РАЗЛИЧНОГО имени элемента
// (до 24 разных имён) - иначе один повторяющийся элемент съедает весь
// лимит строк и мы не видим остальные.
// v4.55: ПОЛНОСТЬЮ переписано на безопасный минимум после трёх крашей
// за сессию. Весь предыдущий код (поиск thisObj+0x258 "выбранного
// юнита", вызовы vtable-слотов 0x24-0x3C, +-8 и т.д.) удалён - он
// либо давал неверные данные, либо (в сочетании с конкретной
// последовательностью "выбрать армию -> навести на кнопку") ронял
// игру по неясной причине. Теперь хук НЕ трогает thisObj вообще (кроме
// проверки на null) - только дописывает уже готовый кэш
// g_cachedEmbarkedTags, который заполняется в LogEmbarkFleetState
// (см. выше) - в уже проверенном коде посадки, получающем fleetObj
// гарантированно правильным способом.
static LONG g_tooltipHookLogCount = 0;  // v4.56: диагностика - первые 20 срабатываний хука

static void OnUnitButtonsTooltip(void* thisObj, void* retBuf, void* element)
{
    if (!g_settings.showAllyEmbarkedTooltip || !thisObj || !retBuf || !element)
        return;

    __try
    {
        const char* name = GStrText(VCall0(element, VT_GET_NAME));

        // v4.59: "select_land" срабатывает каждый кадр и съедает весь
        // лимит лога раньше, чем до́ходит до реальных кнопок - исключаем
        // его из логирования, лимит для остальных поднят.
        if (strcmp(name, "select_land") != 0 && InterlockedIncrement(&g_tooltipHookLogCount) <= 100)
            LogDbg("FleetPassengerTooltip: элемент='%s' кэш='%s'", name, g_cachedEmbarkedTags);

        // v4.62: пользователь прямо сказал - индикатор на панели АРМИИ
        // (unload_button/load_button) не нужен, нужен на панели ФЛОТА.
        // v4.64: пользователь уточнил - кнопка "прикрепить" правее кнопки
        // вместимости, это РАЗНЫЕ элементы, и подсказка нужна именно на
        // кнопке вместимости (на ней уже есть своя подсказка от ванили).
        // Убираем attach_unit_button, пробуем "LOAD_CAPACITY_LABEL" -
        // тем же именем, которым её ищет сама ваниль (FUN_00409350 с
        // этой строкой перед VT_FIND_CHILD в FUN_0078E820) элемент,
        // возможно, называется себя так же. Тот же безопасный хук -
        // просто другое имя в сравнении.
        if ((strcmp(name, "unload_button") == 0 || strcmp(name, "load_button") == 0 ||
             strcmp(name, "LOAD_CAPACITY_LABEL") == 0 || strcmp(name, "detach_unit_button") == 0 ||
             strcmp(name, "select_land") == 0) && g_cachedEmbarkedTags[0] != 0)
        {
            GStrSet(retBuf, g_cachedEmbarkedTags);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void* __fastcall UnitButtonsTooltipThunk(void* thisObj, void* edx, void* retBuf, void* element)
{
    void* result = g_origUnitButtonsTooltipSlot
        ? ((tTooltip)g_origUnitButtonsTooltipSlot)(thisObj, 0, retBuf, element)
        : retBuf;
    OnUnitButtonsTooltip(thisObj, result, element);
    return result;
}

// Определена ниже по файлу (используется и для VIEWS/CDecision) -
// нужно опережающее объявление, раз пользуемся ей раньше её тела.
static bool PatchSlot(DWORD rvaVtable, int slotIndex, void* replacement, void** outOriginal);

static bool InstallFleetPassengerTooltip()
{
    g_fnIsBadReadPtr = SafeIsBadReadPtr;

    bool ok = PatchSlot(RVA_UNIT_BUTTONS_TOOLTIP_VTABLE, VT_SLOT_UNIT_BUTTONS_TOOLTIP,
        (void*)&UnitButtonsTooltipThunk, &g_origUnitButtonsTooltipSlot);
    Log("FleetPassengerTooltip: установлен (vtable rva %06X слот %d) = %d",
        RVA_UNIT_BUTTONS_TOOLTIP_VTABLE, VT_SLOT_UNIT_BUTTONS_TOOLTIP, (int)ok);
    return ok;
}

// ---------------------------------------------------------------
// v4.45: разведка тултипа при наведении на флот прямо на карте
// (отдельная, ещё не начатая задача - индикатор в текущем виде
// работает только при открытой панели флота). Иконка юнита на
// карте - CUnitsStackMapIcon (найден через RTTI: строка
// ".?AVCUnitsStackMapIcon@@" -> COL -> vtable VA 0xE4B174+4=
// 0xDF8678). Какой именно слот отвечает за тултип - неизвестно;
// декомпиляция не дала прямого ответа (искали строку
// "LOAD_CAPACITY_LABEL"/"CMapIcon" - вели либо в конструктор,
// либо в несвязанный AI-код). Вместо ещё одной догадки - широкий,
// но БЕЗОПАСНЫЙ по сигнатуре зонд: каждый слот подменяется чистой
// asm-заглушкой, которая логирует (this, номер слота), НЕ трогает
// регистры/стек сверх своих же push/pop и уходит в оригинал через
// jmp (не call) - поэтому не нужно знать реальную сигнатуру слота
// (сколько у него аргументов), опасность появляется только если
// промахнуться мимо границы самой таблицы.
//
// Ограничили размер зонда до 8 слотов (0-7): по соседству в .rdata
// сразу за этой vtable начинается vtable НЕСВЯЗАННОГО класса
// CButtonObserverGlue<CUnitsStackMapIcon> (VA 0xDF8698, ровно +8
// слотов) - это может быть и совпадением раскладки линкера, но раз
// есть чёткий ориентир, разумнее не переходить его: эта таблица
// используется для ЛЮБОЙ отрисовки/клика по юниту на карте каждый
// кадр, ошибка здесь будет куда заметнее прежних.
// ---------------------------------------------------------------

static const DWORD RVA_MAPICON_VTABLE = 0x9F8678;  // CUnitsStackMapIcon::vftable (VA 0xDF8678 - 0x400000)
// v4.47: 8 слотов (0-7) отработали без единого сбоя (проверено логом
// v2dll_crash.log - новых крашей после теста нет) и все оказались
// частыми покадровыми вызовами, ни один не похож на тултип по
// наведению. Соседняя vtable на границе +8 могла быть совпадением
// раскладки линкера - расширяем до 16 слотов.
static const int   MAPICON_PROBE_SLOTS = 16;

// v4.45: массива в naked asm сознательно избегаем - во всём файле для
// jmp через сохранённый оригинал используется ОТДЕЛЬНАЯ скалярная
// переменная на каждый переход (риск неоднозначного масштабирования
// индекса в inline asm иначе), поэтому здесь тоже свои глобали на
// каждый слот.
static void* g_mapIconOrig0 = 0;
static void* g_mapIconOrig1 = 0;
static void* g_mapIconOrig2 = 0;
static void* g_mapIconOrig3 = 0;
static void* g_mapIconOrig4 = 0;
static void* g_mapIconOrig5 = 0;
static void* g_mapIconOrig6 = 0;
static void* g_mapIconOrig7 = 0;
static void* g_mapIconOrig8 = 0;
static void* g_mapIconOrig9 = 0;
static void* g_mapIconOrig10 = 0;
static void* g_mapIconOrig11 = 0;
static void* g_mapIconOrig12 = 0;
static void* g_mapIconOrig13 = 0;
static void* g_mapIconOrig14 = 0;
static void* g_mapIconOrig15 = 0;
// v4.46: общий счётчик на все 8 слотов сразу исчерпался частыми
// (каждый кадр) слотами 2/3/4, не дав шанса редким слотам попасть в
// лог - у каждого слота теперь свой лимит.
static LONG g_mapIconProbeLogCount[MAPICON_PROBE_SLOTS] = { 0 };
static const int MAPICON_PROBE_LOG_CAP = 40;

// v4.48: слоты 9/10/12/13 - все один и тот же generic-паттерн
// "наблюдателя", каждый проверяет СВОЁ поле объекта (0x20/0x8/0xC/0x10
// соответственно) и зовёт колбэк, если он назначен. Слот 12 (тултип по
// корреляции с наведением) на практике оказался с нулевым колбэком.
// v4.49: при срабатывании любого из этих четырёх слотов читаем ВСЕ
// четыре поля разом (под SEH, только чтение) - вдруг для этого же
// объекта назначен один из ТРЁХ ОСТАЛЬНЫХ, а не именно 0xC.
static void __cdecl LogMapIconProbeHit(void* thisPtr, int slotIndex)
{
    if (!g_settings.debugLog)
        return;
    if (slotIndex >= 0 && slotIndex < MAPICON_PROBE_SLOTS &&
        InterlockedIncrement(&g_mapIconProbeLogCount[slotIndex]) <= MAPICON_PROBE_LOG_CAP)
    {
        if (slotIndex == 9 || slotIndex == 10 || slotIndex == 12 || slotIndex == 13)
        {
            void* cb8 = 0; void* cbC = 0; void* cb10 = 0; void* cb20 = 0;
            __try { cb8  = *(void**)((char*)thisPtr + 0x8); }  __except (EXCEPTION_EXECUTE_HANDLER) { cb8  = (void*)(DWORD_PTR)-1; }
            __try { cbC  = *(void**)((char*)thisPtr + 0xC); }  __except (EXCEPTION_EXECUTE_HANDLER) { cbC  = (void*)(DWORD_PTR)-1; }
            __try { cb10 = *(void**)((char*)thisPtr + 0x10); } __except (EXCEPTION_EXECUTE_HANDLER) { cb10 = (void*)(DWORD_PTR)-1; }
            __try { cb20 = *(void**)((char*)thisPtr + 0x20); } __except (EXCEPTION_EXECUTE_HANDLER) { cb20 = (void*)(DWORD_PTR)-1; }
            LogDbg("MapIconProbe: слот=%d this=%p cb(+8)=%p cb(+C)=%p cb(+10)=%p cb(+20)=%p",
                slotIndex, thisPtr, cb8, cbC, cb10, cb20);
        }
        else
        {
            LogDbg("MapIconProbe: слот=%d this=%p", slotIndex, thisPtr);
        }
    }
}

// Раскладка через \-продолжение строк схлопывает переносы в ОДНУ
// логическую строку - единый __asm { ... } блок так не парсится
// (MASM разделяет инструкции реальными переводами строк). Поэтому
// каждая инструкция - со своим отдельным __asm.
#define MAPICON_PROBE_STUB(n)                                          \
    __declspec(naked) static void MapIconProbe##n()                    \
    {                                                                   \
        __asm push eax                                                  \
        __asm push ecx                                                  \
        __asm push edx                                                  \
        __asm push n                                                    \
        __asm push ecx                                                  \
        __asm call LogMapIconProbeHit                                   \
        __asm add esp, 8                                                \
        __asm pop edx                                                   \
        __asm pop ecx                                                   \
        __asm pop eax                                                   \
        __asm jmp dword ptr [g_mapIconOrig##n]                          \
    }

MAPICON_PROBE_STUB(0) MAPICON_PROBE_STUB(1) MAPICON_PROBE_STUB(2) MAPICON_PROBE_STUB(3)
MAPICON_PROBE_STUB(4) MAPICON_PROBE_STUB(5) MAPICON_PROBE_STUB(6) MAPICON_PROBE_STUB(7)
MAPICON_PROBE_STUB(8) MAPICON_PROBE_STUB(9) MAPICON_PROBE_STUB(10) MAPICON_PROBE_STUB(11)
MAPICON_PROBE_STUB(12) MAPICON_PROBE_STUB(13) MAPICON_PROBE_STUB(14) MAPICON_PROBE_STUB(15)

// v4.52: после краша (v4.49, widths sweep) решили тестировать 3
// непроверенных слота (8/11/15) ПООДИНОЧКЕ, а не все разом. Начинаем
// с одного только слота 8 - остальные НЕ трогаем в этом раунде.
static bool InstallMapIconProbe()
{
    bool allOk = true;
    allOk = PatchSlot(RVA_MAPICON_VTABLE, 8, (void*)&MapIconProbe8, &g_mapIconOrig8) && allOk;
    LogDbg("MapIconProbe: установлен (vtable rva %06X, слот 8 ТОЛЬКО) = %d",
        RVA_MAPICON_VTABLE, (int)allOk);
    return allOk;
}


// ---------------------------------------------------------------
// Краш при цивилизации страны (0xc0000005, fault offset 0x14248b).
//
// FUN_00542370 - обработчик "on_civilize": перебирает существующие
// постройки страны (FUN_005c2ad0 - lookup по имени в хэш-таблице
// "категория/товар -> слот") и раскладывает их по слотам для
// последующей обработки. Раньше это падало только теоретически:
// нецивилизованные страны не могли строить фабрики вообще, поэтому
// до этого кода просто не доходило ни с чем, кроме RGO-построек,
// для которых слот всегда существует. В этой сессии добавлены
// патчи build_factory_ignore_uncivilized_* — теперь нецивилизованная
// страна МОЖЕТ построить произвольную фабрику, и при её цивилизации
// FUN_005c2ad0 не находит слот для такой постройки, возвращает 0
// (не найдено), а вызывающий код разыменовывает результат без
// проверки: mov esi,[eax+0x40] - EAX=0 -> чтение по 0x40 -> краш.
//
// Патчим ровно точку сразу после call FUN_005c2ad0 (rva 0x14248B,
// 7 байт - перекрывает mov esi,[eax+0x40]; dec esi; shl esi,4).
// Если EAX==0 - пропускаем текущую постройку целиком (прыжок на
// rva 0x142555, штатная точка "next iteration" того же цикла,
// уже присутствующая в оригинальном коде). Иначе - воспроизводим
// три перекрытых инструкции и продолжаем как раньше (rva 0x142492).
// ---------------------------------------------------------------

static const DWORD RVA_CIVILIZE_NULLCHECK_HOOK   = 0x14248B;
static const DWORD RVA_CIVILIZE_NULLCHECK_NORMAL = 0x142492;  // add esi,[ebp-0x48]
static const DWORD RVA_CIVILIZE_NULLCHECK_SKIP   = 0x142555;  // mov eax,[ebp-0x18] (next iteration)

static const unsigned char CIVILIZE_NULLCHECK_SIG[7] =
{ 0x8B, 0x70, 0x40, 0x4E, 0xC1, 0xE6, 0x04 };

static bool InstallCivilizeNullCheck()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_CIVILIZE_NULLCHECK_HOOK);

    if (memcmp(hook, CIVILIZE_NULLCHECK_SIG, sizeof(CIVILIZE_NULLCHECK_SIG)) != 0)
    {
        Log("CivilizeNullCheck: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 32, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    cave[n++] = 0x85; cave[n++] = 0xC0;                     // test eax,eax
    int jzAt = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz null_case (адрес допишем ниже)

    // EAX != 0: воспроизводим перекрытые байты и уходим обратно.
    cave[n++] = 0x8B; cave[n++] = 0x70; cave[n++] = 0x40;   // mov esi,[eax+0x40]
    cave[n++] = 0x4E;                                       // dec esi
    cave[n++] = 0xC1; cave[n++] = 0xE6; cave[n++] = 0x04;   // shl esi,4

    cave[n++] = 0xE9;                                       // jmp обратно (нормальный путь)
    *(DWORD*)(cave + n) = (g_base + RVA_CIVILIZE_NULLCHECK_NORMAL) - (DWORD)(cave + n + 4);
    n += 4;

    int nullAt = n;
    cave[jzAt + 1] = (unsigned char)(nullAt - (jzAt + 2));

    // EAX == 0: слот не найден - пропускаем эту постройку целиком,
    // на следующую итерацию того же цикла (штатная точка выхода).
    cave[n++] = 0xE9;
    *(DWORD*)(cave + n) = (g_base + RVA_CIVILIZE_NULLCHECK_SKIP) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[7];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)cave - ((DWORD)hook + 5);
    patch[5] = 0x90;
    patch[6] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("CivilizeNullCheck: установлен на rva %06X, пещера %08X",
        RVA_CIVILIZE_NULLCHECK_HOOK, (DWORD)(DWORD_PTR)cave);
    return true;
}

// ---------------------------------------------------------------
// Диагностика для трёх null-check патчей ниже (SupplySource,
// TechCompare, TechFolderIcon). Каждый из них перехватывает попытку
// движка разыменовать null там, где должен быть указатель на объект
// "статуса" (typeSourceRef / CTechnologyStatus-подобный объект) -
// сами патчи это молча обходят, но не объясняют, ЗАКОНОМЕРНО ли тут
// null (например, страна ещё не начинала эту конкретную технологию/
// категорию - нормальное состояние) или это симптом отдельного бага
// (объект должен был существовать, но не создался). Эти хелперы при
// срабатывании null-ветки пишут в v2dll.log адрес и, по возможности,
// имя связанного объекта (production type / invention) - по этим
// записям в следующий раз можно будет проверить, легитимно ли
// отсутствие статуса у конкретной технологии/категории.
// ---------------------------------------------------------------

static void EnsureIsBadReadPtrForDiag()
{
    if (!g_fnIsBadReadPtr)
        g_fnIsBadReadPtr = (tIsBadReadPtr)GetProcAddress(GetModuleHandleA("kernel32.dll"), "IsBadReadPtr");
}

// typePtr - объект CProductionType (см. PATCH_SUPPLY_SOURCE_NULL_CHECK).
static void __cdecl LogNullDiagProdType(void* typePtr)
{
    EnsureIsBadReadPtrForDiag();

    const char* name = "?";
    __try
    {
        if (typePtr && g_fnIsBadReadPtr && !g_fnIsBadReadPtr(typePtr, OFF_PRODTYPE_NAME + 20))
        {
            const char* resolved = ResolveProdTypeNamePtr(typePtr);
            if (resolved && !g_fnIsBadReadPtr(resolved, 1))
                name = resolved;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        name = "?(exception)";
    }

    Log("NullStatusDiag[SupplySource]: typePtr=%08X name=%s",
        (DWORD)(DWORD_PTR)typePtr, name);
}

// obj - объект CInvention/CTechnologyCategory (см. PATCH_TECH_COMPARE_
// NULL_CHECK и PATCH_TECH_FOLDER_ICON_NULL_CHECK). Смещение +0x30 -
// предположительное (взято из соседнего, рабочего кода той же функции
// FUN_007adb70, где ровно это поле объекта передаётся как имя
// изобретения в форматирование строки) - не проверено так же строго,
// как ResolveProdTypeNamePtr для типов производства, поэтому вывод
// диагностический, а не рабочая логика.
static void __cdecl LogNullDiagTechObj(const char* site, void* obj)
{
    EnsureIsBadReadPtrForDiag();

    DWORD vptr = 0;
    char nameBuf[48] = { 0 };
    const char* name = "?";

    __try
    {
        if (obj && g_fnIsBadReadPtr && !g_fnIsBadReadPtr(obj, 0x34))
        {
            vptr = *(DWORD*)obj;
            const char* namePtr = *(const char**)((unsigned char*)obj + 0x30);
            if (namePtr && !g_fnIsBadReadPtr(namePtr, 1))
            {
                strncpy_s(nameBuf, sizeof(nameBuf), namePtr, _TRUNCATE);
                name = nameBuf;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        name = "?(exception)";
    }

    Log("NullStatusDiag[%s]: obj=%08X vptr=%08X name(+0x30,предпол.)=%s",
        site, (DWORD)(DWORD_PTR)obj, vptr, name);
}

static const char g_siteTechCompareEdx[] = "TechCompare/A(edx)";
static const char g_siteTechCompareEcx[] = "TechCompare/B(ecx)";
static const char g_siteTechFolderIcon[] = "TechFolderIcon";


// ---------------------------------------------------------------
// Краш при пересчёте занятости/производства построек страны
// (0xC0000005, av_read=0x00000128) - воспроизведён по
// v2dll_crash.log (dll=3.21): падает не наш код, а FUN_004d1560 -
// ванильный движковый обход построек штата (per-country economy
// pass, вызывается лениво при обращении к данным страны - этим и
// объясняется, почему падает именно при заходе на конкретную
// страну/открытии её окна технологий, а не каждый тик у всех).
//
// Для текущей постройки в цикле код читает её тип производства
// (EDI = здание, [EDI+0x18] = CProductionType*), а из него - тот же
// typeSourceRef = *(typePtr+0x12c) ("источник локального сырья"),
// что уже разбирался в PATCH_HIDE_NO_SUPPLY_FACTORIES - движок
// заполняет его только для limit_by_local_supply=yes типов, и то
// только если в регионе реально есть нужное сырьё. Здесь же движок
// читает typeSourceRef+0x128 БЕЗУСЛОВНО (rva 0xD15EB), без проверки
// на null - если в штате стоит здание такого типа без валидного
// источника (постройка оказалась там, где сырья нет), это разыменование
// нулевого указателя.
//
// Патчим точку чтения (rva 0xD15EB, 6 байт - mov eax,[ebx+0x128]).
// Если EBX(typeSourceRef)==0 - пропускаем весь блок, использующий
// typeSourceRef (три вызова FUN_004ee150/004ee300/004ee990, которым
// он передаётся дальше как параметр и был бы разыменован уже там),
// прыжком на rva 0xD1665 - независимый от typeSourceRef подсчёт
// занятости той же постройки, штатная точка того же цикла. Иначе -
// воспроизводим перекрытую инструкцию как есть (rva 0xD15F1).
// ---------------------------------------------------------------

static const DWORD RVA_SUPPLY_SOURCE_NULLCHECK_HOOK   = 0xD15EB;
static const DWORD RVA_SUPPLY_SOURCE_NULLCHECK_NORMAL = 0xD15F1;  // mov ecx,edx
static const DWORD RVA_SUPPLY_SOURCE_NULLCHECK_SKIP   = 0xD1665;  // mov eax,[edi+0xf4] (подсчёт занятости, следующий шаг цикла)

static const unsigned char SUPPLY_SOURCE_NULLCHECK_SIG[6] =
{ 0x8B, 0x83, 0x28, 0x01, 0x00, 0x00 };

static bool InstallSupplySourceNullCheck()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_SUPPLY_SOURCE_NULLCHECK_HOOK);

    if (memcmp(hook, SUPPLY_SOURCE_NULLCHECK_SIG, sizeof(SUPPLY_SOURCE_NULLCHECK_SIG)) != 0)
    {
        Log("SupplySourceNullCheck: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    cave[n++] = 0x85; cave[n++] = 0xDB;                     // test ebx,ebx
    int jzAt = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz null_case (адрес допишем ниже)

    // EBX != 0: воспроизводим перекрытую инструкцию и уходим обратно.
    cave[n++] = 0x8B; cave[n++] = 0x83;
    cave[n++] = 0x28; cave[n++] = 0x01; cave[n++] = 0x00; cave[n++] = 0x00;  // mov eax,[ebx+0x128]

    cave[n++] = 0xE9;                                       // jmp обратно (нормальный путь)
    *(DWORD*)(cave + n) = (g_base + RVA_SUPPLY_SOURCE_NULLCHECK_NORMAL) - (DWORD)(cave + n + 4);
    n += 4;

    int nullAt = n;
    cave[jzAt + 1] = (unsigned char)(nullAt - (jzAt + 2));

    // EBX == 0: у постройки нет источника локального сырья. Сначала
    // (диагностика) логируем typePtr, который всё ещё лежит в EAX -
    // см. LogNullDiagProdType выше; EAX/ECX свободны здесь, потому что
    // ниже мы просто уходим на независимый от них шаг того же цикла.
    cave[n++] = 0x50;                                       // push eax (typePtr)
    cave[n++] = 0xB9;                                       // mov ecx, imm32
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)&LogNullDiagProdType;
    n += 4;
    cave[n++] = 0xFF; cave[n++] = 0xD1;                     // call ecx
    cave[n++] = 0x83; cave[n++] = 0xC4; cave[n++] = 0x04;   // add esp,4

    // ...затем пропускаем связанный с EBX блок целиком, на подсчёт
    // занятости той же постройки.
    cave[n++] = 0xE9;
    *(DWORD*)(cave + n) = (g_base + RVA_SUPPLY_SOURCE_NULLCHECK_SKIP) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)cave - ((DWORD)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("SupplySourceNullCheck: установлен на rva %06X, пещера %08X",
        RVA_SUPPLY_SOURCE_NULLCHECK_HOOK, (DWORD)(DWORD_PTR)cave);
    return true;
}


// ---------------------------------------------------------------
// Краш в окне технологий (0xC0000005, av_read=0x00000310) - лог
// v2dll_crash.log (dll=3.22), сразу после "Update[CTechnologyView]:
// вызван" - т.е. именно при открытии/построении окна технологий.
//
// FUN_007a9070 - компаратор сортировки (используется при построении
// списка технологий/изобретений для окна: на стеке в момент краша
// видны CInvention/CTechnologyCategory/CTechnologyStatus/CCountry).
// Для двух сравниваемых элементов он читает указатель "статуса"
// каждого (object+0x430), а из него - ещё один указатель (+0x310) и
// целое поле для сравнения (+0x40) - без проверки на null ни на одном
// из двух object+0x430:
//   mov edx,[esi+0x430]      ; статус объекта A
//   mov ecx,[ecx+0x430]      ; статус объекта B
//   mov eax,[edx+0x310]      ; rva 0x3A918A - краш, если edx==0
//   mov edx,[ecx+0x310]      ; тем же путём упал бы и при ecx==0
//   mov eax,[eax+0x40]
//   cmp eax,[edx+0x40]
//
// Патчим точку чтения (rva 0x3A918A, 12 байт - две инструкции mov).
// Если edx или ecx (указатель статуса A/B) равен 0 - у элемента нет
// данных статуса (похоже на случай страны без прогресса ни по одной
// технологии в этой категории) - вместо чтения возвращаем из функции
// детерминированный результат "не меньше" (AL=0), воспроизводя
// собственный эпилог функции (POP ESI, затем переход сразу после
// SETL, минуя его - CMP выше не выполнялся, его флаги мусорны).
// Иначе - воспроизводим обе перекрытые инструкции как есть.
// ---------------------------------------------------------------

static const DWORD RVA_TECH_COMPARE_NULLCHECK_HOOK    = 0x3A918A;
static const DWORD RVA_TECH_COMPARE_NULLCHECK_NORMAL  = 0x3A9196;  // mov eax,[eax+0x40]
static const DWORD RVA_TECH_COMPARE_NULLCHECK_EPILOGUE = 0x3A91A2; // mov ecx,[ebp-0xc] (после SETL AL)

static const unsigned char TECH_COMPARE_NULLCHECK_SIG[12] =
{
    0x8B, 0x82, 0x10, 0x03, 0x00, 0x00,   // mov eax,[edx+0x310]
    0x8B, 0x91, 0x10, 0x03, 0x00, 0x00    // mov edx,[ecx+0x310]
};

static bool InstallTechCompareNullCheck()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_TECH_COMPARE_NULLCHECK_HOOK);

    if (memcmp(hook, TECH_COMPARE_NULLCHECK_SIG, sizeof(TECH_COMPARE_NULLCHECK_SIG)) != 0)
    {
        Log("TechCompareNullCheck: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 128, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    cave[n++] = 0x85; cave[n++] = 0xD2;                     // test edx,edx
    int jz1At = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz null_edx (rel8, адрес допишем)

    cave[n++] = 0x85; cave[n++] = 0xC9;                     // test ecx,ecx
    int jz2At = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz null_ecx (rel8, адрес допишем)

    // Оба указателя не null: воспроизводим перекрытые инструкции.
    cave[n++] = 0x8B; cave[n++] = 0x82;
    cave[n++] = 0x10; cave[n++] = 0x03; cave[n++] = 0x00; cave[n++] = 0x00;  // mov eax,[edx+0x310]
    cave[n++] = 0x8B; cave[n++] = 0x91;
    cave[n++] = 0x10; cave[n++] = 0x03; cave[n++] = 0x00; cave[n++] = 0x00;  // mov edx,[ecx+0x310]

    cave[n++] = 0xE9;                                       // jmp обратно (нормальный путь)
    *(DWORD*)(cave + n) = (g_base + RVA_TECH_COMPARE_NULLCHECK_NORMAL) - (DWORD)(cave + n + 4);
    n += 4;

    // ESI - это param_3 (объект "A"), не тронут ни одной из перекрытых
    // инструкций и переживает обе ветки ниже - используем его для
    // диагностики в обоих случаях: в null_edx это и есть объект без
    // статуса, в null_ecx - его "здоровый" оппонент по сравнению
    // (сам объект B к этому моменту уже потерян - ecx перезаписан
    // результатом чтения +0x430, которое и оказалось null).
    int null1At = n;
    cave[jz1At + 1] = (unsigned char)(null1At - (jz1At + 2));
    cave[n++] = 0x56;                                       // push esi
    cave[n++] = 0x68;                                       // push imm32 (site string)
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)g_siteTechCompareEdx;
    n += 4;
    cave[n++] = 0xB8;                                       // mov eax, imm32
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)&LogNullDiagTechObj;
    n += 4;
    cave[n++] = 0xFF; cave[n++] = 0xD0;                     // call eax
    cave[n++] = 0x83; cave[n++] = 0xC4; cave[n++] = 0x08;   // add esp,8
    cave[n++] = 0xE9;                                       // jmp finish_null
    int jmpFinish1At = n;
    n += 4;

    int null2At = n;
    cave[jz2At + 1] = (unsigned char)(null2At - (jz2At + 2));
    cave[n++] = 0x56;                                       // push esi
    cave[n++] = 0x68;                                       // push imm32 (site string)
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)g_siteTechCompareEcx;
    n += 4;
    cave[n++] = 0xB8;                                       // mov eax, imm32
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)&LogNullDiagTechObj;
    n += 4;
    cave[n++] = 0xFF; cave[n++] = 0xD0;                     // call eax
    cave[n++] = 0x83; cave[n++] = 0xC4; cave[n++] = 0x08;   // add esp,8

    int finishNullAt = n;
    *(DWORD*)(cave + jmpFinish1At) = (DWORD)(finishNullAt - (jmpFinish1At + 4));

    // Один из статусов отсутствует - CMP оригинала не выполняем (его
    // операнды недостижимы), сами завершаем функцию: воспроизводим
    // "pop esi" из общего эпилога (баланс стека под наш ранний выход),
    // AL=0 ("не меньше" - нейтральный результат для strict-weak-order),
    // и продолжаем с точки сразу после SETL AL в оригинале.
    cave[n++] = 0x5E;                                       // pop esi
    cave[n++] = 0x33; cave[n++] = 0xC0;                     // xor eax,eax
    cave[n++] = 0xE9;
    *(DWORD*)(cave + n) = (g_base + RVA_TECH_COMPARE_NULLCHECK_EPILOGUE) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[12];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)cave - ((DWORD)hook + 5);
    for (int i = 5; i < 12; ++i)
        patch[i] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("TechCompareNullCheck: установлен на rva %06X, пещера %08X",
        RVA_TECH_COMPARE_NULLCHECK_HOOK, (DWORD)(DWORD_PTR)cave);
    return true;
}


// ---------------------------------------------------------------
// Третий краш той же природы (av_read=0x00000310), новый rva - лог
// v2dll_crash.log (dll=3.23). FUN_007adb70 строит список папок
// технологий для окна; для каждого изобретения в папке ищет элемент
// "folder_icon" и берёт его иконку из ТОЙ ЖЕ цепочки status(+0x430)
// -> +0x310 -> +0x40 (см. PATCH_TECH_COMPARE_NULL_CHECK выше - тот
// же source-объект, другое место чтения), снова без проверки на null:
//   mov ecx,[ecx+0x430]   ; статус изобретения для текущей страны
//   mov ecx,[ecx+0x310]   ; rva 0x3ADE9E - краш, если предыдущий null
//   mov ecx,[ecx+0x40]    ; сюда тоже можно упасть, если этот null
//   ...
//   push ecx              ; результат - char* с именем иконки
//   call ...              ; передаётся в SetIcon-подобный вызов
//
// Патчим весь блок из трёх чтений (rva 0x3ADE98, 15 байт). Если
// любое из двух промежуточных значений (после +0x430 или после
// +0x310) равно 0 - подставляем указатель на статическую пустую
// C-строку вместо чтения по несуществующему адресу (пустая строка,
// а не 0/null, потому что нельзя утверждать, что вызываемый ниже
// сеттер иконки сам защищён от null - есть все основания полагать,
// что нет, раз соседний код в этой же функции падал без проверки).
// Иначе - воспроизводим все три чтения как есть.
// ---------------------------------------------------------------

static const char g_emptyTechIconName[1] = { 0 };

static const DWORD RVA_TECH_FOLDER_ICON_NULLCHECK_HOOK   = 0x3ADE98;
static const DWORD RVA_TECH_FOLDER_ICON_NULLCHECK_NORMAL = 0x3ADEA7;  // mov edx,[eax]

static const unsigned char TECH_FOLDER_ICON_NULLCHECK_SIG[15] =
{
    0x8B, 0x89, 0x30, 0x04, 0x00, 0x00,   // mov ecx,[ecx+0x430]
    0x8B, 0x89, 0x10, 0x03, 0x00, 0x00,   // mov ecx,[ecx+0x310]
    0x8B, 0x49, 0x40                      // mov ecx,[ecx+0x40]
};

static bool InstallTechFolderIconNullCheck()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_TECH_FOLDER_ICON_NULLCHECK_HOOK);

    if (memcmp(hook, TECH_FOLDER_ICON_NULLCHECK_SIG, sizeof(TECH_FOLDER_ICON_NULLCHECK_SIG)) != 0)
    {
        Log("TechFolderIconNullCheck: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 96, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    // ECX на входе - сам объект изобретения (ещё не статус) - EAX
    // должен остаться нетронутым до самого конца (в нём "this" для
    // вызова ниже по коду), а вот EDX здесь свободен вплоть до
    // RVA_NORMAL (там он перезаписывается заново) - используем его,
    // чтобы не потерять исходный указатель на изобретение для
    // диагностики, раз ECX сейчас будет затёрт цепочкой +0x430/+0x310.
    cave[n++] = 0x8B; cave[n++] = 0xD1;                     // mov edx,ecx

    // mov ecx,[ecx+0x430]
    cave[n++] = 0x8B; cave[n++] = 0x89;
    cave[n++] = 0x30; cave[n++] = 0x04; cave[n++] = 0x00; cave[n++] = 0x00;

    cave[n++] = 0x85; cave[n++] = 0xC9;                     // test ecx,ecx
    int jz1At = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz null_case

    // mov ecx,[ecx+0x310]
    cave[n++] = 0x8B; cave[n++] = 0x89;
    cave[n++] = 0x10; cave[n++] = 0x03; cave[n++] = 0x00; cave[n++] = 0x00;

    cave[n++] = 0x85; cave[n++] = 0xC9;                     // test ecx,ecx
    int jz2At = n;
    cave[n++] = 0x74; cave[n++] = 0x00;                     // jz null_case

    // mov ecx,[ecx+0x40]
    cave[n++] = 0x8B; cave[n++] = 0x49; cave[n++] = 0x40;

    cave[n++] = 0xE9;                                       // jmp обратно (нормальный путь)
    *(DWORD*)(cave + n) = (g_base + RVA_TECH_FOLDER_ICON_NULLCHECK_NORMAL) - (DWORD)(cave + n + 4);
    n += 4;

    int nullAt = n;
    cave[jz1At + 1] = (unsigned char)(nullAt - (jz1At + 2));
    cave[jz2At + 1] = (unsigned char)(nullAt - (jz2At + 2));

    // Статус отсутствует - логируем изобретение (EDX, сохранённое выше)
    // и подставляем адрес пустой C-строки вместо чтения по
    // несуществующему адресу. EAX трогать нельзя (нужен дальше), ECX
    // свободен для механики вызова.
    cave[n++] = 0x52;                                       // push edx (invention ptr)
    cave[n++] = 0x68;                                       // push imm32 (site string)
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)g_siteTechFolderIcon;
    n += 4;
    cave[n++] = 0xB9;                                       // mov ecx, imm32
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)&LogNullDiagTechObj;
    n += 4;
    cave[n++] = 0xFF; cave[n++] = 0xD1;                     // call ecx
    cave[n++] = 0x83; cave[n++] = 0xC4; cave[n++] = 0x08;   // add esp,8

    cave[n++] = 0xB9;                                       // mov ecx, imm32
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)g_emptyTechIconName;
    n += 4;
    cave[n++] = 0xE9;
    *(DWORD*)(cave + n) = (g_base + RVA_TECH_FOLDER_ICON_NULLCHECK_NORMAL) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[15];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)cave - ((DWORD)hook + 5);
    for (int i = 5; i < 15; ++i)
        patch[i] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("TechFolderIconNullCheck: установлен на rva %06X, пещера %08X",
        RVA_TECH_FOLDER_ICON_NULLCHECK_HOOK, (DWORD)(DWORD_PTR)cave);
    return true;
}





// ---------------------------------------------------------------
// Диагностика OOS: даты первого расхождения и число дней с первого
// "настоящего" OOS - для строк SYNC/OOS в Logs\v2dll_oos.log и для
// краш-лога.
// ---------------------------------------------------------------
static int  g_lastDateRaw = 0;
static int  g_firstOosRaw = 0;
static char g_firstOosBuf[32] = "-";
static int  g_firstRealOosRaw = 0;
static char g_firstRealOosBuf[32] = "-";

static void LogOosFile(const char* fmt, ...);

static int DaysSinceFirstRealOos()
{
    if (!g_firstRealOosRaw || !g_lastDateRaw)
        return -1;
    int d = (g_lastDateRaw - g_firstRealOosRaw) / 24;
    return d < 0 ? 0 : d;
}

static void RememberSessionClock(int raw, const char* buf)
{
    if (!raw || !buf || !buf[0])
        return;
    g_lastDateRaw = raw;
}

static void FormatOosDiag(char* buf, size_t cap)
{
    sprintf_s(buf, cap, "first_oos=%s first_real=%s days_real=%d",
        g_firstOosBuf, g_firstRealOosBuf, DaysSinceFirstRealOos());
}


// ---------------------------------------------------------------
// Переполнение буфера точек графика (0xc0000409 - сработала
// GS-канарейка стека - сразу за ним 0xc0000005 по тому же адресу).
//
// FUN_009e0ef0 - отрисовка графика истории (открывается вместе с
// окном бюджета). Для каждого сегмента истории код пишет ровно
// [ESI] точек подряд в фиксированный локальный буфер, без проверки
// [ESI] против вместимости буфера. Если у какого-то сегмента число
// точек аномально велико (экономические значения ломают счётчик
// записей истории - пользователь видел уходящие в минус числа
// пошлин перед крахом), запись уходит за пределы буфера и разносит
// стек.
//
// Патчим ровно точку первого чтения счётчика (rva 0x5E0FD6, 13
// байт - перекрывает cmp dword[esi],1; mov [esp+0x20],esi; jl
// rva 0x5E1159). Перед этим сравнением ограничиваем сам счётчик
// в записи (dword [esi]) сверху безопасным значением GRAPH_CLAMP_MAX
// - это временный UI-буфer графика, пересобираемый при каждом
// обновлении окна, поэтому обрезка не влияет на реальную
// экономическую статистику. Дальше воспроизводим оригинальные
// cmp/mov/jl без изменений - работают уже с обрезанным значением.
//
// ВАЖНО (версия 2.54 всё равно упала с этим же клампом=150):
// точный расчёт вместимости буфера по кадру стека функции -
// SUB ESP,0x9BC в прологе, буфер начинается с ESP+0x90 (первая
// запись пишет [ESI-4]..[ESI+0xB]), 3 push (EBX/ESI/EDI, 0xC байт)
// уже вычтены из ESP до этого места. По 0x10 байт на точку
// безопасный максимум = ((0x9BC-0xC) - 0x90) / 0x10 = 147 точек -
// значение 150 переполняет буфер ровно на столько, чтобы
// затереть сохранённый EBP/адрес возврата/параметры вызывающей
// функции (ровно это и дало крах в MOV ECX,[EAX] на rva 5E1137,
// где EAX = испорченный [EBP+0xC]). Взял 100 - заметный запас
// от математического предела 147 на случай неточности в ручном
// разборе кадра (выравнивание AND ESP,0xFFFFFFF8 даёт до 7 байт
// неопределённости).
// ---------------------------------------------------------------

static const DWORD RVA_GRAPH_CLAMP_HOOK   = 0x5E0FD6;
static const DWORD RVA_GRAPH_CLAMP_NORMAL = 0x5E0FE3;  // lea ecx,[esi+4]
static const DWORD RVA_GRAPH_CLAMP_SKIP   = 0x5E1159;  // dec dword ptr[esp+0x28] (следующий сегмент)
static const int   GRAPH_CLAMP_MAX = 100;

static const unsigned char GRAPH_CLAMP_SIG[13] =
{
    0x83, 0x3E, 0x01,                   // cmp dword ptr[esi],1
    0x89, 0x74, 0x24, 0x20,             // mov [esp+0x20],esi
    0x0F, 0x8C, 0x76, 0x01, 0x00, 0x00  // jl rva 0x5E1159
};

static bool InstallGraphPointClamp()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_GRAPH_CLAMP_HOOK);

    if (memcmp(hook, GRAPH_CLAMP_SIG, sizeof(GRAPH_CLAMP_SIG)) != 0)
    {
        Log("GraphPointClamp: сигнатура не совпала - не патчим");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 48, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    cave[n++] = 0x81; cave[n++] = 0x3E;                     // cmp dword ptr[esi], GRAPH_CLAMP_MAX
    *(DWORD*)(cave + n) = (DWORD)GRAPH_CLAMP_MAX; n += 4;

    int jleAt = n;
    cave[n++] = 0x7E; cave[n++] = 0x00;                     // jle skip_clamp (адрес допишем ниже)

    cave[n++] = 0xC7; cave[n++] = 0x06;                     // mov dword ptr[esi], GRAPH_CLAMP_MAX
    *(DWORD*)(cave + n) = (DWORD)GRAPH_CLAMP_MAX; n += 4;

    int skipClampAt = n;
    cave[jleAt + 1] = (unsigned char)(skipClampAt - (jleAt + 2));

    // Воспроизводим перекрытые байты - теперь со значением,
    // ограниченным сверху GRAPH_CLAMP_MAX.
    cave[n++] = 0x83; cave[n++] = 0x3E; cave[n++] = 0x01;   // cmp dword ptr[esi],1
    cave[n++] = 0x89; cave[n++] = 0x74; cave[n++] = 0x24; cave[n++] = 0x20;  // mov [esp+0x20],esi

    int jgeAt = n;
    cave[n++] = 0x7D; cave[n++] = 0x00;                     // jge continue (адрес допишем ниже)

    cave[n++] = 0xE9;                                       // jmp far_skip (rva GRAPH_CLAMP_SKIP)
    *(DWORD*)(cave + n) = (g_base + RVA_GRAPH_CLAMP_SKIP) - (DWORD)(cave + n + 4);
    n += 4;

    int continueAt = n;
    cave[jgeAt + 1] = (unsigned char)(continueAt - (jgeAt + 2));

    cave[n++] = 0xE9;                                       // jmp far_resume (rva GRAPH_CLAMP_NORMAL)
    *(DWORD*)(cave + n) = (g_base + RVA_GRAPH_CLAMP_NORMAL) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[13];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)cave - ((DWORD)hook + 5);
    for (int i = 5; i < 13; ++i)
        patch[i] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("GraphPointClamp: установлен на rva %06X, максимум %d точек, пещера %08X",
        RVA_GRAPH_CLAMP_HOOK, GRAPH_CLAMP_MAX, (DWORD)(DWORD_PTR)cave);
    return true;
}


// ---------------------------------------------------------------
// Диагностика краха экономики (временно, по запросу пользователя):
// живой дамп памяти state_building для regular_clothes_factory и
// canned_food_factory у России. У России именно эти два экземпляра
// фабрик уходят в аномальные money/pops_paychecks/last_income -
// цель дампа поймать момент/причину срыва по живым числам.
//
// Первая версия (2.53) вешала хук на FUN_004d04b0 ("можно ли
// построить этот тип здесь") - за время игры (сейв Proebali.v2,
// ~26 игровых дней от прошлого сейва) хук НИ РАЗУ не сработал.
// Разобрались почему: все 3 вызывающих места FUN_004d04b0 - это
// либо построение текста подсказки "почему нельзя строить"
// (FUN_0052ca30/FUN_0052cac0/FUN_00858670), либо ИИ, выбирающий,
// где построить новую фабрику (FUN_00857530/xref FUN_00858670) -
// а Россия в этом сейве под игроком (player="RUS"), так что ИИ её
// штаты вообще не оценивает, а нужные окна подсказок игрок не
// держал открытыми. Функция ежедневного пересчёта денег фабрики
// отдельная и не найдена (попытка через таблицу имён полей сейва
// FUN_00c381c0 второй раз подтвердила тупик - это просто регистрация
// имя<->индекс для сериализации, без офсетов/указателей на поля).
//
// Поэтому вместо хука - фоновый поток, который сам сканирует
// закоммиченную приватную (кучу) память процесса в поисках указателя
// на production_type с нужным именем (тот же struct-layout, что и
// раньше: node+0x18 = указатель на тип, имя лежит по OFF_PRODTYPE_NAME
// внутри объекта типа) - никакой зависимости от того, какая именно
// игровая функция и когда обращается к узлу. Найденные узлы дальше
// просто перечитываются раз в TRACK_INTERVAL_MS без нового скана.
// ---------------------------------------------------------------
static const char* const FACTORY_DUMP_NAMES[] = { "regular_clothes_factory", "canned_food_factory" };
static const int FACTORY_DUMP_NAME_COUNT = sizeof(FACTORY_DUMP_NAMES) / sizeof(FACTORY_DUMP_NAMES[0]);
static const int FACTORY_DUMP_MAX_NODES = 8;
static const int FACTORY_DUMP_RANGE = 0x300;
static const DWORD FACTORY_SCAN_INTERVAL_MS = 30000;  // полный скан памяти, пока не набрали узлов
static const DWORD FACTORY_TRACK_INTERVAL_MS = 5000;  // лёгкий перечит уже найденных узлов
static const DWORD FACTORY_RESCAN_INTERVAL_MS = 300000; // повторный полный скан на случай новых/пропавших фабрик

static void* g_factoryNodes[FACTORY_DUMP_MAX_NODES] = { 0 };
static char  g_factoryNodeNames[FACTORY_DUMP_MAX_NODES][64];
static int   g_factoryNodeCount = 0;
static HANDLE g_factoryScanThread = 0;

// Читает имя типа по typePtr+OFF_PRODTYPE_NAME с проверкой на
// печатность (иначе это почти наверняка не production_type, а
// случайное совпадение битов). Сам вызов защищён SEH снаружи.
static bool ReadPlausibleTypeName(void* typePtr, char* outName, int outSize)
{
    if (!typePtr)
        return false;
    // v2game.exe собран с LARGE_ADDRESS_AWARE - под WOW64 куча может
    // легитимно лежать выше 2 ГБ, поэтому верхняя граница почти у
    // самого потолка 32-битного адресного пространства, а не 0x7FFE0000.
    UINT_PTR tv = (UINT_PTR)typePtr;
    if (tv < 0x10000 || tv > 0xFFFE0000)
        return false;

    const char* src = (const char*)typePtr + OFF_PRODTYPE_NAME;
    int i = 0;
    for (; i < outSize - 1; ++i)
    {
        char c = src[i];
        if (c == 0)
            break;
        if ((unsigned char)c < 0x20 || (unsigned char)c > 0x7e)
            return false;
        outName[i] = c;
    }
    if (i == 0 || i >= outSize - 1)
        return false;
    outName[i] = 0;
    return true;
}

static bool __cdecl SafeCheckTypeName(void* typePtr, char* outName, int outSize)
{
    __try
    {
        return ReadPlausibleTypeName(typePtr, outName, outSize);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void DumpFactoryNodeNow(void* node, const char* typeName)
{
    char line[4096];
    int len = sprintf_s(line, sizeof(line), "FactoryDump node=%08X type=%s:",
        (unsigned)(DWORD_PTR)node, typeName);
    if (len < 0)
        return;

    __try
    {
        for (int off = 0; off < FACTORY_DUMP_RANGE; off += 8)
        {
            if (len >= (int)sizeof(line) - 64)
                break;
            double v = *(double*)((char*)node + off);
            // %e - см. комментарий в DumpAnomalyContext: %.3f на
            // экстремальном double разворачивается в сотни символов и
            // может увести sprintf_s в отказ (-1), а слепое накопление
            // len += -1 через несколько итераций уводит len в минус и
            // запись начинает бить перед началом buffer - это и поймал
            // /GS. Останавливаемся на первой же неудаче, не гадаем.
            int written = sprintf_s(line + len, sizeof(line) - len, " %03X=%.3e", off, v);
            if (written < 0)
                break;
            len += written;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (len >= 0 && len < (int)sizeof(line) - 32)
            sprintf_s(line + len, sizeof(line) - len, " <читать дальше нельзя>");
    }

    Log("%s", line);
}

// Диапазон "подозрительно больших" денежных значений: сломанные
// фабрики в сейве показывали money/pops_paychecks/last_income
// порядка -1.0e8..+1.2e8 - берём диапазон с запасом, но заведомо
// выше любых нормальных чисел экономики отдельной фабрики.
static const double FACTORY_ANOMALY_MIN = 1000000.0;
static const double FACTORY_ANOMALY_MAX = 1.0e9;
static const int FACTORY_ANOMALY_MAX_HITS = 25;

// Дамп окна ВОКРУГ найденного аномального числа (а не от начала
// узла, как DumpFactoryNodeNow - тут мы не знаем, с какого смещения
// начинается сам объект, поэтому смотрим и назад, и вперёд).
static void DumpAnomalyContext(void* addr)
{
    char line[4096];
    int len = sprintf_s(line, sizeof(line), "FactoryScan-anomaly addr=%08X:", (unsigned)(DWORD_PTR)addr);
    if (len < 0)
        return;

    __try
    {
        for (int off = -0x40; off < FACTORY_DUMP_RANGE; off += 8)
        {
            if (len >= (int)sizeof(line) - 64)
                break;
            double v = *(double*)((char*)addr + off);
            // %e вместо %f: ширина результата ограничена независимо от
            // величины числа. Окно вокруг addr - произвольные соседние
            // байты кучи, НЕ проверенная структура (в отличие от
            // DumpFactoryNodeNow) - среди них может попасться дикий
            // битовый паттерн около DBL_MAX, а %.3f на таком разворачивает
            // ~300-значную строку. Именно это один раз увело sprintf_s в
            // отказ (-1), после чего len += -1 несколько раз подряд ушёл
            // в минус и запись сама начала бить перед началом buffer -
            // ровно то, что поймал /GS. Сейчас же ещё и не суммируем
            // отрицательный результат вслепую - на первой же неудаче
            // просто останавливаемся.
            int written = sprintf_s(line + len, sizeof(line) - len, " %04X=%.3e", off & 0xFFFF, v);
            if (written < 0)
                break;
            len += written;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (len >= 0 && len < (int)sizeof(line) - 32)
            sprintf_s(line + len, sizeof(line) - len, " <дальше нельзя>");
    }

    Log("%s", line);
}

static void RegisterFoundNode(void* node, const char* typeName)
{
    for (int i = 0; i < g_factoryNodeCount; ++i)
        if (g_factoryNodes[i] == node)
            return;
    if (g_factoryNodeCount >= FACTORY_DUMP_MAX_NODES)
        return;

    int slot = g_factoryNodeCount++;
    g_factoryNodes[slot] = node;
    strcpy_s(g_factoryNodeNames[slot], typeName);
    LogDbg("FactoryScan: найден узел node=%08X type=%s (всего найдено %d)",
        (unsigned)(DWORD_PTR)node, typeName, g_factoryNodeCount);
    DumpFactoryNodeNow(node, typeName);
}

// Индекс читаемых регионов (любой committed+readable, не только
// MEM_PRIVATE - в отличие от основного скана ниже, сюда попадает и
// .data/.rdata и т.п., т.к. кандидат-указатель на production_type
// в принципе может указывать куда угодно). Нужен, чтобы НЕ ловить
// исключение на каждом мусорном "похожем на указатель" 4-байтовом
// значении - сама обработка access violation на порядок дороже
// самого сравнения диапазонов. VirtualQuery отдаёт регионы строго
// по возрастанию адреса, поэтому можно сразу бинарным поиском.
static const int FACTORY_SCAN_MAX_RANGES = 8192;
struct AddrRange { UINT_PTR start, end; };
static AddrRange g_readableRanges[FACTORY_SCAN_MAX_RANGES];
static int g_readableRangeCount = 0;

static void BuildReadableRangeIndex()
{
    g_readableRangeCount = 0;
    MEMORY_BASIC_INFORMATION mbi;
    BYTE* addr = 0;

    while (VirtualQuery(addr, &mbi, sizeof(mbi)) == sizeof(mbi))
    {
        BYTE* regionEnd = (BYTE*)mbi.BaseAddress + mbi.RegionSize;

        bool readable = (mbi.State == MEM_COMMIT)
            && (mbi.Protect & (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY
                | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)) != 0
            && (mbi.Protect & PAGE_GUARD) == 0;

        if (readable && g_readableRangeCount < FACTORY_SCAN_MAX_RANGES)
        {
            g_readableRanges[g_readableRangeCount].start = (UINT_PTR)mbi.BaseAddress;
            g_readableRanges[g_readableRangeCount].end = (UINT_PTR)regionEnd;
            g_readableRangeCount++;
        }

        if (regionEnd <= addr)
            break;
        addr = regionEnd;
    }
}

// Бинарный поиск: лежит ли [start, start+len) целиком в одном уже
// проверенном читаемом регионе.
static bool IsRangeReadable(UINT_PTR start, UINT_PTR len)
{
    UINT_PTR endAddr = start + len;
    int lo = 0, hi = g_readableRangeCount - 1, found = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (g_readableRanges[mid].start <= start) { found = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    if (found < 0)
        return false;
    return g_readableRanges[found].end >= endAddr;
}

// Полный скан приватной read/write памяти процесса. Каждый регион
// защищён одним SEH-блоком (страница могла исчезнуть за время скана
// из-за параллельной работы игры) - это дешевле, чем оборачивать
// каждое 4-байтовое чтение отдельно, а сами чтения внутри региона
// не выходят за его проверенные границы. Кандидат-указатель сначала
// проверяется по индексу читаемых регионов (IsRangeReadable) - это
// быстрое сравнение чисел без обращения к памяти - и только если он
// проходит, читаем его (ещё раз под SEH - индекс мог устареть за
// время скана, но это уже редкий случай, а не почти каждый кандидат).
static void FullMemoryScan()
{
    DWORD startTick = GetTickCount();
    BuildReadableRangeIndex();
    Log("FactoryScan: индекс читаемых регионов построен (%d%s), начинаю скан...",
        g_readableRangeCount,
        g_readableRangeCount >= FACTORY_SCAN_MAX_RANGES ? " - ДОСТИГНУТ ЛИМИТ, часть регионов пропущена" : "");

    MEMORY_BASIC_INFORMATION mbi;
    BYTE* addr = 0;

    // Диагностика (временно): считаем совпадения по ВСЕМ известным
    // именам типов производства (g_productionTypeNames, все 65 - не
    // только наши 2 целевых), чтобы понять, работает ли сам механизм
    // поиска в принципе, или дело именно в этих двух фабриках.
    //
    // ВАЖНО: регионы для СКАНИРОВАНИЯ (не индекс читаемости - тот
    // по-прежнему смотрит всё) снова ограничены MEM_PRIVATE. В 2.58
    // это ограничение снималось "на всякий случай", и практически
    // сразу после этого пользователь получил "Failed to create a
    // graphics device" при запуске игры - с MEM_PRIVATE-only (версии
    // 2.55-2.57) такого не было ни разу за несколько прогонов. Точный
    // механизм не доказан (вероятно, что-то вроде guard-страниц/
    // внутренней сигнализации видеодрайвера в его MEM_MAPPED/MEM_IMAGE
    // данных, потревоженное чтением из чужого потока), но раз риск
    // подтверждён эмпirически - за пределы кучи процесса не выходим.
    int diagAnyMatches = 0;
    char diagExamples[5][64];
    int diagExampleCount = 0;
    int anomalyHits = 0;

    while (VirtualQuery(addr, &mbi, sizeof(mbi)) == sizeof(mbi))
    {
        BYTE* regionEnd = (BYTE*)mbi.BaseAddress + mbi.RegionSize;

        bool scannable = (mbi.State == MEM_COMMIT)
            && (mbi.Type == MEM_PRIVATE)
            && (mbi.Protect & (PAGE_READWRITE | PAGE_WRITECOPY)) != 0
            && (mbi.Protect & PAGE_GUARD) == 0;

        if (scannable)
        {
            __try
            {
                BYTE* p = (BYTE*)mbi.BaseAddress;
                BYTE* end = regionEnd - sizeof(void*);
                for (; p < end; p += 4)
                {
                    if (anomalyHits < FACTORY_ANOMALY_MAX_HITS && p + 8 <= regionEnd)
                    {
                        double v = *(double*)p;
                        double av = v < 0 ? -v : v;
                        if (av >= FACTORY_ANOMALY_MIN && av <= FACTORY_ANOMALY_MAX)
                        {
                            anomalyHits++;
                            DumpAnomalyContext(p);
                        }
                    }

                    void* candidate = *(void**)p;
                    UINT_PTR cv = (UINT_PTR)candidate;
                    if (cv < 0x10000 || cv > 0xFFFE0000)
                        continue;
                    if (!IsRangeReadable(cv + OFF_PRODTYPE_NAME, 64))
                        continue;

                    char name[64];
                    if (!SafeCheckTypeName(candidate, name, sizeof(name)))
                        continue;

                    bool anyTypeMatch = false;
                    for (int t = 0; t < g_productionTypeCount; ++t)
                        if (strcmp(g_productionTypeNames[t], name) == 0) { anyTypeMatch = true; break; }
                    if (anyTypeMatch)
                    {
                        diagAnyMatches++;
                        if (diagExampleCount < 5)
                        {
                            strcpy_s(diagExamples[diagExampleCount], name);
                            diagExampleCount++;
                        }
                    }

                    bool match = false;
                    for (int i = 0; i < FACTORY_DUMP_NAME_COUNT; ++i)
                        if (strcmp(FACTORY_DUMP_NAMES[i], name) == 0) { match = true; break; }
                    if (!match)
                        continue;

                    void* node = p - 0x18;
                    RegisterFoundNode(node, name);
                    if (g_factoryNodeCount >= FACTORY_DUMP_MAX_NODES)
                        break;
                }
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                // регион пропал/перезащитился посреди скана - пропускаем его
            }
        }

        if (g_factoryNodeCount >= FACTORY_DUMP_MAX_NODES)
            break;
        if (regionEnd <= addr)
            break;
        addr = regionEnd;
    }

    char examplesLine[400];
    int el = 0;
    examplesLine[0] = 0;
    for (int i = 0; i < diagExampleCount; ++i)
    {
        int written = sprintf_s(examplesLine + el, sizeof(examplesLine) - el, "%s%s", i ? ", " : "", diagExamples[i]);
        if (written < 0)
            break;
        el += written;
    }

    Log("FactoryScan: полный скан завершён за %u мс, узлов всего %d; совпадений по ЛЮБОМУ известному типу производства: %d (примеры: %s); аномальных чисел (%.0f..%.0f): %d",
        GetTickCount() - startTick, g_factoryNodeCount, diagAnyMatches, examplesLine,
        FACTORY_ANOMALY_MIN, FACTORY_ANOMALY_MAX, anomalyHits);
}

static DWORD WINAPI FactoryScanThreadProc(LPVOID)
{
    Sleep(15000); // дать игре загрузиться перед первым сканом

    DWORD lastFullScan = 0;
    for (;;)
    {
        DWORD now = GetTickCount();
        bool needFullScan = (g_factoryNodeCount < FACTORY_DUMP_MAX_NODES)
            ? (now - lastFullScan >= FACTORY_SCAN_INTERVAL_MS)
            : (now - lastFullScan >= FACTORY_RESCAN_INTERVAL_MS);

        if (needFullScan || lastFullScan == 0)
        {
            FullMemoryScan();
            lastFullScan = GetTickCount();
        }
        else
        {
            for (int i = 0; i < g_factoryNodeCount; ++i)
            {
                char name[64];
                if (!SafeCheckTypeName(*(void**)((char*)g_factoryNodes[i] + 0x18), name, sizeof(name)))
                {
                    LogDbg("FactoryScan: узел node=%08X (%s) больше не читается - похоже, снесён",
                        (unsigned)(DWORD_PTR)g_factoryNodes[i], g_factoryNodeNames[i]);
                    continue;
                }
                DumpFactoryNodeNow(g_factoryNodes[i], g_factoryNodeNames[i]);
            }
        }

        Sleep(FACTORY_TRACK_INTERVAL_MS);
    }
    return 0;
}

static bool InstallFactoryDumpScan()
{
    g_factoryScanThread = CreateThread(0, 0, FactoryScanThreadProc, 0, 0, 0);
    if (!g_factoryScanThread)
    {
        Log("FactoryScan: не удалось создать поток");
        return false;
    }
    Log("FactoryScan: поток запущен");
    return true;
}


// ---------------------------------------------------------------
// Установка
// ---------------------------------------------------------------

// Таблицы лежат в .rdata, поэтому запись только со снятием защиты —
// иначе она молча не проходит.
static bool PatchSlot(DWORD rvaVtable, int slotIndex, void* replacement, void** outOriginal)
{
    void** slot = (void**)(g_base + rvaVtable) + slotIndex;

    DWORD oldProtect = 0;
    if (!VirtualProtect(slot, sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    if (outOriginal)
        *outOriginal = *slot;

    *slot = replacement;

    VirtualProtect(slot, sizeof(void*), oldProtect, &oldProtect);
    return true;
}



// ---------------------------------------------------------------
// Общее население в индикаторе верхней панели
//
// Игра хранит в стране по +0x12E8 только взрослое мужское население
// и показывает его в панели как есть. Общее получается умножением
// на 4 — так же делает подсказка TOPBAR_POPULATION_VISUAL, где
// умножение зашито в код инструкцией lea eax,[ebx*4].
//
// Умножаем на выводе, а не у источника: само поле участвует в
// расчётах налогов, призыва и влияния, и трогать его нельзя.
//
// Подсказка "Наше взрослое мужское население сейчас" намеренно не
// правится: там нужно исходное число.
// ---------------------------------------------------------------

static const int POP_MULTIPLIER_SHIFT = 2;   // сдвиг на 2 = умножение на 4

// Места отрисовки. Каждое — чтение поля населения в регистр, сразу
// за которым идёт форматирование числа. Шесть байт чтения меняем на
// переход в пещеру: там читаем, сдвигаем и возвращаемся.
//
// Добавить новое место: найти в Ghidra чтение [reg+0x12E8] рядом с
// подстановкой в текст, вписать RVA и байты. Реестр регистров в
// сигнатуре: 8B 87 = EAX,[EDI]; 8B 81 = EAX,[ECX]; 8B 83 = EAX,[EBX].
//
// Важно: править только отрисовку. Само поле участвует в расчётах
// налогов, призыва и влияния, и трогать его нельзя.
struct PopSite
{
    const char* name;
    DWORD         rva;
    unsigned char sig[6];
    bool          enabled;
};

static PopSite POP_SITES[] =
{
    { "topbar",    0x310A32, { 0x8B, 0x87, 0xE8, 0x12, 0x00, 0x00 }, true },
    { "diplomacy", 0x22880F, { 0x8B, 0x81, 0xE8, 0x12, 0x00, 0x00 }, true },
    { "lobby",     0x36DFBB, { 0x8B, 0x80, 0xE8, 0x12, 0x00, 0x00 }, true },
};

static const int POP_SITE_COUNT = sizeof(POP_SITES) / sizeof(POP_SITES[0]);


static bool InstallPopSite(const PopSite& site)
{
    unsigned char* hook = (unsigned char*)(g_base + site.rva);

    if (memcmp(hook, site.sig, 6) != 0)
    {
        Log("PopDisplay '%s': сигнатура не совпала - не патчим", site.name);
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    // Оригинальное чтение поля — как есть, вместе с регистром.
    memcpy(cave + n, site.sig, 6);
    n += 6;

    // Умножение. Приёмник у всех сигнатур EAX, поэтому сдвигаем его.
    // Флаги никому не нужны: следом идёт push.
    cave[n++] = 0xC1; cave[n++] = 0xE0;
    cave[n++] = (unsigned char)POP_MULTIPLIER_SHIFT;   // shl eax, N

    cave[n++] = 0xE9;                                  // jmp обратно
    *(DWORD*)(cave + n) = (g_base + site.rva + 6) - (DWORD)(cave + n + 4);
    n += 4;

    // Шесть перекрываемых байт: пять под jmp и один nop.
    unsigned char patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)cave - ((DWORD)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("PopDisplay '%s': rva %06X, пещера %08X",
        site.name, site.rva, (DWORD)(DWORD_PTR)cave);
    return true;
}


static void InstallPopDisplay()
{
    Log("PopDisplay: множитель %d", 1 << POP_MULTIPLIER_SHIFT);

    for (int i = 0; i < POP_SITE_COUNT; ++i)
    {
        if (POP_SITES[i].enabled)
            InstallPopSite(POP_SITES[i]);
    }
}




// ---------------------------------------------------------------
// Версия мода в подписи главного меню
//
// Проверено в Cheat Engine на живой памяти (декомпиляция путала
// адреса — между двумя push оказалась ещё mov edi,0xF, а адрес
// строки не совпадал со значением из декомпилятора):
//
//   233826  6A 08                  push 0x8
//   233828  BF 0F 00 00 00         mov edi, 0xF        (не трогаем)
//   23382D  68 4C 76 A0 4C         push адрес "V2 v3.04"
//   233832  8D 4D B0               lea ecx,[ebp-0x50]
//
// Перекрываем все 12 байт (push + mov + push) переходом в пещеру,
// где пушим длину и адрес своей строки, повторяем mov edi,0xF как
// есть — на случай, если он используется дальше по функции — и
// возвращаемся на lea ecx по 233832.
// ---------------------------------------------------------------

static const DWORD RVA_VERLABEL_HOOK = 0x233826;
static const DWORD RVA_VERLABEL_RESUME = 0x233832;

// Первые 8 байт постоянны, дальше идёт push абсолютного адреса —
// его нельзя зашивать константой: это база+RVA, а база меняется
// от ASLR при каждом запуске. Проверяем отдельно, относительно
// текущего g_base.
static const unsigned char VERLABEL_SIG[8] =
{
    0x6A, 0x08,                          // push 0x8
    0xBF, 0x0F, 0x00, 0x00, 0x00,        // mov edi, 0xF
    0x68                                 // push imm32 (адрес — далее)
};

static const DWORD RVA_VERLABEL_ORIG_STR = 0xA0764C;

static char g_versionLabel[128];

static bool InstallVersionLabel()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_VERLABEL_HOOK);

    if (memcmp(hook, VERLABEL_SIG, sizeof(VERLABEL_SIG)) != 0)
    {
        Log("VersionLabel: сигнатура не совпала (%02X %02X %02X %02X %02X %02X %02X %02X) - не патчим",
            hook[0], hook[1], hook[2], hook[3], hook[4], hook[5], hook[6], hook[7]);
        return false;
    }

    DWORD origAddr = *(DWORD*)(hook + 8);
    if (origAddr != g_base + RVA_VERLABEL_ORIG_STR)
    {
        Log("VersionLabel: адрес строки не совпал (%08X, ожидали %08X) - не патчим",
            origAddr, g_base + RVA_VERLABEL_ORIG_STR);
        return false;
    }

    sprintf_s(g_versionLabel, sizeof(g_versionLabel),
        "V2 v3.04 + V2DLL v%s", MOD_VERSION);

    unsigned len = (unsigned)strlen(g_versionLabel);

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 64, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    if (!cave)
        return false;

    int n = 0;

    cave[n++] = 0x68;                                  // push imm32 (длина)
    *(DWORD*)(cave + n) = len; n += 4;

    cave[n++] = 0x68;                                  // push imm32 (адрес)
    *(DWORD*)(cave + n) = (DWORD)(DWORD_PTR)g_versionLabel; n += 4;

    // mov edi, 0xF — повторяем как есть, вдруг используется дальше.
    cave[n++] = 0xBF;
    *(DWORD*)(cave + n) = 0xF; n += 4;

    cave[n++] = 0xE9;                                  // jmp обратно
    *(DWORD*)(cave + n) = (g_base + RVA_VERLABEL_RESUME) - (DWORD)(cave + n + 4);
    n += 4;

    unsigned char patch[12];
    memset(patch, 0x90, sizeof(patch));
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)cave - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("VersionLabel: '%s' (len=%u), пещера %08X",
        g_versionLabel, len, (DWORD)(DWORD_PTR)cave);
    return true;
}


// ---------------------------------------------------------------
// MINTING (ENABLE_MINTING) - новый ежедневный доход каждой страны.
//
// Формула лежит в <папка мода>\common\minting.txt (строка
// "formula = ..."), чтобы у каждого мода была своя и менялась без
// пересборки DLL. Переменные формулы: industry_score (он же
// industrial_score) - промышленный рейтинг страны (int64 с 15 дробными
// битами в +0x198, тот же, что показывает интерфейс и читает триггер
// industrial_score), total_population - население страны (+0x12E8 как
// есть). Любое другое имя - переменная СТРАНЫ из скриптов игры
// (set_variable = { which = ИМЯ ... }): её значение, а если у страны
// такой переменной нет - 0. Переменные лежат в контейнере country+0x1DC
// (vtable 0xDFBB60), поиск по имени - слот 1 (как у триггера
// check_variable, FUN_008DA5C0), значение - int в тысячных на узле+0x1C
// ("5.000" в сейве = 5000). Операторы + - * / и скобки. Результат -
// фунты в день.
//
// Частота: формула (вместе с поиском переменных страны) считается РАЗ В
// ИГРОВОЙ МЕСЯЦ на страну - в дневном тике первого дня месяца, результат
// ("ставка в день") лежит в кэше. Начисление идёт каждый день по кэшу, а
// интерфейс, подсказки и ИИ только читают кэш (промах - до первого тика
// после загрузки - считается без записи). Нулевая ставка не считается
// окончательной и пересчитывается каждый день, пока не станет ненулевой
// (на старте игры переменные скриптов ещё не заданы). Считать ТОЛЬКО в дневном тике
// нужно ради мультиплеера: пересчёт из интерфейса шёл бы в произвольный
// момент и у клиентов расходился бы. Кэш сбрасывается, если время мира
// ушло не на +24 часа (загрузка/новая игра).
//
// Точки в exe:
//  1. Ежедневное начисление. FUN_006859c0 (дневной тик мира) в
//     однопоточном цикле зовёт FUN_005091a0(страна); та вызывает
//     FUN_00538200 (сбор дохода с государственных RGO) через
//     "push ebx; call" на 0x509F74. Подменяем этот call (общий дневной
//     хук CountryDailyThunk, он же у GOODS_CONSUMPTION): прибавляем
//     minting к казне (+0xE78/+0xE7C, int64 с 15 дробными битами)
//     тем же способом, что сама FUN_00538200, и прыгаем в оригинал.
//     (+0xE80 - снимок казны на начало дня, его не трогаем.)
//  2. Сумма дохода во всём интерфейсе считается двумя функциями, и
//     minting прибавляется в обеих - тогда он автоматически попадает
//     в итоги окна бюджета, в график и текст "доход" верхней панели,
//     в подсказки и в расчёты ИИ:
//       FUN_0052b510(EAX=out, EDX=страна) - фактический доход за день
//         (сумма 10 категорий); перед накоплением "out = 0" - пишем
//         туда minting (вход, 19 байт).
//       FUN_0052b610(стек: страна, ставки; ESI=out) - расчётный доход
//         (налоги по ползункам + остальное); перед единственным
//         эпилогом (EBX = страна) прибавляем minting.
//  3. Окно бюджета: слот 6 vftable CBudgetView (0xE059F0) - Update
//     (FUN_005FEDE0, ECX=view, без стековых аргументов). Обёртка
//     зовёт оригинал и пишет текст в textbox "minting_inc" (находится
//     vtable+0x3C контейнера view+0x4C, как все textbox'ы в
//     FUN_00602820; текст - те же два вызова, что у движка:
//     std::string::assign(box+0xDC) и SetText(ESI=[box+0xA0])).
//  5. Подсказка над самим textbox "minting_inc": диспетчер подсказок
//     окна бюджета FUN_00606780 сравнивает элемент под курсором (ESI) с
//     полями окна цепочкой "cmp [edi+off],esi". Перед сравнением gold_inc
//     (0x60A0B8) смотрим имя элемента; если это minting_inc - клон
//     короткой ветки "текст по ключу" (0x607D21) с ключом
//     BUDGET_MINTING_DESC, иначе исходное сравнение.
//  4. Подсказка "Общие доходы" (FUN_0052a080, одна на окно бюджета и
//     верхнюю панель): в начале запоминаем minting страны, а после
//     последней строки категорий (BUDGET_INTERNALLY_SOLD_STOCKPILE,
//     блок 0x52AF06..0x52B0A3) выполняем клон этого блока с ключом
//     BUDGET_MINTING (строка лежит в localisation\TEXT_ALL.csv мода).
//     Клон идёт в том же кадре стека (ebp-относительные локальные),
//     отличается только ключ и значение.
// ---------------------------------------------------------------

static const DWORD RVA_MINT_DAILY_CALL      = 0x109F74;  // call FUN_00538200 внутри FUN_005091a0
static const DWORD RVA_MINT_DAILY_TARGET    = 0x138200;  // FUN_00538200
static const DWORD RVA_BUDGET_VTABLE        = 0xA059F0;  // CBudgetView
static const int   BUDGET_UPDATE_SLOT       = 6;         // 0xE05A08 -> FUN_005FEDE0
static const DWORD RVA_BUDGET_UPDATE_FN     = 0x1FEDE0;
static const DWORD RVA_INCOME_ACT_ENTRY     = 0x12B510;  // FUN_0052b510
static const DWORD RVA_INCOME_ACT_RESUME    = 0x12B523;
static const DWORD RVA_INCOME_PROJ_EPILOGUE = 0x12B769;  // FUN_0052b610: pop edi; mov eax,esi; pop ebx; mov esp,ebp
static const DWORD RVA_INCOME_PROJ_RESUME   = 0x12B76F;  // pop ebp; ret 8
static const DWORD RVA_TIP_STASH_SITE       = 0x12A135;  // FUN_0052a080: mov ecx,[ebp+8]; sub esp,8
static const DWORD RVA_TIP_STASH_RESUME     = 0x12A13B;
static const DWORD RVA_TIP_LINE_SITE        = 0x12B0A3;  // FUN_0052a080: lea edi,[ebp-0xAC]
static const DWORD RVA_TIP_LINE_RESUME      = 0x12B0A9;
static const DWORD RVA_BOX_TIP_SITE         = 0x20A0B8;  // FUN_00606780: cmp [edi+0x16c],esi (gold_inc)
static const DWORD RVA_BOX_TIP_RESUME       = 0x20A0BE;  // jnz 0x60A37F
static const DWORD RVA_BOX_TIP_END          = 0x20B035;  // общий хвост диспетчера подсказок
static const DWORD RVA_FN_STR_FROM_CSTR     = 0x5885D0;  // 0x9885D0 EDX=const char*, ESI=out string
static const DWORD RVA_FN_STR_CLEAR         = 0x8AD0;    // 0x408AD0 ECX=string
static const DWORD RVA_FN_FMT_FREE          = 0x5A9740;  // 0x9A9740 (formatter*), ret 4
static const DWORD RVA_WORLD_PTR            = 0xE588E8;  // DAT_012588e8; +0xB60 = индекс страны игрока

static const DWORD RVA_STR_ASSIGN           = 0x8ED0;    // std::string::assign(const string&, pos, n), thiscall
static const DWORD RVA_TEXT_SETTEXT         = 0x65ECC0;  // SetText(const string&, flag): ESI=this, ret 8
static const DWORD RVA_FN_STR_INIT          = 0x9350;    // 0x409350 string(ptr,len): ECX=this, ret 8
static const DWORD RVA_FN_FMT_FROM_KEY      = 0x5A8EE0;  // 0x9A8EE0 (out*, key string*)
static const DWORD RVA_FN_FMT_NUMBER        = 0x588BB0;  // 0x988BB0 (out string*, precision, int64)
static const DWORD RVA_FN_FMT_REPLACE       = 0x5A9980;  // 0x9A9980 ECX=formatter, ESI=name, stack: value string
static const DWORD RVA_FN_LOC_SINGLETON     = 0x75500;   // 0x475500
static const DWORD RVA_FN_FMT_FINISH        = 0x5A9880;  // 0x9A9880 ECX=formatter, ESI=out string, stack: 16 bytes
static const DWORD RVA_FN_STR_APPEND        = 0x48AA0;   // 0x448AA0 ECX=this, (str*, pos, n)
static const DWORD RVA_FN_STR_APPEND_CHARS  = 0x48740;   // 0x448740 ECX=this, (ptr, len)
static const DWORD RVA_FN_LIST_FREE         = 0x5ADB70;  // 0x9ADB70 EDI=list
static const DWORD RVA_FN_LIST_FREE2        = 0x5E6A80;  // 0x9E6A80
static const DWORD RVA_FN_FREE              = 0x6AE91B;  // 0xAAE91B

static const int OFF_WORLD_TIME             = 0xB0C;     // часы; (t/24)%365 - день года (см. FUN_006859c0)
static const DWORD RVA_MONTH_LENGTHS        = 0xB1027C;  // DAT_00F1027C: 31,28,31,30,... (год из 365 дней)
static const int OFF_COUNTRY_MONEY          = 0xE78;
static const int OFF_COUNTRY_POPULATION     = 0x12E8;
static const int OFF_COUNTRY_VARIABLES      = 0x1DC;     // CVariables (vtable RVA_VARIABLES_VTABLE)
static const DWORD RVA_VARIABLES_VTABLE     = 0x9FBB60;  // VA 0xDFBB60, ставится в конструкторе страны 0x4F6CB5
static const int OFF_VARIABLE_VALUE         = 0x1C;      // int в тысячных на узле, найденном слотом 1
static const int OFF_COUNTRY_INDUSTRY_SCORE = 0x198;     // int64, 15 дробных бит (см. FUN_00530980, CIndustrialScoreTrigger)
static const int OFF_WORLD_PLAYER_INDEX     = 0xB60;
static const int OFF_VIEW_CONTAINER         = 0x4C;
static const int VT_FIND_TEXTBOX            = 0x3C;
static const int OFF_TEXTBOX_STR            = 0xDC;
static const int OFF_TEXTBOX_INNER          = 0xA0;

enum { MN_NUM, MN_VAR, MN_NEG, MN_ADD, MN_SUB, MN_MUL, MN_DIV, MN_CVAR };

struct MintNode
{
    unsigned char op;
    unsigned char var;
    short         a, b;
    double        num;
};

struct MintVarName { const char* name; int index; };
static const MintVarName MINT_VARS[] =
{
    { "industry_score",   0 },
    { "industrial_score", 0 },
    { "total_population", 1 },
};
static const int MINT_VAR_NAMES = sizeof(MINT_VARS) / sizeof(MINT_VARS[0]);
static const int MINT_VAR_COUNT = 2;
static const int MINT_MAX_NODES = 96;
static const int MINT_MAX_CVARS = 8;

static char g_mintCVarNames[MINT_MAX_CVARS][64];
static int  g_mintCVarCount = 0;
static double MintReadCountryVar(void* country, int cvarIndex);

static MintNode    g_mintNodes[MINT_MAX_NODES];
static int         g_mintNodeCount = 0;
static int         g_mintRoot = -1;
static bool        g_mintReady = false;
static const char* g_mintCur = 0;
static bool        g_mintErr = false;
static char        g_mintFormulaText[256];

static int MintNew(unsigned char op, int a, int b, double num, int var)
{
    if (g_mintNodeCount >= MINT_MAX_NODES)
    {
        g_mintErr = true;
        return -1;
    }
    MintNode& n = g_mintNodes[g_mintNodeCount];
    n.op = op;
    n.var = (unsigned char)var;
    n.a = (short)a;
    n.b = (short)b;
    n.num = num;
    return g_mintNodeCount++;
}

static void MintSkipWs()
{
    while (*g_mintCur == ' ' || *g_mintCur == '\t')
        ++g_mintCur;
}

static int MintParseExpr();

// Число разбираем сами: strtod зависит от локали процесса (запятая).
static int MintParsePrimary()
{
    MintSkipWs();
    char c = *g_mintCur;

    if (c == '(')
    {
        ++g_mintCur;
        int e = MintParseExpr();
        MintSkipWs();
        if (*g_mintCur != ')')
        {
            g_mintErr = true;
            return -1;
        }
        ++g_mintCur;
        return e;
    }

    if (c == '-')
    {
        ++g_mintCur;
        int e = MintParsePrimary();
        if (e < 0)
            return -1;
        return MintNew(MN_NEG, e, -1, 0.0, 0);
    }

    if ((c >= '0' && c <= '9') || c == '.')
    {
        double v = 0.0;
        while (*g_mintCur >= '0' && *g_mintCur <= '9')
            v = v * 10.0 + (*g_mintCur++ - '0');
        if (*g_mintCur == '.')
        {
            ++g_mintCur;
            double scale = 0.1;
            while (*g_mintCur >= '0' && *g_mintCur <= '9')
            {
                v += (*g_mintCur++ - '0') * scale;
                scale *= 0.1;
            }
        }
        return MintNew(MN_NUM, -1, -1, v, 0);
    }

    if (isalpha((unsigned char)c) || c == '_')
    {
        char name[64];
        int n = 0;
        while (IsIdentChar(*g_mintCur) && n < (int)sizeof(name) - 1)
            name[n++] = *g_mintCur++;
        name[n] = 0;

        for (int i = 0; i < MINT_VAR_NAMES; ++i)
        {
            if (_stricmp(name, MINT_VARS[i].name) == 0)
                return MintNew(MN_VAR, -1, -1, 0.0, MINT_VARS[i].index);
        }
        for (int i = 0; i < g_mintCVarCount; ++i)
        {
            if (_stricmp(name, g_mintCVarNames[i]) == 0)
                return MintNew(MN_CVAR, -1, -1, 0.0, i);
        }
        if (g_mintCVarCount >= MINT_MAX_CVARS)
        {
            g_mintErr = true;
            return -1;
        }
        strcpy_s(g_mintCVarNames[g_mintCVarCount], sizeof(g_mintCVarNames[0]), name);
        return MintNew(MN_CVAR, -1, -1, 0.0, g_mintCVarCount++);
    }

    g_mintErr = true;
    return -1;
}

static int MintParseTerm()
{
    int l = MintParsePrimary();
    for (;;)
    {
        MintSkipWs();
        char c = *g_mintCur;
        if (l < 0 || (c != '*' && c != '/'))
            return l;
        ++g_mintCur;
        int r = MintParsePrimary();
        if (r < 0)
            return -1;
        l = MintNew(c == '*' ? MN_MUL : MN_DIV, l, r, 0.0, 0);
    }
}

static int MintParseExpr()
{
    int l = MintParseTerm();
    for (;;)
    {
        MintSkipWs();
        char c = *g_mintCur;
        if (l < 0 || (c != '+' && c != '-'))
            return l;
        ++g_mintCur;
        int r = MintParseTerm();
        if (r < 0)
            return -1;
        l = MintNew(c == '+' ? MN_ADD : MN_SUB, l, r, 0.0, 0);
    }
}

static double MintEval(int n, const double* vars, void* country)
{
    const MintNode& m = g_mintNodes[n];
    switch (m.op)
    {
    case MN_NUM: return m.num;
    case MN_VAR: return vars[m.var];
    case MN_CVAR: return MintReadCountryVar(country, m.var);
    case MN_NEG: return -MintEval(m.a, vars, country);
    case MN_ADD: return MintEval(m.a, vars, country) + MintEval(m.b, vars, country);
    case MN_SUB: return MintEval(m.a, vars, country) - MintEval(m.b, vars, country);
    case MN_MUL: return MintEval(m.a, vars, country) * MintEval(m.b, vars, country);
    case MN_DIV:
    {
        double d = MintEval(m.b, vars, country);
        return d == 0.0 ? 0.0 : MintEval(m.a, vars, country) / d;
    }
    }
    return 0.0;
}

// double -> int64 с 15 дробными битами без x87 (fistp/__ftol2): исход
// одинаков на всех машинах. Предел +-4e15 держит значение в пределах
// точного целого double (2^52).
static long long MintToFixed(double v)
{
    if (!(v == v))
        return 0;

    double s = v * 32768.0;
    if (s > 4.0e15)  s = 4.0e15;
    if (s < -4.0e15) s = -4.0e15;

    unsigned long long bits;
    memcpy(&bits, &s, sizeof(bits));
    int e = (int)((bits >> 52) & 0x7FF) - 1023;
    if (e < 0)
        return 0;

    unsigned long long mant = (bits & 0xFFFFFFFFFFFFFULL) | (1ULL << 52);
    long long r = (long long)(mant >> (52 - e));
    return (bits >> 63) ? -r : r;
}

__declspec(noinline) static long long __cdecl MintingComputeFixed(void* country)
{
    if (!g_mintReady || !country)
        return 0;

    __try
    {
        double vars[MINT_VAR_COUNT];
        unsigned scoreLo = *(unsigned*)((char*)country + OFF_COUNTRY_INDUSTRY_SCORE);
        int      scoreHi = *(int*)((char*)country + OFF_COUNTRY_INDUSTRY_SCORE + 4);
        vars[0] = ((double)scoreHi * 4294967296.0 + (double)scoreLo) / 32768.0;
        vars[1] = (double)*(int*)((char*)country + OFF_COUNTRY_POPULATION);
        return MintToFixed(MintEval(g_mintRoot, vars, country));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

typedef void* (__fastcall* tFindVariable)(void* self, void* edx, const void* name);

// Кэш ставки: по одной записи на страну (открытая адресация по указателю).
struct MintSlot { void* country; int month; long long value; };
static const int MINT_SLOTS = 1024;
static MintSlot g_mintSlots[MINT_SLOTS];
static int  g_mintLastHours = 0;
static bool g_mintTimeKnown = false;
static LONG g_mintMonthLogged = 0;

static MintSlot* MintFindSlot(void* country, bool create)
{
    unsigned h = ((unsigned)(DWORD_PTR)country >> 4) * 2654435761u;
    for (int i = 0; i < MINT_SLOTS; ++i)
    {
        MintSlot& sl = g_mintSlots[(h + i) & (MINT_SLOTS - 1)];
        if (sl.country == country)
            return &sl;
        if (!sl.country)
        {
            if (!create)
                return 0;
            sl.country = country;
            sl.month = -2;
            sl.value = 0;
            return &sl;
        }
    }
    return 0;
}

// Часы мира и номер игрового месяца (год*12 + месяц, год из 365 дней).
static bool MintingTimeNow(int* hours, int* monthKey)
{
    __try
    {
        void* world = *(void**)(g_base + RVA_WORLD_PTR);
        if (!world)
            return false;
        int t = *(int*)((char*)world + OFF_WORLD_TIME);
        if (t <= 0)
            return false;
        int days = t / 24;
        int doy = days % 365;
        const int* len = (const int*)(g_base + RVA_MONTH_LENGTHS);
        int m = 0;
        while (m < 11 && doy >= len[m])
        {
            doy -= len[m];
            ++m;
        }
        *hours = t;
        *monthKey = (days / 365) * 12 + m;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

// Ставка для интерфейса/подсказок/ИИ: только чтение кэша; если страны
// в кэше ещё нет (до первого дневного тика) - считаем, но не запоминаем.
__declspec(noinline) static long long __cdecl MintingFixedFor(void* country)
{
    if (!g_mintReady || !country)
        return 0;
    MintSlot* sl = MintFindSlot(country, false);
    if (sl && sl->month != -2)
        return sl->value;
    return MintingComputeFixed(country);
}

// Переменная страны по имени: 0, если не задана (или контейнер не тот).
static double MintReadCountryVar(void* country, int cvarIndex)
{
    if (!country || cvarIndex < 0 || cvarIndex >= g_mintCVarCount)
        return 0.0;

    __try
    {
        void* container = (char*)country + OFF_COUNTRY_VARIABLES;
        void** vt = *(void***)container;
        if (vt != (void**)(g_base + RVA_VARIABLES_VTABLE))
            return 0.0;

        char store[64];
        GStr name;
        MakeStr(&name, store, sizeof(store), g_mintCVarNames[cvarIndex]);

        char* node = (char*)((tFindVariable)vt[1])(container, 0, &name);
        if (!node)
            return 0.0;
        return (double)*(int*)(node + OFF_VARIABLE_VALUE) / 1000.0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0.0;
    }
}

static void* GetLocalPlayerCountry()
{
    __try
    {
        void* world = *(void**)(g_base + RVA_WORLD_PTR);
        if (!world)
            return 0;
        return GetCountryPtr(*(int*)((char*)world + OFF_WORLD_PLAYER_INDEX));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

// ---------------------------------------------------------------
// <мод>\common\defines_v2dll.txt - настройки DLL, относящиеся к данным
// мода (а не к машине игрока): они должны совпадать у всех игроков
// сетевой партии, иначе OOS, поэтому живут рядом с defines.lua, а не
// в v2dll_settings.ini. Файл создаётся при первом запуске.
//   factory_unprofitable_close_days - срок автозакрытия убыточной
//                                     фабрики (InstallFactoryClose), 0 = выкл
//   minting_formula                 - формула minting (раньше лежала в
//                                     common\minting.txt как "formula = ...")
// Если рядом лежит старый minting.txt, его формула переносится в новый
// файл, а сам он переименовывается в minting.txt.moved (не удаляется).
// ---------------------------------------------------------------

static int  g_defFactoryCloseDays = 60;
// ai_factory_expand_min_staffing: % занятости, ниже которого ИИ не расширяет
// фабрику (PATCH_AI_EXPAND_STAFFING), 0 = без ограничения.
static int  g_defAiExpandMinStaffing = 90;
static bool g_defAiExpandKeySeen = false;
// ai_naval_base_max_provinces_per_state: в скольких провинциях региона ИИ может
// иметь морскую базу (PATCH_AI_NAVAL_BASE_LIMIT), 0 = без ограничения.
static int  g_defAiNavalBaseMax = 1;
static bool g_defAiNavalBaseKeySeen = false;
// factory_min_wage_per_10000: минимум зарплаты работникам фабрики, фунтов в день
// на 10000 работников, в тысячных (7 -> 7000). 0 = выкл (PATCH_FACTORY_MIN_WAGE).
static int  g_defMinWageMilli = 7000;
static bool g_defMinWageKeySeen = false;
static char g_defMintingFormula[256] = "";
static char g_defPath[MAX_PATH] = "";
static bool g_defLoaded = false;

static void V2dllDefinesPath(const char* fileName, char* out, size_t outSize)
{
    char folder[MAX_PATH];
    if (ResolveModFolder(folder, sizeof(folder)))
        _snprintf_s(out, outSize, _TRUNCATE, "%s\\common\\%s", folder, fileName);
    else
        _snprintf_s(out, outSize, _TRUNCATE, "common\\%s", fileName);
}

static void TrimSpaces(char* s)
{
    char* p = s;
    while (*p == ' ' || *p == '\t')
        ++p;
    if (p != s)
        memmove(s, p, strlen(p) + 1);
    size_t n = strlen(s);
    while (n > 0 && (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\r'))
        s[--n] = 0;
}

// Вызывает cb(key, value) для каждой строки "key = value" ('#' - комментарий).
// Меняет text на месте.
static void ForEachDefinesLine(char* text, size_t len, void (*cb)(const char* key, const char* value))
{
    char* start = text;
    if (len >= 3 && (unsigned char)text[0] == 0xEF && (unsigned char)text[1] == 0xBB && (unsigned char)text[2] == 0xBF)
        start += 3;

    for (char* line = start; *line; )
    {
        char* eol = line;
        while (*eol && *eol != '\n' && *eol != '\r')
            ++eol;
        char saved = *eol;
        *eol = 0;

        char* hash = strchr(line, '#');
        if (hash)
            *hash = 0;

        char* eq = strchr(line, '=');
        if (eq)
        {
            *eq = 0;
            char* key = line;
            char* value = eq + 1;
            TrimSpaces(key);
            TrimSpaces(value);
            if (key[0])
                cb(key, value);
        }

        if (!saved)
            break;
        line = eol + 1;
    }
}

static void DefinesApplyLine(const char* key, const char* value)
{
    if (_stricmp(key, "factory_unprofitable_close_days") == 0)
    {
        int d = atoi(value);
        g_defFactoryCloseDays = d < 0 ? 0 : (d > 36500 ? 36500 : d);
    }
    else if (_stricmp(key, "ai_factory_expand_min_staffing") == 0)
    {
        int d = atoi(value);
        g_defAiExpandMinStaffing = d < 0 ? 0 : (d > 100 ? 100 : d);
        g_defAiExpandKeySeen = true;
    }
    else if (_stricmp(key, "ai_naval_base_max_provinces_per_state") == 0)
    {
        int d = atoi(value);
        g_defAiNavalBaseMax = d < 0 ? 0 : (d > 100 ? 100 : d);
        g_defAiNavalBaseKeySeen = true;
    }
    else if (_stricmp(key, "factory_min_wage_per_10000") == 0)
    {
        double d = atof(value);
        if (d < 0.0)
            d = 0.0;
        if (d > 1000000.0)
            d = 1000000.0;
        g_defMinWageMilli = (int)(d * 1000.0 + 0.5);
        g_defMinWageKeySeen = true;
    }
    else if (_stricmp(key, "minting_formula") == 0)
    {
        strncpy_s(g_defMintingFormula, sizeof(g_defMintingFormula), value, _TRUNCATE);
    }
}

static const char* const AI_EXPAND_DEFINES_BLOCK =
    "\n"
    "# --- AI factory expansion (PATCH_AI_EXPAND_STAFFING in v2dll_settings.ini) ---\n"
    "# An AI country expands an existing factory only if at least this percent of the factory's\n"
    "# jobs are filled with workers (employees / (workforce * level)). The vanilla AI only looks at\n"
    "# the unemployed share of the whole state and builds the most profitable factory type up to\n"
    "# huge levels with almost no workers. Capitalists already need about 90 percent in vanilla.\n"
    "# 0 = no limit (vanilla AI behaviour).\n"
    "ai_factory_expand_min_staffing = %d\n";

static const char* const AI_NAVAL_DEFINES_BLOCK =
    "\n"
    "# --- AI naval bases (PATCH_AI_NAVAL_BASE_LIMIT in v2dll_settings.ini) ---\n"
    "# In how many provinces of one state an AI country may have a naval base. Once a state has\n"
    "# that many provinces with a naval base (built or being built), the AI does not start a base\n"
    "# in another province of the state. Upgrading a base the AI already has is not limited. The\n"
    "# player and the capitalists are not affected. 0 = no limit (vanilla AI behaviour).\n"
    "ai_naval_base_max_provinces_per_state = %d\n";

static const char* const MIN_WAGE_DEFINES_BLOCK =
    "\n"
    "# --- Factory minimum wage (PATCH_FACTORY_MIN_WAGE in v2dll_settings.ini) ---\n"
    "# Every day a factory pays its workers at least this many pounds per 10000 workers (owners and\n"
    "# slaves are not counted), whether or not the factory is profitable. The wage is paid only out of\n"
    "# the money the factory has (its budget): if the factory has less, it pays what it has, and its\n"
    "# balance never goes below zero. Where the profit allows a higher wage, the game's own logic\n"
    "# (the 'leftover' share and the minimum_wage reform) applies as usual: the larger of the two is\n"
    "# paid. For a subsidized factory the wage floor is added to its subsidy (the state pays it),\n"
    "# so that the factory can still buy all its input goods.\n"
    "# Fractions are allowed (use a dot). 0 = off (the game's own minimum wage only).\n"
    "factory_min_wage_per_10000 = %s\n";

static void FormatMinWageValue(char* out, size_t cap)
{
    // 7000 -> "7", 7500 -> "7.5", 7250 -> "7.25"
    int whole = g_defMinWageMilli / 1000;
    int frac  = g_defMinWageMilli % 1000;
    if (frac == 0)
        _snprintf_s(out, cap, _TRUNCATE, "%d", whole);
    else if (frac % 100 == 0)
        _snprintf_s(out, cap, _TRUNCATE, "%d.%d", whole, frac / 100);
    else if (frac % 10 == 0)
        _snprintf_s(out, cap, _TRUNCATE, "%d.%02d", whole, frac / 10);
    else
        _snprintf_s(out, cap, _TRUNCATE, "%d.%03d", whole, frac);
}

static char g_legacyFormula[256];

static void LegacyMintingLine(const char* key, const char* value)
{
    if (_stricmp(key, "formula") == 0 && !g_legacyFormula[0])
        strncpy_s(g_legacyFormula, sizeof(g_legacyFormula), value, _TRUNCATE);
}

static void EnsureV2dllDefines()
{
    if (g_defLoaded)
        return;
    g_defLoaded = true;

    V2dllDefinesPath("defines_v2dll.txt", g_defPath, sizeof(g_defPath));

    static char buf[16384];
    size_t len = 0;
    if (ReadWholeFile(g_defPath, buf, sizeof(buf), &len))
    {
        ForEachDefinesLine(buf, len, DefinesApplyLine);
        Log("defines_v2dll: прочитан '%s' (factory_unprofitable_close_days=%d, ai_factory_expand_min_staffing=%d, minting_formula %s)",
            g_defPath, g_defFactoryCloseDays, g_defAiExpandMinStaffing, g_defMintingFormula[0] ? "задана" : "пуста");
        if (!g_defAiExpandKeySeen)
        {
            // Файл создан более ранней версией: дописываем новый ключ с значением по умолчанию.
            FILE* af = 0;
            if (fopen_s(&af, g_defPath, "a") == 0 && af)
            {
                fprintf(af, AI_EXPAND_DEFINES_BLOCK, g_defAiExpandMinStaffing);
                fclose(af);
                Log("defines_v2dll: в '%s' дописан ai_factory_expand_min_staffing = %d", g_defPath, g_defAiExpandMinStaffing);
            }
        }
        if (!g_defAiNavalBaseKeySeen)
        {
            FILE* nf = 0;
            if (fopen_s(&nf, g_defPath, "a") == 0 && nf)
            {
                fprintf(nf, AI_NAVAL_DEFINES_BLOCK, g_defAiNavalBaseMax);
                fclose(nf);
                Log("defines_v2dll: в '%s' дописан ai_naval_base_max_provinces_per_state = %d", g_defPath, g_defAiNavalBaseMax);
            }
        }
        if (!g_defMinWageKeySeen)
        {
            FILE* wf = 0;
            if (fopen_s(&wf, g_defPath, "a") == 0 && wf)
            {
                char val[32];
                FormatMinWageValue(val, sizeof(val));
                fprintf(wf, MIN_WAGE_DEFINES_BLOCK, val);
                fclose(wf);
                Log("defines_v2dll: в '%s' дописан factory_min_wage_per_10000 = %s", g_defPath, val);
            }
        }
        return;
    }

    // Файла нет - создаём. Формулу берём из старого minting.txt, если он есть.
    char legacyPath[MAX_PATH];
    V2dllDefinesPath("minting.txt", legacyPath, sizeof(legacyPath));
    g_legacyFormula[0] = 0;
    static char lbuf[8192];
    size_t llen = 0;
    if (ReadWholeFile(legacyPath, lbuf, sizeof(lbuf), &llen))
        ForEachDefinesLine(lbuf, llen, LegacyMintingLine);
    strncpy_s(g_defMintingFormula, sizeof(g_defMintingFormula), g_legacyFormula, _TRUNCATE);

    FILE* f = 0;
    if (fopen_s(&f, g_defPath, "w") != 0 || !f)
    {
        Log("defines_v2dll: не удалось создать '%s' - берутся значения по умолчанию", g_defPath);
        return;
    }

    fprintf(f,
        "# V2DLL settings tied to this mod's game data. Created automatically, edit freely.\n"
        "# Every player in a multiplayer game must have identical values here, otherwise OOS.\n"
        "# '#' starts a comment.\n"
        "\n"
        "# --- Factories (PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE in v2dll_settings.ini) ---\n"
        "# A factory that is NOT subsidized and has been unprofitable (sales below the cost of its\n"
        "# input goods) for this many days in a row is closed automatically, as if closed by hand.\n"
        "# The money stored in the factory is paid out to the capitalists of its state.\n"
        "# 0 = never close automatically.\n"
        "factory_unprofitable_close_days = %d\n"
        "\n"
        "# --- Minting (ENABLE_MINTING in v2dll_settings.ini) ---\n"
        "# Daily income every country gets. Added to the treasury once per day, shown in the budget\n"
        "# window as \"minting_inc\", included in total income (budget window, topbar chart, tooltips).\n"
        "#\n"
        "# minting_formula - evaluated per country, result is pounds per day. Empty = minting is off.\n"
        "# Variables:\n"
        "#   industry_score     industrial score of the country (same as industrial_score in scripts)\n"
        "#   total_population   country population (the number the game stores for the country)\n"
        "#   any other name     a country variable declared in the game (set_variable = { which = NAME ... }),\n"
        "#                      e.g. economic_thought_level; its value, or 0 if the country does not have it\n"
        "# Operators: + - * /   parentheses, decimal numbers (use a dot: 0.01)\n"
        "minting_formula = %s\n",
        g_defFactoryCloseDays, g_defMintingFormula);
    fprintf(f, AI_EXPAND_DEFINES_BLOCK, g_defAiExpandMinStaffing);
    fprintf(f, AI_NAVAL_DEFINES_BLOCK, g_defAiNavalBaseMax);
    {
        char val[32];
        FormatMinWageValue(val, sizeof(val));
        fprintf(f, MIN_WAGE_DEFINES_BLOCK, val);
    }
    fclose(f);

    Log("defines_v2dll: создан '%s' (minting_formula %s)", g_defPath,
        g_legacyFormula[0] ? "перенесена из minting.txt" : "пуста");

    if (g_legacyFormula[0])
    {
        char movedPath[MAX_PATH];
        _snprintf_s(movedPath, sizeof(movedPath), _TRUNCATE, "%s.moved", legacyPath);
        if (MoveFileExA(legacyPath, movedPath, MOVEFILE_REPLACE_EXISTING))
            Log("defines_v2dll: старый '%s' переименован в '%s'", legacyPath, movedPath);
        else
            Log("defines_v2dll: не удалось переименовать '%s' (ошибка %u) - можно удалить вручную",
                legacyPath, (unsigned)GetLastError());
    }
}

static bool LoadMintingFormula()
{
    EnsureV2dllDefines();

    const char* path = g_defPath;
    const char* expr = g_defMintingFormula;

    if (!expr[0])
    {
        Log("Minting: в '%s' нет непустой строки 'minting_formula = ...' - minting выключен", path);
        return false;
    }

    strncpy_s(g_mintFormulaText, sizeof(g_mintFormulaText), expr, _TRUNCATE);
    g_mintCur = g_mintFormulaText;
    g_mintNodeCount = 0;
    g_mintCVarCount = 0;
    g_mintErr = false;
    g_mintRoot = MintParseExpr();
    MintSkipWs();

    if (g_mintErr || g_mintRoot < 0 || *g_mintCur != 0)
    {
        Log("Minting: не удалось разобрать формулу '%s' (позиция %d) - minting выключен",
            g_mintFormulaText, (int)(g_mintCur - g_mintFormulaText));
        return false;
    }

    g_mintReady = true;

    for (int i = 0; i < g_mintCVarCount; ++i)
        Log("Minting: '%s' - переменная страны (0, если не задана)", g_mintCVarNames[i]);

    double sample[MINT_VAR_COUNT] = { 1000.0, 4000000.0 };
    Log("Minting: формула '%s' из '%s' (%d узлов); пример без переменных страны: industry_score=1000, total_population=4000000 -> %.2f",
        g_mintFormulaText, path, g_mintNodeCount, MintEval(g_mintRoot, sample, 0));
    return true;
}

static LONG  g_mintDailyAnyLogged = 0;
static LONG  g_mintDailyPlayerLogged = 0;

static void MintingDailyCredit(void* country)
{
    if (!g_mintReady || !country)
        return;

    __try
    {
        long long fx;
        int hours = 0, monthKey = 0;
        if (MintingTimeNow(&hours, &monthKey))
        {
            if (g_mintTimeKnown && hours != g_mintLastHours && hours != g_mintLastHours + 24)
            {
                memset(g_mintSlots, 0, sizeof(g_mintSlots));
                Log("Minting: время мира %d -> %d, кэш ставок сброшен (загрузка/новая игра)",
                    g_mintLastHours, hours);
            }
            g_mintLastHours = hours;
            g_mintTimeKnown = true;

            MintSlot* sl = MintFindSlot(country, true);
            if (sl)
            {
                // Нулевая ставка не считается окончательной: на старте игры
                // переменные (economic_thought_level и т.п.) ещё не заданы
                // скриптами, а industry_score - не посчитан, и ноль,
                // записанный в первый день, держался бы целый месяц.
                // Пока ставка 0, формула пересчитывается каждый день
                // (дёшево: поиск переменной и несколько операций).
                bool newMonth = (sl->month != monthKey);
                if (newMonth || sl->value == 0)
                {
                    long long before = sl->value;
                    sl->value = MintingComputeFixed(country);
                    sl->month = monthKey;
                    if ((newMonth || (before == 0 && sl->value != 0)) && country == GetLocalPlayerCountry() &&
                        InterlockedIncrement(&g_mintMonthLogged) <= 24)
                        LogDbg("Minting: месяц %d, ставка игрока %s: %.2f в день", monthKey,
                            newMonth ? "пересчитана" : "стала ненулевой",
                            (double)sl->value / 32768.0);
                }
                fx = sl->value;
            }
            else
            {
                fx = MintingComputeFixed(country);
            }
        }
        else
        {
            fx = MintingComputeFixed(country);
        }

        if (fx == 0)
            return;

        unsigned* lo = (unsigned*)((char*)country + OFF_COUNTRY_MONEY);
        unsigned* hi = (unsigned*)((char*)country + OFF_COUNTRY_MONEY + 4);
        unsigned long long cur = ((unsigned long long)*hi << 32) | *lo;
        cur += (unsigned long long)fx;
        *lo = (unsigned)cur;
        *hi = (unsigned)(cur >> 32);

        bool isPlayer = (country == GetLocalPlayerCountry());
        if ((isPlayer && InterlockedIncrement(&g_mintDailyPlayerLogged) <= 5) ||
            InterlockedIncrement(&g_mintDailyAnyLogged) == 1)
        {
            LogDbg("Minting: день, страна %p%s, +%.1f в казну (industry_score %.1f, население %d, казна %.1f)",
                country, isPlayer ? " (игрок)" : "", (double)fx / 32768.0,
                (double)*(long long*)((char*)country + OFF_COUNTRY_INDUSTRY_SCORE) / 32768.0,
                *(int*)((char*)country + OFF_COUNTRY_POPULATION),
                (double)(long long)cur / 32768.0);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// FUN_0052b510: EAX=out, EDX=страна. Оригинальные 19 байт
//   mov ecx,[idx]; mov [eax],0; mov [eax+4],0
// заменены: результат C-вызова ждёт в двух слотах стека, и аккумулятор
// стартует с minting вместо нуля. EAX/ECX/EDX сохраняет pushad.
static DWORD g_mintIdxVarPtr = 0;
static DWORD g_mintActResume = 0;

__declspec(naked) static void MintingActualIncomeThunk()
{
    __asm {
        sub esp, 8
        pushad
        push edx
        call MintingFixedFor
        add esp, 4
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        mov ecx, dword ptr [g_mintIdxVarPtr]
        mov ecx, dword ptr [ecx]
        pop dword ptr [eax]
        pop dword ptr [eax + 4]
        jmp dword ptr [g_mintActResume]
    }
}

// FUN_0052b610: единственный эпилог, EBX=страна, ESI=out (int64).
static DWORD g_mintProjResume = 0;

__declspec(naked) static void MintingProjectedIncomeThunk()
{
    __asm {
        sub esp, 8
        pushad
        push ebx
        call MintingFixedFor
        add esp, 4
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        pop eax
        pop edx
        add dword ptr [esi], eax
        adc dword ptr [esi + 4], edx
        pop edi
        mov eax, esi
        pop ebx
        mov esp, ebp
        jmp dword ptr [g_mintProjResume]
    }
}

// Подсказка "Общие доходы": значение minting страны запоминаем в начале
// FUN_0052a080 (там ещё цела [ebp+8]) и используем в конце.
static volatile unsigned g_mintTipLo = 0;
static volatile int      g_mintTipHi = 0;
static DWORD g_mintTipStashResume = 0;
static DWORD g_mintTipLineResume = 0;

static void __cdecl MintingTipStash(void* country)
{
    long long fx = MintingFixedFor(country);
    g_mintTipLo = (unsigned)fx;
    g_mintTipHi = (int)(fx >> 32);
}

__declspec(naked) static void MintingTipStashThunk()
{
    __asm {
        pushad
        push dword ptr [ebp + 8]
        call MintingTipStash
        add esp, 4
        popad
        mov ecx, dword ptr [ebp + 8]
        sub esp, 8
        jmp dword ptr [g_mintTipStashResume]
    }
}

static const char g_mintKey[] = "BUDGET_MINTING";
static const char g_mintValName[] = "VAL";
static const char g_mintNewline[] = "\n";

static DWORD g_fnStrInit, g_fnFmtFromKey, g_fnFmtNumber, g_fnFmtReplace, g_fnLocSingleton;
static DWORD g_fnFmtFinish, g_fnStrAppend, g_fnStrAppendChars, g_fnListFree, g_fnListFree2, g_fnFree;

// Клон блока "строка категории" из FUN_0052a080 (последняя категория,
// 0x52AF2F..0x52B0A0): те же вызовы, те же локальные, те же номера
// состояний SEH; ключ и значение свои. EBX = 0 (нулевая константа
// всей функции). Если minting <= 0 - ничего не добавляем.
__declspec(naked) static void MintingTipLineThunk()
{
    __asm {
        mov edi, dword ptr [g_mintTipLo]
        mov esi, dword ptr [g_mintTipHi]
        cmp esi, ebx
        jl done
        jg emit
        cmp edi, ebx
        jbe done
    emit:
        mov byte ptr [ebp - 4], 0x33
        push 14
        push offset g_mintKey
        lea ecx, [ebp - 0x98]
        mov dword ptr [ebp - 0x84], 0xf
        mov dword ptr [ebp - 0x88], ebx
        mov byte ptr [ebp - 0x98], bl
        call dword ptr [g_fnStrInit]
        lea ecx, [ebp - 0x98]
        push ecx
        lea edx, [ebp - 0x78]
        push edx
        mov byte ptr [ebp - 4], 0x3f
        call dword ptr [g_fnFmtFromKey]
        mov byte ptr [ebp - 4], 0x41
        cmp dword ptr [ebp - 0x84], 0x10
        jb f1
        mov eax, dword ptr [ebp - 0x98]
        push eax
        call dword ptr [g_fnFree]
        add esp, 4
    f1:
        mov eax, 0xf
        push 3
        push offset g_mintValName
        lea ecx, [ebp - 0x48]
        mov dword ptr [ebp - 0x84], eax
        mov dword ptr [ebp - 0x88], ebx
        mov byte ptr [ebp - 0x98], bl
        mov dword ptr [ebp - 0x34], eax
        mov dword ptr [ebp - 0x38], ebx
        mov byte ptr [ebp - 0x48], bl
        call dword ptr [g_fnStrInit]
        sub esp, 8
        mov eax, esp
        mov dword ptr [ebp + 8], esp
        push 1
        lea ecx, [ebp - 0x2c]
        mov byte ptr [ebp - 4], 0x42
        push ecx
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], esi
        call dword ptr [g_fnFmtNumber]
        push eax
        lea esi, [ebp - 0x48]
        lea ecx, [ebp - 0x78]
        mov byte ptr [ebp - 4], 0x43
        call dword ptr [g_fnFmtReplace]
        mov edi, 0x10
        cmp dword ptr [ebp - 0x18], edi
        jb f2
        mov edx, dword ptr [ebp - 0x2c]
        push edx
        call dword ptr [g_fnFree]
        add esp, 4
    f2:
        mov byte ptr [ebp - 4], 0x41
        mov dword ptr [ebp - 0x18], 0xf
        mov dword ptr [ebp - 0x1c], ebx
        mov byte ptr [ebp - 0x2c], bl
        cmp dword ptr [ebp - 0x34], edi
        jb f3
        mov eax, dword ptr [ebp - 0x48]
        push eax
        call dword ptr [g_fnFree]
        add esp, 4
    f3:
        call dword ptr [g_fnLocSingleton]
        movq xmm0, qword ptr [eax + 0x6c]
        sub esp, 0x10
        mov ecx, esp
        movq qword ptr [ecx], xmm0
        movq xmm0, qword ptr [eax + 0x74]
        movq qword ptr [ecx + 8], xmm0
        lea esi, [ebp - 0x2c]
        lea ecx, [ebp - 0x78]
        call dword ptr [g_fnFmtFinish]
        push -1
        mov byte ptr [ebp - 4], 0x44
        mov ecx, dword ptr [ebp + 0xc]
        push ebx
        push eax
        add ecx, 0x1c
        call dword ptr [g_fnStrAppend]
        mov byte ptr [ebp - 4], 0x41
        cmp dword ptr [ebp - 0x18], edi
        jb f4
        mov ecx, dword ptr [ebp - 0x2c]
        push ecx
        call dword ptr [g_fnFree]
        add esp, 4
    f4:
        mov ecx, dword ptr [ebp + 0xc]
        push 1
        push offset g_mintNewline
        add ecx, 0x1c
        call dword ptr [g_fnStrAppendChars]
        lea edi, [ebp - 0x74]
        mov byte ptr [ebp - 4], 0x45
        call dword ptr [g_fnListFree]
        mov eax, dword ptr [ebp - 0x74]
        cmp eax, ebx
        je done
        mov edi, dword ptr [ebp - 0x70]
        call dword ptr [g_fnListFree2]
        mov edx, dword ptr [ebp - 0x74]
        push edx
        call dword ptr [g_fnFree]
        add esp, 4
    done:
        lea edi, [ebp - 0xac]
        jmp dword ptr [g_mintTipLineResume]
    }
}

static const char g_mintDescKey[] = "BUDGET_MINTING_DESC";
static DWORD g_fnStrFromCstr, g_fnStrAssign, g_fnStrClear, g_fnFmtFree;
static DWORD g_mintBoxTipResume = 0;
static DWORD g_mintBoxTipEnd = 0;

// Подсказка над naval_base_expense (GOODS_CONSUMPTION, см. ниже).
static bool GoodsConsumptionActive();
__declspec(noinline) static const GStr* __cdecl GoodsTipBuild();

// Что под курсором: 0 - ничего нашего, 1 - minting_inc, 2 - naval_base_expense.
// Вид запоминается в g_boxTipKind - его читает тот же thunk чуть дальше.
static volatile int g_boxTipKind = 0;

__declspec(noinline) static int __cdecl MintingIsHoveredBox(void* element)
{
    g_boxTipKind = 0;
    if (!element)
        return 0;

    __try
    {
        const char* nm = GStrText(VCall0(element, VT_GET_NAME));
        if (g_mintReady && strcmp(nm, "minting_inc") == 0)
            g_boxTipKind = 1;
        else if (GoodsConsumptionActive() && strcmp(nm, "naval_base_expense") == 0)
            g_boxTipKind = 2;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_boxTipKind = 0;
    }
    return g_boxTipKind;
}

// Диспетчер подсказок окна бюджета (FUN_00606780): ESI = элемент под
// курсором, EDI = окно. Сначала один изолированный блок pushad/popad
// с проверкой имени (результат - в слоте стека, все регистры целы), потом
// либо клон ветки "текст по ключу" (0x607D21..0x607DA3, ключ свой), либо
// исходное "cmp [edi+0x16c],esi" и возврат в цепочку сравнений.
// Для naval_base_expense (вид 2) ветка та же, но текст, который она
// присваивает результату, - не из ключа, а построенный GoodsTipBuild:
// после FmtFinish EAX (указатель на строку-результат) подменяется
// указателем на статическую std::string с готовым текстом; остальное
// (очистка строки-результата, формата) идёт как есть.
__declspec(naked) static void MintingBoxTipThunk()
{
    __asm {
        push 0
        pushad
        push esi
        call MintingIsHoveredBox
        add esp, 4
        mov dword ptr [esp + 0x20], eax
        popad
        cmp dword ptr [esp], 0
        lea esp, [esp + 4]
        jne mint_tip
        cmp dword ptr [edi + 0x16c], esi
        jmp dword ptr [g_mintBoxTipResume]
    mint_tip:
        mov edx, offset g_mintDescKey
        lea esi, [ebp - 0x8c]
        call dword ptr [g_fnStrFromCstr]
        mov ecx, esi
        push ecx
        lea edx, [ebp - 0x108]
        push edx
        mov byte ptr [ebp - 4], 2
        call dword ptr [g_fnFmtFromKey]
        mov edi, eax
        mov byte ptr [ebp - 4], 3
        call dword ptr [g_fnLocSingleton]
        movq xmm0, qword ptr [eax + 0x6c]
        sub esp, 0x10
        mov ecx, esp
        movq qword ptr [ecx], xmm0
        movq xmm0, qword ptr [eax + 0x74]
        movq qword ptr [ecx + 8], xmm0
        lea esi, [ebp - 0x6c]
        mov ecx, edi
        call dword ptr [g_fnFmtFinish]
        cmp dword ptr [g_boxTipKind], 2
        jne have_text
        pushad
        call GoodsTipBuild
        mov dword ptr [esp + 0x1C], eax
        popad
    have_text:
        push -1
        push 0
        push eax
        lea ecx, [ebp - 0x1d0]
        mov byte ptr [ebp - 4], 4
        call dword ptr [g_fnStrAssign]
        mov ecx, esi
        call dword ptr [g_fnStrClear]
        lea eax, [ebp - 0x108]
        push eax
        mov byte ptr [ebp - 4], 2
        call dword ptr [g_fnFmtFree]
        lea ecx, [ebp - 0x8c]
        jmp dword ptr [g_mintBoxTipEnd]
    }
}

typedef void* (__fastcall* tStrAssign)(void* self, void* edx, const void* src, unsigned pos, unsigned n);
typedef void(__fastcall* tBudgetUpdate)(void* view, void* edx);

// GOODS_CONSUMPTION (ниже): строка naval_base_expense окна бюджета.
static bool GoodsConsumptionActive();
static void GoodsExpenseDisplay(void* country, long long* paid, long long* required);
static bool InstallCountryDailyCall();

static tBudgetUpdate g_origBudgetUpdate = 0;
static LONG g_mintUiLogged = 0;
static LONG g_consUiLogged = 0;

static void SetBudgetBoxText(void* view, const char* boxName, long long fixedValue, LONG* logCounter,
                             const char* color = 0)
{
    __try
    {
        void* container = *(void**)((char*)view + OFF_VIEW_CONTAINER);
        if (!container)
            return;

        char nameStore[32];
        GStr name;
        MakeStr(&name, nameStore, sizeof(nameStore), boxName);
        void* box = VCall1(container, VT_FIND_TEXTBOX, &name);

        if (InterlockedIncrement(logCounter) <= 3)
            LogDbg("Окно бюджета: %s %s, значение %.1f",
                boxName, box ? "найден" : "НЕ найден", (double)fixedValue / 32768.0);

        if (!box)
            return;

        // 0xA4 - тот же знак валюты, что движок дописывает к числам бюджета
        // (DAT_00DF830C), шрифт рисует его значком денег.
        // color - код цвета перед числом (\xA7G/\xA7Y/\xA7R), после - \xA7! (вернуть цвет шрифта).
        char text[48];
        if (color)
            _snprintf_s(text, sizeof(text), _TRUNCATE, "%s%.1f\xA4\xA7!", color, (double)fixedValue / 32768.0);
        else
            _snprintf_s(text, sizeof(text), _TRUNCATE, "%.1f\xA4", (double)fixedValue / 32768.0);

        char textStore[64];
        GStr str;
        MakeStr(&str, textStore, sizeof(textStore), text);

        ((tStrAssign)(g_base + RVA_STR_ASSIGN))((char*)box + OFF_TEXTBOX_STR, 0, &str, 0, 0xFFFFFFFFu);

        void* inner = *(void**)((char*)box + OFF_TEXTBOX_INNER);
        if (!inner)
            return;

        DWORD fn = g_base + RVA_TEXT_SETTEXT;
        void* pStr = &str;
        __asm {
            push esi
            push 0
            push pStr
            mov esi, inner
            call fn
            pop esi
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void __fastcall BudgetUpdateThunk(void* view, void* edx)
{
    g_origBudgetUpdate(view, edx);
    void* player = GetLocalPlayerCountry();
    SetBudgetBoxText(view, "minting_inc", MintingFixedFor(player), &g_mintUiLogged);
    if (GoodsConsumptionActive())
    {
        // Цвет числа: купили всё - обычный (цвет шрифта), не хватило товаров - красный.
        long long paid = 0, required = 0;
        GoodsExpenseDisplay(player, &paid, &required);
        const char* color = 0;
        if (required > 0 && paid * 1000 < required * 999)
            color = "\xA7R";
        SetBudgetBoxText(view, "naval_base_expense", paid, &g_consUiLogged, color);
    }
}

// Записывает E9 rel32 + NOP-ы поверх len байт (len >= 5), предварительно
// проверив sig (первые sigLen байт) и resume-байты.
static bool WriteJmpSite(DWORD rva, const unsigned char* sig, int sigLen, int len,
                         DWORD resumeRva, const unsigned char* resumeSig, int resumeSigLen,
                         void* target, const char* tag)
{
    unsigned char* p = (unsigned char*)(g_base + rva);
    if (memcmp(p, sig, sigLen) != 0 ||
        memcmp((unsigned char*)(g_base + resumeRva), resumeSig, resumeSigLen) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X - не патчим", tag, rva);
        return false;
    }

    unsigned char patch[32];
    memset(patch, 0x90, len);
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)target - ((DWORD)(DWORD_PTR)p + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(p, len, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(p, patch, len);
    VirtualProtect(p, len, oldProtect, &oldProtect);

    Log("%s: установлен rva %06X", tag, rva);
    return true;
}

// Хуки окна бюджета, общие для minting и goods_consumption: подсказка над
// textbox'ами (minting_inc, naval_base_expense) и запись в них текста.
// Идемпотентно: ставится один раз тем, кто позвал первым.
static bool g_budgetHooksTried = false;
static bool g_budgetBoxTipOk = false;
static bool g_budgetUiOk = false;

static void InstallBudgetWindowHooks()
{
    if (g_budgetHooksTried)
        return;
    g_budgetHooksTried = true;

    g_fnIsBadReadPtr = SafeIsBadReadPtr;
    g_fnStrInit = g_base + RVA_FN_STR_INIT;
    g_fnFmtFromKey = g_base + RVA_FN_FMT_FROM_KEY;
    g_fnLocSingleton = g_base + RVA_FN_LOC_SINGLETON;
    g_fnFmtFinish = g_base + RVA_FN_FMT_FINISH;
    g_fnStrFromCstr = g_base + RVA_FN_STR_FROM_CSTR;
    g_fnStrAssign = g_base + RVA_STR_ASSIGN;
    g_fnStrClear = g_base + RVA_FN_STR_CLEAR;
    g_fnFmtFree = g_base + RVA_FN_FMT_FREE;
    g_mintBoxTipResume = g_base + RVA_BOX_TIP_RESUME;
    g_mintBoxTipEnd = g_base + RVA_BOX_TIP_END;

    static const unsigned char BOXTIP_SIG[6] = { 0x39, 0xB7, 0x6C, 0x01, 0x00, 0x00 };
    static const unsigned char BOXTIP_RESUME[2] = { 0x0F, 0x85 };
    g_budgetBoxTipOk = WriteJmpSite(RVA_BOX_TIP_SITE, BOXTIP_SIG, sizeof(BOXTIP_SIG), 6,
        RVA_BOX_TIP_RESUME, BOXTIP_RESUME, sizeof(BOXTIP_RESUME),
        (void*)&MintingBoxTipThunk, "Окно бюджета: подсказка над textbox'ами");

    void** slot = (void**)(g_base + RVA_BUDGET_VTABLE) + BUDGET_UPDATE_SLOT;
    if (*slot != (void*)(g_base + RVA_BUDGET_UPDATE_FN))
    {
        Log("Окно бюджета: слот %d CBudgetView указывает на %p, ожидали %p - текст в textbox'ы не пишем",
            BUDGET_UPDATE_SLOT, *slot, (void*)(g_base + RVA_BUDGET_UPDATE_FN));
    }
    else
    {
        g_budgetUiOk = PatchSlot(RVA_BUDGET_VTABLE, BUDGET_UPDATE_SLOT, (void*)&BudgetUpdateThunk,
            (void**)&g_origBudgetUpdate);
    }
}

static bool InstallMinting()
{
    if (!LoadMintingFormula())
        return false;

    g_fnIsBadReadPtr = SafeIsBadReadPtr;

    if (!InstallCountryDailyCall())
    {
        Log("Minting: дневной хук не встал - minting выключен");
        g_mintReady = false;
        return false;
    }

    DWORD oldProtect = 0;

    // Сумма фактического дохода: график/текст верхней панели, "вчера", ИИ.
    unsigned char* act = (unsigned char*)(g_base + RVA_INCOME_ACT_ENTRY);
    static const unsigned char ACT_TAIL[13] =
    { 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00 };
    static const unsigned char ACT_RESUME[3] = { 0x83, 0xC1, 0x0D };
    bool actOk = false;
    if (act[0] == 0x8B && act[1] == 0x0D && memcmp(act + 6, ACT_TAIL, sizeof(ACT_TAIL)) == 0 &&
        memcmp((unsigned char*)(g_base + RVA_INCOME_ACT_RESUME), ACT_RESUME, sizeof(ACT_RESUME)) == 0)
    {
        g_mintIdxVarPtr = *(DWORD*)(act + 2);
        g_mintActResume = g_base + RVA_INCOME_ACT_RESUME;
        unsigned char patch[19];
        memset(patch, 0x90, sizeof(patch));
        patch[0] = 0xE9;
        *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&MintingActualIncomeThunk - ((DWORD)(DWORD_PTR)act + 5);
        if (VirtualProtect(act, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        {
            memcpy(act, patch, sizeof(patch));
            VirtualProtect(act, sizeof(patch), oldProtect, &oldProtect);
            actOk = true;
            Log("Minting income(факт): установлен rva %06X", RVA_INCOME_ACT_ENTRY);
        }
    }
    else
    {
        Log("Minting income(факт): сигнатура не совпала rva %06X - не патчим", RVA_INCOME_ACT_ENTRY);
    }

    // Сумма расчётного дохода: итоги окна бюджета, подсказки, события.
    static const unsigned char PROJ_SIG[6] = { 0x5F, 0x8B, 0xC6, 0x5B, 0x8B, 0xE5 };
    static const unsigned char PROJ_RESUME[4] = { 0x5D, 0xC2, 0x08, 0x00 };
    g_mintProjResume = g_base + RVA_INCOME_PROJ_RESUME;
    bool projOk = WriteJmpSite(RVA_INCOME_PROJ_EPILOGUE, PROJ_SIG, sizeof(PROJ_SIG), 6,
        RVA_INCOME_PROJ_RESUME, PROJ_RESUME, sizeof(PROJ_RESUME),
        (void*)&MintingProjectedIncomeThunk, "Minting income(расчёт)");

    // Строка в подсказке "Общие доходы".
    g_fnStrInit = g_base + RVA_FN_STR_INIT;
    g_fnFmtFromKey = g_base + RVA_FN_FMT_FROM_KEY;
    g_fnFmtNumber = g_base + RVA_FN_FMT_NUMBER;
    g_fnFmtReplace = g_base + RVA_FN_FMT_REPLACE;
    g_fnLocSingleton = g_base + RVA_FN_LOC_SINGLETON;
    g_fnFmtFinish = g_base + RVA_FN_FMT_FINISH;
    g_fnStrAppend = g_base + RVA_FN_STR_APPEND;
    g_fnStrAppendChars = g_base + RVA_FN_STR_APPEND_CHARS;
    g_fnListFree = g_base + RVA_FN_LIST_FREE;
    g_fnListFree2 = g_base + RVA_FN_LIST_FREE2;
    g_fnFree = g_base + RVA_FN_FREE;
    g_mintTipStashResume = g_base + RVA_TIP_STASH_RESUME;
    g_mintTipLineResume = g_base + RVA_TIP_LINE_RESUME;

    static const unsigned char STASH_SIG[6] = { 0x8B, 0x4D, 0x08, 0x83, 0xEC, 0x08 };
    static const unsigned char STASH_RESUME[4] = { 0xC6, 0x45, 0xFC, 0x04 };
    static const unsigned char LINE_SIG[6] = { 0x8D, 0xBD, 0x54, 0xFF, 0xFF, 0xFF };
    static const unsigned char LINE_RESUME[4] = { 0xC6, 0x45, 0xFC, 0x46 };
    bool tipOk = false;
    {
        unsigned char* stash = (unsigned char*)(g_base + RVA_TIP_STASH_SITE);
        unsigned char* line = (unsigned char*)(g_base + RVA_TIP_LINE_SITE);
        if (memcmp(stash, STASH_SIG, sizeof(STASH_SIG)) == 0 && memcmp(line, LINE_SIG, sizeof(LINE_SIG)) == 0)
        {
            bool s = WriteJmpSite(RVA_TIP_STASH_SITE, STASH_SIG, sizeof(STASH_SIG), 6,
                RVA_TIP_STASH_RESUME, STASH_RESUME, sizeof(STASH_RESUME),
                (void*)&MintingTipStashThunk, "Minting подсказка(запомнить)");
            if (s)
                tipOk = WriteJmpSite(RVA_TIP_LINE_SITE, LINE_SIG, sizeof(LINE_SIG), 6,
                    RVA_TIP_LINE_RESUME, LINE_RESUME, sizeof(LINE_RESUME),
                    (void*)&MintingTipLineThunk, "Minting подсказка(строка)");
        }
        else
        {
            Log("Minting подсказка: сигнатуры не совпали - строку не добавляем");
        }
    }

    // Подсказки над textbox'ами и текст в окне бюджета (общие с GOODS_CONSUMPTION).
    InstallBudgetWindowHooks();
    bool boxTipOk = g_budgetBoxTipOk;
    bool uiOk = g_budgetUiOk;

    Log("Minting: установлен (income факт=%d расчёт=%d, подсказка=%d, minting_inc=%d, подсказка minting_inc=%d)",
        (int)actOk, (int)projOk, (int)tipOk, (int)uiOk, (int)boxTipOk);
    return true;
}


// ---------------------------------------------------------------
// GOODS_CONSUMPTION (ENABLE_GOODS_CONSUMPTION) - ключ goods_consumption
// в common\buildings.txt и ежедневная закупка товаров государством.
//
//   naval_base = { ... goods_consumption = { cement = 5 steel = 5 } ... }
//
// 1. Чтение. Ваниль не знает ключа goods_consumption и ломается: обработчик
//    свойств здания (CBuilding, слот 4 = FUN_004D9310) не съедает блок
//    "{ ... }", поэтому его содержимое разбирается как свойства самого
//    здания ("cement = 5" - это имя товара, и обработчик присваивает его
//    зданию), закрывающая "}" преждевременно закрывает здание, а следующие
//    свойства становятся "новыми зданиями" - позже падение. Слот 4 стоит
//    сразу в двух vftable: базовом (0xDFDAC0) и производном (0xDFDAF0, его
//    ставят конструкторы реальных зданий) - подменяем в обоих. Если ключ
//    (текст токена ctx+0x24) - "goods_consumption", читаем блок сами теми
//    же вызовами лексера, что и ветки блоков самого FUN_004D9310 (напр.
//    список 0x2A5): подглядеть токен (флаг lexer+0x110), на "}" (тип 4)
//    или конце файла (0x13) выйти, иначе FUN_009A1440(ctx) читает
//    "ключ = значение" в ctx+0x20/+0x124/+0x228; в конце съесть "}". Пары
//    (товар, количество) кладём в таблицу DLL; любой другой ключ - оригинал.
//    Чтение включено всегда, даже при ENABLE_GOODS_CONSUMPTION=0 (иначе
//    блок в buildings.txt снова ронял бы игру).
// 2. Закупка. Раз в день на страну (общий дневной хук, см. CountryDailyHook)
//    для каждой провинции страны (country+0x9D8..0x9DC - список id;
//    провинция = vector[session+0xACC][id]) берём запись здания:
//    province+0x118 - вектор указателей, индекс = CBuilding+0x134, уровень
//    = запись+0x20 (так же читает FUN_008CE600). Товары = количество *
//    уровень; платим по текущей рыночной цене (рынок = [session+0xBCC],
//    цена товара g - int64 с 15 дробными битами в векторе +0x2C8, слот по
//    байту +0x288+g) и списываем с казны (+0xE78). Сумма запоминается в кэше
//    по стране - это и есть строка бюджета: textbox "naval_base_expense"
//    окна бюджета, а также вход в суммы расходов - FUN_0052B5D0 (факт) и
//    FUN_0052B1C0 (расчёт) и два встроенных вычисления верхней панели.
//    ВАЖНО: уровень здания провинции хранится в тысячных (1000 = 1-й уровень).
//    Закупка ограничена рынком и казной: сначала берётся излишек своей страны
//    (произведено - продано внутри), остаток покупается на мировом рынке:
//    куплено = (излишек + остаток * min(1, предложение / спрос)) * min(1,
//    казна / стоимость), платим за купленное;
//    в строке бюджета число зелёное/жёлтое/красное, в подсказке по каждому
//    товару "куплено / требуется".
//    Карточка товара (окно trade_flow, колонка "Использовано") получает строку
//    на каждое такое здание - см. TradeFlowAppendUsed.
//    Подсказка над textbox'ом (хук диспетчера подсказок FUN_00606780, общий
//    с minting_inc) перечисляет здания, товары, количество, цену и итог.
//    Опционально (GOODS_CONSUMPTION_MARKET_DEMAND, по умолчанию да) то же
//    количество прибавляется к спросу рынка (вектор +0x218, слот +0x1D8+g
//    - это "спрос" из формулы цены FUN_00482930: цена тянется к
//    базовой * спрос / предложение), т.е. государство действительно
//    скупает товар, а не просто платит деньги в никуда.
// ---------------------------------------------------------------

static const DWORD RVA_CBUILDING_VTABLE     = 0x9FDAC0;  // VA 0xDFDAC0 (база)
static const DWORD RVA_CBUILDING_VTABLE2    = 0x9FDAF0;  // VA 0xDFDAF0 (производный, ставится конструкторами зданий)
static const int   CBUILDING_PROP_SLOT      = 4;
static const DWORD RVA_CBUILDING_PROP_FN    = 0xD9310;   // FUN_004D9310(this, ctx, keyId), thiscall ret 8
static const DWORD RVA_PARSER_READ_PROP     = 0x5A1440;  // FUN_009A1440(ctx), ret 4
static const int   OFF_PARSER_LEXER         = 0x1C;
static const int   OFF_PARSER_KEY_TEXT      = 0x24;
static const int   OFF_PARSER_VALUE_TEXT    = 0x22C;
static const int   OFF_LEXER_PEEK_FLAG      = 0x110;
static const int   OFF_BUILDING_NAME        = 0x20;
static const int   OFF_BUILDING_IS_PROVINCE = 0x131;     // province = yes
static const int   OFF_BUILDING_PROV_INDEX  = 0x134;     // индекс в векторе зданий провинции
static const int   OFF_SESSION_PROVINCES    = 0xACC;
static const int   OFF_SESSION_MARKET       = 0xBCC;
static const int   OFF_COUNTRY_OWNED_LIST   = 0x9D8;     // vector<int> id провинций страны
static const int   OFF_PROVINCE_BUILDINGS   = 0x118;     // vector<CProvinceBuilding*>
static const int   OFF_PBUILDING_LEVEL      = 0x20;
static const int   OFF_MARKET_PRICE_SLOT    = 0x288;     // byte[64] - слот товара в векторе цен
static const int   OFF_MARKET_PRICES        = 0x2C8;     // vector<int64>
static const int   OFF_MARKET_DEMAND_SLOT   = 0x1D8;     // byte[64]
static const int   OFF_MARKET_DEMAND        = 0x218;     // vector<int64>
static const int   CONS_MAX_GOODS           = 64;        // размер таблиц слотов рынка

static const DWORD RVA_EXP_ACT_SEED         = 0x12B5E1;  // FUN_0052B5D0: обнуление накопителя (18 байт)
static const DWORD RVA_EXP_ACT_RESUME       = 0x12B5F3;  // mov edx,0xB
static const DWORD RVA_EXP_PROJ_EPILOGUE    = 0x12B354;  // FUN_0052B1C0: pop edi; pop esi; mov eax,ebx; pop ebx
static const DWORD RVA_EXP_PROJ_RESUME      = 0x12B359;  // mov esp,ebp
static const DWORD RVA_TOPBAR_HIST_SITE     = 0x30E859;  // график верхней панели: mov edx,[esp+0x40]; sub edx,eax
static const DWORD RVA_TOPBAR_HIST_RESUME   = 0x30E85F;
static const DWORD RVA_TOPBAR_TEXT_SITE     = 0x30F3A4;  // текст "доход" верхней панели: sub ecx,esi; mov esi,[ebp-0xD8]; sbb esi,eax
static const DWORD RVA_TOPBAR_TEXT_RESUME   = 0x30F3AE;

struct ConsGood { char name[40]; double amount; int index; };   // index: -2 не искали, -1 нет такого товара
struct ConsBuilding { void* type; char name[48]; int count; ConsGood goods[16]; };

static ConsBuilding g_consBuildings[24];
static int  g_consBuildingCount = 0;
static bool g_consResolved = false;
static bool g_consDemand = false;
static bool g_consActive = false;        // включены закупка/расходы/строка бюджета
static LONG g_consLevelLogged = 0;
static LONG g_consDailyLogged = 0;

static double ConsParseNumber(const char* s)
{
    while (*s == ' ' || *s == '\t')
        ++s;
    bool neg = false;
    if (*s == '-')
    {
        neg = true;
        ++s;
    }
    double v = 0.0;
    while (*s >= '0' && *s <= '9')
        v = v * 10.0 + (*s++ - '0');
    if (*s == '.')
    {
        ++s;
        double scale = 0.1;
        while (*s >= '0' && *s <= '9')
        {
            v += (*s++ - '0') * scale;
            scale *= 0.1;
        }
    }
    return neg ? -v : v;
}

static ConsBuilding* ConsFindOrCreate(void* type)
{
    for (int i = 0; i < g_consBuildingCount; ++i)
    {
        if (g_consBuildings[i].type == type)
            return &g_consBuildings[i];
    }

    const char* nm = GStrText((char*)type + OFF_BUILDING_NAME);

    // То же здание после перезагрузки данных: новый объект - берём старую запись.
    for (int i = 0; i < g_consBuildingCount; ++i)
    {
        if (_stricmp(g_consBuildings[i].name, nm) == 0)
        {
            g_consBuildings[i].type = type;
            g_consBuildings[i].count = 0;
            return &g_consBuildings[i];
        }
    }

    if (g_consBuildingCount >= (int)(sizeof(g_consBuildings) / sizeof(g_consBuildings[0])))
        return 0;

    ConsBuilding& cb = g_consBuildings[g_consBuildingCount++];
    memset(&cb, 0, sizeof(cb));
    cb.type = type;
    strncpy_s(cb.name, sizeof(cb.name), nm, _TRUNCATE);
    return &cb;
}

typedef int(__fastcall* tLexNext)(void* self, void* edx);
typedef void(__stdcall* tReadProperty)(void* ctx);
typedef void(__fastcall* tBuildingProp)(void* self, void* edx, void* ctx, int keyId);

static tBuildingProp g_origBuildingProp = 0;

// Тот же цикл, что в ветках блоков самого обработчика, но элементы -
// пары "ключ = значение" (их читает FUN_009A1440, как общий разбор блока).
static void ParseGoodsConsumptionBlock(void* self, void* ctx)
{
    char* c = (char*)ctx;
    int* lexer = *(int**)(c + OFF_PARSER_LEXER);
    tLexNext next = (tLexNext)(*(void***)lexer)[1];
    tReadProperty readProp = (tReadProperty)(g_base + RVA_PARSER_READ_PROP);

    ConsBuilding* cb = ConsFindOrCreate(self);
    if (cb)
        cb->count = 0;

    for (int guard = 0; guard < 256; ++guard)
    {
        if (*((char*)lexer + OFF_LEXER_PEEK_FLAG) == 0)
        {
            int r = next(lexer, 0);
            lexer[2] = r;
            if (r == 0)
                lexer[3] = 0x13;
            *((char*)lexer + OFF_LEXER_PEEK_FLAG) = 1;
        }

        int type = lexer[3];
        if (type == 4 || type == 0x13)
            break;

        readProp(ctx);

        if (!cb || cb->count >= (int)(sizeof(cb->goods) / sizeof(cb->goods[0])))
            continue;

        const char* goodName = c + OFF_PARSER_KEY_TEXT;
        double amount = ConsParseNumber(c + OFF_PARSER_VALUE_TEXT);
        if (!goodName[0] || amount <= 0.0)
            continue;

        ConsGood* g = 0;
        for (int i = 0; i < cb->count; ++i)
        {
            if (_stricmp(cb->goods[i].name, goodName) == 0)
            {
                g = &cb->goods[i];
                break;
            }
        }
        if (!g)
            g = &cb->goods[cb->count++];
        strncpy_s(g->name, sizeof(g->name), goodName, _TRUNCATE);
        g->amount = amount;
        g->index = -2;
    }

    next(lexer, 0);   // съесть закрывающую "}"

    g_consResolved = false;
    if (cb)
    {
        Log("GoodsConsumption: здание '%s': %d товаров в goods_consumption", cb->name, cb->count);
        for (int i = 0; i < cb->count; ++i)
            Log("GoodsConsumption:   %s = %.3f", cb->goods[i].name, cb->goods[i].amount);
    }
}

static void __fastcall BuildingPropThunk(void* self, void* edx, void* ctx, int keyId)
{
    bool mine = false;
    __try
    {
        mine = (strcmp((const char*)ctx + OFF_PARSER_KEY_TEXT, "goods_consumption") == 0);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        mine = false;
    }

    if (mine)
    {
        ParseGoodsConsumptionBlock(self, ctx);
        return;
    }

    g_origBuildingProp(self, edx, ctx, keyId);
}

static void ConsResolveGoods()
{
    __try
    {
        char* mgr = *(char**)(g_base + RVA_GOODS_MANAGER);
        if (!mgr)
            return;
        int* b = *(int**)(mgr + 0xC);
        int* e = *(int**)(mgr + 0x10);
        int n = (int)(e - b);
        if (!b || n <= 0)
            return;
        if (n > CONS_MAX_GOODS)
            n = CONS_MAX_GOODS;

        for (int bi = 0; bi < g_consBuildingCount; ++bi)
        {
            for (int k = 0; k < g_consBuildings[bi].count; ++k)
            {
                ConsGood& g = g_consBuildings[bi].goods[k];
                g.index = -1;
                for (int i = 0; i < n; ++i)
                {
                    const char* nm = ResolveGoodNameByIndex(i);
                    if (nm && _stricmp(nm, g.name) == 0)
                    {
                        g.index = i;
                        break;
                    }
                }
                if (g.index < 0)
                    Log("GoodsConsumption: товар '%s' (здание '%s') не найден среди %d товаров - пропускаем",
                        g.name, g_consBuildings[bi].name, n);
            }
        }
        g_consResolved = true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Суммарный уровень каждого описанного здания в стране, в ТЫСЯЧНЫХ
// (rawSum[i] - для g_consBuildings[i]). Уровень здания провинции движок
// хранит целым в тысячных: 1000 = 1-й уровень (в логе 4.90 было видно
// "уровень 1000"; 4.90 принимала это за сам уровень, и всё стоило в 1000
// раз больше). Суммируем сырые целые - точно и одинаково у всех клиентов.
// Возвращает false, если подходящих зданий нет.
static bool ConsScanLevels(void* country, long long* rawSum)
{
    for (int i = 0; i < 24; ++i)
        rawSum[i] = 0;

    if (g_consBuildingCount == 0 || !country)
        return false;

    __try
    {
        char* session = *(char**)(g_base + RVA_WORLD_PTR);
        if (!session)
            return false;

        char** provs = *(char***)(session + OFF_SESSION_PROVINCES);
        DWORD* ids = *(DWORD**)((char*)country + OFF_COUNTRY_OWNED_LIST);
        DWORD* idsEnd = *(DWORD**)((char*)country + OFF_COUNTRY_OWNED_LIST + 4);
        if (!provs || !ids || idsEnd < ids || (idsEnd - ids) > 20000)
            return false;

        // Описание здания актуально, если объект ещё называется так же
        // (указатель мог достаться другому зданию после перезагрузки данных)
        // и это здание провинции; provIdx - его место в векторе зданий провинции.
        int provIdx[24];
        bool live = false;
        for (int i = 0; i < g_consBuildingCount; ++i)
        {
            ConsBuilding& cb = g_consBuildings[i];
            provIdx[i] = -1;
            char* t = (char*)cb.type;
            if (!t || cb.count == 0)
                continue;
            if (_stricmp(GStrText(t + OFF_BUILDING_NAME), cb.name) != 0)
                continue;
            if (*(unsigned char*)(t + OFF_BUILDING_IS_PROVINCE) == 0)
                continue;
            int idx = *(int*)(t + OFF_BUILDING_PROV_INDEX);
            if (idx < 0 || idx > 255)
                continue;
            provIdx[i] = idx;
            live = true;
        }
        if (!live)
            return false;

        bool any = false;
        for (DWORD* p = ids; p < idsEnd; ++p)
        {
            DWORD id = *p;
            if (id >= 20000)
                continue;
            char* prov = provs[id];
            if (!prov)
                continue;

            char** vb = *(char***)(prov + OFF_PROVINCE_BUILDINGS);
            char** ve = *(char***)(prov + OFF_PROVINCE_BUILDINGS + 4);
            if (!vb || ve < vb)
                continue;
            int vcount = (int)(ve - vb);

            for (int i = 0; i < g_consBuildingCount; ++i)
            {
                int idx = provIdx[i];
                if (idx < 0 || idx >= vcount)
                    continue;
                char* inst = vb[idx];
                if (!inst)
                    continue;

                int raw = *(int*)(inst + OFF_PBUILDING_LEVEL);
                if (raw <= 0)
                    continue;
                if (raw > 1000000)
                {
                    if (InterlockedIncrement(&g_consLevelLogged) <= 5)
                        Log("GoodsConsumption: '%s' в провинции %u: странный уровень %d - пропускаем",
                            g_consBuildings[i].name, (unsigned)id, raw);
                    continue;
                }

                if (InterlockedIncrement(&g_consLevelLogged) <= 5)
                    LogDbg("GoodsConsumption: '%s' в провинции %u, сырой уровень %d = %.3f",
                        g_consBuildings[i].name, (unsigned)id, raw, (double)raw / 1000.0);

                rawSum[i] += raw;
                any = true;
            }
        }
        return any;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

// Текущая рыночная цена товара (фунтов за единицу) или -1, если у товара
// на рынке нет цены.
static double ConsPriceOf(int g)
{
    if (g < 0 || g >= CONS_MAX_GOODS)
        return -1.0;
    __try
    {
        char* session = *(char**)(g_base + RVA_WORLD_PTR);
        if (!session)
            return -1.0;
        char* market = *(char**)(session + OFF_SESSION_MARKET);
        if (!market)
            return -1.0;
        char* prices = *(char**)(market + OFF_MARKET_PRICES);
        char* pricesEnd = *(char**)(market + OFF_MARKET_PRICES + 4);
        if (!prices || pricesEnd < prices)
            return -1.0;
        unsigned slot = *(unsigned char*)(market + OFF_MARKET_PRICE_SLOT + g);
        if (slot == 0 || (int)slot >= (int)((pricesEnd - prices) / 8))
            return -1.0;
        long long price = *(long long*)(prices + slot * 8);
        return price > 0 ? (double)price / 32768.0 : -1.0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return -1.0;
    }
}

// ---- НАСТОЯЩАЯ закупка зданий (v5.12) ----
//
// Закупка идёт внутри ежедневного обновления рынка, как покупки самого
// государства. Дневной проход FUN_00489990(рынок, 0, 11) зовёт FUN_00484060
// (param_2 = 11 - итоговый проход; при старте игры FUN_0068BF00 гоняет 5
// пробных проходов с param_2 = 0..4 - там покупать нельзя). Для каждой
// страны с провинциями она:
//   1. копирует в рабочий пул "внутренний" (холдер DAT_013F2500; слоты с
//      +0x08, вектор int64 с +0x48) domestic_supply_pool страны - товары,
//      которые страна произвела и может купить у себя, а в пул "мировой"
//      (DAT_013F2450, один на весь проход) - worldmarket_pool;
//   2. покупает по очереди: проекты строительства (FUN_00482FF0),
//      государство (FUN_00487410), население и заводы (FUN_00485E40);
//      каждая покупка уменьшает рабочие пулы;
//   3. убыль внутреннего пула = продано внутри страны (actual_sold_domestic),
//      убыль мирового = продано на мировом рынке (actual_sold_world); из
//      этих сумм FUN_00488080 считает выручку заводов.
// Значит всё, что мы возьмём из рабочих пулов ПОСЛЕ государственной закупки
// (хук 0x48466B, сразу после FUN_00487410, до населения и заводов) - это
// настоящая покупка: товар уходит с рынка, заводы получают за него выручку.
// Берём сначала у своей страны, потом с мирового рынка; платим из казны по
// рыночной цене; спрос (real_demand, он обнуляется в начале каждого прохода)
// регистрируем так же, как FUN_00487410. Доля купленного по каждому товару
// (frac) идёт в подсказки и карточку товара.

static const DWORD RVA_POOL_DOMESTIC       = 0xFF2500;   // DAT_013F2500
static const DWORD RVA_POOL_WORLD          = 0xFF2450;   // DAT_013F2450
static const DWORD RVA_BASES_BUY_SITE      = 0x8466B;    // после call FUN_00487410: mov ecx,[esp+0x68]; mov edx,[esp+0x6C]
static const DWORD RVA_BASES_BUY_RESUME    = 0x84673;    // sub esp,8
static const int   MARKET_FINAL_PASS       = 10;         // param_2 >= 10: итоговый дневной проход

// Элемент int64 (15 дробных бит) рабочего пула/холдера товара g или 0.
static long long* ConsHolderElem(char* holder, int g)
{
    if (!holder || g < 0 || g >= CONS_MAX_GOODS)
        return 0;
    unsigned slot = *(unsigned char*)(holder + 8 + g);
    if (slot == 0)
        return 0;
    char* begin = *(char**)(holder + 0x48);
    char* end = *(char**)(holder + 0x4C);
    if (!begin || end < begin || (int)slot >= (int)((end - begin) / 8))
        return 0;
    return (long long*)(begin + slot * 8);
}

struct ConsResult
{
    long long paid;                  // фактически потрачено (int64, 15 дробных бит)
    long long required;              // полная потребность по текущим ценам
    long long raw[24];               // суммы уровней по зданиям (в тысячных)
    double    frac[CONS_MAX_GOODS];  // какая доля потребности по товару куплена
};

// Потребность по товарам (количество * уровень) для страны; false - нет
// подходящих зданий.
static bool ConsNeeds(void* country, ConsResult* r, double* qty)
{
    memset(qty, 0, CONS_MAX_GOODS * sizeof(double));
    if (!ConsScanLevels(country, r->raw))
        return false;

    bool any = false;
    for (int i = 0; i < g_consBuildingCount; ++i)
    {
        if (r->raw[i] <= 0)
            continue;
        double levels = (double)r->raw[i] / 1000.0;
        ConsBuilding& cb = g_consBuildings[i];
        for (int k = 0; k < cb.count; ++k)
        {
            int gi = cb.goods[k].index;
            if (gi >= 0 && gi < CONS_MAX_GOODS)
            {
                qty[gi] += cb.goods[k].amount * levels;
                any = true;
            }
        }
    }
    return any;
}

// Только потребность и её стоимость (для окна бюджета до первого дневного
// прохода): ничего не меняет в игре.
__declspec(noinline) static void ConsPreview(void* country, ConsResult* r)
{
    memset(r, 0, sizeof(*r));
    for (int g = 0; g < CONS_MAX_GOODS; ++g)
        r->frac[g] = 1.0;

    if (g_consBuildingCount == 0 || !country)
        return;
    if (!g_consResolved)
        ConsResolveGoods();

    __try
    {
        double qty[CONS_MAX_GOODS];
        if (!ConsNeeds(country, r, qty))
            return;
        double cost = 0.0;
        for (int g = 0; g < CONS_MAX_GOODS; ++g)
        {
            if (qty[g] <= 0.0)
                continue;
            double pr = ConsPriceOf(g);
            if (pr > 0.0)
                cost += qty[g] * pr;
        }
        r->required = MintToFixed(cost);
        r->paid = r->required;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Настоящая закупка: забирает товар из рабочих пулов прохода, считает
// оплату, регистрирует спрос. Деньги списывает вызывающий.
__declspec(noinline) static void ConsBuyFromPools(char* market, void* country, bool addDemand, ConsResult* r)
{
    memset(r, 0, sizeof(*r));
    for (int g = 0; g < CONS_MAX_GOODS; ++g)
        r->frac[g] = 1.0;

    if (g_consBuildingCount == 0 || !country || !market)
        return;
    if (!g_consResolved)
        ConsResolveGoods();

    __try
    {
        double qty[CONS_MAX_GOODS];
        if (!ConsNeeds(country, r, qty))
            return;

        char* poolHome = (char*)(g_base + RVA_POOL_DOMESTIC);
        char* poolWorld = (char*)(g_base + RVA_POOL_WORLD);

        long long take1[CONS_MAX_GOODS], take2[CONS_MAX_GOODS];
        double price[CONS_MAX_GOODS];
        double costFull = 0.0, costGot = 0.0;
        for (int g = 0; g < CONS_MAX_GOODS; ++g)
        {
            take1[g] = take2[g] = 0;
            price[g] = 0.0;
            if (qty[g] <= 0.0)
                continue;

            double pr = ConsPriceOf(g);
            if (pr <= 0.0)
                continue;       // у товара нет рыночной цены - не покупаем
            price[g] = pr;

            long long need = MintToFixed(qty[g]);
            long long* e1 = ConsHolderElem(poolHome, g);
            long long* e2 = ConsHolderElem(poolWorld, g);
            long long a1 = (e1 && *e1 > 0) ? *e1 : 0;
            long long a2 = (e2 && *e2 > 0) ? *e2 : 0;
            take1[g] = need < a1 ? need : a1;
            long long rest = need - take1[g];
            take2[g] = rest < a2 ? rest : a2;

            costFull += qty[g] * pr;
            costGot += ((double)(take1[g] + take2[g]) / 32768.0) * pr;
        }

        // Казна: как у государственных закупок, масштабируем по деньгам.
        double money = (double)*(long long*)((char*)country + OFF_COUNTRY_MONEY) / 32768.0;
        double affordGot = 1.0, affordFull = 1.0;
        if (costGot > 0.0)
            affordGot = money <= 0.0 ? 0.0 : (money >= costGot ? 1.0 : money / costGot);
        if (costFull > 0.0)
            affordFull = money <= 0.0 ? 0.0 : (money >= costFull ? 1.0 : money / costFull);

        char* demand = *(char**)(market + OFF_MARKET_DEMAND);
        char* demandEnd = *(char**)(market + OFF_MARKET_DEMAND + 4);
        int demandCount = (demand && demandEnd >= demand) ? (int)((demandEnd - demand) / 8) : 0;

        double paid = 0.0;
        for (int g = 0; g < CONS_MAX_GOODS; ++g)
        {
            if (qty[g] <= 0.0)
                continue;

            long long s1 = take1[g], s2 = take2[g];
            if (affordGot < 1.0)
            {
                s1 = MintToFixed((double)s1 * affordGot / 32768.0);
                s2 = MintToFixed((double)s2 * affordGot / 32768.0);
            }

            if (s1 > 0)
            {
                long long* e1 = ConsHolderElem(poolHome, g);
                if (e1)
                    *e1 -= s1;
            }
            if (s2 > 0)
            {
                long long* e2 = ConsHolderElem(poolWorld, g);
                if (e2)
                    *e2 -= s2;
            }

            double bought = (double)(s1 + s2) / 32768.0;
            r->frac[g] = bought / qty[g];
            paid += bought * price[g];

            if (addDemand && demandCount > 0 && price[g] > 0.0)
            {
                unsigned dslot = *(unsigned char*)(market + OFF_MARKET_DEMAND_SLOT + g);
                if (dslot != 0 && (int)dslot < demandCount)
                    *(long long*)(demand + dslot * 8) += MintToFixed(qty[g] * affordFull);
            }
        }

        r->paid = MintToFixed(paid);
        r->required = MintToFixed(costFull);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Кэш последнего дневного расхода по стране (то, что видят интерфейс и суммы).
struct ExpSlot
{
    void*     country;
    long long value;                 // потрачено
    long long required;              // потребность по полной
    long long raw[24];               // суммы уровней по зданиям
    double    frac[CONS_MAX_GOODS];  // доля выполнения по товару
};
static ExpSlot g_expSlots[MINT_SLOTS];

static ExpSlot* ExpFindSlot(void* country, bool create)
{
    unsigned h = ((unsigned)(DWORD_PTR)country >> 4) * 2654435761u;
    for (int i = 0; i < MINT_SLOTS; ++i)
    {
        ExpSlot& sl = g_expSlots[(h + i) & (MINT_SLOTS - 1)];
        if (sl.country == country)
            return &sl;
        if (!sl.country)
        {
            if (!create)
                return 0;
            sl.country = country;
            sl.value = 0;
            sl.required = 0;
            memset(sl.raw, 0, sizeof(sl.raw));
            for (int g = 0; g < CONS_MAX_GOODS; ++g)
                sl.frac[g] = 1.0;
            return &sl;
        }
    }
    return 0;
}

// ---- текст подсказки над naval_base_expense ----
//
// Названия зданий/товаров и заголовки берём из localisation\*.csv мода
// (формат "KEY;Текст;X", cp1251, как в самой игре; байты идут в
// подсказку как есть), потом - из localisation\ игры; нет ключа - ASCII-
// запасной вариант (сам ключ / английский текст). Ищем один раз на ключ.

struct ConsLocEntry { char key[48]; char text[128]; };
static ConsLocEntry g_consLoc[64];
static int g_consLocCount = 0;

static bool ConsLocScanFile(const char* path, const char* key, char* out, size_t outSize)
{
    HANDLE h = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL, 0);
    if (h == INVALID_HANDLE_VALUE)
        return false;

    bool found = false;
    DWORD size = GetFileSize(h, 0);
    if (size != INVALID_FILE_SIZE && size > 0 && size < 48u * 1024u * 1024u)
    {
        char* buf = (char*)HeapAlloc(GetProcessHeap(), 0, (SIZE_T)size + 1);
        if (buf)
        {
            DWORD got = 0;
            if (ReadFile(h, buf, size, &got, 0))
            {
                buf[got] = 0;
                size_t klen = strlen(key);
                for (char* line = buf; *line; )
                {
                    if (_strnicmp(line, key, klen) == 0 && line[klen] == ';')
                    {
                        const char* t = line + klen + 1;
                        size_t n = 0;
                        while (*t && *t != ';' && *t != '\r' && *t != '\n' && n < outSize - 1)
                            out[n++] = *t++;
                        out[n] = 0;
                        found = n > 0;
                        break;
                    }
                    while (*line && *line != '\n')
                        ++line;
                    if (*line)
                        ++line;
                }
            }
            HeapFree(GetProcessHeap(), 0, buf);
        }
    }
    CloseHandle(h);
    return found;
}

static bool ConsLocScanDir(const char* dir, const char* key, char* out, size_t outSize)
{
    char pattern[MAX_PATH + 16];
    _snprintf_s(pattern, sizeof(pattern), _TRUNCATE, "%s\\*.csv", dir);

    WIN32_FIND_DATAA fd;
    HANDLE h = FindFirstFileA(pattern, &fd);
    if (h == INVALID_HANDLE_VALUE)
        return false;

    bool found = false;
    do
    {
        if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            continue;
        char path[MAX_PATH + 16];
        _snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\%s", dir, fd.cFileName);
        if (ConsLocScanFile(path, key, out, outSize))
        {
            found = true;
            break;
        }
    } while (FindNextFileA(h, &fd));
    FindClose(h);
    return found;
}

static const char* ConsLoc(const char* key, const char* fallback)
{
    for (int i = 0; i < g_consLocCount; ++i)
    {
        if (_stricmp(g_consLoc[i].key, key) == 0)
            return g_consLoc[i].text;
    }

    char found[128];
    bool ok = false;
    char folder[MAX_PATH];
    if (ResolveModFolder(folder, sizeof(folder)))
    {
        char dir[MAX_PATH + 16];
        _snprintf_s(dir, sizeof(dir), _TRUNCATE, "%s\\localisation", folder);
        ok = ConsLocScanDir(dir, key, found, sizeof(found));
    }
    if (!ok)
        ok = ConsLocScanDir("localisation", key, found, sizeof(found));

    if (!fallback)
        fallback = "?";
    if (g_consLocCount >= (int)(sizeof(g_consLoc) / sizeof(g_consLoc[0])))
        return ok ? "?" : fallback;

    ConsLocEntry& e = g_consLoc[g_consLocCount++];
    strncpy_s(e.key, sizeof(e.key), key, _TRUNCATE);
    strncpy_s(e.text, sizeof(e.text), ok ? found : fallback, _TRUNCATE);
    LogDbg("GoodsConsumption: локализация '%s' -> %s", e.key, ok ? "найдена в csv" : "нет, запасной текст");
    return e.text;
}

static char g_consTipText[2048];
static char g_consTipStore[2048];
static GStr g_consTipStr;

static void ConsTipAppend(const char* fmt, ...)
{
    size_t len = strlen(g_consTipText);
    if (len >= sizeof(g_consTipText) - 1)
        return;
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(g_consTipText + len, sizeof(g_consTipText) - len, _TRUNCATE, fmt, ap);
    va_end(ap);
}

static void ConsFmtNum(char* out, size_t n, double v)
{
    if (v == (double)(long long)v)
        _snprintf_s(out, n, _TRUNCATE, "%lld", (long long)v);
    else
        _snprintf_s(out, n, _TRUNCATE, "%.1f", v);
}

// Для сумм расходов (в том числе ИИ): только кэш дневного тика, одинаков
// у всех клиентов.
__declspec(noinline) static long long __cdecl GoodsExpenseFixedFor(void* country)
{
    if (!g_consActive || !country)
        return 0;
    ExpSlot* sl = ExpFindSlot(country, false);
    return sl ? sl->value : 0;
}

__declspec(noinline) static long long __cdecl GoodsExpensePlayer()
{
    return GoodsExpenseFixedFor(GetLocalPlayerCountry());
}

// Для строки окна бюджета: до первого дневного тика кэша ещё нет, тогда
// просто считаем (без записи и без спроса рынка).
static bool GoodsConsumptionActive()
{
    return g_consActive && g_consBuildingCount > 0;
}

static void GoodsExpenseDisplay(void* country, long long* paid, long long* required)
{
    *paid = 0;
    *required = 0;
    if (!GoodsConsumptionActive() || !country)
        return;
    ExpSlot* sl = ExpFindSlot(country, false);
    if (sl)
    {
        *paid = sl->value;
        *required = sl->required;
        return;
    }
    ConsResult r;
    ConsPreview(country, &r);
    *paid = r.paid;
    *required = r.required;
}

// Вызывается из обновления рынка (хук после государственной закупки) для
// каждой страны с провинциями; pass - param_2 FUN_00484060.
static void __cdecl BasesPurchaseHook(void* market, void* country, int pass)
{
    if (pass < MARKET_FINAL_PASS)
        return;                 // пробные проходы старта игры - не покупаем
    if (!GoodsConsumptionActive() || !country || !market)
        return;

    __try
    {
        static int s_lastHours = 0;
        static bool s_timeKnown = false;
        int hours = 0, monthKey = 0;
        if (MintingTimeNow(&hours, &monthKey))
        {
            if (s_timeKnown && hours != s_lastHours && hours != s_lastHours + 24)
                memset(g_expSlots, 0, sizeof(g_expSlots));
            s_lastHours = hours;
            s_timeKnown = true;
        }

        ConsResult r;
        ConsBuyFromPools((char*)market, country, g_consDemand, &r);

        ExpSlot* sl = ExpFindSlot(country, true);
        if (sl)
        {
            sl->value = r.paid;
            sl->required = r.required;
            memcpy(sl->raw, r.raw, sizeof(sl->raw));
            memcpy(sl->frac, r.frac, sizeof(sl->frac));
        }
        if (r.paid <= 0)
            return;

        unsigned* lo = (unsigned*)((char*)country + OFF_COUNTRY_MONEY);
        unsigned* hi = (unsigned*)((char*)country + OFF_COUNTRY_MONEY + 4);
        unsigned long long cur = ((unsigned long long)*hi << 32) | *lo;
        cur -= (unsigned long long)r.paid;
        *lo = (unsigned)cur;
        *hi = (unsigned)(cur >> 32);

        if (country == GetLocalPlayerCountry() && InterlockedIncrement(&g_consDailyLogged) <= 5)
            LogDbg("GoodsConsumption: день, страна игрока %p, куплено на %.2f из %.2f (казна %.1f)",
                country, (double)r.paid / 32768.0, (double)r.required / 32768.0,
                (double)(long long)cur / 32768.0);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Хук в FUN_00484060 (обновление рынка, цикл по странам): сразу после
// call FUN_00487410 (покупка государства), до FUN_00485E40 (население и
// заводы). EDI = рынок, EBX = страна, [EBP+0xC] = param_2 (номер прохода).
// Заменённые 8 байт: mov ecx,[esp+0x68]; mov edx,[esp+0x6C] - повторяем.
static DWORD g_basesBuyResume = 0;

__declspec(naked) static void BasesPurchaseThunk()
{
    __asm {
        pushad
        push dword ptr [ebp + 0xC]
        push ebx
        push edi
        call BasesPurchaseHook
        add esp, 12
        popad
        mov ecx, dword ptr [esp + 0x68]
        mov edx, dword ptr [esp + 0x6C]
        jmp dword ptr [g_basesBuyResume]
    }
}

// Для подсказки окна бюджета (вызывается из MintingBoxTipThunk, kind 2):
// std::string движка с готовым текстом лежит в статическом буфере - движок
// только копирует её в свою строку. Цвета: \xA7Y жёлтый, \xA7G зелёный, \xA7R
// красный, \xA7W белый; \xA4 - знак денег. По каждому товару: куплено /
// требуется (доля из дневного кэша игрока) и цена.
__declspec(noinline) static const GStr* __cdecl GoodsTipBuild()
{
    g_consTipText[0] = 0;
    __try
    {
        void* country = GetLocalPlayerCountry();
        if (!g_consResolved)
            ConsResolveGoods();

        long long rawSum[24];
        bool any = ConsScanLevels(country, rawSum);
        ExpSlot* slot = ExpFindSlot(country, false);

        ConsTipAppend("\xA7Y%s\xA7W", ConsLoc("BUDGET_GOODS_CONS_HEADER", "Goods bought for buildings"));

        double paid = 0.0, full = 0.0;
        for (int i = 0; any && i < g_consBuildingCount; ++i)
        {
            if (rawSum[i] <= 0)
                continue;

            ConsBuilding& cb = g_consBuildings[i];
            double levels = (double)rawSum[i] / 1000.0;
            char lv[32];
            ConsFmtNum(lv, sizeof(lv), levels);
            ConsTipAppend("\n\n\xA7Y%s\xA7W (%s: %s)", ConsLoc(cb.name, cb.name),
                ConsLoc("BUDGET_GOODS_CONS_LEVELS", "levels"), lv);

            for (int k = 0; k < cb.count; ++k)
            {
                ConsGood& g = cb.goods[k];
                if (g.index < 0)
                    continue;
                double need = g.amount * levels;
                double f = slot ? slot->frac[g.index] : 1.0;
                double bought = need * f;
                double price = ConsPriceOf(g.index);
                if (price < 0.0)
                    price = 0.0;
                full += need * price;
                paid += bought * price;

                char ns[32], bs[32];
                ConsFmtNum(ns, sizeof(ns), need);
                ConsFmtNum(bs, sizeof(bs), bought);
                char col = f >= 0.999 ? 'G' : (f >= 0.5 ? 'Y' : 'R');
                ConsTipAppend("\n  %s: %s \xA7%c%s\xA7W / %s \xA7Y%s\xA7W  (%.2f\xA4)", ConsLoc(g.name, g.name),
                    ConsLoc("BUDGET_GOODS_CONS_BOUGHT", "bought"), col, bs,
                    ConsLoc("BUDGET_GOODS_CONS_NEED", "needed"), ns, price);
            }
        }

        ConsTipAppend("\n\n%s: \xA7Y%.1f\xA4\xA7W", ConsLoc("BUDGET_GOODS_CONS_TOTAL", "Total per day"), paid);
        if (full > 0.0 && paid < full * 0.999)
            ConsTipAppend("\n%s: \xA7R%d%%\xA7W", ConsLoc("BUDGET_GOODS_CONS_FILL", "Purchases fulfilled"),
                (int)(paid * 100.0 / full));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }

    MakeStr(&g_consTipStr, g_consTipStore, sizeof(g_consTipStore), g_consTipText);
    return &g_consTipStr;
}

// ---- карточка товара (окно trade_flow), колонка "Использовано" ----
//
// Окно - FUN_00477ad0 (param_1 = окно: +0x10 = выбранный товар, +0x54 =
// listbox used_by_listbox). Строки колонки собираются в локальный vector
// записей по 0x4C байта (begin/end/cap на [esp+0xC8]) и перед сортировкой
// (FUN_0047BEA0) и выводом в listbox (FUN_00476C40) уходят по общему
// пути с 0x479C07 - сюда сходятся все ветки (ДП/заводы/население/военные
// затраты). Запись (создаёт FUN_00476130, показывает FUN_00476590):
//   +0x00 тип значка: 0 завод, 1 ДП, 2 население, 3 военные
//   +0x04 std::string - название строки;  +0x20 std::string - подсказка
//   +0x3C float - количество;  +0x40 dword;  +0x44 byte - показывать число;
//   +0x48 dword - -1: без кнопки.
// Военные затраты (0x479985..0x479BE0) делают то же самое: ctor, строки,
// float = fixed/32768, FUN_0047BB40 (thiscall ECX=запись, [стек]=vector)
// кладёт копию в vector, FUN_0047AA50 (ESI=запись) освобождает строки
// временной записи, а fixed-количество прибавляется к итогу "Всего
// использовано" (int64 на [esp+0x28]).
// Мы перед сортировкой добавляем по записи (значок "военные") на каждое
// здание с goods_consumption, потребляющее этот товар: количество = уровни
// таких зданий ЭТОЙ страны (из её дневного кэша) * количество в buildings.txt *
// доля купленного. Название - из localisation\*.csv: ключ GOODS_CONS_NAME_<здание>
// (напр. GOODS_CONS_NAME_naval_base = "Морские базы"), нет - ключ <здание>.

static const DWORD RVA_TRADEFLOW_USED_SITE   = 0x79C07;  // mov edi,[esp+0xCC] (7 байт)
static const DWORD RVA_TRADEFLOW_USED_RESUME = 0x79C0E;  // mov esi,[esp+0xC8]
static const DWORD RVA_TRADEFLOW_ENTRY_CTOR  = 0x76130;  // FUN_00476130(entry) stdcall, ret 4
static const DWORD RVA_TRADEFLOW_ENTRY_PUSH  = 0x7BB40;  // FUN_0047BB40 thiscall(ECX=entry, vector*)
static const DWORD RVA_TRADEFLOW_ENTRY_FREE  = 0x7AA50;  // FUN_0047AA50 ESI=entry
static const int   OFF_TRADEFLOW_GOOD        = 0x10;     // окно -> товар (+8 = индекс)
static const int   OFF_TRADEFLOW_COUNTRY     = 0x0C;     // окно -> индекс страны, чьи данные показаны

typedef void*(__stdcall* tTradeFlowEntryCtor)(void* entry);
typedef void(__fastcall* tTradeFlowEntryPush)(void* entry, void* edx, void* vec);

static void ConsAssignString(void* dest, const char* text)
{
    char store[1100];
    GStr str;
    MakeStr(&str, store, sizeof(store), text);
    ((tStrAssign)(g_base + RVA_STR_ASSIGN))(dest, 0, &str, 0, 0xFFFFFFFFu);
}

// Добавляет записи в vector колонки "Использовано"; возвращает добавленное
// количество (int64, 15 дробных бит) для итога.
__declspec(noinline) static long long __cdecl TradeFlowAppendUsed(void* window, void* vec)
{
    long long total = 0;
    if (!GoodsConsumptionActive() || !window || !vec)
        return 0;

    __try
    {
        char* good = *(char**)((char*)window + OFF_TRADEFLOW_GOOD);
        if (!good)
            return 0;
        int gi = *(int*)(good + 8);
        if (gi < 0 || gi >= CONS_MAX_GOODS)
            return 0;
        if (!g_consResolved)
            ConsResolveGoods();

        // Окно показывает данные ОДНОЙ страны (в заголовке "N% от мирового
        // производства"; индекс страны - window+0xC), а не всего мира.
        void* country = GetCountryPtr(*(int*)((char*)window + OFF_TRADEFLOW_COUNTRY));
        ExpSlot* slot = country ? ExpFindSlot(country, false) : 0;
        if (!slot)
            return 0;

        for (int bi = 0; bi < g_consBuildingCount; ++bi)
        {
            ConsBuilding& cb = g_consBuildings[bi];
            double perLevel = 0.0;
            for (int k = 0; k < cb.count; ++k)
            {
                if (cb.goods[k].index == gi)
                    perLevel += cb.goods[k].amount;
            }
            if (perLevel <= 0.0)
                continue;

            long long raw = slot->raw[bi];
            if (raw <= 0)
                continue;

            double levels = (double)raw / 1000.0;
            double need = perLevel * levels;
            double qty = need * slot->frac[gi];
            long long fixedQty = MintToFixed(qty);
            if (fixedQty <= 0)
                continue;

            char nameKey[64];
            _snprintf_s(nameKey, sizeof(nameKey), _TRUNCATE, "GOODS_CONS_NAME_%s", cb.name);
            const char* name = ConsLoc(nameKey, 0);
            if (!name || strcmp(name, "?") == 0)
                name = ConsLoc(cb.name, cb.name);
            const char* goodName = ConsLoc(good ? GStrText(good + 0xC) : "", GStrText(good + 0xC));

            char lv[32], qs[32], ns[32];
            ConsFmtNum(lv, sizeof(lv), levels);
            ConsFmtNum(qs, sizeof(qs), qty);
            ConsFmtNum(ns, sizeof(ns), need);
            char col = qty >= need * 0.999 ? 'G' : (qty >= need * 0.5 ? 'Y' : 'R');
            char tip[640];
            _snprintf_s(tip, sizeof(tip), _TRUNCATE, "\xA7Y%s\xA7W (%s: %s)\n%s: %s \xA7%c%s\xA7W / %s \xA7Y%s\xA7W",
                name, ConsLoc("BUDGET_GOODS_CONS_LEVELS", "levels"), lv, goodName,
                ConsLoc("BUDGET_GOODS_CONS_BOUGHT", "bought"), col, qs,
                ConsLoc("BUDGET_GOODS_CONS_NEED", "needed"), ns);

            char entry[0x4C];
            memset(entry, 0, sizeof(entry));
            ((tTradeFlowEntryCtor)(g_base + RVA_TRADEFLOW_ENTRY_CTOR))(entry);
            *(int*)entry = 3;
            ConsAssignString(entry + 0x04, name);
            ConsAssignString(entry + 0x20, tip);
            *(float*)(entry + 0x3C) = (float)((double)fixedQty / 32768.0);
            *(int*)(entry + 0x40) = -1;
            *(unsigned char*)(entry + 0x44) = 1;
            *(int*)(entry + 0x48) = -1;

            ((tTradeFlowEntryPush)(g_base + RVA_TRADEFLOW_ENTRY_PUSH))(entry, 0, vec);

            DWORD freeFn = g_base + RVA_TRADEFLOW_ENTRY_FREE;
            void* pEntry = entry;
            __asm {
                push esi
                mov esi, pEntry
                call freeFn
                pop esi
            }

            total += fixedQty;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
    return total;
}

static DWORD g_tradeFlowUsedResume = 0;

__declspec(naked) static void TradeFlowUsedThunk()
{
    __asm {
        sub esp, 8
        pushad
        lea eax, [esp + 0x20 + 8 + 0xC8]
        push eax
        push dword ptr [ebp + 8]
        call TradeFlowAppendUsed
        add esp, 8
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        pop eax
        pop edx
        add dword ptr [esp + 0x28], eax
        adc dword ptr [esp + 0x2C], edx
        mov edi, dword ptr [esp + 0xCC]
        jmp dword ptr [g_tradeFlowUsedResume]
    }
}

// FUN_0052B5D0 (фактические расходы; EAX=out, EDX=страна). Исходные 18 байт
//   mov [eax],0; mov edi,[eax]; mov [eax+4],0; mov ebx,[eax+4]
// обнуляли накопитель - теперь он стартует с расхода на здания.
static DWORD g_expActResume = 0;

__declspec(naked) static void GoodsExpenseActualThunk()
{
    __asm {
        sub esp, 8
        pushad
        push edx
        call GoodsExpenseFixedFor
        add esp, 4
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        pop edi
        pop ebx
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], ebx
        jmp dword ptr [g_expActResume]
    }
}

// FUN_0052B1C0 (расчётные расходы): единственный эпилог, EDI=страна ([ebp+8]),
// EBX=out (int64).
static DWORD g_expProjResume = 0;

__declspec(naked) static void GoodsExpenseProjectedThunk()
{
    __asm {
        sub esp, 8
        pushad
        push edi
        call GoodsExpenseFixedFor
        add esp, 4
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        pop eax
        pop edx
        add dword ptr [ebx], eax
        adc dword ptr [ebx + 4], edx
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        jmp dword ptr [g_expProjResume]
    }
}

// Верхняя панель: два встроенных расчёта "доход - расходы" (график и текст
// FUN_0070EC60) складывают расходы сами, мимо FUN_0052B5D0. Расходы там в
// EAX:ECX (график, низ:верх) и ESI:EAX (текст).
static DWORD g_topbarHistResume = 0;
static DWORD g_topbarTextResume = 0;

__declspec(naked) static void GoodsExpenseTopbarHistThunk()
{
    __asm {
        sub esp, 8
        pushad
        call GoodsExpensePlayer
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        add eax, dword ptr [esp]
        adc ecx, dword ptr [esp + 4]
        lea esp, [esp + 8]
        mov edx, dword ptr [esp + 0x40]
        sub edx, eax
        jmp dword ptr [g_topbarHistResume]
    }
}

__declspec(naked) static void GoodsExpenseTopbarTextThunk()
{
    __asm {
        sub esp, 8
        pushad
        call GoodsExpensePlayer
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], edx
        popad
        add esi, dword ptr [esp]
        adc eax, dword ptr [esp + 4]
        lea esp, [esp + 8]
        sub ecx, esi
        mov esi, dword ptr [ebp - 0xD8]
        sbb esi, eax
        jmp dword ptr [g_topbarTextResume]
    }
}

// ---- общий дневной хук страны (minting + закупка товаров) ----

static DWORD g_dailyOrig = 0;
static bool  g_dailyInstalled = false;

static void __cdecl CountryDailyHook(void* country)
{
    MintingDailyCredit(country);
}

// Тот же контракт, что у FUN_00538200 (stdcall, страна в стеке): всё
// самодостаточно в одном pushad/popad, затем хвостовой прыжок в оригинал.
__declspec(naked) static void CountryDailyThunk()
{
    __asm {
        pushad
        mov eax, dword ptr [esp + 0x24]
        push eax
        call CountryDailyHook
        add esp, 4
        popad
        jmp dword ptr [g_dailyOrig]
    }
}

static bool InstallCountryDailyCall()
{
    if (g_dailyInstalled)
        return true;

    unsigned char* call = (unsigned char*)(g_base + RVA_MINT_DAILY_CALL);
    DWORD expectRel = (g_base + RVA_MINT_DAILY_TARGET) - ((DWORD)(DWORD_PTR)call + 5);
    if (call[0] != 0xE8 || *(DWORD*)(call + 1) != expectRel)
    {
        Log("CountryDaily: сигнатура call не совпала rva %06X (%02X %02X %02X %02X %02X)",
            RVA_MINT_DAILY_CALL, call[0], call[1], call[2], call[3], call[4]);
        return false;
    }

    g_dailyOrig = g_base + RVA_MINT_DAILY_TARGET;
    DWORD rel = (DWORD)(DWORD_PTR)&CountryDailyThunk - ((DWORD)(DWORD_PTR)call + 5);
    DWORD oldProtect = 0;
    if (!VirtualProtect(call + 1, 4, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    *(DWORD*)(call + 1) = rel;
    VirtualProtect(call + 1, 4, oldProtect, &oldProtect);
    g_dailyInstalled = true;
    Log("CountryDaily: call подменён rva %06X", RVA_MINT_DAILY_CALL);
    return true;
}

static bool InstallGoodsConsumption()
{
    g_fnIsBadReadPtr = SafeIsBadReadPtr;

    // Чтение блока - всегда (иначе goods_consumption в buildings.txt роняет игру).
    const void* expect = (void*)(g_base + RVA_CBUILDING_PROP_FN);
    void** slotA = (void**)(g_base + RVA_CBUILDING_VTABLE) + CBUILDING_PROP_SLOT;
    void** slotB = (void**)(g_base + RVA_CBUILDING_VTABLE2) + CBUILDING_PROP_SLOT;
    if (*slotA != expect || *slotB != expect)
    {
        Log("GoodsConsumption: слот %d CBuilding указывает на %p/%p, ожидали %p - не включаем",
            CBUILDING_PROP_SLOT, *slotA, *slotB, expect);
        return false;
    }

    void* orig = 0;
    if (!PatchSlot(RVA_CBUILDING_VTABLE, CBUILDING_PROP_SLOT, (void*)&BuildingPropThunk, &orig) ||
        !PatchSlot(RVA_CBUILDING_VTABLE2, CBUILDING_PROP_SLOT, (void*)&BuildingPropThunk, 0))
    {
        Log("GoodsConsumption: PatchSlot CBuilding не удался");
        return false;
    }
    g_origBuildingProp = (tBuildingProp)orig;
    Log("GoodsConsumption: чтение goods_consumption установлено (слот %d двух vftable CBuilding)",
        CBUILDING_PROP_SLOT);

    if (!g_settings.goodsConsumption)
    {
        Log("GoodsConsumption: ENABLE_GOODS_CONSUMPTION=0 - блок читается, но ничего не покупается");
        return true;
    }

    g_consDemand = g_settings.goodsConsumptionDemand;

    // Закупка: хук в обновлении рынка (см. BasesPurchaseThunk).
    static const unsigned char BUY_SIG[8] = { 0x8B, 0x4C, 0x24, 0x68, 0x8B, 0x54, 0x24, 0x6C };
    static const unsigned char BUY_RESUME[3] = { 0x83, 0xEC, 0x08 };
    g_basesBuyResume = g_base + RVA_BASES_BUY_RESUME;
    bool buyOk = WriteJmpSite(RVA_BASES_BUY_SITE, BUY_SIG, sizeof(BUY_SIG), sizeof(BUY_SIG),
        RVA_BASES_BUY_RESUME, BUY_RESUME, sizeof(BUY_RESUME),
        (void*)&BasesPurchaseThunk, "GoodsConsumption закупка (рынок)");
    if (!buyOk)
    {
        Log("GoodsConsumption: хук закупки в обновлении рынка не встал - закупка выключена");
        return true;
    }

    static const unsigned char ACT_SIG[18] =
    { 0xC7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x38, 0xC7, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x58, 0x04 };
    static const unsigned char ACT_RESUME[5] = { 0xBA, 0x0B, 0x00, 0x00, 0x00 };
    g_expActResume = g_base + RVA_EXP_ACT_RESUME;
    bool actOk = WriteJmpSite(RVA_EXP_ACT_SEED, ACT_SIG, sizeof(ACT_SIG), sizeof(ACT_SIG),
        RVA_EXP_ACT_RESUME, ACT_RESUME, sizeof(ACT_RESUME),
        (void*)&GoodsExpenseActualThunk, "GoodsConsumption расходы(факт)");

    static const unsigned char PROJ_SIG[5] = { 0x5F, 0x5E, 0x8B, 0xC3, 0x5B };
    static const unsigned char PROJ_RESUME[4] = { 0x8B, 0xE5, 0x5D, 0xC2 };
    g_expProjResume = g_base + RVA_EXP_PROJ_RESUME;
    bool projOk = WriteJmpSite(RVA_EXP_PROJ_EPILOGUE, PROJ_SIG, sizeof(PROJ_SIG), sizeof(PROJ_SIG),
        RVA_EXP_PROJ_RESUME, PROJ_RESUME, sizeof(PROJ_RESUME),
        (void*)&GoodsExpenseProjectedThunk, "GoodsConsumption расходы(расчёт)");

    static const unsigned char HIST_SIG[6] = { 0x8B, 0x54, 0x24, 0x40, 0x2B, 0xD0 };
    static const unsigned char HIST_RESUME[4] = { 0x8B, 0x44, 0x24, 0x44 };
    g_topbarHistResume = g_base + RVA_TOPBAR_HIST_RESUME;
    bool histOk = WriteJmpSite(RVA_TOPBAR_HIST_SITE, HIST_SIG, sizeof(HIST_SIG), sizeof(HIST_SIG),
        RVA_TOPBAR_HIST_RESUME, HIST_RESUME, sizeof(HIST_RESUME),
        (void*)&GoodsExpenseTopbarHistThunk, "GoodsConsumption график панели");

    static const unsigned char TEXT_SIG[10] = { 0x2B, 0xCE, 0x8B, 0xB5, 0x28, 0xFF, 0xFF, 0xFF, 0x1B, 0xF0 };
    static const unsigned char TEXT_RESUME[3] = { 0xB8, 0x0F, 0x00 };
    g_topbarTextResume = g_base + RVA_TOPBAR_TEXT_RESUME;
    bool textOk = WriteJmpSite(RVA_TOPBAR_TEXT_SITE, TEXT_SIG, sizeof(TEXT_SIG), sizeof(TEXT_SIG),
        RVA_TOPBAR_TEXT_RESUME, TEXT_RESUME, sizeof(TEXT_RESUME),
        (void*)&GoodsExpenseTopbarTextThunk, "GoodsConsumption текст панели");

    InstallBudgetWindowHooks();
    g_consActive = true;

    static const unsigned char TF_SIG[7] = { 0x8B, 0xBC, 0x24, 0xCC, 0x00, 0x00, 0x00 };
    static const unsigned char TF_RESUME[7] = { 0x8B, 0xB4, 0x24, 0xC8, 0x00, 0x00, 0x00 };
    g_tradeFlowUsedResume = g_base + RVA_TRADEFLOW_USED_RESUME;
    bool tfOk = WriteJmpSite(RVA_TRADEFLOW_USED_SITE, TF_SIG, sizeof(TF_SIG), sizeof(TF_SIG),
        RVA_TRADEFLOW_USED_RESUME, TF_RESUME, sizeof(TF_RESUME),
        (void*)&TradeFlowUsedThunk, "GoodsConsumption карточка товара");

    Log("GoodsConsumption: установлен (закупка=%d расходы факт=%d расчёт=%d график=%d текст=%d, "
        "строка бюджета=%d, подсказка=%d, карточка товара=%d, спрос рынка=%d)",
        (int)buyOk, (int)actOk, (int)projOk, (int)histOk, (int)textOk,
        (int)g_budgetUiOk, (int)g_budgetBoxTipOk, (int)tfOk, (int)g_consDemand);
    return true;
}


// ---------------------------------------------------------------
// Разброс броска в бою (COMBAT_ROLL_MIN..COMBAT_ROLL_MAX).
//
// Формула броска раньше была константой прямо в точке вызова:
// FUN_0059ca40 (разрешение раунда боя) 4 раза вызывает генератор
// случайных чисел и берёт остаток от деления на 10. Сторонний
// Vic2_Roll_Changer.py (скрипт лежит в V2BDSM, не часть нашего DLL)
// статически переписал exe: все 4 места вызова теперь зовут общую
// подпрограмму в неиспользуемом хвосте секции .text (RVA 0x889113),
// которая делает mov ecx,<модуль>; idiv ecx; add edx,<минимум>; ret -
// подтверждено в Ghidra (get_xrefs_to на адрес пещеры даёт ровно эти
// 4 вызова из FUN_0059ca40, а её result сохраняется в +0x30 у каждой
// из двух сторон боя). Этот exe уже был пропатчен так на диапазон
// 2-5 - мы просто переписываем модуль/минимум в той же пещере на
// лету при каждом запуске, без изменения файла.
//
// Если exe НИКОГДА не патчился этим скриптом (пещеры нет, все 4
// вызова всё ещё делают "cdq; mov ecx,0Ah; idiv ecx" инлайном) -
// сигнатура не совпадёт, и мы это НЕ чиним: создание новой пещеры и
// переброс 4 вызовов - отдельная задача, которую можно сделать тем
// же скриптом или отдельным патчем позже.
// ---------------------------------------------------------------

static const DWORD RVA_COMBAT_ROLL_CAVE = 0x889113;

// Байты 0-1 пещеры (изначально "F2 00") в сигнатуру не входят: это
// хвост абсолютного адреса из ВАНИЛЬНОГО кода на этом месте (сам
// скрипт-патчер его не трогал, начал писать только с байта 10 - B9),
// и он остался под релокационной записью exe. Загрузчик Windows сам
// правит эти 2 байта под дельту ASLR при каждом запуске (проверено
// живьём: база 00FD0000 вместо предпочитаемой 00400000, дельта
// 00BD0000 - и байты 0-1 стали AF 01 вместо F2 00, ровно на старшее
// слово дельты). Байты 11..14 (модуль, mov ecx,imm32) и байт 19
// (минимум, add edx,imm8) - тоже не в сигнатуре, но по другой причине:
// это переменные данные, которые мы сами переписываем.
static const unsigned char COMBAT_ROLL_PREFIX[9] =
{ 0xE9, 0x96, 0x5C, 0xE9, 0xFF, 0x00, 0x00, 0x00, 0xB9 };
static const unsigned char COMBAT_ROLL_MID[4] = { 0xF7, 0xF9, 0x83, 0xC2 };

static bool InstallCombatRoll()
{
    if (g_settings.combatRollMin < 0 || g_settings.combatRollMin > 127 ||
        g_settings.combatRollMax < g_settings.combatRollMin)
    {
        Log("CombatRoll: некорректный диапазон %d..%d - не патчим",
            g_settings.combatRollMin, g_settings.combatRollMax);
        return false;
    }

    unsigned char* cave = (unsigned char*)(g_base + RVA_COMBAT_ROLL_CAVE);

    if (memcmp(cave + 2, COMBAT_ROLL_PREFIX, sizeof(COMBAT_ROLL_PREFIX)) != 0 ||
        memcmp(cave + 15, COMBAT_ROLL_MID, sizeof(COMBAT_ROLL_MID)) != 0 ||
        cave[20] != 0xC3)
    {
        Log("CombatRoll: пещера не найдена (exe не пропатчен Vic2_Roll_Changer.py?) - не патчим. "
            "base=%08X rva=%08X байты: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X "
            "%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",
            g_base, RVA_COMBAT_ROLL_CAVE,
            cave[0], cave[1], cave[2], cave[3], cave[4], cave[5], cave[6], cave[7], cave[8], cave[9], cave[10],
            cave[11], cave[12], cave[13], cave[14], cave[15], cave[16], cave[17], cave[18], cave[19], cave[20]);
        return false;
    }

    DWORD modulo = (DWORD)(g_settings.combatRollMax - g_settings.combatRollMin + 1);

    DWORD oldProtect = 0;
    if (!VirtualProtect(cave, 21, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    *(DWORD*)(cave + 11) = modulo;
    cave[19] = (unsigned char)g_settings.combatRollMin;

    VirtualProtect(cave, 21, oldProtect, &oldProtect);

    Log("CombatRoll: диапазон %d..%d (модуль=%u)",
        g_settings.combatRollMin, g_settings.combatRollMax, modulo);
    return true;
}


// ---------------------------------------------------------------
// Диагностика бага с чек-суммой (временный патч, не для релиза)
//
// Баг: чек-сумма в углу экрана меняется на одну букву после входа в
// партию (одиночную или сетевую) - воспроизводится и на ванили, без
// нашего мода. FUN_006377a0 (RVA 0x2377a0) считает "файловую"
// чек-сумму; get_xrefs_to в Ghidra нашёл только один статический
// вызов (из инициализации приложения, до главного меню) - но это не
// исключает, что счётчик читается позже ещё раз кодом внутри этой же
// функции при повторном входе, либо вызов идёт откуда-то косвенно.
//
// Первая попытка (хук на FUN_0076b4b0, копирование чек-суммы в
// структуру лобби при входе в партию) дала raw=0 каждый раз - то
// место читает поле ДО того, как оно реально заполнено, тупик.
//
// Вторая попытка (эта): реальный аккумулятор чек-суммы - раскрыт в
// дизасме, прямо перед тем, как строится "Checksum is <value>":
//   00638a4b: MOV EDX,[ECX+0x30]   ; ECX = param_1 (this), +0x30 -
//                                    итоговое целое чек-суммы
//   00638a4e: PUSH 0xe07d2c        ; "Checksum is "
// Перехватываем блок из 3 инструкций перед этим чтением (11 байт,
// rva 0x2384a0..0x2384ab: PUSH EBX; PUSH 0xC; MOV byte[ESP+0x3D4],0x30),
// логируем ECX и *(ECX+0x30), затем воспроизводим эти 3 инструкции и
// возвращаемся - "MOV EDX,[ECX+0x30]" после нас выполняется как есть,
// нетронутой.
// ---------------------------------------------------------------

static const DWORD RVA_CHECKSUM_HOOK   = 0x238A40;
static const DWORD RVA_CHECKSUM_RESUME = 0x238A4B;

static const unsigned char CHECKSUM_HOOK_SIG[11] =
{
    0x53,                                     // push ebx
    0x6A, 0x0C,                               // push 0xC
    0xC6, 0x84, 0x24, 0xD4, 0x03, 0x00, 0x00, 0x30  // mov byte ptr [esp+0x3D4],0x30
};

static DWORD g_checksumResumeAddr = 0;
static int g_checksumHookHits = 0;

// Сохраняем указатель "this" из ChecksumCompute, чтобы позже (при
// входе в лобби) перечитать ТОТ ЖЕ +0x30 напрямую, без вызова функции
// целиком - проверяем, не правится ли аккумулятор тихо, в обход
// FUN_006377a0.
static void* g_checksumAppPtr = 0;

static void __cdecl LogChecksumCompute(void* param1)
{
    ++g_checksumHookHits;
    g_checksumAppPtr = param1;

    int checksum = 0;
    __try
    {
        checksum = *(int*)((char*)param1 + 0x30);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbg("ChecksumCompute[%d]: param1=%08X - память +0x30 не читается",
            g_checksumHookHits, (unsigned)(DWORD_PTR)param1);
        return;
    }

    LogDbg("ChecksumCompute[%d]: param1=%08X value=%d (%08X)",
        g_checksumHookHits, (unsigned)(DWORD_PTR)param1, checksum, (unsigned)checksum);
}

__declspec(naked) static void ChecksumComputeThunk()
{
    __asm {
        push ecx
        push edx
        push eax
        push ecx
        call LogChecksumCompute
        add esp, 4
        pop eax
        pop edx
        pop ecx
        push ebx
        push 0x0C
        mov byte ptr [esp + 0x3D4], 0x30
        jmp dword ptr [g_checksumResumeAddr]
    }
}

static bool InstallChecksumDiagnostic()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_CHECKSUM_HOOK);

    if (memcmp(hook, CHECKSUM_HOOK_SIG, sizeof(CHECKSUM_HOOK_SIG)) != 0)
    {
        Log("ChecksumCompute: сигнатура не совпала (%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X) - не патчим",
            hook[0], hook[1], hook[2], hook[3], hook[4], hook[5], hook[6], hook[7], hook[8], hook[9], hook[10]);
        return false;
    }

    g_checksumResumeAddr = g_base + RVA_CHECKSUM_RESUME;

    unsigned char patch[11];
    memset(patch, 0x90, sizeof(patch));
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&ChecksumComputeThunk - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("ChecksumCompute: установлен на rva %06X", RVA_CHECKSUM_HOOK);
    return true;
}

// Третий хук: FUN_0076b4b0 (RVA 0x36b4b0) - подтверждено, срабатывает
// при каждом входе в лобби/партию (3 раза на 3 входа в прошлом тесте).
// На этот раз не просто читаем её собственный [EAX+0x130] (там всегда
// 0 - уже проверено), а ЗАОДНО перечитываем аккумулятор чек-суммы из
// ChecksumCompute напрямую по сохранённому g_checksumAppPtr - если он
// меняется между входами, значит его правит что-то в обход
// FUN_006377a0 (которая, как подтвердил ChecksumCompute, вызывается
// только один раз за сессию).
static const DWORD RVA_LOBBY_ENTRY_HOOK   = 0x36B4F6;
static const DWORD RVA_LOBBY_ENTRY_RESUME = 0x36B4FC;

static const unsigned char LOBBY_ENTRY_SIG[6] = { 0x8B, 0x80, 0x30, 0x01, 0x00, 0x00 };

static DWORD g_lobbyEntryResumeAddr = 0;
static int g_lobbyEntryHits = 0;

static void __cdecl LogLobbyEntry(void* pObj)
{
    ++g_lobbyEntryHits;

    DWORD raw = 0;
    __try { raw = *(DWORD*)((char*)pObj + 0x130); }
    __except (EXCEPTION_EXECUTE_HANDLER) { raw = 0; }

    if (g_checksumAppPtr == 0)
    {
        LogDbg("LobbyEntry[%d]: pObj=%08X raw130=%08X (g_checksumAppPtr ещё не установлен)",
            g_lobbyEntryHits, (unsigned)(DWORD_PTR)pObj, raw);
        return;
    }

    int accum = 0;
    __try { accum = *(int*)((char*)g_checksumAppPtr + 0x30); }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbg("LobbyEntry[%d]: pObj=%08X raw130=%08X, аккумулятор (%08X+0x30) не читается",
            g_lobbyEntryHits, (unsigned)(DWORD_PTR)pObj, raw, (unsigned)(DWORD_PTR)g_checksumAppPtr);
        return;
    }

    LogDbg("LobbyEntry[%d]: pObj=%08X raw130=%08X, аккумулятор сейчас=%d (%08X)",
        g_lobbyEntryHits, (unsigned)(DWORD_PTR)pObj, raw, accum, (unsigned)accum);
}

__declspec(naked) static void LobbyEntryThunk()
{
    __asm {
        push eax
        push ecx
        push edx
        push eax
        call LogLobbyEntry
        add esp, 4
        pop edx
        pop ecx
        pop eax
        mov eax, [eax + 0x130]
        jmp dword ptr [g_lobbyEntryResumeAddr]
    }
}

static bool InstallLobbyEntryHook()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_LOBBY_ENTRY_HOOK);

    if (memcmp(hook, LOBBY_ENTRY_SIG, sizeof(LOBBY_ENTRY_SIG)) != 0)
    {
        Log("LobbyEntry: сигнатура не совпала (%02X %02X %02X %02X %02X %02X) - не патчим",
            hook[0], hook[1], hook[2], hook[3], hook[4], hook[5]);
        return false;
    }

    g_lobbyEntryResumeAddr = g_base + RVA_LOBBY_ENTRY_RESUME;

    unsigned char patch[6];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&LobbyEntryThunk - ((DWORD)hook + 5);
    patch[5] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("LobbyEntry: установлен на rva %06X", RVA_LOBBY_ENTRY_HOOK);
    return true;
}

// ---------------------------------------------------------------
// OOS: FUN_00682EC0 (RVA 0x282EC0) — единственный билдер диалога
// "Games out of synch" / OOS_TITLE. Один caller (0072ECF0):
//   mov eax, [g_session]; add ecx, 0x3C; push ecx; push eax;
//   call FUN_00682EC0; ret
// После DIFF нет паузы и нет дисконнекта — caller сразу ret.
// В прологе функции: mov byte [session+0xB20], 1 (каждый день,
// до сравнения). Дальше call сверки векторов; jz ~+0x8D8
// пропускает ~2 КБ билдера диалога при MATCH. Игра тикает дальше.
// Пишем Logs\v2dll_oos.log на каждый дневной вызов (SYNC и DIFF).
// Пролог 55 8B EC 6A FF + уникальный sub esp,0x140.
//
// Игра сверяет std::vector<dword> локальной сессии (arg0+0xB74) с
// вектором пира (arg1 = packet+0x3C, команда "ingame_session").
// FUN_00682EC0 вызывается КАЖДЫЙ игровой день в MP, не только при
// OOS: при совпадении диалог не строится. Слотов обычно два
// (resize(2)): слот 0 — аддитивная сумма/счётчик (растёт ~тысячи
// за день), слот 1 в этом билде всегда 0. Дата в +0xB0C — часы,
// эпоха 0x29C55C0 = 5000*365*24.
// Рядом session+0xB84 — вектор 16-байтных записей (ptr + 3 dword).
// В пакет MP он не входит; при OOS пишем локальный дамп, чтобы
// два клиента сверили его между собой.
// ---------------------------------------------------------------

static const DWORD RVA_OOS_REPORT = 0x282EC0;
static const unsigned char OOS_POST_SEH[11] =
    { 0x81, 0xEC, 0x40, 0x01, 0x00, 0x00, 0x53, 0x56, 0x8B, 0x75, 0x08 };

static DWORD g_oosResume = 0;
static void* g_realOosReport = 0;
__declspec(align(16)) static unsigned char g_trampOosReport[32];
static int g_oosHits = 0;
static int g_syncHits = 0;
static char g_lastChecksumLine[256] = "none";

static void RememberChecksum(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(g_lastChecksumLine, sizeof(g_lastChecksumLine), _TRUNCATE, fmt, ap);
    va_end(ap);
}

static void LogOosFile(const char* fmt, ...)
{
    InitLogDir();

    if (g_logCsInit)
        EnterCriticalSection(&g_logCs);

    FILE* f = 0;
    if (_wfopen_s(&f, g_oosLogFile, g_oosLogStarted ? L"a" : L"w") != 0 || !f)
    {
        if (g_logCsInit)
            LeaveCriticalSection(&g_logCs);
        return;
    }
    g_oosLogStarted = true;

    SYSTEMTIME st;
    GetLocalTime(&st);
    fprintf(f, "%04u-%02u-%02u %02u:%02u:%02u.%03u ",
        (unsigned)st.wYear, (unsigned)st.wMonth, (unsigned)st.wDay,
        (unsigned)st.wHour, (unsigned)st.wMinute, (unsigned)st.wSecond,
        (unsigned)st.wMilliseconds);

    va_list ap;
    va_start(ap, fmt);
    vfprintf(f, fmt, ap);
    va_end(ap);
    fprintf(f, "\n");
    fclose(f);

    if (g_logCsInit)
        LeaveCriticalSection(&g_logCs);
}

static void DumpPtrLine(const char* tag, void* p)
{
    unsigned d[8];
    memset(d, 0, sizeof(d));
    int ok = 0;
    __try
    {
        memcpy(d, p, sizeof(d));
        ok = 1;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        ok = 0;
    }

    if (!ok)
    {
        LogOosFile("  %s=%08X unreadable", tag, (unsigned)(DWORD_PTR)p);
        return;
    }
    LogOosFile("  %s=%08X %08X %08X %08X %08X %08X %08X %08X %08X",
        tag, (unsigned)(DWORD_PTR)p,
        d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7]);
}

static const int OOS_VEC_OFF = 0xB74;
static const int OOS_DATE_OFF = 0xB0C;
static const int OOS_FLAG_OFF = 0xB20;
static const int OOS_REC_OFF = 0xB84;
static const int OOS_MAX_SLOTS = 256;
static const int OOS_REC_MAX = 256;
static const int OOS_DATE_EPOCH = 0x029C55C0;

static const char* OosSlotLabel(int i)
{
    if (i == 0)
        return "sum";
    if (i == 1)
        return "aux";
    return "extra";
}

static void FormatVic2Date(int raw, char* buf, size_t bufsz)
{
    static const int kMDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int adj = raw - OOS_DATE_EPOCH;
    int year = 0;
    int month = 1;
    int day = 1;
    int hour = 0;
    if (adj >= 0)
    {
        year = adj / 8760;
        int rem = adj % 8760;
        hour = rem % 24;
        int doy = rem / 24;
        month = 1;
        for (int m = 0; m < 12; ++m)
        {
            if (doy < kMDays[m])
            {
                day = doy + 1;
                break;
            }
            doy -= kMDays[m];
            month++;
        }
        if (month > 12)
        {
            month = 12;
            day = 31;
        }
    }
    sprintf_s(buf, bufsz, "%04d-%02d-%02d %02d:00", year, month, day, hour);
}

static int CopyVecU32(void* vecObj, unsigned* out, int cap, int* outCount)
{
    *outCount = -1;
    unsigned begin = 0;
    unsigned end = 0;
    __try
    {
        begin = *(unsigned*)vecObj;
        end = *((unsigned*)vecObj + 1);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }

    if (!begin)
    {
        *outCount = 0;
        return 1;
    }
    if (end < begin)
        return 0;

    unsigned nbytes = end - begin;
    if (nbytes % 4)
        return 0;

    int n = (int)(nbytes / 4);
    *outCount = n;
    int copy = n;
    if (copy > cap)
        copy = cap;
    if (copy <= 0)
        return 1;

    __try
    {
        memcpy(out, (const void*)(DWORD_PTR)begin, (size_t)copy * 4);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    return 1;
}

static void LogOosDayTail()
{
    char diag[160];
    FormatOosDiag(diag, sizeof(diag));
    LogOosFile("  %s", diag);
}

static void NoteOosMilestones(int isDiff, int realDiff, int raw, const char* buf)
{
    RememberSessionClock(raw, buf);
    if (isDiff && !g_firstOosRaw && raw)
    {
        g_firstOosRaw = raw;
        strcpy_s(g_firstOosBuf, buf);
        LogOosFile("FIRST OOS (любой DIFF, в т.ч. local=0) date=%s", buf);
    }
    if (realDiff && !g_firstRealOosRaw && raw)
    {
        g_firstRealOosRaw = raw;
        strcpy_s(g_firstRealOosBuf, buf);
        LogOosFile("FIRST real OOS (оба checksum ненулевые и разные) date=%s", buf);
    }
}

static void TryLogCStringField(const char* tag, void* p)
{
    char tmp[64];
    memset(tmp, 0, sizeof(tmp));
    int ok = 0;
    __try
    {
        const char* s = *(const char**)p;
        if (s)
        {
            memcpy(tmp, s, sizeof(tmp) - 1);
            ok = 1;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        ok = 0;
    }
    if (!ok || tmp[0] < 32 || tmp[0] > 126)
        return;
    for (int i = 0; tmp[i]; ++i)
    {
        if ((unsigned char)tmp[i] < 32 || (unsigned char)tmp[i] > 126)
        {
            tmp[i] = 0;
            break;
        }
    }
    if (tmp[0])
        LogOosFile("  %s=\"%s\"", tag, tmp);
}

static void TryLogPeerCmd(void* vecAt3C)
{
    if (!vecAt3C)
        return;
    char tmp[32];
    memset(tmp, 0, sizeof(tmp));
    unsigned size = 0;
    unsigned cap = 0;
    __try
    {
        char* obj = (char*)vecAt3C - 0x3C;
        size = *(unsigned*)(obj + 0x1C);
        cap = *(unsigned*)(obj + 0x20);
        const char* s = obj + 8;
        if (cap >= 16)
            s = *(const char**)(obj + 8);
        if (s && size > 0 && size < sizeof(tmp))
            memcpy(tmp, s, size);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }
    if (tmp[0] >= 32 && tmp[0] <= 126)
        LogOosFile("  cmd=\"%s\"", tmp);
}

static int LooksLikeTag(const char* p)
{
    unsigned char a = (unsigned char)p[0];
    unsigned char b = (unsigned char)p[1];
    unsigned char c = (unsigned char)p[2];
    if (a < 'A' || a > 'Z' || b < 'A' || b > 'Z')
        return 0;
    if (!((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')))
        return 0;
    return 1;
}

static void FillTag(char* out, void* obj)
{
    out[0] = 0;
    if (!obj || SafeIsBadReadPtr(obj, 0x40))
        return;
    __try
    {
        static const int kOffs[] = { 4, 8, 0xC, 0x20, 0x24, 0x30, 0 };
        for (int k = 0; k < 7; ++k)
        {
            const char* p = (const char*)obj + kOffs[k];
            if (LooksLikeTag(p))
            {
                out[0] = p[0];
                out[1] = p[1];
                out[2] = p[2];
                out[3] = (p[3] >= 'A' && p[3] <= 'Z') ? p[3] : 0;
                out[4] = 0;
                return;
            }
            if (SafeIsBadReadPtr(p, 4))
                continue;
            void* q = *(void**)p;
            if (!q || SafeIsBadReadPtr(q, 4))
                continue;
            const char* t = (const char*)q;
            if (LooksLikeTag(t))
            {
                out[0] = t[0];
                out[1] = t[1];
                out[2] = t[2];
                out[3] = 0;
                return;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        out[0] = 0;
    }
}

static void DumpLocalExtra(void* session, int verbose, int* outCount, unsigned* outXor)
{
    *outCount = -1;
    *outXor = 0;
    if (!session)
        return;

    unsigned begin = 0;
    unsigned end = 0;
    __try
    {
        begin = *(unsigned*)((char*)session + OOS_REC_OFF);
        end = *(unsigned*)((char*)session + OOS_REC_OFF + 4);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }

    if (!begin || end < begin)
    {
        *outCount = 0;
        return;
    }

    unsigned nbytes = end - begin;
    if (nbytes % 16)
    {
        *outCount = -2;
        return;
    }

    int n = (int)(nbytes / 16);
    *outCount = n;
    int show = n;
    if (show > OOS_REC_MAX)
        show = OOS_REC_MAX;

    unsigned x = 0;
    for (int i = 0; i < show; ++i)
    {
        unsigned rec[4];
        memset(rec, 0, sizeof(rec));
        __try
        {
            memcpy(rec, (const void*)(DWORD_PTR)(begin + (unsigned)i * 16), 16);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            break;
        }
        x ^= rec[0] ^ rec[1] ^ rec[2] ^ rec[3];
        if (verbose)
        {
            char tag[8];
            FillTag(tag, (void*)(DWORD_PTR)rec[0]);
            LogOosFile("  rec[%d] ptr=%08X a=%08X b=%08X c=%08X tag=%s",
                i, rec[0], rec[1], rec[2], rec[3], tag[0] ? tag : "-");
        }
    }
    *outXor = x;
    if (verbose && n > OOS_REC_MAX)
        LogOosFile("  rec truncated to %d / %d", OOS_REC_MAX, n);

    if (verbose)
    {
        unsigned d[16];
        memset(d, 0, sizeof(d));
        __try
        {
            memcpy(d, (char*)session + 0xB00, sizeof(d));
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
        LogOosFile("  session+B00 %08X %08X %08X %08X %08X %08X %08X %08X",
            d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7]);
        LogOosFile("  session+B20 %08X %08X %08X %08X %08X %08X %08X %08X",
            d[8], d[9], d[10], d[11], d[12], d[13], d[14], d[15]);

        void* p24 = 0;
        __try
        {
            p24 = *(void**)((char*)session + 0xB24);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            p24 = 0;
        }
        if (p24)
            DumpPtrLine("session+B24obj", p24);
    }
}

static void __cdecl ReportOos(void* a0, void* a1)
{

    unsigned int cw = 0;
    _controlfp_s(&cw, 0, 0);
    unsigned int mxcsr = _mm_getcsr();

    int fileCs = 0;
    int fileCsOk = 0;
    if (g_checksumAppPtr)
    {
        __try
        {
            fileCs = *(int*)((char*)g_checksumAppPtr + 0x30);
            fileCsOk = 1;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            fileCsOk = 0;
        }
    }

    int dateRaw = 0;
    int dateOk = 0;
    char dateBuf[32];
    dateBuf[0] = 0;
    if (a0)
    {
        __try
        {
            dateRaw = *(int*)((char*)a0 + OOS_DATE_OFF);
            dateOk = 1;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            dateOk = 0;
        }
    }
    if (dateOk)
        FormatVic2Date(dateRaw, dateBuf, sizeof(dateBuf));

    unsigned char oosFlag = 0;
    int oosFlagOk = 0;
    if (a0)
    {
        __try
        {
            oosFlag = *((unsigned char*)a0 + OOS_FLAG_OFF);
            oosFlagOk = 1;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            oosFlagOk = 0;
        }
    }

    unsigned localBuf[OOS_MAX_SLOTS];
    unsigned remoteBuf[OOS_MAX_SLOTS];
    memset(localBuf, 0, sizeof(localBuf));
    memset(remoteBuf, 0, sizeof(remoteBuf));
    int nLocal = -1;
    int nRemote = -1;
    int localOk = 0;
    int remoteOk = 0;
    if (a0)
        localOk = CopyVecU32((char*)a0 + OOS_VEC_OFF, localBuf, OOS_MAX_SLOTS, &nLocal);
    if (a1)
        remoteOk = CopyVecU32(a1, remoteBuf, OOS_MAX_SLOTS, &nRemote);

    int nCmp = 0;
    if (localOk && remoteOk && nLocal >= 0 && nRemote >= 0)
        nCmp = nLocal < nRemote ? nLocal : nRemote;
    if (nCmp > OOS_MAX_SLOTS)
        nCmp = OOS_MAX_SLOTS;

    int nDiff = 0;
    int firstDiff = -1;
    for (int i = 0; i < nCmp; ++i)
    {
        if (localBuf[i] != remoteBuf[i])
        {
            if (firstDiff < 0)
                firstDiff = i;
            ++nDiff;
        }
    }

    char summary[192];
    const int isDiff = (!localOk || !remoteOk || nLocal != nRemote || nDiff > 0);
    unsigned sumL = (localOk && nLocal > 0) ? localBuf[0] : 0;
    unsigned sumR = (remoteOk && nRemote > 0) ? remoteBuf[0] : 0;
    unsigned auxL = (localOk && nLocal > 1) ? localBuf[1] : 0;
    unsigned auxR = (remoteOk && nRemote > 1) ? remoteBuf[1] : 0;
    const int realDiff = isDiff && sumL > 0 && sumR > 0 && sumL != sumR;
    NoteOosMilestones(isDiff, realDiff, dateOk ? dateRaw : 0, dateOk ? dateBuf : "");

    if (!isDiff)
    {
        ++g_syncHits;
        int recN = -1;
        unsigned recXor = 0;
        DumpLocalExtra(a0, 0, &recN, &recXor);
        LogOosFile("SYNC n=%d date=%s sum=%u/%u aux=%u/%u rec=%d xor=%08X",
            g_syncHits, dateOk ? dateBuf : "?", sumL, sumR, auxL, auxR, recN, recXor);
        RememberChecksum("SYNC n=%d date=%s sum=%u/%u rec=%d xor=%08X",
            g_syncHits, dateOk ? dateBuf : "?", sumL, sumR, recN, recXor);
        LogOosDayTail();
        return;
    }

    ++g_oosHits;

    if (!localOk || !remoteOk)
        sprintf_s(summary, "vectors unreadable local_ok=%d remote_ok=%d", localOk, remoteOk);
    else if (nLocal != nRemote)
        sprintf_s(summary, "COUNT mismatch local=%d remote=%d", nLocal, nRemote);
    else if (firstDiff >= 0)
        sprintf_s(summary, "%d/%d DIFF Checksum:%d %s local=%u remote=%u delta=%d",
            nDiff, nCmp, firstDiff, OosSlotLabel(firstDiff),
            localBuf[firstDiff], remoteBuf[firstDiff],
            (int)localBuf[firstDiff] - (int)remoteBuf[firstDiff]);
    else
        sprintf_s(summary, "%d/%d DIFF", nDiff, nCmp);

    RememberChecksum("OOS hit=%d after %d sync date=%s %s",
        g_oosHits, g_syncHits, dateOk ? dateBuf : "?", summary);

    Log("OOS[%d]: %s date=%s",
        g_oosHits, summary, dateOk ? dateBuf : "?");

    LogOosFile("OOS hit=%d after %d sync days dll=%s tick=%u date=%s raw=%d a0=%08X a1=%08X fpu_cw=%08X mxcsr=%08X",
        g_oosHits, g_syncHits, MOD_VERSION, GetTickCount(),
        dateOk ? dateBuf : "?", dateOk ? dateRaw : 0,
        (unsigned)(DWORD_PTR)a0, (unsigned)(DWORD_PTR)a1,
        cw, mxcsr);
    LogOosFile("  %s", summary);
    LogOosDayTail();
    {
        int recN = -1;
        unsigned recXor = 0;
        DumpLocalExtra(a0, 1, &recN, &recXor);
        LogOosFile("  local +0xB84 rec=%d xor=%08X (в пакет не входит — сравни с таким же блоком у пира)",
            recN, recXor);
    }
    if (sumL == 0 && sumR > 100)
        LogOosFile("  NOTE: local sum=0 после ненулевого remote — локальный аккумулятор сброшен (часто хвост после уже показанного OOS)");
    if (oosFlagOk)
        LogOosFile("  session+0xB20 oos_flag=%u (в прологе ещё 0, флаг ставит сама функция)", (unsigned)oosFlag);
    if (fileCsOk)
        LogOosFile("  lobby_file_checksum=%d (%08X)  (это лобби-файлы, не lockstep)", fileCs, (unsigned)fileCs);

    if ((cw & _MCW_PC) != _PC_53)
        LogOosFile("  NOTE: FPU precision != 53-bit (cw=%08X) — D3D/оверлей мог сбить хеш", cw);
    if ((mxcsr & 0x8040) != 0x8040)
        LogOosFile("  NOTE: MXCSR без FTZ/DAZ (mxcsr=%08X)", mxcsr);

    DumpPtrLine("arg0", a0);
    DumpPtrLine("arg1", a1);
    if (a1)
    {
        void* peer = (char*)a1 - 0x3C;
        DumpPtrLine("peer", peer);
        TryLogPeerCmd(a1);
    }

    LogOosFile("  vector local @session+0xB74  count=%s%d  remote @peer+0x3C count=%s%d",
        localOk ? "" : "ERR ", nLocal,
        remoteOk ? "" : "ERR ", nRemote);
    LogOosFile("  --- slots (это ровно то, что сверяет диалог: Checksum: i local : remote) ---");

    if (!localOk && !remoteOk)
        LogOosFile("  (оба вектора не прочитались)");
    else
    {
        int nShow = nCmp;
        if (nLocal > nShow)
            nShow = nLocal;
        if (nRemote > nShow)
            nShow = nRemote;
        if (nShow > OOS_MAX_SLOTS)
            nShow = OOS_MAX_SLOTS;

        for (int i = 0; i < nShow; ++i)
        {
            const int haveL = localOk && i < nLocal && i < OOS_MAX_SLOTS;
            const int haveR = remoteOk && i < nRemote && i < OOS_MAX_SLOTS;
            if (haveL && haveR)
            {
                const int diff = localBuf[i] != remoteBuf[i];
                LogOosFile("  Checksum:%d %-8s  local=%d (%08X)  remote=%d (%08X)  %s",
                    i, OosSlotLabel(i),
                    (int)localBuf[i], localBuf[i],
                    (int)remoteBuf[i], remoteBuf[i],
                    diff ? "DIFF" : "MATCH");
            }
            else if (haveL)
            {
                LogOosFile("  Checksum:%d %-8s  local=%d (%08X)  remote=<missing>  DIFF",
                    i, OosSlotLabel(i), (int)localBuf[i], localBuf[i]);
            }
            else if (haveR)
            {
                LogOosFile("  Checksum:%d %-8s  local=<missing>  remote=%d (%08X)  DIFF",
                    i, OosSlotLabel(i), (int)remoteBuf[i], remoteBuf[i]);
            }
        }
        if ((localOk && nLocal > OOS_MAX_SLOTS) || (remoteOk && nRemote > OOS_MAX_SLOTS))
            LogOosFile("  (обрезано до %d слотов)", OOS_MAX_SLOTS);
    }
}

static void __stdcall AccChkEnter(void* a0, void* a1);
static void __stdcall AccChk(LONGLONG t0);
static LONGLONG __stdcall DiagNow();

// 282EC0: stdcall 2, ret 8. Единственный E8: 32ECFA. Не ESI-скрытый
// (arg0/arg1 на стеке). C++-обёртка затрёт ESI на время ReportOos —
// naked сохраняет ESI/EDI/EBX/ECX. chk= — wall original, включая
// вложенный idle из насоса; в leftover не вычитаем.
__declspec(naked) static void HookOosReport()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 12]
        push dword ptr [ebp + 8]
        call AccChkEnter
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop ebx
        pop edi
        pop esi
        pop ecx
        push dword ptr [ebp + 12]
        push dword ptr [ebp + 8]
        call dword ptr [g_realOosReport]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccChk
        pop eax
        mov esp, ebp
        pop ebp
        ret 8
    }
}

static bool InstallOosWatch()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_OOS_REPORT);
    if (hook[0] != 0x55 || hook[1] != 0x8B || hook[2] != 0xEC ||
        hook[3] != 0x6A || hook[4] != 0xFF)
    {
        Log("OosWatch: пролог не совпал (%02X %02X %02X %02X %02X)",
            hook[0], hook[1], hook[2], hook[3], hook[4]);
        return false;
    }
    if (memcmp(hook + 24, OOS_POST_SEH, sizeof(OOS_POST_SEH)) != 0)
    {
        Log("OosWatch: sub esp,0x140 не совпал");
        return false;
    }

    const unsigned steal = 5;
    DWORD old = 0;
    if (!VirtualProtect(g_trampOosReport, sizeof(g_trampOosReport), PAGE_EXECUTE_READWRITE, &old))
        return false;
    memcpy(g_trampOosReport, hook, steal);
    g_trampOosReport[steal] = 0xE9;
    *(DWORD*)(g_trampOosReport + steal + 1) =
        (DWORD)(hook + steal) - ((DWORD)(g_trampOosReport + steal + 5));
    g_realOosReport = g_trampOosReport;
    g_oosResume = g_base + RVA_OOS_REPORT + steal;

    if (!VirtualProtect(hook, steal, PAGE_EXECUTE_READWRITE, &old))
        return false;
    unsigned char jmp[5];
    jmp[0] = 0xE9;
    *(DWORD*)(jmp + 1) = (DWORD)(DWORD_PTR)&HookOosReport - ((DWORD)hook + 5);
    memcpy(hook, jmp, steal);
    VirtualProtect(hook, steal, old, &old);
    FlushInstructionCache(GetCurrentProcess(), hook, steal);
    FlushInstructionCache(GetCurrentProcess(), g_trampOosReport, sizeof(g_trampOosReport));

    Log("OosWatch: FUN_00682EC0 rva %06X chk= + Logs\\v2dll_oos.log", RVA_OOS_REPORT);
    if (g_settings.enableOosLog)
        LogOosFile("armed dll=%s (SYNC/OOS, days since first real OOS)", MOD_VERSION);
    return true;
}

// ---------------------------------------------------------------
// Стабильность движка: FPU, D3D, куча, TBB
//
// Цены в перехваченном UpdatePrice уже int64 (фикс. точка 2^15) —
// переводить их на float незачем. Деньги фабрик в дампах ещё double,
// x87 держит 80-битные промежуточные, а D3D9 без FPU_PRESERVE сбивает
// control word в 24 бита. Отсюда десинк между машинами с разным GPU
// и оверлеями.
//
// Параллель в exe уже есть: Intel TBB (task_scheduler_init). Второй
// пул поверх него не ставим — капим TBB на фиксированное N (ini) и
// пиним FPU на старте каждого потока. N одинаково у всех с этой DLL.
//
// LAA у текущего v2game.exe уже включён (Characteristics 0x20).
// ---------------------------------------------------------------

static const DWORD RVA_MAIN_LOOP = 0x5DF550;
static const unsigned char MAIN_LOOP_SIG[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
static const DWORD D3DCREATE_FPU_PRESERVE_FLAG = 0x00000002;
static const DWORD D3DPRESENT_INTERVAL_IMMEDIATE = 0x80000000;
static const int D3DPRESENT_INTERVAL_OFF = 52;
static const int D3D9_VT_CREATEDEVICE = 16;
static const int D3D9DEV_VT_RESET = 16;
static const int D3D9DEV_VT_PRESENT = 17;
static const char TBB_INIT_MANGLE[] = "?initialize@task_scheduler_init@tbb@@QAEXHI@Z";

static DWORD g_mainLoopResume = 0;
static int g_tbbMaxThreads = 8;

static void PinFpu()
{
    unsigned int ignored = 0;
    _controlfp_s(&ignored, _PC_53, _MCW_PC);
    _controlfp_s(&ignored, _RC_NEAR, _MCW_RC);
    _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
    _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);
}

static bool HookIat(HMODULE module, const char* dllName, const char* funcName, void* hook, void** orig)
{
    if (!module || !dllName || !funcName || !hook)
        return false;

    unsigned char* base = (unsigned char*)module;
    bool ok = false;
    __try
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)base;
        if (dos->e_magic != IMAGE_DOS_SIGNATURE)
            return false;

        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)(base + dos->e_lfanew);
        if (nt->Signature != IMAGE_NT_SIGNATURE)
            return false;

        DWORD imageSize = nt->OptionalHeader.SizeOfImage;
        DWORD importRva = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
        DWORD importSize = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;
        if (!importRva || importRva >= imageSize)
            return false;

        IMAGE_IMPORT_DESCRIPTOR* desc = (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva);
        IMAGE_IMPORT_DESCRIPTOR* descEnd = importSize
            ? (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva + importSize)
            : desc + 64;

        for (; desc < descEnd && desc->Name; ++desc)
        {
            if (desc->Name >= imageSize || desc->FirstThunk >= imageSize)
                continue;
            // Без OriginalFirstThunk FirstThunk уже адреса функций, не RVA имён.
            if (!desc->OriginalFirstThunk || desc->OriginalFirstThunk >= imageSize)
                continue;

            const char* name = (const char*)(base + desc->Name);
            if (_stricmp(name, dllName) != 0)
                continue;

            IMAGE_THUNK_DATA32* thunk = (IMAGE_THUNK_DATA32*)(base + desc->FirstThunk);
            IMAGE_THUNK_DATA32* origThunk = (IMAGE_THUNK_DATA32*)(base + desc->OriginalFirstThunk);

            for (; thunk->u1.Function; ++thunk, ++origThunk)
            {
                if ((unsigned char*)origThunk >= base + imageSize)
                    break;
                if (origThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG32)
                    continue;

                DWORD aod = origThunk->u1.AddressOfData;
                if (!aod || aod >= imageSize)
                    continue;

                IMAGE_IMPORT_BY_NAME* byName = (IMAGE_IMPORT_BY_NAME*)(base + aod);
                if (strcmp((const char*)byName->Name, funcName) != 0)
                    continue;

                DWORD* slot = (DWORD*)&thunk->u1.Function;
                if (*slot == (DWORD)(DWORD_PTR)hook)
                    return true;

                HMODULE expected = GetModuleHandleA(dllName);
                if (expected)
                {
                    MEMORY_BASIC_INFORMATION mbi;
                    memset(&mbi, 0, sizeof(mbi));
                    if (!VirtualQuery((void*)(DWORD_PTR)*slot, &mbi, sizeof(mbi)))
                        return false;
                    if (mbi.AllocationBase == module)
                        return false;
                }

                DWORD oldProtect = 0;
                if (!VirtualProtect(slot, sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect))
                    return false;

                if (orig && !*orig)
                    *orig = (void*)(DWORD_PTR)*slot;
                *slot = (DWORD)(DWORD_PTR)hook;
                VirtualProtect(slot, sizeof(DWORD), oldProtect, &oldProtect);
                ok = true;
                return true;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
    return ok;
}

static bool HookIatOrdinal(HMODULE module, const char* dllName, WORD ordinal, void* hook, void** orig)
{
    if (!module || !dllName || !ordinal || !hook)
        return false;

    unsigned char* base = (unsigned char*)module;
    __try
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)base;
        if (dos->e_magic != IMAGE_DOS_SIGNATURE)
            return false;
        IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)(base + dos->e_lfanew);
        if (nt->Signature != IMAGE_NT_SIGNATURE)
            return false;

        DWORD imageSize = nt->OptionalHeader.SizeOfImage;
        DWORD importRva = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
        DWORD importSize = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;
        if (!importRva || importRva >= imageSize)
            return false;

        IMAGE_IMPORT_DESCRIPTOR* desc = (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva);
        IMAGE_IMPORT_DESCRIPTOR* descEnd = importSize
            ? (IMAGE_IMPORT_DESCRIPTOR*)(base + importRva + importSize)
            : desc + 64;

        for (; desc < descEnd && desc->Name; ++desc)
        {
            if (desc->Name >= imageSize || desc->FirstThunk >= imageSize)
                continue;
            if (!desc->OriginalFirstThunk || desc->OriginalFirstThunk >= imageSize)
                continue;
            const char* name = (const char*)(base + desc->Name);
            if (_stricmp(name, dllName) != 0)
                continue;

            IMAGE_THUNK_DATA32* thunk = (IMAGE_THUNK_DATA32*)(base + desc->FirstThunk);
            IMAGE_THUNK_DATA32* origThunk = (IMAGE_THUNK_DATA32*)(base + desc->OriginalFirstThunk);
            for (; thunk->u1.Function; ++thunk, ++origThunk)
            {
                if ((unsigned char*)origThunk >= base + imageSize)
                    break;
                if (!(origThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG32))
                    continue;
                if ((WORD)(origThunk->u1.Ordinal & 0xFFFF) != ordinal)
                    continue;

                DWORD* slot = (DWORD*)&thunk->u1.Function;
                if (*slot == (DWORD)(DWORD_PTR)hook)
                    return true;

                DWORD oldProtect = 0;
                if (!VirtualProtect(slot, sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect))
                    return false;
                if (orig && !*orig)
                    *orig = (void*)(DWORD_PTR)*slot;
                *slot = (DWORD)(DWORD_PTR)hook;
                VirtualProtect(slot, sizeof(DWORD), oldProtect, &oldProtect);
                return true;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
    return false;
}

static bool PatchVtableSlot(void* obj, int slot, void* hook, void** orig)
{
    if (!obj || !hook)
        return false;

    void** vtable = *(void***)obj;
    if (!vtable)
        return false;

    if (vtable[slot] == hook)
        return true;

    DWORD oldProtect = 0;
    if (!VirtualProtect(&vtable[slot], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;

    if (orig && !*orig)
        *orig = vtable[slot];
    vtable[slot] = hook;
    VirtualProtect(&vtable[slot], sizeof(void*), oldProtect, &oldProtect);
    return true;
}

typedef DWORD (WINAPI* tGetTickCount)(void);
typedef HANDLE (WINAPI* tCreateThread)(LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD);
typedef DWORD_PTR (__cdecl *tBeginThreadEx)(void*, unsigned, LPTHREAD_START_ROUTINE, void*, unsigned, unsigned*);
typedef HMODULE (WINAPI* tLoadLibraryA)(LPCSTR);
typedef HMODULE (WINAPI* tLoadLibraryW)(LPCWSTR);
typedef void* (WINAPI* tDirect3DCreate9)(UINT);
typedef HRESULT (WINAPI* tD3D9CreateDevice)(void*, UINT, UINT, HWND, DWORD, void*, void**);
typedef HRESULT (WINAPI* tD3D9Reset)(void*, void*);
typedef HRESULT (WINAPI* tD3D9Present)(void*, const void*, const void*, HWND, const void*);

static void TryPatchLateModules();
static HMODULE WINAPI HookLoadLibraryA(LPCSTR name);
static HMODULE WINAPI HookLoadLibraryW(LPCWSTR name);

static tGetTickCount       g_realGetTickCount = 0;
static tCreateThread       g_realCreateThread = 0;
static tBeginThreadEx      g_realBeginThreadEx = 0;
static tLoadLibraryA       g_realLoadLibraryA = 0;
static tLoadLibraryW       g_realLoadLibraryW = 0;
static tDirect3DCreate9    g_realDirect3DCreate9 = 0;
static tD3D9CreateDevice   g_realCreateDevice = 0;
static tD3D9Reset          g_realReset = 0;
static tD3D9Present        g_realPresent = 0;
static void*               g_realTbbInit = 0;
typedef void (WINAPI* tSleep)(DWORD);
static tSleep              g_realSleep = 0;
typedef BOOL (WINAPI* tPeekMessageA)(LPMSG, HWND, UINT, UINT, UINT);
typedef LRESULT (WINAPI* tDispatchMessageA)(const MSG*);
static tPeekMessageA       g_realPeekMessageA = 0;
static tDispatchMessageA   g_realDispatchMessageA = 0;
// Estado del pegado: se inyectan pulsaciones cuando Ctrl+V ya se soltó.
static bool g_clipboardPasteArmed = false;
static volatile LONG g_clipboardWorkerStop = 0;
static volatile LONG g_clipboardWorkerThreadId = 0;
static HHOOK g_clipboardKeyboardHook = 0;
static bool g_clipboardHookCtrlL = false;
static bool g_clipboardHookCtrlR = false;
static bool g_clipboardHookCtrlGeneric = false;
static bool g_clipboardHookV = false;
static bool g_clipboardHookCtrlPressedFirst = false;
static bool g_clipboardHookArmed = false;
static const UINT WM_CLIPBOARD_PASTE = WM_APP + 0x73;
static DWORD               g_seenSleepRva[24];
static DWORD               g_seenSleepMs[24];
static LONG                g_seenSleepN = 0;
static volatile LONG       g_presentFrames = 0;
static volatile LONG       g_presentWaitMs = 0;
static volatile LONG       g_presentWaitMax = 0;
static volatile LONG       g_sleepCalls = 0;
static volatile LONG       g_sleepSumMs = 0;
static volatile LONG       g_tgtCalls = 0;
static volatile LONG       g_selectCalls = 0;
static volatile LONG       g_recvCalls = 0;
static volatile LONG       g_recvSumMs = 0;
static volatile LONG       g_wfsoCalls = 0;
static volatile LONG       g_wfsoSumMs = 0;
static volatile LONG       g_qpcCalls = 0;
static volatile LONG       g_idleEu3N = 0;
static volatile LONG       g_idleEu3Ms = 0;
static volatile LONG       g_idleNudgeN = 0;
static volatile LONG       g_idleNudgeMs = 0;
static volatile LONG       g_idleIngameN = 0;
static volatile LONG       g_idleIngameMs = 0;
static volatile LONG       g_idleIngameMax = 0;
static volatile LONG       g_selMainN = 0;
static volatile LONG       g_selMainMs = 0;
static volatile LONG       g_gapToIdleMs = 0;
static volatile LONG       g_gapToPresentMs = 0;
static volatile LONG       g_stallSumMs = 0;
static volatile LONG       g_stallMaxMs = 0;
static volatile LONG       g_dirtyN = 0;
static volatile LONG       g_dirtyUs = 0;
static volatile LONG       g_dirtyMax = 0;
static volatile LONG       g_pickN = 0;
static volatile LONG       g_pickUs = 0;
static volatile LONG       g_moveN = 0;
static volatile LONG       g_moveUs = 0;
static volatile LONG       g_projSkipN = 0;
static volatile LONG       g_uvN = 0;
static volatile LONG       g_uvUs = 0;
static volatile LONG       g_uvReuseN = 0;
static volatile LONG       g_uvPoolLive = 0;
static volatile LONG       g_uvPoolBusy = 0;
static volatile LONG       g_projN = 0;
static volatile LONG       g_projUs = 0;
static volatile LONG       g_ntfN = 0;
static volatile LONG       g_ntfUs = 0;
static volatile LONG       g_uvSkipRebuildN = 0;
static volatile LONG       g_uvSkipLocN = 0;
static volatile LONG       g_evtN = 0;
static volatile LONG       g_evtUs = 0;
static volatile LONG       g_dlgN = 0;
static volatile LONG       g_dlgUs = 0;
static volatile LONG       g_infN = 0;
static volatile LONG       g_infUs = 0;
static volatile LONG       g_mapN = 0;
static volatile LONG       g_mapUs = 0;
static volatile LONG       g_winReuseN = 0;
static volatile LONG       g_ovlN = 0;
static volatile LONG       g_ovlUs = 0;
static volatile LONG       g_ovlMax = 0;
static volatile LONG       g_camN = 0;
static volatile LONG       g_camUs = 0;
static volatile LONG       g_camMax = 0;
static volatile LONG       g_mtxN = 0;
static volatile LONG       g_mtxUs = 0;
static volatile LONG       g_mtxMax = 0;
static volatile LONG       g_vwN = 0;
static volatile LONG       g_vwUs = 0;
static volatile LONG       g_vwMax = 0;
static volatile LONG       g_icoN = 0;
static volatile LONG       g_icoUs = 0;
static volatile LONG       g_icoMax = 0;
static volatile LONG       g_gfxN = 0;
static volatile LONG       g_gfxUs = 0;
static volatile LONG       g_gfxMax = 0;
static volatile LONG       g_preN = 0;
static volatile LONG       g_preUs = 0;
static volatile LONG       g_preMax = 0;
static volatile LONG       g_gui2N = 0;
static volatile LONG       g_gui2Us = 0;
static volatile LONG       g_gui2Max = 0;
static volatile LONG       g_clnN = 0;
static volatile LONG       g_clnUs = 0;
static volatile LONG       g_clnMax = 0;
static volatile LONG       g_tailN = 0;
static volatile LONG       g_tailUs = 0;
static volatile LONG       g_tailMax = 0;
static volatile LONG       g_hdN = 0;
static volatile LONG       g_hdUs = 0;
static volatile LONG       g_hdMax = 0;
static volatile LONG       g_aftN = 0;
static volatile LONG       g_aftUs = 0;
static volatile LONG       g_aftMax = 0;
static volatile LONG       g_lkpN = 0;
static volatile LONG       g_lkpUs = 0;
static volatile LONG       g_lkpMax = 0;
static volatile LONG       g_spikeLogs = 0;
static LONG                g_idleDepth = 0;
static LONGLONG            g_idleQ0 = 0;
static LONG                g_idleHeadMark = 0;
static LONG                g_idleOvlMark = 0;
static LONG                g_idleCamLoc = 0;
static LONG                g_idleOvlLoc = 0;
static LONG                g_idleIcoLoc = 0;
static LONG                g_idlePreLoc = 0;
static LONG                g_idleGui2Loc = 0;
static LONG                g_idleStrLoc = 0;
static LONG                g_idleCluLoc = 0;
static LONG                g_idleCamN = 0;
static LONG                g_idleOvlN = 0;
static LONG                g_idleCamLeave0 = 0;
static LONG                g_idleCamLeave1 = 0;
static LONG                g_idleOvlEnter0 = 0;
static LONG                g_idleOvlEnter1 = 0;
static LONG                g_idleOvlLeave0 = 0;
static LONG                g_idleOvlLeave1 = 0;
static LONG                g_idleOvlGapMax = 0;
static LONG                g_idleNestN = 0;
static LONG                g_idleDepthMax = 0;
static LONG                g_idleInCam = 0;
static LONG                g_idleInOvl = 0;
static LONG                g_idlePresCam = 0;
static LONG                g_idlePresOvl = 0;
static LONG                g_idlePresElse = 0;
static LONG                g_idlePeekN = 0;
static LONG                g_idlePeekUs = 0;
static LONG                g_idleDispN = 0;
static LONG                g_idleDispUs = 0;
static DWORD               g_idleTid = 0;
static DWORD               g_idlePeekRva = 0;
static DWORD               g_idleDispRva = 0;
static DWORD               g_idlePresStk[4] = { 0, 0, 0, 0 };
static LONG                g_idlePresStkN = 0;
static LONG                g_idlePumpLoc = 0;
static LONG                g_idlePumpN = 0;
static LONG                g_idlePumpCam = 0;
static LONG                g_idlePumpNest = 0;
static DWORD               g_idlePumpRva = 0;
static DWORD               g_idlePumpStk[4] = { 0, 0, 0, 0 };
static LONG                g_idlePumpStkN = 0;
static LONG                g_idleChkLoc = 0;
static LONG                g_idleChkN = 0;
static LONG                g_idleWckLoc = 0;
static LONG                g_idleWckN = 0;
static LONG                g_idleWckSkip = 0;
static LONG                g_pumpDepth = 0;
static volatile LONG       g_strN = 0;
static volatile LONG       g_strUs = 0;
static volatile LONG       g_strMax = 0;
static volatile LONG       g_cluN = 0;
static volatile LONG       g_cluUs = 0;
static volatile LONG       g_cluMax = 0;
static volatile LONG       g_pumpN = 0;
static volatile LONG       g_pumpUs = 0;
static volatile LONG       g_pumpMax = 0;
static volatile LONG       g_chkN = 0;
static volatile LONG       g_chkUs = 0;
static volatile LONG       g_chkMax = 0;
static volatile LONG       g_wckN = 0;
static volatile LONG       g_wckUs = 0;
static volatile LONG       g_wckMax = 0;
static volatile LONG       g_wckSkipN = 0;
static volatile LONG       g_camSkipN = 0;
static volatile LONG       g_bb0N = 0;
static volatile LONG       g_bb0Us = 0;
static volatile LONG       g_bb0Max = 0;
static volatile LONG       g_bb0hN = 0;
static volatile LONG       g_bb0hUs = 0;
static volatile LONG       g_bb0hMax = 0;
static volatile LONG       g_bb0tN = 0;
static volatile LONG       g_bb0tUs = 0;
static volatile LONG       g_bb0tMax = 0;
static volatile LONG       g_rorgN = 0;
static volatile LONG       g_rorgUs = 0;
static volatile LONG       g_rorgMax = 0;
static volatile LONG       g_rbldN = 0;
static volatile LONG       g_rbldUs = 0;
static volatile LONG       g_rbldMax = 0;
static volatile LONG       g_bb0sN = 0;
static volatile LONG       g_bb0sUs = 0;
static volatile LONG       g_bb0sMax = 0;
static volatile LONG       g_bb0fN = 0;
static volatile LONG       g_bb0fUs = 0;
static volatile LONG       g_bb0fMax = 0;
static volatile LONG       g_bb0lN = 0;
static volatile LONG       g_bb0lUs = 0;
static volatile LONG       g_bb0lMax = 0;
static volatile LONG       g_bb0gN = 0;
static volatile LONG       g_bb0gUs = 0;
static volatile LONG       g_bb0gMax = 0;
static volatile LONG       g_bb0oN = 0;
static volatile LONG       g_bb0oUs = 0;
static volatile LONG       g_bb0oMax = 0;
static volatile LONG       g_bb0uN = 0;
static volatile LONG       g_bb0uUs = 0;
static volatile LONG       g_bb0uMax = 0;
static volatile LONG       g_bb0chN = 0;
static volatile LONG       g_bb0chUs = 0;
static volatile LONG       g_bb0chMax = 0;
static volatile LONG       g_bb0c1N = 0;
static volatile LONG       g_bb0c1Us = 0;
static volatile LONG       g_bb0c1Max = 0;
static volatile LONG       g_bb0c2N = 0;
static volatile LONG       g_bb0c2Us = 0;
static volatile LONG       g_bb0c2Max = 0;
static volatile LONG       g_bb0c3N = 0;
static volatile LONG       g_bb0c3Us = 0;
static volatile LONG       g_bb0c3Max = 0;
static volatile LONG       g_bb0c4N = 0;
static volatile LONG       g_bb0c4Us = 0;
static volatile LONG       g_bb0c4Max = 0;
static volatile LONG       g_bb0cxN = 0;
static volatile LONG       g_bb0cxUs = 0;
static volatile LONG       g_bb0cxMax = 0;
static volatile LONG       g_bb0rbN = 0;
static volatile LONG       g_bb0rbUs = 0;
static volatile LONG       g_bb0rbMax = 0;
static volatile LONG       g_bb0eqAN = 0;
static volatile LONG       g_bb0eqAUs = 0;
static volatile LONG       g_bb0eqAMax = 0;
static volatile LONG       g_bb0eqBN = 0;
static volatile LONG       g_bb0eqBUs = 0;
static volatile LONG       g_bb0eqBMax = 0;
static volatile LONG       g_bb0eqHN = 0;
static volatile LONG       g_bb0eqHUs = 0;
static volatile LONG       g_bb0eqHMax = 0;
static volatile LONG       g_bb0eqVN = 0;
static volatile LONG       g_bb0eqVUs = 0;
static volatile LONG       g_bb0eqVMax = 0;
static volatile LONG       g_bb0eqVpN = 0;
static volatile LONG       g_bb0eqVpUs = 0;
static volatile LONG       g_bb0eqVpMax = 0;
static volatile LONG       g_bb0eqVvN = 0;
static volatile LONG       g_bb0eqVvUs = 0;
static volatile LONG       g_bb0eqVvMax = 0;
static volatile LONG       g_bb0eqVlN = 0;
static volatile LONG       g_bb0eqVlUs = 0;
static volatile LONG       g_bb0eqVlMax = 0;
static volatile LONG       g_bb0eqTaN = 0;
static volatile LONG       g_bb0eqTaUs = 0;
static volatile LONG       g_bb0eqTaMax = 0;
static volatile LONG       g_bb0eqTbN = 0;
static volatile LONG       g_bb0eqTbUs = 0;
static volatile LONG       g_bb0eqTbMax = 0;
static volatile LONG       g_bb0eqTbCN = 0;
static volatile LONG       g_bb0eqTbCUs = 0;
static volatile LONG       g_bb0eqTbCMax = 0;
static volatile LONG       g_bb0eqTbNstN = 0;
static volatile LONG       g_bb0eqTbNstUs = 0;
static volatile LONG       g_bb0eqTbNstMax = 0;
static volatile LONG       g_bb0eqNstAN = 0;
static volatile LONG       g_bb0eqNstAUs = 0;
static volatile LONG       g_bb0eqNstAMax = 0;
static volatile LONG       g_bb0eqNstBN = 0;
static volatile LONG       g_bb0eqNstBUs = 0;
static volatile LONG       g_bb0eqNstBMax = 0;
static volatile LONG       g_tbCntN = 0;
static volatile LONG       g_tbCntSum = 0;
static volatile LONG       g_tbCntMax = 0;
static volatile LONG       g_tbEarlyN = 0;
static volatile LONG       g_tbFullN = 0;
static volatile LONG       g_nstSkipN = 0;
static volatile LONG       g_nstWorkN = 0;
static volatile LONG       g_nstCheapN = 0;
static volatile LONG       g_bb0eqTcN = 0;
static volatile LONG       g_bb0eqTcUs = 0;
static volatile LONG       g_bb0eqTcMax = 0;
static volatile LONG       g_bb0eqTdN = 0;
static volatile LONG       g_bb0eqTdUs = 0;
static volatile LONG       g_bb0eqTdMax = 0;
static volatile LONG       g_bb0eqVwN = 0;
static volatile LONG       g_bb0eqVwUs = 0;
static volatile LONG       g_bb0eqVwMax = 0;
static volatile LONG       g_bb0eqVxN = 0;
static volatile LONG       g_bb0eqVxUs = 0;
static volatile LONG       g_bb0eqVxMax = 0;
static volatile LONG       g_bb0eqVxHit = 0;
static volatile LONG       g_bb0eqSN = 0;
static volatile LONG       g_bb0eqSUs = 0;
static volatile LONG       g_bb0eqSMax = 0;
static volatile LONG       g_bb0eqRN = 0;
static volatile LONG       g_bb0eqRUs = 0;
static volatile LONG       g_bb0eqRMax = 0;
static volatile LONG       g_syncMissN = 0;
static volatile LONG       g_eqVSkipN = 0;
static volatile LONG       g_uvFlushExN = 0;
static void*               g_uvLastIdler = 0;
static volatile DWORD      g_presentTid = 0;
static void UvFlushSinglePanel();
static DWORD               g_lastPresentEnd = 0;
static DWORD               g_lastIdleEnd = 0;
static DWORD               g_presentStamp = 0;
static DWORD               g_seenPresentRva = 0;
typedef DWORD (WINAPI* tTimeGetTime)(void);
static tTimeGetTime        g_timeGetTime = 0;

static void HookSleepOnModule(HMODULE m);
static volatile LONG g_dllReady = 0;

static DWORD WINAPI HookGetTickCount(void)
{
    static LONG attempts = 0;
    if (attempts < 256)
    {
        InterlockedIncrement(&attempts);
        TryPatchLateModules();
    }
    return g_realGetTickCount ? g_realGetTickCount() : 0;
}

struct ThreadStartWrap
{
    LPTHREAD_START_ROUTINE orig;
    LPVOID param;
};

static DWORD WINAPI PinnedThreadStart(LPVOID raw)
{
    ThreadStartWrap* wrap = (ThreadStartWrap*)raw;
    LPTHREAD_START_ROUTINE orig = wrap->orig;
    LPVOID param = wrap->param;
    HeapFree(GetProcessHeap(), 0, wrap);
    PinFpu();
    return orig(param);
}

static HANDLE WINAPI HookCreateThread(
    LPSECURITY_ATTRIBUTES sa, SIZE_T stack, LPTHREAD_START_ROUTINE start,
    LPVOID param, DWORD flags, LPDWORD id)
{
    if (!g_realCreateThread)
        return 0;

    if (!start || start == PinnedThreadStart)
        return g_realCreateThread(sa, stack, start, param, flags, id);

    ThreadStartWrap* wrap = (ThreadStartWrap*)HeapAlloc(
        GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(ThreadStartWrap));
    if (!wrap)
        return g_realCreateThread(sa, stack, start, param, flags, id);

    wrap->orig = start;
    wrap->param = param;

    HANDLE h = g_realCreateThread(sa, stack, PinnedThreadStart, wrap, flags, id);
    if (!h)
        HeapFree(GetProcessHeap(), 0, wrap);
    return h;
}

static DWORD_PTR __cdecl HookBeginThreadEx(
    void* security, unsigned stack, LPTHREAD_START_ROUTINE start,
    void* arg, unsigned flags, unsigned* id)
{
    if (!g_realBeginThreadEx)
        return 0;

    if (!start || start == PinnedThreadStart)
        return g_realBeginThreadEx(security, stack, start, arg, flags, id);

    ThreadStartWrap* wrap = (ThreadStartWrap*)HeapAlloc(
        GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(ThreadStartWrap));
    if (!wrap)
        return g_realBeginThreadEx(security, stack, start, arg, flags, id);

    wrap->orig = start;
    wrap->param = arg;

    DWORD_PTR h = g_realBeginThreadEx(security, stack, PinnedThreadStart, wrap, flags, id);
    if (!h)
        HeapFree(GetProcessHeap(), 0, wrap);
    return h;
}

static DWORD NowMs()
{
    if (g_timeGetTime)
        return g_timeGetTime();
    return g_realGetTickCount ? g_realGetTickCount() : GetTickCount();
}

static LONGLONG QpcNow()
{
    LARGE_INTEGER v;
    v.QuadPart = 0;
    QueryPerformanceCounter(&v);
    return v.QuadPart;
}

static DWORD QpcUs(LONGLONG t0)
{
    static LARGE_INTEGER freq;
    if (!freq.QuadPart)
        QueryPerformanceFrequency(&freq);
    LARGE_INTEGER v;
    v.QuadPart = 0;
    QueryPerformanceCounter(&v);
    if (!freq.QuadPart)
        return 0;
    LONGLONG dt = v.QuadPart - t0;
    if (dt < 0)
        dt = 0;
    return (DWORD)((dt * 1000000) / freq.QuadPart);
}

static void AccUsVal(volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONG dt)
{
    if (dt < 0)
        dt = 0;
    InterlockedIncrement(n);
    InterlockedExchangeAdd(us, dt);
    if (!mx)
        return;
    LONG cur = *mx;
    while (dt > cur)
    {
        LONG prev = InterlockedCompareExchange(mx, dt, cur);
        if (prev == cur)
            break;
        cur = prev;
    }
}

static void AccUs(volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONGLONG t0)
{
    AccUsVal(n, us, mx, (LONG)QpcUs(t0));
}

static void AccUsIdle(volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONGLONG t0, LONG* loc)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(n, us, mx, dt);
    if (loc && g_idleDepth > 0)
        *loc += dt;
}

static LONG IdleMarkNow()
{
    if (g_idleDepth <= 0 || !g_idleQ0)
        return 0;
    return (LONG)QpcUs(g_idleQ0);
}

static LONGLONG __stdcall DiagNow()
{
    return QpcNow();
}

static void __stdcall AccStr(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_strN, &g_strUs, &g_strMax, dt);
    if (g_idleDepth > 0)
        g_idleStrLoc += dt;
}

static void __stdcall AccClu(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_cluN, &g_cluUs, &g_cluMax, dt);
    if (g_idleDepth > 0)
        g_idleCluLoc += dt;
}

static DWORD ExeRvaOf(DWORD addr)
{
    if (g_base && addr >= g_base && addr < g_base + g_imageSize)
        return addr - g_base;
    return 0;
}

static bool IdleOnThisThread()
{
    return g_idleDepth > 0 && g_idleTid && GetCurrentThreadId() == g_idleTid;
}

typedef USHORT (WINAPI* tCSBT)(ULONG, ULONG, PVOID*, PULONG);
static tCSBT GetCsbt()
{
    static tCSBT csbt = 0;
    static int tried = 0;
    if (!tried)
    {
        tried = 1;
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        if (k32)
        {
            csbt = (tCSBT)GetProcAddress(k32, "RtlCaptureStackBackTrace");
            if (!csbt)
                csbt = (tCSBT)GetProcAddress(k32, "CaptureStackBackTrace");
        }
    }
    return csbt;
}

static void IdleAddStkRva(DWORD rva)
{
    if (!rva || g_idlePresStkN >= 4)
        return;
    if (rva >= 0x595900 && rva < 0x595980)
        return;
    for (LONG i = 0; i < g_idlePresStkN; i++)
    {
        if (g_idlePresStk[i] == rva)
            return;
    }
    g_idlePresStk[g_idlePresStkN++] = rva;
}

static void IdleAddPumpRva(DWORD rva)
{
    if (!rva || g_idlePumpStkN >= 4)
        return;
    if (rva >= 0x5DF2B0 && rva < 0x5DF550)
        return;
    if (rva >= 0x285620 && rva < 0x285780)
        return;
    if (rva >= 0x595900 && rva < 0x595980)
        return;
    for (LONG i = 0; i < g_idlePumpStkN; i++)
    {
        if (g_idlePumpStk[i] == rva)
            return;
    }
    g_idlePumpStk[g_idlePumpStkN++] = rva;
}

static void __stdcall PumpEnter(DWORD retaddr)
{
    if (IdleOnThisThread())
    {
        if (g_pumpDepth > 0)
            g_idlePumpNest++;
        if (!g_idlePumpRva)
            g_idlePumpRva = ExeRvaOf(retaddr);
    }
    g_pumpDepth++;
}

static void __stdcall AccPump(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_pumpN, &g_pumpUs, &g_pumpMax, dt);
    if (g_pumpDepth > 0)
        g_pumpDepth--;
    if (!IdleOnThisThread())
        return;
    g_idlePumpLoc += dt;
    g_idlePumpN++;
    if (g_idleInCam)
        g_idlePumpCam++;
    if (g_idlePumpStkN >= 4)
        return;
    tCSBT csbt = GetCsbt();
    if (!csbt)
        return;
    void* stk[12];
    USHORT n = csbt(1, 12, stk, 0);
    for (USHORT i = 0; i < n && g_idlePumpStkN < 4; i++)
        IdleAddPumpRva(ExeRvaOf((DWORD)(DWORD_PTR)stk[i]));
}

static void __stdcall AccChkEnter(void* a0, void* a1)
{
    if (g_settings.enableOosLog)
        ReportOos(a0, a1);
}

static void __stdcall AccChk(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_chkN, &g_chkUs, &g_chkMax, dt);
    if (!IdleOnThisThread())
        return;
    g_idleChkLoc += dt;
    g_idleChkN++;
}

static int __stdcall WckEnter(DWORD retaddr)
{
    DWORD rva = ExeRvaOf(retaddr);
    if (g_settings.patchSkipChkWin && IdleOnThisThread() && rva == 0x283AB6)
    {
        InterlockedIncrement(&g_wckSkipN);
        if (IdleOnThisThread())
            g_idleWckSkip++;
        return 1;
    }
    return 0;
}

static void __stdcall AccWck(LONGLONG t0)
{
    LONG dt = (LONG)QpcUs(t0);
    AccUsVal(&g_wckN, &g_wckUs, &g_wckMax, dt);
    if (!IdleOnThisThread())
        return;
    g_idleWckLoc += dt;
    g_idleWckN++;
}

static void IdleNotePresent()
{
    if (!IdleOnThisThread())
        return;
    if (g_idleInCam)
        g_idlePresCam++;
    else if (g_idleInOvl)
        g_idlePresOvl++;
    else
        g_idlePresElse++;
    if (g_idlePresStkN >= 4)
        return;
    tCSBT csbt = GetCsbt();
    IdleAddStkRva(ExeRvaOf((DWORD)(DWORD_PTR)_ReturnAddress()));
    if (!csbt)
        return;
    void* stk[12];
    USHORT n = csbt(1, 12, stk, 0);
    for (USHORT i = 0; i < n && g_idlePresStkN < 4; i++)
        IdleAddStkRva(ExeRvaOf((DWORD)(DWORD_PTR)stk[i]));
}

static HANDLE g_fpsTimer = 0;
static LONGLONG g_fpsNextQpc = 0;

static HANDLE FpsTimerHandle()
{
    if (g_fpsTimer)
        return g_fpsTimer;

    HMODULE k32 = GetModuleHandleW(L"kernel32.dll");
    typedef HANDLE (WINAPI* tCreateWaitableTimerExW)(LPSECURITY_ATTRIBUTES, LPCWSTR, DWORD, DWORD);
    tCreateWaitableTimerExW pEx = k32
        ? (tCreateWaitableTimerExW)GetProcAddress(k32, "CreateWaitableTimerExW")
        : 0;
    if (pEx)
        g_fpsTimer = pEx(0, 0, 0x00000002, TIMER_ALL_ACCESS);
    if (!g_fpsTimer)
        g_fpsTimer = CreateWaitableTimerW(0, TRUE, 0);
    return g_fpsTimer;
}

static void WaitFpsCap()
{
    int fps = g_settings.d3dFpsLimit;
    if (fps < 1)
        return;

    static LARGE_INTEGER freq;
    if (!freq.QuadPart)
        QueryPerformanceFrequency(&freq);
    if (!freq.QuadPart)
        return;

    LONGLONG step = freq.QuadPart / fps;
    if (step < 1)
        step = 1;

    LONGLONG now = QpcNow();
    if (g_fpsNextQpc == 0)
    {
        g_fpsNextQpc = now + step;
        return;
    }

    if (now > g_fpsNextQpc + step * 2)
        g_fpsNextQpc = now;
    else if (now < g_fpsNextQpc)
    {
        LONGLONG remain = g_fpsNextQpc - now;
        LONGLONG hundredNs = (remain * 10000000LL) / freq.QuadPart;
        if (hundredNs > 8000)
        {
            HANDLE timer = FpsTimerHandle();
            if (timer)
            {
                LARGE_INTEGER due;
                due.QuadPart = -(hundredNs - 3000);
                if (SetWaitableTimer(timer, &due, 0, 0, 0, FALSE))
                    WaitForSingleObject(timer, 40);
            }
        }
        while (QpcNow() < g_fpsNextQpc)
            YieldProcessor();
    }

    g_fpsNextQpc += step;
}

static HRESULT WINAPI HookPresent(void* device, const void* src, const void* dest, HWND wnd, const void* dirty)
{
    g_presentTid = GetCurrentThreadId();
    UvFlushSinglePanel();
    DWORD t0 = NowMs();
    if (g_lastPresentEnd)
    {
        DWORD stall = t0 - g_lastPresentEnd;
        if (stall < 4000)
        {
            InterlockedExchangeAdd(&g_stallSumMs, (LONG)stall);
            LONG oldMax = g_stallMaxMs;
            while ((LONG)stall > oldMax)
            {
                LONG prev = InterlockedCompareExchange(&g_stallMaxMs, (LONG)stall, oldMax);
                if (prev == oldMax)
                    break;
                oldMax = prev;
            }
        }
    }
    if (g_lastIdleEnd)
    {
        DWORD gap = t0 - g_lastIdleEnd;
        if (gap < 200)
            InterlockedExchangeAdd(&g_gapToPresentMs, (LONG)gap);
    }
    HRESULT hr = g_realPresent
        ? g_realPresent(device, src, dest, wnd, dirty)
        : E_FAIL;
    DWORD wait = NowMs() - t0;
    PinFpu();
    g_lastPresentEnd = t0 + wait;

    InterlockedExchangeAdd(&g_presentWaitMs, (LONG)wait);
    LONG oldMax = g_presentWaitMax;
    while ((LONG)wait > oldMax)
    {
        LONG prev = InterlockedCompareExchange(&g_presentWaitMax, (LONG)wait, oldMax);
        if (prev == oldMax)
            break;
        oldMax = prev;
    }

    InterlockedIncrement(&g_presentFrames);
    IdleNotePresent();
    DWORD now = t0 + wait;
    DWORD stamp = g_presentStamp;
    if (!g_seenPresentRva)
    {
        DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
        DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : ret;
        g_seenPresentRva = rva;
        LogDbg("Present: caller rva %08X", rva);
    }
    if (!stamp)
    {
        g_presentStamp = now;
    }
    else if (now - stamp >= 5000)
    {
        g_presentStamp = now;
        LONG frames = InterlockedExchange(&g_presentFrames, 0);
        LONG waitSum = InterlockedExchange(&g_presentWaitMs, 0);
        LONG waitMax = InterlockedExchange(&g_presentWaitMax, 0);
        LONG sleepN = InterlockedExchange(&g_sleepCalls, 0);
        LONG sleepMs = InterlockedExchange(&g_sleepSumMs, 0);
        LONG tgtN = InterlockedExchange(&g_tgtCalls, 0);
        LONG selN = InterlockedExchange(&g_selectCalls, 0);
        LONG recvN = InterlockedExchange(&g_recvCalls, 0);
        LONG recvMs = InterlockedExchange(&g_recvSumMs, 0);
        LONG wfsoN = InterlockedExchange(&g_wfsoCalls, 0);
        LONG wfsoMs = InterlockedExchange(&g_wfsoSumMs, 0);
        LONG qpcN = InterlockedExchange(&g_qpcCalls, 0);
        LONG eu3N = InterlockedExchange(&g_idleEu3N, 0);
        LONG eu3Ms = InterlockedExchange(&g_idleEu3Ms, 0);
        LONG nudgeN = InterlockedExchange(&g_idleNudgeN, 0);
        LONG nudgeMs = InterlockedExchange(&g_idleNudgeMs, 0);
        LONG ingN = InterlockedExchange(&g_idleIngameN, 0);
        LONG ingMs = InterlockedExchange(&g_idleIngameMs, 0);
        LONG ingMax = InterlockedExchange(&g_idleIngameMax, 0);
        LONG selMainN = InterlockedExchange(&g_selMainN, 0);
        LONG selMainMs = InterlockedExchange(&g_selMainMs, 0);
        LONG gapIdle = InterlockedExchange(&g_gapToIdleMs, 0);
        LONG gapPres = InterlockedExchange(&g_gapToPresentMs, 0);
        LONG stallSum = InterlockedExchange(&g_stallSumMs, 0);
        LONG stallMax = InterlockedExchange(&g_stallMaxMs, 0);
        LONG dirtyN = InterlockedExchange(&g_dirtyN, 0);
        LONG dirtyUs = InterlockedExchange(&g_dirtyUs, 0);
        LONG dirtyMax = InterlockedExchange(&g_dirtyMax, 0);
        LONG pickN = InterlockedExchange(&g_pickN, 0);
        LONG pickUs = InterlockedExchange(&g_pickUs, 0);
        LONG moveN = InterlockedExchange(&g_moveN, 0);
        LONG moveUs = InterlockedExchange(&g_moveUs, 0);
        LONG projSkip = InterlockedExchange(&g_projSkipN, 0);
        LONG uvN = InterlockedExchange(&g_uvN, 0);
        LONG uvUs = InterlockedExchange(&g_uvUs, 0);
        LONG uvReuse = InterlockedExchange(&g_uvReuseN, 0);
        LONG projN = InterlockedExchange(&g_projN, 0);
        LONG projUs = InterlockedExchange(&g_projUs, 0);
        LONG ntfN = InterlockedExchange(&g_ntfN, 0);
        LONG ntfUs = InterlockedExchange(&g_ntfUs, 0);
        LONG skipRb = InterlockedExchange(&g_uvSkipRebuildN, 0);
        LONG skipLoc = InterlockedExchange(&g_uvSkipLocN, 0);
        LONG evtN = InterlockedExchange(&g_evtN, 0);
        LONG evtUs = InterlockedExchange(&g_evtUs, 0);
        LONG dlgN = InterlockedExchange(&g_dlgN, 0);
        LONG dlgUs = InterlockedExchange(&g_dlgUs, 0);
        LONG infN = InterlockedExchange(&g_infN, 0);
        LONG infUs = InterlockedExchange(&g_infUs, 0);
        LONG mapN = InterlockedExchange(&g_mapN, 0);
        LONG mapUs = InterlockedExchange(&g_mapUs, 0);
        LONG winReuse = InterlockedExchange(&g_winReuseN, 0);
        LONG ovlN = InterlockedExchange(&g_ovlN, 0);
        LONG ovlUs = InterlockedExchange(&g_ovlUs, 0);
        LONG ovlMax = InterlockedExchange(&g_ovlMax, 0);
        LONG camN = InterlockedExchange(&g_camN, 0);
        LONG camUs = InterlockedExchange(&g_camUs, 0);
        LONG camMax = InterlockedExchange(&g_camMax, 0);
        LONG mtxN = InterlockedExchange(&g_mtxN, 0);
        LONG mtxUs = InterlockedExchange(&g_mtxUs, 0);
        LONG mtxMax = InterlockedExchange(&g_mtxMax, 0);
        LONG vwN = InterlockedExchange(&g_vwN, 0);
        LONG vwUs = InterlockedExchange(&g_vwUs, 0);
        LONG vwMax = InterlockedExchange(&g_vwMax, 0);
        LONG icoN = InterlockedExchange(&g_icoN, 0);
        LONG icoUs = InterlockedExchange(&g_icoUs, 0);
        LONG icoMax = InterlockedExchange(&g_icoMax, 0);
        LONG gfxN = InterlockedExchange(&g_gfxN, 0);
        LONG gfxUs = InterlockedExchange(&g_gfxUs, 0);
        LONG gfxMax = InterlockedExchange(&g_gfxMax, 0);
        LONG preN = InterlockedExchange(&g_preN, 0);
        LONG preUs = InterlockedExchange(&g_preUs, 0);
        LONG preMax = InterlockedExchange(&g_preMax, 0);
        LONG gui2N = InterlockedExchange(&g_gui2N, 0);
        LONG gui2Us = InterlockedExchange(&g_gui2Us, 0);
        LONG gui2Max = InterlockedExchange(&g_gui2Max, 0);
        LONG clnN = InterlockedExchange(&g_clnN, 0);
        LONG clnUs = InterlockedExchange(&g_clnUs, 0);
        LONG clnMax = InterlockedExchange(&g_clnMax, 0);
        LONG tailN = InterlockedExchange(&g_tailN, 0);
        LONG tailUs = InterlockedExchange(&g_tailUs, 0);
        LONG tailMax = InterlockedExchange(&g_tailMax, 0);
        LONG hdN = InterlockedExchange(&g_hdN, 0);
        LONG hdUs = InterlockedExchange(&g_hdUs, 0);
        LONG hdMax = InterlockedExchange(&g_hdMax, 0);
        LONG aftN = InterlockedExchange(&g_aftN, 0);
        LONG aftUs = InterlockedExchange(&g_aftUs, 0);
        LONG aftMax = InterlockedExchange(&g_aftMax, 0);
        LONG lkpN = InterlockedExchange(&g_lkpN, 0);
        LONG lkpUs = InterlockedExchange(&g_lkpUs, 0);
        LONG lkpMax = InterlockedExchange(&g_lkpMax, 0);
        LONG strN = InterlockedExchange(&g_strN, 0);
        LONG strUs = InterlockedExchange(&g_strUs, 0);
        LONG strMax = InterlockedExchange(&g_strMax, 0);
        LONG cluN = InterlockedExchange(&g_cluN, 0);
        LONG cluUs = InterlockedExchange(&g_cluUs, 0);
        LONG cluMax = InterlockedExchange(&g_cluMax, 0);
        LONG pmpN = InterlockedExchange(&g_pumpN, 0);
        LONG pmpUs = InterlockedExchange(&g_pumpUs, 0);
        LONG pmpMax = InterlockedExchange(&g_pumpMax, 0);
        LONG chkN = InterlockedExchange(&g_chkN, 0);
        LONG chkUs = InterlockedExchange(&g_chkUs, 0);
        LONG chkMax = InterlockedExchange(&g_chkMax, 0);
        LONG wckN = InterlockedExchange(&g_wckN, 0);
        LONG wckUs = InterlockedExchange(&g_wckUs, 0);
        LONG wckMax = InterlockedExchange(&g_wckMax, 0);
        LONG wckSkip = InterlockedExchange(&g_wckSkipN, 0);
        LONG camSkip = InterlockedExchange(&g_camSkipN, 0);
        LONG bb0N = InterlockedExchange(&g_bb0N, 0);
        LONG bb0Us = InterlockedExchange(&g_bb0Us, 0);
        LONG bb0Max = InterlockedExchange(&g_bb0Max, 0);
        LONG bb0hN = InterlockedExchange(&g_bb0hN, 0);
        LONG bb0hUs = InterlockedExchange(&g_bb0hUs, 0);
        LONG bb0hMax = InterlockedExchange(&g_bb0hMax, 0);
        LONG bb0tN = InterlockedExchange(&g_bb0tN, 0);
        LONG bb0tUs = InterlockedExchange(&g_bb0tUs, 0);
        LONG bb0tMax = InterlockedExchange(&g_bb0tMax, 0);
        LONG rorgN = InterlockedExchange(&g_rorgN, 0);
        LONG rorgUs = InterlockedExchange(&g_rorgUs, 0);
        LONG rorgMax = InterlockedExchange(&g_rorgMax, 0);
        LONG rbldN = InterlockedExchange(&g_rbldN, 0);
        LONG rbldUs = InterlockedExchange(&g_rbldUs, 0);
        LONG rbldMax = InterlockedExchange(&g_rbldMax, 0);
        LONG bb0sN = InterlockedExchange(&g_bb0sN, 0);
        LONG bb0sUs = InterlockedExchange(&g_bb0sUs, 0);
        LONG bb0sMax = InterlockedExchange(&g_bb0sMax, 0);
        LONG bb0fN = InterlockedExchange(&g_bb0fN, 0);
        LONG bb0fUs = InterlockedExchange(&g_bb0fUs, 0);
        LONG bb0fMax = InterlockedExchange(&g_bb0fMax, 0);
        LONG bb0lN = InterlockedExchange(&g_bb0lN, 0);
        LONG bb0lUs = InterlockedExchange(&g_bb0lUs, 0);
        LONG bb0lMax = InterlockedExchange(&g_bb0lMax, 0);
        LONG bb0gN = InterlockedExchange(&g_bb0gN, 0);
        LONG bb0gUs = InterlockedExchange(&g_bb0gUs, 0);
        LONG bb0gMax = InterlockedExchange(&g_bb0gMax, 0);
        LONG bb0oN = InterlockedExchange(&g_bb0oN, 0);
        LONG bb0oUs = InterlockedExchange(&g_bb0oUs, 0);
        LONG bb0oMax = InterlockedExchange(&g_bb0oMax, 0);
        LONG bb0uN = InterlockedExchange(&g_bb0uN, 0);
        LONG bb0uUs = InterlockedExchange(&g_bb0uUs, 0);
        LONG bb0uMax = InterlockedExchange(&g_bb0uMax, 0);
        LONG bb0chN = InterlockedExchange(&g_bb0chN, 0);
        LONG bb0chUs = InterlockedExchange(&g_bb0chUs, 0);
        LONG bb0chMax = InterlockedExchange(&g_bb0chMax, 0);
        LONG bb0c1N = InterlockedExchange(&g_bb0c1N, 0);
        LONG bb0c1Us = InterlockedExchange(&g_bb0c1Us, 0);
        LONG bb0c1Max = InterlockedExchange(&g_bb0c1Max, 0);
        LONG bb0c2N = InterlockedExchange(&g_bb0c2N, 0);
        LONG bb0c2Us = InterlockedExchange(&g_bb0c2Us, 0);
        LONG bb0c2Max = InterlockedExchange(&g_bb0c2Max, 0);
        LONG bb0c3N = InterlockedExchange(&g_bb0c3N, 0);
        LONG bb0c3Us = InterlockedExchange(&g_bb0c3Us, 0);
        LONG bb0c3Max = InterlockedExchange(&g_bb0c3Max, 0);
        LONG bb0c4N = InterlockedExchange(&g_bb0c4N, 0);
        LONG bb0c4Us = InterlockedExchange(&g_bb0c4Us, 0);
        LONG bb0c4Max = InterlockedExchange(&g_bb0c4Max, 0);
        LONG bb0cxN = InterlockedExchange(&g_bb0cxN, 0);
        LONG bb0cxUs = InterlockedExchange(&g_bb0cxUs, 0);
        LONG bb0cxMax = InterlockedExchange(&g_bb0cxMax, 0);
        LONG bb0rbN = InterlockedExchange(&g_bb0rbN, 0);
        LONG bb0rbUs = InterlockedExchange(&g_bb0rbUs, 0);
        LONG bb0rbMax = InterlockedExchange(&g_bb0rbMax, 0);
        LONG bb0eqAN = InterlockedExchange(&g_bb0eqAN, 0);
        LONG bb0eqAUs = InterlockedExchange(&g_bb0eqAUs, 0);
        LONG bb0eqAMax = InterlockedExchange(&g_bb0eqAMax, 0);
        LONG bb0eqBN = InterlockedExchange(&g_bb0eqBN, 0);
        LONG bb0eqBUs = InterlockedExchange(&g_bb0eqBUs, 0);
        LONG bb0eqBMax = InterlockedExchange(&g_bb0eqBMax, 0);
        LONG bb0eqHN = InterlockedExchange(&g_bb0eqHN, 0);
        LONG bb0eqHUs = InterlockedExchange(&g_bb0eqHUs, 0);
        LONG bb0eqHMax = InterlockedExchange(&g_bb0eqHMax, 0);
        LONG bb0eqVN = InterlockedExchange(&g_bb0eqVN, 0);
        LONG bb0eqVUs = InterlockedExchange(&g_bb0eqVUs, 0);
        LONG bb0eqVMax = InterlockedExchange(&g_bb0eqVMax, 0);
        LONG bb0eqVpN = InterlockedExchange(&g_bb0eqVpN, 0);
        LONG bb0eqVpUs = InterlockedExchange(&g_bb0eqVpUs, 0);
        LONG bb0eqVpMax = InterlockedExchange(&g_bb0eqVpMax, 0);
        LONG bb0eqVvN = InterlockedExchange(&g_bb0eqVvN, 0);
        LONG bb0eqVvUs = InterlockedExchange(&g_bb0eqVvUs, 0);
        LONG bb0eqVvMax = InterlockedExchange(&g_bb0eqVvMax, 0);
        LONG bb0eqVlN = InterlockedExchange(&g_bb0eqVlN, 0);
        LONG bb0eqVlUs = InterlockedExchange(&g_bb0eqVlUs, 0);
        LONG bb0eqVlMax = InterlockedExchange(&g_bb0eqVlMax, 0);
        LONG bb0eqTaN = InterlockedExchange(&g_bb0eqTaN, 0);
        LONG bb0eqTaUs = InterlockedExchange(&g_bb0eqTaUs, 0);
        LONG bb0eqTaMax = InterlockedExchange(&g_bb0eqTaMax, 0);
        LONG bb0eqTbN = InterlockedExchange(&g_bb0eqTbN, 0);
        LONG bb0eqTbUs = InterlockedExchange(&g_bb0eqTbUs, 0);
        LONG bb0eqTbMax = InterlockedExchange(&g_bb0eqTbMax, 0);
        LONG bb0eqTbCN = InterlockedExchange(&g_bb0eqTbCN, 0);
        LONG bb0eqTbCUs = InterlockedExchange(&g_bb0eqTbCUs, 0);
        LONG bb0eqTbCMax = InterlockedExchange(&g_bb0eqTbCMax, 0);
        LONG bb0eqTbNstN = InterlockedExchange(&g_bb0eqTbNstN, 0);
        LONG bb0eqTbNstUs = InterlockedExchange(&g_bb0eqTbNstUs, 0);
        LONG bb0eqTbNstMax = InterlockedExchange(&g_bb0eqTbNstMax, 0);
        LONG bb0eqNstAN = InterlockedExchange(&g_bb0eqNstAN, 0);
        LONG bb0eqNstAUs = InterlockedExchange(&g_bb0eqNstAUs, 0);
        LONG bb0eqNstAMax = InterlockedExchange(&g_bb0eqNstAMax, 0);
        LONG bb0eqNstBN = InterlockedExchange(&g_bb0eqNstBN, 0);
        LONG bb0eqNstBUs = InterlockedExchange(&g_bb0eqNstBUs, 0);
        LONG bb0eqNstBMax = InterlockedExchange(&g_bb0eqNstBMax, 0);
        LONG tbCntN = InterlockedExchange(&g_tbCntN, 0);
        LONG tbCntSum = InterlockedExchange(&g_tbCntSum, 0);
        LONG tbCntMax = InterlockedExchange(&g_tbCntMax, 0);
        LONG tbEarly = InterlockedExchange(&g_tbEarlyN, 0);
        LONG tbFull = InterlockedExchange(&g_tbFullN, 0);
        LONG nstSkip = InterlockedExchange(&g_nstSkipN, 0);
        LONG nstWork = InterlockedExchange(&g_nstWorkN, 0);
        LONG nstCheap = InterlockedExchange(&g_nstCheapN, 0);
        LONG bb0eqTcN = InterlockedExchange(&g_bb0eqTcN, 0);
        LONG bb0eqTcUs = InterlockedExchange(&g_bb0eqTcUs, 0);
        LONG bb0eqTcMax = InterlockedExchange(&g_bb0eqTcMax, 0);
        LONG bb0eqTdN = InterlockedExchange(&g_bb0eqTdN, 0);
        LONG bb0eqTdUs = InterlockedExchange(&g_bb0eqTdUs, 0);
        LONG bb0eqTdMax = InterlockedExchange(&g_bb0eqTdMax, 0);
        LONG bb0eqVwN = InterlockedExchange(&g_bb0eqVwN, 0);
        LONG bb0eqVwUs = InterlockedExchange(&g_bb0eqVwUs, 0);
        LONG bb0eqVwMax = InterlockedExchange(&g_bb0eqVwMax, 0);
        LONG bb0eqVxN = InterlockedExchange(&g_bb0eqVxN, 0);
        LONG bb0eqVxUs = InterlockedExchange(&g_bb0eqVxUs, 0);
        LONG bb0eqVxMax = InterlockedExchange(&g_bb0eqVxMax, 0);
        LONG bb0eqVxHit = InterlockedExchange(&g_bb0eqVxHit, 0);
        LONG bb0eqSN = InterlockedExchange(&g_bb0eqSN, 0);
        LONG bb0eqSUs = InterlockedExchange(&g_bb0eqSUs, 0);
        LONG bb0eqSMax = InterlockedExchange(&g_bb0eqSMax, 0);
        LONG bb0eqRN = InterlockedExchange(&g_bb0eqRN, 0);
        LONG bb0eqRUs = InterlockedExchange(&g_bb0eqRUs, 0);
        LONG bb0eqRMax = InterlockedExchange(&g_bb0eqRMax, 0);
        LONG syncm = InterlockedExchange(&g_syncMissN, 0);
        LONG eqVskip = InterlockedExchange(&g_eqVSkipN, 0);
        LONG flx = InterlockedExchange(&g_uvFlushExN, 0);
        DWORD da8 = 0;
        int hasReorg = 0;
        if (g_uvLastIdler)
        {
            __try
            {
                da8 = *(DWORD*)((char*)g_uvLastIdler + 0xDA8);
                hasReorg = *(void**)((char*)g_uvLastIdler + 0x1644) ? 1 : 0;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
            }
        }
        InterlockedExchange(&g_spikeLogs, 0);
        DWORD dt = now - stamp;
        if (dt == 0)
            dt = 1;
        if (frames < 1)
            frames = 1;
        LogDbg("Present: tid=%u %d кадр / %u мс (~%u fps), inside %u/%u мс, sleep %d/%d мс, tgt=%d sel=%d/%d/%d "
            "recv=%d/%d wfso=%d/%d qpc=%d eu3=%d/%d nudge=%d/%d ing=%d/%d/%d stall=%u/%u dirty=%d/%d/%d pick=%d/%d move=%d/%d proj=%d/%d projskip=%d uv=%d/%d reuse=%d pool=%d/%d ntf=%d/%d skiprb=%d skiploc=%d "
            "evt=%d/%d dlg=%d/%d inf=%d/%d map=%d/%d winreuse=%d ovl=%d/%d/%d cam=%d/%d/%d mtx=%d/%d/%d vw=%d/%d/%d ico=%d/%d/%d gfx=%d/%d/%d pre=%d/%d/%d gui2=%d/%d/%d cln=%d/%d/%d tail=%d/%d/%d hd=%d/%d/%d aft=%d/%d/%d lkp=%d/%d/%d str=%d/%d/%d clu=%d/%d/%d pump=%d/%d/%d chk=%d/%d/%d wck=%d/%d/%d wskip=%d cskip=%d "
            "da8=%u rw=%d bb0=%d/%d/%d bb0h=%d/%d/%d bb0t=%d/%d/%d rorg=%d/%d/%d rbld=%d/%d/%d "
            "bb0s=%d/%d/%d bb0f=%d/%d/%d bb0l=%d/%d/%d bb0g=%d/%d/%d bb0o=%d/%d/%d "
            "bb0u=%d/%d/%d bb0ch=%d/%d/%d "
            "bb0c1=%d/%d/%d bb0c2=%d/%d/%d bb0c3=%d/%d/%d bb0c4=%d/%d/%d bb0cx=%d/%d/%d "
            "bb0rb=%d/%d/%d bb0eqA=%d/%d/%d bb0eqB=%d/%d/%d "
            "bb0eqH=%d/%d/%d bb0eqV=%d/%d/%d bb0eqVp=%d/%d/%d bb0eqVv=%d/%d/%d bb0eqVl=%d/%d/%d "
            "bb0eqTa=%d/%d/%d bb0eqTb=%d/%d/%d bb0eqTbC=%d/%d/%d bb0eqTbNst=%d/%d/%d "
            "nstA=%d/%d/%d nstB=%d/%d/%d tbCnt=%d/%d/%d tbEF=%d/%d nstSWC=%d/%d/%d "
            "bb0eqTc=%d/%d/%d bb0eqTd=%d/%d/%d "
            "bb0eqVw=%d/%d/%d bb0eqVx=%d/%d/%d/%d bb0eqS=%d/%d/%d bb0eqR=%d/%d/%d "
            "eqVskip=%d syncm=%d flx=%d",
            GetCurrentThreadId(),
            frames, dt, (unsigned)((frames * 1000u) / dt),
            (unsigned)(waitSum / frames), (unsigned)waitMax,
            sleepN, sleepMs, tgtN, selN, selMainN, selMainMs,
            recvN, recvMs, wfsoN, wfsoMs, qpcN,
            eu3N, eu3Ms, nudgeN, nudgeMs, ingN, (int)(ingMs / 1000), (int)(ingMax / 1000),
            (unsigned)(stallSum / frames), (unsigned)stallMax,
            dirtyN, (int)(dirtyUs / 1000), (int)(dirtyMax / 1000),
            pickN, (int)(pickUs / 1000),
            moveN, (int)(moveUs / 1000),
            projN, (int)(projUs / 1000),
            projSkip, uvN, (int)(uvUs / 1000), uvReuse,
            (int)g_uvPoolBusy, (int)g_uvPoolLive,
            ntfN, (int)(ntfUs / 1000), (int)skipRb, (int)skipLoc,
            evtN, (int)(evtUs / 1000),
            dlgN, (int)(dlgUs / 1000),
            infN, (int)(infUs / 1000),
            mapN, (int)(mapUs / 1000),
            (int)winReuse,
            ovlN, (int)(ovlUs / 1000), (int)(ovlMax / 1000),
            camN, (int)(camUs / 1000), (int)(camMax / 1000),
            mtxN, (int)(mtxUs / 1000), (int)(mtxMax / 1000),
            vwN, (int)(vwUs / 1000), (int)(vwMax / 1000),
            icoN, (int)(icoUs / 1000), (int)(icoMax / 1000),
            gfxN, (int)(gfxUs / 1000), (int)(gfxMax / 1000),
            preN, (int)(preUs / 1000), (int)(preMax / 1000),
            gui2N, (int)(gui2Us / 1000), (int)(gui2Max / 1000),
            clnN, (int)(clnUs / 1000), (int)(clnMax / 1000),
            tailN, (int)(tailUs / 1000), (int)(tailMax / 1000),
            hdN, (int)(hdUs / 1000), (int)(hdMax / 1000),
            aftN, (int)(aftUs / 1000), (int)(aftMax / 1000),
            lkpN, (int)(lkpUs / 1000), (int)(lkpMax / 1000),
            strN, (int)(strUs / 1000), (int)(strMax / 1000),
            cluN, (int)(cluUs / 1000), (int)(cluMax / 1000),
            pmpN, (int)(pmpUs / 1000), (int)(pmpMax / 1000),
            chkN, (int)(chkUs / 1000), (int)(chkMax / 1000),
            wckN, (int)(wckUs / 1000), (int)(wckMax / 1000),
            (int)wckSkip, (int)camSkip,
            da8, hasReorg,
            bb0N, (int)(bb0Us / 1000), (int)(bb0Max / 1000),
            bb0hN, (int)(bb0hUs / 1000), (int)(bb0hMax / 1000),
            bb0tN, (int)(bb0tUs / 1000), (int)(bb0tMax / 1000),
            rorgN, (int)(rorgUs / 1000), (int)(rorgMax / 1000),
            rbldN, (int)(rbldUs / 1000), (int)(rbldMax / 1000),
            bb0sN, (int)(bb0sUs / 1000), (int)(bb0sMax / 1000),
            bb0fN, (int)(bb0fUs / 1000), (int)(bb0fMax / 1000),
            bb0lN, (int)(bb0lUs / 1000), (int)(bb0lMax / 1000),
            bb0gN, (int)(bb0gUs / 1000), (int)(bb0gMax / 1000),
            bb0oN, (int)(bb0oUs / 1000), (int)(bb0oMax / 1000),
            bb0uN, (int)(bb0uUs / 1000), (int)(bb0uMax / 1000),
            bb0chN, (int)(bb0chUs / 1000), (int)(bb0chMax / 1000),
            bb0c1N, (int)(bb0c1Us / 1000), (int)(bb0c1Max / 1000),
            bb0c2N, (int)(bb0c2Us / 1000), (int)(bb0c2Max / 1000),
            bb0c3N, (int)(bb0c3Us / 1000), (int)(bb0c3Max / 1000),
            bb0c4N, (int)(bb0c4Us / 1000), (int)(bb0c4Max / 1000),
            bb0cxN, (int)(bb0cxUs / 1000), (int)(bb0cxMax / 1000),
            bb0rbN, (int)(bb0rbUs / 1000), (int)(bb0rbMax / 1000),
            bb0eqAN, (int)(bb0eqAUs / 1000), (int)(bb0eqAMax / 1000),
            bb0eqBN, (int)(bb0eqBUs / 1000), (int)(bb0eqBMax / 1000),
            bb0eqHN, (int)(bb0eqHUs / 1000), (int)(bb0eqHMax / 1000),
            bb0eqVN, (int)(bb0eqVUs / 1000), (int)(bb0eqVMax / 1000),
            bb0eqVpN, (int)(bb0eqVpUs / 1000), (int)(bb0eqVpMax / 1000),
            bb0eqVvN, (int)(bb0eqVvUs / 1000), (int)(bb0eqVvMax / 1000),
            bb0eqVlN, (int)(bb0eqVlUs / 1000), (int)(bb0eqVlMax / 1000),
            bb0eqTaN, (int)(bb0eqTaUs / 1000), (int)(bb0eqTaMax / 1000),
            bb0eqTbN, (int)(bb0eqTbUs / 1000), (int)(bb0eqTbMax / 1000),
            bb0eqTbCN, (int)(bb0eqTbCUs / 1000), (int)(bb0eqTbCMax / 1000),
            bb0eqTbNstN, (int)(bb0eqTbNstUs / 1000), (int)(bb0eqTbNstMax / 1000),
            bb0eqNstAN, (int)(bb0eqNstAUs / 1000), (int)(bb0eqNstAMax / 1000),
            bb0eqNstBN, (int)(bb0eqNstBUs / 1000), (int)(bb0eqNstBMax / 1000),
            (int)tbCntN, (int)tbCntSum, (int)tbCntMax,
            (int)tbEarly, (int)tbFull,
            (int)nstSkip, (int)nstWork, (int)nstCheap,
            bb0eqTcN, (int)(bb0eqTcUs / 1000), (int)(bb0eqTcMax / 1000),
            bb0eqTdN, (int)(bb0eqTdUs / 1000), (int)(bb0eqTdMax / 1000),
            bb0eqVwN, (int)(bb0eqVwUs / 1000), (int)(bb0eqVwMax / 1000),
            bb0eqVxN, (int)(bb0eqVxUs / 1000), (int)(bb0eqVxMax / 1000), (int)bb0eqVxHit,
            bb0eqSN, (int)(bb0eqSUs / 1000), (int)(bb0eqSMax / 1000),
            bb0eqRN, (int)(bb0eqRUs / 1000), (int)(bb0eqRMax / 1000),
            (int)eqVskip, (int)syncm, (int)flx);
    }
    WaitFpsCap();
    return hr;
}

static void ForceImmediatePresent(void* params)
{
    if (!params || !g_settings.patchD3dNoVsync)
        return;
    __try
    {
        *(DWORD*)((char*)params + D3DPRESENT_INTERVAL_OFF) = D3DPRESENT_INTERVAL_IMMEDIATE;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static HRESULT WINAPI HookReset(void* self, void* params)
{
    ForceImmediatePresent(params);
    return g_realReset ? g_realReset(self, params) : E_FAIL;
}

static HRESULT WINAPI HookCreateDevice(
    void* self, UINT adapter, UINT type, HWND hwnd, DWORD flags,
    void* params, void** outDevice)
{
    if (g_settings.patchD3dFpuPreserve)
        flags |= D3DCREATE_FPU_PRESERVE_FLAG;
    ForceImmediatePresent(params);

    HRESULT hr = g_realCreateDevice
        ? g_realCreateDevice(self, adapter, type, hwnd, flags, params, outDevice)
        : E_FAIL;

    if (hr >= 0 && outDevice && *outDevice)
    {
        PatchVtableSlot(*outDevice, D3D9DEV_VT_RESET, (void*)HookReset, (void**)&g_realReset);
        if (PatchVtableSlot(*outDevice, D3D9DEV_VT_PRESENT, (void*)HookPresent, (void**)&g_realPresent))
        {
            DWORD interval = 0;
            if (params)
                interval = *(DWORD*)((char*)params + D3DPRESENT_INTERVAL_OFF);
            Log("D3D9: Present перехвачен, FPU_PRESERVE=%d noVsync=%d interval=%08X",
                (int)g_settings.patchD3dFpuPreserve,
                (int)g_settings.patchD3dNoVsync,
                interval);
        }
    }
    return hr;
}

static void* WINAPI HookDirect3DCreate9(UINT sdk)
{
    void* obj = g_realDirect3DCreate9 ? g_realDirect3DCreate9(sdk) : 0;
    if (obj)
        PatchVtableSlot(obj, D3D9_VT_CREATEDEVICE, (void*)HookCreateDevice, (void**)&g_realCreateDevice);
    return obj;
}

__declspec(naked) static void HookTbbInit()
{
    __asm {
        mov eax, g_tbbMaxThreads
        cmp eax, 1
        jl go_real
        mov dword ptr [esp + 4], eax
    go_real:
        jmp dword ptr [g_realTbbInit]
    }
}

static void HookTbbModule(HMODULE tbb)
{
    if (!tbb || !g_settings.patchThreadFpuPin)
        return;

    static LONG loggedCt = 0;
    static LONG loggedBt = 0;
    static LONG loggedFail = 0;

    bool ct = HookIat(tbb, "kernel32.dll", "CreateThread",
        (void*)HookCreateThread, (void**)&g_realCreateThread);
    bool bt = HookIat(tbb, "MSVCR100.dll", "_beginthreadex",
        (void*)HookBeginThreadEx, (void**)&g_realBeginThreadEx);

    if (ct && InterlockedCompareExchange(&loggedCt, 1, 0) == 0)
        Log("TBB: CreateThread перехвачен");
    if (bt && InterlockedCompareExchange(&loggedBt, 1, 0) == 0)
        Log("TBB: _beginthreadex перехвачен");
    if (!ct && !bt && InterlockedCompareExchange(&loggedFail, 1, 0) == 0)
        Log("TBB: ни CreateThread, ни _beginthreadex в IAT");
}

static void HookTbbInitOnExe()
{
    if (g_settings.engineWorkerThreads < 1)
    {
        static LONG loggedOff = 0;
        if (InterlockedCompareExchange(&loggedOff, 1, 0) == 0)
            Log("TBB: кап снят (ENGINE_WORKER_THREADS=0), initialize не трогаем");
        return;
    }

    static LONG hooked = 0;
    if (hooked)
        return;

    HMODULE tbb = GetModuleHandleA("tbb.dll");
    if (!tbb)
        return;

    g_tbbMaxThreads = g_settings.engineWorkerThreads;
    if (!g_realTbbInit)
        g_realTbbInit = (void*)GetProcAddress(tbb, TBB_INIT_MANGLE);

    if (!g_realTbbInit)
    {
        Log("TBB: initialize не найден в tbb.dll");
        hooked = 1;
        return;
    }

    if (HookIat(GetModuleHandleA(NULL), "tbb.dll", TBB_INIT_MANGLE, (void*)HookTbbInit, &g_realTbbInit))
    {
        hooked = 1;
        Log("TBB: initialize капим на %d потоков", g_tbbMaxThreads);
    }
}

static void TryPatchLateModules()
{
    HMODULE exe = GetModuleHandleA(NULL);

    if (g_settings.patchThreadFpuPin)
    {
        HookIat(exe, "kernel32.dll", "CreateThread", (void*)HookCreateThread, (void**)&g_realCreateThread);
        HookIat(exe, "kernel32.dll", "LoadLibraryA", (void*)HookLoadLibraryA, (void**)&g_realLoadLibraryA);
        HookIat(exe, "kernel32.dll", "LoadLibraryW", (void*)HookLoadLibraryW, (void**)&g_realLoadLibraryW);
        HookIat(exe, "kernel32.dll", "GetTickCount", (void*)HookGetTickCount, (void**)&g_realGetTickCount);
    }

    HMODULE d3d9 = GetModuleHandleA("d3d9.dll");
    static LONG d3dHooked = 0;
    if (g_settings.patchD3dFpuPreserve && d3d9 && d3dHooked == 0)
    {
        if (!g_realDirect3DCreate9)
            g_realDirect3DCreate9 = (tDirect3DCreate9)GetProcAddress(d3d9, "Direct3DCreate9");
        if (g_realDirect3DCreate9 &&
            HookIat(exe, "d3d9.dll", "Direct3DCreate9", (void*)HookDirect3DCreate9, (void**)&g_realDirect3DCreate9))
        {
            d3dHooked = 1;
            Log("D3D9: Direct3DCreate9 перехвачен");
        }
    }

    HMODULE tbb = GetModuleHandleA("tbb.dll");
    if (tbb)
    {
        HookTbbModule(tbb);
        HookTbbInitOnExe();
    }

}

static bool NameHasTbbA(const char* name)
{
    if (!name)
        return false;
    for (const char* p = name; *p; ++p)
    {
        if ((p[0] == 't' || p[0] == 'T') &&
            (p[1] == 'b' || p[1] == 'B') &&
            (p[2] == 'b' || p[2] == 'B'))
            return true;
    }
    return false;
}

static bool NameHasTbbW(const wchar_t* name)
{
    if (!name)
        return false;
    for (const wchar_t* p = name; *p; ++p)
    {
        if ((p[0] == L't' || p[0] == L'T') &&
            (p[1] == L'b' || p[1] == L'B') &&
            (p[2] == L'b' || p[2] == L'B'))
            return true;
    }
    return false;
}

static HMODULE WINAPI HookLoadLibraryA(LPCSTR name)
{
    HMODULE m = g_realLoadLibraryA ? g_realLoadLibraryA(name) : 0;
    if (m && NameHasTbbA(name))
        HookTbbModule(m);
    return m;
}

static HMODULE WINAPI HookLoadLibraryW(LPCWSTR name)
{
    HMODULE m = g_realLoadLibraryW ? g_realLoadLibraryW(name) : 0;
    if (m && NameHasTbbW(name))
        HookTbbModule(m);
    return m;
}

__declspec(naked) static void MainLoopThunk()
{
    __asm {
        pushad
        call PinFpu
        call TryPatchLateModules
        popad
        push ebp
        mov ebp, esp
        push -1
        jmp dword ptr [g_mainLoopResume]
    }
}

static bool InstallMainLoopFpuPin()
{
    unsigned char* hook = (unsigned char*)(g_base + RVA_MAIN_LOOP);
    if (memcmp(hook, MAIN_LOOP_SIG, sizeof(MAIN_LOOP_SIG)) != 0)
    {
        Log("FPU: сигнатура главного цикла не совпала (%02X %02X %02X %02X %02X)",
            hook[0], hook[1], hook[2], hook[3], hook[4]);
        return false;
    }

    g_mainLoopResume = g_base + RVA_MAIN_LOOP + 5;

    unsigned char patch[5];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&MainLoopThunk - ((DWORD)hook + 5);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("FPU: пин на главном цикле rva %06X", RVA_MAIN_LOOP);
    return true;
}

static void InstallHeapLfh()
{
    HANDLE heaps[128];
    DWORD n = GetProcessHeaps(128, heaps);
    DWORD lfh = 2;
    DWORD ok = 0;
    for (DWORD i = 0; i < n; ++i)
    {
        if (HeapSetInformation(heaps[i], (HEAP_INFORMATION_CLASS)0, &lfh, sizeof(lfh)))
            ++ok;
    }
    Log("Heap: LFH включён на %u из %u куч (LAA exe=%d)",
        ok, n,
        (((IMAGE_NT_HEADERS32*)((unsigned char*)g_base +
            ((IMAGE_DOS_HEADER*)g_base)->e_lfanew))->FileHeader.Characteristics & IMAGE_FILE_LARGE_ADDRESS_AWARE) ? 1 : 0);
}

static const DWORD RVA_SLEEP_IAT = 0x88A0EC;
static const DWORD RVA_MAIN_SLEEP_A = 0x5DF2D5;
static const DWORD RVA_MAIN_SLEEP_B = 0x5DF684;

static bool PatchImm8Sleep(DWORD rvaPush, unsigned char expectMs, unsigned char newMs, const char* tag)
{
    unsigned char* p = (unsigned char*)(g_base + rvaPush);
    DWORD iat = g_base + RVA_SLEEP_IAT;
    if (p[0] != 0x6A || p[2] != 0xFF || p[3] != 0x15 || *(DWORD*)(p + 4) != iat)
    {
        Log("%s: сигнатура Sleep не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rvaPush, p[0], p[1], p[2], p[3]);
        return false;
    }
    if (p[1] != expectMs && p[1] != newMs)
    {
        Log("%s: неожиданный imm Sleep(%u) rva %06X", tag, (unsigned)p[1], rvaPush);
        return false;
    }

    DWORD oldProtect = 0;
    if (!VirtualProtect(p, 2, PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    p[1] = newMs;
    VirtualProtect(p, 2, oldProtect, &oldProtect);
    Log("%s: Sleep(%u) -> Sleep(%u) rva %06X", tag, (unsigned)expectMs, (unsigned)newMs, rvaPush);
    return true;
}

static DWORD WINAPI HookTimeGetTime(void)
{
    InterlockedIncrement(&g_tgtCalls);
    return g_timeGetTime ? g_timeGetTime() : 0;
}

static void InstallTimerResolution()
{
    // Clausewitz зовёт timeGetDevCaps и timeBeginPeriod(1) в rva 68B190,
    // но разбирает TIMECAPS как два байта, а не два UINT. На Win32
    // wPeriodMin=1 → после shr 8 проверка max==1 всегда ложна, Begin
    // не вызывается. Sleep(1) тогда округляется до кванта ~15.6 мс.
    HMODULE winmm = LoadLibraryA("winmm.dll");
    if (!winmm)
    {
        Log("Timer: winmm.dll не загрузился");
        return;
    }
    typedef UINT (WINAPI* tTimeBeginPeriod)(UINT);
    tTimeBeginPeriod fn = (tTimeBeginPeriod)GetProcAddress(winmm, "timeBeginPeriod");
    if (!fn)
    {
        Log("Timer: timeBeginPeriod не найден");
        return;
    }
    UINT err = fn(1);
    Log("Timer: timeBeginPeriod(1) = %u", err);

    g_timeGetTime = (tTimeGetTime)GetProcAddress(winmm, "timeGetTime");

    HMODULE ntdll = GetModuleHandleA("ntdll.dll");
    if (!ntdll)
        return;
    typedef LONG (NTAPI* tNtSetTimerResolution)(ULONG, BOOLEAN, ULONG*);
    tNtSetTimerResolution ntSet = (tNtSetTimerResolution)GetProcAddress(ntdll, "NtSetTimerResolution");
    if (!ntSet)
        return;
    ULONG cur = 0;
    LONG st = ntSet(10000, TRUE, &cur);
    Log("Timer: NtSetTimerResolution(1ms) status=%08X cur=%u", st, cur);
}

static void InstallMainLoopSleep0()
{
    // 6A 00 EB 02 6A 64 FF 15 [Sleep IAT] — ветка Sleep(0) vs Sleep(100).
    // 3.15: Sleep(0) оставляем хосту. Раньше оба плеча ставили в 1 мс,
    // и без рабочего timeBeginPeriod это давало потолок ~40 FPS.
    int ms = g_settings.mainLoopSleepMs;
    if (ms < 0)
        ms = 0;
    if (ms > 127)
        ms = 127;

    unsigned char* a = (unsigned char*)(g_base + RVA_MAIN_SLEEP_A);
    unsigned char* b = (unsigned char*)(g_base + RVA_MAIN_SLEEP_B);
    if (a[-4] != 0x6A || a[-3] != 0x00 || a[-2] != 0xEB || a[-1] != 0x02 ||
        b[-4] != 0x6A || b[-3] != 0x00 || b[-2] != 0xEB || b[-1] != 0x02)
    {
        Log("MainLoopSleep0: префикс 6A 00 EB 02 не совпал");
        return;
    }
    PatchImm8Sleep(RVA_MAIN_SLEEP_A, 100, (unsigned char)ms, "MainLoopSleep0");
    PatchImm8Sleep(RVA_MAIN_SLEEP_B, 100, (unsigned char)ms, "MainLoopSleep0");
}

static void InstallHighPriority()
{
    if (SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS))
        Log("CPU: priority ABOVE_NORMAL");
    else
        Log("CPU: SetPriorityClass failed %u", GetLastError());

    HMODULE k32 = GetModuleHandleA("kernel32.dll");
    if (!k32)
        return;

    typedef BOOL (WINAPI* tSetProcessInformation)(HANDLE, int, LPVOID, DWORD);
    tSetProcessInformation fn = (tSetProcessInformation)GetProcAddress(k32, "SetProcessInformation");
    if (!fn)
        return;

    struct PowerThrottle
    {
        ULONG Version;
        ULONG ControlMask;
        ULONG StateMask;
    } state;
    state.Version = 1;
    state.ControlMask = 0x1; // PROCESS_POWER_THROTTLING_EXECUTION_SPEED
    state.StateMask = 0;
    if (fn(GetCurrentProcess(), 4, &state, sizeof(state)))
        Log("CPU: power throttling off");
}

static void NoteSleep(DWORD rva, DWORD ret, DWORD origMs, DWORD newMs)
{
    LONG n = g_seenSleepN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenSleepRva) / sizeof(g_seenSleepRva[0])); ++i)
    {
        if (g_seenSleepRva[i] == rva && g_seenSleepMs[i] == origMs)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenSleepN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenSleepRva) / sizeof(g_seenSleepRva[0])))
        return;
    g_seenSleepRva[idx] = rva;
    g_seenSleepMs[idx] = origMs;
    if (rva)
        LogDbg("SleepIat: Sleep(%u) rva %06X -> %u", origMs, rva, newMs);
    else
        LogDbg("SleepIat: Sleep(%u) from %08X -> %u", origMs, ret, newMs);
}

static bool ShouldClampSleep(DWORD ms)
{
    // 30/35 — аудио около 00A63Bxx. Остальное 16..50 мс: кадровая
    // пауза часто Sleep(40-elapsed), не ровно 40.
    if (ms < 16 || ms > 50)
        return false;
    if (ms == 30 || ms == 35)
        return false;
    return true;
}

static void WINAPI HookSleep(DWORD ms)
{
    DWORD orig = ms;
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    if (g_settings.patchMpClientSleep && ShouldClampSleep(ms))
    {
        int nms = g_settings.mpClientSleepMs;
        if (nms < 0)
            nms = 0;
        if (nms > 127)
            nms = 127;
        ms = (DWORD)nms;
    }
    if (orig >= 1 && orig <= 80)
        NoteSleep(rva, ret, orig, ms);
    InterlockedIncrement(&g_sleepCalls);
    InterlockedExchangeAdd(&g_sleepSumMs, (LONG)ms);
    if (g_realSleep)
        g_realSleep(ms);
}

static void AppendKeyInput(INPUT* inputs, UINT* count, WORD vk, bool down)
{
    if (*count >= 2048)
        return;
    INPUT& input = inputs[(*count)++];
    memset(&input, 0, sizeof(input));
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = vk;
    input.ki.dwFlags = down ? 0 : KEYEVENTF_KEYUP;
}

static void TypeClipboardAsKeystrokes()
{
    HWND foreground = GetForegroundWindow();
    DWORD foregroundPid = 0;
    DWORD foregroundThread = foreground
        ? GetWindowThreadProcessId(foreground, &foregroundPid) : 0;
    if (!foregroundThread || foregroundPid != GetCurrentProcessId())
        return;

    // El layout se consulta en el hilo de la ventana destino (no en el hilo
    // auxiliar que procesa Ctrl+V). Los eventos Unicode no dependen de que
    // ese layout sea EN, ES, RU u otro.
    HKL layout = GetKeyboardLayout(foregroundThread);
    LANGID lang = LOWORD((ULONG_PTR)layout);
    wchar_t language[64] = L"";
    LCID locale = MAKELCID(lang, SORT_DEFAULT);
    if (!GetLocaleInfoW(locale, LOCALE_SENGLANGUAGE, language,
                       (int)(sizeof(language) / sizeof(language[0]))))
        wcscpy_s(language, L"Unknown");
    Log("ClipboardPaste: layout activo %ls (LANGID=%04X, HKL=%p)",
        language, (unsigned)lang, (void*)layout);

    wchar_t text[1024];
    unsigned len = 0;
    if (OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_UNICODETEXT);
        const wchar_t* wide = data ? (const wchar_t*)GlobalLock(data) : 0;
        if (wide)
        {
            while (wide[len] && len < (unsigned)(sizeof(text) / sizeof(text[0]) - 1) &&
                   wide[len] != L'\r' && wide[len] != L'\n')
            {
                text[len] = wide[len];
                ++len;
            }
            GlobalUnlock(data);
        }
        else
        {
            data = GetClipboardData(CF_TEXT);
            const char* ansi = data ? (const char*)GlobalLock(data) : 0;
            if (ansi)
            {
                int converted = MultiByteToWideChar(CP_ACP, 0, ansi, -1,
                                                     text, (int)(sizeof(text) / sizeof(text[0])));
                if (converted > 1)
                {
                    len = (unsigned)converted - 1;
                    for (unsigned i = 0; i < len; ++i)
                    {
                        if (text[i] == L'\r' || text[i] == L'\n')
                        {
                            len = i;
                            break;
                        }
                    }
                }
                GlobalUnlock(data);
            }
        }
        CloseClipboard();
    }
    if (!len)
        return;

    INPUT inputs[2048];
    UINT count = 0;
    for (unsigned i = 0; i < len && count + 2 <= 2048; ++i)
    {
        INPUT& down = inputs[count++];
        memset(&down, 0, sizeof(down));
        down.type = INPUT_KEYBOARD;
        down.ki.wScan = (WORD)text[i];
        down.ki.dwFlags = KEYEVENTF_UNICODE;

        INPUT& up = inputs[count++];
        memset(&up, 0, sizeof(up));
        up.type = INPUT_KEYBOARD;
        up.ki.wScan = (WORD)text[i];
        up.ki.dwFlags = KEYEVENTF_UNICODE | KEYEVENTF_KEYUP;
    }
    if (count)
    {
        UINT sent = SendInput(count, inputs, sizeof(INPUT));
        if (sent != count)
            Log("ClipboardPaste: SendInput aceptó %u de %u eventos (error %lu)",
                sent, count, GetLastError());
    }
}

static void PollClipboardPaste()
{
    bool ctrlV = (GetAsyncKeyState(VK_CONTROL) & 0x8000) &&
                 (GetAsyncKeyState('V') & 0x8000);
    if (ctrlV)
    {
        g_clipboardPasteArmed = true;
        return;
    }
    if (g_clipboardPasteArmed &&
        !(GetAsyncKeyState(VK_CONTROL) & 0x8000) &&
        !(GetAsyncKeyState('V') & 0x8000))
    {
        g_clipboardPasteArmed = false;
        TypeClipboardAsKeystrokes();
    }
}

static LRESULT CALLBACK ClipboardKeyboardProc(int code, WPARAM wParam, LPARAM lParam)
{
    if (code == HC_ACTION)
    {
        const KBDLLHOOKSTRUCT* key = (const KBDLLHOOKSTRUCT*)lParam;
        if (key && !(key->flags & LLKHF_INJECTED))
        {
            bool down = (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN);
            bool up = (wParam == WM_KEYUP || wParam == WM_SYSKEYUP);
            if (down || up)
            {
                bool value = down;
                bool vBefore = g_clipboardHookV;
                switch (key->vkCode)
                {
                case VK_LCONTROL:
                    g_clipboardHookCtrlL = value;
                    if (down && !vBefore)
                        g_clipboardHookCtrlPressedFirst = true;
                    break;
                case VK_RCONTROL:
                    g_clipboardHookCtrlR = value;
                    if (down && !vBefore)
                        g_clipboardHookCtrlPressedFirst = true;
                    break;
                case VK_CONTROL:
                    g_clipboardHookCtrlGeneric = value;
                    if (down && !vBefore)
                        g_clipboardHookCtrlPressedFirst = true;
                    break;
                case 'V':
                    g_clipboardHookV = value;
                    break;
                }

                bool ctrl = g_clipboardHookCtrlL || g_clipboardHookCtrlR ||
                            g_clipboardHookCtrlGeneric;
                if (down && key->vkCode == 'V' && ctrl &&
                    g_clipboardHookCtrlPressedFirst)
                    g_clipboardHookArmed = true;
                if (up && g_clipboardHookArmed && !ctrl && !g_clipboardHookV)
                {
                    g_clipboardHookArmed = false;
                    g_clipboardHookCtrlPressedFirst = false;
                    DWORD threadId = (DWORD)InterlockedCompareExchange(
                        &g_clipboardWorkerThreadId, 0, 0);
                    if (threadId)
                        PostThreadMessageA(threadId, WM_CLIPBOARD_PASTE, 0, 0);
                }
                if (!ctrl && !g_clipboardHookV && !g_clipboardHookArmed)
                    g_clipboardHookCtrlPressedFirst = false;
            }
        }
    }
    return CallNextHookEx(g_clipboardKeyboardHook, code, wParam, lParam);
}

static DWORD WINAPI ClipboardPasteWorker(LPVOID)
{
    InterlockedExchange(&g_clipboardWorkerThreadId, (LONG)GetCurrentThreadId());
    g_clipboardKeyboardHook = SetWindowsHookExA(
        WH_KEYBOARD_LL, ClipboardKeyboardProc, g_selfModule, 0);
    if (g_clipboardKeyboardHook)
    {
        Log("ClipboardPaste: hook de teclado activo (Ctrl+V), sin espera de sondeo");
        MSG msg;
        while (!InterlockedCompareExchange(&g_clipboardWorkerStop, 0, 0) &&
               GetMessageA(&msg, 0, 0, 0) > 0)
        {
            if (msg.message == WM_CLIPBOARD_PASTE)
                TypeClipboardAsKeystrokes();
            else
            {
                TranslateMessage(&msg);
                DispatchMessageA(&msg);
            }
        }
        UnhookWindowsHookEx(g_clipboardKeyboardHook);
        g_clipboardKeyboardHook = 0;
    }
    else
    {
        Log("ClipboardPaste: hook no disponible (%lu); usando sondeo de respaldo", GetLastError());
        while (!InterlockedCompareExchange(&g_clipboardWorkerStop, 0, 0))
        {
            PollClipboardPaste();
            Sleep(10);
        }
    }
    InterlockedExchange(&g_clipboardWorkerThreadId, 0);
    return 0;
}

static BOOL WINAPI HookPeekMessageA(LPMSG msg, HWND wnd, UINT min, UINT max, UINT remove)
{
    bool acc = IdleOnThisThread();
    LONGLONG t0 = 0;
    if (acc)
        t0 = QpcNow();
    BOOL r = g_realPeekMessageA ? g_realPeekMessageA(msg, wnd, min, max, remove) : FALSE;
    if (acc)
    {
        g_idlePeekN++;
        g_idlePeekUs += (LONG)QpcUs(t0);
        if (!g_idlePeekRva)
            g_idlePeekRva = ExeRvaOf((DWORD)(DWORD_PTR)_ReturnAddress());
    }
    return r;
}

static LRESULT WINAPI HookDispatchMessageA(const MSG* msg)
{
    bool acc = IdleOnThisThread();
    LONGLONG t0 = 0;
    if (acc)
        t0 = QpcNow();
    LRESULT r = g_realDispatchMessageA ? g_realDispatchMessageA(msg) : 0;
    if (acc)
    {
        g_idleDispN++;
        g_idleDispUs += (LONG)QpcUs(t0);
        if (!g_idleDispRva)
            g_idleDispRva = ExeRvaOf((DWORD)(DWORD_PTR)_ReturnAddress());
    }
    return r;
}

static bool SleepHookModuleUnsafe(HMODULE m)
{
    if (!m)
        return true;
    wchar_t path[MAX_PATH];
    path[0] = 0;
    if (!GetModuleFileNameW(m, path, MAX_PATH))
        return true;
    const wchar_t* slash = wcsrchr(path, L'\\');
    const wchar_t* base = slash ? slash + 1 : path;
    return !_wcsicmp(base, L"ntdll.dll") ||
           !_wcsicmp(base, L"kernel32.dll") ||
           !_wcsicmp(base, L"KERNELBASE.dll") ||
           !_wcsicmp(base, L"kernelbase.dll") ||
           !_wcsicmp(base, L"user32.dll") ||
           !_wcsicmp(base, L"gdi32.dll") ||
           !_wcsicmp(base, L"winmm.dll") ||
           !_wcsicmp(base, L"lua51.dll") ||
           !_wcsicmp(base, L"lua51_real.dll");
}

static void HookSleepOnModule(HMODULE m)
{
    if (!m || !g_settings.patchMpClientSleep || SleepHookModuleUnsafe(m))
        return;
    if (!g_realSleep)
    {
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        if (k32)
            g_realSleep = (tSleep)GetProcAddress(k32, "Sleep");
    }
    HookIat(m, "kernel32.dll", "Sleep", (void*)HookSleep, (void**)&g_realSleep);
    HookIat(m, "KERNELBASE.dll", "Sleep", (void*)HookSleep, (void**)&g_realSleep);
}

static void InstallSleepIatHook()
{
    if (!g_realSleep)
    {
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        if (k32)
            g_realSleep = (tSleep)GetProcAddress(k32, "Sleep");
    }
    HMODULE exe = GetModuleHandleA(NULL);
    if (HookIat(exe, "kernel32.dll", "Sleep", (void*)HookSleep, (void**)&g_realSleep))
        Log("SleepIat: kernel32.Sleep exe (16-50мс кроме аудио 30/35 -> %d)",
            g_settings.mpClientSleepMs);
    else
        Log("SleepIat: IAT Sleep exe не найден");
}

struct SockTimeVal
{
    long tv_sec;
    long tv_usec;
};
typedef int (WINAPI* tSelect)(int, void*, void*, void*, SockTimeVal*);
static tSelect g_realSelect = 0;
static DWORD g_seenSelectRva[12];
static LONG g_seenSelectN = 0;

static void NoteSelect(DWORD rva, long sec, long usec, int clamped)
{
    LONG n = g_seenSelectN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenSelectRva) / sizeof(g_seenSelectRva[0])); ++i)
    {
        if (g_seenSelectRva[i] == rva)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenSelectN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenSelectRva) / sizeof(g_seenSelectRva[0])))
        return;
    g_seenSelectRva[idx] = rva;
    LogDbg("Select: rva %06X timeout %ld.%06ld%s",
        rva, sec, usec, clamped ? " -> 1мс" : "");
}

static int WINAPI HookSelect(int nfds, void* r, void* w, void* e, SockTimeVal* tv)
{
    InterlockedIncrement(&g_selectCalls);
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    long sec = tv ? tv->tv_sec : 0;
    long usec = tv ? tv->tv_usec : 0;
    DWORD tid = GetCurrentThreadId();
    bool onPresent = g_presentTid && tid == g_presentTid;
    bool mixer = rva >= 0x689C00 && rva < 0x68C000;
    SockTimeVal localTv;
    SockTimeVal* useTv = tv;
    if (!tv)
    {
        static LONG loggedNull = 0;
        if (InterlockedCompareExchange(&loggedNull, 1, 0) == 0)
            LogDbg("Select: NULL timeout (блокирующий) rva %06X", rva);
    }
    // 3.24: только микшер 0x68B47D / диапазон 689C00-68C000.
    // Таймаут копируем — поле timeval в объекте игры не трогаем.
    if (tv && mixer && (sec > 0 || usec > 2000))
    {
        NoteSelect(rva, sec, usec, 1);
        localTv.tv_sec = 0;
        localTv.tv_usec = 1000;
        useTv = &localTv;
    }
    else if (tv && (sec || usec > 0))
        NoteSelect(rva, sec, usec, 0);
    DWORD t0 = NowMs();
    int rr = g_realSelect ? g_realSelect(nfds, r, w, e, useTv) : -1;
    DWORD dt = NowMs() - t0;
    if (onPresent)
    {
        InterlockedIncrement(&g_selMainN);
        InterlockedExchangeAdd(&g_selMainMs, (LONG)dt);
    }
    return rr;
}

static void InstallSelectHook()
{
    HMODULE exe = GetModuleHandleA(NULL);
    if (HookIatOrdinal(exe, "ws2_32.dll", 18, (void*)HookSelect, (void**)&g_realSelect) ||
        HookIatOrdinal(exe, "WS2_32.dll", 18, (void*)HookSelect, (void**)&g_realSelect))
        Log("Select: ws2_32.select перехвачен (микшер 68B47D >2мс -> 1мс, timeval копия)");
    else
        Log("Select: IAT select не найден");
}

typedef int (WINAPI* tRecv)(UINT s, char* buf, int len, int flags);
typedef DWORD (WINAPI* tWaitForSingleObject)(HANDLE, DWORD);
typedef BOOL (WINAPI* tQueryPerformanceCounter)(LARGE_INTEGER*);
typedef void (__thiscall* tIdlerIdle)(void* self, int arg);

static tRecv g_realRecv = 0;
static tWaitForSingleObject g_realWFSO = 0;
static tQueryPerformanceCounter g_realQpc = 0;
static tIdlerIdle g_realIdleEu3 = 0;
static tIdlerIdle g_realIdleNudge = 0;
static tIdlerIdle g_realIdleIngame = 0;
static DWORD g_seenWfsoMs[16];
static DWORD g_seenWfsoRva[16];
static LONG g_seenWfsoN = 0;
static DWORD g_seenRecvRva[8];
static LONG g_seenRecvN = 0;

__declspec(align(16)) static unsigned char g_trampIdleEu3[32];
__declspec(align(16)) static unsigned char g_trampIdleNudge[32];
__declspec(align(16)) static unsigned char g_trampIdleIngame[32];

static void NoteWfso(DWORD rva, DWORD origMs, DWORD newMs)
{
    LONG n = g_seenWfsoN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenWfsoRva) / sizeof(g_seenWfsoRva[0])); ++i)
    {
        if (g_seenWfsoRva[i] == rva && g_seenWfsoMs[i] == origMs)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenWfsoN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenWfsoRva) / sizeof(g_seenWfsoRva[0])))
        return;
    g_seenWfsoRva[idx] = rva;
    g_seenWfsoMs[idx] = origMs;
    LogDbg("WFSO: timeout %u rva %06X -> %u", origMs, rva, newMs);
}

static DWORD WINAPI HookWaitForSingleObject(HANDLE h, DWORD ms)
{
    DWORD orig = ms;
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    if (g_settings.patchMpClientSleep && ms != INFINITE && ShouldClampSleep(ms))
    {
        int nms = g_settings.mpClientSleepMs;
        if (nms < 0)
            nms = 0;
        if (nms > 127)
            nms = 127;
        ms = (DWORD)nms;
    }
    if (orig != INFINITE && orig <= 2000)
        NoteWfso(rva, orig, ms);
    DWORD t0 = NowMs();
    DWORD r = g_realWFSO ? g_realWFSO(h, ms) : WAIT_FAILED;
    DWORD dt = NowMs() - t0;
    InterlockedIncrement(&g_wfsoCalls);
    InterlockedExchangeAdd(&g_wfsoSumMs, (LONG)dt);
    return r;
}

// WFSO IAT: часть PATCH_MP_CLIENT_SLEEP (ожидания pump через WFSO).
// Использует уже существующий HookWaitForSingleObject / g_realWFSO.
static void InstallWfsoHook()
{
    HMODULE exe = GetModuleHandleA(NULL);
    HMODULE k32 = GetModuleHandleA("kernel32.dll");
    if (k32 && !g_realWFSO)
        g_realWFSO = (tWaitForSingleObject)GetProcAddress(k32, "WaitForSingleObject");
    if (HookIat(exe, "kernel32.dll", "WaitForSingleObject", (void*)HookWaitForSingleObject, (void**)&g_realWFSO))
        Log("WFSO: WaitForSingleObject exe перехвачен (16-50мс -> %d, INFINITE не трогаем)",
            g_settings.mpClientSleepMs);
    else
        Log("WFSO: IAT WaitForSingleObject не найден");
}

static void NoteRecv(DWORD rva, DWORD dt, int result)
{
    LONG n = g_seenRecvN;
    for (LONG i = 0; i < n && i < (LONG)(sizeof(g_seenRecvRva) / sizeof(g_seenRecvRva[0])); ++i)
    {
        if (g_seenRecvRva[i] == rva)
            return;
    }
    LONG idx = InterlockedIncrement(&g_seenRecvN) - 1;
    if (idx < 0 || idx >= (LONG)(sizeof(g_seenRecvRva) / sizeof(g_seenRecvRva[0])))
        return;
    g_seenRecvRva[idx] = rva;
    LogDbg("Recv: rva %06X dt=%u ret=%d", rva, dt, result);
}

static int WINAPI HookRecv(UINT s, char* buf, int len, int flags)
{
    DWORD ret = (DWORD)(DWORD_PTR)_ReturnAddress();
    DWORD rva = (g_base && ret >= g_base && ret < g_base + g_imageSize) ? ret - g_base : 0;
    DWORD t0 = NowMs();
    int r = g_realRecv ? g_realRecv(s, buf, len, flags) : -1;
    DWORD dt = NowMs() - t0;
    InterlockedIncrement(&g_recvCalls);
    InterlockedExchangeAdd(&g_recvSumMs, (LONG)dt);
    if (dt >= 2)
        NoteRecv(rva, dt, r);
    return r;
}

static BOOL WINAPI HookQpc(LARGE_INTEGER* v)
{
    InterlockedIncrement(&g_qpcCalls);
    return g_realQpc ? g_realQpc(v) : FALSE;
}

static void AccountIdle(volatile LONG* n, volatile LONG* ms, DWORD t0)
{
    DWORD dt = NowMs() - t0;
    InterlockedIncrement(n);
    InterlockedExchangeAdd(ms, (LONG)dt);
}

static void MarkGapToIdle(DWORD t0)
{
    if (!g_lastPresentEnd)
        return;
    DWORD gap = t0 - g_lastPresentEnd;
    if (gap < 200)
        InterlockedExchangeAdd(&g_gapToIdleMs, (LONG)gap);
}

static void __fastcall HookIdleEu3(void* self, void* edx, int arg)
{
    (void)edx;
    DWORD t0 = NowMs();
    MarkGapToIdle(t0);
    if (g_realIdleEu3)
        g_realIdleEu3(self, arg);
    AccountIdle(&g_idleEu3N, &g_idleEu3Ms, t0);
    g_lastIdleEnd = NowMs();
}

static void __fastcall HookIdleNudge(void* self, void* edx, int arg)
{
    (void)edx;
    DWORD t0 = NowMs();
    MarkGapToIdle(t0);
    if (g_realIdleNudge)
        g_realIdleNudge(self, arg);
    AccountIdle(&g_idleNudgeN, &g_idleNudgeMs, t0);
    g_lastIdleEnd = NowMs();
}

static LONG UsDelta(LONG after, LONG before)
{
    LONG d = after - before;
    return d > 0 ? d : 0;
}

static void __fastcall HookIdleIngame(void* self, void* edx, int arg)
{
    (void)edx;
    g_uvLastIdler = self;
    UvFlushSinglePanel();
    bool outer = (g_idleDepth == 0);
    if (!outer)
        g_idleNestN++;
    g_idleDepth++;
    if (g_idleDepth > g_idleDepthMax)
        g_idleDepthMax = g_idleDepth;
    if (!outer && (g_settings.patchSkipNestedIdle || g_settings.patchFixArmyWindowLag))
    {
        g_idleDepth--;
        return;
    }
    LONGLONG q0 = QpcNow();
    if (outer)
    {
        g_idleQ0 = q0;
        g_idleHeadMark = 0;
        g_idleOvlMark = 0;
        g_idleCamLoc = 0;
        g_idleOvlLoc = 0;
        g_idleIcoLoc = 0;
        g_idlePreLoc = 0;
        g_idleGui2Loc = 0;
        g_idleStrLoc = 0;
        g_idleCluLoc = 0;
        g_idleCamN = 0;
        g_idleOvlN = 0;
        g_idleCamLeave0 = 0;
        g_idleCamLeave1 = 0;
        g_idleOvlEnter0 = 0;
        g_idleOvlEnter1 = 0;
        g_idleOvlLeave0 = 0;
        g_idleOvlLeave1 = 0;
        g_idleOvlGapMax = 0;
        g_idleNestN = 0;
        g_idleDepthMax = g_idleDepth;
        g_idleInCam = 0;
        g_idleInOvl = 0;
        g_idlePresCam = 0;
        g_idlePresOvl = 0;
        g_idlePresElse = 0;
        g_idlePeekN = 0;
        g_idlePeekUs = 0;
        g_idleDispN = 0;
        g_idleDispUs = 0;
        g_idlePeekRva = 0;
        g_idleDispRva = 0;
        g_idlePresStk[0] = 0;
        g_idlePresStk[1] = 0;
        g_idlePresStk[2] = 0;
        g_idlePresStk[3] = 0;
        g_idlePresStkN = 0;
        g_idlePumpLoc = 0;
        g_idlePumpN = 0;
        g_idlePumpCam = 0;
        g_idlePumpNest = 0;
        g_idlePumpRva = 0;
        g_idlePumpStk[0] = 0;
        g_idlePumpStk[1] = 0;
        g_idlePumpStk[2] = 0;
        g_idlePumpStk[3] = 0;
        g_idlePumpStkN = 0;
        g_idleChkLoc = 0;
        g_idleChkN = 0;
        g_idleWckLoc = 0;
        g_idleWckN = 0;
        g_idleWckSkip = 0;
        g_idleTid = GetCurrentThreadId();
    }
    DWORD t0 = NowMs();
    MarkGapToIdle(t0);
    LONG dirty0 = g_dirtyUs;
    LONG cln0 = g_clnUs;
    LONG tail0 = g_tailUs;
    LONG lkp0 = g_lkpUs;
    LONG dlg0 = g_dlgUs;
    LONG inf0 = g_infUs;
    LONG map0 = g_mapUs;
    LONG evt0 = g_evtUs;
    LONG sleep0 = g_sleepSumMs;
    LONG wfso0 = g_wfsoSumMs;
    LONG pres0 = g_presentFrames;
    if (g_realIdleIngame)
        g_realIdleIngame(self, arg);
    DWORD us = QpcUs(q0);
    AccUs(&g_idleIngameN, &g_idleIngameMs, &g_idleIngameMax, q0);
    g_lastIdleEnd = NowMs();
    LONG head = 0;
    LONG aft = 0;
    if (outer)
    {
        head = g_idleHeadMark > 0 ? g_idleHeadMark : (LONG)us;
        if (g_idleOvlMark > 0)
        {
            aft = (LONG)us - g_idleOvlMark;
            if (aft < 0)
                aft = 0;
        }
        AccUsVal(&g_hdN, &g_hdUs, &g_hdMax, head);
        AccUsVal(&g_aftN, &g_aftUs, &g_aftMax, aft);
        g_idleQ0 = 0;
        g_idleTid = 0;
    }
    g_idleDepth--;
    if (us < 80000 || !outer)
        return;
    LONG cam = g_idleCamLoc;
    LONG ovl = g_idleOvlLoc;
    LONG ico = g_idleIcoLoc;
    LONG pre = g_idlePreLoc;
    LONG gui2 = g_idleGui2Loc;
    LONG str = g_idleStrLoc;
    LONG clu = g_idleCluLoc;
    LONG dirty = UsDelta(g_dirtyUs, dirty0);
    LONG cln = UsDelta(g_clnUs, cln0);
    LONG tail = UsDelta(g_tailUs, tail0);
    LONG lkp = UsDelta(g_lkpUs, lkp0);
    LONG dlg = UsDelta(g_dlgUs, dlg0);
    LONG inf = UsDelta(g_infUs, inf0);
    LONG map = UsDelta(g_mapUs, map0);
    LONG evt = UsDelta(g_evtUs, evt0);
    LONG accounted = cam + ovl + pre + gui2 + clu + cln + tail + lkp;
    LONG leftover = (LONG)us - accounted;
    if (leftover < 0)
        leftover = 0;
    if (InterlockedIncrement(&g_spikeLogs) > 8)
        return;
    LONG camL0 = g_idleCamLeave0;
    LONG ovlE0 = g_idleOvlEnter0;
    LONG gapCO = 0;
    LONG midOvl = 0;
    if (ovlE0 > 0 && camL0 > 0)
        gapCO = ovlE0 - camL0;
    if (g_idleOvlN >= 2 && g_idleOvlEnter1 > 0 && g_idleOvlLeave0 > 0)
        midOvl = g_idleOvlEnter1 - g_idleOvlLeave0;
    if (gapCO < 0)
        gapCO = 0;
    if (midOvl < 0)
        midOvl = 0;
    LogDbg("IdleSpike: %u мс leftover=%d head=%d aft=%d cam=%d ovl=%d ico=%d pre=%d str=%d clu=%d gui2=%d "
        "lkp=%d cln=%d tail=%d dirty=%d dlg=%d inf=%d map=%d evt=%d sleep=%d wfso=%d present=%d "
        "camN=%d ovlN=%d gapCO=%d midOvl=%d camL=%d ovlE=%d "
        "nest=%d dmax=%d pCam=%d pOvl=%d pElse=%d ovlGap=%d peek=%d/%d disp=%d/%d "
        "stk=%06X,%06X,%06X,%06X peekR=%06X dispR=%06X "
        "pump=%d/%d pCamP=%d pNest=%d pumpR=%06X pstk=%06X,%06X,%06X,%06X chk=%d/%d wck=%d/%d wskip=%d",
        us / 1000, leftover / 1000, head / 1000, aft / 1000,
        cam / 1000, ovl / 1000, ico / 1000, pre / 1000, str / 1000, clu / 1000, gui2 / 1000,
        lkp / 1000, cln / 1000, tail / 1000, dirty / 1000,
        dlg / 1000, inf / 1000, map / 1000, evt / 1000,
        (int)UsDelta(g_sleepSumMs, sleep0),
        (int)UsDelta(g_wfsoSumMs, wfso0),
        (int)UsDelta(g_presentFrames, pres0),
        (int)g_idleCamN, (int)g_idleOvlN,
        gapCO / 1000, midOvl / 1000, camL0 / 1000, ovlE0 / 1000,
        (int)g_idleNestN, (int)g_idleDepthMax,
        (int)g_idlePresCam, (int)g_idlePresOvl, (int)g_idlePresElse,
        g_idleOvlGapMax / 1000,
        (int)g_idlePeekN, g_idlePeekUs / 1000,
        (int)g_idleDispN, g_idleDispUs / 1000,
        g_idlePresStk[0], g_idlePresStk[1], g_idlePresStk[2], g_idlePresStk[3],
        g_idlePeekRva, g_idleDispRva,
        (int)g_idlePumpN, g_idlePumpLoc / 1000,
        (int)g_idlePumpCam, (int)g_idlePumpNest, g_idlePumpRva,
        g_idlePumpStk[0], g_idlePumpStk[1], g_idlePumpStk[2], g_idlePumpStk[3],
        (int)g_idleChkN, g_idleChkLoc / 1000,
        (int)g_idleWckN, g_idleWckLoc / 1000, (int)g_idleWckSkip);
}

static bool StealToTrampoline(DWORD rva, unsigned steal, unsigned char* tramp, int trampSize,
    const unsigned char* expect, void* hook, void** orig, const char* tag)
{
    unsigned char* src = (unsigned char*)(g_base + rva);
    if (steal < 5 || steal > 16 || trampSize < (int)(steal + 5))
        return false;
    if (memcmp(src, expect, steal) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rva, src[0], src[1], src[2], src[3]);
        return false;
    }

    DWORD old = 0;
    if (!VirtualProtect(tramp, trampSize, PAGE_EXECUTE_READWRITE, &old))
        return false;
    memcpy(tramp, src, steal);
    tramp[steal] = 0xE9;
    *(DWORD*)(tramp + steal + 1) = (DWORD)(src + steal) - ((DWORD)(tramp + steal + 5));
    *orig = tramp;

    if (!VirtualProtect(src, steal, PAGE_EXECUTE_READWRITE, &old))
        return false;
    unsigned char jmp[16];
    memset(jmp, 0x90, steal);
    jmp[0] = 0xE9;
    *(DWORD*)(jmp + 1) = (DWORD)(DWORD_PTR)hook - ((DWORD)src + 5);
    memcpy(src, jmp, steal);
    VirtualProtect(src, steal, old, &old);
    FlushInstructionCache(GetCurrentProcess(), src, steal);
    FlushInstructionCache(GetCurrentProcess(), tramp, trampSize);
    LogDbg("%s: idle rva %06X", tag, rva);
    return true;
}

// Mid-CALL wrap: jmp на хук, который сам вызывает оригинал и возвращается
// на src+n. Нельзя StealToTrampoline — tramp с E8+jmp-after не возвращает.
static bool PlantMidJump(DWORD rva, unsigned n, const unsigned char* expect, void* hook, const char* tag)
{
    unsigned char* src = (unsigned char*)(g_base + rva);
    if (n < 5 || n > 16)
        return false;
    if (memcmp(src, expect, n) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rva, src[0], src[1], src[2], src[3]);
        return false;
    }
    DWORD old = 0;
    if (!VirtualProtect(src, n, PAGE_EXECUTE_READWRITE, &old))
        return false;
    unsigned char jmp[16];
    memset(jmp, 0x90, n);
    jmp[0] = 0xE9;
    *(DWORD*)(jmp + 1) = (DWORD)(DWORD_PTR)hook - ((DWORD)src + 5);
    memcpy(src, jmp, n);
    VirtualProtect(src, n, old, &old);
    FlushInstructionCache(GetCurrentProcess(), src, n);
    LogDbg("%s: mid rva %06X n=%u", tag, rva, n);
    return true;
}

// Выбор/ход армии: не single_unitpanel (3.28 panel=0 при реальных кликах).
// Звук army_selected / navy_selected + selection_projection: rva 1CC530.
// Приказ хода army_move + legal/illegal projection: rva 1CCEC0.
static const DWORD RVA_PROV_DIRTY = 0x3FC360;
static const DWORD RVA_ARMY_PICK  = 0x1CC530;
static const DWORD RVA_ARMY_MOVE  = 0x1CCEC0;
static const DWORD RVA_SEL_PROJ   = 0x1D4540;

typedef void (__stdcall* tProvDirty)(void* a, int b, void* c);
typedef void (__thiscall* tArmyPick)(void* self, DWORD a);
typedef void (__thiscall* tArmyMove)(void* self, DWORD a, DWORD b);
typedef void (__stdcall* tSelProj)(void* mgr, void* obj130);

static tProvDirty g_realProvDirty = 0;
static tArmyPick  g_realArmyPick = 0;
static tArmyMove  g_realArmyMove = 0;
static tSelProj   g_realSelProj = 0;
typedef void* (__thiscall* tUnitViewCtor)(void* idler, void* buf, void* army, int z, void* extra);
typedef void (__cdecl* tGameDelete)(void*);
typedef void (__thiscall* tIdlerNotify)(void* idler, void* army);
static tUnitViewCtor g_realUnitViewCtor = 0;
static tGameDelete   g_gameDelete = 0;
static tIdlerNotify  g_realIdlerNotify = 0;

// Пул CUnitView: игра на каждый клик делала new(0x320)+разбор unitpanel.gui.
// Держим до 10 живых панелей (UI only, checksum не трогаем). Свободный слот
// перевязывает army на +0x28 вместо ctor. На deselect — Hide unitpanel
// (vfunc +0x38 у token+0x18), не destroy: иначе карточки и «Выбрать»
// залипают сбоку. Больше 10 одновременных — родной ctor/dtor. Смену idler
// (выход в меню) забываем без dtor: родительский GUI уже разобран.
static const int UV_POOL_MAX = 10;
static const DWORD RVA_CUNITVIEW_VT = 0xA16850;
struct UnitViewSlot
{
    void* view;
    bool  inUse;
};
static UnitViewSlot g_uvPool[UV_POOL_MAX];
static void*        g_uvOwner = 0;
static void*        g_uvPendingPanel = 0;
static void*        g_uvSingleArmy = 0;
static bool         g_uvNeedRebuild = false;
static void*        g_real393510 = 0;
static void*        g_real393290 = 0;
static void*        g_real391BB0 = 0;
static void*        g_real391C6E = 0;
static void*        g_real3810A0 = 0;
static void*        g_realListClear = 0;
static void*        g_afterListClear = 0;
static void*        g_uvLastList = 0;
static void*        g_bb0Epilogue = 0;
static int          g_uvSkipListTail = 0;
static LONGLONG     g_bb0TailMark = 0;
static LONGLONG     g_bb0sT0 = 0;
static LONGLONG     g_bb0fT0 = 0;
static LONGLONG     g_bb0lT0 = 0;
static LONGLONG     g_bb0gT0 = 0;
static LONG         g_bb0sThis = 0;
static LONG         g_bb0fThis = 0;
static LONG         g_bb0lThis = 0;
static LONG         g_bb0gThis = 0;
static void*        g_fn009350 = 0;
static void*        g_fn19C160 = 0;
static void*        g_bb0ContStr = 0;
static void*        g_bb0ContFind = 0;
static void*        g_bb0ContList = 0;
static void*        g_bb0ContHash = 0;
static void*        g_bb0ContChild = 0;
static void*        g_real5B2750 = 0;
static void*        g_fn38B4C0 = 0;
static void*        g_bb0ContSync = 0;
static void*        g_fn38B2E0 = 0;
static void*        g_fn38B140 = 0;
static void*        g_fn731C00 = 0;
static void*        g_fn008ED0 = 0;
static void*        g_fn38A4D0 = 0;
static void*        g_bb0ContEqA = 0;
static void*        g_bb0ContEqB = 0;
static void*        g_bb0ContEqH = 0;
static void*        g_bb0ContEqV = 0;
static void*        g_bb0ContEqS = 0;
static void*        g_bb0ContEqR = 0;
static void*        g_bb0ContEqVp = 0;
static void*        g_bb0ContEqVv = 0;
static void*        g_bb0ContEqVl = 0;
static void*        g_bb0ContEqTb = 0;
static void*        g_bb0ContEqTc = 0;
static void*        g_bb0ContEqTd = 0;
static void*        g_bb0ContEqTbC = 0;
static void*        g_bb0ContEqVw = 0;
static void*        g_bb0ContEqVx = 0;
static LONGLONG     g_bb0eqAT0 = 0;
static LONGLONG     g_bb0rbT0 = 0;
static LONGLONG     g_bb0eqBT0 = 0;
static LONGLONG     g_bb0eqHT0 = 0;
static LONGLONG     g_bb0eqVT0 = 0;
static LONGLONG     g_bb0eqST0 = 0;
static LONGLONG     g_bb0eqRT0 = 0;
static LONGLONG     g_eqVSliceT0 = 0;
static int          g_eqVSlice = -1;
static LONG         g_eqVSlicesOn = 0;
static LONG         g_eqVActive = 0;
static LONG         g_eqVSkipShow = 0;
static LONG         g_eqVArmed = 0;
static void*        g_eqVFpList = 0;
static DWORD        g_eqVFpCount = 0;
static DWORD        g_eqVFpHash = 0;
static LONG         g_list7cLogged = 0;
static LONG         g_syncDiagN = 0;
static DWORD        g_child24Seen[8];
static DWORD        g_eqVSeen[8];
static DWORD        g_tbFnSeen[8];
static DWORD        g_tbVtSeen[8];
static DWORD        g_tbNstFnSeen[8];
static DWORD        g_tbNstVtSeen[8];
static DWORD        g_nstASeen[4];
static DWORD        g_nstBSeen[4];
static LONGLONG     g_bb0chT0 = 0;
static DWORD        g_bb0chRva = 0;
static BYTE*        g_uvLocContinue = 0;
static BYTE*        g_uvLocEpilogue = 0;

static void UvRecount()
{
    LONG live = 0, busy = 0;
    for (int i = 0; i < UV_POOL_MAX; i++)
    {
        if (!g_uvPool[i].view)
            continue;
        live++;
        if (g_uvPool[i].inUse)
            busy++;
    }
    InterlockedExchange(&g_uvPoolLive, live);
    InterlockedExchange(&g_uvPoolBusy, busy);
}

static void WinPoolReset();

static void UvPoolReset()
{
    memset(g_uvPool, 0, sizeof(g_uvPool));
    g_uvOwner = 0;
    g_uvLastIdler = 0;
    g_uvPendingPanel = 0;
    g_uvSingleArmy = 0;
    g_uvNeedRebuild = false;
    g_uvSkipListTail = 0;
    g_uvLastList = 0;
    g_eqVSkipShow = 0;
    g_eqVArmed = 0;
    g_eqVFpList = 0;
    g_eqVFpCount = 0;
    g_eqVFpHash = 0;
    UvRecount();
    WinPoolReset();
}

static bool UvViewAlive(void* view)
{
    if (!view || !g_base)
        return false;
    __try
    {
        return *(DWORD*)view == (g_base + RVA_CUNITVIEW_VT);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static int UvFind(void* view)
{
    if (!view)
        return -1;
    for (int i = 0; i < UV_POOL_MAX; i++)
    {
        if (g_uvPool[i].view == view)
            return i;
    }
    return -1;
}

static void UvDropDead()
{
    for (int i = 0; i < UV_POOL_MAX; i++)
    {
        if (g_uvPool[i].view && !UvViewAlive(g_uvPool[i].view))
            memset(&g_uvPool[i], 0, sizeof(g_uvPool[i]));
    }
    UvRecount();
}

// token = CUnitView+0x20 ("unitpanel"), inner CGuiObject = token+0x18.
// Игра прячет так: add ecx,0x18; call [vtable+0x38] (dtor 39D646, layout 26A7C6).
// Show — соседний слот +0x34 (26A8F8, без лишних аргументов).
static void UvCallGui(void* view, unsigned voff)
{
    if (!view)
        return;
    __try
    {
        void* tok = *(void**)((char*)view + 0x20);
        if (!tok)
            return;
        void* gui = (char*)tok + 0x18;
        void** vt = *(void***)gui;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(gui);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvHide(void* view)
{
    UvCallGui(view, 0x38);
}

static void UvShow(void* view)
{
    UvCallGui(view, 0x34);
}

// Токен GUI: объект+0x18. Hide +0x38, Show +0x34 (393570 / 393510).
static void UvCallGuiToken(void* tok, unsigned voff)
{
    if (!tok)
        return;
    __try
    {
        void* gui = (char*)tok + 0x18;
        void** vt = *(void***)gui;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(gui);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvHideGuiToken(void* tok)
{
    UvCallGuiToken(tok, 0x38);
}

static void UvCallGuiObj(void* gui, unsigned voff)
{
    if (!gui)
        return;
    __try
    {
        void** vt = *(void***)gui;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(gui);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvHideGuiObj(void* gui)
{
    UvCallGuiObj(gui, 0x38);
}

static void UvShowGuiObj(void* gui)
{
    UvCallGuiObj(gui, 0x34);
}

static void UvLayoutGui(void* gui)
{
    UvCallGuiObj(gui, 0x6C);
}

static void UvShowGuiToken(void* tok)
{
    UvCallGuiToken(tok, 0x34);
}

static void UvShowDetail(void* panel)
{
    if (!panel)
        return;
    __try
    {
        UvShowGuiToken(*(void**)((char*)panel + 4));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvFinishPanelLayout()
{
    if (!g_uvLastList)
        return;
    UvShowGuiObj(g_uvLastList);
    UvLayoutGui(g_uvLastList);
    UvLayoutGui(g_uvLastList);
}

// 39332D: дети list в this+0x60 (5B2750). +0x64/+0x68 — layout (3.71).
// 3.73 только обнулил голову — старые виджеты остались наверху, реорг
// мёртв из‑за skip 391BB0. NeedRebuild: Hide детей, голова = 0, размер нет.
static void __stdcall UvUnlinkListHead(void* list)
{
    if (!list)
        return;
    void* node = 0;
    __try
    {
        node = *(void**)((char*)list + 0x60);
        *(void**)((char*)list + 0x60) = 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }
    DWORD uvVt = g_base ? (g_base + RVA_CUNITVIEW_VT) : 0;
    int n = 0;
    while (node && n++ < 256)
    {
        void* child = 0;
        void* next = 0;
        __try
        {
            child = *(void**)node;
            next = *(void**)((char*)node + 8);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            break;
        }
        if (child)
        {
            __try
            {
                DWORD vt0 = *(DWORD*)child;
                if (uvVt && vt0 == uvVt)
                    UvHide(child);
                else
                    UvHideGuiObj(child);
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
            }
        }
        node = next;
    }
}

// 393570 ванили: Hide + vfunc +0x5C (чистка детей list) + Hide по вектору.
// Чистка убивает окно бригад — в 3.40 после skip 393290 показывать было нечего.
// Оставляем виджеты, только прячем.
static void __stdcall UvHideDetailKeep(void* panel)
{
    if (!panel)
        return;
    __try
    {
        // Hide +0x38 не рекурсивный: прятать panel+4 сносит рамку, строки
        // списка остаются и едут на карту. Прячем list и vector.
        if (g_uvLastList)
            UvHideGuiObj(g_uvLastList);
        void** begin = *(void***)((char*)panel + 0x10);
        void** end = *(void***)((char*)panel + 0x14);
        if (begin && end && end > begin)
        {
            for (void** p = begin; p < end; p++)
                UvHideGuiToken(*p);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void UvInvalidateBrigadePanel()
{
    g_uvSingleArmy = 0;
    g_uvNeedRebuild = true;
}

static void UvHideDetailIfMulti(void* idler)
{
    if (!idler)
        return;
    __try
    {
        DWORD n = *(DWORD*)((char*)idler + 0xDA8);
        if (n == 1)
            return;
        UvInvalidateBrigadePanel();
        void* panel = *(void**)((char*)idler + 0x1640);
        if (n <= 1)
            return;
        if (panel)
            UvHideDetailKeep(panel);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void __stdcall UvDeferPanelRefresh(void* panel)
{
    g_uvPendingPanel = panel;
}

static void UvCall393510(void* panel)
{
    void* fn = g_real393510;
    if (!fn || !panel)
        return;
    __asm {
        mov eax, panel
        call fn
    }
}

static void __stdcall UvOn393510(void* panel)
{
    // Не звать 393510 на стеке pick: 3.68 NeedRebuild+сразу → +0x5C
    // по строке "status" (eax=stat), eip в windows.storage.
    g_uvPendingPanel = panel;
}

// Рамка/клики: 393510 при da8==1 на ПЕРВОЙ армии, окно потом прячут.
// Копим вызов до idle/Present: если к кадру уже >1 — не собираем.
static void UvFlushSinglePanel()
{
    void* idler = g_uvLastIdler;
    if (!idler || !g_real393510)
        return;
    __try
    {
        if (!g_uvNeedRebuild && g_uvOwner && idler != g_uvOwner)
            return;
        if (*(DWORD*)((char*)idler + 0xDA8) != 1)
            return;
        void* live = *(void**)((char*)idler + 0x1640);
        void* panel = g_uvPendingPanel;
        if (!panel && g_uvNeedRebuild)
            panel = live;
        if (!panel)
            return;
        if (live)
            panel = live;
        g_uvPendingPanel = 0;
        UvShowDetail(panel);
        UvCall393510(panel);
        UvShowDetail(panel);
        UvFinishPanelLayout();
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_uvPendingPanel = 0;
        InterlockedIncrement(&g_uvFlushExN);
    }
}

// 3.98: 393290 из 391C6E не скипаем (dirty split/newunit).
// 4.00: coop skip 393290@393510 откатан — только таймер.
static int __stdcall UvOnPanelRebuild(void* panel, DWORD retaddr)
{
    (void)panel;
    (void)retaddr;
    return 0;
}

static void __stdcall UvNoteRebuildArmy(void* panel)
{
    if (!panel)
        return;
    __try
    {
        g_uvSingleArmy = *(void**)((char*)panel + 8);
        g_uvNeedRebuild = false;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_uvSingleArmy = 0;
    }
}

static void __stdcall UvTimeCall393290(void* panel, DWORD retaddr)
{
    DWORD rva = ExeRvaOf(retaddr);
    static LONG logged = 0;
    LONG n = InterlockedIncrement(&logged);
    if (n <= 16)
        LogDbg("ArmySelect: 393290 run ret=%06X", rva);
    LONGLONG t0 = QpcNow();
    void* fn = g_real393290;
    __asm {
        mov esi, panel
        call fn
    }
    AccUs(&g_rbldN, &g_rbldUs, &g_rbldMax, t0);
}

static void __stdcall UvBb0SliceEnter(LONGLONG* t0)
{
    *t0 = QpcNow();
}

static void __stdcall UvBb0SliceLeave(LONGLONG t0, volatile LONG* n, volatile LONG* us, volatile LONG* mx, LONG* thisCall)
{
    LONG dt = (LONG)QpcUs(t0);
    *thisCall = dt;
    AccUsVal(n, us, mx, dt);
}

static void __stdcall UvBb0sEnter() { UvBb0SliceEnter(&g_bb0sT0); }
static void __stdcall UvBb0sLeave() { UvBb0SliceLeave(g_bb0sT0, &g_bb0sN, &g_bb0sUs, &g_bb0sMax, &g_bb0sThis); }
static void __stdcall UvBb0fEnter() { UvBb0SliceEnter(&g_bb0fT0); }
static void __stdcall UvBb0fLeave() { UvBb0SliceLeave(g_bb0fT0, &g_bb0fN, &g_bb0fUs, &g_bb0fMax, &g_bb0fThis); }
static void __stdcall UvBb0lEnter() { UvBb0SliceEnter(&g_bb0lT0); }
static void __stdcall UvBb0lLeave() { UvBb0SliceLeave(g_bb0lT0, &g_bb0lN, &g_bb0lUs, &g_bb0lMax, &g_bb0lThis); }
static void __stdcall UvBb0gEnter() { UvBb0SliceEnter(&g_bb0gT0); }
static void __stdcall UvBb0gLeave() { UvBb0SliceLeave(g_bb0gT0, &g_bb0gN, &g_bb0gUs, &g_bb0gMax, &g_bb0gThis); }

static void __stdcall UvNoteList7c(void* fn)
{
    if (InterlockedCompareExchange(&g_list7cLogged, 1, 0) != 0)
        return;
    LogDbg("ArmySelect: list +0x7C rva %06X (ждём 5B2750 = Update детей listbox)",
        ExeRvaOf((DWORD)(DWORD_PTR)fn));
}

static void __stdcall UvNoteChild24(void* fn)
{
    DWORD rva = ExeRvaOf((DWORD)(DWORD_PTR)fn);
    for (int i = 0; i < 8; i++)
    {
        if (g_child24Seen[i] == rva)
            return;
        if (g_child24Seen[i] == 0)
        {
            g_child24Seen[i] = rva;
            const char* tag = "other";
            if (rva == 0x3993B0)
                tag = "thunk";
            else if (rva == 0x38C550)
                tag = "supply/kph/speed";
            else if (rva == 0x38E820)
                tag = "attach/detach";
            else if (rva == 0x38AF00)
                tag = "list-sync";
            LogDbg("ArmySelect: list child +0x24 rva %06X (%s)", rva, tag);
            return;
        }
    }
}

static void __stdcall UvBb0chEnter(void* fn)
{
    UvNoteChild24(fn);
    g_bb0chRva = ExeRvaOf((DWORD)(DWORD_PTR)fn);
    g_bb0chT0 = QpcNow();
}

static void __stdcall UvBb0chLeave()
{
    LONG dt = (LONG)QpcUs(g_bb0chT0);
    AccUsVal(&g_bb0chN, &g_bb0chUs, &g_bb0chMax, dt);
    switch (g_bb0chRva)
    {
    case 0x3993B0:
        AccUsVal(&g_bb0c1N, &g_bb0c1Us, &g_bb0c1Max, dt);
        break;
    case 0x38C550:
        AccUsVal(&g_bb0c2N, &g_bb0c2Us, &g_bb0c2Max, dt);
        break;
    case 0x38E820:
        AccUsVal(&g_bb0c3N, &g_bb0c3Us, &g_bb0c3Max, dt);
        break;
    case 0x38AF00:
        AccUsVal(&g_bb0c4N, &g_bb0c4Us, &g_bb0c4Max, dt);
        break;
    default:
        AccUsVal(&g_bb0cxN, &g_bb0cxUs, &g_bb0cxMax, dt);
        break;
    }
}

static void __stdcall UvTime5B2750(void* self)
{
    LONGLONG t0 = QpcNow();
    void* fn = g_real5B2750;
    __asm {
        mov ecx, self
        call fn
    }
    AccUs(&g_bb0uN, &g_bb0uUs, &g_bb0uMax, t0);
}

// 38AF3A: call 38B4C0 после push esi. Не StealToTrampoline на 38B4C0 —
// 3.80 портил ESI во вложенном вызове из 393290 → AV [esi+8]+0x74.
static void UvEqVInvalidateShow()
{
    g_eqVSkipShow = 0;
    g_eqVArmed = 0;
    g_eqVFpList = 0;
    g_eqVFpCount = 0;
    g_eqVFpHash = 0;
}

static int UvEqVHashList(void* list, DWORD* countOut, DWORD* hashOut)
{
    if (!list || !countOut || !hashOut)
        return 0;
    __try
    {
        DWORD n = *(DWORD*)((char*)list + 0x58);
        DWORD* arr = *(DWORD**)((char*)list + 0x5C);
        *countOut = n;
        DWORD h = n;
        DWORD lim = n;
        if (lim > 64)
            lim = 64;
        if (arr)
        {
            for (DWORD i = 0; i < lim; i++)
                h ^= arr[i] + (i * 0x9E3779B9u);
            if (n > 64)
                h ^= arr[n - 1];
        }
        *hashOut = h;
        return 1;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

static void __stdcall UvTimeSyncMissEnter(void* outer)
{
    UvEqVInvalidateShow();
    InterlockedIncrement(&g_syncMissN);
    LONG n = InterlockedIncrement(&g_syncDiagN);
    if (n <= 8 && outer)
    {
        __try
        {
            unsigned char* inner = (unsigned char*)outer + 0x1C;
            DWORD begin = *(DWORD*)(inner + 0x50);
            DWORD end = *(DWORD*)(inner + 0x54);
            DWORD parent = *(DWORD*)(inner + 0x0C);
            DWORD cached = parent ? *(DWORD*)(parent + 0x40) : 0;
            DWORD count = (end >= begin) ? ((end - begin) / 40u) : 0;
            LogDbg("ArmySelect: sync-miss #%d vec=%u cached=%u delta=%d outer=%p parent=%p",
                (int)n, count, cached, (int)count - (int)cached, outer, (void*)parent);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            LogDbg("ArmySelect: sync-miss #%d (read AV)", (int)n);
        }
    }
    g_bb0rbT0 = QpcNow();
}

static void __stdcall UvTimeSyncMissLeave()
{
    AccUs(&g_bb0rbN, &g_bb0rbUs, &g_bb0rbMax, g_bb0rbT0);
}

// 38AF41 equal-path: call 38B2E0 (scrollbar) затем 38B140 (per-row refresh).
static void __stdcall UvBb0eqAEnter()
{
    g_bb0eqAT0 = QpcNow();
}

static void __stdcall UvBb0eqALeave()
{
    AccUs(&g_bb0eqAN, &g_bb0eqAUs, &g_bb0eqAMax, g_bb0eqAT0);
}

static void __stdcall UvBb0eqBEnter(void* list)
{
    g_bb0eqBT0 = QpcNow();
    g_eqVSkipShow = 0;
    DWORD count = 0, hash = 0;
    if (list && UvEqVHashList(list, &count, &hash)
        && g_eqVArmed
        && list == g_eqVFpList
        && count == g_eqVFpCount
        && hash == g_eqVFpHash
        && count > 0)
        g_eqVSkipShow = 1;
    g_eqVFpList = list;
}

static void __stdcall UvBb0eqBLeave()
{
    AccUs(&g_bb0eqBN, &g_bb0eqBUs, &g_bb0eqBMax, g_bb0eqBT0);
    if (!g_eqVSkipShow && g_eqVFpList)
    {
        DWORD count = 0, hash = 0;
        if (UvEqVHashList(g_eqVFpList, &count, &hash) && count > 0)
        {
            g_eqVFpCount = count;
            g_eqVFpHash = hash;
            g_eqVArmed = 1;
        }
    }
    g_eqVSkipShow = 0;
}

static void __stdcall UvBb0eqHEnter()
{
    g_bb0eqHT0 = QpcNow();
}

static void __stdcall UvBb0eqHLeave()
{
    AccUs(&g_bb0eqHN, &g_bb0eqHUs, &g_bb0eqHMax, g_bb0eqHT0);
}

static void __stdcall UvBb0eqVEnter()
{
    g_bb0eqVT0 = QpcNow();
}

static void __stdcall UvBb0eqVLeave()
{
    AccUs(&g_bb0eqVN, &g_bb0eqVUs, &g_bb0eqVMax, g_bb0eqVT0);
}

// Срезы 5E4490 только пока g_eqVActive (army list path). Иначе 5E4490 — общий Show.
static void __stdcall UvEqVSliceTo(int next)
{
    if (!g_eqVActive)
    {
        g_eqVSlice = -1;
        return;
    }
    if (g_eqVSlice >= 0)
    {
        LONG dt = (LONG)QpcUs(g_eqVSliceT0);
        if (dt < 0)
            dt = 0;
        switch (g_eqVSlice)
        {
        case 0:
            AccUsVal(&g_bb0eqVpN, &g_bb0eqVpUs, &g_bb0eqVpMax, dt);
            break;
        case 1:
            AccUsVal(&g_bb0eqVvN, &g_bb0eqVvUs, &g_bb0eqVvMax, dt);
            break;
        case 2:
            AccUsVal(&g_bb0eqVlN, &g_bb0eqVlUs, &g_bb0eqVlMax, dt);
            break;
        case 3:
            AccUsVal(&g_bb0eqTaN, &g_bb0eqTaUs, &g_bb0eqTaMax, dt);
            break;
        case 4:
            AccUsVal(&g_bb0eqTbN, &g_bb0eqTbUs, &g_bb0eqTbMax, dt);
            break;
        case 5:
            AccUsVal(&g_bb0eqTcN, &g_bb0eqTcUs, &g_bb0eqTcMax, dt);
            break;
        case 6:
            AccUsVal(&g_bb0eqTdN, &g_bb0eqTdUs, &g_bb0eqTdMax, dt);
            break;
        case 7:
            AccUsVal(&g_bb0eqVwN, &g_bb0eqVwUs, &g_bb0eqVwMax, dt);
            break;
        case 8:
            AccUsVal(&g_bb0eqVxN, &g_bb0eqVxUs, &g_bb0eqVxMax, dt);
            break;
        }
    }
    g_eqVSlice = next;
    g_eqVSliceT0 = QpcNow();
}

// 3.92 эмулировал Show через vt+0x34 — на rebuild 38B4C0 это AV в кучу.
// 3.93: skip только equal-path (флаг [self+8]=1, без Show). Иначе ванильный
// 5B1FA0 в EAX. Срезы 5E4490 по-прежнему вокруг этого вызова.
static void __stdcall UvTimeEqVInner(void* self, void* thunk)
{
    __try
    {
        if (g_eqVSkipShow)
        {
            *((BYTE*)self + 8) = 1;
            InterlockedIncrement(&g_eqVSkipN);
            return;
        }
        if (!self || !thunk)
            return;
        DWORD rva = ExeRvaOf((DWORD)(DWORD_PTR)thunk);
        for (int i = 0; i < 8; i++)
        {
            if (g_eqVSeen[i] == rva)
                break;
            if (g_eqVSeen[i] == 0)
            {
                g_eqVSeen[i] = rva;
                LogDbg("ArmySelect: eqV thunk rva %06X (ванильный 5B1FA0)", rva);
                break;
            }
        }
        g_eqVActive = 1;
        g_eqVSlice = 0;
        g_eqVSliceT0 = QpcNow();
        LONGLONG t0 = QpcNow();
        void* s = self;
        void* fn = thunk;
        __asm {
            mov ecx, s
            mov eax, fn
            call eax
        }
        UvEqVSliceTo(-1);
        g_eqVActive = 0;
        AccUs(&g_bb0eqVN, &g_bb0eqVUs, &g_bb0eqVMax, t0);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_eqVActive = 0;
        g_eqVSlice = -1;
        LogDbg("ArmySelect: eqV inner AV");
    }
}

static void __stdcall UvNoteEqVxHit()
{
    if (g_eqVActive)
        InterlockedIncrement(&g_bb0eqVxHit);
}

static void __stdcall UvNoteTbCount(int n)
{
    if (!g_eqVActive || n < 0)
        return;
    InterlockedIncrement(&g_tbCntN);
    InterlockedExchangeAdd(&g_tbCntSum, n);
    for (;;)
    {
        LONG cur = g_tbCntMax;
        if (n <= cur)
            break;
        if (InterlockedCompareExchange(&g_tbCntMax, n, cur) == cur)
            break;
    }
}

// Tb loop: call child vt[+0x34]. 5C43C0 — тонкий Show: early [+0xF6] иначе
// [self+0x94].vt[+0x34] (nested).
static void __stdcall UvTimeTbChild(void* self, void* fn)
{
    if (!self || !fn)
        return;

    if (!g_eqVActive)
    {
        __asm {
            mov ecx, self
            call fn
        }
        return;
    }

    DWORD frva = ExeRvaOf((DWORD)(DWORD_PTR)fn);
    DWORD vrva = 0;
    __try
    {
        vrva = ExeRvaOf(*(DWORD*)self);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        vrva = 0;
    }
    for (int i = 0; i < 8; i++)
    {
        if (g_tbFnSeen[i] == frva)
            break;
        if (g_tbFnSeen[i] == 0)
        {
            g_tbFnSeen[i] = frva;
            LogDbg("ArmySelect: Tb child +0x34 rva %06X%s", frva,
                frva == 0x5E4490 ? " (Show 5E4490 recurse!)" : "");
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (g_tbVtSeen[i] == vrva)
            break;
        if (g_tbVtSeen[i] == 0)
        {
            g_tbVtSeen[i] = vrva;
            LogDbg("ArmySelect: Tb child vt rva %06X", vrva);
            break;
        }
    }

    LONGLONG t0 = QpcNow();
    if (frva == 0x5C43C0)
    {
        __try
        {
            if (*((BYTE*)self + 0xF6) != 0)
            {
                InterlockedIncrement(&g_tbEarlyN);
                AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
                return;
            }
            InterlockedIncrement(&g_tbFullN);
            *((BYTE*)self + 0x4F) = 1;
            *(float*)((char*)self + 0xB8) = 0.0f;
            void* nest = *(void**)((char*)self + 0x94);
            if (!nest)
            {
                AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
                return;
            }
            void** nvt = *(void***)nest;
            void* nfn = nvt[0x34 / 4];
            DWORD nfrva = ExeRvaOf((DWORD)(DWORD_PTR)nfn);
            DWORD nvrva = ExeRvaOf(*(DWORD*)nest);
            for (int i = 0; i < 8; i++)
            {
                if (g_tbNstFnSeen[i] == nfrva)
                    break;
                if (g_tbNstFnSeen[i] == 0)
                {
                    g_tbNstFnSeen[i] = nfrva;
                    LogDbg("ArmySelect: Tb nested +0x34 rva %06X (via [child+0x94])", nfrva);
                    break;
                }
            }
            for (int i = 0; i < 8; i++)
            {
                if (g_tbNstVtSeen[i] == nvrva)
                    break;
                if (g_tbNstVtSeen[i] == 0)
                {
                    g_tbNstVtSeen[i] = nvrva;
                    LogDbg("ArmySelect: Tb nested vt rva %06X", nvrva);
                    break;
                }
            }
            LONGLONG t1 = QpcNow();
            if (nfrva == 0x5F9200)
            {
                // cheap: mov [ecx+0x29], 1; ret
                InterlockedIncrement(&g_nstCheapN);
                *((BYTE*)nest + 0x29) = 1;
            }
            else if (nfrva == 0x62F020)
            {
                // Show: if [+0x29] already set — skip body (vt+0x3C == 3D9710).
                if (*((BYTE*)nest + 0x29) != 0)
                {
                    InterlockedIncrement(&g_nstSkipN);
                    *((BYTE*)nest + 0x29) = 1;
                }
                else
                {
                    InterlockedIncrement(&g_nstWorkN);
                    void* obj150 = *(void**)((char*)nest + 0x150);
                    if (obj150)
                    {
                        void** vt150 = *(void***)obj150;
                        void* fnA = vt150[0x2C / 4];
                        DWORD arva = ExeRvaOf((DWORD)(DWORD_PTR)fnA);
                        for (int i = 0; i < 4; i++)
                        {
                            if (g_nstASeen[i] == arva)
                                break;
                            if (g_nstASeen[i] == 0)
                            {
                                g_nstASeen[i] = arva;
                                LogDbg("ArmySelect: nstA [+0x150]+0x2C rva %06X", arva);
                                break;
                            }
                        }
                        LONGLONG ta = QpcNow();
                        __asm {
                            mov ecx, obj150
                            call fnA
                        }
                        AccUs(&g_bb0eqNstAN, &g_bb0eqNstAUs, &g_bb0eqNstAMax, ta);
                    }
                    void** nestVt = *(void***)nest;
                    void* fnB = nestVt[0xCC / 4];
                    DWORD brva = ExeRvaOf((DWORD)(DWORD_PTR)fnB);
                    for (int i = 0; i < 4; i++)
                    {
                        if (g_nstBSeen[i] == brva)
                            break;
                        if (g_nstBSeen[i] == 0)
                        {
                            g_nstBSeen[i] = brva;
                            LogDbg("ArmySelect: nstB self vt+0xCC rva %06X", brva);
                            break;
                        }
                    }
                    int pt[2];
                    pt[0] = 0;
                    pt[1] = 0;
                    __try
                    {
                        pt[0] = (int)*(float*)((char*)nest + 0xFC);
                        pt[1] = (int)*(float*)((char*)nest + 0x100);
                    }
                    __except (EXCEPTION_EXECUTE_HANDLER)
                    {
                    }
                    LONGLONG tb = QpcNow();
                    void* pPt = pt;
                    __asm {
                        push pPt
                        mov ecx, nest
                        call fnB
                    }
                    AccUs(&g_bb0eqNstBN, &g_bb0eqNstBUs, &g_bb0eqNstBMax, tb);
                    *((BYTE*)nest + 0x29) = 1;
                }
            }
            else
            {
                __asm {
                    mov ecx, nest
                    call nfn
                }
            }
            AccUs(&g_bb0eqTbNstN, &g_bb0eqTbNstUs, &g_bb0eqTbNstMax, t1);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            LogDbg("ArmySelect: Tb 5C43C0 expand AV");
        }
        AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
        return;
    }

    __asm {
        mov ecx, self
        call fn
    }
    AccUs(&g_bb0eqTbCN, &g_bb0eqTbCUs, &g_bb0eqTbCMax, t0);
}

static void __stdcall UvBb0eqSEnter()
{
    g_bb0eqST0 = QpcNow();
}

static void __stdcall UvBb0eqSLeave()
{
    AccUs(&g_bb0eqSN, &g_bb0eqSUs, &g_bb0eqSMax, g_bb0eqST0);
}

static void __stdcall UvBb0eqREnter()
{
    g_bb0eqRT0 = QpcNow();
}

static void __stdcall UvBb0eqRLeave()
{
    AccUs(&g_bb0eqRN, &g_bb0eqRUs, &g_bb0eqRMax, g_bb0eqRT0);
}

static void __stdcall UvRun391BB0(void* panel)
{
    g_bb0TailMark = 0;
    g_bb0sThis = 0;
    g_bb0fThis = 0;
    g_bb0lThis = 0;
    g_bb0gThis = 0;
    LONGLONG t0 = QpcNow();
    void* fn = g_real391BB0;
    __asm {
        push panel
        call fn
    }
    LONG total = (LONG)QpcUs(t0);
    AccUsVal(&g_bb0N, &g_bb0Us, &g_bb0Max, total);
    LONG tail = 0;
    if (g_bb0TailMark)
    {
        tail = (LONG)QpcUs(g_bb0TailMark);
        if (tail < 0)
            tail = 0;
        if (tail > total)
            tail = total;
        AccUsVal(&g_bb0tN, &g_bb0tUs, &g_bb0tMax, tail);
        AccUsVal(&g_bb0hN, &g_bb0hUs, &g_bb0hMax, total - tail);
    }
    LONG other = total - g_bb0sThis - g_bb0fThis - g_bb0lThis - g_bb0gThis - tail;
    if (other < 0)
        other = 0;
    AccUsVal(&g_bb0oN, &g_bb0oUs, &g_bb0oMax, other);
    g_uvSkipListTail = 0;
}

static void __stdcall UvStampBb0Tail()
{
    g_bb0TailMark = QpcNow();
}

static void __stdcall UvRun3810A0(void* panel)
{
    LONGLONG t0 = QpcNow();
    void* fn = g_real3810A0;
    if (!fn)
        return;
    __asm {
        push panel
        call fn
    }
    AccUs(&g_rorgN, &g_rorgUs, &g_rorgMax, t0);
}

__declspec(naked) static void Hook393510()
{
    __asm {
        push eax
        call UvOn393510
        ret
    }
}

__declspec(naked) static void Hook393290()
{
    __asm {
        push dword ptr [esp]
        push esi
        call UvOnPanelRebuild
        test eax, eax
        jnz skip_rebuild
        push dword ptr [esp]
        push esi
        call UvTimeCall393290
        push esi
        call UvNoteRebuildArmy
        ret
    skip_rebuild:
        ret
    }
}

static int __stdcall UvOnIdleBrigadeRefresh(void* panel, DWORD retaddr)
{
    g_uvSkipListTail = 0;
    if (!g_settings.patchReuseUnitView || !panel)
        return 0;
    if (ExeRvaOf(retaddr) != 0x25418C)
        return 0;
    __try
    {
        // Пока 393290 после роспуска/смены армии не отработал — не ходить
        // по старым CUnitStatusEntry. Сам idle 391BB0 иначе нужен иконкам.
        if (g_uvNeedRebuild)
        {
            InterlockedIncrement(&g_uvSkipRebuildN);
            return 1;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_uvSkipListTail = 0;
    }
    return 0;
}

__declspec(naked) static void Hook391BB0()
{
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 4]
        push dword ptr [ebp + 8]
        call UvOnIdleBrigadeRefresh
        test eax, eax
        jnz bb0_skip
        push dword ptr [ebp + 8]
        call UvRun391BB0
        mov esp, ebp
        pop ebp
        ret 4
    bb0_skip:
        mov dword ptr [g_uvSkipListTail], 0
        mov esp, ebp
        pop ebp
        ret 4
    }
}

__declspec(naked) static void Hook3810A0()
{
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        call UvRun3810A0
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// После 393290 (391C6E): цикл CUnitStatusEntry / unit_icon. Реорг это не делает.
// Кнопки split/reorg в голове 391BB0 (FindChild list + hash + 393290).
__declspec(naked) static void Hook391C6E()
{
    __asm {
        cmp dword ptr [g_uvSkipListTail], 0
        je bb0_tail_real
        mov dword ptr [g_uvSkipListTail], 0
        mov byte ptr [ebx], 0
        jmp dword ptr [g_bb0Epilogue]
    bb0_tail_real:
        pushad
        pushfd
        call UvStampBb0Tail
        popfd
        popad
        jmp dword ptr [g_real391C6E]
    }
}

// 3.77: wrap CALL внутри головы 391BB0. pushad сохраняет ecx/eax/esi.
__declspec(naked) static void Hook391BEE_Str()
{
    __asm {
        pushad
        pushfd
        call UvBb0sEnter
        popfd
        popad
        call dword ptr [g_fn009350]
        pushad
        pushfd
        call UvBb0sLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContStr]
    }
}

__declspec(naked) static void Hook391BFE_Find()
{
    __asm {
        lea edx, [ebp - 0x30]
        push edx
        pushad
        pushfd
        call UvBb0fEnter
        popfd
        popad
        call eax
        pushad
        pushfd
        call UvBb0fLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContFind]
    }
}

__declspec(naked) static void Hook391C2D_List()
{
    __asm {
        mov edx, [esi]
        mov eax, [edx + 0x7C]
        mov ecx, esi
        pushad
        pushfd
        push eax
        call UvNoteList7c
        call UvBb0lEnter
        popfd
        popad
        call eax
        pushad
        pushfd
        call UvBb0lLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContList]
    }
}

__declspec(naked) static void Hook391C44_Hash()
{
    __asm {
        pushad
        pushfd
        call UvBb0gEnter
        popfd
        popad
        call dword ptr [g_fn19C160]
        pushad
        pushfd
        call UvBb0gLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContHash]
    }
}

__declspec(naked) static void Hook5B2750()
{
    __asm {
        push ecx
        call UvTime5B2750
        ret
    }
}

// 38AF39 уже сделал push esi (outer). 38B4C0 живёт в ESI — не звать из C++
// (3.80 steal / 3.92–3.93 C++ call: AV в кучу на первом sync-miss).
__declspec(naked) static void Hook38AF3A_Sync()
{
    __asm {
        pushad
        pushfd
        push dword ptr [esp + 36]
        call UvTimeSyncMissEnter
        popfd
        popad
        call dword ptr [g_fn38B4C0]
        pushad
        pushfd
        call UvTimeSyncMissLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContSync]
    }
}

// 38AF44: call 38B2E0 (EDI=list). Регистры this — через pushad вокруг call.
__declspec(naked) static void Hook38AF44_EqA()
{
    __asm {
        pushad
        pushfd
        call UvBb0eqAEnter
        popfd
        popad
        call dword ptr [g_fn38B2E0]
        pushad
        pushfd
        call UvBb0eqALeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqA]
    }
}

// 38AF49: call 38B140 (ESI=list).
__declspec(naked) static void Hook38AF49_EqB()
{
    __asm {
        pushad
        pushfd
        push dword ptr [esp + 8]
        call UvBb0eqBEnter
        popfd
        popad
        call dword ptr [g_fn38B140]
        pushad
        pushfd
        call UvBb0eqBLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqB]
    }
}

// 38B152: push ebx; push edi; call edx; call 731C00 — шапка 38B140.
__declspec(naked) static void Hook38B152_EqH()
{
    __asm {
        push ebx
        push edi
        pushad
        pushfd
        call UvBb0eqHEnter
        popfd
        popad
        call edx
        call dword ptr [g_fn731C00]
        pushad
        pushfd
        call UvBb0eqHLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqH]
    }
}

// 38B183: add ecx,0x1C; call eax(=5B1FA0). Skip Show только equal-path;
// иначе EAX как в ванили (rebuild 38B4C0 не эмулировать).
__declspec(naked) static void Hook38B183_EqV()
{
    __asm {
        add ecx, 0x1C
        pushad
        pushfd
        push eax
        push ecx
        call UvTimeEqVInner
        popfd
        popad
        jmp dword ptr [g_bb0ContEqV]
    }
}

// Срезы 5E4490: p→v @4507, v→l @4595, l→t @4672.
__declspec(naked) static void Hook5E4507_EqVp()
{
    __asm {
        pushad
        pushfd
        push 1
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x258]
        jmp dword ptr [g_bb0ContEqVp]
    }
}

__declspec(naked) static void Hook5E4595_EqVv()
{
    __asm {
        pushad
        pushfd
        push 2
        call UvEqVSliceTo
        popfd
        popad
        mov edi, dword ptr [esi + 0x41c]
        jmp dword ptr [g_bb0ContEqVv]
    }
}

__declspec(naked) static void Hook5E4672_EqTa()
{
    __asm {
        pushad
        pushfd
        push 3
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x2d8]
        jmp dword ptr [g_bb0ContEqVl]
    }
}

__declspec(naked) static void Hook5E46A5_EqTb()
{
    __asm {
        pushad
        pushfd
        push 4
        call UvEqVSliceTo
        mov eax, dword ptr [esi + 0x298]
        sub eax, dword ptr [esi + 0x294]
        sar eax, 2
        push eax
        call UvNoteTbCount
        popfd
        popad
        mov ebx, dword ptr [esi + 0x298]
        jmp dword ptr [g_bb0ContEqTb]
    }
}

// 5E46C9: mov edx,[ecx]; mov eax,[edx+0x34]; call eax — Tb child Show.
__declspec(naked) static void Hook5E46C9_TbC()
{
    __asm {
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x34]
        pushad
        pushfd
        push eax
        push ecx
        call UvTimeTbChild
        popfd
        popad
        jmp dword ptr [g_bb0ContEqTbC]
    }
}

__declspec(naked) static void Hook5E46D5_EqTc()
{
    __asm {
        pushad
        pushfd
        push 5
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x2f8]
        jmp dword ptr [g_bb0ContEqTc]
    }
}

__declspec(naked) static void Hook5E4705_EqTd()
{
    __asm {
        pushad
        pushfd
        push 6
        call UvEqVSliceTo
        popfd
        popad
        mov ebx, dword ptr [esi + 0x318]
        jmp dword ptr [g_bb0ContEqTd]
    }
}

// 5E4735: linked list перед спецблоком — bb0eqVw.
__declspec(naked) static void Hook5E4735_EqVw()
{
    __asm {
        pushad
        pushfd
        push 7
        call UvEqVSliceTo
        popfd
        popad
        mov edi, dword ptr [esi + 0x46c]
        jmp dword ptr [g_bb0ContEqVw]
    }
}

// 5E4762: спецблок (possible alloc) — bb0eqVx.
__declspec(naked) static void Hook5E4762_EqVx()
{
    __asm {
        pushad
        pushfd
        push 8
        call UvEqVSliceTo
        call UvNoteEqVxHit
        popfd
        popad
        or ebx, 0xffffffff
        cmp dword ptr [esi + 0x490], ebx
        jmp dword ptr [g_bb0ContEqVx]
    }
}

// 38B1C2: call 008ED0 — copy string на стек.
__declspec(naked) static void Hook38B1C2_EqS()
{
    __asm {
        pushad
        pushfd
        call UvBb0eqSEnter
        popfd
        popad
        call dword ptr [g_fn008ED0]
        pushad
        pushfd
        call UvBb0eqSLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqS]
    }
}

// 38B1CD: call 38A4D0 — применить строку к child.
__declspec(naked) static void Hook38B1CD_EqR()
{
    __asm {
        pushad
        pushfd
        call UvBb0eqREnter
        popfd
        popad
        call dword ptr [g_fn38A4D0]
        pushad
        pushfd
        call UvBb0eqRLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContEqR]
    }
}

// 5B275C: mov edx,[eax+0x24]; call edx — Update одной строки listbox.
__declspec(naked) static void Hook5B275C_Child()
{
    __asm {
        mov edx, [eax + 0x24]
        pushad
        pushfd
        push edx
        call UvBb0chEnter
        popfd
        popad
        call edx
        pushad
        pushfd
        call UvBb0chLeave
        popfd
        popad
        jmp dword ptr [g_bb0ContChild]
    }
}

static void __stdcall UvOn393570(void* panel, DWORD retaddr)
{
    UvHideDetailKeep(panel);
    // 2557E1 каждый idle при da8!=1. Invalidate оттуда → NeedRebuild
    // ещё до первого клика; 3.73 ещё и skip 391BB0 — реорг/роспуск мертвы.
    if (ExeRvaOf(retaddr) != 0x2557E6)
        UvInvalidateBrigadePanel();
}

__declspec(naked) static void Hook393570()
{
    __asm {
        push dword ptr [esp]
        push esi
        call UvOn393570
        ret
    }
}

// 39332D: list +0x5C. После роспуска дети UAF — пропускаем зачистку,
// 393290 навешивает новые виджеты.
__declspec(naked) static void Hook393ListClear()
{
    __asm {
        mov dword ptr [g_uvLastList], edi
        cmp byte ptr [g_uvNeedRebuild], 0
        je vanilla_clear
        pushad
        push edi
        call UvUnlinkListHead
        popad
        jmp dword ptr [g_afterListClear]
    vanilla_clear:
        jmp dword ptr [g_realListClear]
    }
}

__declspec(align(16)) static unsigned char g_trampProvDirty[32];
__declspec(align(16)) static unsigned char g_trampArmyPick[32];
__declspec(align(16)) static unsigned char g_trampArmyMove[32];
__declspec(align(16)) static unsigned char g_trampSelProj[32];
__declspec(align(16)) static unsigned char g_trampUnitViewCtor[32];
__declspec(align(16)) static unsigned char g_trampIdlerNotify[32];
__declspec(align(16)) static unsigned char g_trampPanelRefresh[32];
__declspec(align(16)) static unsigned char g_trampPanelRebuild[32];
__declspec(align(16)) static unsigned char g_trampBb0[32];
__declspec(align(16)) static unsigned char g_trampBb0Tail[32];
__declspec(align(16)) static unsigned char g_trampListUpd[32];
__declspec(align(16)) static unsigned char g_trampRorg[32];
__declspec(align(16)) static unsigned char g_trampListClear[32];
__declspec(align(16)) static unsigned char g_trampPanelHide[32];
__declspec(align(16)) static unsigned char g_trampDlgCtor[32];
__declspec(align(16)) static unsigned char g_trampInflate[32];
__declspec(align(16)) static unsigned char g_trampMapFn[32];
__declspec(align(16)) static unsigned char g_trampEvtCreate4[32];
__declspec(align(16)) static unsigned char g_trampOverlay[32];
__declspec(align(16)) static unsigned char g_trampCam[32];
__declspec(align(16)) static unsigned char g_trampMtx[32];
__declspec(align(16)) static unsigned char g_trampVw[32];
__declspec(align(16)) static unsigned char g_trampIco[32];
__declspec(align(16)) static unsigned char g_trampGfx[32];
__declspec(align(16)) static unsigned char g_trampPre[32];
__declspec(align(16)) static unsigned char g_trampGui2[32];
__declspec(align(16)) static unsigned char g_trampCln[32];
__declspec(align(16)) static unsigned char g_trampTail[32];
__declspec(align(16)) static unsigned char g_trampLkp[32];
__declspec(align(16)) static unsigned char g_trampStr[32];
__declspec(align(16)) static unsigned char g_trampClu[32];
__declspec(align(16)) static unsigned char g_trampPump[32];
__declspec(align(16)) static unsigned char g_trampWck[32];

static void __fastcall MaybeDeleteUnitView(void* view)
{
    int slot = UvFind(view);
    if (slot >= 0)
    {
        UvHide(view);
        g_uvPool[slot].inUse = false;
        UvRecount();
        return;
    }
    if (!view)
        return;
    void** vt = *(void***)view;
    if (!vt || !vt[0])
        return;
    typedef void (__thiscall* tDtor)(void*, int);
    ((tDtor)vt[0])(view, 1);
}

static void* __fastcall HookUnitViewCtor(void* idler, void* edx, void* buf, void* army, int z, void* extra)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    void* result = 0;

    if (idler != g_uvOwner)
        UvPoolReset();
    g_uvOwner = idler;
    UvDropDead();

    if (g_settings.patchReuseUnitView && buf && army && z == 0)
    {
        for (int i = 0; i < UV_POOL_MAX; i++)
        {
            void* view = g_uvPool[i].view;
            if (!view || g_uvPool[i].inUse || !UvViewAlive(view))
                continue;
            bool rebound = false;
            __try
            {
                *(void**)((char*)view + 0x28) = army;
                *(void**)((char*)view + 0x2C) = idler;
                rebound = true;
            }
            __except (EXCEPTION_EXECUTE_HANDLER)
            {
                memset(&g_uvPool[i], 0, sizeof(g_uvPool[i]));
            }
            if (!rebound)
                continue;
            UvShow(view);
            if (buf != view && g_gameDelete)
                g_gameDelete(buf);
            g_uvPool[i].inUse = true;
            UvRecount();
            InterlockedIncrement(&g_uvReuseN);
            InterlockedIncrement(&g_uvN);
            InterlockedExchangeAdd(&g_uvUs, (LONG)QpcUs(t0));
            return view;
        }
    }

    if (g_realUnitViewCtor)
        result = g_realUnitViewCtor(idler, buf, army, z, extra);

    if (z == 0 && result && UvViewAlive(result))
    {
        int freeSlot = -1;
        if (UvFind(result) < 0)
        {
            for (int i = 0; i < UV_POOL_MAX; i++)
            {
                if (!g_uvPool[i].view)
                {
                    freeSlot = i;
                    break;
                }
            }
            if (freeSlot >= 0)
            {
                g_uvPool[freeSlot].view = result;
                g_uvPool[freeSlot].inUse = true;
                UvRecount();
            }
        }
        else
        {
            int i = UvFind(result);
            if (i >= 0)
                g_uvPool[i].inUse = true;
            UvRecount();
        }
    }

    InterlockedIncrement(&g_uvN);
    InterlockedExchangeAdd(&g_uvUs, (LONG)QpcUs(t0));
    return result;
}

static void __stdcall HookProvDirty(void* a, int b, void* c)
{
    LONGLONG t0 = QpcNow();
    if (g_realProvDirty)
        g_realProvDirty(a, b, c);
    AccUs(&g_dirtyN, &g_dirtyUs, &g_dirtyMax, t0);
}

static void __stdcall HookSelProj(void* mgr, void* obj130)
{
    LONGLONG t0 = QpcNow();
    if (!g_settings.patchSkipSelProj && g_realSelProj)
        g_realSelProj(mgr, obj130);
    else
        InterlockedIncrement(&g_projSkipN);
    InterlockedIncrement(&g_projN);
    InterlockedExchangeAdd(&g_projUs, (LONG)QpcUs(t0));
}

static void __fastcall HookArmyPick(void* self, void* edx, DWORD a)
{
    (void)edx;
    UvEqVInvalidateShow();
    LONGLONG t0 = QpcNow();
    if (g_realArmyPick)
        g_realArmyPick(self, a);
    InterlockedIncrement(&g_pickN);
    InterlockedExchangeAdd(&g_pickUs, (LONG)QpcUs(t0));
}

static void __fastcall HookArmyMove(void* self, void* edx, DWORD a, DWORD b)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realArmyMove)
        g_realArmyMove(self, a, b);
    InterlockedIncrement(&g_moveN);
    InterlockedExchangeAdd(&g_moveUs, (LONG)QpcUs(t0));
}

static void __fastcall HookIdlerNotify(void* idler, void* edx, void* army)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realIdlerNotify)
        g_realIdlerNotify(idler, army);
    g_uvLastIdler = idler;
    if (g_settings.patchReuseUnitView)
    {
        UvHideDetailIfMulti(idler);
        __try
        {
            if (g_uvNeedRebuild && *(DWORD*)((char*)idler + 0xDA8) == 1)
            {
                void* panel = *(void**)((char*)idler + 0x1640);
                if (panel)
                    UvDeferPanelRefresh(panel);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }
    InterlockedIncrement(&g_ntfN);
    InterlockedExchangeAdd(&g_ntfUs, (LONG)QpcUs(t0));
}

static void __stdcall UvNoteLocSkip()
{
    InterlockedIncrement(&g_uvSkipLocN);
}

// 26A958: GetLoc ARMIES/NAVIES + sprintf на каждый add. При рамке из N
// армий это N раз за один клик. После da8==2 заголовок уже показан.
__declspec(naked) static void HookLocGate()
{
    __asm {
        mov eax, dword ptr [edi + 0x0DA8]
        cmp eax, 2
        jg skip_loc
        jmp dword ptr [g_uvLocContinue]
    skip_loc:
        call UvNoteLocSkip
        jmp dword ptr [g_uvLocEpilogue]
    }
}

// 3.44: ивенты / DefaultDialog (инфо, мобилизация) / карта.
// UI only: checksum и симуляцию не трогаем. Как unitpanel — Hide
// вместо Destroy, повторно отдаём уже собранное GUI.
// CEventWindow 4A8F30 грузит Event_*_Window через vfunc +0x2C.
// CEU3Dialog 240680 → inflate 240B90 (new 0x568 + разбор .gui).
// Оба dtor зовут vfunc +0x50 Destroy у GUI; подменяем на Hide,
// только если указатель лежит в нашем пуле.
static const int WIN_POOL = 8;
struct WinSlot
{
    void* gui;
    char  name[48];
    bool  busy;
};
static WinSlot g_evtGui[WIN_POOL];
static WinSlot g_dlgGui[WIN_POOL];
static char    g_pendingDlgName[48];

typedef void* (__thiscall* tDlgCtor)(void* factory, void* self, void* name);
typedef void* (__stdcall* tInflate)(void* a, void* b, void* c);
typedef void (__stdcall* tMapFn)(void* a);
typedef void (__stdcall* tMapIdle1)(void* a);
typedef void (__stdcall* tMapIco4)(void* a, void* b, void* c, void* d);
typedef unsigned char (__stdcall* tMapGfx1)(void* a);
typedef void (__thiscall* tPreCam)(void* self);
typedef void (__stdcall* tGui2)(void* a, unsigned b);
typedef void (__thiscall* tIdleTail)(void* self, void* a);
typedef void* (__stdcall* tLkp3)(void* a, void* b, void* c);
static tDlgCtor g_realDlgCtor = 0;
static tInflate g_realInflate = 0;
static tMapFn   g_realMapFn = 0;
static tMapIdle1 g_realOverlay = 0;
static tMapIdle1 g_realCam = 0;
static tMapIdle1 g_realMtx = 0;
static tMapIdle1 g_realVw = 0;
static tMapIco4  g_realIco = 0;
static tMapGfx1  g_realGfx = 0;
static tPreCam   g_realPre = 0;
static tGui2     g_realGui2 = 0;
static tMapIdle1 g_realCln = 0;
static tIdleTail g_realTail = 0;
static tLkp3     g_realLkp = 0;
static void*     g_realStr = 0;
static void*     g_realClu = 0;
static void*     g_realPump = 0;
static void*     g_realWck = 0;

static bool GuiPtrAlive(void* p)
{
    if (!p || !g_base)
        return false;
    __try
    {
        DWORD vt = *(DWORD*)p;
        if (g_imageSize && vt >= g_base && vt < g_base + g_imageSize)
            return true;
        vt = *(DWORD*)((char*)p + 0x18);
        return g_imageSize && vt >= g_base && vt < g_base + g_imageSize;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void GuiCallVfunc(void* obj, unsigned voff)
{
    if (!obj)
        return;
    __try
    {
        void** vt = *(void***)obj;
        if (!vt)
            return;
        typedef void (__thiscall* tFn)(void*);
        tFn fn = (tFn)vt[voff / 4];
        if (fn)
            fn(obj);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void GuiHideTree(void* gui)
{
    GuiCallVfunc(gui, 0x38);
    GuiCallVfunc((char*)gui + 0x18, 0x38);
}

static void GuiShowTree(void* gui)
{
    GuiCallVfunc(gui, 0x34);
    GuiCallVfunc((char*)gui + 0x18, 0x34);
}

static void ReadStdName(void* s, char* out, int cap)
{
    if (!out || cap < 2)
        return;
    out[0] = 0;
    if (!s)
        return;
    __try
    {
        unsigned size = *(unsigned*)((char*)s + 0x10);
        unsigned capa = *(unsigned*)((char*)s + 0x14);
        const char* p = (capa < 0x10) ? (const char*)s : *(const char**)s;
        if (!p)
            return;
        if (size > 80)
            size = 80;
        if ((int)size >= cap)
            size = (unsigned)(cap - 1);
        memcpy(out, p, size);
        out[size] = 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        out[0] = 0;
    }
}

static void WinPoolReset()
{
    memset(g_evtGui, 0, sizeof(g_evtGui));
    memset(g_dlgGui, 0, sizeof(g_dlgGui));
    g_pendingDlgName[0] = 0;
}

static bool WinMarkFree(WinSlot* pool, void* gui)
{
    if (!gui)
        return false;
    bool hit = false;
    for (int i = 0; i < WIN_POOL; i++)
    {
        if (pool[i].gui == gui)
        {
            pool[i].busy = false;
            hit = true;
        }
    }
    return hit;
}

static void WinStore(WinSlot* pool, const char* name, void* gui)
{
    if (!gui || !name || !name[0])
        return;
    int empty = -1;
    for (int i = 0; i < WIN_POOL; i++)
    {
        if (pool[i].gui == gui)
        {
            strncpy_s(pool[i].name, sizeof(pool[i].name), name, _TRUNCATE);
            pool[i].busy = true;
            return;
        }
        if (pool[i].gui && !GuiPtrAlive(pool[i].gui))
            memset(&pool[i], 0, sizeof(pool[i]));
        if (!pool[i].gui && empty < 0)
            empty = i;
    }
    if (empty < 0)
        return;
    pool[empty].gui = gui;
    strncpy_s(pool[empty].name, sizeof(pool[empty].name), name, _TRUNCATE);
    pool[empty].busy = true;
}

static void* WinTake(WinSlot* pool, const char* name)
{
    if (!name || !name[0])
        return 0;
    for (int i = 0; i < WIN_POOL; i++)
    {
        if (!pool[i].gui || pool[i].busy)
            continue;
        if (_stricmp(pool[i].name, name) != 0)
            continue;
        if (!GuiPtrAlive(pool[i].gui))
        {
            memset(&pool[i], 0, sizeof(pool[i]));
            continue;
        }
        pool[i].busy = true;
        return pool[i].gui;
    }
    return 0;
}

static bool PatchBytes(DWORD rva, const void* expect, const void* neu, unsigned n, const char* tag)
{
    unsigned char* p = (unsigned char*)(g_base + rva);
    if (memcmp(p, expect, n) != 0)
    {
        Log("%s: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            tag, rva, p[0], p[1], p[2], p[3]);
        return false;
    }
    DWORD old = 0;
    if (!VirtualProtect(p, n, PAGE_EXECUTE_READWRITE, &old))
        return false;
    memcpy(p, neu, n);
    VirtualProtect(p, n, old, &old);
    FlushInstructionCache(GetCurrentProcess(), p, n);
    return true;
}

static bool PatchE8(DWORD rva, const unsigned char* expect5, void* dest, const char* tag)
{
    unsigned char neu[5];
    neu[0] = 0xE8;
    *(DWORD*)(neu + 1) = (DWORD)(DWORD_PTR)dest - (g_base + rva + 5);
    return PatchBytes(rva, expect5, neu, 5, tag);
}

static void* __fastcall EvtCreateOrReuse(void* obj, void* edx, void* name, void* extra)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    char key[48];
    ReadStdName(name, key, 48);
    if (g_settings.patchReuseWindows)
    {
        void* cached = WinTake(g_evtGui, key);
        if (cached)
        {
            GuiShowTree(cached);
            InterlockedIncrement(&g_winReuseN);
            InterlockedIncrement(&g_evtN);
            InterlockedExchangeAdd(&g_evtUs, (LONG)QpcUs(t0));
            return cached;
        }
    }

    void* r = 0;
    __try
    {
        void** vt = *(void***)obj;
        typedef void* (__thiscall* tCreate)(void*, void*, void*);
        r = ((tCreate)vt[0x2C / 4])(obj, name, extra);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        r = 0;
    }
    if (r)
        WinStore(g_evtGui, key, r);
    InterlockedIncrement(&g_evtN);
    InterlockedExchangeAdd(&g_evtUs, (LONG)QpcUs(t0));
    return r;
}

__declspec(naked) static void EvtCreateStub_m1c()
{
    __asm {
        mov ecx, dword ptr [ebp - 0x1c]
        jmp EvtCreateOrReuse
    }
}

__declspec(naked) static void EvtCreateStub_m10()
{
    __asm {
        mov ecx, dword ptr [ebp - 0x10]
        jmp EvtCreateOrReuse
    }
}

static void __fastcall HideGuiKeep(void* gui)
{
    if (!gui)
        return;
    bool kept = WinMarkFree(g_evtGui, gui) | WinMarkFree(g_dlgGui, gui);
    if (!kept)
    {
        GuiCallVfunc(gui, 0x50);
        return;
    }
    GuiHideTree(gui);
}

static void* __fastcall HookDlgCtor(void* factory, void* edx, void* self, void* name)
{
    (void)edx;
    ReadStdName(name, g_pendingDlgName, sizeof(g_pendingDlgName));
    LONGLONG t0 = QpcNow();
    void* r = g_realDlgCtor ? g_realDlgCtor(factory, self, name) : 0;
    g_pendingDlgName[0] = 0;
    InterlockedIncrement(&g_dlgN);
    InterlockedExchangeAdd(&g_dlgUs, (LONG)QpcUs(t0));
    return r;
}

// 240B90: stdcall 3 аргумента + живой ESI (шаблон GUI). C++-обёртка
// 3.44 затирала ESI → AV [esi+0xA0] на первом DefaultDialog.
__declspec(naked) static void* __stdcall CallInflateTramp(void* esiObj, void* a, void* b, void* c)
{
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push dword ptr [ebp + 20]
        push dword ptr [ebp + 16]
        push dword ptr [ebp + 12]
        call dword ptr [g_realInflate]
        pop esi
        pop ebp
        ret 16
    }
}

static void* __fastcall HookInflateCore(void* esiObj, void* edx, void* a, void* b, void* c)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    void* r = g_realInflate ? CallInflateTramp(esiObj, a, b, c) : 0;
    InterlockedIncrement(&g_infN);
    InterlockedExchangeAdd(&g_infUs, (LONG)QpcUs(t0));
    return r;
}

__declspec(naked) static void HookInflate()
{
    __asm {
        mov ecx, esi
        jmp HookInflateCore
    }
}

static void __stdcall HookMapFn(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realMapFn)
        g_realMapFn(a);
    InterlockedIncrement(&g_mapN);
    InterlockedExchangeAdd(&g_mapUs, (LONG)QpcUs(t0));
}

// 257B60: stdcall 1 аргумент (push ebx; call), ret 4. Ввод/оверлей
// карты внутри IdleInGame. 3.47 только таймер.
static void __stdcall HookOverlay(void* a)
{
    LONG tMark = IdleMarkNow();
    if (tMark)
    {
        if (g_idleOvlLeave1 > 0)
        {
            LONG gap = tMark - g_idleOvlLeave1;
            if (gap > g_idleOvlGapMax)
                g_idleOvlGapMax = gap;
        }
        if (g_idleOvlEnter0 == 0)
            g_idleOvlEnter0 = tMark;
        g_idleOvlEnter1 = tMark;
        g_idleOvlN++;
    }
    g_idleInOvl++;
    LONGLONG t0 = QpcNow();
    if (g_realOverlay)
        g_realOverlay(a);
    AccUsIdle(&g_ovlN, &g_ovlUs, &g_ovlMax, t0, &g_idleOvlLoc);
    g_idleInOvl--;
    tMark = IdleMarkNow();
    if (tMark)
    {
        if (g_idleOvlLeave0 == 0)
            g_idleOvlLeave0 = tMark;
        g_idleOvlLeave1 = tMark;
        g_idleOvlMark = tMark;
    }
}

// 2592F0: stdcall 1 аргумент, тот же call site. Копия камеры/view
// (alloca 0x4294). 3.47 только таймер. 254530 (ProvDirty-кластер)
// не хукаем: живой ESI.
//
// 3.59: не skip всей 2592F0 (пустая карта). Ваниль уже умеет не
// рисовать 3D: [CInGameIdler+0x1e08] > 0 → после иконок 3F7CE0
// прыжок на 260F0C. Load ставит 3. Мы ставим 1, если поза камеры
// (gfx+0x114, 48 байт) не менялась, нет дня/dirty/pick, и не каждый
// 8-й кадр. Иконки остаются.
static const int CAM_STILL_FULL_EVERY = 8;
static DWORD g_camPose[12];
static int   g_camPoseOk = 0;
static int   g_camStillStreak = 0;
static LONG  g_camLastDirtyN = 0;
static LONG  g_camLastPickN = 0;
static LONG  g_camLastMoveN = 0;

static void CamStillMaybeSkipDraw(void* idler)
{
    if (!g_settings.patchCamStill || !idler)
        return;
    __try
    {
        DWORD gfx = *(DWORD*)((char*)idler + 0x17E0);
        if (!gfx || gfx < 0x10000)
            return;
        DWORD cur[12];
        memcpy(cur, (void*)(gfx + 0x114), sizeof(cur));
        int slot = *(int*)((char*)idler + 0x1E08);
        LONG dirtyN = g_dirtyN;
        LONG pickN = g_pickN;
        LONG moveN = g_moveN;
        bool needFull = false;
        if (!g_camPoseOk)
            needFull = true;
        else if (memcmp(cur, g_camPose, sizeof(cur)) != 0)
            needFull = true;
        else if (g_idleChkN > 0 || g_idleWckN > 0)
            needFull = true;
        else if (dirtyN != g_camLastDirtyN || pickN != g_camLastPickN || moveN != g_camLastMoveN)
            needFull = true;
        memcpy(g_camPose, cur, sizeof(cur));
        g_camPoseOk = 1;
        g_camLastDirtyN = dirtyN;
        g_camLastPickN = pickN;
        g_camLastMoveN = moveN;
        if (slot > 0)
        {
            g_camStillStreak = 0;
            return;
        }
        if (needFull)
        {
            g_camStillStreak = 0;
            return;
        }
        g_camStillStreak++;
        if (g_camStillStreak % CAM_STILL_FULL_EVERY == 0)
            return;
        *(int*)((char*)idler + 0x1E08) = 1;
        InterlockedIncrement(&g_camSkipN);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_camPoseOk = 0;
        g_camStillStreak = 0;
    }
}

static void __stdcall HookCam(void* a)
{
    LONG tMark = IdleMarkNow();
    if (tMark && g_idleHeadMark == 0)
        g_idleHeadMark = tMark;
    if (tMark)
        g_idleCamN++;
    g_idleInCam++;
    CamStillMaybeSkipDraw(a);
    LONGLONG t0 = QpcNow();
    if (g_realCam)
        g_realCam(a);
    AccUsIdle(&g_camN, &g_camUs, &g_camMax, t0, &g_idleCamLoc);
    g_idleInCam--;
    tMark = IdleMarkNow();
    if (tMark)
    {
        if (g_idleCamLeave0 == 0)
            g_idleCamLeave0 = tMark;
        g_idleCamLeave1 = tMark;
    }
}

// 5AE320 / 5EB7C0: stdcall 1, матрицы камеры внутри 2592F0.
static void __stdcall HookMtx(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realMtx)
        g_realMtx(a);
    AccUs(&g_mtxN, &g_mtxUs, &g_mtxMax, t0);
}

static void __stdcall HookVw(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realVw)
        g_realVw(a);
    AccUs(&g_vwN, &g_vwUs, &g_vwMax, t0);
}

// 3F7CE0: stdcall 4 (push×4; call из 259459), карта/иконки при graphics on.
static void __stdcall HookIco(void* a, void* b, void* c, void* d)
{
    LONGLONG t0 = QpcNow();
    if (g_realIco)
        g_realIco(a, b, c, d);
    AccUsIdle(&g_icoN, &g_icoUs, &g_icoMax, t0, &g_idleIcoLoc);
}

// 59C370: stdcall 1, возвращает al. Не void.
static unsigned char __stdcall HookGfx(void* a)
{
    LONGLONG t0 = QpcNow();
    unsigned char r = g_realGfx ? g_realGfx(a) : 0;
    AccUs(&g_gfxN, &g_gfxUs, &g_gfxMax, t0);
    return r;
}

// 254620: thiscall, 0 стековых. До камеры, mov ecx,ebx; call.
static void __fastcall HookPreCam(void* self, void* edx)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realPre)
        g_realPre(self);
    AccUsIdle(&g_preN, &g_preUs, &g_preMax, t0, &g_idlePreLoc);
}

// 248460: stdcall 2 (push al, push ebx), ret 8. После overlay.
static void __stdcall HookGui2(void* a, unsigned b)
{
    LONGLONG t0 = QpcNow();
    if (g_realGui2)
        g_realGui2(a, b);
    AccUsIdle(&g_gui2N, &g_gui2Us, &g_gui2Max, t0, &g_idleGui2Loc);
}

// 1F7A50: stdcall 1, затем operator delete. Хвост idle.
static void __stdcall HookCln(void* a)
{
    LONGLONG t0 = QpcNow();
    if (g_realCln)
        g_realCln(a);
    AccUs(&g_clnN, &g_clnUs, &g_clnMax, t0);
}

// 24F350: thiscall + 1 стековый, ret 4. Конец IdleInGame.
static void __fastcall HookTail(void* self, void* edx, void* a)
{
    (void)edx;
    LONGLONG t0 = QpcNow();
    if (g_realTail)
        g_realTail(self, a);
    AccUs(&g_tailN, &g_tailUs, &g_tailMax, t0);
}

// 055290: единственный call 256455, stdcall 3 (два push + eax из 054EC0
// cdecl getter), ret 0xC. ESI локальный. Обход контейнера, стек 0x9e8.
static void* __stdcall HookLkp(void* a, void* b, void* c)
{
    LONGLONG t0 = QpcNow();
    void* r = g_realLkp ? g_realLkp(a, b, c) : 0;
    AccUs(&g_lkpN, &g_lkpUs, &g_lkpMax, t0);
    return r;
}

// 588F20: stdcall 1 + живые ESI (dest std::string) и ECX. 28 вызовов из 2592F0.
__declspec(naked) static void HookStr()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop esi
        pop ecx
        push dword ptr [ebp + 8]
        call dword ptr [g_realStr]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccStr
        pop eax
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// 254530: call 2555E8 mov esi,ebx; ret. Живой ESI = idler, стека нет.
__declspec(naked) static void HookClu()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop esi
        pop ecx
        call dword ptr [g_realClu]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccClu
        pop eax
        mov esp, ebp
        pop ebp
        ret
    }
}

// 5DF2B0: stdcall 1 + живой ESI (объект насоса). Peek/Dispatch + хвост до 5DF543.
// Единственный E8: 285727 внутри 285620 (EDI+XMM — 285620 не хукаем).
__declspec(naked) static void HookPump()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 4]
        call PumpEnter
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop ebx
        pop edi
        pop esi
        pop ecx
        push dword ptr [ebp + 8]
        call dword ptr [g_realPump]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccPump
        pop eax
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// 2859C0: stdcall 1, ДНЕВНОЙ ТИК СЕССИИ (~7 КБ): 2840F0 команды,
// POP, товары, войны, газеты. 11×285620 внутри — только насос UI.
// Три E8: 283AB1 (каждый день из 282EC0), 263234/26339D (load 262010).
// PATCH_SKIP_CHK_WIN=1 глушит все расчёты после входа на карту.
// Не skip. Карта: Source2/EXE_RVA_MAP.txt §0a.
__declspec(naked) static void HookWck()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ecx
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 4]
        call WckEnter
        test eax, eax
        jnz wck_skip
        call DiagNow
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], edx
        pop ebx
        pop edi
        pop esi
        pop ecx
        push dword ptr [ebp + 8]
        call dword ptr [g_realWck]
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        call AccWck
        pop eax
        mov esp, ebp
        pop ebp
        ret 4
    wck_skip:
        pop ebx
        pop edi
        pop esi
        pop ecx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

static void InstallDestroyHide(DWORD rva, const char* tag)
{
    static const unsigned char expect[10] =
        { 0x8B, 0x4E, 0x04, 0x8B, 0x01, 0x8B, 0x50, 0x50, 0xFF, 0xD2 };
    unsigned char neu[10];
    neu[0] = 0x8B;
    neu[1] = 0x4E;
    neu[2] = 0x04;
    neu[3] = 0xE8;
    *(DWORD*)(neu + 4) = (DWORD)(DWORD_PTR)HideGuiKeep - (g_base + rva + 3 + 5);
    neu[8] = 0x90;
    neu[9] = 0x90;
    if (PatchBytes(rva, expect, neu, 10, tag))
        LogDbg("WinReuse: %s rva %06X Destroy GUI -> Hide", tag, rva);
}

static void InstallWindowFps()
{
    static const unsigned char sigDlg[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    static const unsigned char sigInf[8] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8, 0x6A, 0xFF };
    static const unsigned char sigMap[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };

    if (StealToTrampoline(0x240680, 5, g_trampDlgCtor, sizeof(g_trampDlgCtor),
        sigDlg, (void*)HookDlgCtor, (void**)&g_realDlgCtor, "DlgCtorTime"))
        LogDbg("WinReuse: таймер CEU3Dialog ctor rva 240680");
    if (StealToTrampoline(0x240B90, 8, g_trampInflate, sizeof(g_trampInflate),
        sigInf, (void*)HookInflate, (void**)&g_realInflate, "InflateTime"))
        LogDbg("WinReuse: таймер inflate DefaultDialog rva 240B90");
    if (StealToTrampoline(0x41A450, 6, g_trampMapFn, sizeof(g_trampMapFn),
        sigMap, (void*)HookMapFn, (void**)&g_realMapFn, "MapTime"))
        LogDbg("WinReuse: таймер map follow-up rva 41A450");

    static const unsigned char sigIdle[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    if (StealToTrampoline(0x254D80, 6, g_trampIdleIngame, sizeof(g_trampIdleIngame),
        sigIdle, (void*)HookIdleIngame, (void**)&g_realIdleIngame, "IdleInGame"))
        LogDbg("MapScroll: таймер IdleInGame rva 254D80 (ing= QPC мкс)");

    static const unsigned char sigOvl[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (StealToTrampoline(0x257B60, 5, g_trampOverlay, sizeof(g_trampOverlay),
        sigOvl, (void*)HookOverlay, (void**)&g_realOverlay, "MapOverlay"))
        LogDbg("MapScroll: таймер overlay/input rva 257B60 (ovl=)");
    if (StealToTrampoline(0x2592F0, 5, g_trampCam, sizeof(g_trampCam),
        sigOvl, (void*)HookCam, (void**)&g_realCam, "MapCamera"))
            LogDbg("MapScroll: таймер camera/view rva 2592F0 (cam=) PATCH_CAM_STILL=%d",
                (int)g_settings.patchCamStill);

    static const unsigned char sigMtx[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    if (StealToTrampoline(0x5AE320, 6, g_trampMtx, sizeof(g_trampMtx),
        sigMtx, (void*)HookMtx, (void**)&g_realMtx, "MapMtx"))
        LogDbg("MapScroll: таймер matrix rva 5AE320 (mtx=)");
    static const unsigned char sigVw[9] =
        { 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x08, 0x01, 0x00, 0x00 };
    if (StealToTrampoline(0x5EB7C0, 9, g_trampVw, sizeof(g_trampVw),
        sigVw, (void*)HookVw, (void**)&g_realVw, "MapView"))
        LogDbg("MapScroll: таймер view rva 5EB7C0 (vw=)");
    if (StealToTrampoline(0x3F7CE0, 5, g_trampIco, sizeof(g_trampIco),
        sigOvl, (void*)HookIco, (void**)&g_realIco, "MapIcons"))
        LogDbg("MapScroll: таймер map objects rva 3F7CE0 (ico=)");
    if (StealToTrampoline(0x59C370, 6, g_trampGfx, sizeof(g_trampGfx),
        sigMtx, (void*)HookGfx, (void**)&g_realGfx, "MapGfx"))
        LogDbg("MapScroll: таймер gfx tick rva 59C370 (gfx=)");

    static const unsigned char sigPre[9] =
        { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
    if (StealToTrampoline(0x254620, 9, g_trampPre, sizeof(g_trampPre),
        sigPre, (void*)HookPreCam, (void**)&g_realPre, "IdlePre"))
        LogDbg("MapScroll: таймер pre-cam rva 254620 (pre=)");
    if (StealToTrampoline(0x248460, 9, g_trampGui2, sizeof(g_trampGui2),
        sigPre, (void*)HookGui2, (void**)&g_realGui2, "IdleGui2"))
        LogDbg("MapScroll: таймер post-ovl GUI rva 248460 (gui2=)");
    if (StealToTrampoline(0x1F7A50, 5, g_trampCln, sizeof(g_trampCln),
        sigOvl, (void*)HookCln, (void**)&g_realCln, "IdleCln"))
        LogDbg("MapScroll: таймер idle cleanup rva 1F7A50 (cln=)");
    if (StealToTrampoline(0x24F350, 5, g_trampTail, sizeof(g_trampTail),
        sigOvl, (void*)HookTail, (void**)&g_realTail, "IdleTail"))
        LogDbg("MapScroll: таймер idle tail rva 24F350 (tail=)");
    static const unsigned char sigLkp[9] =
        { 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xE8, 0x09, 0x00, 0x00 };
    if (StealToTrampoline(0x055290, 9, g_trampLkp, sizeof(g_trampLkp),
        sigLkp, (void*)HookLkp, (void**)&g_realLkp, "IdleLkp"))
        LogDbg("MapScroll: таймер lookup rva 055290 (lkp=)");
    static const unsigned char sigStr[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (StealToTrampoline(0x588F20, 5, g_trampStr, sizeof(g_trampStr),
        sigStr, (void*)HookStr, (void**)&g_realStr, "CamStr"))
        LogDbg("MapScroll: таймер string rva 588F20 ESI (str=)");
    static const unsigned char sigClu[7] =
        { 0x51, 0x8B, 0x86, 0xB4, 0x0D, 0x00, 0x00 };
    if (StealToTrampoline(0x254530, 7, g_trampClu, sizeof(g_trampClu),
        sigClu, (void*)HookClu, (void**)&g_realClu, "IdleClu"))
        LogDbg("MapScroll: таймер dirty-кластер rva 254530 ESI (clu=)");
    {
        unsigned char sigPump[8];
        memcpy(sigPump, (void*)(g_base + 0x5DF2B0), 8);
        if (sigPump[0] == 0x55 && sigPump[1] == 0x8B && sigPump[2] == 0xEC && sigPump[3] == 0xA1)
        {
            if (StealToTrampoline(0x5DF2B0, 8, g_trampPump, sizeof(g_trampPump),
                sigPump, (void*)HookPump, (void**)&g_realPump, "IdlePump"))
                LogDbg("MapScroll: таймер насоса Peek/Dispatch rva 5DF2B0 ESI (pump=)");
        }
        else
            Log("MapScroll: насос 5DF2B0 сигнатура не совпала (%02X %02X %02X %02X)",
                sigPump[0], sigPump[1], sigPump[2], sigPump[3]);
    }
    {
        static const unsigned char sigWck[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (StealToTrampoline(0x2859C0, 5, g_trampWck, sizeof(g_trampWck),
            sigWck, (void*)HookWck, (void**)&g_realWck, "IdleWck"))
            LogDbg("MapScroll: таймер 2859C0 дневной тик (wck=); skip выкл");
    }
    if (HookIat(GetModuleHandleA(NULL), "user32.dll", "PeekMessageA",
        (void*)HookPeekMessageA, (void**)&g_realPeekMessageA))
        LogDbg("MapScroll: PeekMessageA IAT, счёт только внутри IdleInGame");
    else
        Log("MapScroll: PeekMessageA IAT не найден");
    if (HookIat(GetModuleHandleA(NULL), "user32.dll", "DispatchMessageA",
        (void*)HookDispatchMessageA, (void**)&g_realDispatchMessageA))
        LogDbg("MapScroll: DispatchMessageA IAT, счёт только внутри IdleInGame");
    else
        Log("MapScroll: DispatchMessageA IAT не найден");
    LogDbg("MapScroll: IdleSpike pump 5DF2B0. 285620 EDI+XMM не хукаем. 2592F0 skip только через +0x1e08");

    // 3.45: Hide GUI + delete C++ = UAF в тике CEU3Gui (5C3758 / 241BA6).
    // Пул как у unitpanel можно вернуть только вместе с C++-объектом диалога.
    LogDbg("WinReuse: пул GUI выключен (таймеры dlg/inf/map живы, Hide-keep нет)");
}

static void InstallArmySelectDiag()
{
    static const unsigned char sigDirtyHead[6] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68 };
    static const unsigned char sigThis[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    unsigned char* dirty = (unsigned char*)(g_base + RVA_PROV_DIRTY);
    if (memcmp(dirty, sigDirtyHead, sizeof(sigDirtyHead)) != 0)
        Log("ProvDirtyTime: сигнатура не совпала rva %06X (%02X %02X %02X %02X)",
            RVA_PROV_DIRTY, dirty[0], dirty[1], dirty[2], dirty[3]);
    else if (StealToTrampoline(RVA_PROV_DIRTY, 10, g_trampProvDirty, sizeof(g_trampProvDirty),
        dirty, (void*)HookProvDirty, (void**)&g_realProvDirty, "ProvDirtyTime"))
        LogDbg("ArmySelect: таймер FUN_007FC360 rva %06X", RVA_PROV_DIRTY);
    if (StealToTrampoline(RVA_ARMY_PICK, 6, g_trampArmyPick, sizeof(g_trampArmyPick),
        sigThis, (void*)HookArmyPick, (void**)&g_realArmyPick, "ArmyPickTime"))
        LogDbg("ArmySelect: таймер army_selected rva %06X", RVA_ARMY_PICK);
    if (StealToTrampoline(RVA_ARMY_MOVE, 6, g_trampArmyMove, sizeof(g_trampArmyMove),
        sigThis, (void*)HookArmyMove, (void**)&g_realArmyMove, "ArmyMoveTime"))
        LogDbg("ArmySelect: таймер army_move rva %06X", RVA_ARMY_MOVE);
    if (StealToTrampoline(0x26A7F0, 6, g_trampIdlerNotify, sizeof(g_trampIdlerNotify),
        sigThis, (void*)HookIdlerNotify, (void**)&g_realIdlerNotify, "IdlerNotifyTime"))
        LogDbg("ArmySelect: таймер CInGameIdler notify rva 26A7F0");
    if (StealToTrampoline(RVA_SEL_PROJ, 6, g_trampSelProj, sizeof(g_trampSelProj),
        sigThis, (void*)HookSelProj, (void**)&g_realSelProj, "SelProjTime"))
        LogDbg("ArmySelect: таймер mesh selection_projection rva %06X (skip=%d)",
            RVA_SEL_PROJ, (int)g_settings.patchSkipSelProj);

    // 3.32 skip 1D4540 не убрал хитч: pick всё ещё 24–65 мс, stall max ~200–280 мс.
    // На клике 3E08E0 каждый раз делает operator new(0x14C) + ctor и вешает
    // проекцию в список отрисовки (крутилка/кольцо). 20 кликов = 20 объектов
    // на кадр. 3.34–3.35: кольцо не оно (pick без него всё равно 20+ мс).
    // 3.36: круги/анимация снова родные. PATCH_SKIP_SEL_PROJ=1 только для отладки.
    if (g_settings.patchSkipSelProj)
    {
        unsigned char* p = (unsigned char*)(g_base + 0x1CC5B0);
        unsigned char* tail = (unsigned char*)(g_base + 0x1CCA3B);
        static const unsigned char expect[6] = { 0x8B, 0x71, 0x58, 0x8B, 0x8B, 0x08 };
        static const unsigned char expectTail[2] = { 0x80, 0x3D };
        if (memcmp(p, expect, 6) != 0 || memcmp(tail, expectTail, 2) != 0)
        {
            Log("ArmySelect: GFX-jump сигнатура не совпала rva 1CC5B0/1CCA3B (%02X %02X / %02X %02X)",
                p[0], p[1], tail[0], tail[1]);
        }
        else
        {
            DWORD old = 0;
            if (VirtualProtect(p, 6, PAGE_EXECUTE_READWRITE, &old))
            {
                p[0] = 0xE9;
                DWORD rel = (g_base + 0x1CCA3B) - ((DWORD)(p + 5));
                memcpy(p + 1, &rel, 4);
                p[5] = 0x90;
                VirtualProtect(p, 6, old, &old);
                FlushInstructionCache(GetCurrentProcess(), p, 6);
                LogDbg("ArmySelect: GFX-jump rva 1CC5B0 -> 1CCA3B (без 3E08E0, хвост notify/звук)");
            }
        }
    }

    // 3.35: vfunc +0x78 = CInGameIdler 26A7F0 каждый клик new(0x320)+CUnitView
    // 398A50 (unitpanel.gui). Одиночная смена: перевязать army на +0x28.
    if (g_settings.patchReuseUnitView)
    {
        static const unsigned char sigUv[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (StealToTrampoline(0x398A50, 5, g_trampUnitViewCtor, sizeof(g_trampUnitViewCtor),
            sigUv, (void*)HookUnitViewCtor, (void**)&g_realUnitViewCtor, "UnitViewReuse"))
            LogDbg("ArmySelect: reuse CUnitView rva 398A50 (пул %d, Hide/Show unitpanel)", UV_POOL_MAX);

        unsigned char* loc = (unsigned char*)(g_base + 0x26A958);
        static const unsigned char expectLoc[6] = { 0x8B, 0x87, 0xA8, 0x0D, 0x00, 0x00 };
        if (memcmp(loc, expectLoc, 6) != 0)
        {
            Log("ArmySelect: skip-loc сигнатура не совпала rva 26A958 (%02X %02X %02X %02X)",
                loc[0], loc[1], loc[2], loc[3]);
        }
        else
        {
            g_uvLocContinue = (BYTE*)(g_base + 0x26A95E);
            g_uvLocEpilogue = (BYTE*)(g_base + 0x26AE09);
            DWORD old = 0;
            if (VirtualProtect(loc, 6, PAGE_EXECUTE_READWRITE, &old))
            {
                loc[0] = 0xE9;
                DWORD rel = (DWORD)(DWORD_PTR)HookLocGate - ((DWORD)(loc + 5));
                memcpy(loc + 1, &rel, 4);
                loc[5] = 0x90;
                VirtualProtect(loc, 6, old, &old);
                FlushInstructionCache(GetCurrentProcess(), loc, 6);
                LogDbg("ArmySelect: skip GetLoc ARMIES/NAVIES при da8>2");
            }
        }

        unsigned char* del = (unsigned char*)(g_base + 0x6AE91B);
        if (del[0] == 0x8B && del[1] == 0xFF && del[2] == 0x55 && del[3] == 0x8B && del[4] == 0xEC)
            g_gameDelete = (tGameDelete)del;
        else
            Log("ArmySelect: operator delete rva 6AE91B не совпал (%02X %02X)", del[0], del[1]);

        unsigned char* dtor = (unsigned char*)(g_base + 0x26AE98);
        static const unsigned char expectDtor[10] =
            { 0x8B, 0x07, 0x8B, 0x10, 0x6A, 0x01, 0x8B, 0xCF, 0xFF, 0xD2 };
        if (memcmp(dtor, expectDtor, 10) != 0)
        {
            Log("ArmySelect: UnitView dtor-skip сигнатура не совпала rva 26AE98 (%02X %02X %02X %02X)",
                dtor[0], dtor[1], dtor[2], dtor[3]);
        }
        else
        {
            DWORD old = 0;
            if (VirtualProtect(dtor, 10, PAGE_EXECUTE_READWRITE, &old))
            {
                dtor[0] = 0x8B;
                dtor[1] = 0xCF;
                dtor[2] = 0xE8;
                DWORD rel = (DWORD)(DWORD_PTR)MaybeDeleteUnitView - ((DWORD)(dtor + 7));
                memcpy(dtor + 3, &rel, 4);
                dtor[7] = 0x90;
                dtor[8] = 0x90;
                dtor[9] = 0x90;
                VirtualProtect(dtor, 10, old, &old);
                FlushInstructionCache(GetCurrentProcess(), dtor, 10);
                LogDbg("ArmySelect: UnitView dtor-skip rva 26AE98 (кэш панели не destroy)");
            }
        }

        static const unsigned char sigRefresh[5] = { 0x51, 0x56, 0x57, 0x8B, 0xF0 };
        if (StealToTrampoline(0x393510, 5, g_trampPanelRefresh, sizeof(g_trampPanelRefresh),
            sigRefresh, (void*)Hook393510, &g_real393510, "PanelRefresh"))
            LogDbg("ArmySelect: 393510 отложен до idle/Present (не на стеке pick)");

        static const unsigned char sigRebuild[9] =
            { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
        if (StealToTrampoline(0x393290, 9, g_trampPanelRebuild, sizeof(g_trampPanelRebuild),
            sigRebuild, (void*)Hook393290, &g_real393290, "PanelRebuild"))
            LogDbg("ArmySelect: 393290 хук (reuse; skip выключен)");

        g_afterListClear = (void*)(g_base + 0x393336);
        {
            static const unsigned char sigListClr[9] =
                { 0x8B, 0x17, 0x8B, 0x42, 0x5C, 0x8B, 0xCF, 0xFF, 0xD0 };
            if (StealToTrampoline(0x39332D, 9, g_trampListClear, sizeof(g_trampListClear),
                sigListClr, (void*)Hook393ListClear, &g_realListClear, "ListClearSkip"))
                LogDbg("ArmySelect: Hide list не panel+4; после 393510 Show+layout list");
        }

        static const unsigned char sigBb0[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (StealToTrampoline(0x391BB0, 5, g_trampBb0, sizeof(g_trampBb0),
            sigBb0, (void*)Hook391BB0, &g_real391BB0, "IdleBrigade"))
            LogDbg("ArmySelect: 391BB0 жив (иконки); skip только NeedRebuild; таймер bb0/bb0h/bb0t");

        {
            static const unsigned char sigRorg[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
            if (StealToTrampoline(0x3810A0, 6, g_trampRorg, sizeof(g_trampRorg),
                sigRorg, (void*)Hook3810A0, &g_real3810A0, "ReorgIdlePanel"))
                LogDbg("ArmySelect: 3810A0 таймер (idle при окне реорга 1644)");
        }

        g_bb0Epilogue = (void*)(g_base + 0x39240C);
        {
            unsigned char* at = (unsigned char*)(g_base + 0x391C6E);
            unsigned char sigTail[6];
            memcpy(sigTail, at, 6);
            if (sigTail[0] == 0x8B && sigTail[1] == 0x15 &&
                StealToTrampoline(0x391C6E, 6, g_trampBb0Tail, sizeof(g_trampBb0Tail),
                    sigTail, (void*)Hook391C6E, &g_real391C6E, "IdleBrigadeTail"))
                LogDbg("ArmySelect: skip CUnitStatusEntry 391C6E -> 39240C (как reorg/1644)");
        }

        static const unsigned char sigHide[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        static void* unusedHide = 0;
        if (StealToTrampoline(0x393570, 5, g_trampPanelHide, sizeof(g_trampPanelHide),
            sigHide, (void*)Hook393570, &unusedHide, "PanelHideKeep"))
            LogDbg("ArmySelect: 393570 Hide без destroy детей list");
    }

    // 3.76: окно ванильное. Таймеры 391BB0 / 393290 / 3810A0 без skip.
    {
        static const unsigned char sigRebuild[9] =
            { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
        if (!g_real393290 &&
            StealToTrampoline(0x393290, 9, g_trampPanelRebuild, sizeof(g_trampPanelRebuild),
            sigRebuild, (void*)Hook393290, &g_real393290, "PanelRebuildTime"))
            LogDbg("ArmySelect: таймер 393290 (ваниль, без skip)");

        static const unsigned char sigBb0[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
        if (!g_real391BB0 &&
            StealToTrampoline(0x391BB0, 5, g_trampBb0, sizeof(g_trampBb0),
            sigBb0, (void*)Hook391BB0, &g_real391BB0, "IdleBrigadeTime"))
            LogDbg("ArmySelect: таймер 391BB0 bb0/bb0h/bb0t (ваниль, без skip)");

        static const unsigned char sigRorg[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
        if (!g_real3810A0 &&
            StealToTrampoline(0x3810A0, 6, g_trampRorg, sizeof(g_trampRorg),
            sigRorg, (void*)Hook3810A0, &g_real3810A0, "ReorgIdlePanelTime"))
            LogDbg("ArmySelect: таймер 3810A0 (реорг)");

        g_bb0Epilogue = (void*)(g_base + 0x39240C);
        if (!g_real391C6E)
        {
            unsigned char* at = (unsigned char*)(g_base + 0x391C6E);
            unsigned char sigTail[6];
            memcpy(sigTail, at, 6);
            if (sigTail[0] == 0x8B && sigTail[1] == 0x15 &&
                StealToTrampoline(0x391C6E, 6, g_trampBb0Tail, sizeof(g_trampBb0Tail),
                    sigTail, (void*)Hook391C6E, &g_real391C6E, "IdleBrigadeTailTime"))
                LogDbg("ArmySelect: таймер хвоста 391C6E (без skip)");
        }

        if (!g_fn009350)
        {
            g_fn009350 = (void*)(g_base + 0x009350);
            g_fn19C160 = (void*)(g_base + 0x19C160);
            g_bb0ContStr = (void*)(g_base + 0x391BF3);
            g_bb0ContFind = (void*)(g_base + 0x391C04);
            g_bb0ContList = (void*)(g_base + 0x391C36);
            g_bb0ContHash = (void*)(g_base + 0x391C49);
            static const unsigned char sigStr[5] = { 0xE8, 0x5D, 0x77, 0xC7, 0xFF };
            static const unsigned char sigFind[6] = { 0x8D, 0x55, 0xD0, 0x52, 0xFF, 0xD0 };
            static const unsigned char sigList[9] =
                { 0x8B, 0x16, 0x8B, 0x42, 0x7C, 0x8B, 0xCE, 0xFF, 0xD0 };
            static const unsigned char sigHash[5] = { 0xE8, 0x17, 0xA5, 0xE0, 0xFF };
            int n = 0;
            if (PlantMidJump(0x391BEE, 5, sigStr, (void*)Hook391BEE_Str, "Bb0Str009350"))
                n++;
            if (PlantMidJump(0x391BFE, 6, sigFind, (void*)Hook391BFE_Find, "Bb0FindChild"))
                n++;
            if (PlantMidJump(0x391C2D, 9, sigList, (void*)Hook391C2D_List, "Bb0ListVfunc"))
                n++;
            if (PlantMidJump(0x391C44, 5, sigHash, (void*)Hook391C44_Hash, "Bb0Hash19C160"))
                n++;
            LogDbg("ArmySelect: split-таймеры 391BB0 %d/4 (s=009350 f=FindChild l=list+7C g=hash o=остаток)", n);
        }

        if (!g_real5B2750)
        {
            static const unsigned char sigUpd[6] = { 0x56, 0x8B, 0x71, 0x60, 0x85, 0xF6 };
            if (StealToTrampoline(0x5B2750, 6, g_trampListUpd, sizeof(g_trampListUpd),
                sigUpd, (void*)Hook5B2750, &g_real5B2750, "ListboxUpdate5B2750"))
                LogDbg("ArmySelect: таймер 5B2750 listbox Update детей (bb0u)");
            static const unsigned char sigCh[5] = { 0x8B, 0x50, 0x24, 0xFF, 0xD2 };
            g_bb0ContChild = (void*)(g_base + 0x5B2761);
            if (PlantMidJump(0x5B275C, 5, sigCh, (void*)Hook5B275C_Child, "ListboxChild24"))
                LogDbg("ArmySelect: таймер child +0x24 внутри 5B2750 (bb0ch)");
        }

        if (!g_fn38B4C0)
        {
            g_fn38B4C0 = (void*)(g_base + 0x38B4C0);
            g_bb0ContSync = (void*)(g_base + 0x38AF3F);
            // E8 rel32 к 38B4C0: rel = 0x38B4C0 - (0x38AF3A+5) = 0x581
            static const unsigned char sigSync[5] = { 0xE8, 0x81, 0x05, 0x00, 0x00 };
            if (PlantMidJump(0x38AF3A, 5, sigSync, (void*)Hook38AF3A_Sync, "ListSyncCall38AF3A"))
                LogDbg("ArmySelect: call 38B4C0 @38AF3A с ESI (bb0rb/syncm), без C++ wrap");
        }
        if (!g_fn38B2E0)
        {
            g_fn38B2E0 = (void*)(g_base + 0x38B2E0);
            g_bb0ContEqA = (void*)(g_base + 0x38AF49);
            // E8 rel32 к 38B2E0: rel = 0x38B2E0 - (0x38AF44+5) = 0x397
            static const unsigned char sigEqA[5] = { 0xE8, 0x97, 0x03, 0x00, 0x00 };
            if (PlantMidJump(0x38AF44, 5, sigEqA, (void*)Hook38AF44_EqA, "ListEqCall38B2E0"))
                LogDbg("ArmySelect: таймер call 38B2E0 @38AF44 (bb0eqA scrollbar)");
        }
        if (!g_fn38B140)
        {
            g_fn38B140 = (void*)(g_base + 0x38B140);
            g_bb0ContEqB = (void*)(g_base + 0x38AF4E);
            // E8 rel32 к 38B140: rel = 0x38B140 - (0x38AF49+5) = 0x1F2
            static const unsigned char sigEqB[5] = { 0xE8, 0xF2, 0x01, 0x00, 0x00 };
            if (PlantMidJump(0x38AF49, 5, sigEqB, (void*)Hook38AF49_EqB, "ListEqCall38B140"))
                LogDbg("ArmySelect: skip Show на equal-path (eqVskip); rebuild = ванильный 5B1FA0");
        }
        if (!g_fn731C00)
        {
            g_fn731C00 = (void*)(g_base + 0x731C00);
            g_bb0ContEqH = (void*)(g_base + 0x38B15B);
            // push ebx; push edi; call edx; call 731C00
            static const unsigned char sigEqH[9] = {
                0x53, 0x57, 0xFF, 0xD2, 0xE8, 0xA5, 0x6A, 0x3A, 0x00
            };
            if (PlantMidJump(0x38B152, 9, sigEqH, (void*)Hook38B152_EqH, "ListEqHead38B152"))
                LogDbg("ArmySelect: таймер head 38B140 @38B152 (bb0eqH)");
        }
        if (!g_bb0ContEqV)
        {
            g_bb0ContEqV = (void*)(g_base + 0x38B188);
            static const unsigned char sigEqV[5] = { 0x83, 0xC1, 0x1C, 0xFF, 0xD0 };
            if (PlantMidJump(0x38B183, 5, sigEqV, (void*)Hook38B183_EqV, "ListEqVcall38B183"))
                LogDbg("ArmySelect: eqV @38B183 skip или call EAX=5B1FA0 (bb0eqV)");
        }
        if (!g_eqVSlicesOn)
        {
            g_bb0ContEqVp = (void*)(g_base + 0x5E450D);
            g_bb0ContEqVv = (void*)(g_base + 0x5E459B);
            g_bb0ContEqVl = (void*)(g_base + 0x5E4678);
            g_bb0ContEqTb = (void*)(g_base + 0x5E46AB);
            g_bb0ContEqTc = (void*)(g_base + 0x5E46DB);
            g_bb0ContEqTd = (void*)(g_base + 0x5E470B);
            g_bb0ContEqVw = (void*)(g_base + 0x5E473B);
            g_bb0ContEqVx = (void*)(g_base + 0x5E476B);
            static const unsigned char sigVp[6] = { 0x8B, 0x9E, 0x58, 0x02, 0x00, 0x00 };
            static const unsigned char sigVv[6] = { 0x8B, 0xBE, 0x1C, 0x04, 0x00, 0x00 };
            static const unsigned char sigTa[6] = { 0x8B, 0x9E, 0xD8, 0x02, 0x00, 0x00 };
            static const unsigned char sigTb[6] = { 0x8B, 0x9E, 0x98, 0x02, 0x00, 0x00 };
            static const unsigned char sigTc[6] = { 0x8B, 0x9E, 0xF8, 0x02, 0x00, 0x00 };
            static const unsigned char sigTd[6] = { 0x8B, 0x9E, 0x18, 0x03, 0x00, 0x00 };
            static const unsigned char sigVw[6] = { 0x8B, 0xBE, 0x6C, 0x04, 0x00, 0x00 };
            static const unsigned char sigVx[9] = {
                0x83, 0xCB, 0xFF, 0x39, 0x9E, 0x90, 0x04, 0x00, 0x00
            };
            int n = 0;
            if (PlantMidJump(0x5E4507, 6, sigVp, (void*)Hook5E4507_EqVp, "EqVSlice4507"))
                n++;
            if (PlantMidJump(0x5E4595, 6, sigVv, (void*)Hook5E4595_EqVv, "EqVSlice4595"))
                n++;
            // 4672 starts Ta; Vl marker was renamed — still ends lists at 4595→4672
            if (PlantMidJump(0x5E4672, 6, sigTa, (void*)Hook5E4672_EqTa, "EqVSlice4672"))
                n++;
            if (PlantMidJump(0x5E46A5, 6, sigTb, (void*)Hook5E46A5_EqTb, "EqVSlice46A5"))
                n++;
            if (PlantMidJump(0x5E46D5, 6, sigTc, (void*)Hook5E46D5_EqTc, "EqVSlice46D5"))
                n++;
            if (PlantMidJump(0x5E4705, 6, sigTd, (void*)Hook5E4705_EqTd, "EqVSlice4705"))
                n++;
            if (PlantMidJump(0x5E4735, 6, sigVw, (void*)Hook5E4735_EqVw, "EqVSlice4735"))
                n++;
            if (PlantMidJump(0x5E4762, 9, sigVx, (void*)Hook5E4762_EqVx, "EqVSlice4762"))
                n++;
            if (n == 8)
            {
                g_eqVSlicesOn = 1;
                LogDbg("ArmySelect: срезы 5E4490 p/v/l/Ta-Td/w/x gated");
            }
            else
                LogDbg("ArmySelect: срезы 5E4490 частичные %d/8", n);
        }
        if (!g_bb0ContEqTbC)
        {
            g_bb0ContEqTbC = (void*)(g_base + 0x5E46D0);
            static const unsigned char sigTbC[7] = {
                0x8B, 0x11, 0x8B, 0x42, 0x34, 0xFF, 0xD0
            };
            if (PlantMidJump(0x5E46C9, 7, sigTbC, (void*)Hook5E46C9_TbC, "EqVTbChild34"))
                LogDbg("ArmySelect: таймер Tb child vt+0x34 @46C9 (bb0eqTbC/tbCnt)");
        }
        if (!g_fn008ED0)
        {
            g_fn008ED0 = (void*)(g_base + 0x008ED0);
            g_bb0ContEqS = (void*)(g_base + 0x38B1C7);
            static const unsigned char sigEqS[5] = { 0xE8, 0x09, 0xDD, 0xC7, 0xFF };
            if (PlantMidJump(0x38B1C2, 5, sigEqS, (void*)Hook38B1C2_EqS, "ListEqStr38B1C2"))
                LogDbg("ArmySelect: таймер call 008ED0 @38B1C2 (bb0eqS)");
        }
        if (!g_fn38A4D0)
        {
            g_fn38A4D0 = (void*)(g_base + 0x38A4D0);
            g_bb0ContEqR = (void*)(g_base + 0x38B1D2);
            static const unsigned char sigEqR[5] = { 0xE8, 0xFE, 0xF2, 0xFF, 0xFF };
            if (PlantMidJump(0x38B1CD, 5, sigEqR, (void*)Hook38B1CD_EqR, "ListEqRow38B1CD"))
                LogDbg("ArmySelect: таймер call 38A4D0 @38B1CD (bb0eqR)");
        }
        LogDbg("ArmySelect: патч окна СНЯТ — ищем утечку FPS на ванили");
    }
    InstallWindowFps();
}

static void InstallWaitDiagHooks()
{
    HMODULE exe = GetModuleHandleA(NULL);
    HMODULE k32 = GetModuleHandleA("kernel32.dll");
    if (k32 && !g_realWFSO)
        g_realWFSO = (tWaitForSingleObject)GetProcAddress(k32, "WaitForSingleObject");
    if (k32 && !g_realQpc)
        g_realQpc = (tQueryPerformanceCounter)GetProcAddress(k32, "QueryPerformanceCounter");

    if (HookIat(exe, "kernel32.dll", "WaitForSingleObject", (void*)HookWaitForSingleObject, (void**)&g_realWFSO))
        Log("WFSO: WaitForSingleObject exe (16-50мс -> %d, INFINITE не трогаем)",
            g_settings.mpClientSleepMs);
    else
        Log("WFSO: IAT не найден");

    if (HookIatOrdinal(exe, "ws2_32.dll", 16, (void*)HookRecv, (void**)&g_realRecv) ||
        HookIatOrdinal(exe, "WS2_32.dll", 16, (void*)HookRecv, (void**)&g_realRecv))
        Log("Recv: ws2_32.recv перехвачен");
    else
        Log("Recv: IAT recv не найден");

    if (HookIat(exe, "kernel32.dll", "QueryPerformanceCounter", (void*)HookQpc, (void**)&g_realQpc))
        Log("QPC: QueryPerformanceCounter перехвачен");

    static const unsigned char sigEu3[5]   = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    static const unsigned char sigNudge[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    static const unsigned char sigIn[6]    = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    StealToTrampoline(0x2481D0, 5, g_trampIdleEu3, sizeof(g_trampIdleEu3),
        sigEu3, (void*)HookIdleEu3, (void**)&g_realIdleEu3, "IdleEU3");
    StealToTrampoline(0x2B70A0, 6, g_trampIdleNudge, sizeof(g_trampIdleNudge),
        sigNudge, (void*)HookIdleNudge, (void**)&g_realIdleNudge, "IdleNudge");
    StealToTrampoline(0x254D80, 6, g_trampIdleIngame, sizeof(g_trampIdleIngame),
        sigIn, (void*)HookIdleIngame, (void**)&g_realIdleIngame, "IdleInGame");
}

static bool InstallEngineStability()
{
    g_fnIsBadReadPtr = SafeIsBadReadPtr;
    PinFpu();

    HMODULE exe = GetModuleHandleA(NULL);

    InstallTimerResolution();

    // fixSfxMixerLag и patchMpClientSleep независимы; оба могут звать select.
    if (g_settings.fixSfxMixerLag || g_settings.patchMpClientSleep)
        InstallSelectHook();

    if (g_settings.patchHighPriority)
        InstallHighPriority();

    if (g_settings.patchHeapLfh)
        InstallHeapLfh();

    HMODULE kernel32 = GetModuleHandleA("kernel32.dll");
    if (g_settings.patchThreadFpuPin && kernel32)
    {
        g_realCreateThread = (tCreateThread)GetProcAddress(kernel32, "CreateThread");
        g_realLoadLibraryA = (tLoadLibraryA)GetProcAddress(kernel32, "LoadLibraryA");
        g_realLoadLibraryW = (tLoadLibraryW)GetProcAddress(kernel32, "LoadLibraryW");
        g_realGetTickCount = (tGetTickCount)GetProcAddress(kernel32, "GetTickCount");

        if (HookIat(exe, "kernel32.dll", "CreateThread", (void*)HookCreateThread, (void**)&g_realCreateThread))
            Log("FPU: CreateThread exe перехвачен");
        else
            Log("FPU: CreateThread IAT не найден");

        HookIat(exe, "kernel32.dll", "LoadLibraryA", (void*)HookLoadLibraryA, (void**)&g_realLoadLibraryA);
        HookIat(exe, "kernel32.dll", "LoadLibraryW", (void*)HookLoadLibraryW, (void**)&g_realLoadLibraryW);
        if (HookIat(exe, "kernel32.dll", "GetTickCount", (void*)HookGetTickCount, (void**)&g_realGetTickCount))
            Log("FPU: GetTickCount - отложенный патч TBB/D3D");
    }

    if (g_settings.patchFpuFortress)
        InstallMainLoopFpuPin();

    if (g_settings.patchMainLoopSleep0)
        InstallMainLoopSleep0();

    TryPatchLateModules();

    Log("Engine: FPU=%d D3D=%d LFH=%d threadPin=%d tbbCap=%d sleep0=%d noVsync=%d prio=%d",
        (int)g_settings.patchFpuFortress,
        (int)g_settings.patchD3dFpuPreserve,
        (int)g_settings.patchHeapLfh,
        (int)g_settings.patchThreadFpuPin,
        g_settings.engineWorkerThreads,
        (int)g_settings.patchMainLoopSleep0,
        (int)g_settings.patchD3dNoVsync,
        (int)g_settings.patchHighPriority);
    return true;
}

// ---------------------------------------------------------------
// Квантование POP после дневного прохода FUN_00485E40
//
// Сами поля CPop уже int64 с 15 дробными битами (не IEEE float).
// 0x485E40 — координатор: три раза зовёт FUN_00484F90, где пишутся
// money (+0x180) и savings (+0x250). После возврата обходим аргумент
// как CPop / вектор / список и срезаем младшие биты.
// ---------------------------------------------------------------

static const DWORD RVA_POP_DAILY = 0x85E40;
static const unsigned char POP_DAILY_SIG[9] =
    { 0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
static const int POP_ID_TYPE = 46;
static const int POP_STRIDE = 0x2A8;
static const int POP_QUANTIZE_OFFS[] =
{
    0x118, 0x120, 0x128, 0x130, 0x138, 0x140,
    0x180, 0x1B0, 0x1C8,
    0x1D8, 0x1E0, 0x1E8, 0x1F0, 0x1F8, 0x200, 0x208, 0x210, 0x218,
    0x250
};
static const int POP_QUANTIZE_OFFS_N = sizeof(POP_QUANTIZE_OFFS) / sizeof(POP_QUANTIZE_OFFS[0]);

static DWORD g_popDailyRet = 0;
static void* g_popDailyArg0 = 0;
static void* g_popDailyEcx = 0;
static void* g_popDailyTramp = 0;

static void QuantizeFixed15(void* slot)
{
    int keep = g_settings.popQuantizeKeepBits;
    if (keep >= 15)
        return;
    if (keep < 0)
        keep = 0;

    unsigned drop = (unsigned)(15 - keep);
    __int64 v = *(__int64*)slot;
    __int64 bias = 1i64 << (drop - 1);
    if (v >= 0)
        v = ((v + bias) >> drop) << drop;
    else
        v = ((v - bias) >> drop) << drop;
    *(__int64*)slot = v;
}

static bool LooksLikePop(void* p)
{
    if (!p)
        return false;
    __try
    {
        return *(int*)((char*)p + 8) == POP_ID_TYPE;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void QuantizeOnePop(void* pop)
{
    if (!LooksLikePop(pop))
        return;
    __try
    {
        for (int i = 0; i < POP_QUANTIZE_OFFS_N; ++i)
            QuantizeFixed15((char*)pop + POP_QUANTIZE_OFFS[i]);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void QuantizePopObject(void* obj)
{
    if (!obj)
        return;

    if (LooksLikePop(obj))
    {
        int n = 0;
        void* p = obj;
        while (p && n < 400000)
        {
            QuantizeOnePop(p);
            ++n;
            __try { p = *(void**)((char*)p + 0x27C); }
            __except (EXCEPTION_EXECUTE_HANDLER) { break; }
            if (p == obj)
                break;
        }
        return;
    }

    void** begin = 0;
    void** end = 0;
    __try
    {
        begin = *(void***)((char*)obj + 0x44);
        end = *(void***)((char*)obj + 0x48);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }

    if (!begin || !end || end < begin)
        return;

    int count = (int)(end - begin);
    if (count > 0 && count < 500000 && LooksLikePop(*begin))
    {
        for (void** it = begin; it < end; ++it)
            QuantizeOnePop(*it);
        return;
    }

    int bytes = (int)((char*)end - (char*)begin);
    if (bytes >= POP_STRIDE && (bytes % POP_STRIDE) == 0 && bytes / POP_STRIDE < 500000
        && LooksLikePop(begin))
    {
        char* p = (char*)begin;
        char* e = (char*)end;
        for (; p < e; p += POP_STRIDE)
            QuantizeOnePop(p);
    }
}

static void AfterPopDaily()
{
    PinFpu();
    QuantizePopObject(g_popDailyArg0);
    if (g_popDailyEcx != g_popDailyArg0)
        QuantizePopObject(g_popDailyEcx);
}

__declspec(naked) static void PopDailyAfterThunk()
{
    __asm {
        pushad
        call AfterPopDaily
        popad
        jmp dword ptr [g_popDailyRet]
    }
}

__declspec(naked) static void PopDailyEntryThunk()
{
    __asm {
        mov dword ptr [g_popDailyEcx], ecx
        mov eax, dword ptr [esp + 4]
        mov dword ptr [g_popDailyArg0], eax
        pop dword ptr [g_popDailyRet]
        push offset PopDailyAfterThunk
        jmp dword ptr [g_popDailyTramp]
    }
}

static bool InstallPopQuantize()
{
    if (g_settings.popQuantizeKeepBits >= 15)
    {
        Log("PopQuantize: KEEP_BITS>=15 - квантование выключено");
        return false;
    }

    unsigned char* hook = (unsigned char*)(g_base + RVA_POP_DAILY);
    if (memcmp(hook, POP_DAILY_SIG, sizeof(POP_DAILY_SIG)) != 0)
    {
        Log("PopQuantize: сигнатура FUN_00485E40 не совпала");
        return false;
    }

    unsigned char* cave = (unsigned char*)VirtualAlloc(
        0, 32, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!cave)
        return false;

    memcpy(cave, hook, 9);
    cave[9] = 0xE9;
    *(DWORD*)(cave + 10) = (DWORD)(hook + 9) - (DWORD)(cave + 14);
    g_popDailyTramp = cave;

    unsigned char patch[9];
    patch[0] = 0xE9;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&PopDailyEntryThunk - ((DWORD)hook + 5);
    memset(patch + 5, 0x90, 4);

    DWORD oldProtect = 0;
    if (!VirtualProtect(hook, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(hook, patch, sizeof(patch));
    VirtualProtect(hook, sizeof(patch), oldProtect, &oldProtect);

    Log("PopQuantize: FUN_00485E40, keep_bits=%d", g_settings.popQuantizeKeepBits);
    return true;
}

// ---------------------------------------------------------------
// MP-клиент: UI-поток (CreateThread → rva 71DC90) при пустой очереди
// делал Sleep(40). WndProc (71DB70) Present не вызывает — только
// WM 0x445 и DefWindowProc. Кадры идут из главного цикла, поэтому
// патч pump не поднимает FPS сам по себе. 3.18: idle снова Sleep(1)
// (MsgWait+Peek(hwnd) крутит QS и жрёт CPU), Sleep 16-50 мс режется
// во всех модулях, Present пишет, сколько мс занял сам Present.
// Звук Sleep(35)/Sleep(30) не трогаем.
// ---------------------------------------------------------------

static const DWORD RVA_MP_CLIENT_SLEEP = 0x71DD2C;

static void MpClientPumpIdle()
{
    DWORD ms = (DWORD)g_settings.mpClientSleepMs;
    if ((int)ms < 0)
        ms = 0;
    if (ms > 127)
        ms = 1;
    if (g_realSleep)
        g_realSleep(ms);
    else
    {
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        tSleep s = k32 ? (tSleep)GetProcAddress(k32, "Sleep") : 0;
        if (s)
            s(ms);
    }
}

static bool InstallMpClientSleep()
{
    if (!g_realSleep)
    {
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        if (k32)
            g_realSleep = (tSleep)GetProcAddress(k32, "Sleep");
    }
    unsigned char* p = (unsigned char*)(g_base + RVA_MP_CLIENT_SLEEP);
    DWORD iat = g_base + RVA_SLEEP_IAT;
    if (p[0] != 0x6A || (p[1] != 40 && p[1] != (unsigned char)g_settings.mpClientSleepMs) ||
        p[2] != 0xFF || p[3] != 0x15 || *(DWORD*)(p + 4) != iat)
    {
        Log("MpClientSleep: сигнатура Sleep не совпала rva %06X (%02X %02X %02X %02X)",
            RVA_MP_CLIENT_SLEEP, p[0], p[1], p[2], p[3]);
        return false;
    }

    unsigned char expectMs = p[1];
    unsigned char patch[8];
    patch[0] = 0xE8;
    *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&MpClientPumpIdle - ((DWORD)(DWORD_PTR)p + 5);
    patch[5] = 0x90;
    patch[6] = 0x90;
    patch[7] = 0x90;

    DWORD oldProtect = 0;
    if (!VirtualProtect(p, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        return false;
    memcpy(p, patch, sizeof(patch));
    VirtualProtect(p, sizeof(patch), oldProtect, &oldProtect);

    Log("MpClientSleep: pump Sleep(%u) -> Sleep(%d) rva %06X",
        (unsigned)expectMs, g_settings.mpClientSleepMs, RVA_MP_CLIENT_SLEEP);
    return true;
}

static HMODULE g_eventMusicModule = 0;
static void LoadEventMusicDll()
{
    wchar_t path[MAX_PATH] = {};
    DWORD n = GetModuleFileNameW(NULL, path, MAX_PATH);
    if (!n || n >= MAX_PATH) { Log("EventMusic: no se pudo obtener la ruta del juego"); return; }
    wchar_t* slash = wcsrchr(path, L'\\');
    if (!slash) { Log("EventMusic: ruta del juego no valida"); return; }
    wcscpy_s(slash + 1, MAX_PATH - (size_t)(slash + 1 - path), L"eventmusic.dll");
    g_eventMusicModule = LoadLibraryW(path);
    if (!g_eventMusicModule) { Log("EventMusic: no se pudo cargar eventmusic.dll (error %u)", GetLastError()); return; }
    typedef BOOL (WINAPI* tStart)(BOOL);
    tStart start = (tStart)GetProcAddress(g_eventMusicModule, "EventMusic_Start");
    // En x86, WINAPI decora los exports C como _Nombre@bytes. Acepta también
    // ese nombre para DLLs compiladas sin un archivo .def que lo des-decore.
    if (!start) start = (tStart)GetProcAddress(g_eventMusicModule, "_EventMusic_Start@4");
    if (!start) { Log("EventMusic: falta el export EventMusic_Start"); return; }
    typedef void (WINAPI* tSetRestart)(BOOL);
    tSetRestart setRestart = (tSetRestart)GetProcAddress(g_eventMusicModule, "EventMusic_SetRestartOnBackendBg");
    if (!setRestart) setRestart = (tSetRestart)GetProcAddress(g_eventMusicModule, "_EventMusic_SetRestartOnBackendBg@4");
    if (setRestart) setRestart(g_settings.restartOnBackendBg ? TRUE : FALSE);
    else Log("EventMusic: falta EventMusic_SetRestartOnBackendBg");
    BOOL ok = start(g_settings.log ? TRUE : FALSE);
    Log("EventMusic: DLL cargada, inicio=%d, restart_backend_bg=%d", (int)ok, (int)g_settings.restartOnBackendBg);
}


// ---------------------------------------------------------------
// ЗАКРЫТИЕ ФАБРИК: выплата накоплений владельцам при любом закрытии и
// автозакрытие убыточных (PATCH_FACTORY_CLOSE_PAYOUT,
// PATCH_FACTORY_AUTO_CLOSE_UNPROFITABLE; срок - factory_unprofitable_
// close_days в common\defines_v2dll.txt).
//
// Карта движка (Ghidra + дизассемблер по реальному v2game.exe).
// Фабрика = CStateBuilding (ESI/EBX/EAX в разных функциях):
//   +0x18 тип  (+0x12C от него = "definition" владельцев)   +0x1C стейт
//   +0x20 уровень    +0x150 деньги фабрики (int64)
//   +0x158 затраты на сырьё за прошлый день (int64)
//   +0x178 дни убытка подряд (выручка < затрат на сырьё; обновляется
//          в начале FUN_004F4B30, не используется ничем, кроме ИИ)
//   +0x180 субсидия (byte)   +0x184 счётчик остановки   +0x188 закрыта (byte)
// Движок закрывает фабрику не по прибыльности: после 11 дней подряд без
// единой закупки сырья (деньги кончились) уровень падает на 1, а на
// уровне 1 фабрика просто перестаёт обрабатываться. Поэтому чем больше
// MAX_FACTORY_MONEY_SAVE, тем дольше убыточная фабрика проедает накопления.
//   FUN_004F4B30 (rva F4B30)  финансы, зовётся дневным проходом
//     FUN_00488080 только для open: уровень>0, +0x184<11, !закрыта. Всё,
//     что выше MAX_FACTORY_MONEY_SAVE*уровень, она отдаёт владельцам
//     (капиталистам стейта) через FUN_004CFE20.
//   FUN_004CFE20 (rva CFE20)  выплата владельцам: EAX=definition, стек:
//     state, lo, hi, ret 0xC; AL=1 если выплачено, 0 - у стейта нет
//     попов-владельцев (деньги не выплачены; ванильный вызов в
//     FUN_004F4B30 вычитает их ДО вызова и результат не проверяет).
//   FUN_004D03D0 (команда "закрыть/открыть") при закрытии ставит +0x188=1
//     и зовёт FUN_004F5750 (rva F5750, ESI=фабрика, единственный вызов) -
//     деньги +0x150 она не трогает, а закрытую фабрику дневной проход
//     пропускает: накопления замораживаются внутри.
//   Остановка по счётчику: +0x184 растёт в FUN_004F50C0 (rva F50C0,
//     EAX=фабрика, [ebp+8]=bool "что-то купили") и ВСТРОЕННО в
//     FUN_00482FF0 (rva 834C6, EBX=фабрика) - в обоих случаях только
//     при !субсидия; на уровне 1 при +0x184>=11 фабрика встаёт, деньги
//     тоже замораживаются.
// Хуки:
//   F5750 вход          - выплата всех денег владельцам при закрытии
//   F50C0 вход, 834C6   - то же в момент остановки по счётчику (уровень 1)
//   F4B30 вход          - автозакрытие: !субсидия && +0x178 >= N дней ->
//                         +0x188=1, +0x178=0, зов F5750 (выплата - через
//                         хук выше), вызов ванильных финансов пропускается
// Если у стейта нет владельцев (CFE20 вернул 0), деньги остаются в
// фабрике, а не пропадают. FACTORY_CLOSE_DRY_RUN=1 (по умолчанию): ни
// закрытия, ни выплаты, только строки "[DRY]" в лог.
// ---------------------------------------------------------------

static const DWORD RVA_FACTORY_FINANCE               = 0xF4B30;
static const DWORD RVA_FACTORY_FINANCE_RESUME        = 0xF4B36;
static const DWORD RVA_FACTORY_COUNTER               = 0xF50C0;
static const DWORD RVA_FACTORY_COUNTER_RESUME        = 0xF50CA;
static const DWORD RVA_FACTORY_COUNTER_INLINE        = 0x834C6;
static const DWORD RVA_FACTORY_COUNTER_INLINE_RESUME = 0x834CC;
static const DWORD RVA_FACTORY_CLOSE                 = 0xF5750;
static const DWORD RVA_FACTORY_CLOSE_RESUME          = 0xF5756;
static const DWORD RVA_OWNER_PAYOUT                  = 0xCFE20;

static const int FAC_OFF_TYPE      = 0x18;
static const int FAC_OFF_STATE     = 0x1C;
static const int FAC_OFF_LEVEL     = 0x20;
static const int FAC_OFF_MONEY     = 0x150;
static const int FAC_OFF_LOSS_DAYS = 0x178;
static const int FAC_OFF_SUBSIDY   = 0x180;
static const int FAC_OFF_STOP_CNT  = 0x184;
static const int FAC_OFF_CLOSED    = 0x188;
static const int FAC_TYPE_DEF_OFF  = 0x12C;
static const int FAC_STOP_DAYS     = 11;

static DWORD g_facFinanceResume       = 0;
static DWORD g_facCounterResume       = 0;
static DWORD g_facCounterInlineResume = 0;
static DWORD g_facCloseResume         = 0;
static DWORD g_ownerPayoutAddr        = 0;
static DWORD g_facCloseFnAddr         = 0;
static const char* g_facCloseReason   = "ручное закрытие";
static LONG  g_facDryLogged           = 0;
static void* g_facSeen[512];
static int   g_facSeenCount           = 0;

// В DRY_RUN строки [DRY] - единственный результат прогона, поэтому первые 400
// за запуск идут в обычный лог; в боевом режиме и дальше - только при DEBUG_LOG.
static void FacLog(const char* fmt, ...)
{
    char msg[320];
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(msg, sizeof(msg), _TRUNCATE, fmt, ap);
    va_end(ap);

    if (g_settings.factoryCloseDryRun && g_facDryLogged < 400)
    {
        ++g_facDryLogged;
        Log("%s", msg);
    }
    else
    {
        LogDbg("%s", msg);
    }
}

// true, если фабрику видим впервые (чтобы DRY_RUN не писал одно и то же каждый день).
static bool FacSeenFirst(void* f)
{
    for (int i = 0; i < g_facSeenCount; ++i)
        if (g_facSeen[i] == f)
            return false;
    if (g_facSeenCount < (int)(sizeof(g_facSeen) / sizeof(g_facSeen[0])))
        g_facSeen[g_facSeenCount++] = f;
    return true;
}

// "TAG тип" для строк лога: тег страны-владельца (state+0x5C = индекс страны,
// тег по country+0x1C - как у FUN_00523400) и имя типа фабрики (+0x18, имя
// по +0x20, как у ProdTypeGate). Любая неудача чтения -> "?".
static void FacDescribe(void* factory, char* out, size_t cap)
{
    char tag[8] = "?";
    char type[40] = "?";
    __try
    {
        unsigned char* f = (unsigned char*)factory;
        unsigned char* state = *(unsigned char**)(f + FAC_OFF_STATE);
        if (state)
        {
            void* country = GetCountryPtr(*(int*)(state + 0x5C));
            if (country)
            {
                const unsigned char* t = (const unsigned char*)country + 0x1C;
                if (isupper(t[0]) && isupper(t[1]) && (isupper(t[2]) || isdigit(t[2])))
                {
                    tag[0] = (char)t[0];
                    tag[1] = (char)t[1];
                    tag[2] = (char)t[2];
                    tag[3] = 0;
                }
            }
        }
        // Имя типа - std::string: до 15 символов лежит в самом буфере, длиннее -
        // по указателю (ResolveProdTypeNamePtr). ReadPlausibleTypeName читает
        // только буфер, поэтому "machine_parts_factory" и т.п. давали "?".
        void* typePtr = *(void**)(f + FAC_OFF_TYPE);
        UINT_PTR tv = (UINT_PTR)typePtr;
        if (tv >= 0x10000 && tv <= 0xFFFE0000)
        {
            const char* nm = ResolveProdTypeNamePtr(typePtr);
            UINT_PTR nv = (UINT_PTR)nm;
            if (nv >= 0x10000 && nv <= 0xFFFE0000)
            {
                char tn[40];
                int i = 0;
                for (; i < (int)sizeof(tn) - 1; ++i)
                {
                    unsigned char c = (unsigned char)nm[i];
                    if (c == 0)
                        break;
                    if (c < 0x20 || c > 0x7e)
                    {
                        i = 0;
                        break;
                    }
                    tn[i] = (char)c;
                }
                if (i > 0 && i < (int)sizeof(tn) - 1)
                {
                    tn[i] = 0;
                    strncpy_s(type, sizeof(type), tn, _TRUNCATE);
                }
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
    _snprintf_s(out, cap, _TRUNCATE, "%s %s", tag, type);
}

// Деньги фабрики в тех единицах, что видит игрок: raw / 32768 (fixed15) / 1000.
static double FacMoneyShown(long long raw)
{
    return (double)raw / 32768000.0;
}

// EAX=definition, стек: state, lo, hi (callee чистит 0xC). Тот же вызов, что в
// FUN_004F4B30 для выплаты излишка.
__declspec(naked) static unsigned char __cdecl CallOwnerPayout(void* definition, void* state, DWORD lo, DWORD hi)
{
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 20]
        push dword ptr [ebp + 16]
        push dword ptr [ebp + 12]
        mov eax, dword ptr [ebp + 8]
        call dword ptr [g_ownerPayoutAddr]
        movzx eax, al
        pop ebp
        ret
    }
}

// ESI=фабрика, аргументов нет (ванильное закрытие, см. FUN_004D03D0).
__declspec(naked) static void __cdecl CallFactoryCloseVanilla(void* factory)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        call dword ptr [g_facCloseFnAddr]
        pop esi
        ret
    }
}

static bool FactoryPayoutAll(void* factory, const char* reason)
{
    __try
    {
        unsigned char* f = (unsigned char*)factory;
        long long money = *(long long*)(f + FAC_OFF_MONEY);
        if (money <= 0)
            return false;

        void* typeObj = *(void**)(f + FAC_OFF_TYPE);
        void* state   = *(void**)(f + FAC_OFF_STATE);
        void* def     = typeObj ? *(void**)((unsigned char*)typeObj + FAC_TYPE_DEF_OFF) : 0;
        int   level   = *(int*)(f + FAC_OFF_LEVEL);
        int   loss    = *(int*)(f + FAC_OFF_LOSS_DAYS);

        if (!state || !def)
        {
            FacLog("FactoryClose: %s: фабрика %p без стейта/definition (state=%p def=%p) - выплата пропущена",
                reason, factory, state, def);
            return false;
        }

        if (g_settings.factoryCloseDryRun)
        {
            char who[64];
            FacDescribe(factory, who, sizeof(who));
            FacLog("FactoryClose [DRY]: %s: [%s] фабрика %p, стейт %p, уровень %d, дней убытка %d, деньги %.0f -> была бы выплата владельцам",
                reason, who, factory, state, level, loss, FacMoneyShown(money));
            return false;
        }

        char who[64];
        FacDescribe(factory, who, sizeof(who));
        unsigned long long um = (unsigned long long)money;
        if (CallOwnerPayout(def, state, (DWORD)um, (DWORD)(um >> 32)))
        {
            *(long long*)(f + FAC_OFF_MONEY) = 0;
            FacLog("FactoryClose: %s: [%s] фабрика %p, стейт %p, уровень %d: %.0f выплачено владельцам",
                reason, who, factory, state, level, FacMoneyShown(money));
            return true;
        }

        FacLog("FactoryClose: %s: [%s] фабрика %p, стейт %p: владельцев нет - %.0f остаются в фабрике",
            reason, who, factory, state, FacMoneyShown(money));
        return false;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("FactoryClose: исключение при выплате (фабрика %p, %s)", factory, reason);
        return false;
    }
}

static void __cdecl FactoryClosePayoutHook(void* factory)
{
    FactoryPayoutAll(factory, g_facCloseReason);
}

static void FactoryStopCheck(unsigned char* f)
{
    int level = *(int*)(f + FAC_OFF_LEVEL);
    int cnt   = *(int*)(f + FAC_OFF_STOP_CNT);
    if (level <= 1 && cnt + 1 >= FAC_STOP_DAYS)
        FactoryPayoutAll(f, "остановка (11 дней без закупок, уровень 1)");
}

// FUN_004F50C0: arg != 0 сбрасывает счётчик, субсидия - тоже.
static void __cdecl FactoryCounterObserve(void* factory, int arg)
{
    __try
    {
        unsigned char* f = (unsigned char*)factory;
        if (arg || *(f + FAC_OFF_SUBSIDY))
            return;
        FactoryStopCheck(f);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Встроенный инкремент в FUN_00482FF0: сюда попадаем только при !субсидия.
static void __cdecl FactoryInlineCounterObserve(void* factory)
{
    __try
    {
        FactoryStopCheck((unsigned char*)factory);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Возвращает 1, если фабрика закрыта (ванильные финансы за этот день пропускаем).
static int __cdecl FactoryAutoCloseCheck(void* factory)
{
    __try
    {
        int days = g_defFactoryCloseDays;
        if (days <= 0)
            return 0;

        unsigned char* f = (unsigned char*)factory;
        if (*(f + FAC_OFF_SUBSIDY) != 0 || *(f + FAC_OFF_CLOSED) != 0)
            return 0;
        if (*(int*)(f + FAC_OFF_LEVEL) <= 0)
            return 0;

        int loss = *(int*)(f + FAC_OFF_LOSS_DAYS);
        if (loss < days)
            return 0;

        char who[64];
        if (g_settings.factoryCloseDryRun)
        {
            if (FacSeenFirst(f))
            {
                FacDescribe(factory, who, sizeof(who));
                FacLog("FactoryClose [DRY]: автозакрытие: [%s] фабрика %p, стейт %p, уровень %d, дней убытка %d (порог %d), деньги %.0f",
                    who, factory, *(void**)(f + FAC_OFF_STATE), *(int*)(f + FAC_OFF_LEVEL), loss, days,
                    FacMoneyShown(*(long long*)(f + FAC_OFF_MONEY)));
            }
            return 0;
        }

        FacDescribe(factory, who, sizeof(who));
        FacLog("FactoryClose: автозакрытие: [%s] фабрика %p, стейт %p, уровень %d, дней убытка %d (порог %d)",
            who, factory, *(void**)(f + FAC_OFF_STATE), *(int*)(f + FAC_OFF_LEVEL), loss, days);

        *(f + FAC_OFF_CLOSED) = 1;
        *(int*)(f + FAC_OFF_LOSS_DAYS) = 0;
        g_facCloseReason = "автозакрытие";
        CallFactoryCloseVanilla(factory);
        g_facCloseReason = "ручное закрытие";
        return 1;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        g_facCloseReason = "ручное закрытие";
        return 0;
    }
}

// Вход FUN_004F5750: 55 8B EC 83 EC 0C (ESI = фабрика).
__declspec(naked) static void FactoryCloseThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xc
        pushad
        push esi
        call FactoryClosePayoutHook
        add esp, 4
        popad
        jmp dword ptr [g_facCloseResume]
    }
}

// Вход FUN_004F50C0: 55 8B EC 80 B8 80 01 00 00 00 (EAX = фабрика, [ebp+8] = arg).
__declspec(naked) static void FactoryCounterThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        pushad
        push dword ptr [ebp + 8]
        push eax
        call FactoryCounterObserve
        add esp, 8
        popad
        cmp byte ptr [eax + 0x180], 0
        jmp dword ptr [g_facCounterResume]
    }
}

// Встроенный "inc dword ptr [ebx+0x184]" в FUN_00482FF0 (EBX = фабрика).
__declspec(naked) static void FactoryCounterInlineThunk()
{
    __asm {
        pushad
        push ebx
        call FactoryInlineCounterObserve
        add esp, 4
        popad
        inc dword ptr [ebx + 0x184]
        jmp dword ptr [g_facCounterInlineResume]
    }
}

// Вход FUN_004F4B30: 55 8B EC 83 E4 F8; [ebp+8] = фабрика; ret 0x20.
__declspec(naked) static void FactoryFinanceThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0xfffffff8
        pushad
        push dword ptr [ebp + 8]
        call FactoryAutoCloseCheck
        add esp, 4
        mov dword ptr [esp + 28], eax
        popad
        test eax, eax
        jnz skip
        jmp dword ptr [g_facFinanceResume]
    skip:
        mov esp, ebp
        pop ebp
        ret 0x20
    }
}

static bool InstallFactoryClose()
{
    EnsureV2dllDefines();

    g_ownerPayoutAddr = g_base + RVA_OWNER_PAYOUT;
    g_facCloseFnAddr  = g_base + RVA_FACTORY_CLOSE;

    static const unsigned char PAYOUT_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x48 };
    if (memcmp((const void*)(DWORD_PTR)g_ownerPayoutAddr, PAYOUT_SIG, sizeof(PAYOUT_SIG)) != 0)
    {
        Log("FactoryClose: сигнатура FUN_004CFE20 не совпала - не патчим");
        return false;
    }

    bool closeOk = false, counterOk = false, inlineOk = false, financeOk = false;

    if (g_settings.patchFactoryClosePayout)
    {
        static const unsigned char CLOSE_SIG[6]    = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x0C };
        static const unsigned char CLOSE_RESUME[6] = { 0x8B, 0x86, 0x10, 0x02, 0x00, 0x00 };
        g_facCloseResume = g_base + RVA_FACTORY_CLOSE_RESUME;
        closeOk = WriteJmpSite(RVA_FACTORY_CLOSE, CLOSE_SIG, sizeof(CLOSE_SIG), 6,
            RVA_FACTORY_CLOSE_RESUME, CLOSE_RESUME, sizeof(CLOSE_RESUME),
            (void*)&FactoryCloseThunk, "FactoryClose(закрытие)");

        static const unsigned char CNT_SIG[10]    = { 0x55, 0x8B, 0xEC, 0x80, 0xB8, 0x80, 0x01, 0x00, 0x00, 0x00 };
        static const unsigned char CNT_RESUME[2]  = { 0x75, 0x23 };
        g_facCounterResume = g_base + RVA_FACTORY_COUNTER_RESUME;
        counterOk = WriteJmpSite(RVA_FACTORY_COUNTER, CNT_SIG, sizeof(CNT_SIG), 10,
            RVA_FACTORY_COUNTER_RESUME, CNT_RESUME, sizeof(CNT_RESUME),
            (void*)&FactoryCounterThunk, "FactoryClose(счётчик)");

        static const unsigned char INL_SIG[6]    = { 0xFF, 0x83, 0x84, 0x01, 0x00, 0x00 };
        static const unsigned char INL_RESUME[3] = { 0x8B, 0x43, 0x20 };
        g_facCounterInlineResume = g_base + RVA_FACTORY_COUNTER_INLINE_RESUME;
        inlineOk = WriteJmpSite(RVA_FACTORY_COUNTER_INLINE, INL_SIG, sizeof(INL_SIG), 6,
            RVA_FACTORY_COUNTER_INLINE_RESUME, INL_RESUME, sizeof(INL_RESUME),
            (void*)&FactoryCounterInlineThunk, "FactoryClose(встроенный счётчик)");
    }

    if (g_settings.patchFactoryAutoClose)
    {
        static const unsigned char FIN_SIG[6]    = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
        static const unsigned char FIN_RESUME[6] = { 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00 };
        g_facFinanceResume = g_base + RVA_FACTORY_FINANCE_RESUME;
        financeOk = WriteJmpSite(RVA_FACTORY_FINANCE, FIN_SIG, sizeof(FIN_SIG), 6,
            RVA_FACTORY_FINANCE_RESUME, FIN_RESUME, sizeof(FIN_RESUME),
            (void*)&FactoryFinanceThunk, "FactoryClose(финансы)");
    }

    Log("FactoryClose: установлен (выплата при закрытии=%d, остановка по счётчику=%d/%d, автозакрытие=%d, порог %d дн.)%s",
        (int)closeOk, (int)counterOk, (int)inlineOk, (int)financeOk, g_defFactoryCloseDays,
        g_settings.factoryCloseDryRun ? " - РЕЖИМ DRY RUN: только лог [DRY], ничего не меняется (FACTORY_CLOSE_DRY_RUN=0 включает)" : "");
    return closeOk || counterOk || inlineOk || financeOk;
}

// Смещения структур движка, общие для PATCH_AI_EXPAND_STAFFING и PATCH_FACTORY_MIN_WAGE.
static const int FAC_OFF_EMPLOYEES = 0x128;   // занятые рабочие фабрики
static const int TYPE_OFF_DEF      = 0x12C;   // тип фабрики -> definition
static const int DEF_OFF_WORKFORCE = 0x128;   // definition -> workforce (на один уровень)

static int FacWorkforceOf(unsigned char* f)
{
    unsigned char* type = *(unsigned char**)(f + FAC_OFF_TYPE);
    if (!type)
        return 0;
    unsigned char* def = *(unsigned char**)(type + TYPE_OFF_DEF);
    if (!def)
        return 0;
    return *(int*)(def + DEF_OFF_WORKFORCE);
}

// ---------------------------------------------------------------
// PATCH_AI_EXPAND_STAFFING: ИИ-страна не расширяет недоукомплектованные
// фабрики.
//
// FUN_008569a0 (экономика ИИ, раз в 10-26 дней на страну) -> FUN_00858670
// выбирает тип (FUN_00857430, лучший по FUN_008571A0) и регион
// (FUN_00857530) и создаёт команду расширения (FUN_0057C130), проверяя
// только деньги страны. Оценка региона в FUN_00857530 учитывает долю
// безработных ВО ВСЁМ НАСЕЛЕНИИ региона, а не число свободных
// ремесленников, поэтому самый прибыльный тип достраивается без рабочих
// (в сохранении 1840 г.: construction_goods_factory до 14 ур. при
// занятости 0-3 %). Капиталисты (FUN_004A75B0) ванильно требуют ~90 %.
//
// Хук: кандидат-расширение в цикле по регионам FUN_00857530,
// 0x857614 `cmp dword ptr [ecx+0x17C],0` (ECX = существующая фабрика типа,
// EBX = регион) + `jne 0x857783` (пропустить регион). Если занятость ниже
// ai_factory_expand_min_staffing %, прыгаем на 0x857783 - как будто
// расширять нельзя, и ИИ выберет другой регион (новую фабрику не трогаем).
// ---------------------------------------------------------------

static const DWORD RVA_AI_EXPAND_CAND        = 0x457614;
static const DWORD RVA_AI_EXPAND_CAND_RESUME = 0x45761B;
static const DWORD RVA_AI_EXPAND_CAND_SKIP   = 0x457783;
static DWORD g_aiExpandResume = 0;
static DWORD g_aiExpandSkip   = 0;

static int __cdecl AiExpandAllowed(void* factory)
{
    int minPct = g_defAiExpandMinStaffing;
    if (!g_settings.patchAiExpandStaffing || minPct <= 0)
        return 1;
    __try
    {
        unsigned char* f = (unsigned char*)factory;
        int level = *(int*)(f + FAC_OFF_LEVEL);
        long long maxEmp = (long long)FacWorkforceOf(f) * level;
        if (level <= 0 || maxEmp <= 0)
            return 1;
        long long emp = *(int*)(f + FAC_OFF_EMPLOYEES);
        return emp * 100 >= maxEmp * minPct ? 1 : 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 1;
    }
}

__declspec(naked) static void AiExpandCandThunk()
{
    __asm {
        pushad
        push ecx
        call AiExpandAllowed
        add esp, 4
        test eax, eax
        popad
        jz blocked
        cmp dword ptr [ecx + 0x17c], 0
        jmp dword ptr [g_aiExpandResume]
    blocked:
        jmp dword ptr [g_aiExpandSkip]
    }
}

static bool InstallAiExpandStaffing()
{
    EnsureV2dllDefines();
    static const unsigned char SIG[7]    = { 0x83, 0xB9, 0x7C, 0x01, 0x00, 0x00, 0x00 };
    static const unsigned char RESUME[6] = { 0x0F, 0x85, 0x62, 0x01, 0x00, 0x00 };
    g_aiExpandResume = g_base + RVA_AI_EXPAND_CAND_RESUME;
    g_aiExpandSkip   = g_base + RVA_AI_EXPAND_CAND_SKIP;
    bool ok = WriteJmpSite(RVA_AI_EXPAND_CAND, SIG, sizeof(SIG), 7,
        RVA_AI_EXPAND_CAND_RESUME, RESUME, sizeof(RESUME),
        (void*)&AiExpandCandThunk, "AiExpand(кандидат)");
    Log("AiExpand: %s (порог занятости %d%%, 0 = выкл; ai_factory_expand_min_staffing в common\\defines_v2dll.txt)",
        ok ? "установлен" : "НЕ установлен", g_defAiExpandMinStaffing);
    return ok;
}

// ---------------------------------------------------------------
// PATCH_AI_NAVAL_BASE_LIMIT: ИИ-страна закладывает морские базы не более
// чем в ai_naval_base_max_provinces_per_state провинциях региона (по
// умолчанию в одной). Улучшение уже построенной базы не ограничено.
//
// Постройку зданий провинции (железная дорога, форт, морская база) у ИИ
// выбирают FUN_008577b0 (здание в запросе +0x80) и FUN_008580e0 (+0x78): они
// перебирают провинции страны и берут ту, где FUN_00511ef0 ("можно ли
// строить", EAX = тип здания, стек: страна, провинция, 5 флагов, ret 0x1C)
// вернула true, оценивая только деньги и расстояние до столицы. Ограничения
// "одна на регион" у морской базы нет, поэтому ИИ ставит базы в каждой
// портовой провинции региона. Три call'а в этих функциях (0x857983,
// 0x857D02, 0x858282) идут через AiCanBuildThunk: для морской базы (имя
// здания naval_base), если в этой провинции базы ещё нет (уровень 0), считаем
// ДРУГИЕ провинции региона (+0x188 -> вектор id +0x48..0x4C), где уровень
// базы >= 1 (int в тысячных по индексу CBuilding+0x134 в векторе зданий
// провинции +0x118) или стоит в очереди постройка этой базы (список
// провинции +0xD8; элемент: vtable+0x30 - "это постройка здания провинции",
// +0x58 - тип, как в FUN_00512150). Если таких >= лимита - возвращаем 0, и
// ИИ выбирает другую провинцию. Провинция, где база уже есть, проходит (это
// улучшение). Игрок и капиталисты идут другими путями и не затронуты.
// ---------------------------------------------------------------

static const DWORD RVA_AI_CANBUILD_FN       = 0x111EF0;   // FUN_00511EF0
static const DWORD RVA_AI_CANBUILD_SITES[3] = { 0x457983, 0x457D02, 0x458282 };
static const int   PROV_OFF_STATE           = 0x188;
static const int   STATE_OFF_PROV_IDS       = 0x48;       // vector<int> id провинций региона
static const int   PROV_OFF_CONSTRUCTIONS   = 0xD8;       // односвязный список строек
static const int   CONSTR_OFF_BUILDING      = 0x58;
static const int   CONSTR_VSLOT_IS_PROVBLD  = 0x30;
static DWORD g_aiCanBuildOrig = 0;

typedef char (__thiscall *tConstrIsProvBuilding)(void*);

static int __cdecl AiBuildBlocked(void* building, void* country, void* province)
{
    int limit = g_defAiNavalBaseMax;
    if (limit <= 0 || !building || !province)
        return 0;
    __try
    {
        char* b = (char*)building;
        if (*(unsigned char*)(b + OFF_BUILDING_IS_PROVINCE) == 0)
            return 0;
        if (_stricmp(GStrText(b + OFF_BUILDING_NAME), "naval_base") != 0)
            return 0;
        int idx = *(int*)(b + OFF_BUILDING_PROV_INDEX);
        if (idx < 0 || idx > 255)
            return 0;

        char* session = *(char**)(g_base + RVA_WORLD_PTR);
        char** provs = session ? *(char***)(session + OFF_SESSION_PROVINCES) : 0;
        char* state = *(char**)((char*)province + PROV_OFF_STATE);
        if (!provs || !state)
            return 0;
        int* ids = *(int**)(state + STATE_OFF_PROV_IDS);
        int* idsEnd = *(int**)(state + STATE_OFF_PROV_IDS + 4);
        if (!ids || idsEnd < ids || (idsEnd - ids) > 512)
            return 0;

        // Провинции региона с базой (уровень >= 1) или с базой в очереди;
        // сама проверяемая провинция считается отдельно: если база в ней уже
        // есть, это улучшение - пропускаем без ограничений.
        int others = 0;
        for (int* p = ids; p < idsEnd; ++p)
        {
            if ((unsigned)*p >= 20000)
                continue;
            char* pr = provs[*p];
            if (!pr)
                continue;

            bool has = false;
            char** vb = *(char***)(pr + OFF_PROVINCE_BUILDINGS);
            char** ve = *(char***)(pr + OFF_PROVINCE_BUILDINGS + 4);
            if (vb && ve >= vb && idx < (int)(ve - vb) && vb[idx] &&
                *(int*)(vb[idx] + OFF_PBUILDING_LEVEL) >= 1000)
                has = true;

            if (!has)
            {
                int guard = 0;
                for (int* n = *(int**)(pr + PROV_OFF_CONSTRUCTIONS); n && guard < 64; n = (int*)n[2], ++guard)
                {
                    char* o = (char*)n[0];
                    if (!o)
                        break;
                    tConstrIsProvBuilding fn = (tConstrIsProvBuilding)(*(void***)o)[CONSTR_VSLOT_IS_PROVBLD / 4];
                    if (fn(o) && *(char**)(o + CONSTR_OFF_BUILDING) == b)
                    {
                        has = true;
                        break;
                    }
                }
            }

            if (pr == (char*)province)
            {
                if (has)
                    return 0;       // улучшение базы (или уже заложена) - не наше дело
                continue;
            }
            if (has)
                ++others;
        }
        if (others < limit)
            return 0;

        static LONG s_logged = 0;
        if (InterlockedIncrement(&s_logged) <= 5)
            LogDbg("AiNavalLimit: страна %p, провинция %p - в регионе баз уже в %d провинциях (лимит %d), ИИ не закладывает новую",
                country, province, others, limit);
        return 1;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

// Контракт FUN_00511EF0: EAX = здание, стек: страна, провинция, ... (ret 0x1C).
// ECX после popad = результат хука (в оригинале ECX - временный регистр).
__declspec(naked) static void AiCanBuildThunk()
{
    __asm {
        pushad
        push dword ptr [esp + 0x28]
        push dword ptr [esp + 0x28]
        push eax
        call AiBuildBlocked
        add esp, 12
        mov dword ptr [esp + 0x18], eax
        popad
        test ecx, ecx
        jnz blocked
        jmp dword ptr [g_aiCanBuildOrig]
    blocked:
        xor eax, eax
        ret 0x1c
    }
}

static bool InstallAiNavalBaseLimit()
{
    EnsureV2dllDefines();
    g_aiCanBuildOrig = g_base + RVA_AI_CANBUILD_FN;

    static const unsigned char PROLOGUE[4] = { 0x55, 0x8B, 0xEC, 0x53 };
    if (memcmp((void*)g_aiCanBuildOrig, PROLOGUE, sizeof(PROLOGUE)) != 0)
    {
        Log("AiNavalLimit: FUN_00511EF0 не совпала по прологу - не установлен");
        return false;
    }

    int done = 0;
    for (int i = 0; i < 3; ++i)
    {
        unsigned char* call = (unsigned char*)(g_base + RVA_AI_CANBUILD_SITES[i]);
        DWORD expectRel = g_aiCanBuildOrig - ((DWORD)(DWORD_PTR)call + 5);
        if (call[0] != 0xE8 || *(DWORD*)(call + 1) != expectRel)
        {
            Log("AiNavalLimit: сигнатура call не совпала rva %06X (%02X %02X %02X %02X %02X)",
                RVA_AI_CANBUILD_SITES[i], call[0], call[1], call[2], call[3], call[4]);
            continue;
        }
        DWORD rel = (DWORD)(DWORD_PTR)&AiCanBuildThunk - ((DWORD)(DWORD_PTR)call + 5);
        DWORD oldProtect = 0;
        if (!VirtualProtect(call + 1, 4, PAGE_EXECUTE_READWRITE, &oldProtect))
            continue;
        *(DWORD*)(call + 1) = rel;
        VirtualProtect(call + 1, 4, oldProtect, &oldProtect);
        ++done;
    }
    Log("AiNavalLimit: подменено call'ов %d из 3 (провинций с базой в регионе для ИИ: %d, 0 = выкл; "
        "ai_naval_base_max_provinces_per_state в common\\defines_v2dll.txt)", done, g_defAiNavalBaseMax);
    return done > 0;
}

// ---------------------------------------------------------------
// PATCH_FACTORY_MIN_WAGE: фиксированный минимум зарплаты на 10000 работников.
//
// Карта (Ghidra + дизассемблер, подробно в PATCHES.md 4.11): в FUN_004F4B30
// зарплата работников X = (есть владельцы-капиталисты в регионе) ?
// max(L, прибыльная_доля/2) : прибыльная_доля, где L = min(деньги, W *
// minimum_wage * эффективность) - минимум движка. Прибыльная_доля =
// 0.85 * (деньги/потолок) * max(0, выручка - вчерашние закупки), и 0, пока
// денег меньше 7 дневных закупок. Платёж идёт через FUN_004EF240 и
// списывается с денег фабрики без нижней границы; X <= 0 - не платится.
//
// Хук: VA 0x4F4F6F (8 байт `sub edi,eax / sbb esi,edx / xorpd xmm0,xmm0`),
// на входе EDX:EAX = X (итоговая зарплата), EDI:ESI = прибыльная_доля,
// EBX = фабрика. Подменяем X на max(X, min(минимум, деньги фабрики)), дальше
// код сам вычтет X из доли владельцев и заплатит работникам. Минимум платится
// только из денег фабрики (баланс не уходит в минус; в 5.26 уходил, и закупки
// сырья FUN_00482FF0 падали на делении на ноль при отрицательных деньгах и
// нулевой стоимости закупок, VA 0x483461). Минимум = ставка * работники / 10000
// фунтов; работники = занятые из записей employment (фабрика+0xF0..0xF4,
// запись 16 байт: pop +8, число +0xC), без рабов (тип+0x3D9) и без попов
// типа владельцев (definition+0xF0), не больше суммы занятых (+0x128).
// Деньги: 1 фунт = 32768000 внутренних единиц (отображаемое * 1000 * 32768).
// ---------------------------------------------------------------

static const DWORD RVA_MIN_WAGE_SITE   = 0xF4F6F;
static const DWORD RVA_MIN_WAGE_RESUME = 0xF4F77;
static const int FAC_OFF_EMP_VEC_BEGIN = 0xF0;
static const int FAC_OFF_EMP_VEC_END   = 0xF4;
static const int EMP_REC_OFF_POP       = 0x8;
static const int EMP_REC_OFF_COUNT     = 0xC;
static const int POP_OFF_POPTYPE       = 0x68;
static const int POPTYPE_OFF_IS_SLAVE  = 0x3D9;
static const int DEF_OFF_OWNER_POPTYPE = 0xF0;

static DWORD g_minWageResume  = 0;

// Минимум зарплаты фабрики БЕЗ ограничения её деньгами, во внутренних единицах;
// 0 - нет работников. Вызывать внутри __try.
static long long FacMinWageRaw(unsigned char* f)
{
    unsigned char* beg = *(unsigned char**)(f + FAC_OFF_EMP_VEC_BEGIN);
    unsigned char* end = *(unsigned char**)(f + FAC_OFF_EMP_VEC_END);
    int recs = (int)((end - beg) >> 4);
    if (!beg || recs <= 0 || recs > 4096)
        return 0;

    unsigned char* type = *(unsigned char**)(f + FAC_OFF_TYPE);
    unsigned char* def = type ? *(unsigned char**)(type + TYPE_OFF_DEF) : 0;
    unsigned char* ownerType = def ? *(unsigned char**)(def + DEF_OFF_OWNER_POPTYPE) : 0;

    long long n = 0;
    for (int i = 0; i < recs; ++i)
    {
        unsigned char* rec = beg + i * 16;
        unsigned char* pop = *(unsigned char**)(rec + EMP_REC_OFF_POP);
        if (!pop)
            continue;
        unsigned char* pt = *(unsigned char**)(pop + POP_OFF_POPTYPE);
        if (!pt || pt == ownerType || *(pt + POPTYPE_OFF_IS_SLAVE))
            continue;
        int c = *(int*)(rec + EMP_REC_OFF_COUNT);
        if (c > 0)
            n += c;
    }
    long long total = *(int*)(f + FAC_OFF_EMPLOYEES);
    if (total > 0 && n > total)
        n = total;
    if (n <= 0)
        return 0;
    return (long long)g_defMinWageMilli * n * 32768 / 10000;
}

static long long __cdecl FactoryMinWageAdjust(void* factory, unsigned int lo, int hi)
{
    long long x = ((long long)hi << 32) | (unsigned long long)lo;
    if (!g_settings.patchFactoryMinWage || g_defMinWageMilli <= 0)
        return x;
    __try
    {
        unsigned char* f = (unsigned char*)factory;
        long long minRaw = FacMinWageRaw(f);
        if (minRaw <= 0)
            return x;

        // Только из денег самой фабрики: баланс не уходит в минус. (В 5.26 минимум
        // шёл в долг, и закупки сырья FUN_00482FF0 падали на делении бюджета на
        // нулевую стоимость при отрицательных деньгах - VA 0x483461.)
        long long money = *(long long*)(f + FAC_OFF_MONEY);
        if (money <= 0)
            return x;
        if (minRaw > money)
            minRaw = money;

        return minRaw > x ? minRaw : x;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return x;
    }
}

__declspec(naked) static void FactoryMinWageThunk()
{
    __asm {
        pushad
        push edx
        push eax
        push ebx
        call FactoryMinWageAdjust
        add esp, 12
        mov dword ptr [esp + 28], eax
        mov dword ptr [esp + 20], edx
        popad
        sub edi, eax
        sbb esi, edx
        xorpd xmm0, xmm0
        jmp dword ptr [g_minWageResume]
    }
}

// Цель субсидии. В FUN_004F4B30 бюджет фабрики B = закупки_за_день * 1000 +
// 0.2 * W (VA 0x4F4BC4-0x4F4C14, итог ESI(lo):EAX(hi)); если фабрика
// субсидируется (+0x180) и деньги < B, государство доливает B - деньги. Без
// поправки минимум зарплаты, выплаченный из этих денег, урезал бы закупки
// сырья субсидируемой фабрики на следующий день (производство падало, а
// расход государства на субсидии начинал колебаться). Для субсидируемых
// фабрик прибавляем к B минимум зарплаты (то, что фабрика сейчас заплатит),
// так что после выплаты на закупки остаётся прежняя цель.
static const DWORD RVA_MIN_WAGE_BUDGET_SITE   = 0xF4C0E;
static const DWORD RVA_MIN_WAGE_BUDGET_RESUME = 0xF4C16;
static DWORD g_minWageBudgetResume = 0;

static long long __cdecl FactoryMinWageBudgetExtra(void* factory)
{
    if (!g_settings.patchFactoryMinWage || g_defMinWageMilli <= 0)
        return 0;
    __try
    {
        unsigned char* f = (unsigned char*)factory;
        if (*(f + FAC_OFF_SUBSIDY) == 0 || *(f + FAC_OFF_CLOSED) != 0 || *(int*)(f + FAC_OFF_LEVEL) <= 0)
            return 0;
        long long minRaw = FacMinWageRaw(f);
        return minRaw > 0 ? minRaw : 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

// VA 0x4F4C0E: add esi,[esp+0x28] / mov eax,edx / adc eax,edi (8 байт); дальше xor edi,edi.
// ESI:EAX = B. ECX/EDX после этого места не живы (перезаписываются ниже).
__declspec(naked) static void FactoryMinWageBudgetThunk()
{
    __asm {
        add esi, dword ptr [esp + 0x28]
        mov eax, edx
        adc eax, edi
        pushad
        push ebx
        call FactoryMinWageBudgetExtra
        add esp, 4
        mov dword ptr [esp + 20], edx
        mov dword ptr [esp + 24], eax
        popad
        add esi, ecx
        adc eax, edx
        jmp dword ptr [g_minWageBudgetResume]
    }
}

static bool InstallFactoryMinWage()
{
    EnsureV2dllDefines();
    static const unsigned char SIG[8]    = { 0x2B, 0xF8, 0x1B, 0xF2, 0x66, 0x0F, 0x57, 0xC0 };
    static const unsigned char RESUME[6] = { 0x66, 0x0F, 0x13, 0x44, 0x24, 0x40 };
    g_minWageResume = g_base + RVA_MIN_WAGE_RESUME;
    bool ok = WriteJmpSite(RVA_MIN_WAGE_SITE, SIG, sizeof(SIG), 8,
        RVA_MIN_WAGE_RESUME, RESUME, sizeof(RESUME),
        (void*)&FactoryMinWageThunk, "FactoryMinWage");

    static const unsigned char BSIG[8]    = { 0x03, 0x74, 0x24, 0x28, 0x8B, 0xC2, 0x13, 0xC7 };
    static const unsigned char BRESUME[4] = { 0x33, 0xFF, 0x39, 0xBB };
    g_minWageBudgetResume = g_base + RVA_MIN_WAGE_BUDGET_RESUME;
    bool okBudget = WriteJmpSite(RVA_MIN_WAGE_BUDGET_SITE, BSIG, sizeof(BSIG), 8,
        RVA_MIN_WAGE_BUDGET_RESUME, BRESUME, sizeof(BRESUME),
        (void*)&FactoryMinWageBudgetThunk, "FactoryMinWage(цель субсидии)");

    Log("FactoryMinWage: %s, цель субсидии %s (минимум %d.%03d в день на 10000 работников, 0 = выкл; factory_min_wage_per_10000 в common\\defines_v2dll.txt)",
        ok ? "установлен" : "НЕ установлен", okBudget ? "установлена" : "НЕ установлена",
        g_defMinWageMilli / 1000, g_defMinWageMilli % 1000);
    return ok || okBudget;
}

// ---------------------------------------------------------------
// DestroyCmdNullCheck (5.34): вылет в проверке команды "снести здание".
//
// FUN_0057CFD0 (проверка CDestroyStateBuildingCommand; создают её ИИ в
// FUN_008569a0 - удаление закрытых фабрик - и кнопка интерфейса) ищет регион
// по ключу (state+8, state+0xC), записанному в команду, в списке регионов
// страны (country+0xE44). Если ключ региона изменился между созданием и
// проверкой команды (граница региона сдвинулась), регион не найден, EDI = 0, и
// VA 0x57D01F `mov edx,[edi+0x58]` падает (краш 2026-10-08 16:42, v5.33:
// ключ в команде (0x2F,0x48D), у региона (0x2F,0x48F)). Хук: если EDI = 0,
// прыгаем на штатный возврат "команда недопустима" (0x57D052: pop edi/esi/ebx,
// xor al,al, ret), как у других отказов.
// ---------------------------------------------------------------

static const DWORD RVA_DESTROY_CMD_SITE   = 0x17D01F;
static const DWORD RVA_DESTROY_CMD_RESUME = 0x17D025;
static const DWORD RVA_DESTROY_CMD_REJECT = 0x17D052;
static DWORD g_destroyCmdResume = 0;
static DWORD g_destroyCmdReject = 0;

__declspec(naked) static void DestroyCmdNullThunk()
{
    __asm {
        test edi, edi
        jz reject
        mov edx, dword ptr [edi + 0x58]
        mov eax, dword ptr [edi + 0x5C]
        jmp dword ptr [g_destroyCmdResume]
    reject:
        jmp dword ptr [g_destroyCmdReject]
    }
}

static bool InstallDestroyCmdNullCheck()
{
    static const unsigned char SIG[6]    = { 0x8B, 0x57, 0x58, 0x8B, 0x47, 0x5C };
    static const unsigned char RESUME[4] = { 0x89, 0x54, 0x24, 0x18 };
    static const unsigned char REJECT[4] = { 0x5F, 0x5E, 0x32, 0xC0 };
    if (memcmp((const void*)(DWORD_PTR)(g_base + RVA_DESTROY_CMD_REJECT), REJECT, sizeof(REJECT)) != 0)
    {
        Log("DestroyCmdNullCheck: сигнатура возврата 0x57D052 не совпала - не патчим");
        return false;
    }
    g_destroyCmdResume = g_base + RVA_DESTROY_CMD_RESUME;
    g_destroyCmdReject = g_base + RVA_DESTROY_CMD_REJECT;
    bool ok = WriteJmpSite(RVA_DESTROY_CMD_SITE, SIG, sizeof(SIG), 6,
        RVA_DESTROY_CMD_RESUME, RESUME, sizeof(RESUME),
        (void*)&DestroyCmdNullThunk, "DestroyCmdNullCheck");
    return ok;
}

// ---------------------------------------------------------------
// PATCH_NEEDS_HONEST_UI (5.41): "честное" отображение выполнения потребностей попа.
//
// Только отображение, симуляция не затрагивается. Как устроено в движке:
//  * FUN_00485390 (на каждый поп и класс 0 жизненные/1 повседневные/2 роскошь) считает долю
//    попа pop+0x130/0x138/0x140 = доступность товаров x min(1, деньги попа / стоимость набора)
//    и платит эти деньги в ОБЩИЙ пул денег типа попа страны (запись "страна x тип", шаг 0x78);
//  * FUN_00485960 (на запись и класс) покупает товары на деньги пула; классы идут по очереди
//    0,1,2 из одного пула. Если пула не хватает на весь набор класса (масштаб запись+0x00+cls*8
//    x стоимость набора запись+0x60+cls*8 / 1000), закупается лишь пул/стоимость часть.
// Поэтому у богатого попа (Вена, 100 тыс. ремесленников) на экране роскошь 100%, хотя пул типа
// уже съеден нижними классами и реально купленная доля роскоши ~0.
//
// Здесь: в FUN_00485390 запоминаем запись попа (поп -> запись), на входе FUN_00485960 считаем
// фактическое покрытие F = min(1, пул / (масштаб x стоимость набора / 1000)) и кладём его по
// записи и классу. Показываемая доля = сохранённая доля x F. Подменяются только чтения для
// экрана: три подсказки попа (FUN_0095CE10/0095D3A0/0095D930, место, где берётся доля для
// процентов) и полоски потребностей окна попа (FUN_00981220). Поля попа не меняются, так что
// воинственность/сознание и всё прочее считаются как в оригинале. Пока за текущую сессию не было
// ни одного дневного расчёта (сразу после загрузки), показывается оригинальное значение.
// ---------------------------------------------------------------

static const DWORD RVA_NEEDS_PURCHASE         = 0x85960;   // FUN_00485960
static const DWORD RVA_NEEDS_PURCHASE_RESUME  = 0x85966;
static const DWORD RVA_NEEDS_POP_STEP         = 0x85390;   // FUN_00485390
static const DWORD RVA_NEEDS_POP_STEP_RESUME  = 0x85396;
static const DWORD RVA_HONEST_TIP_LIFE        = 0x55CEF8;  // FUN_0095CE10: mov eax,[ecx+0x130]; mov ecx,[ecx+0x134]
static const DWORD RVA_HONEST_TIP_EVERYDAY    = 0x55D488;  // FUN_0095D3A0: ... +0x138 / +0x13C
static const DWORD RVA_HONEST_TIP_LUXURY      = 0x55DA18;  // FUN_0095D930: ... +0x140 / +0x144
static const DWORD RVA_HONEST_POPWIN          = 0x5820B8;  // FUN_00981220: mov [ebp-0xA0],edx (после чтения долей в локалы)
static const DWORD RVA_HONEST_POPWIN_RESUME   = 0x5820BE;
static const DWORD RVA_HONEST_POPLIST         = 0x3BB105;  // FUN_007BA410 (строка списка попов, стаканы): mov [ebp-0xA0],eax; EDI = поп
static const DWORD RVA_HONEST_POPLIST_RESUME  = 0x3BB10B;

static DWORD g_needsPurchaseResume = 0;
static DWORD g_needsPopStepResume  = 0;
static DWORD g_honestTipLifeResume = 0, g_honestTipEverydayResume = 0, g_honestTipLuxuryResume = 0;
static DWORD g_honestPopWinResume  = 0;
static DWORD g_honestPopListResume = 0;

// поп -> запись "страна x тип": открытая адресация, ключ - указатель попа.
struct HonestPopSlot { unsigned char* pop; unsigned char* rec; };
static const int HONEST_POP_BITS = 19;
static HonestPopSlot g_honestPop[1 << HONEST_POP_BITS];

// запись -> фактическое покрытие по классам (фикс. 15, 32768 = 100%).
struct HonestRecSlot { unsigned char* rec; long long f[3]; bool poolless; };
static const int HONEST_REC_BITS = 14;
static HonestRecSlot g_honestRec[1 << HONEST_REC_BITS];

static inline unsigned HonestHash(unsigned char* p, int bits)
{
    return (((unsigned)(DWORD_PTR)p >> 3) * 2654435761u) >> (32 - bits);
}

static void __cdecl HonestPopStep(unsigned char* pop, unsigned char* frame)
{
    __try
    {
        unsigned char* rec = *(unsigned char**)(frame + 0xC);
        if (!pop || !rec)
            return;
        unsigned h = HonestHash(pop, HONEST_POP_BITS);
        for (int i = 0; i < 64; ++i, h = (h + 1) & ((1u << HONEST_POP_BITS) - 1))
        {
            if (g_honestPop[h].pop == pop || !g_honestPop[h].pop)
            {
                g_honestPop[h].pop = pop;
                g_honestPop[h].rec = rec;
                return;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

static void __cdecl HonestPurchase(unsigned char* rec, unsigned char* frame)
{
    __try
    {
        // Стек: [8] рынок, [0xC] указатель на пул денег, [0x10] страна, [0x14] список нужд,
        // [0x18] класс, [0x1C] флаг покупки.
        unsigned char* pool = *(unsigned char**)(frame + 0xC);
        int cls = *(int*)(frame + 0x18);
        bool buying = *(unsigned char*)(frame + 0x1C) != 0;
        if (!rec || !pool || cls < 0 || cls > 2)
            return;
        // Расчётный проход тоже вызывает закупку, но пулы ещё пусты. Оставляем данные
        // последнего покупочного прохода, иначе ложный "poolless" может получить любой тип.
        if (!buying)
            return;
        double scale = (double)*(long long*)(rec + cls * 8) / 32768.0;
        double setc  = (double)*(long long*)(rec + 0x60 + cls * 8) / 32768.0;
        double poolv = (double)*(long long*)pool / 32768.0;
        double cost  = scale * setc / 1000.0;
        double f = 1.0;
        if (cost > 0.0)
            f = (poolv <= 0.0) ? 0.0 : (poolv >= cost ? 1.0 : poolv / cost);
        // Часть типов (крестьяне, работники) имеет нулевой пул уже на первом классе, хотя
        // спрос и покупательная способность накоплены движком в rec+0x48. Такой aggregate
        // показатель = учтено / масштаб; именно он даёт фактическую долю типа по классу.
        // Пустой пул на 2-3 классе - обычное дело (его съели нижние классы).
        bool poollessNow = (cls == 0 && cost > 0.0 && poolv <= 0.0);
        long long accountedF[3] = { 32768, 32768, 32768 };
        if (poollessNow)
        {
            for (int i = 0; i < 3; ++i)
            {
                long long accounted = *(long long*)(rec + 0x48 + i * 8);
                long long recScale  = *(long long*)(rec + i * 8);
                double ratio = (recScale > 0) ? (double)accounted / (double)recScale : 1.0;
                if (ratio < 0.0) ratio = 0.0;
                if (ratio > 1.0) ratio = 1.0;
                accountedF[i] = (long long)(ratio * 32768.0 + 0.5);
            }
        }

        unsigned h = HonestHash(rec, HONEST_REC_BITS);
        for (int i = 0; i < 64; ++i, h = (h + 1) & ((1u << HONEST_REC_BITS) - 1))
        {
            HonestRecSlot& s = g_honestRec[h];
            if (s.rec == rec || !s.rec)
            {
                if (!s.rec)
                {
                    s.rec = rec;
                    s.f[0] = s.f[1] = s.f[2] = 32768;
                    s.poolless = false;
                }
                if (cls == 0)
                {
                    s.poolless = poollessNow;
                    if (poollessNow)
                    {
                        s.f[0] = accountedF[0];
                        s.f[1] = accountedF[1];
                        s.f[2] = accountedF[2];
                    }
                }
                if (s.poolless)
                    f = (double)s.f[cls] / 32768.0;
                s.f[cls] = (long long)(f * 32768.0);
                return;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

// Показываемая доля класса cls (0 жизненные, 1 повседневные, 2 роскошь) попа pop.
static long long __cdecl HonestFraction(unsigned char* pop, int cls)
{
    long long stored = 0;
    __try
    {
        stored = *(long long*)(pop + 0x130 + cls * 8);
        unsigned h = HonestHash(pop, HONEST_POP_BITS);
        unsigned char* rec = 0;
        for (int i = 0; i < 64; ++i, h = (h + 1) & ((1u << HONEST_POP_BITS) - 1))
        {
            if (g_honestPop[h].pop == pop) { rec = g_honestPop[h].rec; break; }
            if (!g_honestPop[h].pop) break;
        }
        if (!rec)
            return stored;
        h = HonestHash(rec, HONEST_REC_BITS);
        for (int i = 0; i < 64; ++i, h = (h + 1) & ((1u << HONEST_REC_BITS) - 1))
        {
            if (g_honestRec[h].rec == rec)
                return stored * g_honestRec[h].f[cls] / 32768;
            if (!g_honestRec[h].rec) break;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
    return stored;
}

// Окно попа: после того как три доли скопированы в локалы FUN_00981220 ([ebp-0x34] жизненные,
// [ebp-0x5C] повседневные, [ebp-0xA4] роскошь; по 8 байт), подменяем их честными.
static void __cdecl HonestPopWindow(unsigned char* pop, unsigned char* frameEbp)
{
    if (!pop)
        return;
    *(long long*)(frameEbp - 0x34) = HonestFraction(pop, 0);
    *(long long*)(frameEbp - 0x5C) = HonestFraction(pop, 1);
    *(long long*)(frameEbp - 0xA4) = HonestFraction(pop, 2);
}

// Список попов (FUN_007BA410): те же три доли скопированы в локалы ([ebp-0x18] жизненные,
// [ebp-0x58] повседневные, [ebp-0xA0] роскошь; по 8 байт) и дальше идут в стаканы (progress bar).
static void __cdecl HonestPopList(unsigned char* pop, unsigned char* frameEbp)
{
    if (!pop)
        return;
    *(long long*)(frameEbp - 0x18) = HonestFraction(pop, 0);
    *(long long*)(frameEbp - 0x58) = HonestFraction(pop, 1);
    *(long long*)(frameEbp - 0xA0) = HonestFraction(pop, 2);
}

// Вход FUN_00485960: 55 8B EC 83 EC 1C; дальше 53 8B 5D 18.
__declspec(naked) static void NeedsPurchaseThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1c
        pushad
        push ebp
        push eax
        call HonestPurchase
        add esp, 8
        popad
        jmp dword ptr [g_needsPurchaseResume]
    }
}

// Вход FUN_00485390: 55 8B EC 83 EC 40; дальше F6 05 <абс. адрес> (EAX = поп).
__declspec(naked) static void NeedsPopStepThunk()
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        pushad
        push ebp
        push eax
        call HonestPopStep
        add esp, 8
        popad
        jmp dword ptr [g_needsPopStepResume]
    }
}

// Подсказки попа: два mov (eax = младшая часть доли, ecx = старшая, ecx сначала = поп) заменены
// вызовом HonestFraction(поп, класс); edx сохраняется, остальное не затрагивается.
__declspec(naked) static void HonestTipLifeThunk()
{
    __asm {
        push edx
        push 0
        push ecx
        call HonestFraction
        add esp, 8
        mov ecx, edx
        pop edx
        jmp dword ptr [g_honestTipLifeResume]
    }
}

__declspec(naked) static void HonestTipEverydayThunk()
{
    __asm {
        push edx
        push 1
        push ecx
        call HonestFraction
        add esp, 8
        mov ecx, edx
        pop edx
        jmp dword ptr [g_honestTipEverydayResume]
    }
}

__declspec(naked) static void HonestTipLuxuryThunk()
{
    __asm {
        push edx
        push 2
        push ecx
        call HonestFraction
        add esp, 8
        mov ecx, edx
        pop edx
        jmp dword ptr [g_honestTipLuxuryResume]
    }
}

// Окно попа: заменённая команда mov [ebp-0xA0],edx; EAX = поп.
__declspec(naked) static void HonestPopWinThunk()
{
    __asm {
        mov dword ptr [ebp-0xA0], edx
        pushad
        push ebp
        push eax
        call HonestPopWindow
        add esp, 8
        popad
        jmp dword ptr [g_honestPopWinResume]
    }
}

// Список попов: заменённая команда mov [ebp-0xA0],eax; EDI = поп.
__declspec(naked) static void HonestPopListThunk()
{
    __asm {
        mov dword ptr [ebp-0xA0], eax
        pushad
        push ebp
        push edi
        call HonestPopList
        add esp, 8
        popad
        jmp dword ptr [g_honestPopListResume]
    }
}

// ---------------------------------------------------------------
// PATCH_FACTORY_PRIORITY_BY_RULE (5.44): автоприоритеты фабрик по правилу factory_priority.
//
// FUN_004808d0 (дневной проход по стейтам страны, ebx=страна из [esp+0x54]) читает правило
// RULE_DELETE_FACTORY_IF_NO_INPUT (страна+0xB18) в [esp+0x77] и, если оно включено, каждый день
// сам перезаписывает приоритет всех фабрик (state building +0x24 = (+0x128 < 1000) ? 1 : 0),
// из-за чего ручные приоритеты игрока сбрасываются. Правило factory_priority (страна+0xAF0) там
// не смотрят. Набор правил страны лежит в стране по +0xAA8 (CRulesSet: байт-флаг k-го правила
// по +0x18+8k; k=6 factory_priority, k=11 delete_factory_if_no_input).
// Хук вместо "cmp byte [esp+0x77],0" (5 байт, адрес 0x48155B): автоприоритет включён, только когда
// правило factory_priority = no. Остальное действие delete_factory_if_no_input (закрытие/удаление
// фабрик без сырья) не меняется. В ваниле обе настройки согласованы (priority=no <=> delete=yes),
// поэтому для них поведение прежнее.
// ---------------------------------------------------------------

static const DWORD RVA_PRIO_AUTO_SITE   = 0x8155B;
static const DWORD RVA_PRIO_AUTO_RESUME = 0x81560;
static const int   COUNTRY_OFF_RULE_PRIORITY = 0xAF0;
static DWORD g_prioAutoResume = 0;

// Результат - флаги: ZF=1 -> автоприоритет выключен ("je" в оригинале пропускает запись).
__declspec(naked) static void PrioAutoThunk()
{
    __asm {
        push eax
        mov eax, dword ptr [esp + 0x58]          // [esp+0x54] оригинала = страна
        cmp byte ptr [eax + 0xAF0], 0            // правило factory_priority
        pop eax
        je rule_no
        cmp esp, esp                             // priority = yes: ZF=1, автоприоритет не нужен
        jmp done
    rule_no:
        test esp, esp                            // priority = no: ZF=0, автоприоритет работает
    done:
        jmp dword ptr [g_prioAutoResume]
    }
}

static bool InstallPriorityByRule()
{
    static const unsigned char SIG[5]    = { 0x80, 0x7C, 0x24, 0x77, 0x00 };
    static const unsigned char RESUME[4] = { 0x8B, 0xF3, 0x8B, 0x9B };
    g_prioAutoResume = g_base + RVA_PRIO_AUTO_RESUME;
    return WriteJmpSite(RVA_PRIO_AUTO_SITE, SIG, sizeof(SIG), 5,
        RVA_PRIO_AUTO_RESUME, RESUME, sizeof(RESUME), (void*)&PrioAutoThunk, "FactoryPriorityByRule");
}

static bool InstallNeedsHonestUi()
{
    static const unsigned char SIG_PURCHASE[6]  = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x1C };
    static const unsigned char RES_PURCHASE[4]  = { 0x53, 0x8B, 0x5D, 0x18 };
    static const unsigned char SIG_POPSTEP[6]   = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x40 };
    static const unsigned char RES_POPSTEP[2]   = { 0xF6, 0x05 };   // дальше абсолютный адрес (релокация)
    static const unsigned char SIG_TIP_LIFE[12] = { 0x8B, 0x81, 0x30, 0x01, 0x00, 0x00, 0x8B, 0x89, 0x34, 0x01, 0x00, 0x00 };
    static const unsigned char SIG_TIP_EVD[12]  = { 0x8B, 0x81, 0x38, 0x01, 0x00, 0x00, 0x8B, 0x89, 0x3C, 0x01, 0x00, 0x00 };
    static const unsigned char SIG_TIP_LUX[12]  = { 0x8B, 0x81, 0x40, 0x01, 0x00, 0x00, 0x8B, 0x89, 0x44, 0x01, 0x00, 0x00 };
    static const unsigned char RES_TIP[4]       = { 0x89, 0x65, 0xF0, 0x53 };
    static const unsigned char SIG_POPWIN[6]    = { 0x89, 0x95, 0x60, 0xFF, 0xFF, 0xFF };
    static const unsigned char RES_POPWIN[4]    = { 0xC7, 0x45, 0xE8, 0x0F };

    // Сначала пишем запись попа и покрытие, потом подменяем чтения для экрана.
    g_needsPurchaseResume = g_base + RVA_NEEDS_PURCHASE_RESUME;
    g_needsPopStepResume  = g_base + RVA_NEEDS_POP_STEP_RESUME;
    bool ok = WriteJmpSite(RVA_NEEDS_PURCHASE, SIG_PURCHASE, sizeof(SIG_PURCHASE), 6,
        RVA_NEEDS_PURCHASE_RESUME, RES_PURCHASE, sizeof(RES_PURCHASE),
        (void*)&NeedsPurchaseThunk, "NeedsHonestUi.purchase");
    ok = WriteJmpSite(RVA_NEEDS_POP_STEP, SIG_POPSTEP, sizeof(SIG_POPSTEP), 6,
        RVA_NEEDS_POP_STEP_RESUME, RES_POPSTEP, sizeof(RES_POPSTEP),
        (void*)&NeedsPopStepThunk, "NeedsHonestUi.popstep") && ok;
    if (!ok)
        return false;

    g_honestTipLifeResume     = g_base + RVA_HONEST_TIP_LIFE + 12;
    g_honestTipEverydayResume = g_base + RVA_HONEST_TIP_EVERYDAY + 12;
    g_honestTipLuxuryResume   = g_base + RVA_HONEST_TIP_LUXURY + 12;
    g_honestPopWinResume      = g_base + RVA_HONEST_POPWIN_RESUME;
    g_honestPopListResume     = g_base + RVA_HONEST_POPLIST_RESUME;
    WriteJmpSite(RVA_HONEST_TIP_LIFE, SIG_TIP_LIFE, sizeof(SIG_TIP_LIFE), 12,
        RVA_HONEST_TIP_LIFE + 12, RES_TIP, sizeof(RES_TIP), (void*)&HonestTipLifeThunk, "NeedsHonestUi.tipLife");
    WriteJmpSite(RVA_HONEST_TIP_EVERYDAY, SIG_TIP_EVD, sizeof(SIG_TIP_EVD), 12,
        RVA_HONEST_TIP_EVERYDAY + 12, RES_TIP, sizeof(RES_TIP), (void*)&HonestTipEverydayThunk, "NeedsHonestUi.tipEveryday");
    WriteJmpSite(RVA_HONEST_TIP_LUXURY, SIG_TIP_LUX, sizeof(SIG_TIP_LUX), 12,
        RVA_HONEST_TIP_LUXURY + 12, RES_TIP, sizeof(RES_TIP), (void*)&HonestTipLuxuryThunk, "NeedsHonestUi.tipLuxury");
    WriteJmpSite(RVA_HONEST_POPWIN, SIG_POPWIN, sizeof(SIG_POPWIN), 6,
        RVA_HONEST_POPWIN_RESUME, RES_POPWIN, sizeof(RES_POPWIN), (void*)&HonestPopWinThunk, "NeedsHonestUi.popWindow");
    static const unsigned char SIG_POPLIST[6] = { 0x89, 0x85, 0x60, 0xFF, 0xFF, 0xFF };
    static const unsigned char RES_POPLIST[4] = { 0xC7, 0x45, 0xE0, 0x0F };
    WriteJmpSite(RVA_HONEST_POPLIST, SIG_POPLIST, sizeof(SIG_POPLIST), 6,
        RVA_HONEST_POPLIST_RESUME, RES_POPLIST, sizeof(RES_POPLIST), (void*)&HonestPopListThunk, "NeedsHonestUi.popList");
    return true;
}


// ---------------------------------------------------------------
// ENABLE_GOODS_ICONS (v5.21): иконки товаров из отдельных папок.
//
// Вместо правки трёх больших атласов (gfx\interface\resources.dds - обычный размер,
// resources_big.dds, resources_small.dds; по кадру на товар) в common\goods.txt каждому товару
// можно задать путь:
//     cotton = { cost = 4  color = { 255 255 255 }  icon = "gfx\\goods\\cotton" }
// В папке лежат файлы big / normal / small (.dds .tga .png .bmp). Нет файла нужного размера -
// берётся ближайший и масштабируется; вместо папки можно указать один файл на все размеры.
// Нет ключа / нет файлов - остаётся иконка из атласа.
//
// Как это устроено (все точки проверены в Ghidra):
//  * Движок грузит атлас через общий загрузчик текстур (FUN_009BC490): PHYSFS_openRead -> чтение
//    файла целиком -> D3DXCreateTextureFromFileInMemoryEx. Хук PHYSFS_openRead запоминает в TLS,
//    что этот поток открыл resources*.dds; хук D3DXCreateTextureFromFileInMemoryEx (IAT
//    d3dx9_41.dll) для такой загрузки подсовывает копию файла, где у товаров с icon кадр заменён.
//    Размер, формат и число кадров те же, поэтому GUI и карта (билборды tradegoods) не меняются.
//  * Кадр товара = его индекс в goods.txt + 1 (GI_FRAME_BASE); noOfFrames берётся из texturefile
//    в interface\core.gfx / mapitems.gfx. Размер ячейки = ширина атласа / noOfFrames.
//  * Ключ icon ванильный парсер товаров не знает. Поэтому при чтении goods.txt движком (PHYSFS_read,
//    лексер читает по байту, контрольная сумма для мультиплеера - большими кусками) байты
//    "icon = ..." по смещению в файле заменяются пробелами: движок видит файл без них. Хук
//    PHYSFS_close снимает дескриптор с учёта до того, как он может достаться другому файлу.
//  * Файлы иконок читаются через PhysFS движка (папка мода учитывается), декодирует D3DX движка
//    (пул SCRATCH - видеопамять не трогается).
// Игровое состояние не затрагивается - это только картинка; для мультиплеера важно лишь
// одинаковое содержимое goods.txt (контрольная сумма считается уже без ключей icon).
// ---------------------------------------------------------------

// GI_PURE_BEGIN  (код без зависимостей от движка: тестируется отдельной сборкой)

#define GI_MAX_GOODS 256
#define GI_MAX_SPANS 512
#define GI_PATH_MAX  260

// Путь в виде для PhysFS: '/' вместо '\', без повторов, без ведущих "/" и "./" и хвостового "/".
static size_t GiNormPath(char* dst, size_t cap, const char* src, size_t n)
{
    size_t o = 0;
    for (size_t i = 0; i < n && o + 1 < cap; ++i)
    {
        char c = src[i];
        if (c == 0)
            break;
        if (c == '\\')
            c = '/';
        if (c == '/' && o > 0 && dst[o - 1] == '/')
            continue;
        dst[o++] = c;
    }
    dst[o] = 0;

    size_t skip = 0;
    for (;;)
    {
        if (dst[skip] == '/')
            ++skip;
        else if (dst[skip] == '.' && dst[skip + 1] == '/')
            skip += 2;
        else
            break;
    }
    if (skip)
    {
        memmove(dst, dst + skip, o - skip + 1);
        o -= skip;
    }
    while (o > 0 && dst[o - 1] == '/')
        dst[--o] = 0;
    return o;
}

static bool GiEndsWithI(const char* s, const char* tail)
{
    size_t ls = strlen(s), lt = strlen(tail);
    return ls >= lt && _stricmp(s + ls - lt, tail) == 0;
}

// --- товары из common\goods.txt ---------------------------------------

struct GiGood
{
    char name[64];
    char icon[GI_PATH_MAX];     // нормализованный путь из icon = "..." или ""
    int  mode;                  // 0 - ещё не искали файлы, 1 - папка, 2 - один файл, 3 - не найдено
    int  warned;                // сообщение "в папке нет файлов" уже выведено
    char single[GI_PATH_MAX];   // mode 2: путь к файлу
};

struct GiSpan
{
    unsigned start, end;        // [start, end) - байты "icon = ..." в файле
};

static GiGood g_giGoods[GI_MAX_GOODS];
static int    g_giGoodsCount = 0;
static int    g_giIconCount  = 0;
static GiSpan g_giSpans[GI_MAX_SPANS];
static int    g_giSpanCount  = 0;

static size_t GiSkipWs(const char* t, size_t len, size_t i)
{
    while (i < len)
    {
        char c = t[i];
        if (c == '#')
        {
            while (i < len && t[i] != '\n')
                ++i;
        }
        else if (c == ' ' || c == '\t' || c == '\r' || c == '\n')
            ++i;
        else
            break;
    }
    return i;
}

static bool GiIsDelim(char c)
{
    return c == ' ' || c == '\t' || c == '\r' || c == '\n' ||
           c == '{' || c == '}' || c == '=' || c == '#' || c == '"';
}

// Разбор goods.txt: список товаров в порядке файла (= индексы движка) и, для
// каждого "icon = <значение>" на уровне самого товара, путь и байтовый отрезок.
// Структура: категория = { товар = { ключ = значение ... } ... }.
static void GiParseGoods(const char* t, size_t len)
{
    g_giGoodsCount = 0;
    g_giIconCount  = 0;
    g_giSpanCount  = 0;

    int depth = 0;
    size_t i = 0;
    for (;;)
    {
        i = GiSkipWs(t, len, i);
        if (i >= len)
            break;

        char c = t[i];
        if (c == '{') { ++depth; ++i; continue; }
        if (c == '}') { if (depth > 0) --depth; ++i; continue; }
        if (c == '=') { ++i; continue; }
        if (c == '"')
        {
            ++i;
            while (i < len && t[i] != '"')
                ++i;
            if (i < len)
                ++i;
            continue;
        }

        size_t s = i;
        while (i < len && !GiIsDelim(t[i]))
            ++i;
        size_t e = i;

        size_t j = GiSkipWs(t, len, e);
        if (j >= len || t[j] != '=')
            continue;                       // голое слово (числа в color = { ... })
        j = GiSkipWs(t, len, j + 1);

        if (j < len && t[j] == '{')
        {
            if (depth == 1 && g_giGoodsCount < GI_MAX_GOODS)
            {
                GiGood& g = g_giGoods[g_giGoodsCount++];
                memset(&g, 0, sizeof(g));
                size_t n = e - s;
                if (n > sizeof(g.name) - 1)
                    n = sizeof(g.name) - 1;
                memcpy(g.name, t + s, n);
            }
            i = j;                          // '{' разберётся в начале цикла
            continue;
        }

        size_t vs = j, ve = j, endSpan = j;
        if (j < len && t[j] == '"')
        {
            vs = ve = j + 1;
            while (ve < len && t[ve] != '"')
                ++ve;
            endSpan = ve < len ? ve + 1 : ve;
        }
        else
        {
            while (ve < len && !GiIsDelim(t[ve]))
                ++ve;
            endSpan = ve;
        }

        if (depth == 2 && g_giGoodsCount > 0 && (e - s) == 4 && _strnicmp(t + s, "icon", 4) == 0)
        {
            GiGood& g = g_giGoods[g_giGoodsCount - 1];
            if (!g.icon[0])
            {
                GiNormPath(g.icon, sizeof(g.icon), t + vs, ve - vs);
                if (g.icon[0])
                    ++g_giIconCount;
            }
            if (g_giSpanCount < GI_MAX_SPANS)
            {
                g_giSpans[g_giSpanCount].start = (unsigned)s;
                g_giSpans[g_giSpanCount].end   = (unsigned)endSpan;
                ++g_giSpanCount;
            }
        }
        i = endSpan;
    }
}

// Затирает пробелами ту часть вырезаемых отрезков, что попала в прочитанный кусок
// файла [pos, pos+n). Возвращает число затёртых байт.
static unsigned GiBlankSpans(unsigned char* buf, unsigned pos, unsigned n)
{
    unsigned blanked = 0;
    unsigned end = pos + n;
    for (int k = 0; k < g_giSpanCount; ++k)
    {
        unsigned a = g_giSpans[k].start, b = g_giSpans[k].end;
        if (b <= pos || a >= end)
            continue;
        if (a < pos) a = pos;
        if (b > end) b = end;
        for (unsigned q = a; q < b; ++q)
        {
            unsigned char& ch = buf[q - pos];
            if (ch != '\n' && ch != '\r')
            {
                ch = ' ';
                ++blanked;
            }
        }
    }
    return blanked;
}

// --- число кадров атласа из interface\*.gfx ---------------------------------

// Ищет в тексте .gfx блок со строкой texturefile = "...<tail>" и возвращает его
// noOfFrames (0 - не найдено). tail - например "interface/resources.dds".
static int GiScanNoOfFrames(const char* t, size_t len, const char* tail)
{
    static const char KEY[] = "texturefile";
    const size_t kl = sizeof(KEY) - 1;

    for (size_t pos = 0; pos + kl < len; ++pos)
    {
        if (_strnicmp(t + pos, KEY, kl) != 0)
            continue;
        if (pos > 0 && IsIdentChar(t[pos - 1]))
            continue;

        size_t p = pos + kl;
        while (p < len && (t[p] == ' ' || t[p] == '\t'))
            ++p;
        if (p >= len || t[p] != '=')
            continue;                       // "textureFile9" и т.п.
        ++p;
        while (p < len && (t[p] == ' ' || t[p] == '\t'))
            ++p;
        if (p >= len || t[p] != '"')
            continue;
        size_t vs = ++p;
        while (p < len && t[p] != '"')
            ++p;

        char path[GI_PATH_MAX];
        GiNormPath(path, sizeof(path), t + vs, p - vs);
        if (!GiEndsWithI(path, tail))
            continue;

        // границы блока { ... }, в котором стоит эта строка
        size_t bs = pos;
        int d = 0;
        while (bs > 0)
        {
            --bs;
            if (t[bs] == '}')
                ++d;
            else if (t[bs] == '{')
            {
                if (d == 0)
                    break;
                --d;
            }
        }
        size_t be = p;
        d = 0;
        while (be < len)
        {
            if (t[be] == '{')
                ++d;
            else if (t[be] == '}')
            {
                if (d == 0)
                    break;
                --d;
            }
            ++be;
        }

        static const char KEY2[] = "noofframes";
        const size_t k2 = sizeof(KEY2) - 1;
        for (size_t q = bs; q + k2 < be; ++q)
        {
            if (_strnicmp(t + q, KEY2, k2) != 0)
                continue;
            if (q > 0 && IsIdentChar(t[q - 1]))
                continue;
            size_t r = q + k2;
            while (r < be && (t[r] == ' ' || t[r] == '\t'))
                ++r;
            if (r >= be || t[r] != '=')
                continue;
            ++r;
            while (r < be && (t[r] == ' ' || t[r] == '\t'))
                ++r;
            int n = atoi(t + r);
            if (n > 0)
                return n;
        }
    }
    return 0;
}

// --- DDS 32 бита без сжатия -------------------------------------------------

struct GiDds
{
    unsigned w, h;
    int rb, gb, bb, ab;         // индекс байта канала в пикселе
};

static int GiMaskByte(unsigned m)
{
    return m == 0x000000FFu ? 0 : m == 0x0000FF00u ? 1 : m == 0x00FF0000u ? 2 : m == 0xFF000000u ? 3 : -1;
}

static bool GiParseDds(const unsigned char* d, unsigned size, GiDds* o)
{
    if (size < 128 || memcmp(d, "DDS ", 4) != 0)
        return false;
    unsigned hs      = *(const unsigned*)(d + 4);
    unsigned h       = *(const unsigned*)(d + 12);
    unsigned w       = *(const unsigned*)(d + 16);
    unsigned mips    = *(const unsigned*)(d + 28);
    unsigned pfFlags = *(const unsigned*)(d + 80);
    unsigned bpp     = *(const unsigned*)(d + 88);
    if (hs != 124 || (pfFlags & 0x4) || !(pfFlags & 0x40) || bpp != 32 || mips > 1)
        return false;
    if (w == 0 || h == 0 || w > 16384 || h > 16384)
        return false;
    if ((unsigned __int64)128 + (unsigned __int64)w * h * 4 > size)
        return false;

    o->rb = GiMaskByte(*(const unsigned*)(d + 92));
    o->gb = GiMaskByte(*(const unsigned*)(d + 96));
    o->bb = GiMaskByte(*(const unsigned*)(d + 100));
    o->ab = GiMaskByte(*(const unsigned*)(d + 104));
    if (o->rb < 0 || o->gb < 0 || o->bb < 0 || o->ab < 0)
        return false;
    if ((1 << o->rb | 1 << o->gb | 1 << o->bb | 1 << o->ab) != 0xF)
        return false;
    o->w = w;
    o->h = h;
    return true;
}

// Кладёт ячейку cw x ch (RGBA, прямая альфа) в атлас на место кадра cell.
static void GiBlitCell(unsigned char* atlas, const GiDds& d, unsigned cell, unsigned cw, unsigned ch,
    const unsigned char* rgba)
{
    for (unsigned y = 0; y < ch; ++y)
    {
        unsigned char* dst = atlas + 128 + ((size_t)y * d.w + (size_t)cell * cw) * 4;
        const unsigned char* src = rgba + (size_t)y * cw * 4;
        for (unsigned x = 0; x < cw; ++x, dst += 4, src += 4)
        {
            dst[d.rb] = src[0];
            dst[d.gb] = src[1];
            dst[d.bb] = src[2];
            dst[d.ab] = src[3];
        }
    }
}

// Вырезает кадр cell из атласа в RGBA (для проверок и выгрузки).
static void GiCopyCell(const unsigned char* atlas, const GiDds& d, unsigned cell, unsigned cw, unsigned ch,
    unsigned char* rgba)
{
    for (unsigned y = 0; y < ch; ++y)
    {
        const unsigned char* src = atlas + 128 + ((size_t)y * d.w + (size_t)cell * cw) * 4;
        unsigned char* dst = rgba + (size_t)y * cw * 4;
        for (unsigned x = 0; x < cw; ++x, dst += 4, src += 4)
        {
            dst[0] = src[d.rb];
            dst[1] = src[d.gb];
            dst[2] = src[d.bb];
            dst[3] = src[d.ab];
        }
    }
}

// Масштабирование RGBA sw x sh -> dw x dh усреднением по площади, с предумножением на альфу
// (иначе у краёв иконки подмешивается цвет прозрачных пикселей). Результат - HeapAlloc.
static unsigned char* GiResample(const unsigned char* src, int sw, int sh, int dw, int dh)
{
    unsigned char* out = (unsigned char*)HeapAlloc(GetProcessHeap(), 0, (size_t)dw * dh * 4);
    float* tmp = (float*)HeapAlloc(GetProcessHeap(), 0, sizeof(float) * 4 * (size_t)dw * sh);
    if (!out || !tmp)
    {
        if (out) HeapFree(GetProcessHeap(), 0, out);
        if (tmp) HeapFree(GetProcessHeap(), 0, tmp);
        return 0;
    }

    // горизонталь: sw -> dw; в tmp хранится (r*a, g*a, b*a, a) в шкале 0..255
    for (int y = 0; y < sh; ++y)
    {
        for (int x = 0; x < dw; ++x)
        {
            double x0 = (double)x * sw / dw, x1 = (double)(x + 1) * sw / dw;
            double acc[4] = { 0, 0, 0, 0 }, wsum = 0;
            for (int sx = (int)x0; sx < sw && (double)sx < x1; ++sx)
            {
                double l = (double)sx > x0 ? (double)sx : x0;
                double r = (double)(sx + 1) < x1 ? (double)(sx + 1) : x1;
                double wgt = r - l;
                if (wgt <= 0)
                    continue;
                const unsigned char* p = src + ((size_t)y * sw + sx) * 4;
                double a = p[3] / 255.0;
                acc[0] += p[0] * a * wgt;
                acc[1] += p[1] * a * wgt;
                acc[2] += p[2] * a * wgt;
                acc[3] += p[3] * wgt;
                wsum += wgt;
            }
            float* o = tmp + ((size_t)y * dw + x) * 4;
            for (int k = 0; k < 4; ++k)
                o[k] = wsum > 0 ? (float)(acc[k] / wsum) : 0.0f;
        }
    }

    // вертикаль: sh -> dh и обратно в прямую альфу
    for (int x = 0; x < dw; ++x)
    {
        for (int y = 0; y < dh; ++y)
        {
            double y0 = (double)y * sh / dh, y1 = (double)(y + 1) * sh / dh;
            double acc[4] = { 0, 0, 0, 0 }, wsum = 0;
            for (int sy = (int)y0; sy < sh && (double)sy < y1; ++sy)
            {
                double l = (double)sy > y0 ? (double)sy : y0;
                double r = (double)(sy + 1) < y1 ? (double)(sy + 1) : y1;
                double wgt = r - l;
                if (wgt <= 0)
                    continue;
                const float* p = tmp + ((size_t)sy * dw + x) * 4;
                for (int k = 0; k < 4; ++k)
                    acc[k] += p[k] * wgt;
                wsum += wgt;
            }
            unsigned char* o = out + ((size_t)y * dw + x) * 4;
            double a255 = wsum > 0 ? acc[3] / wsum : 0.0;
            if (a255 <= 0.0)
            {
                o[0] = o[1] = o[2] = o[3] = 0;
                continue;
            }
            double inv = 255.0 / a255;
            for (int k = 0; k < 3; ++k)
            {
                double v = (acc[k] / wsum) * inv + 0.5;
                o[k] = (unsigned char)(v < 0 ? 0 : (v > 255 ? 255 : v));
            }
            double av = a255 + 0.5;
            o[3] = (unsigned char)(av > 255 ? 255 : av);
        }
    }

    HeapFree(GetProcessHeap(), 0, tmp);
    return out;
}

// GI_PURE_END

// --- функции PhysFS движка (RVA = VA Ghidra - 0x400000) ----------------------
// Все cdecl; sint64 возвращается в EDX:EAX. RVA_PHYSFS_OPENREAD - у ally-embark выше.
static const DWORD RVA_PHYSFS_READ       = 0x7206E0;  // PHYSFS_read(file, buf, size, count); пролог 55 8B EC 57 8B 7D 08 (7)
static const DWORD RVA_PHYSFS_TELL       = 0x720780;  // PHYSFS_tell(file)
static const DWORD RVA_PHYSFS_FILELENGTH = 0x7207C0;  // PHYSFS_fileLength(file)
static const DWORD RVA_PHYSFS_CLOSE      = 0x7221E0;  // PHYSFS_close(file); пролог 55 8B EC A1 <абс. адрес мьютекса> (8)
static const DWORD RVA_PHYSFS_EXISTS     = 0x721820;  // PHYSFS_exists(path)
static const DWORD RVA_PHYSFS_ISDIR      = 0x7219E0;  // PHYSFS_isDirectory(path)

typedef void*   (__cdecl* tPhysfsOpenReadFn)(const char*);
typedef __int64 (__cdecl* tPhysfsReadFn)(void*, void*, unsigned, unsigned);
typedef int     (__cdecl* tPhysfsCloseFn)(void*);
typedef __int64 (__cdecl* tPhysfsInt64Fn)(void*);
typedef int     (__cdecl* tPhysfsPathFn)(const char*);

// D3DXCreateTextureFromFileInMemoryEx (импорт d3dx9_41.dll у v2game.exe, 15 аргументов)
typedef HRESULT (WINAPI* tD3dxCreateTexMemEx)(void* dev, const void* data, UINT size, UINT w, UINT h, UINT mips,
    DWORD usage, UINT fmt, UINT pool, DWORD filter, DWORD mipFilter, DWORD colorKey, void* info, void* palette,
    void** tex);

struct GiImageInfo { UINT Width, Height, Depth, MipLevels, Format, ResourceType, ImageFileFormat; };  // D3DXIMAGE_INFO
struct GiLockedRect { INT Pitch; void* pBits; };                                                      // D3DLOCKED_RECT

static tPhysfsOpenReadFn   g_realPhysfsOpenRead = 0;
static tPhysfsReadFn       g_realPhysfsRead = 0;
static tPhysfsCloseFn      g_realPhysfsClose = 0;
static tD3dxCreateTexMemEx g_realD3dxCreateTexMemEx = 0;
__declspec(align(16)) static unsigned char g_trampPhysfsOpenRead[32];
__declspec(align(16)) static unsigned char g_trampPhysfsRead[32];
__declspec(align(16)) static unsigned char g_trampPhysfsClose[32];

static CRITICAL_SECTION g_giCs;                 // всё состояние ниже (кроме g_giStripH для чтения)
static bool  g_giCsInit      = false;
static bool  g_giHooksOk     = false;           // хуки PhysFS стоят - можно читать файлы движка и следить за атласами
static bool  g_giGoodsLoaded = false;           // goods.txt уже пытались разобрать
static bool  g_giGoodsOk     = false;
static void* g_giStripH[8];                     // открытые движком дескрипторы goods.txt, из которых вырезаем icon
static volatile LONG g_giStripActive  = 0;
static volatile LONG g_giBlankedBytes = 0;
static volatile LONG g_giGoodsOpens   = 0;
// Какой атлас (1 resources.dds, 2 _big, 3 _small) движок открыл последним В ЭТОМ ПОТОКЕ и ещё не
// отдал в D3DX: значение лежит в TLS, чтобы параллельные открытия файлов не мешали друг другу.
static DWORD g_giTls = TLS_OUT_OF_INDEXES;
static int g_giFrames[4]   = { 0, -1, -1, -1 }; // noOfFrames по виду атласа (-1 = не искали, 0 = не нашли)
static int g_giComposeLog[4] = { 0, 0, 0, 0 };

// Кадр атласа = индекс товара в goods.txt + 1 (кадр 0 - заглушка). Проверено по самим атласам:
// dummy_good (индекс 30) = пустой кадр 31, raw_cattle (46) = кадр 47.
static const unsigned GI_FRAME_BASE = 1;

static const char* const GI_TAIL[4]      = { "", "interface/resources.dds", "interface/resources_big.dds", "interface/resources_small.dds" };
static const char* const GI_ATLAS_NAME[4] = { "", "resources.dds", "resources_big.dds", "resources_small.dds" };
static const char* const GI_SIZE_NAME[4]  = { "", "normal", "big", "small" };
// Если файла нужного размера нет - берём ближайший по размеру из имеющихся и масштабируем.
static const int GI_ORDER[4][3] = { { 0, 0, 0 }, { 1, 2, 3 }, { 2, 1, 3 }, { 3, 1, 2 } };
static const char* const GI_EXTS[4] = { "dds", "tga", "png", "bmp" };

struct GiCell
{
    unsigned char* px;          // RGBA cw x ch (прямая альфа) или 0
    int cw, ch;
    int state;                  // 0 - не пробовали, 1 - есть, 2 - нет
};
static GiCell g_giCells[4][GI_MAX_GOODS];

// Хвост пути как последние компоненты: без учёта регистра, '\' = '/', перед хвостом - граница.
// Повторные разделители в пути считаются одним: движок открывает атласы как
// "gfx//interface//resources.dds" (из "\\" в core.gfx получается "//") - с таким путём
// в 5.21-5.22 ни один атлас не распознавался.
static bool GiPathEndsWith(const char* path, const char* tail)
{
    const char* p = path + strlen(path);
    const char* t = tail + strlen(tail);
    while (t > tail)
    {
        --t;
        if (p == path)
            return false;
        --p;
        char a = *p, b = *t;
        if (a == '\\')
            a = '/';
        if (b == '\\')
            b = '/';
        if (tolower((unsigned char)a) != tolower((unsigned char)b))
            return false;
        if (b == '/')
            while (p > path && (p[-1] == '/' || p[-1] == '\\'))
                --p;
    }
    if (p > path && p[-1] != '/' && p[-1] != '\\')
        return false;
    return true;
}

// Читает файл целиком через PhysFS движка (учитывает папку мода). Вызывает оригинальные
// функции мимо наших хуков. *out - HeapAlloc (+1 нулевой байт), освободить через HeapFree.
static bool GiReadFile(const char* vpath, unsigned char** out, size_t* outLen)
{
    *out = 0;
    *outLen = 0;
    if (!g_realPhysfsOpenRead || !g_realPhysfsRead || !g_realPhysfsClose)
        return false;

    bool ok = false;
    void* h = g_realPhysfsOpenRead(vpath);
    if (h)
    {
        __int64 len = ((tPhysfsInt64Fn)(g_base + RVA_PHYSFS_FILELENGTH))(h);
        if (len > 0 && len <= (16 << 20))
        {
            unsigned char* buf = (unsigned char*)HeapAlloc(GetProcessHeap(), 0, (size_t)len + 1);
            if (buf)
            {
                __int64 got = g_realPhysfsRead(h, buf, 1, (unsigned)len);
                if (got == len)
                {
                    buf[len] = 0;
                    *out = buf;
                    *outLen = (size_t)len;
                    ok = true;
                }
                else
                    HeapFree(GetProcessHeap(), 0, buf);
            }
        }
        g_realPhysfsClose(h);
    }
    return ok;
}

static bool GiPathExists(const char* path)
{
    return ((tPhysfsPathFn)(g_base + RVA_PHYSFS_EXISTS))(path) != 0;
}

static bool GiIsDirectory(const char* path)
{
    return GiPathExists(path) && ((tPhysfsPathFn)(g_base + RVA_PHYSFS_ISDIR))(path) != 0;
}

static bool GiIsFile(const char* path)
{
    return GiPathExists(path) && ((tPhysfsPathFn)(g_base + RVA_PHYSFS_ISDIR))(path) == 0;
}

// Разбирает common\goods.txt. Вызывать под g_giCs. Никогда не бросает исключений.
static void GiEnsureGoods()
{
    if (g_giGoodsLoaded)
        return;
    g_giGoodsLoaded = true;

    unsigned char* buf = 0;
    size_t len = 0;
    __try
    {
        if (GiReadFile("common/goods.txt", &buf, &len))
        {
            GiParseGoods((const char*)buf, len);
            g_giGoodsOk = true;
            Log("GoodsIcons: goods.txt разобран: товаров %d, с иконкой %d, вырезаемых ключей icon %d",
                g_giGoodsCount, g_giIconCount, g_giSpanCount);
        }
        else
            Log("GoodsIcons: common/goods.txt не прочитан - иконки не подменяются");
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("GoodsIcons: исключение %08X при разборе goods.txt - иконки не подменяются", GetExceptionCode());
        g_giGoodsOk = false;
        g_giSpanCount = 0;
        g_giIconCount = 0;
    }
    if (buf)
        HeapFree(GetProcessHeap(), 0, buf);
}

// noOfFrames атласа по виду (из texturefile в interface\core.gfx / mapitems.gfx). Под g_giCs.
static int GiFramesFor(int kind)
{
    if (g_giFrames[kind] >= 0)
        return g_giFrames[kind];

    int n = 0;
    static const char* const FILES[2] = { "interface/core.gfx", "interface/mapitems.gfx" };
    for (int f = 0; f < 2 && n <= 0; ++f)
    {
        unsigned char* buf = 0;
        size_t len = 0;
        if (GiReadFile(FILES[f], &buf, &len))
        {
            n = GiScanNoOfFrames((const char*)buf, len, GI_TAIL[kind]);
            HeapFree(GetProcessHeap(), 0, buf);
        }
    }
    g_giFrames[kind] = n;
    return n;
}

// Ищет иконку нужного размера в папке: <icon>/<normal|big|small>.<dds|tga|png|bmp>
static bool GiFindSizedFile(const GiGood& g, int sizeKind, char* out, size_t outSize)
{
    for (int e = 0; e < 4; ++e)
    {
        _snprintf_s(out, outSize, _TRUNCATE, "%s/%s.%s", g.icon, GI_SIZE_NAME[sizeKind], GI_EXTS[e]);
        if (GiIsFile(out))
            return true;
    }
    return false;
}

// Что лежит по пути из icon: папка (три файла по размерам) или один файл на все размеры.
static void GiResolveGood(GiGood& g)
{
    if (g.mode)
        return;
    g.mode = 3;
    if (GiIsDirectory(g.icon))
    {
        g.mode = 1;
        return;
    }
    if (GiIsFile(g.icon))
    {
        g.mode = 2;
        strncpy_s(g.single, sizeof(g.single), g.icon, _TRUNCATE);
        return;
    }
    char tmp[GI_PATH_MAX];
    for (int e = 0; e < 4; ++e)
    {
        _snprintf_s(tmp, sizeof(tmp), _TRUNCATE, "%s.%s", g.icon, GI_EXTS[e]);
        if (GiIsFile(tmp))
        {
            g.mode = 2;
            strncpy_s(g.single, sizeof(g.single), tmp, _TRUNCATE);
            return;
        }
    }
    Log("GoodsIcons: товар '%s': по пути '%s' нет ни папки, ни файла - останется иконка из атласа", g.name, g.icon);
}

// Файл картинки -> RGBA (прямая альфа). Декодирует D3DX движка (dds/tga/png/bmp...) в
// текстуру пула SCRATCH, поэтому видеопамять и состояние устройства не затрагиваются.
static bool GiDecodeImage(void* dev, const char* vpath, unsigned char** outRgba, int* ow, int* oh)
{
    unsigned char* file = 0;
    size_t flen = 0;
    if (!GiReadFile(vpath, &file, &flen) || !g_realD3dxCreateTexMemEx)
        return false;

    GiImageInfo info;
    memset(&info, 0, sizeof(info));
    void* tex = 0;
    // D3DFMT_A8R8G8B8 = 21, D3DPOOL_SCRATCH = 3, D3DX_FILTER_NONE = 1, D3DX_DEFAULT = -1
    HRESULT hr = g_realD3dxCreateTexMemEx(dev, file, (UINT)flen, 0xFFFFFFFFu, 0xFFFFFFFFu, 1, 0, 21, 3, 1, 1, 0,
        &info, 0, &tex);
    HeapFree(GetProcessHeap(), 0, file);
    if (FAILED(hr) || !tex)
    {
        Log("GoodsIcons: D3DX не смог прочитать '%s' (hr=%08X)", vpath, (unsigned)hr);
        return false;
    }

    typedef HRESULT (WINAPI* tLockRect)(void*, UINT, GiLockedRect*, const RECT*, DWORD);
    typedef HRESULT (WINAPI* tUnlockRect)(void*, UINT);
    typedef ULONG   (WINAPI* tRelease)(void*);
    void** vt = *(void***)tex;                  // IDirect3DTexture9: Release = 2, LockRect = 19, UnlockRect = 20

    bool ok = false;
    GiLockedRect lr = { 0, 0 };
    if (info.Width > 0 && info.Height > 0 && info.Width <= 8192 && info.Height <= 8192 &&
        SUCCEEDED(((tLockRect)vt[19])(tex, 0, &lr, 0, 0x10 /*D3DLOCK_READONLY*/)) && lr.pBits)
    {
        int w = (int)info.Width, h = (int)info.Height;
        unsigned char* px = (unsigned char*)HeapAlloc(GetProcessHeap(), 0, (size_t)w * h * 4);
        if (px)
        {
            for (int y = 0; y < h; ++y)
            {
                const unsigned char* s = (const unsigned char*)lr.pBits + (size_t)y * lr.Pitch;
                unsigned char* d = px + (size_t)y * w * 4;
                for (int x = 0; x < w; ++x, s += 4, d += 4)
                {
                    d[0] = s[2];                // A8R8G8B8 в памяти: B G R A
                    d[1] = s[1];
                    d[2] = s[0];
                    d[3] = s[3];
                }
            }
            *outRgba = px;
            *ow = w;
            *oh = h;
            ok = true;
        }
        ((tUnlockRect)vt[20])(tex, 0);
    }
    ((tRelease)vt[2])(tex);
    return ok;
}

// Ячейка cw x ch для товара gi и вида атласа kind (RGBA) из кэша или с диска. Под g_giCs.
static const unsigned char* GiLoadCell(void* dev, int gi, int kind, int cw, int ch)
{
    GiCell& c = g_giCells[kind][gi];
    if (c.state && c.cw == cw && c.ch == ch)
        return c.state == 1 ? c.px : 0;
    if (c.px)
        HeapFree(GetProcessHeap(), 0, c.px);
    c.px = 0;
    c.state = 2;
    c.cw = cw;
    c.ch = ch;

    GiGood& g = g_giGoods[gi];
    GiResolveGood(g);

    char path[GI_PATH_MAX];
    bool have = false;
    if (g.mode == 1)
    {
        for (int t = 0; t < 3 && !have; ++t)
            have = GiFindSizedFile(g, GI_ORDER[kind][t], path, sizeof(path));
        if (!have && !g.warned)
        {
            g.warned = 1;
            Log("GoodsIcons: товар '%s': в папке '%s' нет ни big/normal/small.(dds|tga|png|bmp)", g.name, g.icon);
        }
    }
    else if (g.mode == 2)
    {
        strncpy_s(path, sizeof(path), g.single, _TRUNCATE);
        have = true;
    }
    if (!have)
        return 0;

    unsigned char* rgba = 0;
    int w = 0, h = 0;
    if (!GiDecodeImage(dev, path, &rgba, &w, &h))
        return 0;
    if (w != cw || h != ch)
    {
        LogDbg("GoodsIcons: '%s' %dx%d -> %dx%d (%s)", path, w, h, cw, ch, GI_SIZE_NAME[kind]);
        unsigned char* scaled = GiResample(rgba, w, h, cw, ch);
        HeapFree(GetProcessHeap(), 0, rgba);
        if (!scaled)
            return 0;
        rgba = scaled;
    }
    c.px = rgba;
    c.state = 1;
    LogDbg("GoodsIcons: %s '%s' <- %s", GI_SIZE_NAME[kind], g.name, path);
    return c.px;
}

// Копия атласа с подставленными иконками или 0 (ничего менять не надо / нельзя). Под g_giCs.
static unsigned char* GiComposeAtlasLocked(int kind, void* dev, const unsigned char* src, unsigned size)
{
    GiEnsureGoods();
    if (!g_giGoodsOk || g_giIconCount <= 0)
        return 0;

    GiDds dds;
    if (!GiParseDds(src, size, &dds))
    {
        Log("GoodsIcons: %s: не 32-битный DDS без сжатия/мип-уровней - иконки не подставляются", GI_ATLAS_NAME[kind]);
        return 0;
    }
    int frames = GiFramesFor(kind);
    if (frames < 2 || dds.w % (unsigned)frames != 0)
    {
        Log("GoodsIcons: %s: noOfFrames=%d, ширина %u - кадры не делятся, иконки не подставляются",
            GI_ATLAS_NAME[kind], frames, dds.w);
        return 0;
    }
    unsigned cw = dds.w / (unsigned)frames, ch = dds.h;

    unsigned char* out = (unsigned char*)HeapAlloc(GetProcessHeap(), 0, size);
    if (!out)
        return 0;
    memcpy(out, src, size);

    int replaced = 0, skipped = 0;
    for (int gi = 0; gi < g_giGoodsCount; ++gi)
    {
        if (!g_giGoods[gi].icon[0])
            continue;
        unsigned cell = (unsigned)gi + GI_FRAME_BASE;
        if (cell >= (unsigned)frames)
        {
            ++skipped;
            continue;
        }
        const unsigned char* px = GiLoadCell(dev, gi, kind, (int)cw, (int)ch);
        if (!px)
        {
            ++skipped;
            continue;
        }
        GiBlitCell(out, dds, cell, cw, ch, px);
        ++replaced;
    }

    if (g_giComposeLog[kind]++ < 3)
        Log("GoodsIcons: %s: кадр %ux%u, кадров %d - подставлено иконок %d, не подставлено %d (goods.txt открывался движком %ld раз, вырезано байт %ld)",
            GI_ATLAS_NAME[kind], cw, ch, frames, replaced, skipped, (long)g_giGoodsOpens, (long)g_giBlankedBytes);
    return out;
}

static unsigned char* GiComposeAtlas(int kind, void* dev, const unsigned char* src, unsigned size)
{
    unsigned char* out = 0;
    EnterCriticalSection(&g_giCs);
    __try
    {
        out = GiComposeAtlasLocked(kind, dev, src, size);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("GoodsIcons: исключение %08X при сборке атласа %s - используется оригинал", GetExceptionCode(), GI_ATLAS_NAME[kind]);
        out = 0;
    }
    LeaveCriticalSection(&g_giCs);
    return out;
}

// Хук D3DXCreateTextureFromFileInMemoryEx. Если движок только что открыл один из атласов
// resources*.dds (это видно по хуку PHYSFS_openRead, тот же поток), подсовываем D3DX копию
// файла с иконками из папок; размеры и формат те же, поэтому движок ничего не замечает.
static HRESULT WINAPI HookD3dxCreateTexMemEx(void* dev, const void* data, UINT size, UINT w, UINT h, UINT mips,
    DWORD usage, UINT fmt, UINT pool, DWORD filter, DWORD mipFilter, DWORD colorKey, void* info, void* palette,
    void** tex)
{
    int kind = 0;
    if (g_giTls != TLS_OUT_OF_INDEXES)
    {
        kind = (int)(INT_PTR)TlsGetValue(g_giTls);
        if (kind)
            TlsSetValue(g_giTls, 0);
    }
    if (kind > 0 && kind <= 3 && data && size > 128 && g_settings.goodsIcons && g_giHooksOk)
    {
        unsigned char* patched = GiComposeAtlas(kind, dev, (const unsigned char*)data, size);
        if (patched)
        {
            HRESULT hr = g_realD3dxCreateTexMemEx(dev, patched, size, w, h, mips, usage, fmt, pool, filter,
                mipFilter, colorKey, info, palette, tex);
            HeapFree(GetProcessHeap(), 0, patched);
            return hr;
        }
    }
    return g_realD3dxCreateTexMemEx(dev, data, size, w, h, mips, usage, fmt, pool, filter, mipFilter,
        colorKey, info, palette, tex);
}

// --- хуки PhysFS ---------------------------------------------------------

static void GiRegisterStrip(void* h)
{
    EnterCriticalSection(&g_giCs);
    for (int i = 0; i < 8; ++i)
    {
        if (!g_giStripH[i])
        {
            g_giStripH[i] = h;
            InterlockedIncrement(&g_giStripActive);
            break;
        }
    }
    LeaveCriticalSection(&g_giCs);
}

static bool GiUnregisterStrip(void* h)
{
    bool found = false;
    EnterCriticalSection(&g_giCs);
    for (int i = 0; i < 8; ++i)
    {
        if (g_giStripH[i] == h)
        {
            g_giStripH[i] = 0;
            InterlockedDecrement(&g_giStripActive);
            found = true;
        }
    }
    LeaveCriticalSection(&g_giCs);
    return found;
}

static bool GiIsStripHandle(void* h)
{
    for (int i = 0; i < 8; ++i)
        if (g_giStripH[i] == h)
            return true;
    return false;
}

// Перед открытием файла движком: запоминаем, что он открыл атлас; для goods.txt заранее
// разбираем файл (нужны байтовые отрезки "icon = ..."). Возвращает true для goods.txt.
static bool GiBeforeOpen(const char* path)
{
    if (!g_giHooksOk || !g_settings.goodsIcons || !path)
        return false;

    int kind = 0;
    for (int k = 1; k <= 3; ++k)
    {
        if (GiPathEndsWith(path, GI_TAIL[k]))
        {
            kind = k;
            break;
        }
    }
    TlsSetValue(g_giTls, (LPVOID)(INT_PTR)kind);

    if (!GiPathEndsWith(path, "common/goods.txt"))
        return false;

    EnterCriticalSection(&g_giCs);
    GiEnsureGoods();
    LeaveCriticalSection(&g_giCs);
    if (InterlockedIncrement(&g_giGoodsOpens) == 1)
        LogDbg("GoodsIcons: движок открывает '%s'", path);
    return true;
}

static void* __cdecl HookPhysfsOpenRead(const char* path)
{
    if (path)
        OnPhysfsOpenReadFilename(path);         // ally-embark: запоминает имя .v2 (сам проверяет настройку)
    bool isGoods = GiBeforeOpen(path);
    void* h = g_realPhysfsOpenRead(path);
    if (isGoods && h && g_giGoodsOk && g_giSpanCount > 0)
        GiRegisterStrip(h);
    return h;
}

// Чтение goods.txt движком (лексер читает по байту, контрольная сумма - кусками по 256 КБ):
// ключи icon = "..." затираются пробелами по смещению в файле, ванильный парсер их не видит
// (иначе неизвестный ключ в блоке товара - риск ошибки разбора). Остальные файлы - без изменений.
static __int64 __cdecl HookPhysfsRead(void* h, void* buf, unsigned size, unsigned count)
{
    if (g_giStripActive == 0 || !GiIsStripHandle(h))
        return g_realPhysfsRead(h, buf, size, count);

    __int64 pos = ((tPhysfsInt64Fn)(g_base + RVA_PHYSFS_TELL))(h);
    __int64 n = g_realPhysfsRead(h, buf, size, count);
    if (n > 0 && pos >= 0 && pos < 0x7FFFFFFF && size > 0 && (unsigned __int64)n * size < 0x7FFFFFFF)
    {
        unsigned blanked = GiBlankSpans((unsigned char*)buf, (unsigned)pos, (unsigned)((unsigned __int64)n * size));
        if (blanked)
            InterlockedExchangeAdd(&g_giBlankedBytes, (LONG)blanked);
    }
    return n;
}

static int __cdecl HookPhysfsClose(void* h)
{
    static volatile LONG logged = 0;
    // до настоящего close: освобождённый дескриптор может достаться другому файлу
    if (g_giStripActive && GiUnregisterStrip(h) && InterlockedIncrement(&logged) <= 3)
        Log("GoodsIcons: движок прочитал goods.txt, вырезано байт ключей icon (всего): %ld", (long)g_giBlankedBytes);
    return g_realPhysfsClose(h);
}

// Хук PHYSFS_openRead (VA 0xB21F40, пролог 55 8B EC 83 EC 10): общий для ally-embark (имя .v2)
// и GOODS_ICONS (атласы, goods.txt). Вызов оригинала - через трамплин (раньше был naked-thunk
// без доступа к результату). Ставится один раз.
static bool InstallPhysfsOpenReadHook()
{
    static bool done = false;
    if (done)
        return true;

    static const unsigned char SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x10 };
    if (!StealToTrampoline(RVA_PHYSFS_OPENREAD, 6, g_trampPhysfsOpenRead, sizeof(g_trampPhysfsOpenRead),
            SIG, (void*)&HookPhysfsOpenRead, (void**)&g_realPhysfsOpenRead, "PhysfsOpenRead"))
    {
        Log("PhysfsOpenRead: НЕ установлен (rva %06X)", RVA_PHYSFS_OPENREAD);
        return false;
    }
    done = true;
    Log("PhysfsOpenRead: установлен (rva %06X; ally-embark, GoodsIcons)", RVA_PHYSFS_OPENREAD);
    return true;
}

// ENABLE_GOODS_ICONS. Ничего не пишет в состояние игры - только подменяет картинку.
static bool InstallGoodsIcons()
{
    if (!g_giCsInit)
    {
        InitializeCriticalSection(&g_giCs);
        g_giCsInit = true;
    }
    if (g_giTls == TLS_OUT_OF_INDEXES)
        g_giTls = TlsAlloc();
    if (g_giTls == TLS_OUT_OF_INDEXES)
    {
        Log("GoodsIcons: TlsAlloc не удался - не установлен");
        return false;
    }

    bool ok = InstallPhysfsOpenReadHook();

    static const unsigned char SIG_READ[7] = { 0x55, 0x8B, 0xEC, 0x57, 0x8B, 0x7D, 0x08 };
    if (ok)
        ok = StealToTrampoline(RVA_PHYSFS_READ, 7, g_trampPhysfsRead, sizeof(g_trampPhysfsRead),
            SIG_READ, (void*)&HookPhysfsRead, (void**)&g_realPhysfsRead, "GoodsIcons(read)");

    // PHYSFS_close: в 8 украденных байтах есть абсолютный адрес мьютекса (mov eax,[0xF20AA0]) -
    // при ASLR загрузчик уже поправил его, поэтому ожидаемые байты считаем с учётом базы.
    if (ok)
    {
        unsigned char sigClose[8] = { 0x55, 0x8B, 0xEC, 0xA1, 0, 0, 0, 0 };
        *(DWORD*)(sigClose + 4) = 0xF20AA0 + (g_base - 0x400000);
        ok = StealToTrampoline(RVA_PHYSFS_CLOSE, 8, g_trampPhysfsClose, sizeof(g_trampPhysfsClose),
            sigClose, (void*)&HookPhysfsClose, (void**)&g_realPhysfsClose, "GoodsIcons(close)");
    }

    if (ok)
    {
        HMODULE exe = GetModuleHandleA(NULL);
        ok = HookIat(exe, "d3dx9_41.dll", "D3DXCreateTextureFromFileInMemoryEx",
            (void*)&HookD3dxCreateTexMemEx, (void**)&g_realD3dxCreateTexMemEx);
        if (!ok)
            Log("GoodsIcons: импорт D3DXCreateTextureFromFileInMemoryEx не найден/уже перехвачен");
    }

    g_giHooksOk = ok;
    Log("GoodsIcons: %s (ENABLE_GOODS_ICONS; ключ icon = \"<папка>\" в common\\goods.txt)",
        ok ? "установлен" : "НЕ установлен");
    return ok;
}


static bool Install()
{
    LoadSettings();
    // Нужен всегда: PATCH_BUILD_FACTORY_*_UNCIVILIZED разрешают нецивилизованной стране
    // строить любые фабрики, а on_civilize (FUN_00542370, rva 14248B) падает на
    // постройке без слота (краш у тестера при цивилизации страны, 1842 г.).
    g_settings.patchCivilizeNullCheck = true;
    // 3.57 skip 2859C0 из 282EC0 глушил дневной тик (POP/войны/газеты).
    g_settings.patchSkipChkWin = false;
    g_settings.patchCamStill = false;
    // 3.42–3.75 ломали окно бригад. Ваниль + таймеры bb0/rbld/rorg.
    g_settings.patchReuseUnitView = false;

    g_base = (DWORD)GetModuleHandleA(NULL);
    if (!g_base)
        return false;

    g_imageSize = 0;
    {
        IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)g_base;
        if (dos->e_magic == IMAGE_DOS_SIGNATURE)
        {
            IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)(g_base + dos->e_lfanew);
            if (nt->Signature == IMAGE_NT_SIGNATURE)
                g_imageSize = nt->OptionalHeader.SizeOfImage;
        }
        if (!g_imageSize)
            g_imageSize = 0xC00000;
    }

    g_fnOnMakeDecision = (void*)(g_base + RVA_ONMAKEDECISION);

    Log("---- Install ---- версия %s pid=%u tid=%u",
        MOD_VERSION, GetCurrentProcessId(), GetCurrentThreadId());
    Log("base = %08X", g_base);
    Log("logs = Logs\\ (v2dll.log, v2dll_oos.log, v2dll_crash.log)");
    Log("localModConfig=%d fixSfxMixerLag=%d patchFixArmyWindowLag=%d enableCrashDump=%d",
        (int)g_settings.localModConfig, (int)g_settings.fixSfxMixerLag,
        (int)g_settings.patchFixArmyWindowLag, (int)g_settings.enableCrashDump);
    Log("CivilizeNullCheck: включён принудительно");
    Log("ChkWinSkip: принудительно выкл (2859C0 = дневной тик, не GUI)");
    Log("CamStill: принудительно выкл (3.59: idle-шторм, FPS хуже)");
    if (g_settings.patchD3dNoVsync)
        Log("D3D9: vsync снят (PresentationInterval=IMMEDIATE), fps cap=%d",
            g_settings.d3dFpsLimit);

    InstallEngineStability();
    InstallArmySelectDiag();

    if (g_settings.patchPopQuantize)
        InstallPopQuantize();

    if (g_settings.patchMpClientSleep)
    {
        InstallMpClientSleep();
        InstallWfsoHook();
    }

    // Поддельные элементы: "POLITICSVIEW_DECISION" + имя решения.
    memset(g_fakeElem, 0, sizeof(g_fakeElem));

    for (int i = 0; i < BUTTON_COUNT && i < MAX_BUTTONS; ++i)
    {
        strcpy_s(g_decisionText[i], sizeof(g_decisionText[i]),
            "POLITICSVIEW_DECISION");
        strcat_s(g_decisionText[i], sizeof(g_decisionText[i]),
            BUTTONS[i].decision);

        *(char**)(g_fakeElem[i] + ELEM_STRDATA) = g_decisionText[i];
        *(unsigned*)(g_fakeElem[i] + ELEM_STRRES) = sizeof(g_decisionText[i]) - 1;
    }

    for (int i = 0; i < VIEW_COUNT && i < MAX_VIEWS; ++i)
    {
        void* thunk = VIEWS[i].tooltipSlot ? TOOLTIP_THUNKS[i] : UPDATE_THUNKS[i];

        bool ok = PatchSlot(VIEWS[i].rvaVtable, VIEWS[i].slot,
            thunk, &g_origSlot[i]);

        Log("patch %s: слот %d = %d", VIEWS[i].name, VIEWS[i].slot, (int)ok);
    }

    if (g_settings.decisionFilter)
    {
        bool ok = PatchSlot(RVA_VTABLE_DECISION, VT_SLOT_ISVALID,
            (void*)&MyDecisionIsValid, (void**)&g_origIsValid);
        Log("patch CDecision: слот %d = %d", VT_SLOT_ISVALID, (int)ok);
    }

    // Каждая запись таблицы уважает своё собственное BytePatch::enabled
    // (правится ключами PATCH_<ИМЯ> в ini), поэтому вызов сам по себе
    // безусловный.
    InstallExePatches();

    if (g_settings.patchOccupiedReinforceSplit)
        InstallOccupiedReinforceSplit();

    if (g_settings.patchAllyOwnerCheck)
        InstallAllyOwnerCheck();

    if (g_settings.patchAllyEmbark)
        InstallAllyEmbark();

    // v4.73: ОТКЛЮЧЕНО - v4.72 ломал сохранение игры ("Ошибка: плохой
    // сейв", подтверждено пользователем на ЛЮБОМ имени сейва, включая
    // новые). Причина: ScanAndSaveForeignEmbarks предполагал, что
    // DAT_0125870c+0x2238 - простой массив "ID провинции -> указатель",
    // индексируемый целыми числами 1..4000. Это предположение НЕ было
    // проверено - единственная опора на него (FUN_005D25C0) на самом
    // деле индексировала этот массив УКАЗАТЕЛЕМ НА УЗЕЛ СПИСКА
    // (param_1[0x39], часть отдельного механизма), а не целочисленным
    // ID. Из-за этого сканер читал посторонние данные как указатели на
    // юниты и вызывал через них виртуальные функции (VCall0 на "IsNavy"/
    // "GetSpecialObject") - классическое обращение по мусорному
    // указателю, которое не обязательно падает сразу, но может
    // незаметно повредить состояние. InstallSaveEmbarkedAllyArmies() и
    // сам хук на PHYSFS_openWrite оставлены в коде ОТКЛЮЧЁННЫМИ -
    // прежде чем включать снова, нужно сначала НАДЁЖНО найти способ
    // перечислить все провинции/флоты (с проверкой через Ghidra, а не
    // по аналогии), см. project_embark_save_load_bug.md.
    // v4.75: ВКЛЮЧЕНО снова после правок: точная граница таблицы (3255,
    // по логу ProvTable v4.74), сверка province+0x58 == индекс, проверка
    // vtable юнита внутри exe, файл пишется в Logs\allyembark\, а не в
    // папку сейвов, PHYSFS_getWriteDir из хука больше не зовётся. Если
    // сохранение снова даст "плохой сейв" - убирать этот вызов обратно и
    // искать причину в другом (см. project_embark_save_load_bug.md).
    if (g_settings.patchAllyEmbark)
    {
        InstallSaveEmbarkedAllyArmies();
        InstallPhysfsOpenReadHook();   // v4.76: только запоминает имя .v2, см. MaybeDumpAfterLoad
        // v4.78: ОТКЛЮЧЕНО. В v4.77 ремонт срабатывал на обычных армиях:
        // у них +0x18C по умолчанию = 2 (не 0), и 5 армий на флотах
        // 39/106/109/198 были переведены в страну idx 2 (GLM) при загрузке.
        // Плюс сейв вообще не записал expeditionary_owner (метки зря).
        // v4.80: снова установлен, но в ПРОБНОМ режиме (EMBARK_REPAIR_APPLY=false) -
        // только лог "что бы сделал", владельцев не меняет. Владелец выводится из
        // провинций бригад, а не из метки (см. DeriveArmyTrueOwner).
        InstallEmbarkLoadRepair();
    }

    // v4.55: включена заново, но ПЕРЕПИСАНА на безопасный минимум -
    // OnUnitButtonsTooltip больше не трогает thisObj/unit/vtable-слоты
    // CSingleUnitButtons вообще (это и роняло игру трижды за сессию,
    // последний раз даже при полностью отключённом картном зонде).
    // v4.60: кэш теперь заполняется НАДЁЖНЫМ источником - точечным
    // однострочным патчем в FUN_0078E820 (см. комментарий у
    // InstallFleetCaptureHook) вместо LogEmbarkFleetState, чей
    // fleetObj оказался не тем объектом, что видит панель. См. память
    // project_ally_embark_tooltip.
    if (g_settings.showAllyEmbarkedTooltip)
    {
        InstallFleetPassengerTooltip();
        InstallFleetCaptureHook();
        // v4.67-v4.70: временные зонды для "выбрать посаженную армию на
        // союзном флоте" убраны - задача решена без патчей движка, см.
        // память project_select_embarked_army.md.
    }

    if (g_settings.patchCivilizeNullCheck)
        InstallCivilizeNullCheck();

    if (g_settings.patchSupplySourceNullCheck)
        InstallSupplySourceNullCheck();

    if (g_settings.patchTechNullCheckFixes)
    {
        InstallTechCompareNullCheck();
        InstallTechFolderIconNullCheck();
    }

    if (g_settings.patchGraphPointClamp)
        InstallGraphPointClamp();

    if (g_settings.patchFactoryDumpScan)
    {
        // В 2.58 сканер временно ловил "Failed to create a graphics device"
        // при запуске - подтверждено A/B тестом (2.58 с широким сканом всех
        // типов памяти ловил ошибку, 2.59 без вызова этой функции - нет).
        // Причина сужена до расширения скана за пределы MEM_PRIVATE (кучи
        // процесса) на MEM_IMAGE/MEM_MAPPED, где могли жить внутренние
        // данные видеодрайвера - в 2.60 это ограничение возвращено, снова
        // сканируем только MEM_PRIVATE, как в безотказных 2.55-2.57.
        InstallFactoryDumpScan();
    }

    if (g_settings.patchProdListVisibility)
        InstallProdListVisibilityHook();

    // HIDE_RAW_GOODS_FILTER: скрытие кнопок-фильтров товаров на "raw_"
    // в окне фабрик. v4.04 уронил игру на старте (call-through с
    // угаданной сигнатурой - см. историю у ResolveGoodNameByIndex),
    // v4.07 уронил игру повторно (затёртый EDX в этом же хуке) - обе
    // причины разобраны и исправлены, см. GoodsFilterPosThunk и память
    // project_hide_raw_goods_filter/feedback_live_probe_hook.
    // InstallGoodsFilterProbe() (дамп конца конструктора) свою задачу
    // выполнил - подтвердил, что размер/позиция ставятся не в нём, а
    // здесь, в InstallGoodsFilterPosProbe - оставлен отключённым, чтобы
    // не засорять лог.
    // InstallGoodsFilterProbe();
    // v4.09 подменял позицию по "goodIndex", который на деле был
    // байтовым смещением (индекс*20) - пропадала canned_food вместо
    // raw_. Разобрано в раундах 4-5 (см. память
    // project_hide_raw_goods_filter), v4.13 - скрытие включено с
    // правильным индексом, ini: HIDE_RAW_GOODS_FILTER.
    if (g_settings.hideRawGoodsFilter)
        InstallGoodsFilterPosProbe();

    if (g_settings.filterShowAllInState || g_settings.filterProducersOnly)
        InstallFilterShowAllInState();

    // PLAYER_BUTTONS: кнопка button_fe_player_next в topbar пропускает
    // играющий трек (см. SetupPlayerButtons).
    if (g_settings.playerButtons)
        InstallPlayerButtons();

    // MUSIC_FAIR_RANDOM: честный случайный выбор песни (см. InstallMusicFairRandom).
    if (g_settings.musicFairRandom)
        InstallMusicFairRandom();

    if (g_settings.patchProdTypeGate)
        InstallProdTypeGateHook();

    if (g_settings.patchHideNoSupplyFactories)
        InstallHideNoSupplyFactoriesHook();

    if (g_settings.patchFactoryClosePayout || g_settings.patchFactoryAutoClose)
        InstallFactoryClose();

    if (g_settings.patchAiExpandStaffing)
        InstallAiExpandStaffing();

    if (g_settings.patchAiNavalBaseLimit)
        InstallAiNavalBaseLimit();

    if (g_settings.patchFactoryMinWage)
        InstallFactoryMinWage();

    // Исправление вылета, без переключателя (как CivilizeNullCheck).
    InstallDestroyCmdNullCheck();

    if (g_settings.patchNeedsHonestUi)
        InstallNeedsHonestUi();

    if (g_settings.patchFactoryPriorityByRule)
        InstallPriorityByRule();

    if (g_settings.EventSounds)
        LoadEventMusicDll();

    // Оба патча целят один и тот же адрес - взаимоисключающе.
    if (g_settings.priceDelta && g_settings.patchExponentialPriceDelta)
        Log("PriceDelta: ENABLE_PRICE_DELTA и PATCH_EXPONENTIAL_PRICE_DELTA "
            "патчат один адрес - применяется только PATCH_EXPONENTIAL_PRICE_DELTA");

    if (g_settings.patchExponentialPriceDelta)
        InstallExponentialPriceDelta();
    else if (g_settings.priceDelta)
        InstallPriceDelta();

    if (g_settings.popDisplay)
        InstallPopDisplay();

    if (g_settings.versionLabel)
        InstallVersionLabel();

    if (g_settings.minting)
        InstallMinting();

    InstallGoodsConsumption();

    if (g_settings.goodsIcons)
        InstallGoodsIcons();

    if (g_settings.patchCombatRoll)
        InstallCombatRoll();

    if (g_settings.patchChecksumDiagnostic)
    {
        InstallChecksumDiagnostic();
        InstallLobbyEntryHook();
    }

    InstallOosWatch();
    HANDLE pasteThread = CreateThread(0, 0, ClipboardPasteWorker, 0, 0, 0);
    if (pasteThread)
    {
        CloseHandle(pasteThread);
        Log("ClipboardPaste: hilo independiente iniciado (Ctrl+V)");
    }
    else
        Log("ClipboardPaste: no se pudo iniciar el hilo independiente (%lu)", GetLastError());
    Log("IdleSkipNested: PATCH_SKIP_NESTED_IDLE=%d FIX_ARMY_WINDOW_LAG=%d PATCH_SKIP_CHK_WIN=%d PATCH_CAM_STILL=%d",
        (int)g_settings.patchSkipNestedIdle, (int)g_settings.patchFixArmyWindowLag,
        (int)g_settings.patchSkipChkWin, (int)g_settings.patchCamStill);

    Log("Install: done");
    return true;
}


// ---------------------------------------------------------------
// Краш: необработанное исключение / abort → Logs\v2dll_crash.log
// и Logs\v2dll_crash_YYYYMMDD_HHMMSS_pid_tid_n.dmp (каждый отдельно).
// Если v2dll_crash.log занят — тот же штамп .log рядом.
// VectoredContinue + UEF: игра может сама поставить фильтр после нас,
// поэтому IAT SetUnhandledExceptionFilter оставляем обёрткой.
// Не глотаем исключение — Windows Error Reporting как был.
// ---------------------------------------------------------------

static LPTOP_LEVEL_EXCEPTION_FILTER g_prevUef = 0;
typedef LPTOP_LEVEL_EXCEPTION_FILTER (WINAPI* tSetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER);
static tSetUnhandledExceptionFilter g_realSetUEF = 0;
static LONG g_inCrash = 0;

static const char* CrashCodeName(DWORD code)
{
    switch (code)
    {
    case 0xC0000005: return "ACCESS_VIOLATION";
    case 0xC0000006: return "IN_PAGE_ERROR";
    case 0xC0000008: return "INVALID_HANDLE";
    case 0xC000001D: return "ILLEGAL_INSTRUCTION";
    case 0xC0000025: return "NONCONTINUABLE";
    case 0xC0000026: return "INVALID_DISPOSITION";
    case 0xC000008C: return "ARRAY_BOUNDS_EXCEEDED";
    case 0xC000008D: return "FLOAT_DENORMAL";
    case 0xC000008E: return "FLOAT_DIVIDE_BY_ZERO";
    case 0xC000008F: return "FLOAT_INEXACT";
    case 0xC0000090: return "FLOAT_INVALID";
    case 0xC0000091: return "FLOAT_OVERFLOW";
    case 0xC0000092: return "FLOAT_STACK_CHECK";
    case 0xC0000093: return "FLOAT_UNDERFLOW";
    case 0xC0000094: return "INTEGER_DIVIDE_BY_ZERO";
    case 0xC0000096: return "PRIVILEGED_INSTRUCTION";
    case 0xC00000FD: return "STACK_OVERFLOW";
    case 0xC0000135: return "DLL_NOT_FOUND";
    case 0xC0000139: return "ENTRYPOINT_NOT_FOUND";
    case 0xC0000142: return "DLL_INIT_FAILED";
    case 0xC0000374: return "HEAP_CORRUPTION";
    case 0xC0000409: return "STACK_BUFFER_OVERRUN";
    case 0xC0000417: return "INVALID_CRUNTIME_PARAMETER";
    case 0x40000015: return "FATAL_APP_EXIT/abort";
    case 0x80000003: return "BREAKPOINT";
    case 0x80000004: return "SINGLE_STEP";
    case 0xE06D7363: return "CPP_EXCEPTION";
    default:         return "UNKNOWN";
    }
}

static void CrashWrite(HANDLE h, const char* s)
{
    if (!h || h == INVALID_HANDLE_VALUE || !s)
        return;
    DWORD n = 0;
    WriteFile(h, s, (DWORD)strlen(s), &n, NULL);
}

static void CrashPrintf(HANDLE h, const char* fmt, ...)
{
    char buf[768];
    va_list ap;
    va_start(ap, fmt);
    int n = _vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, ap);
    va_end(ap);
    if (n > 0)
        CrashWrite(h, buf);
}

static void CrashLogAddr(HANDLE h, const char* tag, DWORD addr)
{
    MEMORY_BASIC_INFORMATION mbi;
    memset(&mbi, 0, sizeof(mbi));
    char mod[MAX_PATH];
    mod[0] = 0;
    if (addr && VirtualQuery((const void*)(DWORD_PTR)addr, &mbi, sizeof(mbi)) && mbi.AllocationBase)
    {
        GetModuleFileNameA((HMODULE)mbi.AllocationBase, mod, sizeof(mod));
        const char* base = strrchr(mod, '\\');
        DWORD rva = addr - (DWORD)(DWORD_PTR)mbi.AllocationBase;
        CrashPrintf(h, "  %s=%08X  %s+0x%X\n", tag, addr, base ? base + 1 : mod, rva);
        return;
    }
    CrashPrintf(h, "  %s=%08X\n", tag, addr);
}

static void CrashDumpPtr(HANDLE h, const char* tag, DWORD addr)
{
    if (!addr)
    {
        CrashPrintf(h, "  %s=00000000\n", tag);
        return;
    }
    if (SafeIsBadReadPtr((const void*)(DWORD_PTR)addr, 32))
    {
        CrashPrintf(h, "  %s=%08X unreadable\n", tag, addr);
        return;
    }

    unsigned d[8];
    memset(d, 0, sizeof(d));
    __try
    {
        memcpy(d, (const void*)(DWORD_PTR)addr, sizeof(d));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        CrashPrintf(h, "  %s=%08X faulted\n", tag, addr);
        return;
    }

    CrashPrintf(h, "  %s=%08X %08X %08X %08X %08X %08X %08X %08X %08X\n",
        tag, addr, d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7]);
}

static void CrashDumpNested(HANDLE h, const char* tag, DWORD base, int off)
{
    if (!base || SafeIsBadReadPtr((const void*)(DWORD_PTR)(base + (DWORD)off), 4))
        return;
    DWORD inner = 0;
    __try
    {
        inner = *(DWORD*)(DWORD_PTR)(base + (DWORD)off);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }
    char nested[40];
    sprintf_s(nested, "[%s+%X]", tag, (unsigned)off);
    CrashDumpPtr(h, nested, inner);
}

static void CrashDumpCode(HANDLE h, DWORD eip)
{
    if (!eip)
        return;
    DWORD start = (eip > 8) ? (eip - 8) : eip;
    unsigned char b[24];
    memset(b, 0, sizeof(b));
    if (SafeIsBadReadPtr((const void*)(DWORD_PTR)start, sizeof(b)))
    {
        CrashPrintf(h, "  code_at_eip unreadable\n");
        return;
    }
    __try
    {
        memcpy(b, (const void*)(DWORD_PTR)start, sizeof(b));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        CrashPrintf(h, "  code_at_eip faulted\n");
        return;
    }
    CrashPrintf(h,
        "  code_eip-8 %02X %02X %02X %02X %02X %02X %02X %02X  %02X %02X %02X %02X %02X %02X %02X %02X\n",
        b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7],
        b[8], b[9], b[10], b[11], b[12], b[13], b[14], b[15]);
}

// Улики «откуда краш» без Ghidra: RTTI живых объектов, ключи
// локализации/протокола на стеке, vtable в образе exe или куча.
// Это не сюжет («ход спросил титул»), а то, что раньше руками
// вытаскивали из minidump / .rdata. Сюжет по-прежнему пишет человек.
static int CrashInImage(DWORD p)
{
    return g_base && p >= g_base && p < g_base + g_imageSize;
}

static int CrashSeenAdd(DWORD* seen, int* n, int cap, DWORD v)
{
    if (!v)
        return 0;
    for (int i = 0; i < *n; ++i)
    {
        if (seen[i] == v)
            return 0;
    }
    if (*n >= cap)
        return 0;
    seen[(*n)++] = v;
    return 1;
}

static int CrashCopyKey(DWORD addr, char* out, int outCap)
{
    out[0] = 0;
    if (!addr || outCap < 8)
        return 0;
    char tmp[64];
    memset(tmp, 0, sizeof(tmp));
    __try
    {
        memcpy(tmp, (const void*)(DWORD_PTR)addr, sizeof(tmp) - 1);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    int n = 0;
    int letters = 0;
    for (; n < (int)sizeof(tmp) - 1; ++n)
    {
        unsigned char c = (unsigned char)tmp[n];
        if (c == 0)
            break;
        if (c == '$' || c == '_' ||
            (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9'))
        {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                ++letters;
            continue;
        }
        return 0;
    }
    if (n < 4 || letters < 3)
        return 0;
    if (n >= outCap)
        n = outCap - 1;
    memcpy(out, tmp, (size_t)n);
    out[n] = 0;
    return n;
}

static void CrashCopyNear(DWORD addr, char* out, int outCap)
{
    out[0] = 0;
    if (!CrashInImage(addr) || outCap < 8)
        return;
    char raw[80];
    memset(raw, 0, sizeof(raw));
    __try
    {
        memcpy(raw, (const void*)(DWORD_PTR)addr, sizeof(raw) - 1);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }
    int w = 0;
    int gap = 0;
    for (int i = 0; i < (int)sizeof(raw) - 1 && w < outCap - 1; ++i)
    {
        unsigned char c = (unsigned char)raw[i];
        if (c >= 32 && c < 127)
        {
            out[w++] = (char)c;
            gap = 0;
        }
        else if (w > 0 && gap == 0)
        {
            out[w++] = ' ';
            gap = 1;
        }
    }
    while (w > 0 && out[w - 1] == ' ')
        --w;
    out[w] = 0;
}

static int CrashCopyRtti(DWORD obj, char* out, int outCap)
{
    out[0] = 0;
    if (!obj)
        return 0;
    DWORD vptr = 0;
    __try
    {
        vptr = *(DWORD*)(DWORD_PTR)obj;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    if (!CrashInImage(vptr) || vptr < 4)
        return 0;
    DWORD col = 0;
    __try
    {
        col = *(DWORD*)(DWORD_PTR)(vptr - 4);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    if (!CrashInImage(col))
        return 0;
    DWORD td = 0;
    __try
    {
        td = *(DWORD*)(DWORD_PTR)(col + 12);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    if (!CrashInImage(td))
        return 0;
    char raw[80];
    memset(raw, 0, sizeof(raw));
    __try
    {
        memcpy(raw, (const void*)(DWORD_PTR)(td + 8), sizeof(raw) - 1);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    const char* s = raw;
    if (s[0] == '.' && s[1] == '?' && s[2] == 'A')
        s += 4;
    if (s[0] == '?' && s[1] == '$')
        return 0;
    int n = 0;
    while (s[n] && s[n] != '@' && n < 64)
        ++n;
    if (n < 2)
        return 0;
    if (n >= outCap)
        n = outCap - 1;
    memcpy(out, s, (size_t)n);
    out[n] = 0;
    return n;
}

static const char* CrashVptrKind(DWORD obj, DWORD* outVptr)
{
    *outVptr = 0;
    if (!obj)
        return "null";
    DWORD vptr = 0;
    __try
    {
        vptr = *(DWORD*)(DWORD_PTR)obj;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return "unreadable";
    }
    *outVptr = vptr;
    if (!vptr)
        return "null-vtable";
    if (CrashInImage(vptr))
        return "vtable-in-exe";
    DWORD probe = 0;
    __try
    {
        probe = *(DWORD*)(DWORD_PTR)vptr;
        (void)probe;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return "dangling-vtable";
    }
    return "vtable-outside-exe";
}

static void CrashTryKey(HANDLE h, DWORD addr, DWORD* seen, int* nseen)
{
    if (*nseen >= 16)
        return;
    char key[48];
    if (!CrashCopyKey(addr, key, sizeof(key)))
        return;
    if (!CrashSeenAdd(seen, nseen, 16, addr))
        return;
    if (CrashInImage(addr))
    {
        char nearBuf[80];
        CrashCopyNear(addr, nearBuf, sizeof(nearBuf));
        CrashPrintf(h, "    %s  va=%08X  near=%s\n", key, addr, nearBuf);
    }
    else
        CrashPrintf(h, "    %s  va=%08X  (heap)\n", key, addr);
}

static void CrashTryObject(HANDLE h, const char* tag, DWORD addr, DWORD* seen, int* nseen, int fromStack)
{
    if (*nseen >= 16)
        return;
    DWORD vptr = 0;
    const char* kind = CrashVptrKind(addr, &vptr);
    char rtti[48];
    rtti[0] = 0;
    int hasRtti = CrashCopyRtti(addr, rtti, sizeof(rtti));
    if (fromStack && !hasRtti)
        return;
    if (!CrashSeenAdd(seen, nseen, 16, addr))
        return;
    if (hasRtti)
        CrashPrintf(h, "    %s=%08X  %s  vptr=%08X  %s\n", tag, addr, rtti, vptr, kind);
    else
        CrashPrintf(h, "    %s=%08X  vptr=%08X  %s\n", tag, addr, vptr, kind);
}

static void CrashScanPtrFields(HANDLE h, DWORD obj, DWORD* seen, int* nseen)
{
    if (!obj)
        return;
    unsigned d[16];
    memset(d, 0, sizeof(d));
    __try
    {
        memcpy(d, (const void*)(DWORD_PTR)obj, sizeof(d));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return;
    }
    for (int i = 0; i < 16; ++i)
        CrashTryKey(h, d[i], seen, nseen);
}

static void CrashWriteKnownSite(HANDLE h, DWORD rva)
{
    const char* msg = 0;
    if (rva >= 0x282EC0 && rva <= 0x283200)
        msg = "FUN_00682EC0 daily MP checksum / OOS dialog";
    if (msg)
        CrashPrintf(h, "  known_site: %s\n", msg);
    else
        CrashPrintf(h, "  known_site: none (new rva %06X — смотреть keys/objects)\n", rva);
}

static void CrashDumpSource(HANDLE h, CONTEXT* ctx)
{
    if (!ctx)
        return;

    CrashWrite(h, "  source:\n");
    DWORD rva = (g_base && ctx->Eip >= g_base && ctx->Eip < g_base + g_imageSize)
        ? (ctx->Eip - g_base) : 0;
    if (rva)
        CrashWriteKnownSite(h, rva);

    DWORD seenObj[16];
    DWORD seenKey[16];
    int nObj = 0;
    int nKey = 0;
    memset(seenObj, 0, sizeof(seenObj));
    memset(seenKey, 0, sizeof(seenKey));

    CrashWrite(h, "  source_objects:\n");
    CrashTryObject(h, "eax", ctx->Eax, seenObj, &nObj, 0);
    CrashTryObject(h, "ecx", ctx->Ecx, seenObj, &nObj, 0);
    CrashTryObject(h, "esi", ctx->Esi, seenObj, &nObj, 0);
    CrashTryObject(h, "edi", ctx->Edi, seenObj, &nObj, 0);
    CrashTryObject(h, "ebx", ctx->Ebx, seenObj, &nObj, 0);
    CrashTryObject(h, "edx", ctx->Edx, seenObj, &nObj, 0);

    if (ctx->Esi)
    {
        DWORD field40 = 0;
        DWORD field44 = 0;
        __try
        {
            field40 = *(DWORD*)(DWORD_PTR)(ctx->Esi + 0x40);
            field44 = *(DWORD*)(DWORD_PTR)(ctx->Esi + 0x44);
            CrashPrintf(h, "    esi+40=%08X esi+44=%08X (часто id/тип identity)\n",
                field40, field44);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
        }
    }

    CrashWrite(h, "  source_keys:\n");
    CrashScanPtrFields(h, ctx->Eax, seenKey, &nKey);
    CrashScanPtrFields(h, ctx->Ecx, seenKey, &nKey);
    CrashScanPtrFields(h, ctx->Esi, seenKey, &nKey);
    CrashScanPtrFields(h, ctx->Edi, seenKey, &nKey);

    __try
    {
        for (int i = 0; i < 384; ++i)
        {
            DWORD* slot = (DWORD*)(DWORD_PTR)(ctx->Esp + (DWORD)i * 4);
            if (SafeIsBadReadPtr(slot, 4))
                break;
            DWORD p = *slot;
            CrashTryKey(h, p, seenKey, &nKey);
            CrashTryObject(h, "stack", p, seenObj, &nObj, 1);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        CrashWrite(h, "    (stack scan faulted)\n");
    }

    if (nKey == 0)
        CrashWrite(h, "    (none)\n");
}

// MiniDumpNormal (2.95) = 0 — только стеки.
// Без MiniDumpWithIndirectlyReferencedMemory (0x40): из обработчика
// он долго ходит по куче и может зависнуть — тогда 3.06 не доходил
// до v2dll_crash.log. DataSegs + unloaded + thread + memory-info.
static const DWORD kDumpRich =
    0x00000001 | 0x00000020 | 0x00000800 | 0x00001000;

static LONG g_crashDumpSerial = 0;
static wchar_t g_crashDumpWritten[MAX_PATH];
static wchar_t g_crashLogWritten[MAX_PATH];

static void CrashStampName(wchar_t* dst, size_t cap, const wchar_t* dir,
    const wchar_t* prefix, const wchar_t* ext)
{
    SYSTEMTIME st;
    GetLocalTime(&st);
    LONG n = InterlockedIncrement(&g_crashDumpSerial);
    swprintf_s(dst, cap,
        L"%s\\%s_%04u%02u%02u_%02u%02u%02u_%u_%u_%ld%s",
        dir, prefix,
        (unsigned)st.wYear, (unsigned)st.wMonth, (unsigned)st.wDay,
        (unsigned)st.wHour, (unsigned)st.wMinute, (unsigned)st.wSecond,
        (unsigned)GetCurrentProcessId(), (unsigned)GetCurrentThreadId(),
        n, ext);
}

static HANDLE CrashCreateFileRetry(const wchar_t* path, DWORD access, DWORD share, DWORD disp)
{
    return CreateFileW(path, access, share, NULL, disp, FILE_ATTRIBUTE_NORMAL, NULL);
}

static void CrashPathToUtf8(const wchar_t* src, char* dst, size_t cap)
{
    dst[0] = 0;
    if (!src || !src[0] || cap < 2)
        return;
    int n = WideCharToMultiByte(CP_UTF8, 0, src, -1, dst, (int)cap, NULL, NULL);
    if (n <= 0)
        dst[0] = 0;
}

static void CrashWriteRaw(const wchar_t* path, DWORD disp, const char* text, int len)
{
    HANDLE h = CreateFileW(
        path, GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL, disp, FILE_ATTRIBUTE_NORMAL, NULL);
    if (h == INVALID_HANDLE_VALUE)
        return;
    if (disp == OPEN_ALWAYS)
        SetFilePointer(h, 0, NULL, FILE_END);
    DWORD wr = 0;
    if (text && len > 0)
        WriteFile(h, text, (DWORD)len, &wr, NULL);
    FlushFileBuffers(h);
    CloseHandle(h);
}

static bool CrashCodeIsNoise(DWORD code)
{
    return code == 0x40010006 || code == 0x4001000A || code == 0x406D1388 ||
        code == 0x80000003 || code == 0x80000004;
}

static bool CrashCodeIsFatal(DWORD code)
{
    return code == 0xC0000005 || code == 0xC0000006 || code == 0xC000001D ||
        code == 0xC0000094 || code == 0xC00000FD || code == 0xC0000409 ||
        code == 0xC0000374 || code == 0xC0000602 || code == 0xC0000417 ||
        code == 0x40000015;
}

static bool CrashIpInSelf(DWORD addr)
{
    if (!g_selfModule || !addr)
        return false;
    DWORD base = (DWORD)(DWORD_PTR)g_selfModule;
    IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)g_selfModule;
    if (dos->e_magic != IMAGE_DOS_SIGNATURE)
        return addr >= base && addr < base + 0x80000;
    IMAGE_NT_HEADERS32* nt = (IMAGE_NT_HEADERS32*)(base + dos->e_lfanew);
    DWORD size = nt->OptionalHeader.SizeOfImage;
    return addr >= base && addr < base + size;
}

static void CrashBreadcrumb(PEXCEPTION_POINTERS ep, const char* via, bool alsoV2log)
{
    InitLogDir();
    wchar_t path[MAX_PATH];
    swprintf_s(path, L"%s\\v2dll_crash_hint.txt", g_logsDir);

    DWORD code = 0, addr = 0, eip = 0;
    if (ep && ep->ExceptionRecord)
    {
        code = ep->ExceptionRecord->ExceptionCode;
        addr = (DWORD)(DWORD_PTR)ep->ExceptionRecord->ExceptionAddress;
    }
    if (ep && ep->ContextRecord)
        eip = ep->ContextRecord->Eip;

    SYSTEMTIME st;
    GetLocalTime(&st);
    char buf[512];
    CONTEXT* ctx = ep ? ep->ContextRecord : 0;
    DWORD p0 = 0, p1 = 0, npar = 0;
    if (ep && ep->ExceptionRecord)
    {
        npar = ep->ExceptionRecord->NumberParameters;
        if (npar >= 1)
            p0 = (DWORD)ep->ExceptionRecord->ExceptionInformation[0];
        if (npar >= 2)
            p1 = (DWORD)ep->ExceptionRecord->ExceptionInformation[1];
    }
    int n = sprintf_s(buf,
        "%04u-%02u-%02u %02u:%02u:%02u.%03u dll=%s via=%s pid=%u tid=%u "
        "code=%08X eip=%08X addr=%08X npar=%u p0=%08X p1=%08X",
        (unsigned)st.wYear, (unsigned)st.wMonth, (unsigned)st.wDay,
        (unsigned)st.wHour, (unsigned)st.wMinute, (unsigned)st.wSecond,
        (unsigned)st.wMilliseconds,
        MOD_VERSION, via ? via : "-",
        (unsigned)GetCurrentProcessId(), (unsigned)GetCurrentThreadId(),
        code, eip, addr, npar, p0, p1);
    if (n > 0 && ctx && n < (int)sizeof(buf) - 120)
    {
        n += sprintf_s(buf + n, sizeof(buf) - n,
            " eax=%08X ebx=%08X ecx=%08X edx=%08X esi=%08X edi=%08X "
            "ebp=%08X esp=%08X\r\n",
            ctx->Eax, ctx->Ebx, ctx->Ecx, ctx->Edx, ctx->Esi, ctx->Edi,
            ctx->Ebp, ctx->Esp);
    }
    else if (n > 0)
    {
        buf[n++] = '\r';
        buf[n++] = '\n';
        buf[n] = 0;
    }
    if (n > 0)
        CrashWriteRaw(path, OPEN_ALWAYS, buf, n);

    if (alsoV2log && g_logFile[0] && n > 0)
        CrashWriteRaw(g_logFile, OPEN_ALWAYS, buf, n);
}

static HANDLE CrashOpenLog()
{
    InitLogDir();
    wcscpy_s(g_crashLogWritten, g_crashLogFile);
    HANDLE h = CrashCreateFileRetry(
        g_crashLogFile,
        FILE_APPEND_DATA,
        FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
        OPEN_ALWAYS);
    if (h != INVALID_HANDLE_VALUE)
        return h;

    CrashStampName(g_crashLogWritten, MAX_PATH, g_logsDir, L"v2dll_crash", L".log");
    h = CrashCreateFileRetry(
        g_crashLogWritten,
        FILE_APPEND_DATA,
        FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
        OPEN_ALWAYS);
    if (h != INVALID_HANDLE_VALUE)
        return h;

    wchar_t exeDir[MAX_PATH];
    wcscpy_s(exeDir, g_logsDir);
    wchar_t* slash = wcsrchr(exeDir, L'\\');
    if (slash && _wcsicmp(slash, L"\\Logs") == 0)
        *slash = 0;
    CrashStampName(g_crashLogWritten, MAX_PATH, exeDir, L"v2dll_crash", L".log");
    return CrashCreateFileRetry(
        g_crashLogWritten,
        FILE_APPEND_DATA,
        FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
        OPEN_ALWAYS);
}

static DWORD CrashWriteDumpTo(const wchar_t* path, PEXCEPTION_POINTERS ep)
{
    HMODULE dbg = GetModuleHandleW(L"dbghelp.dll");
    if (!dbg)
        dbg = LoadLibraryW(L"dbghelp.dll");
    if (!dbg)
        return 0;

    typedef struct {
        DWORD ThreadId;
        PEXCEPTION_POINTERS ExceptionPointers;
        BOOL ClientPointers;
    } MiniDumpExceptionInfo;

    typedef BOOL(WINAPI* tMiniDumpWriteDump)(
        HANDLE, DWORD, HANDLE, DWORD, MiniDumpExceptionInfo*, void*, void*);

    tMiniDumpWriteDump fn = (tMiniDumpWriteDump)GetProcAddress(dbg, "MiniDumpWriteDump");
    if (!fn)
        return 0;

    HANDLE file = CrashCreateFileRetry(
        path, GENERIC_WRITE, FILE_SHARE_READ, CREATE_ALWAYS);
    if (file == INVALID_HANDLE_VALUE)
        return 0;

    MiniDumpExceptionInfo info;
    info.ThreadId = GetCurrentThreadId();
    info.ExceptionPointers = ep;
    info.ClientPointers = FALSE;

    DWORD used = kDumpRich;
    BOOL ok = FALSE;
    __try
    {
        ok = fn(GetCurrentProcess(), GetCurrentProcessId(), file, used, &info, 0, 0);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        ok = FALSE;
    }

    if (!ok)
    {
        SetFilePointer(file, 0, NULL, FILE_BEGIN);
        SetEndOfFile(file);
        used = 0;
        __try
        {
            ok = fn(GetCurrentProcess(), GetCurrentProcessId(), file, used, &info, 0, 0);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            ok = FALSE;
        }
        if (!ok)
            used = 0;
    }

    CloseHandle(file);
    if (!ok)
        DeleteFileW(path);
    return ok ? used : 0;
}

static DWORD CrashWriteDump(PEXCEPTION_POINTERS ep)
{
    g_crashDumpWritten[0] = 0;
    if (!g_settings.enableCrashDump)
        return 0;
    if (!ep || (ep->ExceptionRecord && ep->ExceptionRecord->ExceptionCode == 0xC00000FD))
        return 0;

    InitLogDir();

    wchar_t path[MAX_PATH];
    CrashStampName(path, MAX_PATH, g_logsDir, L"v2dll_crash", L".dmp");
    DWORD used = CrashWriteDumpTo(path, ep);
    if (!used)
    {
        wchar_t exeDir[MAX_PATH];
        wcscpy_s(exeDir, g_logsDir);
        wchar_t* slash = wcsrchr(exeDir, L'\\');
        if (slash && _wcsicmp(slash, L"\\Logs") == 0)
            *slash = 0;
        CrashStampName(path, MAX_PATH, exeDir, L"v2dll_crash", L".dmp");
        used = CrashWriteDumpTo(path, ep);
    }
    if (used)
        wcscpy_s(g_crashDumpWritten, path);
    return used;
}

static void ReportCrash(PEXCEPTION_POINTERS ep)
{
    if (!g_settings.enableCrashLog)
        return;
    if (ep && ep->ExceptionRecord)
    {
        if (CrashCodeIsNoise(ep->ExceptionRecord->ExceptionCode))
            return;
    }
    if (InterlockedCompareExchange(&g_inCrash, 1, 0) != 0)
        return;

    InitLogDir();
    CrashBreadcrumb(ep, "uef", true);

    HANDLE h = CrashOpenLog();
    if (h == INVALID_HANDLE_VALUE)
        return;

    DWORD dumpType = 0;

    __try
    {
        SYSTEMTIME st;
        GetLocalTime(&st);
        CrashPrintf(h,
            "\n======== CRASH %04u-%02u-%02u %02u:%02u:%02u.%03u dll=%s pid=%u tid=%u ========\n",
            (unsigned)st.wYear, (unsigned)st.wMonth, (unsigned)st.wDay,
            (unsigned)st.wHour, (unsigned)st.wMinute, (unsigned)st.wSecond,
            (unsigned)st.wMilliseconds,
            MOD_VERSION, (unsigned)GetCurrentProcessId(), (unsigned)GetCurrentThreadId());

        unsigned int cw = 0;
        _controlfp_s(&cw, 0, 0);
        CrashPrintf(h, "  fpu_cw=%08X mxcsr=%08X\n", cw, _mm_getcsr());
        CrashPrintf(h, "  oos_hits=%d sync_hits=%d last=%s\n",
            g_oosHits, g_syncHits, g_lastChecksumLine);
        {
            char oosDiag[160];
            FormatOosDiag(oosDiag, sizeof(oosDiag));
            CrashPrintf(h, "  %s\n", oosDiag);
        }

        EXCEPTION_RECORD* rec = ep ? ep->ExceptionRecord : 0;
        CONTEXT* ctx = ep ? ep->ContextRecord : 0;
        DWORD code = rec ? rec->ExceptionCode : 0;
        DWORD addr = rec ? (DWORD)(DWORD_PTR)rec->ExceptionAddress : 0;
        CrashPrintf(h, "  code=%08X (%s)\n", code, CrashCodeName(code));
        CrashLogAddr(h, "fault", addr);

        if (rec && code == 0xC0000005 && rec->NumberParameters >= 2)
        {
            CrashPrintf(h, "  av_%s addr=%08X\n",
                rec->ExceptionInformation[0] ? "write" : "read",
                (DWORD)rec->ExceptionInformation[1]);
        }
        if (rec && rec->NumberParameters)
        {
            CrashPrintf(h, "  params n=%u", rec->NumberParameters);
            DWORD lim = rec->NumberParameters;
            if (lim > 4)
                lim = 4;
            for (DWORD i = 0; i < lim; ++i)
                CrashPrintf(h, " p%u=%08X", i, (DWORD)rec->ExceptionInformation[i]);
            CrashWrite(h, "\n");
        }

        if (ctx)
        {
            CrashPrintf(h,
                "  eax=%08X ebx=%08X ecx=%08X edx=%08X esi=%08X edi=%08X\n"
                "  ebp=%08X esp=%08X eip=%08X eflags=%08X\n",
                ctx->Eax, ctx->Ebx, ctx->Ecx, ctx->Edx, ctx->Esi, ctx->Edi,
                ctx->Ebp, ctx->Esp, ctx->Eip, ctx->EFlags);
            CrashLogAddr(h, "eip", ctx->Eip);
            CrashDumpCode(h, ctx->Eip);

            CrashWrite(h, "  pointed:\n");
            CrashDumpPtr(h, "eax", ctx->Eax);
            CrashDumpNested(h, "eax", ctx->Eax, 0x14);
            CrashDumpNested(h, "eax", ctx->Eax, 0x18);
            CrashDumpPtr(h, "ebx", ctx->Ebx);
            CrashDumpPtr(h, "ecx", ctx->Ecx);
            CrashDumpPtr(h, "edx", ctx->Edx);
            CrashDumpPtr(h, "esi", ctx->Esi);
            CrashDumpPtr(h, "edi", ctx->Edi);
            CrashDumpPtr(h, "esp", ctx->Esp);

            CrashWrite(h, "  stack:\n");
            DWORD ebp = ctx->Ebp;
            CrashLogAddr(h, "  [0]", ctx->Eip);
            for (int i = 1; i <= 24; ++i)
            {
                if (SafeIsBadReadPtr((const void*)(DWORD_PTR)ebp, 8))
                    break;
                DWORD next = *(DWORD*)(DWORD_PTR)ebp;
                DWORD ret = *(DWORD*)(DWORD_PTR)(ebp + 4);
                char tag[16];
                sprintf_s(tag, "  [%d]", i);
                CrashLogAddr(h, tag, ret);
                if (!next || next <= ebp)
                    break;
                ebp = next;
            }

            CrashDumpSource(h, ctx);
        }

        FlushFileBuffers(h);
        if (code != 0xC0000374)
            dumpType = CrashWriteDump(ep);

        DWORD dumpSize = 0;
        if (g_crashDumpWritten[0])
        {
            HANDLE dumpFile = CreateFileW(
                g_crashDumpWritten, GENERIC_READ,
                FILE_SHARE_READ | FILE_SHARE_WRITE,
                NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
            if (dumpFile != INVALID_HANDLE_VALUE)
            {
                dumpSize = GetFileSize(dumpFile, NULL);
                CloseHandle(dumpFile);
            }
        }
        char dumpUtf8[MAX_PATH * 3];
        CrashPathToUtf8(g_crashDumpWritten, dumpUtf8, sizeof(dumpUtf8));
        if (!dumpUtf8[0])
            strcpy_s(dumpUtf8, g_settings.enableCrashDump ? "(none)" : "(disabled: ENABLE_CRASH_DUMP=0)");
        CrashPrintf(h, "  dump=%s type=%08X size=%u\n", dumpUtf8, dumpType, dumpSize);
        if (g_crashLogWritten[0] && _wcsicmp(g_crashLogWritten, g_crashLogFile) != 0)
        {
            char logUtf8[MAX_PATH * 3];
            CrashPathToUtf8(g_crashLogWritten, logUtf8, sizeof(logUtf8));
            CrashPrintf(h, "  crash_log_fallback=%s\n", logUtf8[0] ? logUtf8 : "(none)");
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        CrashWrite(h, "  (crash logger itself faulted)\n");
    }

    FlushFileBuffers(h);
    CloseHandle(h);
}

static LONG CALLBACK CrashVectored(EXCEPTION_POINTERS* ep)
{
    if (!ep || !ep->ExceptionRecord)
        return EXCEPTION_CONTINUE_SEARCH;
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    if (CrashCodeIsNoise(code) || !CrashCodeIsFatal(code))
        return EXCEPTION_CONTINUE_SEARCH;
    DWORD addr = (DWORD)(DWORD_PTR)ep->ExceptionRecord->ExceptionAddress;
    if (CrashIpInSelf(addr))
        return EXCEPTION_CONTINUE_SEARCH;
    CrashBreadcrumb(ep, "veh", code == 0xC0000374);
    // C0000374 часто FastFail: UEF не зовут, MiniDump по мёртвой куче
    // виснет. Пишем crash.log из VEH, без дампа.
    if (code == 0xC0000374)
        ReportCrash(ep);
    return EXCEPTION_CONTINUE_SEARCH;
}

static LONG WINAPI CrashUnhandled(EXCEPTION_POINTERS* ep)
{
    ReportCrash(ep);
    if (g_prevUef)
        return g_prevUef(ep);
    return EXCEPTION_CONTINUE_SEARCH;
}

static LPTOP_LEVEL_EXCEPTION_FILTER WINAPI HookSetUEF(LPTOP_LEVEL_EXCEPTION_FILTER p)
{
    if (p == CrashUnhandled)
        return g_realSetUEF ? g_realSetUEF(p) : 0;
    g_prevUef = p;
    if (g_realSetUEF)
        return g_realSetUEF(CrashUnhandled);
    return 0;
}

static void CrashFromAbort(DWORD code)
{
    EXCEPTION_RECORD rec;
    CONTEXT ctx;
    EXCEPTION_POINTERS ep;
    memset(&rec, 0, sizeof(rec));
    memset(&ctx, 0, sizeof(ctx));
    RtlCaptureContext(&ctx);
    rec.ExceptionCode = code;
    rec.ExceptionAddress = (void*)(DWORD_PTR)ctx.Eip;
    ep.ExceptionRecord = &rec;
    ep.ContextRecord = &ctx;
    ReportCrash(&ep);
}

static void __cdecl CrashOnAbort(int)
{
    CrashFromAbort(0x40000015);
    TerminateProcess(GetCurrentProcess(), 3);
}

static void __cdecl CrashOnInvalidParam(
    const wchar_t*, const wchar_t*, const wchar_t*, unsigned int, uintptr_t)
{
    CrashFromAbort(0xC0000417);
    TerminateProcess(GetCurrentProcess(), 3);
}

static void InstallCrashWatch()
{
    InitLogDir();

    ULONG guarantee = 32768;
    SetThreadStackGuarantee(&guarantee);

    AddVectoredExceptionHandler(1, CrashVectored);

    HMODULE k32 = GetModuleHandleA("kernel32.dll");
    if (k32)
        g_realSetUEF = (tSetUnhandledExceptionFilter)GetProcAddress(
            k32, "SetUnhandledExceptionFilter");
    if (g_realSetUEF)
        g_prevUef = g_realSetUEF(CrashUnhandled);
    else
        g_prevUef = SetUnhandledExceptionFilter(CrashUnhandled);

    HMODULE exe = GetModuleHandleA(NULL);
    if (exe && g_realSetUEF)
        HookIat(exe, "kernel32.dll", "SetUnhandledExceptionFilter",
            (void*)HookSetUEF, (void**)&g_realSetUEF);

    signal(SIGABRT, CrashOnAbort);
    _set_invalid_parameter_handler(CrashOnInvalidParam);

    Log("CrashWatch: Logs\\v2dll_crash.log + v2dll_crash_hint.txt%s",
        g_settings.enableCrashDump ? " + v2dll_crash_*.dmp" : " (memory dump выключен: ENABLE_CRASH_DUMP=0)");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        g_selfModule = hModule;
        InitLogDir();
        InitializeCriticalSection(&g_logCs);
        g_logCsInit = true;
        InstallCrashWatch();
        PinFpu();
        bool ok = false;
        __try
        {
            ok = Install();
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            ok = false;
        }
        Log("DllMain: attach, Install = %d", (int)ok);
        InterlockedExchange(&g_dllReady, 1);
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        InterlockedExchange(&g_clipboardWorkerStop, 1);
        DWORD threadId = (DWORD)InterlockedCompareExchange(&g_clipboardWorkerThreadId, 0, 0);
        if (threadId)
            PostThreadMessageA(threadId, WM_QUIT, 0, 0);
    }
    return TRUE;
}
