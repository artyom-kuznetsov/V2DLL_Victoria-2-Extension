// FUN_008197a0 @ 008197a0 body=[[008197a0, 00819825]]


undefined4 * FUN_008197a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3abf6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = param_2;
  *param_1 = CViewsTextureManager::vftable;
  param_1[2] = in_ECX;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_8 = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  FUN_0068f390();
  FUN_0081aa50();
  ExceptionList = local_10;
  return param_1;
}

