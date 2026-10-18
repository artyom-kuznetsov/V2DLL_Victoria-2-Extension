// FUN_00ade020 @ 00ade020 body=[[00ade020, 00ade0a2]]


void FUN_00ade020(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  FUN_00add9f0();
  FUN_00adda80();
  uVar1 = in_ECX[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*in_ECX + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_00b07520();
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
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
  }
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  return;
}

