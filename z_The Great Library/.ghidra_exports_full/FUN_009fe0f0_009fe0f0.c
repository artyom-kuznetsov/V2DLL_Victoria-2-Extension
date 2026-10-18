// FUN_009fe0f0 @ 009fe0f0 body=[[009fe0f0, 009fe20b] [009fe20f, 009fe223]]


undefined4 * FUN_009fe0f0(undefined4 *param_1)

{
  undefined1 local_84 [16];
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  undefined1 *puStack_48;
  uint uStack_44;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56821;
  local_10 = ExceptionList;
  uStack_44 = 0;
  puStack_48 = (undefined1 *)0x0;
  puStack_4c = (uint *)0x1;
  local_14 = local_68;
  uStack_6c = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_70 = &DAT_00ded94d;
  local_68[0] = 0;
  local_74 = 0x9fe137;
  ExceptionList = &local_10;
  FUN_00409350();
  local_18 = local_84;
  local_8 = 0;
  local_70 = (undefined1 *)0xf;
  local_74 = 0;
  local_84[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_009fa9f0(param_1,0xd2);
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3e610;
  uStack_44 = 0;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  puStack_48 = &DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  puStack_4c = (uint *)0x9fe18a;
  FUN_00409350();
  local_8._0_1_ = 2;
  uStack_44 = 0;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  puStack_48 = &DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x24) = 0;
  puStack_4c = (uint *)0x9fe1a7;
  FUN_00409350();
  local_8._0_1_ = 3;
  uStack_44 = 0;
  puStack_48 = &DAT_00ded94d;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  puStack_4c = (uint *)0x9fe1c2;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x2b] = 0;
  param_1[0x2c] = DAT_01268fec;
  param_1[0x2d] = DAT_01268ff0;
  uStack_44 = 0xffffffff;
  puStack_48 = (undefined1 *)0x0;
  puStack_4c = local_34;
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  uStack_50 = 0x9fe1fd;
  FUN_00408ed0();
  if (0xf < local_20) {
    uStack_44 = local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_48 = &UNK_009fe20c;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

