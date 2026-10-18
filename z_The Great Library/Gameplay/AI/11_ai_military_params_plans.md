# 11. Военные параметры ИИ и CAIPlan

Адреса VA. Сырые декомпилы - в decomp/v2game.

## Defines военного ИИ

Строки из define-парсера FUN_0042E410:

| Define | Адрес строки |
|---|---:|
| AI_SUPPORT_REFORM | 0x00DF3598 |
| AI_BIGSHIP_PROPORTION | 0x00DF4624 |
| AI_LIGHTSHIP_PROPORTION | 0x00DF463C |
| AI_TRANSPORT_PROPORTION | 0x00DF4654 |
| AI_CAVALRY_PROPORTION | 0x00DF466C |
| AI_SUPPORT_PROPORTION | 0x00DF4684 |
| AI_SPECIAL_PROPORTION | 0x00DF469C |
| AI_ESCORT_RATIO | 0x00DF46B4 |
| AI_ARMY_TAXBASE_FRACTION | 0x00DF46C4 |
| AI_BLOCKADE_RANGE | 0x00DF46E0 |
| AI_NAVY_TAXBASE_FRACTION | 0x00DF46F4 |

Эти define обрабатываются в FUN_0042E410. Функция - огромный общий define-парсер; декомпил занимает 240 тыс. строк из-за инлайнинга. Точные адреса значений нужно связывать по runtime-логу или отдельному скрипту: имена в декомпиле не сохраняются.

Косвенные потребители:

| Функция | Роль |
|---|---|
| FUN_008500A0 | оценка военной цели |
| FUN_00851BD0 | дипломатический/военный planner |
| FUN_0081E280 | состав армии |
| FUN_0084D1D0 | найм/colonize/expand |

## Причины/события военного ИИ

FUN_00466E90 строит таблицу news/reason id. Относятся к ИИ:

| ID | Строка |
|---:|---|
| 0x0F | AI_AFRAID_OF |
| 0x10 | AI_LIKES_VERY_MUCH |

Полная таблица:

0 PEACE_OFFER_ACCEPT, 1 GAME_EVENT, 2 PROVINCE_CHANGE_CONTROLLER, 3 PROVINCE_CHANGE_OWNER, 4 CONSTRUCTION_COMPLETE, 5 RESEARCH_COMPLETE, 6 INVENTION, 7 BATTLE_OVER, 8 REBEL_BREAK_COUNTRY, 9 NEW_PARTY, 10 WAR_DECLARED, 11 CRISIS_STARTED, 12 CRISIS_BACKER, 13 CRISIS_SIDE_JOINED, 14 CRISIS_RESOLVED, 15 GOODS_PRICE_CHANGE, 16 AI_AFRAID_OF, 17 AI_LIKES_VERY_MUCH, 18 NEW_GP, 19 unknown, 20 DECISION.

## CAIPlan

Строки CAI_PLAN образуют перечисление планов. Конструктор - FUN_00860D30.

Он инициализирует объект:

| Смещение | Поле |
|---:|---|
| +0x00 | CAIPlan::vftable |
| +0x19 | владелец |
| +0x1A | внутренний список/head |
| +0x1B | ноль |
| +0x1C | время/дата, по умолчанию DAT_01259ABC |
| +0x25 | имя плана |
| +0x1D..+0x24 | параметры плана |

Конструктор всегда ставит имя _CAI_PLAN_UNDEFINED_.

## Известные строки планов

Основные сухопутные/морские:

    _CAI_PLAN_LANDATTACK_
    _CAI_PLAN_NAVALATTACK_
    _CAI_PLAN_MOVEARMY_
    _CAI_PLAN_MOVEFLEET_
    _CAI_PLAN_TRANSPORT_
    _CAI_PLAN_BUILDARMY_
    _CAI_PLAN_BUILDFLEET_
    _CAI_PLAN_LANDCOMBAT_
    _CAI_PLAN_NAVALCOMBAT_
    _CAI_PLAN_CONQUER_
    _CAI_PLAN_DEFEND_
    _CAI_PLAN_NAVALDEFEND_
    _CAI_PLAN_BREAKBLOCKADE_
    _CAI_PLAN_BLOCKADE_
    _CAI_PLAN_INVASION_
    _CAI_PLAN_GARRISON_
    _CAI_PLAN_GATHERARMIES_
    _CAI_PLAN_GATHERFLEETS_

