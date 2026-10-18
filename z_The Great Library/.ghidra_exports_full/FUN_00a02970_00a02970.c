// FUN_00a02970 @ 00a02970 body=[[00a02970, 00a02a74] [00a02a78, 00a02ab2]]


undefined4 * FUN_00a02970(undefined4 *param_1)

{
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  uint *puStack_54;
  undefined1 *puStack_50;
  uint uStack_4c;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56271;
  local_10 = ExceptionList;
  uStack_4c = 0;
  puStack_50 = (undefined1 *)0x0;
  puStack_54 = (uint *)0x1;
  local_14 = local_70;
  uStack_74 = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_78 = &DAT_00ded94d;
  local_70[0] = 0;
  local_7c = 0xa029b7;
  ExceptionList = &local_10;
  FUN_00409350();
  local_18 = local_8c;
  local_8 = 0;
  local_78 = (undefined1 *)0xf;
  local_7c = 0;
  local_8c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_009fa9f0(param_1,0xde);
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3e7b4;
  uStack_4c = 0;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  puStack_50 = &DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  puStack_54 = (uint *)0xa02a0a;
  FUN_00409350();
  local_8._0_1_ = 2;
  uStack_4c = 0;
  puStack_50 = &DAT_00ded94d;
  param_1[0x24] = 0;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  puStack_54 = (uint *)0xa02a2b;
  FUN_00409350();
  local_8._0_1_ = 3;
  param_1[0x25] = 0;
  param_1[0x26] = DAT_01268fec;
  param_1[0x27] = DAT_01268ff0;
  uStack_4c = 0xffffffff;
  puStack_50 = (undefined1 *)0x0;
  puStack_54 = local_3c;
  param_1[0x2d] = 0xf;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  uStack_58 = 0xa02a66;
  FUN_00408ed0();
  if (0xf < local_28) {
    uStack_4c = local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_00a02a75;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,4);
  uStack_4c = 0;
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  puStack_50 = &DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  puStack_54 = (uint *)0xa02a9e;
  FUN_00409350();
  ExceptionList = local_10;
  return param_1;
}

