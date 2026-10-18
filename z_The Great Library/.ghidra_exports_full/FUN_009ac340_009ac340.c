// FUN_009ac340 @ 009ac340 body=[[009ac340, 009ac3c5]]


undefined4 * FUN_009ac340(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bdb3;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38f4c;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(in_ECX + 4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00408ed0(in_ECX + 0x20,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

