// FUN_009ee680 @ 009ee680 body=[[009ee680, 009ee85e] [009ee862, 009ee93c] [009ee940, 009ee969] [009ee96d, 009eeace] [009eead2, 009eeafb] [009eeaff, 009eebea] [009eebee, 009eed16] [009eed1a, 009eedb4] [009eedb8, 009eee3e] [009eee42, 009eeeca] [009eeece, 009eef2e] [009eef32, 009eef91] [009eef95, 009ef034] [009ef038, 009ef05d] [009ef061, 009ef176] [009ef17a, 009ef1cb] [009ef1cf, 009ef1ea] [009ef1ee, 009ef20c] [009ef210, 009ef237] [009ef23b, 009ef249] [009ef24d, 009ef265] [009ef269, 009ef281] [009ef285, 009ef2a0] [009ef2a4, 009ef2c8] [009ef2cc, 009ef2f3] [009ef2f7, 009ef30b]]


/* WARNING: Removing unreachable block (ram,0x009ef22c) */

undefined4 *
FUN_009ee680(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint in_stack_00000030;
  uint in_stack_00000038;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000054;
  undefined4 in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_00000070;
  undefined4 in_stack_00000080;
  uint in_stack_00000084;
  undefined3 uStack0000008c;
  uint in_stack_00000090;
  undefined4 in_stack_000000a0;
  uint in_stack_000000a4;
  undefined4 in_stack_000000ac;
  uint in_stack_000000c0;
  undefined3 uStack000000c8;
  char cStack000000cb;
  undefined3 uStack000000cc;
  char cStack000000cf;
  undefined4 *in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  undefined1 auStack_150 [12];
  undefined4 uStack_144;
  undefined4 *puStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_134 [16];
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [4];
  undefined4 uStack_114;
  int iStack_110;
  undefined4 *puStack_10c;
  undefined4 **ppuStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  int iStack_f4;
  char *pcStack_f0;
  undefined4 *puStack_ec;
  undefined4 **ppuStack_e8;
  int *piStack_e4;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined **local_5c;
  undefined4 *local_58;
  int local_54;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5d87b;
  local_10 = ExceptionList;
  local_18 = 0;
  piStack_e4 = param_4;
  local_8 = 5;
  ppuStack_e8 = (undefined4 **)param_1;
  puStack_ec = (undefined4 *)0x9ee6bd;
  ExceptionList = &local_10;
  FUN_009ee0b0();
  *param_1 = &PTR_FUN_00e3ce50;
  param_1[0x15] = &PTR_FUN_00e3cf78;
  param_1[0x25] = param_3;
  param_1[0x26] = param_6;
  param_1[0x27] = param_6;
  param_1[0x29] = 0;
  piStack_e4 = (int *)0xffffffff;
  local_8._0_1_ = 7;
  ppuStack_e8 = (undefined4 **)0x0;
  puStack_ec = &stack0x00000038;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  pcStack_f0 = (char *)0x9ee70c;
  FUN_00408ed0();
  piStack_e4 = (int *)0xffffffff;
  local_8._0_1_ = 8;
  ppuStack_e8 = (undefined4 **)0x0;
  puStack_ec = &stack0x00000054;
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  pcStack_f0 = (char *)0x9ee72b;
  FUN_00408ed0();
  piStack_e4 = (int *)0xffffffff;
  local_8._0_1_ = 9;
  ppuStack_e8 = (undefined4 **)0x0;
  puStack_ec = &stack0x00000070;
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  pcStack_f0 = (char *)0x9ee74a;
  FUN_00408ed0();
  piStack_e4 = (int *)0xffffffff;
  local_8._0_1_ = 10;
  ppuStack_e8 = (undefined4 **)0x0;
  puStack_ec = &stack0x00000090;
  param_1[0x45] = 0xf;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  pcStack_f0 = (undefined1 *)0x9ee76c;
  FUN_00408ed0();
  local_8._0_1_ = 0xb;
  param_1[0x48] = _uStack0000008c;
  param_1[0x49] = _uStack000000c8;
  param_1[0x4a] = in_stack_000000d8;
  param_1[0x4b] = in_stack_000000dc;
  param_1[0x50] = 1;
  param_1[0x51] = 1;
  param_1[0x52] = in_stack_000000e0;
  piStack_e4 = (int *)0x0;
  param_1[0x53] = in_stack_000000e4;
  param_1[0x56] = _uStack000000cc;
  ppuStack_e8 = (undefined4 **)&DAT_00ded94d;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0xffffffff;
  param_1[0x54] = param_2;
  param_1[0x55] = 0xffffffff;
  param_1[0x57] = in_stack_000000d4;
  param_1[0x1c] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  puStack_ec = (undefined4 *)0x9ee82e;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  piStack_e4 = (int *)0x9ee843;
  cVar2 = FUN_00416db0();
  _uStack000000cc = (undefined1 *)CONCAT13(cVar2 == '\0',uStack000000cc);
  local_8._0_1_ = 0xb;
  if (0xf < local_20) {
    piStack_e4 = (int *)local_34;
                    /* WARNING: Subroutine does not return */
    ppuStack_e8 = (undefined4 **)&UNK_009ee85f;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    piStack_e4 = (int *)(param_2 + 0x1e4);
    ppuStack_e8 = &local_58;
    puStack_ec = (undefined4 *)0x9ee888;
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_4[0x29] + 0x38))();
    param_1[0x20] = *puVar3;
    param_1[0x21] = puVar3[1];
  }
  piStack_e4 = (int *)0x0;
  ppuStack_e8 = (undefined4 **)&DAT_00ded94d;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  puStack_ec = (undefined4 *)0x9ee8b1;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  local_18 = 1;
  piStack_e4 = (int *)0x9ee8ca;
  cVar2 = FUN_00416db0();
  if (cVar2 == '\0') {
    piStack_e4 = (int *)0x0;
    ppuStack_e8 = (undefined4 **)&DAT_00ded94d;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    puStack_ec = (undefined4 *)0x9ee8e5;
    FUN_00409350();
    local_8 = 0xe;
    local_18 = 3;
    piStack_e4 = (int *)0x9ee901;
    cVar2 = FUN_00416db0();
    if (cVar2 != '\0') goto LAB_009ee91d;
    piStack_e4 = (int *)0x9ee912;
    cVar2 = FUN_0040b360();
    _uStack000000cc = (undefined1 *)CONCAT13(1,uStack000000cc);
    if (cVar2 == '\0') goto LAB_009ee91d;
  }
  else {
LAB_009ee91d:
    _uStack000000cc = (undefined1 *)((uint)_uStack000000cc & 0xffffff);
  }
  if ((local_18 & 2) != 0) {
    local_18 = local_18 & 0xfffffffd;
    if (0xf < local_3c) {
      piStack_e4 = (int *)local_50;
                    /* WARNING: Subroutine does not return */
      ppuStack_e8 = (undefined4 **)&UNK_009ee93d;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
  }
  local_8 = 0xb;
  if (((local_18 & 1) != 0) && (local_18 = local_18 & 0xfffffffe, 0xf < local_20)) {
    piStack_e4 = (int *)local_34;
                    /* WARNING: Subroutine does not return */
    ppuStack_e8 = (undefined4 **)&UNK_009ee96a;
    FUN_00aae91b();
  }
  if (cStack000000cf == '\0') {
    piStack_e4 = (int *)0x0;
    ppuStack_e8 = (undefined4 **)&DAT_00ded94d;
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    puStack_ec = (undefined4 *)0x9eea5a;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_18 = local_18 | 4;
    piStack_e4 = (int *)0x9eea70;
    cVar2 = FUN_00416db0();
    if (cVar2 == '\0') {
      piStack_e4 = (int *)0x0;
      ppuStack_e8 = (undefined4 **)&DAT_00ded94d;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      puStack_ec = (undefined4 *)0x9eea8b;
      FUN_00409350();
      local_8 = 0x11;
      local_18 = local_18 | 8;
      piStack_e4 = (int *)0x9eeaa4;
      cVar2 = FUN_00416db0();
      _uStack000000c8 = (undefined1 *)CONCAT13(1,uStack000000c8);
      if (cVar2 != '\0') goto LAB_009eeaaf;
    }
    else {
LAB_009eeaaf:
      _uStack000000c8 = (undefined1 *)((uint)_uStack000000c8 & 0xffffff);
    }
    if ((local_18 & 8) != 0) {
      local_18 = local_18 & 0xfffffff7;
      if (0xf < local_3c) {
        piStack_e4 = (int *)local_50;
                    /* WARNING: Subroutine does not return */
        ppuStack_e8 = (undefined4 **)&UNK_009eeacf;
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
    }
    local_8 = 0xb;
    if (((local_18 & 4) != 0) && (local_18 = local_18 & 0xfffffffb, 0xf < local_20)) {
      piStack_e4 = (int *)local_34;
                    /* WARNING: Subroutine does not return */
      ppuStack_e8 = (undefined4 **)&UNK_009eeafc;
      FUN_00aae91b();
    }
    if (cStack000000cb == '\0') {
      piStack_e4 = (int *)0x0;
      ppuStack_e8 = (undefined4 **)&DAT_00ded94d;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      puStack_ec = (undefined4 *)0x9eebc0;
      FUN_00409350();
      local_8._0_1_ = 0x14;
      piStack_e4 = (int *)0x9eebcf;
      cVar2 = FUN_00416db0();
      _uStack000000c8 = (undefined1 *)CONCAT13(cVar2 == '\0',uStack000000c8);
      local_8._0_1_ = 0xb;
      if (0xf < local_20) {
        piStack_e4 = (int *)local_34;
                    /* WARNING: Subroutine does not return */
        ppuStack_e8 = (undefined4 **)&UNK_009eebeb;
        FUN_00aae91b();
      }
      if (cVar2 != '\0') goto LAB_009eec44;
      piStack_e4 = &stack0x000000ac;
      ppuStack_e8 = (undefined4 **)_uStack0000008c;
      puStack_ec = param_5;
      pcStack_f0 = (undefined1 *)0x9eec14;
      uVar6 = FUN_00996520();
    }
    else {
      piStack_e4 = (int *)in_stack_000000d0[1];
      ppuStack_e8 = (undefined4 **)*in_stack_000000d0;
      puStack_ec = (undefined4 *)0x1;
      pcStack_f0 = (undefined1 *)0x2;
      iStack_f4 = (int)_uStack0000008c;
      puStack_f8 = (undefined4 *)0x0;
      puStack_fc = (undefined4 *)0x0;
      _uStack0000008c = auStack_118;
      uStack_11c = 0;
      uStack_104 = 0xf;
      ppuStack_108 = (undefined4 **)0x0;
      puStack_120 = &DAT_00ded94d;
      auStack_118[0] = 0;
      uStack_124 = 0x9eeb45;
      FUN_00409350();
      _uStack000000c8 = auStack_134;
      local_8._0_1_ = 0x12;
      uStack_138 = 0xffffffff;
      uStack_13c = 0;
      puStack_140 = &stack0x000000ac;
      puStack_120 = (undefined1 *)0xf;
      uStack_124 = 0;
      auStack_134[0] = 0;
      uStack_144 = 0x9eeb6c;
      FUN_00408ed0();
      _uStack000000cc = auStack_150;
      local_8._0_1_ = 0x13;
      uStack_13c = 0xf;
      puStack_140 = (undefined4 *)0x0;
      auStack_150[0] = 0;
      FUN_00408ed0(&stack0x00000090,0,0xffffffff);
      local_8._0_1_ = 0xb;
      uVar6 = FUN_009966a0(param_5);
    }
    param_1[0x28] = uVar6;
    _uStack0000008c =
         (undefined1 *)
         CONCAT22(*(undefined2 *)((int)param_1 + 0x9a),*(undefined2 *)(param_1 + 0x26));
    piStack_e4 = (int *)_uStack0000008c;
    ppuStack_e8 = (undefined4 **)0x9eec44;
    FUN_009efca0();
  }
  else {
    piStack_e4 = (int *)0x1d4;
    ppuStack_e8 = (undefined4 **)0x9ee984;
    iVar4 = FUN_00aae9af();
    local_8._0_1_ = 0xf;
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_58 = (undefined4 *)(int)*(short *)(param_1 + 0x26);
      iStack_f4 = *(int *)(param_2 + 0x288);
      uStack_100 = param_1[0x53];
      uStack_104 = param_1[0x52];
      piStack_e4 = (int *)0x0;
      local_54 = (int)*(short *)((int)param_1 + 0x9a);
      ppuStack_e8 = (undefined4 **)0x0;
      puStack_ec = &stack0x000000d8;
      pcStack_f0 = _uStack000000c8;
      puStack_f8 = &local_b8;
      puStack_fc = &stack0x00000090;
      ppuStack_108 = &local_58;
      puStack_10c = &stack0x000000ac;
      local_b8 = 0;
      local_b4 = 0;
      uStack_114 = 0x9eea02;
      iStack_110 = iVar4;
      piVar5 = (int *)FUN_00a5e790();
    }
    local_8._0_1_ = 0xb;
    param_1[0x28] = piVar5;
    if (_uStack0000008c == (undefined1 *)0x0) {
      piStack_e4 = (int *)(param_1[0x25] + 0x6b9e0);
      ppuStack_e8 = (undefined4 **)0x9eea3d;
      (**(code **)(*piVar5 + 0x74))();
    }
    else {
      piStack_e4 = (int *)_uStack0000008c;
      ppuStack_e8 = (undefined4 **)0x9eea24;
      (**(code **)(*piVar5 + 0x74))();
    }
  }
LAB_009eec44:
  piStack_e4 = (int *)param_1[0x56];
  ppuStack_e8 = (undefined4 **)0x9eec62;
  (**(code **)(*(int *)param_1[0x28] + 0x88))();
  local_54 = param_1[0x28];
  local_58 = param_1;
  local_5c = &PTR_FUN_00e40cd8;
  ppuStack_e8 = (undefined4 **)0x9eec89;
  FUN_0099e960();
  ppuStack_e8 = (undefined4 **)(uint)*(ushort *)(param_1 + 0x50);
  puStack_ec = (undefined4 *)0x9eec9e;
  (**(code **)(*(int *)param_1[0x28] + 0x5c))();
  puStack_ec = (undefined4 *)0xffffffff;
  pcStack_f0 = (char *)0x0;
  iStack_f4 = param_2 + 0x158;
  puStack_f8 = (undefined4 *)0x9eeccd;
  FUN_00408ed0();
  local_8._0_1_ = 0x15;
  puStack_ec = (undefined4 *)0x0;
  pcStack_f0 = "";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_f4 = 0x9eece9;
  FUN_00409350();
  local_8._0_1_ = 0x16;
  puStack_ec = (undefined4 *)0x9eecfb;
  cVar2 = FUN_00416db0();
  _uStack0000008c = (undefined1 *)CONCAT13(cVar2 == '\0',uStack0000008c);
  local_8._0_1_ = 0x15;
  if (0xf < local_20) {
    puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009eed17;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_ec = (undefined4 *)0x9eed28;
    FUN_009c7290();
    puStack_ec = (undefined4 *)0x1;
    pcStack_f0 = (char *)0x9eed35;
    uVar6 = FUN_009c7870();
    param_1[0x4c] = uVar6;
  }
  puStack_ec = (undefined4 *)0xffffffff;
  pcStack_f0 = (char *)0x0;
  iStack_f4 = param_2 + 0x1ac;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  puStack_f8 = (undefined4 *)0x9eed6b;
  FUN_00408ed0();
  local_8._0_1_ = 0x17;
  puStack_ec = (undefined4 *)0x0;
  pcStack_f0 = "";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_f4 = 0x9eed87;
  FUN_00409350();
  local_8._0_1_ = 0x18;
  puStack_ec = (undefined4 *)0x9eed99;
  cVar2 = FUN_00416db0();
  _uStack0000008c = (undefined1 *)CONCAT13(cVar2 == '\0',uStack0000008c);
  local_8._0_1_ = 0x17;
  if (0xf < local_20) {
    puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009eedb5;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_ec = (undefined4 *)0x9eedc6;
    FUN_009c7290();
    puStack_ec = (undefined4 *)0x1;
    pcStack_f0 = (char *)0x9eedd3;
    uVar6 = FUN_009c7870();
    param_1[0x4e] = uVar6;
  }
  puStack_ec = (undefined4 *)0xffffffff;
  iStack_f4 = param_2 + 400;
  pcStack_f0 = (char *)0x0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  puStack_f8 = (undefined4 *)0x9eedf8;
  FUN_00408ed0();
  local_8._0_1_ = 0x19;
  puStack_ec = (undefined4 *)0x0;
  pcStack_f0 = "";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_f4 = 0x9eee14;
  FUN_00409350();
  local_8._0_1_ = 0x1a;
  puStack_ec = (undefined4 *)0x9eee23;
  cVar2 = FUN_00416db0();
  _uStack0000008c = (undefined1 *)CONCAT13(cVar2 == '\0',uStack0000008c);
  local_8._0_1_ = 0x19;
  if (0xf < local_20) {
    puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009eee3f;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_ec = (undefined4 *)0x9eee50;
    FUN_009c7290();
    puStack_ec = (undefined4 *)0x1;
    pcStack_f0 = (char *)0x9eee5a;
    uVar6 = FUN_009c7870();
    param_1[0x4d] = uVar6;
  }
  puStack_ec = (undefined4 *)0xffffffff;
  pcStack_f0 = (char *)0x0;
  iStack_f4 = param_2 + 0x174;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  puStack_f8 = (undefined4 *)0x9eee84;
  FUN_00408ed0();
  local_8._0_1_ = 0x1b;
  puStack_ec = (undefined4 *)0x0;
  pcStack_f0 = "";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_f4 = 0x9eeea0;
  FUN_00409350();
  local_8._0_1_ = 0x1c;
  puStack_ec = (undefined4 *)0x9eeeb2;
  cVar2 = FUN_00416db0();
  local_8._0_1_ = 0x1b;
  if (0xf < local_20) {
    puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009eeecb;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_ec = (undefined4 *)0x9eeed9;
    FUN_009c7290();
LAB_009eefa6:
    puStack_ec = (undefined4 *)0x1;
LAB_009eefa8:
    pcStack_f0 = (char *)0x9eefad;
    uVar6 = FUN_009c7870();
    param_1[0x4f] = uVar6;
  }
  else {
    puStack_ec = (undefined4 *)0x0;
    pcStack_f0 = "";
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    iStack_f4 = 0x9eeefc;
    FUN_00409350();
    local_8._0_1_ = 0x1d;
    puStack_ec = (undefined4 *)0x9eef0c;
    (*(code *)**(undefined4 **)param_1[0x28])();
    puStack_ec = (undefined4 *)0x9eef16;
    cVar2 = FUN_00416db0();
    local_8._0_1_ = 0x1b;
    if (0xf < local_20) {
      puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
      pcStack_f0 = &UNK_009eef2f;
      FUN_00aae91b();
    }
    if (cVar2 == '\0') {
      puStack_ec = (undefined4 *)0x9eef3d;
      FUN_009c7290();
      puStack_ec = (undefined4 *)0x1;
      pcStack_f0 = (char *)0x9eef4b;
      (*(code *)**(undefined4 **)param_1[0x28])();
      goto LAB_009eefa8;
    }
    puStack_ec = (undefined4 *)0x0;
    pcStack_f0 = "";
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    iStack_f4 = 0x9eef67;
    FUN_00409350();
    local_8._0_1_ = 0x1e;
    puStack_ec = (undefined4 *)0x9eef79;
    cVar2 = FUN_00416db0();
    local_8._0_1_ = 0x1b;
    if (0xf < local_20) {
      puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
      pcStack_f0 = &UNK_009eef92;
      FUN_00aae91b();
    }
    if (cVar2 == '\0') {
      puStack_ec = (undefined4 *)0x9eefa0;
      FUN_009c7290();
      goto LAB_009eefa6;
    }
  }
  puStack_ec = (undefined4 *)0x9;
  pcStack_f0 = "NOTOOLTIP";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_f4 = 0x9eefcc;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0x1f);
  local_18 = local_18 | 0x10;
  puStack_ec = (undefined4 *)0x9eefdf;
  cVar2 = FUN_00416db0();
  if (cVar2 == '\0') {
    puStack_ec = (undefined4 *)0x0;
    pcStack_f0 = "";
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    iStack_f4 = 0x9eeffa;
    FUN_00409350();
    local_8 = 0x20;
    local_18 = local_18 | 0x20;
    puStack_ec = (undefined4 *)0x9ef010;
    cVar2 = FUN_00416db0();
    bVar1 = true;
    if (cVar2 == '\0') goto LAB_009ef01c;
  }
  bVar1 = false;
