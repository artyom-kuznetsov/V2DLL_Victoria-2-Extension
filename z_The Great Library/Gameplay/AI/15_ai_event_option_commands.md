# 15. Event option и команды выбора

Адреса VA. Декомпилы лежат в decomp/v2game. Это продолжение 04_ai_events.md.

## Команды

### FUN_00907D40 - CSelectEventOptionCommand

Создаёт команду выбора опции события.

Command ID:

    0x03E4

Поля:

| Поле | Значение |
|---:|---|
| vftable | CSelectEventOptionCommand |
| +0x3C..+0x58 | копия option через FUN_00A15730 |
| +0x64 | дополнительный scope/id |

Хвост:

    FUN_008A88D0(optionScope)

### FUN_00905B30 - CExecuteDecisionCommand

Command ID:

    0x072E

Поля:

| Поле | Значение |
|---:|---|
| +0x3C | std::string с именем решения |
| +0x50 | CEventScope |

Используется модовыми decision-кнопками и ядром решений.

## FUN_008A8F30 - CEventWindow

Функция создаёт окно события для human-игрока.

Ключевые поля:

| Поле | Значение |
|---:|---|
| +0x02 | страна/владелец из countryManager+0xCDC |
| +0x03 | event object |
| +0x0D | внутренний scope |
| +0x16 | active flag |
| +0x17..+0x1B | observer/button glue 1 |
| +0x22..+0x26 | observer/button glue 2 |
| +0x31 | дата/таймер |
| +0x32 | UI scale/время |
| +0x58 | ready flag |
| +0xB4 | список опций |
| +0xCC | closing/processed flag |

Observer callbacks:

| Поле | Функция |
|---:|---|
| +0x19 | FUN_008AE150 |
| +0x24 | FUN_008AE230 |

## FUN_008AE150 - выбор опции human

Условие:

    window+0x58 != 0
    window+0x0B4 != 0

Функция ищет первый option, у которого option+0x38 != 0.

Затем:

1. Создаётся объект команды FUN_00AAE9AF.
2. FUN_008A88D0 инициализирует scope.
3. FUN_00907D40 создаёт CSelectEventOptionCommand.
4. Команда отправляется:

       dispatcher = *(world+0x0B24+0x44)
       dispatcher+0x38+0x18(command)

5. window+0x58 = 0.
6. window+0xCC = 1.

## FUN_008AE230

Короткий обработчик:

    option = window+0x04
    return option->vftable+0x2C()

Декомпилятор не смог восстановить jump table, но виден вызов virtual +0x2C у активного объекта.

## Отличие AI и human

В FUN_008A8120:

| Владелец | Путь |
|---|---|
| AI | вес опций FUN_008AEB00, random, FUN_00907D40 напрямую |
| human local | FUN_008A8F30 создаёт CEventWindow и ждёт клик |
| human другой машины | popup не создаётся на этой машине |

Поэтому корректный human/AI флаг критичен для MP: AI сразу создаёт команду, а human-владелец только на локальной машине создаёт popup.

## Статус

Подтверждено: обе команды, поля CEventWindow, human callback выбора опции и отправка команды. Полный список виртуальных методов option можно добавить следующим шагом.
