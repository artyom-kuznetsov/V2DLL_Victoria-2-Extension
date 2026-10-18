// FUN_00ae37e0 @ 00ae37e0 body=[[00ae37e0, 00ae3893]]


void FUN_00ae37e0(void)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b37b71;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  iVar1 = in_ECX[1];
  local_4 = 1;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar2, iVar1 != 0) {
    if (*(undefined4 **)*in_ECX != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)*in_ECX)(1,uVar3);
    }
    ppvVar2 = ExceptionList;
    iVar1 = in_ECX[1];
  }
  iVar1 = in_ECX[5];
  while (iVar1 != 0) {
    iVar1 = *(int *)in_ECX[4];
    if (iVar1 != 0) {
      FUN_00b0b200();
      (*(code *)PTR__free_00f01b10)(iVar1);
    }
    iVar1 = in_ECX[5];
  }
  local_4 = local_4 & 0xffffff00;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

