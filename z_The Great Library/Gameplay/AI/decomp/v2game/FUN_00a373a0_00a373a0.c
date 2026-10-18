// FUN_00a373a0 @ 00a373a0 body=[[00a373a0, 00a37422]]


undefined4 * FUN_00a373a0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41223;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(in_ECX + 4);
  *param_1 = &PTR_FUN_00e40510;
  param_1[2] = *(undefined4 *)(in_ECX + 8);
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00408ed0(in_ECX + 0xc,0,0xffffffff);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_8 = 1;
  FUN_009beeb0(in_ECX + 0x28);
  ExceptionList = local_10;
  return param_1;
}

