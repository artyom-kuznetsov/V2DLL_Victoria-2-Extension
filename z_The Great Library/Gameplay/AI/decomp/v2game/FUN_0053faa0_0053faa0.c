// FUN_0053faa0 @ 0053faa0 body=[[0053faa0, 0053fc0a] [0053fc0e, 0053fc30] [0053fc34, 0053fd43] [0053fd47, 0053fd69] [0053fd6d, 0053fe59] [0053fe5d, 0053ff4e] [0053ff52, 0054042b] [0054042f, 0054044f] [00540453, 0054048d]]


void FUN_0053faa0(int param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 **ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_310 [2];
  undefined1 auStack_308 [96];
  undefined4 uStack_2a8;
  undefined1 *puStack_2a4;
  char *pcStack_2a0;
  undefined4 *puStack_29c;
  char *pcStack_298;
  uint *puStack_294;
  uint *local_290;
  undefined1 **local_28c;
  undefined1 local_27c [56];
  undefined1 local_244 [56];
  undefined1 local_20c [56];
  undefined1 local_1d4 [56];
  undefined1 local_19c [28];
  undefined1 local_180 [28];
  undefined1 local_164 [28];
  undefined1 local_148 [28];
  undefined1 local_12c [28];
  undefined1 local_110 [28];
  undefined1 local_f4 [28];
  uint local_d8 [7];
  uint local_bc [7];
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  undefined1 local_84 [16];
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9c4db;
  local_10 = ExceptionList;
  if ((param_5 < 0) || ((param_5 < 1 && (param_4 == (uint *)0x0)))) goto LAB_00540461;
  local_28c = (undefined1 **)param_1;
  local_290 = (uint *)0x53fae0;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_005061e0();
  local_24 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_28c = (undefined1 **)*piVar3;
  while (local_28c != (undefined1 **)0x0) {
    iVar5 = *(int *)((int)local_28c + 0x3c);
    local_290 = (uint *)0x53fafe;
    FUN_0042b730();
    local_28c = (undefined1 **)iVar5;
  }
  local_8 = 0;
  local_28c = (undefined1 **)0x8;
  local_290 = (uint *)0xdff828;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  puStack_294 = (uint *)0x53fb24;
  FUN_00409350();
  local_8._0_1_ = 1;
  local_28c = (undefined1 **)0x53fb36;
  puVar4 = (undefined1 *)FUN_0055dd40();
  local_28c = (undefined1 **)0xffffffff;
  local_290 = (uint *)0x0;
  puStack_294 = local_48;
  local_8._0_1_ = 2;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = 0;
  pcStack_298 = (char *)0x53fb54;
  FUN_00408ed0();
  local_28c = (undefined1 **)0xffffffff;
  local_8._0_1_ = 3;
  local_290 = (uint *)0x0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = 0;
  pcStack_298 = (char *)0x53fb6d;
  puStack_294 = (uint *)puVar4;
  FUN_00408ed0();
  local_8._0_1_ = 4;
  local_28c = (undefined1 **)0x44;
  local_28 = (undefined4 *)local_20;
  local_290 = (uint *)0x53fb7e;
  puVar4 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  local_2c = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    local_20 = (undefined1 *)0x0;
    local_8._0_1_ = uVar2;
  }
  else {
    local_28c = (undefined1 **)0xffffffff;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_84;
    *(undefined4 *)(puVar4 + 0x14) = 0xf;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *puVar4 = 0;
    pcStack_298 = (char *)0x53fba4;
    FUN_00408ed0();
    local_28c = (undefined1 **)0xffffffff;
    local_8._0_1_ = 6;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_68;
    *(undefined4 *)(puVar4 + 0x30) = 0xf;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    puVar4[0x1c] = 0;
    pcStack_298 = (char *)0x53fbbf;
    FUN_00408ed0();
    *(undefined4 **)(puVar4 + 0x38) = local_28;
    *(undefined4 *)(puVar4 + 0x3c) = 0;
    puVar4[0x40] = 0;
    local_20 = puVar4;
  }
  puVar4 = local_20;
  if (local_1c != 0) {
    *(undefined1 **)((int)local_28 + 0x3c) = local_20;
    puVar4 = local_24;
  }
  local_24 = puVar4;
  local_28c = (undefined1 **)0x53fbf2;
  local_1c = local_1c + 1;
  FUN_00a39a80();
  if (0xf < local_8c) {
    local_28c = (undefined1 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0053fc0b;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (0xf < local_34) {
    local_28c = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0053fc31;
    FUN_00aae91b();
  }
  local_28c = (undefined1 **)0x7;
  local_290 = (uint *)0xdff834;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  puStack_294 = (uint *)0x53fc4c;
  FUN_00409350();
  local_8._0_1_ = 7;
  local_2c = (undefined1 *)&local_290;
  local_290 = param_4;
  puStack_294 = local_a0;
  local_28c = (undefined1 **)param_5;
  pcStack_298 = (char *)0x53fc6f;
  puVar4 = (undefined1 *)FUN_00988b20();
  local_28c = (undefined1 **)0xffffffff;
  local_8._0_1_ = 8;
  local_290 = (uint *)0x0;
  puStack_294 = local_48;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = 0;
  pcStack_298 = (char *)0x53fc8d;
  FUN_00408ed0();
  local_28c = (undefined1 **)0xffffffff;
  local_8._0_1_ = 9;
  local_290 = (uint *)0x0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = 0;
  pcStack_298 = (char *)0x53fca6;
  puStack_294 = (uint *)puVar4;
  FUN_00408ed0();
  local_8._0_1_ = 10;
  local_28c = (undefined1 **)0x44;
  local_28 = (undefined4 *)local_20;
  local_290 = (uint *)0x53fcb7;
  puVar4 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0xb;
  local_2c = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    local_20 = (undefined1 *)0x0;
    local_8._0_1_ = uVar2;
  }
  else {
    local_28c = (undefined1 **)0xffffffff;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_84;
    *(undefined4 *)(puVar4 + 0x14) = 0xf;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *puVar4 = 0;
    pcStack_298 = (char *)0x53fcdd;
    FUN_00408ed0();
    local_28c = (undefined1 **)0xffffffff;
    local_8._0_1_ = 0xc;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_68;
    *(undefined4 *)(puVar4 + 0x30) = 0xf;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    puVar4[0x1c] = 0;
    pcStack_298 = (char *)0x53fcf8;
    FUN_00408ed0();
    *(undefined4 **)(puVar4 + 0x38) = local_28;
    *(undefined4 *)(puVar4 + 0x3c) = 0;
    puVar4[0x40] = 0;
    local_20 = puVar4;
  }
  puVar4 = local_20;
  if (local_1c != 0) {
    *(undefined1 **)((int)local_28 + 0x3c) = local_20;
    puVar4 = local_24;
  }
  local_24 = puVar4;
  local_28c = (undefined1 **)0x53fd2b;
  local_1c = local_1c + 1;
  FUN_00a39a80();
  if (0xf < local_8c) {
    local_28c = (undefined1 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0053fd44;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (0xf < local_34) {
    local_28c = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0053fd6a;
    FUN_00aae91b();
  }
  local_28c = (undefined1 **)0x5;
  local_290 = (uint *)0xdff83c;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  puStack_294 = (uint *)0x53fd85;
  FUN_00409350();
  local_28c = (undefined1 **)0xffffffff;
  local_8._0_1_ = 0xd;
  local_290 = (uint *)0x0;
  puStack_294 = local_48;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = 0;
  pcStack_298 = (char *)0x53fda1;
  FUN_00408ed0();
  local_8._0_1_ = 0xe;
  local_28c = (undefined1 **)0xffffffff;
  puStack_294 = param_3 + 1;
  local_290 = (uint *)0x0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = 0;
  pcStack_298 = (char *)0x53fdc3;
  local_28 = puStack_294;
  FUN_00408ed0();
  local_8._0_1_ = 0xf;
  local_28c = (undefined1 **)0x44;
  local_2c = local_20;
  local_290 = (uint *)0x53fdd4;
  puVar4 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0x10;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0x10;
  local_4c = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    local_20 = (undefined1 *)0x0;
    local_8._0_1_ = uVar2;
  }
  else {
    local_28c = (undefined1 **)0xffffffff;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_84;
    *(undefined4 *)(puVar4 + 0x14) = 0xf;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *puVar4 = 0;
    pcStack_298 = (char *)0x53fdfa;
    FUN_00408ed0();
    local_28c = (undefined1 **)0xffffffff;
    local_8._0_1_ = 0x11;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_68;
    *(undefined4 *)(puVar4 + 0x30) = 0xf;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    puVar4[0x1c] = 0;
    pcStack_298 = (char *)0x53fe15;
    FUN_00408ed0();
    *(undefined1 **)(puVar4 + 0x38) = local_2c;
    *(undefined4 *)(puVar4 + 0x3c) = 0;
    puVar4[0x40] = 0;
    local_20 = puVar4;
  }
  puVar4 = local_20;
  if (local_1c != 0) {
    *(undefined1 **)(local_2c + 0x3c) = local_20;
    puVar4 = local_24;
  }
  local_24 = puVar4;
  local_28c = (undefined1 **)0x53fe48;
  local_1c = local_1c + 1;
  FUN_00a39a80();
  local_8._0_1_ = 0;
  if (0xf < local_34) {
    local_28c = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0053fe5a;
    FUN_00aae91b();
  }
  local_28c = (undefined1 **)0x9;
  local_290 = (uint *)0xdff844;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  puStack_294 = (uint *)0x53fe75;
  FUN_00409350();
  local_28c = (undefined1 **)0xffffffff;
  local_8._0_1_ = 0x12;
  local_290 = (uint *)0x0;
  puStack_294 = local_48;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = 0;
  pcStack_298 = (char *)0x53fe91;
  FUN_00408ed0();
  local_8._0_1_ = 0x13;
  local_54 = 0xf;
  local_28c = (undefined1 **)0xffffffff;
  local_290 = (uint *)0x0;
  puVar10 = param_3 + 8;
  local_58 = 0;
  local_68[0] = 0;
  pcStack_298 = (char *)0x53feb0;
  puStack_294 = puVar10;
  FUN_00408ed0();
  local_8._0_1_ = 0x14;
  local_28c = (undefined1 **)0x44;
  local_2c = local_20;
  local_290 = (uint *)0x53fec1;
  puVar4 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0x15;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0x15;
  local_4c = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    local_20 = (undefined1 *)0x0;
    local_8._0_1_ = uVar2;
  }
  else {
    local_28c = (undefined1 **)0xffffffff;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_84;
    *(undefined4 *)(puVar4 + 0x14) = 0xf;
    *(undefined4 *)(puVar4 + 0x10) = 0;
    *puVar4 = 0;
    pcStack_298 = (char *)0x53feeb;
    FUN_00408ed0();
    local_28c = (undefined1 **)0xffffffff;
    local_8._0_1_ = 0x16;
    local_290 = (uint *)0x0;
    puStack_294 = (uint *)local_68;
    *(undefined4 *)(puVar4 + 0x30) = 0xf;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    puVar4[0x1c] = 0;
    pcStack_298 = (char *)0x53ff0a;
    FUN_00408ed0();
    *(undefined1 **)(puVar4 + 0x38) = local_2c;
    *(undefined4 *)(puVar4 + 0x3c) = 0;
    puVar4[0x40] = 0;
    local_20 = puVar4;
  }
  puVar4 = local_20;
  if (local_1c != 0) {
    *(undefined1 **)(local_2c + 0x3c) = local_20;
    puVar4 = local_24;
  }
  local_24 = puVar4;
  local_28c = (undefined1 **)0x53ff3d;
  local_1c = local_1c + 1;
  FUN_00a39a80();
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_34) {
    local_28c = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0053ff4f;
    FUN_00aae91b();
  }
  switch(*param_3) {
  case 0:
    local_28c = (undefined1 **)0x53ff77;
    FUN_009885d0();
    local_8._0_1_ = 0x17;
    local_290 = param_4;
    puStack_294 = (uint *)local_f4;
    local_28c = (undefined1 **)param_5;
    pcStack_298 = (char *)0x53ff9a;
    local_28c = (undefined1 **)FUN_00988b20();
    local_290 = (uint *)0xdff834;
    pcStack_298 = "ILOCATION";
    puStack_29c = local_28;
    puStack_2a4 = local_12c;
    pcStack_2a0 = "INAME";
    local_8._0_1_ = 0x18;
    uStack_2a8 = 0x53ffc4;
    puStack_294 = puVar10;
    local_28c = (undefined1 **)FUN_0043e9a0();
    puStack_294 = (uint *)local_1d4;
    local_8._0_1_ = 0x19;
    pcStack_298 = (char *)0x53ffdb;
    local_290 = local_a0;
    iVar5 = FUN_00424aa0();
    puVar4 = local_20;
    local_8._0_1_ = 0x1a;
    local_28c = (undefined1 **)0x44;
    local_290 = (uint *)0x53ffee;
    puVar6 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x1b;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0x1b;
    local_4c = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      local_20 = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      local_28c = (undefined1 **)0xffffffff;
      local_290 = (uint *)0x0;
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      pcStack_298 = (char *)0x540015;
      puStack_294 = (uint *)iVar5;
      FUN_00408ed0();
      local_28c = (undefined1 **)0xffffffff;
      local_8._0_1_ = 0x1c;
      local_290 = (uint *)0x0;
      puStack_294 = (uint *)(iVar5 + 0x1c);
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      pcStack_298 = (char *)0x540034;
      FUN_00408ed0();
      *(undefined1 **)(puVar6 + 0x38) = puVar4;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
      local_20 = puVar6;
    }
    puVar6 = local_20;
    if (local_1c != 0) {
      *(undefined1 **)(puVar4 + 0x3c) = local_20;
      puVar6 = local_24;
    }
    local_24 = puVar6;
    local_28c = (undefined1 **)0x54006a;
    local_1c = local_1c + 1;
    FUN_00a39a80();
    local_28c = (undefined1 **)0x540075;
    FUN_00408ad0();
    local_28c = (undefined1 **)0x540080;
    FUN_00408ad0();
    break;
  case 1:
    local_28c = (undefined1 **)0x540098;
    local_8._0_1_ = uVar2;
    FUN_009885d0();
    local_8._0_1_ = 0x1d;
    local_290 = param_4;
    local_28c = (undefined1 **)param_5;
    puStack_294 = (uint *)local_148;
    pcStack_298 = (char *)0x5400bb;
    local_28c = (undefined1 **)FUN_00988b20();
    local_290 = (uint *)0xdff834;
    pcStack_298 = "ILOCATION";
    puStack_29c = local_28;
    puStack_2a4 = local_164;
    pcStack_2a0 = "INAME";
    local_8._0_1_ = 0x1e;
    uStack_2a8 = 0x5400e5;
    puStack_294 = puVar10;
    local_28c = (undefined1 **)FUN_0043e9a0();
    puStack_294 = (uint *)local_244;
    local_8._0_1_ = 0x1f;
    pcStack_298 = (char *)0x5400fc;
    local_290 = local_48;
    iVar5 = FUN_00424aa0();
    puVar4 = local_20;
    local_8._0_1_ = 0x20;
    local_28c = (undefined1 **)0x44;
    local_290 = (uint *)0x54010f;
    puVar6 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x21;
    local_4c = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      local_20 = (undefined1 *)0x0;
    }
    else {
      local_28c = (undefined1 **)0xffffffff;
      local_290 = (uint *)0x0;
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      pcStack_298 = (char *)0x540136;
      puStack_294 = (uint *)iVar5;
      FUN_00408ed0();
      local_28c = (undefined1 **)0xffffffff;
      local_8._0_1_ = 0x22;
      local_290 = (uint *)0x0;
      puStack_294 = (uint *)(iVar5 + 0x1c);
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      pcStack_298 = (char *)0x540155;
      FUN_00408ed0();
      *(undefined1 **)(puVar6 + 0x38) = puVar4;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
      local_20 = puVar6;
    }
    puVar6 = local_20;
    if (local_1c != 0) {
      *(undefined1 **)(puVar4 + 0x3c) = local_20;
      puVar6 = local_24;
    }
    local_24 = puVar6;
    local_28c = (undefined1 **)0x54018b;
    local_1c = local_1c + 1;
    FUN_00a39a80();
    local_28c = (undefined1 **)0x540196;
    FUN_00408ad0();
    local_28c = (undefined1 **)0x5401a1;
    FUN_00408ad0();
    break;
  case 2:
    local_28c = (undefined1 **)0x5401b9;
    local_8._0_1_ = uVar2;
    FUN_009885d0();
    local_8._0_1_ = 0x23;
    local_290 = param_4;
    local_28c = (undefined1 **)param_5;
    puStack_294 = (uint *)local_180;
    pcStack_298 = (char *)0x5401dc;
    local_28c = (undefined1 **)FUN_00988b20();
    local_290 = (uint *)0xdff834;
    pcStack_298 = "ILOCATION";
    puStack_29c = local_28;
    puStack_2a4 = local_19c;
    pcStack_2a0 = "INAME";
    local_8._0_1_ = 0x24;
    uStack_2a8 = 0x540206;
    puStack_294 = puVar10;
    local_28c = (undefined1 **)FUN_0043e9a0();
    puStack_294 = (uint *)local_20c;
    local_8._0_1_ = 0x25;
    pcStack_298 = (char *)0x54021d;
    local_290 = local_bc;
    FUN_00424aa0();
    puVar4 = local_20;
    local_8._0_1_ = 0x26;
    local_28c = (undefined1 **)0x44;
    local_290 = (uint *)0x54022d;
    puVar7 = (uint *)FUN_00aae9af();
    local_8._0_1_ = 0x27;
    if (puVar7 == (uint *)0x0) {
      local_20 = (undefined1 *)0x0;
    }
    else {
      local_28c = (undefined1 **)puVar4;
      puStack_294 = (uint *)0x540244;
      local_290 = puVar7;
      local_20 = (undefined1 *)FUN_0042b900();
    }
    puVar6 = local_20;
    if (local_1c != 0) {
      *(undefined1 **)(puVar4 + 0x3c) = local_20;
      puVar6 = local_24;
    }
    local_24 = puVar6;
    local_28c = (undefined1 **)0x54026b;
    local_1c = local_1c + 1;
    FUN_00a39a80();
    local_28c = (undefined1 **)0x540276;
    FUN_00408ad0();
    local_28c = (undefined1 **)0x540281;
    FUN_00408ad0();
    break;
  case 3:
    local_28c = (undefined1 **)0x54029c;
    local_8._0_1_ = uVar2;
    FUN_009885d0();
    local_8._0_1_ = 0x28;
    local_290 = param_4;
    local_28c = (undefined1 **)param_5;
    puStack_294 = (uint *)local_68;
    pcStack_298 = (char *)0x5402bc;
    local_28c = (undefined1 **)FUN_00988b20();
    local_290 = (uint *)0xdff834;
    pcStack_298 = "ILOCATION";
    puStack_29c = local_28;
    puStack_2a4 = local_110;
    pcStack_2a0 = "INAME";
    local_8._0_1_ = 0x29;
    uStack_2a8 = 0x5402e6;
    puStack_294 = puVar10;
    local_28c = (undefined1 **)FUN_0043e9a0();
    puStack_294 = (uint *)local_27c;
    local_8._0_1_ = 0x2a;
    pcStack_298 = (char *)0x5402fd;
    local_290 = local_d8;
    FUN_00424aa0();
    puVar4 = local_20;
    local_8._0_1_ = 0x2b;
    local_28c = (undefined1 **)0x44;
    local_290 = (uint *)0x54030d;
    puVar7 = (uint *)FUN_00aae9af();
    local_8._0_1_ = 0x2c;
    if (puVar7 == (uint *)0x0) {
      local_20 = (undefined1 *)0x0;
    }
    else {
      local_28c = (undefined1 **)puVar4;
      puStack_294 = (uint *)0x540324;
      local_290 = puVar7;
      local_20 = (undefined1 *)FUN_0042b900();
    }
    puVar6 = local_20;
    if (local_1c != 0) {
      *(undefined1 **)(puVar4 + 0x3c) = local_20;
      puVar6 = local_24;
    }
    local_24 = puVar6;
    local_28c = (undefined1 **)0x54034b;
    local_1c = local_1c + 1;
    FUN_00a39a80();
    local_28c = (undefined1 **)0x540356;
    FUN_00408ad0();
    local_28c = (undefined1 **)0x54035e;
    FUN_00408ad0();
    break;
  default:
    goto switchD_0053ff60_default;
  }
  local_8._0_1_ = 0;
  local_28c = (undefined1 **)0x54036c;
  FUN_00408ad0();
  uVar2 = (undefined1)local_8;
