// FUN_0072c420 @ 0072c420 body=[[0072c420, 0072c51a] [0072c51e, 0072c56b] [0072c56f, 0072c583]]


undefined4 *
FUN_0072c420(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [5];
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44459;
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
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x17) = param_4;
  param_1[0x16] = param_3;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 3;
  param_1[0x18] = 0;
  param_1[0x19] = DAT_01268fec;
  param_1[0x1a] = DAT_01268ff0;
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_00408ed0(local_38,0,0xffffffff);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_8._0_1_ = 4;
  FUN_0072d4e0(&local_60,param_5);
  local_8 = CONCAT31(local_8._1_3_,5);
  param_1[0x18] = local_60;
  param_1[0x19] = local_5c;
  param_1[0x1a] = local_58;
  FUN_00408ed0(local_54,0,0xffffffff);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

