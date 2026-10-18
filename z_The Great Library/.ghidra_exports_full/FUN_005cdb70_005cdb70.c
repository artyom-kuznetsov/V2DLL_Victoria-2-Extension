// FUN_005cdb70 @ 005cdb70 body=[[005cdb70, 005cdc04] [005cdc08, 005cdc22] [005cdc26, 005cdc6f]]


undefined1 * FUN_005cdb70(undefined1 *param_1,int param_2)

{
  int in_ECX;
  undefined4 local_4c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63450;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((*(int *)(in_ECX + 0x124) <= param_2) || (param_2 < 3)) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(in_ECX + 0x114,0,0xffffffff);
    ExceptionList = local_10;
    return param_1;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfce2c,3);
  local_8 = 0;
  FUN_009895f0(param_2 + -3);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00988f20(local_30);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

