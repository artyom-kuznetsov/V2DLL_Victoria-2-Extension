// FUN_005a99d0 @ 005a99d0 body=[[005a99d0, 005a9a17]]


void FUN_005a99d0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = CLandCombat::vftable;
  in_ECX[2] = CLandCombat::vftable;
  piVar1 = *(int **)(in_ECX[4] + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *(undefined4 *)(iVar2 + 0x74) = 0;
  }
  piVar1 = *(int **)(in_ECX[5] + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *(undefined4 *)(iVar2 + 0x74) = 0;
  }
  FUN_0059bd50();
  return;
}

