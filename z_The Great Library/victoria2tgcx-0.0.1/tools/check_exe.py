#!/usr/bin/env python3
"""Executable gate: is this the v2game.exe the addresses are valid for?

Checks the SHA-256 and a list of signatures (expected bytes at RVAs
documented by Victoria2-Reverse-Engineering and V2DLL). If anything does not
match, no address in docs/ or in the DLL is valid for that executable
(AGENTS.md R2).

    python tools/check_exe.py [path to v2game.exe]

Exits with 0 if everything matches and with 1 if not.
"""

import hashlib
import sys
from tgcx_pe import PE

DEFAULT_EXE = r"E:\Victoria.II.v3.04.Inclu.ALL.DLC\v2game.exe"

# The reference executable (3.04). Measured 2026-10-12 on the D:\ and E:\n# installs, which are identical.
SHA256 = "62d48c204364dd706584777c2e2b3c7ab3c5f1dd0170872554943575d53d6648"

# .text: file offset = RVA - 0xC00 (Symbols/README.md in the RE repo).
TEXT_DELTA = 0xC00

# (RVA, expected bytes, where it comes from)
SIGNATURES = [
    (0x5E4490, "55 8B EC 83 E4 F8 64 A1 00 00 00 00 6A FF 68 68 A7 B3 00 50 64 89 25 00", "Universal CGui subtree Show activates child controls"),
    (0xA3C1DC, "90 44 9E 00 70 40 9E 00", "Universal CFixedWindow secondary Show/Hide slots 13/14"),
    (0x5EFEF0, "56 8B F1 80 7E 6C 00 75 26 8B 8E A0 00 00 00 C6 46 4F 01 8B 01 8B 50 34", "Universal native CEU3Button Show activates render child"),
    (0x1B8500, "55 8B EC 8B 55 0C 83 EC 30 53 56 57 8B F0 85 D2 0F 84 12 03 00 00 85 F6", "Conform land route query: EAX start, four stack arguments"),
    (0x1B8830, "8B E5 5D C2 10 00", "Conform land route query RET 0x10"),
    (0xA03794, "E0 98 5B 00 70 96 5B 00 D0 9B 5B 00 D0 98 5B 00 50 AE 9D 00", "Conform VerySafe native path predicate vtable"),
    (0x449E90, "57 8B F9 8B 07 85 C0 74 1A 56 8D 9B 00 00 00 00 8B 70 08 50 E8", "Conform native route list cleanup"),
    (0x1B984F, "8B 50 3C 8B CF FF D2 84 C0 74 55 8B 53 5C 8A 42 2A 84 C0 74 0D 8B 4E 5C 80", "Conform path policy reads map province IS LAND flag +0x2A"),
    (0x5A38F0, "55 8B EC 83 E4 F8 8B 55 08 83 EC 08 56 57 8B F9", "MOD-6 CEU3Gui named window factory, RET 8"),
    (0x5C4410, "55 8B EC 8B 89 94 00 00 00 8B 01 8B 40 60 5D FF E0", "MOD-6 CIcon frame setter forwards stack argument"),
    (0x5E2F90, "55 8B EC 56 8B F1 E8 65 01 00 00 F6 45 08 01 74", "MOD-6 CFixedWindow scalar deleting destructor"),
    (0x5E3D60, "55 8B EC 83 E4 F8 51 53 56 8B F1 57 8B BE 74 04 00 00 C6 46 52 01", "MOD-6 CFixedWindow deferred release flag and child propagation"),
    (0x5EFE20, "55 8B EC 8B 89 98 00 00 00 8B 45 08 89 08 5D C2 04 00", "MOD-6 CEU3Button packed position getter, RET 4"),
    (0x246620, "55 8B EC 8B 89 BC 00 00 00", "MOD-6 CIcon packed position getter"),
    (0x5A6A6D, "89 7E 34 89 56 30 88 46 3A 89 46 40 89 46 44", "MOD-6 CGui subobject context/definition fields"),
    (0xA08A70, "F0 38 9A 00", "MOD-6 CEU3Gui primary slot 11 factory"),
    (0x8453FC, "BA E0 21 E2 00 8D B5 04 7A FF FF E8 C4 31 D4 FF 8B C6 B9 DB 04 00 00", "MOD-6 build_time parser token 0x4DB"),
    (0x1BAB1C, "E8 3F 50 3D 00 8B 00 89 87 C0 00 00 00", "MOD-6 CSubUnitDefinition build time at +0xC0 in thousandths"),
    (0x1BA89E, "E8 22 48 4F 00 89 47 28", "MOD-6 CSubUnitDefinition icon at +0x28"),
    # TPL-0 native panel, scoped read-only Ghidra on 2026-10-17.
    (0xA12A14, "E0407300004E7300D0CF580070737300F061730030C4A300", "TPL-0 CBuildUnitView vtable, destructor and update slots"),
    (0x334E24, "8BF98B47608A406733DB3AC30F847F050000", "TPL-0 build-view root +0x60 and visibility +0x67"),
    (0x333C0C, "885E5C894660C6466401894E68895E6C", "TPL-0 build-view close +0x5C, root +0x60, scope +0x6C"),
    (0x3374D3, "807E7800C6866001000001740E8B8EC4000000898EC80000", "TPL-0 build-view land +0x78 and dirty +0x160"),
    (0xA0E48C, "C0D06000A0FF6D00007D7300504472003034750090E17900", "LAW-2 CButtonObserverGlue<CPoliticsView> table"),
    (0x5E4C80, "558BEC568BF1578B7D088D866C020000508D8E7C02000051", "LAW-2 native button lookup"),
    (0x5CD610, "8BC18B500885D274088B480C034804FFE2C3CCCCCCCCCCCC", "LAW-2 button observer native trampoline"),
    (0xA0A58C, "C0D06000401C640010D69C0050D27B00A0BC9400C0BC9400", "LAW-2 CButtonObserverGlue primary vtable"),
    (0x9FBB60, "F0D64700A01B6400106B9E00A01B7E00B01B7E0050C64300", "LAW-2 CVariables primary vtable"),
    (0x241BA0, "558BEC8B45088378141072028B008B11508B4208FFD05DC2", "LAW-2 CVariables Find(std::string)"),
    (0x5E4A20, "558BEC83E4F864A1000000006AFF68A646B5005064892500", "LAW-2 native child-window lookup"),
    (0x5E4D00, "558BEC8D81CC020000508B450881C1DC02000051E8171E00", "LAW-2 native text-box lookup"),
    (0x8ED0, "558BEC538B5D0C568BF18B4D08578B79103BFB730A6818DADE00", "LAW-2 native std::string assign"),
    (0x65ECC0, "558BEC64A1000000006AFF6818D9B300508B450864892500", "LAW-2 native GUI text SetText ESI ABI"),
    (0x2DCE10, "558BEC83E4F864A1000000006AFF68A90EBA00508B450864", "LAW-2 native decision click handler"),
    # 2026-10-17, LAW-2 controls: has_country_modifier (FUN_008CD8C0) walks the
    # timed list at CCountry+0x4D8 (node item +0, next +8; item modifier +8);
    # the modifier manager (FUN_005661B0) hashes (h+c)*61, name at +0x30/+0x40.
    (0x4CD8E2, "8B86D804000085C074128D6424008B108B4008394A08", "LAW-2 timed country modifier list walk"),
    (0x9F9978, "B0218300F0299A00", "LAW-2 CTimedModifier primary vtable"),
    (0x1661D6, "7E0E0FBE1C1103C3416BC03D3BCF7CF233D2F776048B46088B1C9085DB744D8B", "LAW-2 modifier manager name hash"),
    (0x1661F5, "8B038B4D0883C030837DFC107202", "LAW-2 modifier name string at +0x30"),
    (0x166234, "0F95C085C074128B5B0485DB75B3", "LAW-2 modifier manager bucket next +4"),
    (0x4EC00, "558BECA19CA62501568B7508", "LAW-2 modifier manager global"),
    # 2026-10-17, LAW-2 Reforms tab: FUN_006DA930 builds each reform row and
    # enables its button (+0xB8) from a byte at [ebp-0x11]; FUN_006DC990 is the
    # row click; FUN_006DB2E0 lists the decisions (name std::string at +8);
    # FUN_00906F00 posts the player's "decision taken" message (gate 0x00F07DA6).
    (0x2DC990, "558BEC83E4F864A1000000006AFF68ACE0B6005064892500", "LAW-2 native reform click handler"),
    (0x2DCCEE, "5B8BE55DC20400", "LAW-2 native reform click RET 4"),
    (0x2DB00E, "8B55C48B45E48B4DE85250518DBD54FFFFFFE8FBA9E4FF84C0", "LAW-2 reform row frame: option -0x3C, group -0x1C, country -0x18"),
    (0x2DB02D, "8B55C48B42508B55E88B9250080000", "LAW-2 reform row social current law +0x850"),
    (0x2DB0AE, "8B55E88B46508B92600800008B4DE48B49508B0C8A3B4150", "LAW-2 reform row political current law +0x860"),
    (0x2DB22D, "807DEF008B108BC874088B82B8000000EB068B82BC000000", "LAW-2 reform row enable byte [ebp-0x11]"),
    (0x575F15, "8B038B4D0883C034837DFC107202", "LAW-2 issue option name std::string +0x34"),
    (0x2DB52A, "84C0746F8B4D808B51248B521883C1248D85A4FDFFFF50FFD2", "LAW-2 decision list first loop"),
    (0x2DB5E8, "84C0745D8B4D808B51248B521883C1248D85A4FDFFFF50FFD2", "LAW-2 decision list second loop"),
    (0x1C2B15, "8B038B4D0883C008837DFC107202", "LAW-2 decision name std::string +8"),
    (0x506690, "50E86A0800008D4C2454E83124B0FF", "LAW-2 player decision message call"),
    (0x506F00, "558BEC6AFF684C62B90064A100000000", "LAW-2 decision message poster entry"),
    (0x506F55, "803DA67DF000000F84CB050000", "LAW-2 decision message gate byte"),
    (0x507542, "8BE55DC28C00", "LAW-2 decision message poster RET 0x8C"),
    # 2026-10-18, LAW-3: CPoliticsView slot 11 (FUN_006D7180) rebuilds the
    # tab, reform rows (FUN_006D96F0 -> FUN_006DA930) included; slot 2 (show)
    # tail-calls it. FUN_005268F0 is the native minimum delay between reforms
    # (EAX = country, AL = open; last reform date +0x9C, world date +0xB0C).
    (0xA0E484, "80716D00", "LAW-3 CPoliticsView vtable slot 11 = FUN_006D7180"),
    (0x2D7180, "558BEC83E4F864A1000000006AFF6840FEB4005064892500", "LAW-3 CPoliticsView refresh slot 11 entry"),
    (0x2D71AE, "56E83C250000", "LAW-3 refresh calls the reform rows FUN_006D96F0"),
    (0x2D2C2B, "8B068B502C8BCE5EFFE2", "LAW-3 CPoliticsView show tail-calls slot 11"),
    (0x1268F0, "558BEC51803D3C872501008B889C000000", "LAW-3 native reform delay gate entry (EAX country)"),
    (0x12693C, "3B8A0C0B00000F9EC08BE55DC3", "LAW-3 native reform delay gate SETLE AL / RET"),
    # FUN_0053A6A0 (EAX = country, EDI = decision, AL = ignored by the player):
    # the top-bar "We can enact the following decisions" list (FUN_0053A6D0,
    # key COUNTRYALERT_CanDoDecisions) and CPoliticsView slot 10 skip those.
    (0x13A6A0, "568BB0880100008B80840100008D4F085156E8C919F2FF", "LAW-3 decision ignored check entry (EAX country, EDI decision)"),
    (0x13C100, "BAC4F5DF00", "LAW-3 alert key COUNTRYALERT_CanDoDecisions"),
    (0x13C2A1, "E8FAE3FFFF84C00F85B3000000", "LAW-3 decisions alert skips ignored decisions"),

    (0x1D74BE, "B8E8030000", "PATCH_ALLIED_REINFORCE_150, mov eax,1000"),
    (0x282EC0, "558BEC6AFF", "FUN_00682EC0, daily sync check (OOS)"),
    (0x35BB50, "558BEC5156", "ApplyVolumes, entry"),
    (0x1D77A0, "8B81C40000003B87C4000000", "FUN_005D77A0, eligible fleet (CUnit+0xC4)"),
    (0x233826, "6A08BF0F000000684C76E000", "main menu version label"),
    # 2026-10-12, docs/symbols.md: CUpperHouseTrigger::Evaluate (reads g_countryManager)
    # and the upper house getter (CCountry+0x8B0).
    (0x4FD2A0, "558BEC83EC088B45088B15E487250156", "CUpperHouseTrigger::Evaluate"),
    (0x1E64D0, "558BEC51894DFC8B45FC05B00800008BE55DC3",
     "CCountry::GetUpperHouse, add eax,0x8B0"),
    # 2026-10-12, DLL-0: the only call to the per-frame pump FUN_009DF2B0 (rel32 = 0x5DF2B0 - 0x28572C)
    (0x285727, "E8849B3500", "call FUN_009DF2B0, DLL tick hook site"),
    # DLL-1/HEMI-1: scoped Ghidra evidence, docs/report-dll-12-1012.md.
    (0xA0E45C, "002B6D00102C6D00", "CPoliticsView destructor/show slots"),
    (0xA0E468, "402C6D00", "CPoliticsView hide slot"),
    (0xA0E480, "D02D6D00", "CPoliticsView tooltip slot"),
    (0x4FD801, "A13C8A2501E8C5630700", "ideology manager lookup operand"),
    (0x5793C0, "558BEC83E4F8518B41142B4110535633", "CUpperHouse vector begin/end"),
    (0x5E3BA0, "558BEC83EC0C8B9190000000", "GUI centred position setter"),
    (0x5E2FC0, "568BF18B8E940400008B018B9080000000FFD28B8E940400", "LAW-2 native window scene append method"),
    (0xA383C4, "50909F00", "LAW-2 window render subtree append slot"),
    (0xA383D0, "D08F9F00", "LAW-2 window render subtree unlink slot"),
    (0xA3841C, "B0FEA100", "LAW-2 window render subtree position slot"),
    (0x5E4450, "568BF18B8E48020000C6466701", "GUI show flag"),
    (0x5E4030, "568BF18B8E48020000C6466700", "GUI hide flag"),
    (0x59A520, "FF868CBC060080BEA0BC06000074258B", "FUN_0099A520 final engine Present entry"),
    (0xA38324, "B0599900202E9A00806B990090DC9900", "native renderer primary vtable"),
    (0xA19B8C, "D0077E00202E9A0060097E0090DC9900", "CEU3Graphics live renderer primary vtable"),
    (0x599F22, "80BEF00000000076158B43648B088B91E400", "ordered GUI render loop after entity Draw, FUN_00999D00"),
    (0xA3C11C, "404D9E00", "native root icon lookup slot, FUN_009E4D40"),
    (0xA3A930, "007EA80060E29E00B06B9A0020366300", "native icon primary vtable"),
    (0xA3FF30, "20F1A200", "native overlay entity Draw slot, FUN_00A2F120"),
    # HEMI-3: native scalar hover selection; structured tooltip slot stays untouched.
    (0x2D52C6, "E8C5B930008BCE3AC3", "Politics pie slice CALL, FUN_006D2DD0"),
    (0xA3BDA8, "700B9E00", "pie entity hit-test slot +0x50, FUN_009E0B70"),
    (0x5E0B70, "558BEC83E4F883EC08568BF18B8E68010000", "pie hit-test ECX/float arguments, x87 result, RET 32"),
    (0x5E0C90, "558BEC83E4F883EC18660F6E4508660F6E4D0C", "pie slice EAX/int arguments, AL result, RET 16"),
    # TPL-1, 2026-10-17 (docs/symbols.md "TPL-1"): Conform's commands, the
    # recruit's future stack id, the unit panel and the read-only registry walk.
    (0x17D283, "890D9C8A2501895650894E54", "TPL-1 recruit ctor: future stack id from the counter at +0x50/+0x54"),
    (0x17D334, "8D4B48518BCFFFD2", "TPL-1 recruit execute: construction identity from +0x48 (vfunc +0x18)"),
    (0x17D35B, "8B53508957588B54241489575C", "TPL-1 recruit execute: +0x50/+0x54 to construction stack id +0x58/+0x5C"),
    (0x1DE80F, "B8F802000089462C894630", "TPL-1 CMoveCommand id 0x2F8"),
    (0x1DE83E, "8B550C528D463C", "TPL-1 CMoveCommand unit reference at +0x3C"),
    (0x1DE878, "8A4D148A451C8A5518C645FC04888E880000008A4D2088868A0000008D4510", "TPL-1 CMoveCommand flags +0x88/+0x8A, destination pushed"),
    (0x1DE897, "889689000000888E8B000000", "TPL-1 CMoveCommand flags +0x89/+0x8B"),
    (0x1DE8D3, "8BE55DC21C00", "TPL-1 CMoveCommand ctor RET 0x1C"),
    (0x1E13F3, "B81004000089472C894730", "TPL-1 CMergeCommand id 0x410"),
    (0x1E143B, "8B550C", "TPL-1 CMergeCommand list argument"),
    (0x1E1580, "8BE55DC20800", "TPL-1 CMergeCommand ctor RET 8"),
    (0x1E1F1E, "B81204000089462C894630", "TPL-1 CTransferSubUnitCommand id 0x412"),
    (0x1E1F4D, "8B5514528D463C", "TPL-1 CTransferSubUnitCommand target identity at +0x3C"),
    (0x1E1F67, "8B4D0C8B5510894E648B4DF4895668", "TPL-1 CTransferSubUnitCommand regiment id at +0x64/+0x68"),
    (0x1E1F81, "8BE55DC21000", "TPL-1 CTransferSubUnitCommand ctor RET 0x10"),
    (0x17DB6E, "B81A04000089462C894630", "TPL-1 CCreateUnitCommand id 0x41A"),
    (0x17DB8D, "8B550C8B451033C966894E288B4D2489563C8B5514894640", "TPL-1 CCreateUnitCommand province +0x3C, country +0x40"),
    (0x17DBA5, "8B4518894E448B4D1C895E2466895E36895E38", "TPL-1 CCreateUnitCommand +0x44 and id words"),
    (0x17DBBE, "8956488B552089464C8B4528894E508A4D2C895654894658884E5D", "TPL-1 CCreateUnitCommand new id +0x48/+0x50, kind +0x58, flag +0x5D"),
    (0x17DBE7, "8BE55DC22800", "TPL-1 CCreateUnitCommand ctor RET 0x28"),
    (0x398B3F, "C7075068E100C7471C8C68E100", "TPL-1 CUnitView vtables at +0 and +0x1C"),
    (0x39DB56, "8B159C8A25010FB70D908A25014289159C8A250181C168120000", "TPL-1 native new-stack id: [0x01258A90]+0x1268, ++[0x01258A9C]"),
    (0x39DBC5, "8B4E288B89DC0000008B4958", "TPL-1 CUnitView shown stack +0x28, stack +0xDC->+0x58"),
    (0x39DC05, "8B4E288B91C40000008B89C0000000", "TPL-1 stack country +0xC4, province +0xC0"),
    (0x5C16D6, "817D08681200008B0D948A250177068B0D988A2501", "TPL-1 registry split: type > 0x1268 high, else low"),
    (0x5C1D47, "8B7004578B388BC7C1E01003C633D2F771048B41088B149085D274228B02", "TPL-1 registry hash: (type<<16)+id % +4, buckets +8"),
    (0x5C1D65, "8B480883C008397004", "TPL-1 registry entry: type +8, id +0xC, node next +4"),
    (0xA03394, "30E75D00F0299A00C0F05D00902A9A0030F25D00C0104000E0EA5D00B0F05D00", "TPL-1 CMoveCommand vtable slots 0-7"),
    (0xA033B4, "F0977D0010279A0020279A0030279A00D0CF580030F35D00B0F45D00", "TPL-1 CMoveCommand vtable slots 8-14"),
    (0xA03514, "60135E00F0299A00F0175E00902A9A0060195E00C010400090155E00E0175E00", "TPL-1 CMergeCommand vtable slots 0-7"),
    (0xA03534, "F0977D0010279A0020279A0030279A00D0CF5800901A5E00E01B5E00", "TPL-1 CMergeCommand vtable slots 8-14"),
    (0xA03554, "900F5E00F0299A0080285E00902A9A00F0285E00C0104000901F5E0070285E00", "TPL-1 CTransferSubUnitCommand vtable slots 0-7"),
    (0xA03574, "F0977D0010279A0020279A0030279A00D0CF580040295E00D08F9000", "TPL-1 CTransferSubUnitCommand vtable slots 8-14"),
    (0xA00D34, "30C17200F0299A00A0E25700902A9A0050E45700C0104000F0DB570090E25700", "TPL-1 CCreateUnitCommand vtable slots 0-7"),
    (0xA00D54, "F0977D0010279A0020279A0030279A00D0CF580040E557009014A300", "TPL-1 CCreateUnitCommand vtable slots 8-14"),
    (0xA16850, "90927900E0364100403741008037410030629A0060629A0090629A00A0629A00", "TPL-1 CUnitView vtable slots 0-7 (slot 0 destructor)"),
    (0xA16870, "00B87900", "TPL-1 CUnitView slot 8 refresh"),
    (0xA168B0, "B0937900", "TPL-1 CUnitView secondary slot 9 per-frame update"),
    # TPL-1 native wrappers, 2026-10-17: argument orders copied from the native
    # new-stack button, reorganize drop, rally-point Move and Merge ctor.
    (0x39DB4C, "B868CA3101E87A372200", "TPL-1 new-stack id: spinlock 0x0131CA68 taken by FUN_009C12D0 (EAX)"),
    (0x39DB70, "A268CA3101", "TPL-1 new-stack id: lock released with the returned AL"),
    (0x39DB84, "8B018B503C33FFFFD284C07407BF01000000EB13", "TPL-1 Create kind: stack vfunc +0x3C gives 1"),
    (0x39DB98, "8B4E288B018B5040FFD284C07405BF02000000", "TPL-1 Create kind: stack vfunc +0x40 gives 2, else 0"),
    (0x39DBD7, "6A00575183EC088BCC8911", "TPL-1 Create pushes: split flag 0, kind, +0xDC->+0x58, new id"),
    (0x3944FF, "568B721083EC088BCC89318B52148964242450895104E8C6D9E4FF", "TPL-1 Transfer args: target stack id +0x10/+0x14, regiment entry"),
    (0x92342, "6A006A016A016A01515650E87EC41400", "TPL-1 rally Move: replace, safe, very safe 1; attach 0"),
    (0x1E1450, "8B450C33F68B48088B18", "TPL-1 Merge list: header head, node +0 stack, +8 next"),
    (0x1E1FBC, "8B47648B4F6889442420894C24243D68120000", "TPL-1 Transfer execute: target stack id +0x64/+0x68"),
    (0x1DE8B2, "8B550C8B82DC0000008B4858898E8C000000", "TPL-1 stack province: +0xDC object, +0x58 id (Move start +0x8C)"),
    (0x26EC40, "6A4CE868FD4300", "TPL-1 CMergeCommand native allocation: push 0x4C, operator new"),
    (0x426A1F, "6A4CE8897F2800", "TPL-1 CMergeCommand native allocation (second caller): push 0x4C"),
    (0x398AE8, "518BC8FFD2894720", "TPL-1 CUnitView ctor: loaded unitpanel window at +0x20"),
    (0x3993B0, "8B410480786700740B8B51E48B422083C1E4FFE0", "TPL-1 CUnitView secondary slot 9: window +4 (+0x20) visible +0x67, then slot 8"),
    (0x5C12D0, "558BEC83EC0C578BF8897DF88B55F8B101B000F00FB00A", "TPL-1 FUN_009C12D0 spinlock acquire (EAX lock byte)"),
    # TPL-0, 2026-10-17 (docs/symbols.md): one brigade is queued as the UI does,
    # operator new(0x68), CConstructUnitCommand ctor, post via g_world+0xB24.
    (0x17D1B0, "558BEC6AFF689B61B40064A10000000050648925000000005153568B7508", "TPL-0 CConstructUnitCommand ctor entry"),
    (0x17D1EF, "B8CA05000089462C894630", "TPL-0 CConstructUnitCommand id 0x5CA at +0x2C/+0x30"),
    (0x17D20E, "8B451C8B551833C966894E288B4D10894640", "TPL-0 ctor args: country id +0x40, tag, province id +0x44"),
    (0x17D2C6, "8B450C894660894E648B4DF48BC65E64890D000000005B8BE55DC21800", "TPL-0 ctor unit type +0x60, pop +0x64, returns this, RET 0x18"),
    (0xA00CF4, "30C17200F0299A0000D65700902A9A0080D75700C0104000F0D25700F0D55700", "TPL-0 CConstructUnitCommand vtable slots 0-7"),
    (0xA00D14, "F0977D0010279A0020279A0030279A00D0CF580070D9570020DA5700", "TPL-0 CConstructUnitCommand vtable slots 8-14"),
    (0x17DA45, "8955F88B51408B1496508B41648B496052E87567F9FF84C00F95C0", "TPL-0 command validity slot 14: can-build(unit, pop, country, province)"),
    (0x3325D0, "6A68E8D8C3370083C404", "TPL-0 UI recruit: cdecl operator new(0x68)"),
    (0x6AE9AF, "8BFF558BEC83EC10EB0DFF7508E8468C0000", "TPL-0 FUN_00AAE9AF operator new entry"),
    (0x33261B, "8B018B5044FFD28B48388B018B501856FFD2FF4C240C759D", "TPL-0 command queue: (g_world+0xB24) slot 0x44, +0x38, slot 0x18"),
    (0x1141D0, "558BEC51538B5D08568BF18B4D0C578BF88B81340100003B4320", "TPL-0 FUN_005141D0 can-build: ECX unit, EAX pop, stack country, province"),
    (0x114284, "B0015F5E5B595DC20800", "TPL-0 FUN_005141D0 AL result, RET 8"),
    (0x11424B, "6A008BC7E8DC1645006A00578BF0E8121645003BF0", "TPL-0 free regiments: FUN_00965930(EAX pop, 0), FUN_00965870(pop, 0)"),
    (0x565870, "558BECA1DC862501538B5D08568B7358", "TPL-0 FUN_00965870 regiments a pop supports"),
    (0x56589D, "5F5E33C05B5DC20800", "TPL-0 FUN_00965870 RET 8"),
    (0x565930, "558BEC83E4F883EC0C807D0800535657", "TPL-0 FUN_00965930 regiments a pop already has"),
    (0x5659E6, "5F5E5B8BE55DC20400", "TPL-0 FUN_00965930 RET 4"),
    (0x0B8285, "833DD8FD2501008B1534BB31018955F0", "TPL-0 unit type DB 0x0125FDD8 and pop type DB 0x0131BB34"),
    (0x0B82C3, "8B45F08B70108B1DD8FD25018BC82B710C", "TPL-0 pop type vector +0xC/+0x10"),
    (0x0B8313, "807842000F842C0100008B4D088B91940100008B45EC8B0410", "TPL-0 soldier pop type +0x42, province pops +0x194"),
    (0x0B8343, "8B907C0200008945E88B43102B430C", "TPL-0 next pop +0x27C, unit type vector +0xC/+0x10"),
    (0x0B838B, "8B730C8B14968B80CC0B00008B52248B80100300008B3490807E3900", "TPL-0 unit index +0x24, country +0xBCC +0x310 unit, land +0x39"),
    (0x335416, "81C1D809000057894DDC", "TPL-0 country owned provinces +0x9D8"),
    (0x335773, "8B88CC0A00008B0491", "TPL-0 province by id at g_world+0xACC"),
    (0x41EEB5, "8B5E1C8945F083FB1072058B4608EB038D4608", "TPL-0 unit type name std::string +8"),
]


