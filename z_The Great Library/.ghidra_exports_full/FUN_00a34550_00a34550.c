// FUN_00a34550 @ 00a34550 body=[[00a34550, 00a345cc]]


undefined4 * FUN_00a34550(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45cc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e4036c;
  param_1[0x13] = 0;
  param_1[0x14] = 0xf;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
  param_1[0x16] = *(undefined4 *)(in_ECX + 0x58);
  param_1[0x17] = *(undefined4 *)(in_ECX + 0x5c);
  param_1[0x18] = *(undefined4 *)(in_ECX + 0x60);
  param_1[0x19] = *(undefined4 *)(in_ECX + 100);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(in_ECX + 0x68);
  ExceptionList = local_10;
  return param_1;
}

