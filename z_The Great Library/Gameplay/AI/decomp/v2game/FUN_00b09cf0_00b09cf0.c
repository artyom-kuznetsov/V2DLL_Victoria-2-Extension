// FUN_00b09cf0 @ 00b09cf0 body=[[00b09cf0, 00b09d4d]]


void FUN_00b09cf0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39128;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfe0c;
  local_4 = 0;
  if (in_ECX[2] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[2],uVar1);
  }
  *in_ECX = &PTR_LAB_00ddfe00;
  ExceptionList = local_c;
  return;
}

