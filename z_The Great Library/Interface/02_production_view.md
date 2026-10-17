# 02. Production View: фабрики, фильтры и постройка

Экран объявлен в interface/country_production.gui. Класс - CProductionView, vftable RVA 0xA0FECC. DLL подписывается на tooltip-слот 10 и использует offGlue +0x120.

## Структура экрана

Основные окна и списки:

| Имя | Назначение |
|---|---|
| tab_factories / tab_invest / tab_goodsproduction / tab_popprojects | переключение вкладок |
| close_button | закрытие экрана |
| factory_buttons | панель управления вкладки Factories |
| invest_buttons | панель управления вкладкой Investments |
| filter_bounds | контейнер для генерируемых кнопок-фильтров товаров |
| state_listbox | список регионов/фабрик вкладки Factories |
| state_listbox_invest | список регионов/фабрик вкладки Investments |
| project_listbox | список проектов/попов |
| good_production | goods production/production info |
| country_listbox | список стран в investment browser |
| investment_browser | окно выбора стран для инвестиций |

## Панель factory_buttons

| Кнопка | Действие | Состояние реверса |
|---|---|---|
| prod_subsidize_all | включить субсидирование всем доступным фабрикам | vanilla, функция не разобрана |
| prod_unsubsidize_all | выключить субсидирование | vanilla, функция не разобрана |
| prod_open_all_factories | открыть фабрики в отображаемом контексте | vanilla, функция не разобрана |
| prod_close_all_factories | закрыть фабрики в отображаемом контексте | vanilla, функция не разобрана |
| select_all | select all в текущем списке | vanilla, точная семантика выборки не зафиксирована |
| deselect_all | снять выбор | vanilla, точная семантика выборки не зафиксирована |
| show_empty_states | показывать регионы без фабрик | vanilla-переключатель |
| hide_colonial_states | собственный фильтр колоний | полностью связан с DLL-хуком |
| sort_by_name | сортировка по имени | vanilla |
| sort_by_factories | сортировка по числу фабрик | vanilla |
| sort_by_infra | сортировка по инфраструктуре | vanilla |

## Собственная кнопка hide_colonial_states

Условия:

1. Элемент найден в factory_buttons.
2. Экран жив. Подписка выполняется при первом проходе hook-слота CProductionView.
3. FACTORY_ALLOW_CONSTRUCTION_IN_COLONIAL=1 для установки хука списка. Сама кнопка подписывается независимо, но без хука клик не даёт эффекта.

Механика:

1. Клик меняет локальный флаг hideColonialStates.
2. Вызывается FUN_006F3E70, RVA 0x2F3E70, перестройка списка Factories.
3. Хук на развилке RVA 0x2F424B проверяет state+0x84. Это флаг колониального региона.
4. Если фильтр включён и регион колониальный, строка пропускается.
5. Флаг show_empty_states и наличие построенных фабрик при включённом скрытии колоний не возвращают регион.

Известные адреса:

| Значение | RVA |
|---|---:|
| refresh factory list | 0x2F3E70 |
| visibility branch | 0x2F424B |
| show resume | 0x2F4255 |
| skip resume | 0x2F42DE |

## Кнопки-фильтры товаров

Фильтры не объявлены статически. Движок генерирует их внутри filter_bounds. Массив включённых кнопок у view:

| Вкладка | Вектор |
|---|---|
| Factories | view+0x5C |
| Investments | view+0x6C |

Каждый элемент массива имеет размер 0x14:

| Смещение | Поле |
|---:|---|
| +0x08 | индекс товара |
| +0x0C | включён ли фильтр |

Ванильный предикат - FUN_006F7F80, RVA 0x2F7F80. Фабрика проходит фильтр, если включённый товар совпадает с выходом или с любым входным сырьём фабрики.

### FACTORY_FILTER_BY_PRODUCERS_ONLY