Технологические/внутренние:

    _CAI_PLAN_BOOST_LANDTECH_
    _CAI_PLAN_BOOST_NAVALTECH_
    _CAI_PLAN_BOOST_PRODUCTION_
    _CAI_PLAN_BOOST_STABILITY_
    _CAI_PLAN_BUILD_MANUFACTORY_

Здания/администрация:

    _CAI_PLAN_BUILD_BARRACK_
    _CAI_PLAN_BUILD_SHIPYARD_
    _CAI_PLAN_BUILD_FORTRESS_
    _CAI_PLAN_BUILD_COURTHOUSE_
    _CAI_PLAN_BUILD_CITYRIGHTS_
    _CAI_PLAN_BUILD_BAILIFF_

Дипломатия:

    _CAI_PLAN_DECLARE_WAR_
    _CAI_PLAN_OFFER_PEACE_
    _CAI_PLAN_ASK_OFFER_PEACE_
    _CAI_PLAN_JOIN_ALLIANCE_
    _CAI_PLAN_INVITE_ALLIANCE_
    _CAI_PLAN_LEAVE_ALLIANCE_
    _CAI_PLAN_OFFER_VASSALIZATION_
    _CAI_PLAN_CANCEL_VASSALIZATION_
    _CAI_PLAN_OFFER_ROYAL_MARRIAGE_
    _CAI_PLAN_CANCEL_ROYAL_MARRIAGE_
    _CAI_PLAN_OFFER_ANNEXATION_
    _CAI_PLAN_INSULT_
    _CAI_PLAN_CLAIM_THRONE_
    _CAI_PLAN_GUARANTEE_
    _CAI_PLAN_MILITARY_ACCESS_
    _CAI_PLAN_CANCEL_ACCESS_
    _CAI_PLAN_REVOKE_ACCESS_

Прочие:

    _CAI_PLAN_EXPLORE_PROVINCE_
    _CAI_PLAN_EXPLORE_SEAZONE_
    _CAI_PLAN_GENOCIDE_
    _CAI_PLAN_SEND_ECONOMIC_AID_
    _CAI_PLAN_ASK_HOLD_AREA_
    _CAI_PLAN_ASK_LEAVE_AREA_
    _CAI_PLAN_BAN_ALLIANCE_
    _CAI_PLAN_CANCEL_AGREEMENT_
    _CAI_PLAN_OFFER_AGREEMENT_
    _CAI_PLAN_WARNING_
    _CAI_PLAN_UNDEFINED_

Воздушные записи существуют в таблице, но выглядят как унаследованный EU3/Hoi-слой:

    _CAI_PLAN_AIR_AIR_SUPPLY_
    _CAI_PLAN_AIR_AIRBORNE_ASSULT_
    _CAI_PLAN_AIR_PORT_STRIKE_
    _CAI_PLAN_AIR_NAVAL_STRIKE_
    _CAI_PLAN_AIR_INSTALLATION_STRIKE_
    _CAI_PLAN_AIR_NUKE_STRIKE_
    _CAI_PLAN_AIR_STRATEGIC_STRIKE_
    _CAI_PLAN_AIR_RUNWAY_CRATERING_
    _CAI_PLAN_AIR_LOGISTICAL_STRIKE_
    _CAI_PLAN_AIR_GROUND_ATTACK_
    _CAI_PLAN_AIR_INTERDICTION_
    _CAI_PLAN_AIR_AIR_SUPREMACY_
    _CAI_PLAN_AIR_REORGANIZE_
    _CAI_PLAN_AIR_PEACETIME_REBASE_
    _CAI_PLAN_AIR_IDLE_

## Статус плана

Строки и конструктор подтверждены. Большинство планов похожи на унаследованный EU3-слой: Victoria 2 в фактическом country dispatcher FUN_0081E9E0 вызывает специализированные подсистемы напрямую, а не через единый CAIPlan. Нужно ещё найти runtime-использование каждого ID, чтобы отделить активные планы от legacy.
