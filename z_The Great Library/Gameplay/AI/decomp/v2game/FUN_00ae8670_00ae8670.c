// FUN_00ae8670 @ 00ae8670 body=[[00ae8670, 00ae86b0]]


void FUN_00ae8670(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (in_ECX[1] != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar3);
      if (iVar1 != 0) {
        (*(code *)PTR__free_00f01b10)(iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

