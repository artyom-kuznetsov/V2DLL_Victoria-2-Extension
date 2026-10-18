// FUN_00a6c290 @ 00a6c290 body=[[00a6c290, 00a6c8dd] [00a6c8e1, 00a6c8f3] [00a6c8fd, 00a6cd93] [00a6cd97, 00a6cdb4] [00a6cdb8, 00a6cdf7] [00a6cdfb, 00a6ce19] [00a6ce1d, 00a6ce31]]


/* WARNING: Removing unreachable block (ram,0x00a6cae9) */
/* WARNING: Removing unreachable block (ram,0x00a6cc4b) */

undefined4 *
FUN_00a6c290(undefined4 *param_1,uint *param_2,undefined1 *param_3,undefined4 param_4,uint param_5)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  short *psVar10;
  code *pcVar11;
  undefined4 extraout_ECX;
  bool bVar12;
  undefined8 uVar13;
  undefined1 *in_stack_00000024;
  uint in_stack_00000028;
  undefined2 uStack00000030;
  undefined2 uStack00000032;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  undefined4 in_stack_00000048;
  uint in_stack_0000004c;
  undefined4 in_stack_00000054;
  undefined2 uStack00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_0000006c;
  uint in_stack_00000070;
  undefined4 in_stack_00000078;
  uint in_stack_0000008c;
  code **in_stack_00000094;
  int in_stack_00000098;
  int in_stack_000000a8;
  int in_stack_000000b8;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  code *pcStack_78;
  int iStack_74;
  code *pcStack_70;
  int iStack_6c;
  char *pcStack_68;
  undefined8 uStack_64;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  int iStack_48;
  undefined4 *puStack_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int *piStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8fe78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f0914 = DAT_013f0914 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_00e3c310;
  piStack_34 = (int *)param_3;
  local_8._0_1_ = 9;
  local_8._1_3_ = 0;
  local_3c = (undefined4 *)0xa6c2e4;
  local_38 = param_1 + 6;
  FUN_009a6a30();
  param_1[0x1b] = param_2;
  param_1[0x1c] = param_4;
  piStack_34 = (int *)0x0;
  local_38 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  param_1[6] = &PTR_FUN_00e42b10;
  local_40 = (undefined4 *)0x0;
  puStack_44 = (undefined4 *)0x0;
  iStack_48 = 0;
  local_4c = 0;
  local_50 = 0;
  uStack_54 = 0;
  puStack_58 = (undefined4 *)0x0;
  iStack_5c = 0;
  uStack_64._4_4_ = FUN_00a6d470;
  uStack_64._0_4_ = 0;
  pcStack_68 = &LAB_00a6d0a0;
  iStack_6c = 0;
  pcStack_70 = FUN_004010c0;
  iStack_74 = 0;
  pcStack_78 = FUN_004010c0;
  *param_1 = &PTR_FUN_00e42a68;
  puStack_7c = (undefined4 *)0xa6c338;
  FUN_009cd590();
  param_1[0x34] = FUN_00a6de50;
  param_1[0x32] = &PTR_FUN_00e42bc0;
  param_1[0x33] = param_1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = FUN_00a6de90;
  param_1[0x3c] = &PTR_FUN_00e42bc0;
  param_1[0x3d] = param_1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  piStack_34 = (int *)0x0;
  local_38 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  puStack_44 = (undefined4 *)0x0;
  iStack_48 = 0;
  local_4c = 0;
  local_50 = 0;
  uStack_54 = 0;
  puStack_58 = (undefined4 *)0x0;
  iStack_5c = 0;
  uStack_64._4_4_ = FUN_00a6d0b0;
  uStack_64._0_4_ = 0;
  pcStack_68 = &LAB_00a6d0a0;
  iStack_6c = 0;
  pcStack_70 = FUN_004010c0;
  iStack_74 = 0;
  pcStack_78 = FUN_004010c0;
  puStack_7c = (undefined4 *)0xa6c405;
  FUN_009cd590();
  param_1[0x5f] = 0xf;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  piStack_34 = (int *)0xffffffff;
  local_8._0_1_ = 0xf;
  local_38 = (undefined4 *)0x0;
  local_3c = &stack0x0000005c;
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  local_40 = (undefined4 *)0xa6c43c;
  FUN_00408ed0();
  piStack_34 = (int *)0xffffffff;
  local_8._0_1_ = 0x10;
  local_38 = (undefined4 *)0x0;
  local_3c = &stack0x00000078;
  param_1[0x6d] = 0xf;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  local_40 = (undefined4 *)0xa6c45b;
  FUN_00408ed0();
  param_1[0x72] = in_stack_00000034;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = in_stack_00000054;
  *(undefined2 *)(param_1 + 0x7b) = uStack00000058;
  param_1[0x7c] = &PTR_FUN_00e41e84;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = &PTR_FUN_00e41e84;
  param_1[0x86] = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = &PTR_FUN_00e41e84;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  local_8._0_1_ = 0x14;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  piStack_34 = (int *)in_stack_00000098;
  while (piStack_34 != (int *)0x0) {
    _uStack00000058 = *(uint **)((int)piStack_34 + 0x20);
    local_38 = (undefined4 *)0xa6c582;
    FUN_00408db0();
    piStack_34 = (int *)_uStack00000058;
  }
  local_8._0_1_ = 0x15;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  piStack_34 = (int *)in_stack_000000a8;
  while (piStack_34 != (int *)0x0) {
    _uStack00000058 = *(uint **)((int)piStack_34 + 0x20);
    local_38 = (undefined4 *)0xa6c5c2;
    FUN_00408db0();
    piStack_34 = (int *)_uStack00000058;
  }
  local_8._0_1_ = 0x16;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  piStack_34 = (int *)in_stack_000000b8;
  while (piStack_34 != (int *)0x0) {
    _uStack00000058 = *(uint **)((int)piStack_34 + 0x20);
    local_38 = (undefined4 *)0xa6c602;
    FUN_00408db0();
    piStack_34 = (int *)_uStack00000058;
  }
  param_1[0xa4] = 0;
  *(undefined1 *)((int)param_1 + 0x29e) = 0;
  *(undefined2 *)(param_1 + 0xa7) = 0x100;
  _uStack00000058 =
       (uint *)CONCAT22((short)*(undefined4 *)((int)param_2 + 0x6b9c0),
                        (short)*(undefined4 *)((int)param_2 + 0x6b9bc));
  piStack_34 = (int *)0xa6c64d;
  param_2 = param_1 + 0xac;
  FUN_009f8e80();
  uVar6 = DAT_00f092fc;
  local_8._0_1_ = 0x18;
  param_1[0xed] = _uStack00000058;
  param_1[0xac] = &PTR_FUN_00e38350;
  param_1[0xea] = uVar6;
  piStack_34 = (int *)0x0;
  param_1[0xf3] = 0xf;
  param_1[0xf2] = 0;
  local_38 = (undefined4 *)&DAT_00ded94d;
  *(undefined1 *)(param_1 + 0xee) = 0;
  local_3c = (undefined4 *)0xa6c68e;
  FUN_00409350();
  *(undefined1 *)(param_1 + 0xf5) = 1;
  *(undefined4 *)((int)param_1 + 0x3d6) = 0;
  _uStack00000058 = &local_4c;
  local_8 = CONCAT31(local_8._1_3_,0x19);
  local_50 = 0xffffffff;
  local_38 = (undefined4 *)0xf;
  local_3c = (undefined4 *)0x0;
  local_4c = local_4c & 0xffffff00;
  uStack_54 = 0;
  puStack_58 = &param_5;
  iStack_5c = 0xa6c6c2;
  FUN_00408ed0();
  local_50 = param_1[0x1c];
  uStack_54 = 0xa6c6cb;
  uVar6 = FUN_009cfc00();
  _uStack00000058 = &local_4c;
  param_1[0x6f] = uVar6;
  param_1[0x97] = 0x8c008c;
  local_50 = 0xffffffff;
  local_38 = (undefined4 *)0xf;
  uStack_54 = 0;
  local_3c = (undefined4 *)0x0;
  local_4c = local_4c & 0xffffff00;
  iStack_5c = 0xa6c6fb;
  puStack_58 = param_1 + 0x61;
  FUN_00408ed0();
  local_50 = param_1[0x1c];
  uStack_54 = 0xa6c704;
  uVar6 = FUN_009cfc00();
  _uStack00000058 = &local_4c;
  param_1[0xaa] = uVar6;
  local_50 = 0xffffffff;
  uStack_54 = 0;
  puStack_58 = param_1 + 0x68;
  local_38 = (undefined4 *)0xf;
  local_3c = (undefined4 *)0x0;
  local_4c = local_4c & 0xffffff00;
  iStack_5c = 0xa6c72e;
  FUN_00408ed0();
  local_50 = param_1[0x1c];
  uStack_54 = 0xa6c737;
  uVar6 = FUN_009cfc00();
  _uStack00000058 = &local_4c;
  param_1[0xa8] = uVar6;
  local_50 = 0xffffffff;
  uStack_54 = 0;
  puStack_58 = param_1 + 0x68;
  local_38 = (undefined4 *)0xf;
  local_3c = (undefined4 *)0x0;
  local_4c = local_4c & 0xffffff00;
  iStack_5c = 0xa6c761;
  FUN_00408ed0();
  local_50 = param_1[0x1c];
  uStack_54 = 0xa6c76a;
  uVar6 = FUN_009cfc00();
  _uStack00000058 = &local_4c;
  local_50 = 0xffffffff;
  param_1[0xa9] = uVar6;
  uStack_54 = 0;
  local_38 = (undefined4 *)0xf;
  local_3c = (undefined4 *)0x0;
  local_4c = local_4c & 0xffffff00;
  iStack_5c = 0xa6c78e;
  puStack_58 = param_1 + 0x61;
  FUN_00408ed0();
  local_50 = param_1[0x1c];
  uStack_54 = 0xa6c797;
  uVar6 = FUN_009cfc00();
  puVar2 = (undefined4 *)param_1[0x98];
  param_1[0xab] = uVar6;
  *(undefined1 *)(param_1 + 0x9b) = 1;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      piStack_34 = (int *)0xa6c913;
      FUN_00a6ef40();
      for (iVar7 = param_1[0x98]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x20)) {
        piStack_34 = (int *)0x0;
        _uStack00000058 = &local_50;
        uStack_54 = 0xffffffff;
        puStack_58 = (undefined4 *)0x0;
        local_3c = (undefined4 *)0xf;
        local_40 = (undefined4 *)0x0;
        local_50 = local_50 & 0xffffff00;
        uStack_64._4_4_ = (code *)0xa6c945;
        iStack_5c = iVar7;
        FUN_00408ed0();
        uStack_54 = 0xa6c94d;
        piStack_34 = (int *)FUN_009cff20();
        local_3c = (undefined4 *)0xa6c960;
        local_38 = (undefined4 *)iVar7;
        (**(code **)(param_1[0x7c] + 0x18))();
      }
      for (iVar7 = param_1[0x9c]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x20)) {
        piStack_34 = (int *)0x0;
        _uStack00000058 = &local_50;
        uStack_54 = 0xffffffff;
        puStack_58 = (undefined4 *)0x0;
        local_3c = (undefined4 *)0xf;
        local_40 = (undefined4 *)0x0;
        local_50 = local_50 & 0xffffff00;
        uStack_64._4_4_ = (code *)0xa6c996;
        iStack_5c = iVar7;
        FUN_00408ed0();
        uStack_54 = 0xa6c99e;
        piVar9 = (int *)FUN_009d0250();
        piStack_34 = (int *)0xa6c9ac;
        (**(code **)(*piVar9 + 0xb0))();
        local_3c = (undefined4 *)0xa6c9bf;
        local_38 = (undefined4 *)iVar7;
        piStack_34 = piVar9;
        (**(code **)(param_1[0x85] + 0x18))();
      }
      piStack_34 = param_1 + 0x1e;
      local_38 = (undefined4 *)0xa6c9db;
      (**(code **)(*(int *)(param_1[0x6f] + 0x54) + 4))();
      iVar7 = param_1[0x6f];
      *(undefined1 *)(iVar7 + 0xb0) = 1;
      *(undefined4 **)(iVar7 + 0xb4) = param_1;
      uVar1 = *(undefined2 *)(param_1 + 0x72);
      _uStack00000058 = (uint *)param_1[0x72];
      iVar7 = param_1[0x6f];
      *(undefined2 *)(iVar7 + 0xba) = *(undefined2 *)((int)param_1 + 0x1ca);
      *(undefined2 *)(iVar7 + 0xb8) = uVar1;
      local_3c = (undefined4 *)0xa6ca2e;
      local_38 = _uStack00000058;
      (**(code **)(**(int **)(iVar7 + 0x94) + 0x100))();
      *(undefined2 *)((int)param_1 + 0x1c6) = uStack00000032;
      *(undefined2 *)(param_1 + 0x71) = uStack00000030;
      local_40 = (undefined4 *)0xa6ca5c;
      local_3c = param_1 + 0x46;
      (**(code **)(*(int *)(param_1[0xa8] + 0x54) + 4))();
      puStack_44 = (undefined4 *)0xa6ca6e;
      local_40 = param_1 + 0x46;
      (**(code **)(*(int *)(param_1[0xab] + 0x54) + 4))();
      puStack_44 = in_stack_00000094;
      _uStack00000058 = (uint *)((int)&uStack_64 + 4);
      uStack_64._0_4_ = 6;
      local_4c = 0xf;
      local_50 = 0;
      pcStack_68 = "Scroll";
      uStack_64._4_4_ = (code *)((uint)uStack_64._4_4_ & 0xffffff00);
      iStack_6c = 0xa6ca9a;
      FUN_00409350();
      uStack_64._0_4_ = 0xa6caa2;
      uVar6 = FUN_009d0360();
      param_1[0xa6] = uVar6;
      puStack_44 = (undefined4 *)&stack0x00000058;
      iStack_48 = 0xa6cabc;
      psVar10 = (short *)(**(code **)(*(int *)param_1[0x6f] + 0xf4))();
      uVar13 = CONCAT44(uStack_64._4_4_,(uint)uStack_64);
      uStack_64._0_4_ = *psVar10 * 1000;
      param_2 = &uStack_54;
      uStack_54 = 0;
      local_4c = 1000;
      local_50 = (uint)uStack_64;
      if (((int)(uint)uStack_64 < -0x189373) || (0x20c49a < (int)(uint)uStack_64)) {
        uStack_64._4_4_ = (code *)((int)(uint)uStack_64 >> 0x1f);
        puStack_58 = (undefined4 *)0x0;
        iStack_5c = 1000;
        pcStack_68 = (char *)0xa6cb27;
        uStack_64 = __allmul();
        iStack_5c = 1000;
        pcStack_68 = (char *)0xa6cb36;
        puStack_58 = (undefined4 *)0;
        iVar7 = __alldiv();
      }
      else {
        iVar7 = (*psVar10 * 1000000) / 1000;
        param_2 = &uStack_54;
        uStack_64 = uVar13;
      }
      iStack_48 = iVar7 / 1000 + 1;
      puStack_58 = (undefined4 *)0xa6cb63;
      (**(code **)(*(int *)(param_1[0xa6] + 0x54) + 0x14))();
      puStack_58 = param_1 + 0x32;
      iStack_5c = 0xa6cb7b;
      (**(code **)(*(int *)(param_1[0xa6] + 0x54) + 4))();
      iVar7 = param_1[0xa6];
      iStack_5c = 1;
      uStack_64._4_4_ = (code *)0x1;
      _uStack00000058 = (uint *)0x3a03126f;
      pcStack_68 = (char *)0x3f000000;
      iStack_6c = 0xa6cbb7;
      FUN_00401000();
      pcStack_68 = (char *)0xa6cbbf;
      uStack_64._0_4_ = FUN_00b31c00();
      pcStack_68 = (char *)0xa6cbcc;
      (**(code **)(*(int *)(iVar7 + 0x54) + 0x1c))();
      pcStack_68 = (char *)in_stack_00000094;
      param_2 = &uStack_84;
      pcStack_70 = (code *)0xf;
      iStack_74 = 0;
      uStack_84 = uStack_84 & 0xffffff00;
      FUN_00409350("Scroll2",7);
      uVar6 = FUN_009d0360();
      param_1[0xa5] = uVar6;
      pcStack_68 = (char *)&param_2;
      iStack_6c = 0xa6cc1a;
      iVar7 = (**(code **)(*(int *)param_1[0x6f] + 0xf4))();
      iStack_74 = *(short *)(iVar7 + 2) * 1000;
      in_stack_00000094 = &pcStack_78;
      pcStack_78 = (code *)0x0;
      pcStack_70 = (code *)0x3e8;
      if ((iStack_74 < -0x189373) || (0x20c49a < iStack_74)) {
        uStack_84 = iStack_74 >> 0x1f;
        puStack_7c = (undefined4 *)0x0;
        uStack_80 = 1000;
        uVar13 = __allmul(iStack_74);
        uStack_84 = (uint)((ulonglong)uVar13 >> 0x20);
        uStack_80 = 1000;
        puStack_7c = (undefined4 *)0;
        iVar7 = __alldiv((int)uVar13);
      }
      else {
        iVar7 = (*(short *)(iVar7 + 2) * 1000000) / 1000;
        in_stack_00000094 = &pcStack_78;
      }
      iStack_6c = iVar7 / 1000 + 1;
      puStack_7c = (undefined4 *)0xa6ccc5;
      (**(code **)(*(int *)(param_1[0xa5] + 0x54) + 0x14))();
      puStack_7c = param_1 + 0x3c;
      uStack_80 = 0xa6ccdd;
      (**(code **)(*(int *)(param_1[0xa5] + 0x54) + 4))();
      iVar7 = param_1[0xa5];
      uStack_80 = 1;
      uStack_84 = 1;
      FUN_00401000((float)_uStack00000058 * 1000.0,extraout_ECX);
      uVar6 = FUN_00b31c00();
      (**(code **)(*(int *)(iVar7 + 0x54) + 0x1c))(uVar6);
      cVar5 = FUN_00a6e810(param_1);
      if (cVar5 == '\0') {
        pcVar11 = *(code **)(*(int *)param_1[0xa6] + 0x38);
      }
      else {
        pcVar11 = *(code **)(*(int *)param_1[0xa6] + 0x34);
      }
      (*pcVar11)();
      cVar5 = FUN_00a6e990(param_1);
      if (cVar5 == '\0') {
        pcVar11 = *(code **)(*(int *)param_1[0xa5] + 0x38);
      }
      else {
        pcVar11 = *(code **)(*(int *)param_1[0xa5] + 0x34);
      }
      (*pcVar11)();
      FUN_00a6d5e0(0x42bc0000);
      FUN_00a6d770(param_1[0x71]);
      FUN_00a6ded0();
      if (0xf < in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_5);
      }
      in_stack_00000028 = 0xf;
      in_stack_00000024 = (undefined1 *)0x0;
      param_5 = param_5 & 0xffffff00;
      if (0xf < in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(in_stack_00000038);
      }
      in_stack_0000004c = 0xf;
      in_stack_00000048 = 0;
      in_stack_00000038 = in_stack_00000038 & 0xffffff00;
      FUN_004097a0(&stack0x00000098);
      FUN_004097a0(&stack0x000000a8);
      FUN_004097a0(&stack0x000000b8);
      if (in_stack_00000070 < 0x10) {
        in_stack_00000070 = 0xf;
        in_stack_0000006c = 0;
        in_stack_0000005c = in_stack_0000005c & 0xffffff00;
        if (in_stack_0000008c < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(in_stack_00000078);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_stack_0000005c);
    }
    param_4 = puVar2[5];
    piStack_34 = (int *)in_stack_00000024;
    if ((undefined1 *)puVar2[4] <= in_stack_00000024) {
      piStack_34 = (int *)puVar2[4];
    }
    local_38 = (undefined4 *)0xa6c7e1;
    iVar7 = FUN_00414bd0();
    puVar3 = (undefined1 *)puVar2[4];
    bVar12 = false;
    if (iVar7 == 0) {
      if (in_stack_00000024 < puVar3) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(in_stack_00000024 != puVar3);
      }
      bVar12 = uVar8 == 0;
    }
    if (bVar12) {
LAB_00a6c891:
      if (*(char *)(param_1 + 0x9b) == '\0') {
        iVar7 = puVar2[7];
        iVar4 = puVar2[8];
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0x20) = iVar4;
        }
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x1c) = iVar7;
        }
        if (puVar2 == (undefined4 *)param_1[0x98]) {
          param_1[0x98] = iVar4;
        }
        if (puVar2 == (undefined4 *)param_1[0x99]) {
          param_1[0x99] = iVar7;
        }
        if ((uint)puVar2[5] < 0x10) {
          puVar2[5] = 0xf;
          puVar2[4] = 0;
          *(undefined1 *)puVar2 = 0;
                    /* WARNING: Subroutine does not return */
          local_38 = (undefined4 *)&UNK_00a6c8f4;
          piStack_34 = puVar2;
          FUN_00aae91b();
        }
        piStack_34 = (int *)*puVar2;
                    /* WARNING: Subroutine does not return */
        local_38 = (undefined4 *)&UNK_00a6c8de;
        FUN_00aae91b();
      }
      *(undefined1 *)(puVar2 + 9) = 1;
    }
    else {
      _uStack00000058 = (uint *)param_1[0x65];
      param_2 = param_1 + 0x61;
      if (0xf < (uint)param_1[0x66]) {
        param_2 = (uint *)*param_2;
      }
      param_3 = (undefined1 *)puVar2[4];
      if (puVar3 < (undefined1 *)puVar2[4]) {
        param_3 = puVar3;
      }
      piStack_34 = (int *)param_3;
      if (_uStack00000058 <= param_3) {
        piStack_34 = (int *)_uStack00000058;
      }
      local_38 = (undefined4 *)0xa6c858;
      iVar7 = FUN_00414bd0();
      bVar12 = false;
      if (iVar7 == 0) {
        if (param_3 < _uStack00000058) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)((uint *)param_3 != _uStack00000058);
        }
        bVar12 = uVar8 == 0;
      }
      if (bVar12) goto LAB_00a6c891;
      piStack_34 = (int *)0xa6c88d;
      cVar5 = FUN_00416db0();
      if (cVar5 != '\0') goto LAB_00a6c891;
    }
    puVar2 = (undefined4 *)puVar2[8];
  } while( true );
}

