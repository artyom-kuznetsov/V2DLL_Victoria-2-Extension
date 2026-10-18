// FUN_005ea800 @ 005ea800 body=[[005ea800, 005ea885]]


undefined4 * FUN_005ea800(int param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f953;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e8a60(param_1);
  local_8 = 0;
  *in_ECX = CUpperHouseChange::vftable;
  FUN_00979270(in_ECX + 4,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00979270(in_ECX + 0xc,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  ExceptionList = local_10;
  return in_ECX;
}

