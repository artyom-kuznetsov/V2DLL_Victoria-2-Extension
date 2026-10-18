// FUN_00b088e0 @ 00b088e0 body=[[00b088e0, 00b08931]]


void FUN_00b088e0(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*in_ECX + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_00b08610();
        (*(code *)PTR__free_00f01b10)(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  return;
}

