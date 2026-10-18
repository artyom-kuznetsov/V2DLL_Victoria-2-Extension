// FUN_00b0eff0 @ 00b0eff0 body=[[00b0eff0, 00b0f04d]]


void FUN_00b0eff0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b396eb;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de009c;
  local_4 = 0;
  FUN_00b1c690(uVar1);
  local_4 = 0xffffffff;
  FUN_00b00e90();
  ExceptionList = local_c;
  return;
}

