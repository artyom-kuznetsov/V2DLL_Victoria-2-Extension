// FUN_00469fc0 @ 00469fc0 body=[[00469fc0, 0046a1c3] [0046a1c7, 0046a23b] [0046a23f, 0046a2c6] [0046a2ca, 0046a2f8] [0046a2fc, 0046a310]]


undefined4 FUN_00469fc0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *in_ECX;
  int iVar2;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f8d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00467240();
  iVar2 = 0;
  if (0 < (int)(in_ECX[1] - *in_ECX & 0xfffffff8U)) {
    local_18 = 0x2d2d2d;
    do {
      FUN_00465e90();
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1] - *in_ECX >> 3);
  }
  local_18 = 0x2d2d2d;
  FUN_00465e90();
  local_18 = 0x2d2d2d;
  FUN_00465e90();
  iVar2 = 0;
  if (0 < (int)(param_3[1] - *param_3 & 0xfffffff8U)) {
    local_18 = 0x2d2d2d;
    do {
      FUN_00465e90();
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3[1] - *param_3 >> 3);
  }
  local_18 = 0x2d2d2d;
  FUN_00465e90();
  local_18 = 0x2d2d2d;
  FUN_00465e90();
  FUN_0094dbd0();
  local_8 = 0;
  FUN_00989720();
  FUN_0046d310();
  local_8._0_1_ = 1;
  FUN_00409350();
  local_8._0_1_ = 2;
  FUN_00408ed0(local_3c,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_004661f0(0,2);
  local_8._0_1_ = 0;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0046d310();
  local_8._0_1_ = 3;
  FUN_00409350();
  local_8._0_1_ = 4;
  FUN_00408ed0(local_3c,0,0xffffffff);
  local_8._0_1_ = 3;
  FUN_004661f0(0,1);
  local_8._0_1_ = 0;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 5;
  FUN_00409350();
  local_8._0_1_ = 6;
  FUN_00408ed0(local_3c,0,0xffffffff);
  local_8._0_1_ = 5;
  FUN_004661f0(0,0);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00464bd0();
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return uVar1;
}

