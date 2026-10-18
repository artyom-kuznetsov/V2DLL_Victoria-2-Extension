// FUN_0072c590 @ 0072c590 body=[[0072c590, 0072c697] [0072c69b, 0072c6e1]]


undefined4 * FUN_0072c590(undefined4 *param_1)

{
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44411;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x42b;
  param_1[0xc] = 0x42b;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CPlayerConnected::vftable;
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x58);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(in_ECX + 0x5c);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 3;
  param_1[0x18] = 0;
  param_1[0x19] = DAT_01268fec;
  param_1[0x1a] = DAT_01268ff0;
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x18] = *(undefined4 *)(in_ECX + 0x60);
  param_1[0x19] = *(undefined4 *)(in_ECX + 100);
  param_1[0x1a] = *(undefined4 *)(in_ECX + 0x68);
  FUN_00408ed0(in_ECX + 0x6c,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

