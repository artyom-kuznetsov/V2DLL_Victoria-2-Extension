// FUN_00438c50 @ 00438c50 body=[[00438c50, 00438d1b] [00438d1f, 00438d4f] [00438d53, 00438d6d] [00438d71, 00438db5] [00438db9, 00438dd8] [00438ddc, 00438df0]]


undefined4 FUN_00438c50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
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
  
  puStack_c = &LAB_00b82e3b;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_00437f10(param_1,param_2);
  local_14 = 1;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  local_8 = 1;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350("DEFENCE_DESC",0xc);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_28,local_60);
  local_8._0_1_ = 3;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 4;
  FUN_00448aa0();
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_8._0_1_ = 5;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 1;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740(&DAT_00dee2cc,1);
  FUN_00437280(local_7c,param_2);
  local_8._0_1_ = 6;
  FUN_00448aa0();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448aa0();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

