# 07. Research AI: CAIResearch

Адреса VA. Класс найден по RTTI-строке CAIResearch.

## RTTI/vftable

TypeDescriptor:

    .?AVCAIResearch@@ @ 0x00F18258
    TypeDescriptor start @ 0x00F18250

CompleteObjectLocator - @ 0x00E5BE48. Ссылка на него - @ 0x00E286C0.

Therefore:

    CAIResearch::vftable @ 0x00E286C4

## Vftable

| Slot | VA | Функция |
|---:|---:|---|
| 0 | 0x00859560 | scalar deleting destructor |
| 1 | 0x009A29F0 | vector/list helper |
| 2 | 0x009C1A30 | id/list cleanup |
| 3 | 0x009A2A90 | persistent parser |
| 4 | 0x009C1A60 | parser dispatcher, category 0x0B |
| 5 | 0x004010C0 | ret |
| 6 | 0x009C1390 | ID creation/validation |
| 7 | 0x00825CF0 | create internal id |
| 8 | 0x00825D40 | доступность/флаг +0x3C |
| 9 | 0x00826480 | cleanup/progress |
| 10 | 0x00859610 | monthly recalc |

## FUN_00859610 - ежемесячный апдейт

Функция ставит active flag +0x30 = 1.

Вычисляет текущий день года из world+0x0B0C и таблицы DAT_00F1027C/DAT_00F10280. Если день изменился:

    object+0x68 = dayOfYear

Затем проверяет country+0x04CC. Если поле равно 0, вызывает FUN_00859710 - выбор технологии.

## FUN_00859710 - выбор технологии

Условие: страна цивилизована:

    country+0x12D0 != 0

Алгоритм:

1. Создаёт CEventScope через FUN_008A8650.
2. Лениво создаёт технологический кэш DAT_0125EADC через FUN_00576FE0/FUN_0057AB10.
3. Проходит список доступных технологий.
4. Virtual tech+0x20 проверяет допустимость.
5. FUN_0057A4C0 возвращает бонус/приоритет категории.
6. FUN_00569920 проверяет, можно ли исследовать технологию.
7. FUN_0056BC50 проверяет требования/группу.
8. Читает modifier из tech object+0x310 + category index, прибавляет 1000.
9. Учитывает год и tech+0x340:

       age = currentYear - tech+0x340
       if age > 0:
           bonus *= (50000/100000 * age + 1)

10. Нормирует приоритет через максимум FUN_0057A4C0:

       score = (2000 - current/max * 1000) * base / 1000 + Random

11. Сохраняет candidates и weights.
12. Выбирает технологию взвешенным Random из MT state DAT_012588E8+0x0A74.
13. FUN_0058AD00 создаёт research command.
14. Команда отправляется через world+0x0B24+0x38+0x18.

## Случайность

Выбор технологии использует Mersenne Twister напрямую:

    index = DAT_012588E8+0x0A74
    state = DAT_012588E8+0x0B4 + index*4

Это важно для MP: любое расхождение доступности технологии или приоритета изменит число draws.

## Модовый контекст

Известный патч allow_unciv_tech_research пытался отключить UNCIV_CANT_RESEARCH, но сигнатура из старого патча обычно не совпадает. Реальный гейт проверки - FUN_00569920, вызываемый именно research AI.

## Статус

Подтверждено: класс, vftable, ежемесячный апдейт, выбор технологии, формулы веса и Random. Требует доработки: точная семантика всех полей tech+0x310 и полный разбор FUN_00569920.
