// FUN_008a31a0 @ 008a31a0 body=[[008a31a0, 008a320d] [008a3211, 008a332e] [008a3332, 008a334c] [008a3350, 008a33c2] [008a33c6, 008a3418] [008a341c, 008a3433] [008a3437, 008a344b]]


undefined4 FUN_008a31a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint in_stack_00000020;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68004;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  iVar2 = param_2;
  local_8._0_1_ = 4;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (*(int *)(param_2 + 0x18) == 0) {
    local_8._0_1_ = uVar1;
    FUN_00409350();
    local_8._0_1_ = 8;
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar2 + 0x10) * 4);
    if (*(int *)(iVar2 + 0x164) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)**(undefined4 **)(iVar2 + 0x15c);
    }
    (**(code **)(*piVar3 + 0x18))(local_80);
    local_8._0_1_ = 9;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 10;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 9;
  }
  else {
    FUN_00409350();
    local_8._0_1_ = 5;
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                             *(int *)(iVar2 + 0x18) * 4) + 0x188) + 0x250) + 0x18))
              (local_80);
    local_8._0_1_ = 6;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 7;
    if (param_2 == 0) {
      param_2 = 0;
      local_8._0_1_ = 6;
    }
    else {
      param_2 = FUN_009a9ce0();
      local_8._0_1_ = 6;
    }
  }
  FUN_009e6810(local_64,&param_2);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_80[0] = local_80[0] & 0xffffff00;
  local_70 = 0;
  local_6c = 0xf;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00e03350,3);
  local_8._0_1_ = 0xb;
  param_2 = FUN_00aae9af();
  local_8._0_1_ = 0xc;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xb;
  FUN_009e6810(local_64,&param_2);
  local_8._0_1_ = 4;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

