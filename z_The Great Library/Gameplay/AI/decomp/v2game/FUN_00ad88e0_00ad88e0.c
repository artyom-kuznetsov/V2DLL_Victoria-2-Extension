// FUN_00ad88e0 @ 00ad88e0 body=[[00ad88e0, 00ad8975]]


void FUN_00ad88e0(byte param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37dc8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *in_ECX = (int)&PTR_FUN_00ddcbf0;
  local_4 = 0;
  iVar2 = FUN_00ae6600(uVar1);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x10))();
    if (iVar2 != 0) {
      FUN_00aeb0b0();
      (*(code *)PTR__free_00f01b10)(iVar2);
    }
  }
  local_4 = 0xffffffff;
  *in_ECX = (int)&PTR_LAB_00ddd984;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  ExceptionList = local_c;
  return;
}

