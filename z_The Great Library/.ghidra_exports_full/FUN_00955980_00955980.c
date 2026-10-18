// FUN_00955980 @ 00955980 body=[[00955980, 009559ff]]


undefined4 * FUN_00955980(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4206b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(in_ECX + 4);
  *param_1 = CDataSpread<fpml::fixed_point<__int64,48,15>,int,100>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 0;
  FUN_0043a750(in_ECX + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 2;
  FUN_009beeb0(in_ECX + 0x18);
  ExceptionList = local_10;
  return param_1;
}

