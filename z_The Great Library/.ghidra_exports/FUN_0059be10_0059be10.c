// FUN_0059be10 @ 0059be10  (requested 0059BE10, first bytes: A1 E8 88 25 01 56 8B B0)


void FUN_0059be10(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(DAT_012588e8 + 0xb24);
  iVar2 = (**(code **)(*piVar1 + 0xec))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0xec))();
    if (*(int *)(iVar2 + 0x14) == in_ECX + -8) {
      (**(code **)(*piVar1 + 0xe8))(0);
    }
  }
  return;
}

