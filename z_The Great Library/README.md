# The Great Library — библиотека знаний по Victoria 2

Рабочие ноты по реверсу v2game.exe (3.04, HOI-Nomod compatible).
Адреса: RVA = адрес в Ghidra минус 0x400000. Всё проверено на живом exe
через V2DLL (V2TechButton.cpp) и логи.

## Том 1 — Интерфейс

- Interface/00_gui_engine.md — движок интерфейса: окна, Observable/glue, GStr, vtable
- Interface/01_decision_buttons.md — кнопки-решения: FireDecision, CDecision, условия
- Interface/02_production_view.md — фабрики: hide_colonial_states, обновление списка
- Interface/03_topbar_music_player.md — музыка: next/pause/volume, DirectShow, topbar

Источник знаний: V2TechButton.cpp (V2DLL) + Ghidra-декомпозиция v2game.exe.
Все механизмы проверены в живой игре (5.x, HOI-Nomod).

## Полный каталог функций

- Catalog/README.md — семантический индекс всех 18 267 реальных функций.
- Catalog/function_semantic_catalog.tsv — полный TSV по строкам, символам, вызовам и кластерам.
- Catalog/clusters — отдельные кластеры UI, AI, войны, дипломатии, POP, провинций, экономики и скриптов.

Сырое декомпилированное покрытие полное: 18 267/18 267 реальных функций, 0 отсутствуют.

