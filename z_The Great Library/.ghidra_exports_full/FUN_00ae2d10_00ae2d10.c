// FUN_00ae2d10 @ 00ae2d10 body=[[00ae2d10, 00ae2d93]]


void FUN_00ae2d10(void)

{
  uint uVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b37ae1;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  local_4 = 1;
  if (*(int *)(in_ECX + 0xc) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xc),uVar1);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(in_ECX + 0xc) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xc));
  }
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return;
}

