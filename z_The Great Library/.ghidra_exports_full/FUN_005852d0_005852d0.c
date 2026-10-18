// FUN_005852d0 @ 005852d0 body=[[005852d0, 005853a9] [005853ad, 005853d0]]


undefined4 * FUN_005852d0(undefined4 *param_1)

{
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4614b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x6fd;
  param_1[0xc] = 0x6fd;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CCreateColonyCommand::vftable;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0xf] = 0;
  param_1[0x10] = DAT_01268fec;
  param_1[0x11] = DAT_01268ff0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(local_3c,0,0xffffffff);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  param_1[0x19] = 0x2d2d2d;
  param_1[0x1a] = 0;
  ExceptionList = local_10;
  return param_1;
}

