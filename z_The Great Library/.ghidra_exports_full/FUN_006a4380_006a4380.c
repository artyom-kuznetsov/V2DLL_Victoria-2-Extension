// FUN_006a4380 @ 006a4380 body=[[006a4380, 006a443d] [006a4441, 006a4538] [006a453c, 006a4573] [006a4577, 006a458e] [006a4592, 006a45b3] [006a45b7, 006a4603] [006a4607, 006a4664] [006a4668, 006a467c]]


undefined4 * FUN_006a4380(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6eb3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CRightClickItemInterface::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("right_click_entry",0x11);
  local_8 = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar2 = (int *)(**(code **)(*in_ECX + 0x34))();
  local_18 = param_1 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *(undefined1 *)(param_1 + 10) = 0;
  *local_18 = &PTR_FUN_00e392f0;
  param_1[8] = &PTR_FUN_00e39320;
  uVar3 = (**(code **)(*piVar2 + 0x2c))(local_48,local_14);
  param_1[9] = uVar3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  param_1[0xb] = in_ECX;
  *param_1 = CRightClickCloseItem::vftable;
  param_1[1] = CRightClickCloseItem::vftable;
  param_1[8] = CRightClickCloseItem::vftable;
  FUN_006a4c80(&LAB_006a4de0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  *(undefined1 *)(param_1 + 0x20) = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 8;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  piVar2 = (int *)(**(code **)(*(int *)param_1[9] + 0x34))(local_48);
  local_14 = FUN_009a8ee0(local_2c,local_64);
  local_8._0_1_ = 10;
  iVar4 = FUN_00475500();
  uVar3 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 0xb;
  (**(code **)(*piVar2 + 0xcc))(uVar3,0);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 7;
  local_34 = 0xf;
  local_38 = 0;
  uVar1 = local_48[0] >> 8;
  local_48[0] = uVar1 << 8;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = uVar1 << 8;
  FUN_00409350("button",6);
  local_8._0_1_ = 0xd;
  iVar4 = (**(code **)(*(int *)param_1[9] + 0x34))();
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(param_1 + 0xc);
  local_8._0_1_ = 7;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (*(char *)(DAT_01258a80 + 0x11) != '\0') {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("button",6);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    piVar2 = (int *)(**(code **)(*(int *)param_1[9] + 0x34))(local_64);
    (**(code **)(*piVar2 + 0x84))(1);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

