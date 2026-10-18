// FUN_0088f960 @ 0088f960 body=[[0088f960, 0088f9d4] [0088f9d8, 0088fa70] [0088fa74, 0088fa8e] [0088fa92, 0088fb04] [0088fb08, 0088fb53] [0088fb57, 0088fb96] [0088fb9a, 0088fbae]]


undefined1 * FUN_0088f960(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint in_stack_00000020;
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
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  puStack_c = &LAB_00b690f0;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("RENAME_PROV_EFF",0xf);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 3;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e01aa0,3);
    local_8._0_1_ = 4;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0x10) * 4) + 0x1c))();
    local_8._0_1_ = 5;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    FUN_009e6810(local_64,&param_2);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e03350,3);
    local_8._0_1_ = 7;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 8;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 7;
    FUN_009e6810(local_64,&param_2);
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

