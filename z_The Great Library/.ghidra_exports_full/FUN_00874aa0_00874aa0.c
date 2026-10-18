// FUN_00874aa0 @ 00874aa0 body=[[00874aa0, 00874b66] [00874b6a, 00874b80] [00874b84, 00874b9a] [00874b9e, 00874bb3]]


undefined4 FUN_00874aa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_cc [72];
  undefined4 uStack_84;
  char *pcStack_80;
  uint uStack_7c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9431d;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  uStack_7c = 5;
  pcStack_80 = "_desc";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  uStack_84 = 0x874ae0;
  ExceptionList = &local_10;
  FUN_00409350();
  uStack_7c = param_2;
  local_8 = 0;
  pcStack_80 = (char *)0x0;
  local_18 = 0x2d2d2d;
  uStack_84 = 0x2d2d2d;
  local_14 = auStack_cc;
  FUN_008a88d0();
  local_8._0_1_ = 1;
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 2;
  FUN_00408ed0(uVar1,0,0xffffffff);
  local_8._0_1_ = 3;
  FUN_008adbe0(local_50);
  local_8 = CONCAT31(local_8._1_3_,4);
  pcStack_80 = (char *)0x874b54;
  FUN_00989330();
  if (0xf < local_3c) {
    uStack_7c = local_50[0];
                    /* WARNING: Subroutine does not return */
    pcStack_80 = &UNK_00874b67;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    pcStack_80 = &UNK_00874b81;
    FUN_00aae91b();
  }
  if (0xf < local_20) {
    uStack_7c = local_34;
                    /* WARNING: Subroutine does not return */
    pcStack_80 = &UNK_00874b9b;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

