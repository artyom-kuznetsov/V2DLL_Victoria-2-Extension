// FUN_00ad44f0 @ 00ad44f0 body=[[00ad44f0, 00ad452f]]


void FUN_00ad44f0(void)

{
  int *in_ECX;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(*in_ECX + iVar2) != 0) {
        (*(code *)PTR__free_00f01b10)(*(int *)(*in_ECX + iVar2));
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

