// FUN_009a7a40 @ 009a7a40 body=[[009a7a40, 009a7bef] [009a7bf3, 009a7d86] [009a7d8a, 009a7e09] [009a7e0d, 009a7e67] [009a7e6b, 009a7ec7] [009a7ecb, 009a7f4b] [009a7f4f, 009a7fa9] [009a7fad, 009a8009] [009a800d, 009a806a] [009a806e, 009a81af] [009a81b3, 009a820d] [009a8211, 009a8251] [009a8255, 009a826d] [009a8271, 009a828c] [009a8290, 009a829e] [009a82a2, 009a82ba] [009a82be, 009a82d6] [009a82da, 009a82f5] [009a82f9, 009a831d] [009a8321, 009a8348] [009a834c, 009a8360]]


/* WARNING: Removing unreachable block (ram,0x009a8281) */

undefined4 *
FUN_009a7a40(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  undefined1 *in_stack_0000008c;
  uint in_stack_00000090;
  undefined4 in_stack_000000a0;
  uint in_stack_000000a4;
  undefined4 in_stack_000000ac;
  uint in_stack_000000c0;
  undefined3 uStack000000c8;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  undefined1 local_10c [12];
  undefined4 uStack_100;
  undefined4 *local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined1 *local_dc;
  undefined4 uStack_d8;
  undefined1 local_d4 [16];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined4 **ppuStack_ac;
  char *pcStack_a8;
  uint *puStack_a4;
  int *piStack_a0;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined **local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b57a4e;
  local_10 = ExceptionList;
  piStack_a0 = param_4;
  puStack_a4 = param_1;
  local_8 = 5;
  pcStack_a8 = (char *)0x9a7a78;
  ExceptionList = &local_10;
  FUN_009a6a30();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  DAT_013f08e8 = DAT_013f08e8 + 1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = &PTR_FUN_00e38c50;
  *param_1 = &PTR_FUN_00e38b90;
  param_1[0x15] = &PTR_FUN_00e38c40;
  param_1[0x1d] = param_3;
  param_1[0x1e] = param_6;
  param_1[0x1f] = param_6;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  piStack_a0 = (int *)0xffffffff;
  local_8._0_1_ = 10;
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = (char *)&stack0x00000038;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  ppuStack_ac = (undefined4 **)0x9a7aea;
  FUN_00408ed0();
  piStack_a0 = (int *)0xffffffff;
  local_8._0_1_ = 0xb;
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = (char *)&stack0x00000054;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  ppuStack_ac = (undefined4 **)0x9a7b09;
  FUN_00408ed0();
  piStack_a0 = (int *)0xffffffff;
  local_8._0_1_ = 0xc;
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = (char *)&stack0x00000070;
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  ppuStack_ac = (undefined4 **)0x9a7b28;
  FUN_00408ed0();
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x41] = 0xf;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x49] = 0xf;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  local_8._0_1_ = 0xf;
  param_1[0x4c] = _uStack000000c8;
  piStack_a0 = (int *)0x0;
  param_1[0x4d] = in_stack_000000cc;
  puStack_a4 = (uint *)&DAT_00ded94d;
  param_1[0x4e] = in_stack_000000d0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0x10100;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x1b] = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  pcStack_a8 = (char *)0x9a7bc2;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  piStack_a0 = (int *)0x9a7bd4;
  cVar2 = FUN_00416db0();
  _uStack000000c8 = (undefined1 *)CONCAT13(cVar2 == '\0',uStack000000c8);
  local_8._0_1_ = 0xf;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0xf;
  if (0xf < local_5c) {
    piStack_a0 = (int *)local_70[0];
                    /* WARNING: Subroutine does not return */
    puStack_a4 = (uint *)&UNK_009a7bf0;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    piStack_a0 = (int *)0x0;
    puStack_a4 = (uint *)0x0;
    pcStack_a8 = (char *)0x1;
    ppuStack_ac = (undefined4 **)0x0;
    puStack_b0 = in_stack_0000008c;
    uStack_b4 = 0;
    uStack_b8 = 0;
    in_stack_0000008c = local_d4;
    uStack_d8 = 0;
    local_c0 = 0xf;
    local_c4 = 0;
    local_dc = &DAT_00ded94d;
    local_d4[0] = 0;
    local_e0 = 0x9a7c2e;
    FUN_00409350();
    _uStack000000c8 = local_f0;
    local_8._0_1_ = 0x11;
    uStack_f4 = 0xffffffff;
    local_f8 = 0;
    local_fc = &stack0x000000ac;
    local_dc = (undefined1 *)0xf;
    local_e0 = 0;
    local_f0[0] = 0;
    uStack_100 = 0x9a7c55;
    FUN_00408ed0();
    local_14 = local_10c;
    local_8._0_1_ = 0x12;
    local_f8 = 0xf;
    local_fc = (undefined4 *)0x0;
    local_10c[0] = 0;
    FUN_00408ed0(&stack0x00000090,0,0xffffffff);
    local_8._0_1_ = 0xf;
    uVar3 = FUN_009966a0(param_5);
    piStack_a0 = &stack0x000000ac;
    param_1[0x1c] = uVar3;
    puStack_a4 = (uint *)0x9a7ca1;
    iVar4 = FUN_00973bd0();
    if (iVar4 == 0) {
      piStack_a0 = &stack0x000000ac;
      puStack_a4 = (uint *)0x9a7cb7;
      iVar4 = FUN_00973bd0();
    }
    param_1[0x4b] = iVar4;
  }
  else {
    piStack_a0 = &DAT_00f0ec7c;
    puStack_a4 = (uint *)in_stack_0000008c;
    pcStack_a8 = (char *)param_5;
    ppuStack_ac = (undefined4 **)0x9a7cd1;
    local_8._0_1_ = uVar1;
    uVar3 = FUN_00996520();
    param_1[0x1c] = uVar3;
  }
  piStack_a0 = (int *)param_1[0x1e];
  puStack_a4 = (uint *)0x9a7cdf;
  FUN_009a89e0();
  piStack_a0 = (int *)0x9a7ce9;
  (**(code **)(*(int *)param_1[0x1c] + 0x34))();
  local_14 = (undefined1 *)param_1[0x1c];
  local_18 = param_1;
  local_1c = &PTR_FUN_00e40cd8;
  piStack_a0 = (int *)0x9a7d0a;
  FUN_0099e960();
  piStack_a0 = (int *)0x1;
  puStack_a4 = (uint *)0x9a7d16;
  (**(code **)(*(int *)param_1[0x1c] + 0x5c))();
  puStack_a4 = (uint *)0xffffffff;
  ppuStack_ac = (undefined4 **)(param_2 + 0x158);
  pcStack_a8 = (char *)0x0;
  puStack_b0 = (undefined1 *)0x9a7d40;
  FUN_00408ed0();
  local_8._0_1_ = 0x13;
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = "";
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  ppuStack_ac = (undefined4 **)0x9a7d5c;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  puStack_a4 = (uint *)0x9a7d6e;
  cVar2 = FUN_00416db0();
  local_8._0_1_ = 0x13;
  if (0xf < local_5c) {
    puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    pcStack_a8 = &UNK_009a7d87;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_a4 = (uint *)0x9a7d95;
    FUN_009c7290();
    puStack_a4 = (uint *)0x1;
    pcStack_a8 = (char *)0x9a7da2;
    uVar3 = FUN_009c7870();
    param_1[0x51] = uVar3;
  }
  puStack_a4 = (uint *)0xffffffff;
  pcStack_a8 = (char *)0x0;
  ppuStack_ac = (undefined4 **)(param_2 + 0x1ac);
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  puStack_b0 = (undefined1 *)0x9a7dc6;
  FUN_00408ed0();
  local_8._0_1_ = 0x15;
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = "";
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  ppuStack_ac = (undefined4 **)0x9a7de2;
  FUN_00409350();
  local_8._0_1_ = 0x16;
  puStack_a4 = (uint *)0x9a7df1;
  cVar2 = FUN_00416db0();
  local_8._0_1_ = 0x15;
  if (0xf < local_5c) {
    puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    pcStack_a8 = &UNK_009a7e0a;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_a4 = (uint *)0x9a7e18;
    FUN_009c7290();
LAB_009a7edc:
    puStack_a4 = (uint *)0x1;
LAB_009a7ede:
    pcStack_a8 = (char *)0x9a7ee3;
    uVar3 = FUN_009c7870();
    param_1[0x52] = uVar3;
  }
  else {
    puStack_a4 = (uint *)0x0;
    pcStack_a8 = "";
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    ppuStack_ac = (undefined4 **)0x9a7e38;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    puStack_a4 = (uint *)0x9a7e45;
    (*(code *)**(undefined4 **)param_1[0x1c])();
    puStack_a4 = (uint *)0x9a7e4f;
    cVar2 = FUN_00416db0();
    local_8._0_1_ = 0x15;
    if (0xf < local_5c) {
      puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_009a7e68;
      FUN_00aae91b();
    }
    if (cVar2 == '\0') {
      puStack_a4 = (uint *)0x9a7e76;
      FUN_009c7290();
      puStack_a4 = (uint *)0x1;
      pcStack_a8 = (char *)0x9a7e81;
      (*(code *)**(undefined4 **)param_1[0x1c])();
      goto LAB_009a7ede;
    }
    puStack_a4 = (uint *)0x0;
    pcStack_a8 = "";
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    ppuStack_ac = (undefined4 **)0x9a7e9d;
    FUN_00409350();
    local_8._0_1_ = 0x18;
    puStack_a4 = (uint *)0x9a7eaf;
    cVar2 = FUN_00416db0();
    local_8._0_1_ = 0x15;
    if (0xf < local_5c) {
      puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_009a7ec8;
      FUN_00aae91b();
    }
    if (cVar2 == '\0') {
      puStack_a4 = (uint *)0x9a7ed6;
      FUN_009c7290();
      goto LAB_009a7edc;
    }
  }
  puStack_a4 = (uint *)0xffffffff;
  pcStack_a8 = (char *)0x0;
  ppuStack_ac = (undefined4 **)(param_2 + 0x174);
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  puStack_b0 = (undefined1 *)0x9a7f08;
  FUN_00408ed0();
  local_8._0_1_ = 0x19;
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = "";
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  ppuStack_ac = (undefined4 **)0x9a7f24;
  FUN_00409350();
  local_8._0_1_ = 0x1a;
  puStack_a4 = (uint *)0x9a7f33;
  cVar2 = FUN_00416db0();
  local_8._0_1_ = 0x19;
  if (0xf < local_5c) {
    puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    pcStack_a8 = &UNK_009a7f4c;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    puStack_a4 = (uint *)0x9a7f5a;
    FUN_009c7290();
LAB_009a801e:
    puStack_a4 = (uint *)0x1;
  }
  else {
    puStack_a4 = (uint *)0x0;
    pcStack_a8 = "";
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    ppuStack_ac = (undefined4 **)0x9a7f7a;
    FUN_00409350();
    local_8._0_1_ = 0x1b;
    puStack_a4 = (uint *)0x9a7f87;
    (*(code *)**(undefined4 **)param_1[0x1c])();
    puStack_a4 = (uint *)0x9a7f91;
    cVar2 = FUN_00416db0();
    local_8._0_1_ = 0x19;
    if (0xf < local_5c) {
      puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      pcStack_a8 = &UNK_009a7faa;
      FUN_00aae91b();
    }
    if (cVar2 != '\0') {
      puStack_a4 = (uint *)0x0;
      pcStack_a8 = "";
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      ppuStack_ac = (undefined4 **)0x9a7fdf;
      FUN_00409350();
      local_8._0_1_ = 0x1c;
      puStack_a4 = (uint *)0x9a7ff1;
      cVar2 = FUN_00416db0();
      local_8._0_1_ = 0x19;
      if (0xf < local_5c) {
        puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
        pcStack_a8 = &UNK_009a800a;
        FUN_00aae91b();
      }
      if (cVar2 != '\0') goto LAB_009a802b;
      puStack_a4 = (uint *)0x9a8018;
      FUN_009c7290();
      goto LAB_009a801e;
    }
    puStack_a4 = (uint *)0x9a7fb8;
    FUN_009c7290();
    puStack_a4 = (uint *)0x1;
    pcStack_a8 = (char *)0x9a7fc3;
    (*(code *)**(undefined4 **)param_1[0x1c])();
  }
  pcStack_a8 = (char *)0x9a8025;
  uVar3 = FUN_009c7870();
  param_1[0x53] = uVar3;
