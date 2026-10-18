// FUN_00ad8e30 @ 00ad8e30 body=[[00ad8e30, 00ad8e9e]]


void FUN_00ad8e30(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b372c8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddcc88;
  local_4 = 0;
  FUN_00b18780(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_LAB_00ddcc20;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

