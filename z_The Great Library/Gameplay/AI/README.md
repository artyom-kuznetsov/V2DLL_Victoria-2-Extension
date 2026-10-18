# The Great Library - AI

Реверс поведения ИИ Victoria 2 3.04. Все адреса в документах - VA, если не указано RVA. Сырые декомпилы лежат в decomp/v2game.

## Тома

| Файл | Содержание |
|---|---|
| 00_ai_architecture.md | Верхний уровень, AI object, очередь, адресация |
| 01_ai_daily_dispatcher.md | FUN_0081E9E0 и все ежедневные подсистемы |
| 02_ai_targets_and_cb.md | Цели войны/дипломатии, colonize planner, CB scan |
| 03_ai_factories_construction.md | Фабрики, проекты, субсидии, закрытие |
| 04_ai_events.md | Country/province events, MTTH, авто-выбор опций |
| 05_ai_mod_hooks.md | DecisionCull, prefetch, CB cull, fast queue |
| 06_ai_diplomacy_actions.md | Дипломатические scorer-функции FUN_00820DF0 |
| 07_ai_research.md | CAIResearch, vftable и выбор технологии |
| 08_ai_national_focus.md | National Focus AI |
| 09_ai_foreign_minister.md | Foreign Minister: выбор цели и scorer |
| 10_ai_diplomatic_acceptance.md | Diplomatic acceptance и crisis AI |
| 11_ai_military_params_plans.md | Военные defines, причины и CAIPlan |
| 12_ai_military_target_planner.md | FUN_008500A0: выбор провинции и переброска армий |
| 13_ai_army_allocation_planner.md | FUN_00851BD0: балансировка и подкрепление задач |
| 14_ai_tech_priority.md | Технологии: FUN_00569920, вес и команда исследования |
| 15_ai_event_option_commands.md | CEventWindow, выбор опции и команды |
| 16_ai_army_movement_commands.md | Army execution: путь, CMoveCommand, split, transfer, fallback |
| 17_ai_army_movement_runtime.md | Выполнение CMoveCommand, путь армии, ETA |
| 18_ai_siege_combat.md | Осада, ежедневный тик, потери, оккупация |
| 19_ai_naval_transport_commands.md | Погрузка, выгрузка, split-load, merge, вместимость |
| 20_ai_daily_army_tick.md | Дневное движение, скорость, прибытие, посадка, аттриция |
| 21_full_function_coverage.md | Полное покрытие реальных функций: 18267/18267 |

Связанный том ../02_ai_industry.md остаётся краткой промышленной сводкой; здесь находится расширенный AI-пакет.

## Сырые декомпилы

Получено из Ghidra 12.1.2. Полный корпус: 18267 реальных функций и 18267 файлов callers.
Ghidra также содержит 45588 unwind/псевдофункций; они исключены из исполняемого корпуса.

Каталоги:

| Файл | Содержание |
|---|---|
| decomp/v2game/function_catalog.tsv | 18267 реальных функций |
| decomp/v2game/all_functions_inventory.tsv | 63855 всех Ghidra-записей |

Ключевые функции:

| Функция | Роль |
|---|---|
| FUN_006874C0 | AI frame queue |
| FUN_0081E9E0 | daily AI dispatcher |
| FUN_00821190 | decisions |
| FUN_0084B0F0 | target scan |
| FUN_0092EDE0 | CB scan |
| FUN_004A5170 | construction planner |
| FUN_008A7CD0 | event scheduler |
| FUN_008A8120 | event fire/AI option |
| FUN_008AEB00 | AI option weight |
| FUN_00859710 | research technology choice |
| FUN_00853FC0 | national focus recalc |
| FUN_00852A00 | issue AI army movement |
| FUN_00826AA0 | build CMoveCommand |
| FUN_005B8500 | province pathfinding |
| FUN_0084FD10 | transfer subunit/army between AI tasks |
| FUN_005DEAE0 | execute CMoveCommand |
| FUN_005DED20 | attach province path to army |
| FUN_0059CA40 | daily siege/naval combat tick |
| FUN_005A0180 | resolve terminal combat, losses and occupation |
| FUN_00595DB0 | combat side aggregate and casualty sampling |
| FUN_00594800 | visible siege/combat modifiers |
| FUN_005D25C0 | daily movement progress and arrival |
| FUN_005D1570 | army movement speed |
| FUN_005D0670 | daily attrition roll |
| FUN_005E4530 | execute load-army command 0x0579 |
| FUN_005E3480 | execute unload-army command 0x057A |
| FUN_005E3B50 | execute split-and-load command 0x09A8 |

## Семантические дожимы

Все реальные функции уже присутствуют в сыром декомпиле. Дальнейшая работа
может касаться не покрытия, а выборочного объяснения: стабильные структуры,
формулы конкретных систем, перекрёстные таблицы виртуальных методов и сводки
по крупным кластерам вызовов.

## Wartime army status

Разобран полный путь от AI-планировщика до исполнения: команда движения,
поиск маршрута, присоединение очереди к армии, визуальные/провинциальные
счётчики, осада, падение провинции, отступление и морская погрузка/выгрузка.
Крупный итоговый отчёт `FUN_005A0180` разобран как CBattleResult и scripted
event; фактические боевые потери применяются в `FUN_00595DB0` и
`FUN_005C0160`. Дневной армейский цикл закрыт томом 20.