LAB_009a802b:
  puStack_a4 = (uint *)0x0;
  pcStack_a8 = "";
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  ppuStack_ac = (undefined4 **)0x9a8043;
  FUN_00409350();
  local_8._0_1_ = 0x1d;
  puStack_a4 = (uint *)0x9a8052;
  cVar2 = FUN_00416db0();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  if (0xf < local_5c) {
    puStack_a4 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    pcStack_a8 = &UNK_009a806b;
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (cVar2 == '\0') {
    puStack_a4 = &stack0x00000038;
    pcStack_a8 = (char *)0x9a8090;
    iVar4 = (**(code **)(*param_4 + 0x38))();
    param_1[0x23] = iVar4;
    if (*(char *)(iVar4 + 200) != '\0') {
      pcStack_a8 = (char *)0x9a80ab;
      (**(code **)(**(int **)(iVar4 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar4 + 200) = 0;
    param_3 = CONCAT22(param_6._2_2_ + 10,(short)param_6 + 0x1e);
    pcStack_a8 = (char *)param_3;
    ppuStack_ac = (undefined4 **)0x9a80d7;
    FUN_009e7350();
    pcStack_a8 = (undefined1 *)0x41200000;
    ppuStack_ac = (undefined4 **)0x9a80f2;
    (**(code **)(*(int *)param_1[0x23] + 0x20))();
    puStack_a4 = (uint *)0x9a8100;
    FUN_009e7500();
  }
  else {
    param_1[0x23] = 0;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    puStack_a4 = (uint *)0x4;
    pcStack_a8 = (undefined1 *)0x9a811e;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  puStack_a4 = (uint *)0x9a813e;
  puVar5 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar6 = (undefined4 *)param_1[0x22];
  if ((puVar5 != puVar6) && (puVar6 != (undefined4 *)0x0)) {
    puStack_a4 = (uint *)0x1;
    pcStack_a8 = (char *)0x9a8157;
    (**(code **)*puVar6)();
  }
  puStack_a4 = (uint *)0x8;
  param_1[0x22] = puVar5;
  pcStack_a8 = "CheckBox";
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  ppuStack_ac = (undefined4 **)0x9a8188;
  FUN_00409350();
  local_8._0_1_ = 0x1e;
  puStack_a4 = local_70;
  pcStack_a8 = (char *)0x9a819d;
  (**(code **)(*(int *)param_1[0x1c] + 0xc4))();
  local_8._0_1_ = 0x19;
  if (0xf < local_5c) {
    pcStack_a8 = (char *)local_70[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a81b0;
    FUN_00aae91b();
  }
  pcStack_a8 = (char *)0xffffffff;
  puStack_b0 = (undefined1 *)(param_2 + 0x1e4);
  ppuStack_ac = (undefined4 **)0x0;
  uStack_b4 = 0x9a81cb;
  FUN_00408ed0();
  pcStack_a8 = (char *)0x0;
  ppuStack_ac = (undefined4 **)&DAT_00ded94d;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  puStack_b0 = (undefined1 *)0x9a81e3;
  FUN_00409350();
  local_8._0_1_ = 0x1f;
  pcStack_a8 = (char *)0x9a81f5;
  cVar2 = FUN_00416db0();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  if (0xf < local_5c) {
    pcStack_a8 = (char *)local_70[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a820e;
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    pcStack_a8 = (char *)(param_1 + 0x3c);
    ppuStack_ac = &local_18;
    puStack_b0 = (undefined1 *)0x9a8232;
    puVar6 = (undefined4 *)(**(code **)(*(int *)param_4[0x29] + 0x38))();
    param_1[0x3a] = *puVar6;
    param_1[0x3b] = puVar6[1];
  }
  if (0xf < local_24) {
    pcStack_a8 = (char *)local_38;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a8252;
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (0xf < local_40) {
    pcStack_a8 = (char *)local_54;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a826e;
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < in_stack_00000030) {
    pcStack_a8 = (char *)param_7;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a829f;
    FUN_00aae91b();
  }
  if (0xf < in_stack_0000004c) {
    pcStack_a8 = (char *)in_stack_00000038;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a82bb;
    FUN_00aae91b();
  }
  in_stack_0000004c = 0xf;
  in_stack_00000048 = 0;
  in_stack_00000038 = in_stack_00000038 & 0xffffff00;
  if (0xf < in_stack_00000068) {
    pcStack_a8 = (char *)in_stack_00000054;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a82d7;
    FUN_00aae91b();
  }
  in_stack_00000068 = 0xf;
  in_stack_00000064 = 0;
  in_stack_00000054 = in_stack_00000054 & 0xffffff00;
  if (0xf < in_stack_00000084) {
    pcStack_a8 = (char *)in_stack_00000070;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a82f6;
    FUN_00aae91b();
  }
  in_stack_00000084 = 0xf;
  in_stack_00000080 = 0;
  in_stack_00000070 = in_stack_00000070 & 0xffffff00;
  if (0xf < in_stack_000000a4) {
    pcStack_a8 = (char *)in_stack_00000090;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a831e;
    FUN_00aae91b();
  }
  in_stack_000000a4 = 0xf;
  in_stack_000000a0 = 0;
  in_stack_00000090 = in_stack_00000090 & 0xffffff00;
  if (0xf < in_stack_000000c0) {
    pcStack_a8 = (char *)in_stack_000000ac;
                    /* WARNING: Subroutine does not return */
    ppuStack_ac = (undefined4 **)&UNK_009a8349;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

