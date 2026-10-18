// FUN_00ae6610 @ 00ae6610 body=[[00ae6610, 00ae66a5]]


void FUN_00ae6610(byte param_1)

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
  *in_ECX = (int)&PTR_FUN_00ddd99c;
  local_4 = 0;
  iVar2 = FUN_00ae6600(uVar1);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x10))();
    if (iVar2 != 0) {
      FUN_00ade8b0();
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

