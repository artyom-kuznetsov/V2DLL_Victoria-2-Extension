// FUN_00401670 @ 00401670 body=[[00401670, 004017ae]]


undefined4 * FUN_00401670(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b480d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_8 = 3;
  uStack_7 = 0;
  FUN_0098b350(param_1 + 0x14);
  local_8 = 4;
  param_1[0x74] = param_2;
  *(undefined2 *)(param_1 + 0x73) = 0;
  param_1[0x7a] = 0xf;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  FUN_00409350(&DAT_00ded974,1);
  _local_8 = CONCAT31(uStack_7,5);
  *(undefined1 *)(param_1 + 0x7c) = 1;
  param_1[0x82] = 0xf;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined2 *)(param_1 + 0x87) = 1;
  param_1[0x85] = 0x2d2d2d;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  ExceptionList = local_10;
  return param_1;
}