При FACTORY_FILTER_BY_PRODUCERS_ONLY=1 критерий заменяется: совпадение разрешено только по выходному товару. Регион, где товар только потребляется как вход, не показывается.

Выходной товар:

    type = factory+300
    outGood = *(type+0x80)
    outIndex = *(outGood+8)

Флаг структурной валидности фабрики сохраняется: тип не нулевой и не служебный sentinel.

### FILTER_SHOW_ALL_FACTORIES_IN_STATE

При FILTER_SHOW_ALL_FACTORIES_IN_STATE=1 DLL перед ванильным предикатом проходит всю цепочку фабрик региона. Если хотя бы одна фабрика прошла текущий фильтр, для этого региона показываются все структурно валидные фабрики.

Цепочка:

    state+0x60 -> первый узел
    next = node+0x224
    state = node+0x1C
    factory = *(node+0x18)

Хук подменяет два места вызова предиката:

| Список | RVA |
|---|---:|
| Factories | 0x2F41F7 |
| Investments | 0x2F7471 |

Флаги FILTER_SHOW_ALL_FACTORIES_IN_STATE и FACTORY_FILTER_BY_PRODUCERS_ONLY могут работать вместе. Сначала формируется критерий прохождения отдельной фабрики, затем по нему решается вопрос показа всего региона.

### HIDE_RAW_GOODS_PRODUCTION_FILTER_BUTTONS

При HIDE_RAW_GOODS_PRODUCTION_FILTER_BUTTONS=1 кнопки товаров с именем, начинающимся на raw_, скрываются. DLL определяет имя по индексу и подменяет координату на (-2000,-2000). Кнопка продолжает существовать в дереве, но не видна и не кликабельна.

Сетка фильтров первой вкладки подтверждена живыми логами: 24 кнопки в ряд, шаг X 31, ряды Y 56, 83, 110. Массив товаров идёт шагом 20 байт; индекс = byteOffset / 20.

Скрытие применяется к обоим place-хукам:

| Call site | RVA |
|---|---:|
| вкладка Factories | 0x2F1C30 |
| вторая вкладка | 0x2F1EC0 |

Во втором цикле currently работает только наблюдение, не скрытие.

## Кнопка постройки фабрики

Основные UI-элементы:

| Имя | Назначение |
|---|---|
| build_new_factory | кнопка плюс в карточке региона |
| build_factory | окно постройки |
| factory_type | выбор типа фабрики |
| Cancel | отмена |
| Build | подтверждение постройки |
| new_factory_option | шаблон элемента выбора типа |

Ванильная цепочка:

1. FUN_0052E960, RVA 0x12E960, решает, активна ли кнопка плюс.
2. FUN_0052C9B0, RVA 0x12C9B0, выполняет реальную проверку can build при подтверждении.
3. FUN_0052CA30, RVA 0x12CA30, оборачивает общий чек-лист FUN_004D04B0, RVA 0x0D04B0.
4. Отдельно проверяются деньги и доступные ресурсы.

В FUN_0052C9B0 вызываются FUN_0052E960, FUN_0052CA30 и проверка денег.

### FACTORY_ALLOW_CONSTRUCTION_IN_COLONIAL

Объединённый флаг включает три байтовых патча:

| Внутренний патч | RVA | Действие |
|---|---:|---|
| build_factory_ignore_colonial_1 | 0x0D0C57 | чек-лист перестаёт помечать регион как недоступный только из-за колониальности |
| build_factory_ignore_colonial_2 | 0x12FA4E | вторая ветка чек-листа делает то же |
| build_factory_button_enable_ignore_colonial | 0x12E977 | NOP ветки JG, запрещавшей активность кнопки плюс в колонии |

Отдельно связанный флаг FACTORY_COLONIAL_ALLOW_LOCAL_SUPPLY убирает независимую блокировку collapsed/local-source типов в колонии. Патч находится в FUN_004D0E70, RVA 0x0D0E9D, и затрагивает только путь source type 2 + colonial.

### FACTORY_COLONIAL_ALLOW_ALL и whitelist

