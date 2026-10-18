// FUN_005e4320 @ 005e4320  (requested 005E4320, first bytes: 55 8B EC 6A FF 68 CE 5A)


undefined4 * FUN_005e4320(undefined4 *param_1)

{
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45ace;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x579;
  param_1[0xc] = 0x579;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CLoadArmyCommand::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_01268fec;
  param_1[0x11] = DAT_01268ff0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._0_1_ = 3;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x19] = 0;
  param_1[0x1a] = DAT_01268fec;
  param_1[0x1b] = DAT_01268ff0;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00408ed0(local_48,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

