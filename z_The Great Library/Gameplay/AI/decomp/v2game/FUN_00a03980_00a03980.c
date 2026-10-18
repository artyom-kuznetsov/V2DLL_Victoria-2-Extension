// FUN_00a03980 @ 00a03980 body=[[00a03980, 00a03a5e] [00a03a62, 00a03af9] [00a03afd, 00a03b0b] [00a03b0f, 00a03b23]]


undefined4 * FUN_00a03980(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined2 in_stack_00000028;
  undefined1 uStack0000002c;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4924d;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xb] = 0xe3;
  param_1[0xc] = 0xe3;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = in_stack_00000024;
  *(undefined2 *)(param_1 + 10) = in_stack_00000028;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_8 = 2;
  *param_1 = &PTR_FUN_00e3e82c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 3;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_01268fec;
  param_1[0x11] = DAT_01268ff0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 4;
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8 = 5;
  *(undefined1 *)(param_1 + 0x20) = uStack0000002c;
  _uStack0000002c = FUN_00aae9af(0x40);
  local_8 = 6;
  uVar1 = local_8;
  local_8 = 6;
  if (_uStack0000002c == 0) {
    uVar2 = 0;
    local_8 = uVar1;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 7;
    local_14 = 1;
    uVar2 = FUN_009f24c0(_uStack0000002c,&param_2,local_30);
  }
  param_1[0x21] = uVar2;
  if (((local_14 & 1) != 0) && (0xf < local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

