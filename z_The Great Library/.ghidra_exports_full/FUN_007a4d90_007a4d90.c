// FUN_007a4d90 @ 007a4d90 body=[[007a4d90, 007a4e10]]


undefined4 * FUN_007a4d90(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3df1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_00f0d868;
  param_1[3] = DAT_00f0d86c;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  FUN_009c1390(&DAT_00f0d868);
  *(undefined1 *)(param_1 + 0xd) = param_3;
  *param_1 = CEU3GameLauncher::vftable;
  param_1[0xc] = param_2;
  ExceptionList = local_10;
  return param_1;
}

