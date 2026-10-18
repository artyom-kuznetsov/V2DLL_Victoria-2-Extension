// FUN_005ebda0 @ 005ebda0 body=[[005ebda0, 005ebe12]]


undefined4 * FUN_005ebda0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62528;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e8a60(param_1);
  local_8 = 0;
  *in_ECX = CGovernmentFlagChange::vftable;
  uVar1 = FUN_009718a0();
  in_ECX[4] = uVar1;
  uVar1 = FUN_009718a0();
  in_ECX[5] = uVar1;
  uVar1 = FUN_009718a0();
  in_ECX[6] = uVar1;
  ExceptionList = local_10;
  return in_ECX;
}

