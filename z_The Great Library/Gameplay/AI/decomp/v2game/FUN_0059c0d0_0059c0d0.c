// FUN_0059c0d0 @ 0059c0d0  (requested 0059C0D0, first bytes: 53 56 8B F1 8B 46 10 57)


void FUN_0059c0d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  piVar1 = *(int **)(in_ECX[4] + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar2 = (**(code **)(*in_ECX + 0x24))();
    if (iVar2 == 3) {
      *(int **)(iVar3 + 0x70) = in_ECX;
    }
    else {
      *(int **)(iVar3 + 0x74) = in_ECX;
    }
  }
  piVar1 = *(int **)(in_ECX[5] + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar2 = (**(code **)(*in_ECX + 0x24))();
    if (iVar2 == 3) {
      *(int **)(iVar3 + 0x70) = in_ECX;
    }
    else {
      *(int **)(iVar3 + 0x74) = in_ECX;
    }
  }
  iVar3 = (**(code **)(*in_ECX + 0x24))();
  if (iVar3 == 3) {
    FUN_004b7820();
    return;
  }
  *(int **)(in_ECX[6] + 0x10c) = in_ECX;
  return;
}

