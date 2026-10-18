// FUN_009728e0 @ 009728e0 body=[[009728e0, 00972966] [0097296a, 00972984] [00972988, 009729f5] [009729f9, 00972a10] [00972a14, 00972a28]]


undefined4 FUN_009728e0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_7c [20];
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
  puStack_c = &LAB_00b64003;
  local_10 = ExceptionList;
  local_14 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("_desc",5);
  local_8 = 1;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  FUN_00988f20();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  local_8._0_1_ = 5;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  FUN_009a8ee0(local_28,local_7c);
  local_8._0_1_ = 6;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

