// FUN_008fc050 @ 008fc050 body=[[008fc050, 008fc0da] [008fc0de, 008fc146] [008fc14a, 008fc16d] [008fc171, 008fc1cc] [008fc1d5, 008fc213] [008fc217, 008fc27f] [008fc283, 008fc2a6] [008fc2aa, 008fc301] [008fc307, 008fc338]]


undefined1 * FUN_008fc050(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  undefined1 local_80 [4];
  int local_7c;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b79114;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_58 = 0xf;
    if (param_3 == '\0') {
      ExceptionList = &local_14;
      FUN_00409350("IS_BIG_PROD_TRIG",0x10);
      local_c = 6;
      FUN_009a8ee0(local_80,local_6c);
      local_c._0_1_ = 8;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00df7e90,3);
      local_c._0_1_ = 9;
      FUN_005659c0(*(undefined4 *)(in_ECX + 0x1c),local_34);
      local_c._0_1_ = 10;
      FUN_009a9980();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = CONCAT31(local_c._1_3_,8);
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c = 0xb;
      FUN_009adb70();
      if (local_7c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      ExceptionList = &local_14;
      FUN_00409350("IS_NOT_BIG_PROD_TRIG",0x14);
      local_c = 0;
      FUN_009a8ee0(local_80,local_6c);
      local_c._0_1_ = 2;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00df7e90,3);
      local_c._0_1_ = 3;
      FUN_005659c0(*(undefined4 *)(in_ECX + 0x1c),local_34);
      local_c._0_1_ = 4;
      FUN_009a9980();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = CONCAT31(local_c._1_3_,2);
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c = 5;
      FUN_009adb70();
      if (local_7c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_14;
  return param_1;
}

