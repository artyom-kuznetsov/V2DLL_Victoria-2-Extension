// FUN_00b0ddc0 @ 00b0ddc0 body=[[00b0ddc0, 00b0de1d]]


void FUN_00b0ddc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b395a6;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0044;
  local_4 = 0;
  FUN_00b0e440(uVar1);
  local_4 = 0xffffffff;
  FUN_00b13120();
  ExceptionList = local_c;
  return;
}

