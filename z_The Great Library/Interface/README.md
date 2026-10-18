# The Great Library - Interface

Реверс-документация интерфейса Victoria 2 3.04 и модовых расширений. Адреса указаны как RVA; VA = RVA + 0x400000.

## Том

| Файл | Содержание |
|---|---|
| 00_gui_engine.md | Обход дерева UI, GStr, Observable, CButtonObserverGlue, вьюхи, ползунки, restart |
| 01_decision_buttons.md | Модовые кнопки Technology/Budget, вызов решений, фильтр Politics |
| 02_production_view.md | Кнопки и фильтры Production, постройка фабрик, колонии, unciv |
| 03_topbar_music_player.md | Topbar, музыкальные кнопки, пауза, громкость, fair random |
| 04_gui_button_inventory.md | Автоматический индекс 1205 guiButtonType из 53 .gui файлов |
| 05_ledger_linegraphs.md | Ledger: выбор list/linegraph, 0x58-byte page record, легенда, чарты |
| 06_province_view.md | Province View: named-control dispatcher, владелец, строительство, военные цели |

## Правила использования

04 - это только инвентарь объявлений. Он не подтверждает наличие обработчика, доступность кнопки или её реальную функцию. Поведение фиксировать только после реверса вызова или проверки живым логом.

## Очередь

1. События и опции событий.
2. Settings Screen и все ползунки.
3. Menubar/menu panel и диалоги.
4. Politics View.
5. Province View и map buttons.
6. Полный разбор ванильных обработчиков topbar.
7. Military, diplomacy, trade, pops и ledger.
