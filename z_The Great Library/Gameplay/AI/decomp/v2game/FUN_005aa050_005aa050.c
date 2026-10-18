// FUN_005aa050 @ 005aa050 body=[[005aa050, 005aa0a4]]


void FUN_005aa050(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  *in_ECX = CSiegeCombat::vftable;
  in_ECX[2] = CSiegeCombat::vftable;
  piVar1 = *(int **)(in_ECX[4] + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *(undefined4 *)(iVar2 + 0x70) = 0;
  }
  piVar1 = *(int **)(in_ECX[5] + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *(undefined4 *)(iVar2 + 0x70) = 0;
  }
  *(undefined4 *)(in_ECX[6] + 0x114) = 100000;
  FUN_0059bd50();
  return;
}

