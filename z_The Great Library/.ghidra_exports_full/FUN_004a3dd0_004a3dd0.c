// FUN_004a3dd0 @ 004a3dd0 body=[[004a3dd0, 004a3e61]]


undefined4 * FUN_004a3dd0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(in_ECX + 2,0,0xffffffff);
  local_8 = 0;
  param_1[9] = in_ECX[9];
  param_1[10] = in_ECX[10];
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00408ed0(in_ECX + 0xb,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

