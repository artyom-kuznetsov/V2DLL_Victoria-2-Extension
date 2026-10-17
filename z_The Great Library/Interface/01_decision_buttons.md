# 01. Кнопки решений и экраны Technology/Budget

## Что реализовано

Таблица в DLL имеет четыре вьюхи и до восьми кнопок. Активная конфигурация:

| UI-кнопка | Экран | Родитель из .gui | Вызываемое решение |
|---|---|---|---|
| FE_ACADEMIES_BDSM | CTechnologyView | selected_tech_window | open_academy_decisions_dec |
| FE_RPROJECTS_BDSM | CTechnologyView | selected_tech_window | open_research_projects_dec |
| FE_BUDGET_DIPLO_BDSM | CBudgetView | корневой контейнер | exchange_settings_dec |

Объявления кнопок находятся в модовых файлах:

    interface/country_technology.gui
      selected_tech_window
        FE_ACADEMIES_BDSM
        FE_RPROJECTS_BDSM

    interface/country_budget.gui
        FE_BUDGET_DIPLO_BDSM

Локализация - ключи с теми же именами в localisation/TEXT_ALL.csv.

## Общий путь клика

1. Хук слота вьюхи видит новый объект экрана.
2. Из view+0x4C берётся контейнер. Для Technology дополнительно слотом 0x6C ищется selected_tech_window.
3. Слотом 0x34 ищется кнопка по имени.
4. Создаётся индивидуальный клон CButtonObserverGlue. В +0x08 подставляется ThunkN.
5. Клон подписывается на button+0x54 через Observable слот 0x04.
6. Клик входит в FireDecision(index).
7. FireDecision создаёт фальшивый UI-элемент размером 0x30.
8. Функция OnMakeDecisionClicked по RVA 0x2DCE10 выполняет решение.

Фальшивый элемент содержит строку вида:

    POLITICSVIEW_DECISION + decision_name

Например:

    POLITICSVIEW_DECISIONopen_academy_decisions_dec

Смещения фальшивого элемента: данные строки +0x14, reserved +0x28.

## Условия и ограничения

| Условие | Значение |
|---|---|
| ENABLE_BUTTONS | 1. При 0 подписка кнопок решений не выполняется. |
| Существование решения | Имя должно точно совпадать с decision-объектом, загруженным из decisions/*.txt. |
| Экран | Кнопка доступна только после создания соответствующего вьюха и выполнения его слота Update/Tooltip. |
| Скриптовые potential/allow | На прямой клик из собственной кнопки не действуют как фильтр UI. OnMakeDecisionClicked просто исполняет effects. |
| Пересоздание экрана | Подписка повторяется, потому что указатель view сравнивается с последним настроенным. |
| Переключение партии/загрузка сейва | Новый экран получает новую подписку. |
| Мультиплеер | Решение проходит через игровую команду исполнения. Содержимое effects должно быть обычным синхронизируемым скриптом. |

Важно: оригинальный Politics UI показывает решение только после собственного набора проверок. Собственная кнопка это окно обходят. Если решение должно быть доступно при условиях, эти условия нужно либо встроить в effects, либо добавить отдельную проверку перед FireDecision.

## Скрытие из окна Politics

Включается ключом ENABLE_DECISION_FILTER=1.

Движок вызывает CDecision::vtable slot +0x18 - индекс 6 - при отрисовке и исполнении. Заглушка ванили всегда возвращает 1. DLL подменяет её на MyDecisionIsValid.

Логика MyDecisionIsValid:

1. Если решение не входит в таблицу BUTTONS, возвращается 1.
2. Для модовых решений берётся ReturnAddress.
3. Если вызов пришёл из построения списка Politics, возвращается 0: решение скрыто.
4. Во всех остальных случаях возвращается 1: исполнение разрешено.

Границы построения списка Politics:

| Параметр | RVA |
|---|---:|
| начало | 0x2DB2E0 |
| конец | 0x2DC750 |
| CDecision vftable | 0xA29B54 |
| IsValid slot | 0x18 / индекс 6 |
| Decision name | объект +0x08 |

Это фильтр отображения, а не валидатор триггеров. Он не выполняет script conditions и не вмешивается в исполнение.

## Как добавить четвёртую кнопку

Текущий потолок MAX_BUTTONS=8, используется три записи, так что запас есть.

1. Добавить guiButtonType в нужный .gui и локализацию.
2. Добавить запись в ButtonDef:

        { viewIndex, "NEW_BUTTON_NAME", "my_decision_name" }

3. Убедиться, что решение загружается. Проверить точное имя в decisions/*.txt.
4. Если нужен экран, отсутствующий в ViewDef, добавить отдельную ViewDef с vftable, слотом и offGlue. Максимум MAX_VIEWS=4, сейчас все четыре слота заняты.
5. Если нужен новый экран, требуется расширить массивы thunks, а не просто увеличить MAX_VIEWS: THUNKS сгенерированы только для индексов 0..7, VIEW_THUNKS только для 0..3.
6. Включить ENABLE_BUTTONS=1 и, при необходимости, ENABLE_DECISION_FILTER=1.
7. Проверить лог: Setup[Class]: BUTTON_NAME подписана, затем FireDecision: UI-кнопка -> decision.

## Известные адреса

| Значение | RVA | Назначение |
|---|---:|---|
| OnMakeDecisionClicked | 0x2DCE10 | исполнение решения |
| Politics list begin | 0x2DB2E0 | фильтр отображения |
| Politics list end | 0x2DC750 | фильтр отображения |
| CDecision vftable | 0xA29B54 | подмена IsValid |

## Текущие пробелы

Не переверстано: стандартная валидация Politics UI по шагам, обработка подсветки недоступных решений, отдельные кнопки событий и опций событий. Это следующий логичный блок Interface/EVENTS.