switchD_0053ff60_default:
  local_8._0_1_ = uVar2;
  local_28c = (undefined1 **)0x0;
  local_290 = (uint *)&DAT_00ded94d;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  puStack_294 = (uint *)0x540394;
  FUN_00409350();
  local_8._0_1_ = 0x2d;
  local_28c = (undefined1 **)0xe;
  local_290 = (uint *)0xdff8c4;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  puStack_294 = (uint *)0x5403b0;
  FUN_00409350();
  local_8._0_1_ = 0x2e;
  local_4c = (undefined1 *)local_310;
  local_310[0] = 0;
  local_310[1] = 0;
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  uVar16 = *(undefined4 *)(param_1 + 0x1c);
  uVar15 = param_2[1];
  uVar14 = *param_2;
  uVar13 = 0;
  puVar7 = local_a0;
  ppuVar11 = &local_24;
  uVar12 = 0;
  FUN_006a4f40(ppuVar11,0,puVar7,0,uVar14,uVar15,uVar16,uVar9);
  uVar8 = FUN_006a55b0();
  FUN_006a7ed0(auStack_308,uVar8,ppuVar11,uVar12,puVar7,uVar13,uVar14,uVar15,uVar16,uVar9);
  local_310[1] = 0;
  local_310[0] = param_1;
  local_8._0_1_ = 0x2f;
  uVar9 = FUN_006a4f40();
  local_8 = CONCAT31(local_8._1_3_,0x2e);
  FUN_0042bb30(uVar9);
  if (0xf < local_34) {
    local_28c = (undefined1 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_0054042c;
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_8c) {
    local_28c = (undefined1 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
    local_290 = (uint *)&UNK_00540450;
    FUN_00aae91b();
  }
  local_28c = &local_24;
  local_290 = (uint *)0x54045c;
  FUN_0042b9f0();
LAB_00540461:
  puVar7 = (uint *)(*(int *)(param_1 + 0x1580) + param_2[1] * 8);
  uVar1 = *puVar7;
  *puVar7 = (int)param_4 + *puVar7;
  puVar7[1] = puVar7[1] + param_5 + (uint)CARRY4(uVar1,(uint)param_4);
  ExceptionList = local_10;
  return;
}

