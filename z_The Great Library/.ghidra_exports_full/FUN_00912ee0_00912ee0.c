// FUN_00912ee0 @ 00912ee0 body=[[00912ee0, 00912fac] [00912fb0, 00912fcb] [00912fcf, 00912fe9] [00912fed, 00913007] [0091300b, 0091301f]]


undefined4 FUN_00912ee0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65393;
  local_10 = ExceptionList;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 1;
  (**(code **)(*in_ECX + 0x24))(local_7c);
  local_8._0_1_ = 2;
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_28,uVar1);
  local_8._0_1_ = 4;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

