# 05. DecisionCull, prefetch и быстрая очередь

Модовые оптимизации ИИ - источник точных адресов и структур.

## DecisionCull

Цель: отдать AI-стране частный менеджер решений, содержащий только решения, чьи простые gates могут пройти. UI игрока продолжает читать оригинальный менеджер.

Ключевые адреса:

| Имя | RVA | VA |
|---|---:|---:|
| world/date | 0xE588E8 | 0x012588E8 |
| country manager | 0xE587E4 | 0x012587E4 |
| decision manager pointer | 0xF19730 | 0x01319730 |
| getter | 0x475040 | 0x00875040 |
| AI update | 0x421190 | 0x00821190 |
| AI call site | 0x41EA9B | 0x0081EA9B |
| scope ctor | 0x4A8650 | 0x008A8650 |
| AND evaluate | 0x4B8260 | 0x008B8260 |
| trivial decision check | 0x631490 | 0x00A31490 |
| clear country fn | 0x482A40 | 0x00882A40 |
| clear global fn | 0x482BA0 | 0x00882BA0 |

Getter call sites RVA:

    0x45D34F
    0x45D459

Менеджер решений:

| Смещение | Поле |
|---:|---|
| +0x0C..+0x10 | список A |
| +0x28..+0x2C | список B |

Объект решения:

| Смещение | Поле |
|---:|---|
| +0x24 | potential trigger block |
| +0x40 | allow trigger block |
| vtable+0x18 | evaluate |
| vtable+0x18 у check | trivial always-true |

CEventScope:

| Смещение | Поле |
|---:|---|
| +0x08 | tag, 4 байта |
| +0x0C | country index |
| +0x24 | self pointer |

Классификация потенциальных триггеров:

| Vtable RVA | Смысл |
|---:|---|
| 0x9F9994 | AND |
| 0xA2FBA8 | NOT |
| 0xA30C80 | country tag |
| 0xA307E8 | country flag |
| 0xA30820 | global flag |
| 0xA30EE8 | AI gate |

Алгоритм:

1. Refresh читает оба списка решений и классифицирует простые gates.
2. Для каждой страны создаётся private list A/B.
3. Отсекаются решения по tag, AI gate и country/global flags.
4. Кэш живёт 90 дней или до dirty-события.
5. Скриптовые clear country/global flags помечают кэш dirty.
6. Перед вызовом FUN_00821190 глобальный указатель подменяется на fake manager.
7. После вызова восстанавливается оригинал.

## Parallel decisions

PATCH_PARALLEL_DECISIONS работает только с DecisionCull и FastAiQueue.

Режимы:

| Значение | Поведение |
|---:|---|
| 1 | использовать предвычисленные списки |
| 2 | shadow compare: считать параллельно, но возвращать serial результат |

Перед кадром очередь собирает pending страны. Для каждой страны создаются списки прошедших решений. Несовпадения логируются как ParallelDecisions mismatch.

## FastAiQueue

| Параметр | Значение |
|---|---|
| call site RVA | 0x2557C4 |
| AI frame update RVA | 0x2874C0 |
| world speed | world+0x0B28 |
| max speed | 4 |
| frame limit | 250 ms |

На скорости 4 функция после обычного FUN_006874C0 продолжает вызывать его, пока очередь не пуста или не истечёт лимит.

## RelationPrefetch

Отношения хранятся как массив указателей на строки country+0x0BE8. Используемые смещения:

| Функция | Offset |
|---|---:|
| recalc | 0x00, 0x2C, 0x38, 0x70 |
| market | 0x34 |
| purge | 0x20, 0x50, 0xA8 |

Хуки RVA:

| Сайт | Функция |
|---:|---|
| 0x1089DB | 0x115490 recalc |
| 0x087483 | 0x122CF0 market |
| 0x10AC44 | 0x52E290 purge |
| 0x10B6B9 | 0x12FCD0 pair |

Для AI target scan отдельно патчится vtable RVA 0xA2773C на FUN_0084B0F0. Перед сканом prefetch читает relation+0x34 для всех живых и мёртвых стран.

## Parallel events

Это ускорение не decision AI, но связано с AI, потому что AI-события выбирают опции автоматически.

Адреса RVA:

| Имя | RVA |
|---|---:|
| scan call | 0x2861E8 |
| scan | 0x4A7CD0 |
| fire call 1 | 0x4A7EF4 |
| fire call 2 | 0x4A80D5 |
| fire | 0x4A8120 |
| AND vtable | 0x9F9994 |

Параллелится только вычисление триггеров. Effects, MTTH и random draws остаются serial. Режим 2 - shadow compare.

## Проверка совместимости

Все патчи сначала сравнивают сигнатуры и call targets. Несовпадение оставляет оригинальный код без изменений и пишет лог. Для MP значения симуляционных ключей должны совпадать у всех игроков.
