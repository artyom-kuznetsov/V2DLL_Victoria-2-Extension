// FUN_00ad3090 @ 00ad3090 body=[[00ad3090, 00ad311a]]


void FUN_00ad3090(byte param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b36b38;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = (int)&PTR_FUN_00ddc79c;
  local_4 = 0;
  iVar2 = FUN_00ae6600(uVar1);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x10))();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
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

