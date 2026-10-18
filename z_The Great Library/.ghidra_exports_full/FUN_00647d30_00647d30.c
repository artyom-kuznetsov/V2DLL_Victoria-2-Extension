// FUN_00647d30 @ 00647d30 body=[[00647d30, 00647dd9]]


undefined4 * FUN_00647d30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f5ef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CEU3Idler::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x15] = param_2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_8 = 5;
  *(undefined4 *)((int)param_1 + 5) = 0;
  FUN_0068ea30(0x16);
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 + param_1[9]) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x58);
  ExceptionList = local_10;
  return param_1;
}

