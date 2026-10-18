// FUN_00a04390 @ 00a04390 body=[[00a04390, 00a04421]]


undefined4 * FUN_00a04390(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b415b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e868;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(in_ECX + 0x3c);
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0(in_ECX + 0x40,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(in_ECX + 0x5c,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

