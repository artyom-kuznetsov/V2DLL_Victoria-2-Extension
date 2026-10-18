// FUN_00b1f010 @ 00b1f010 body=[[00b1f010, 00b1f07f]]


void FUN_00b1f010(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3a0c8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0a90;
  local_4 = 0;
  FUN_00b19ee0(uVar1);
  local_4 = 0xffffffff;
  FUN_00b1f390();
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

