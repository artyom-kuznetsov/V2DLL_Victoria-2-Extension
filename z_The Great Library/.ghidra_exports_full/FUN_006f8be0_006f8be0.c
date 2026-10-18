// FUN_006f8be0 @ 006f8be0 body=[[006f8be0, 006f8c8f] [006f8c93, 006f8d56] [006f8d5a, 006f8d77] [006f8d7b, 006f8d9c] [006f8da0, 006f8dff] [006f8e03, 006f8f10] [006f8f14, 006f8f33] [006f8f37, 006f8f51] [006f8f55, 006f8f70] [006f8f74, 006f90e3] [006f90e7, 006f9111] [006f9115, 006f913a] [006f913e, 006f9163] [006f9167, 006f919c] [006f91a0, 006f91be] [006f91c2, 006f91e0] [006f91e4, 006f91fe] [006f9202, 006f92f5] [006f92f9, 006f9345] [006f9349, 006f9362]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006f8be0(undefined4 *param_1,int *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char local_11c [32];
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6df5b;
  local_10 = ExceptionList;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  piVar4 = DAT_01258a80;
  local_8 = 0;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar3 = (**(code **)(*piVar4 + 0x2c))();
  param_1[8] = uVar3;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_1[10] = CButtonObserver::vftable;
  local_8._0_1_ = 7;
  *param_1 = CBuildingItem::vftable;
  param_1[7] = CBuildingItem::vftable;
  param_1[10] = CBuildingItem::vftable;
  param_1[0xb] = param_2;
  local_18 = &DAT_00e05104;
  if (param_3 == '\0') {
    local_18 = &DAT_00e0f2c0;
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 8;
  (**(code **)(*param_2 + 0x18))();
  local_8._0_1_ = 9;
  FUN_00988fa0();
  local_8._0_1_ = 10;
  local_18 = (undefined *)(**(code **)(*(int *)param_1[8] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 7;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))();
  (**(code **)(*piVar4 + 0x48))();
  local_8._0_1_ = 7;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  FUN_004da720();
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  FUN_009ca140();
  local_8._0_1_ = 0xe;
  FUN_00988f20();
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)param_1[8] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  uVar2 = local_38 >> 8;
  local_38 = uVar2 << 8;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 7;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = uVar2 << 8;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x11;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x12;
  FUN_009a8ee0();
  local_8._0_1_ = 0x13;
  FUN_00475500();
  FUN_009a9880();
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  local_8._0_1_ = 0x15;
  pcVar5 = __itoa(param_2[0x2e],local_11c,10);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0x16;
  FUN_00988f20();
  local_8._0_1_ = 0x17;
  FUN_00988f20();
  local_8._0_1_ = 0x18;
  (**(code **)(*(int *)param_1[8] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e8 = 0xf;
  local_ec = 0;
  local_fc = local_fc & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  local_8._0_1_ = 0x19;
  FUN_009adb70();
  if (local_64 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (local_40 < 0x10) {
    local_8._0_1_ = 7;
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_3 == '\0') {
      if ((_DAT_013f2ae4 & 1) == 0) {
        _DAT_013f2ae4 = _DAT_013f2ae4 | 1;
        DAT_013f2ad0._0_4_ = DAT_00f17898;
        DAT_013f2ad0._4_4_ = DAT_00f17898;
        DAT_013f2ad8._0_4_ = DAT_00f17898;
        DAT_013f2acc = 0x18d;
        _DAT_013f2ac8 = CColor::vftable;
        DAT_013f2ad8._4_4_ = DAT_00f092fc;
        DAT_013f2ae0 = 0;
        _atexit((_func_4879 *)&DAT_00c820c0);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38 = local_38 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1a;
      piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))();
      (**(code **)(*piVar4 + 0x68))();
      local_8._0_1_ = 7;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 7;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    iVar6 = (**(code **)(*(int *)param_1[8] + 0x34))();
    (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
    if (local_24 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

