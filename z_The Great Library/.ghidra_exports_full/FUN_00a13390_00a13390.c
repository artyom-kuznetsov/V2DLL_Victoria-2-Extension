// FUN_00a13390 @ 00a13390 body=[[00a13390, 00a13445]]


undefined4 * FUN_00a13390(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41463;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3ef00;
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  param_1[0x12] = *(undefined4 *)(in_ECX + 0x48);
  param_1[0x13] = *(undefined4 *)(in_ECX + 0x4c);
  param_1[0x19] = 0xf;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_00408ed0(in_ECX + 0x50,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x1b] = *(undefined4 *)(in_ECX + 0x6c);
  param_1[0x1c] = *(undefined4 *)(in_ECX + 0x70);
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

