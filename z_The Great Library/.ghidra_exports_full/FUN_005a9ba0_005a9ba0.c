// FUN_005a9ba0 @ 005a9ba0 body=[[005a9ba0, 005a9be7]]


void FUN_005a9ba0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = CNavalCombat::vftable;
  in_ECX[2] = CNavalCombat::vftable;
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