Хук ProdTypeGate стоит в FUN_004D04B0 на RVA 0x0D04BC.

Режимы:

| Флаг | Поведение |
|---|---|
| FACTORY_COLONIAL_ALLOW_ALL=1 | в колонии разрешены все типы, белый список не используется |
| FACTORY_COLONIAL_ALLOW_ALL=0 | разрешаются типы с limit_by_local_supply=yes и записи FACTORY_COLONIAL_EXTRA_WHITELIST |

Whitelist хранит имена из production_types.txt. Значение через запятую, максимум 32 имени, длина имени до 63 символов. Пример:

    FACTORY_COLONIAL_EXTRA_WHITELIST=fishery,some_other_type

При плохом указателе или невозможности безопасно прочитать имя хук делает безопасный откат в allow, чтобы не ронять загрузку.

### FACTORY_ALLOW_UNCIV_CONSTRUCTION

Флаг объединяет четыре патча:

| Внутренний патч | RVA | Действие |
|---|---:|---|
| build_factory_ignore_uncivilized_button | 0x12E96E | убирает ранний запрет активности кнопки плюс для нецивилизованной страны |
| build_factory_checklist_uncivilized_own | 0x12EA67 | чек-лист для своей территории всегда показывает пункт Civilized |
| build_factory_checklist_uncivilized_other | 0x12F0D4 | для чужой территории убирает запрет, если не цивилизованы мы, сохраняя проверку владельца |
| build_factory_ignore_uncivilized_can_build | 0x12CA3E | реальная проверка постройки больше не отбрасывает страну до вызова общего чек-листа |

С необязательной, но принудительно включённой защитой CivilizeNullCheck цивилизация страны без свободного слота не должна приводить к вылету.

## Действия над существующей фабрикой

Карточка factory_info содержит:

| Имя | Действие |
|---|---|
| upgrade | начать расширение фабрики |
| prod_cancel_progress | отменить текущее строительство/расширение |
| subsidise | переключатель субсидии фабрики |
| priority | приоритет распределения работников |
| delete_factory | снести фабрику |
| open_close | открыть или закрыть фабрику |

Эти обработчики - vanilla и не переверстаны до уровня формул. DLL влияет на последствия закрытия:

| Флаг | Эффект |
|---|---|
| FACTORY_REFUND_SAVINGS_ON_CLOSE | возвращает сбережения владельцев при закрытии фабрики |
| FACTORY_AUTO_CLOSE_UNPROFITABLE | автоматически закрывает убыточные фабрики по внутреннему правилу |
| FACTORY_FORCE_MIN_WAGE | форсирует фиксированную минимальную зарплату работникам |
| FACTORY_AI_SPAM_FIX | убирает повторяющееся расширение/перенайм AI-фабриками |
| FACTORY_AI_FACTORY_PRIORITY_RULESWAP | привязывает перезапись приоритетов к factory_priority=no вместо delete_factory_if_no_input=yes |

## Сортировки и проекты

На уровне Production экрана есть сортировки проектов и инвесторов:

| Кнопка | Назначение |
|---|---|
| sort_by_state | сортировка проектов по региону |
| sort_by_projects | сортировка по проектам |
| sort_by_completion | сортировка по завершённости |
| sort_by_projecteers | сортировка по инвесторам |
| invest_country_browse | открыть investment browser |

В investment browser есть региональные фильтры: filter_all, filter_north_america, filter_south_america, filter_europe, filter_africa, filter_asia, filter_oceania, filter_neighbours, filter_sphere, filter_enemies, filter_allies. Их внутренние предикаты пока не задокументированы.

## Приоритет следующего реверса

1. Обработчики prod_subsidize_all/unsubsidize_all.
2. Обработчики prod_open_all_factories/close_all_factories.
3. Внутренний формат project_listbox и кнопок инвестирования.
4. Generic-система сортировок.
5. Полный список полей карточки фабрики и их tooltip-функций.