LAB_009ef01c:
  if ((local_18 & 0x20) != 0) {
    local_18 = local_18 & 0xffffffdf;
    if (0xf < local_3c) {
      puStack_ec = (undefined4 *)local_50;
                    /* WARNING: Subroutine does not return */
      pcStack_f0 = &UNK_009ef035;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
  }
  local_8 = 0x1b;
  if ((local_18 & 0x10) != 0) {
    if (0xf < local_20) {
      puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
      pcStack_f0 = &UNK_009ef05e;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
  }
  if (bVar1) {
    puStack_ec = &stack0x00000038;
    pcStack_f0 = (char *)0x9ef07f;
    iVar4 = (**(code **)(*param_4 + 0x38))();
    param_1[0x2a] = iVar4;
    if (*(char *)(iVar4 + 200) != '\0') {
      puStack_ec = (undefined4 *)0x9ef09a;
      (**(code **)(**(int **)(iVar4 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar4 + 200) = 0;
    param_2 = CONCAT22(param_6._2_2_ + 10,(short)param_6 + 0x1e);
    puStack_ec = (undefined4 *)param_2;
    pcStack_f0 = (char *)0x9ef0c6;
    FUN_009e7350();
    puStack_ec = (undefined4 *)0x9ef0d4;
    FUN_009e7500();
  }
  else {
    param_1[0x2a] = 0;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    puStack_ec = (undefined4 *)0x4;
    pcStack_f0 = (char *)0x9ef0f2;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  puStack_ec = (undefined4 *)0x9ef112;
  puVar7 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar3 = (undefined4 *)param_1[0x29];
  if ((puVar7 != puVar3) && (puVar3 != (undefined4 *)0x0)) {
    puStack_ec = (undefined4 *)0x1;
    pcStack_f0 = (char *)0x9ef12b;
    (**(code **)*puVar3)();
  }
  puStack_ec = (undefined4 *)0x0;
  pcStack_f0 = "";
  param_1[0x29] = puVar7;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_f4 = 0x9ef14c;
  FUN_00409350();
  local_8._0_1_ = 0x21;
  puStack_ec = (undefined4 *)0x9ef15e;
  cVar2 = FUN_00416db0();
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  if (0xf < local_20) {
    puStack_ec = (undefined4 *)local_34;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef177;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_ec = &stack0x000000ac;
    pcStack_f0 = (char *)0x9ef194;
    iVar4 = FUN_00973bd0();
    if (iVar4 == 0) {
      puStack_ec = &stack0x000000ac;
      pcStack_f0 = (char *)0x9ef1ac;
      iVar4 = FUN_00973bd0();
    }
    param_1[0x47] = iVar4;
  }
  else {
    param_1[0x47] = 0;
  }
  if (0xf < local_80) {
    puStack_ec = (undefined4 *)local_94;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef1cc;
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  if (0xf < local_64) {
    puStack_ec = (undefined4 *)local_78;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef1eb;
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (0xf < local_9c) {
    puStack_ec = (undefined4 *)local_b0;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef20d;
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  if (0xf < in_stack_00000030) {
    puStack_ec = (undefined4 *)param_7;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef24a;
    FUN_00aae91b();
  }
  if (0xf < in_stack_0000004c) {
    puStack_ec = (undefined4 *)in_stack_00000038;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef266;
    FUN_00aae91b();
  }
  in_stack_0000004c = 0xf;
  in_stack_00000048 = 0;
  in_stack_00000038 = in_stack_00000038 & 0xffffff00;
  if (0xf < in_stack_00000068) {
    puStack_ec = (undefined4 *)in_stack_00000054;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef282;
    FUN_00aae91b();
  }
  in_stack_00000068 = 0xf;
  in_stack_00000064 = 0;
  in_stack_00000054 = in_stack_00000054 & 0xffffff00;
  if (0xf < in_stack_00000084) {
    puStack_ec = (undefined4 *)in_stack_00000070;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef2a1;
    FUN_00aae91b();
  }
  in_stack_00000084 = 0xf;
  in_stack_00000080 = 0;
  in_stack_00000070 = in_stack_00000070 & 0xffffff00;
  if (0xf < in_stack_000000a4) {
    puStack_ec = (undefined4 *)in_stack_00000090;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef2c9;
    FUN_00aae91b();
  }
  in_stack_000000a4 = 0xf;
  in_stack_000000a0 = 0;
  in_stack_00000090 = in_stack_00000090 & 0xffffff00;
  if (0xf < in_stack_000000c0) {
    puStack_ec = (undefined4 *)in_stack_000000ac;
                    /* WARNING: Subroutine does not return */
    pcStack_f0 = &UNK_009ef2f4;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