# Research-only gates, separate from the guards generated into the DLL.
# Promote a function to SIGNATURES before calling or hooking it at runtime.
RESEARCH_SIGNATURES = [
    (0x337D00, "8B410885C074058B4904FFE0C3CCCCCC558BEC8B55088948", "Politics observer click slot (LAW-2 research)"),
    (0x2DFFA0, "558BEC8B412085C074068B49045DFFE05DC20400CCCCCCCC", "Politics observer slot 1 (LAW-2 research)"),
    (0x2D26D0, "100800837DEC10720C8B45D850E839C23D0083C404C745EC", "Politics observer construction region (LAW-2 research)"),
    (0x505B30, "558BEC64A1000000006AFF68CB23B4005064892500000000", "FUN_00905B30, decision message construction (LAW-2 research)"),
    (0x241C40, "558BEC8BC18B503885D274098B483C0348045DFFE25DC204", "FUN_00641C40, button observer slot 1 (LAW-2 research)"),
    (0x5A29F0, "558BEC568B7508837E04FF578BF97438", "FUN_009A29F0, variables second table Find slot (LAW-2 research)"),
    (0x241BA0, "558BEC8B45088378141072028B008B11", "FUN_00641BA0, variables Find slot (LAW-2 research)"),
    (0x5E4A20, "558BEC83E4F864A1000000006AFF68A6", "FUN_009E4A20, root window lookup (LAW-2 research)"),
    (0x5E4D00, "558BEC8D81CC020000508B450881C1DC", "FUN_009E4D00, root text lookup (LAW-2 research)"),
    (0x474F80, "558BEC6AFF68F026B40064A100000000", "FUN_00874F80, decision execution command path (LAW-2 research)"),
    (0x8ED0, "558BEC538B5D0C568BF18B4D08578B79", "FUN_00408ED0, native string assign (LAW-2 research)"),
    (0x65ECC0, "558BEC64A1000000006AFF6818D9B300", "FUN_00A5ECC0, native text SetText (LAW-2 research)"),
    (0x4DA5C0, "558BEC8B450883EC0883780C00535657", "FUN_008DA5C0, variable trigger lookup (LAW-2 research)"),
    (0x2DCE10, "558BEC83E4F864A1000000006AFF68A90EBA", "FUN_006DCE10, native decision click handler (LAW-2 research)"),
    (0x4AE290, "558BEC8B450C3DBE030000740E508B45", "FUN_008AE290, modifier factor field parser"),
    (0x83D41C, "BA304AE2008DB564CBFFFFE8A4B1D4FF8BC6B9F3", "support token registration, add political"),
    (0x4E8AB0, "558BEC83E4F86AFF686BBCB40064A100", "FUN_008E8AB0, militancy trigger by scope"),
    (0x4FB3E0, "558BEC83E4F88B450883EC08568BF18B", "FUN_008FB3E0, average militancy trigger"),
    (0x125A20, "558BEC83E4F88B451083EC5053C70700", "FUN_00525A20, social support aggregation"),
    (0x125BE0, "558BEC83E4F88B450C83EC50538B5D10", "FUN_00525BE0, political support aggregation"),
    (0x126A30, "558BEC6AFF680F1DBA0064A100000000", "FUN_00526A30, social reform support tooltip"),
    (0x1273A0, "558BEC6AFF680F1DBA0064A100000000", "FUN_005273A0, political reform support tooltip"),
    (0x58FC80, "558BEC83EC08538B5D08568D45FC5033", "FUN_0098FC80, decimal-to-thousandths parser"),
    (0x572260, "558BEC64A1000000006AFF688883B500", "FUN_00972260, ideology construction/support objects"),
    (0x5A1CE0, "558BEC51568BF08B4E1C8B018B5008FF", "FUN_009A1CE0, additive numeric field parsing"),
    (0x5A0F40, "558BEC6AFF68C1A1B40064A100000000", "FUN_009A0F40, additive parser fallback"),
    (0x4AF810, "558BEC83E4F883EC1C8B411C8B550889", "FUN_008AF810, additive upper-house support evaluator"),
    (0x4AEC00, "558BEC83E4F883EC1C8B51242B51208B", "FUN_008AEC00, general additive evaluator comparison"),
    (0x4AF210, "558BEC64A1000000006AFF6868C1B500", "FUN_008AF210, additive support parser"),
    (0x572B20, "558BEC518B450C5356578BF93DE70200", "FUN_00972B20, ideology parser"),
    (0x4FE3C0, "558BEC83EC088B45088B50088B400C8B", "FUN_008FE3C0, country social movement trigger"),
    (0x4FE6E0, "558BEC83EC088B45088B50088B400C8B", "FUN_008FE6E0, country political movement trigger"),
    # TPL-0 research (docs/symbols.md): the native recruit path and row choice.
    (0x332520, "558BEC83E4F864A1000000006AFF687BFBB9005064892500", "FUN_00732520, UI recruit entry (TPL-0 research)"),
    (0x33253E, "837F100053560F85E90000008B078B4F04", "FUN_00732520, EDI item +0x10 must be 0, pop key +0/+4 (TPL-0 research)"),
    (0x3325E8, "8B55088B723C8B52388B4F0C8B4958565253518B4F085150E8ABABE4FF8BF0", "FUN_00732520, ctor arguments from item and entry (TPL-0 research)"),
    (0x332640, "8BE55DC20400", "FUN_00732520 RET 4 (TPL-0 research)"),
    (0x3319E0, "8B7E2803FB56E8350B000083C314FF4C240C75EC", "FUN_007319B0, build button walks 0x14-byte items (TPL-0 research)"),
]


def main() -> int:
    sys.stdout.reconfigure(encoding="utf-8")  # P3: the Windows console is not UTF-8
    path = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_EXE
    with open(path, "rb") as f:
        data = f.read()

    bad = 0
    digest = hashlib.sha256(data).hexdigest()
    if digest == SHA256:
        print(f"OK   sha256 {digest[:16]}…")
    else:
        print(f"BAD  sha256 {digest} (expected {SHA256})")
        bad += 1

    image = PE(path)
    for rva, expect, what in SIGNATURES + RESEARCH_SIGNATURES:
        off = image.offset(rva)
        want = bytes.fromhex(expect)
        got = data[off:off + len(want)]
        if got == want:
            print(f"OK   RVA 0x{rva:06X}  {what}")
        else:
            print(f"BAD  RVA 0x{rva:06X}  {what}: expected {want.hex().upper()}, found {got.hex().upper()}")
            bad += 1

    print("check_exe: ALL OK" if bad == 0 else f"check_exe: {bad} failures")
    return 0 if bad == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
