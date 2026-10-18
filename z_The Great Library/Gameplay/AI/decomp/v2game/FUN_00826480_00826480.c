// FUN_00826480 @ 00826480  (requested 00826480, first bytes: 56 8B F1 8B 06 8B 50 20)


void FUN_00826480(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  cVar3 = (**(code **)(*in_ECX + 0x20))();
  if (cVar3 != '\0') {
    piVar1 = in_ECX + 0xc;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*in_ECX + 0x28))();
    }
  }
  piVar1 = (int *)in_ECX[0x11];
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if ((char)piVar2[0xf] != '\0') {
      (**(code **)(*piVar2 + 0x24))();
    }
  }
  return;
}

