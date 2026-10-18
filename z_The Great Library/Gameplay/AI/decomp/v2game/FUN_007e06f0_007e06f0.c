// FUN_007e06f0 @ 007e06f0 body=[[007e06f0, 007e07c7]]


undefined4 * FUN_007e06f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5e8f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009941e0(param_1,in_ECX,param_2);
  *param_1 = CEU3Graphics::vftable;
  param_1[1] = CEU3Graphics::vftable;
  param_1[0x1af5b] = 0;
  param_1[0x1af5c] = 0;
  param_1[0x1af5d] = 0;
  param_1[0x1af5f] = 0;
  param_1[0x1af60] = 0;
  param_1[0x1af61] = 0;
  param_1[0x1af62] = 0;
  param_1[0x1af64] = 0;
  param_1[0x1af65] = 0;
  param_1[0x1af66] = 0;
  param_1[0x1af69] = 0;
  param_1[0x1af6a] = 0;
  param_1[0x1af6b] = CTernary<int,0>::vftable;
  param_1[0x1af6c] = 0;
  *(undefined1 *)(param_1 + 0x1af6d) = 0;
  param_1[0x1af6e] = 0;
  param_1[0x1af70] = 0;
  param_1[0x1af71] = 0;
  param_1[0x1af72] = 0;
  *(undefined1 *)(param_1 + 0x1af73) = 0;
  local_8 = 4;
  DAT_012589b8 = param_1;
  FUN_007e1050(param_1);
  ExceptionList = local_10;
  return param_1;
}

