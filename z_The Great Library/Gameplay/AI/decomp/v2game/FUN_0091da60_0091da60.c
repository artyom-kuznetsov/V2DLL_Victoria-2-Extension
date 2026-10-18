// FUN_0091da60 @ 0091da60 body=[[0091da60, 0091db01]]


void FUN_0091da60(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                             *(int *)(in_ECX + 0x14) * 4) + 0x38);
  for (piVar2 = *(int **)(DAT_012588e8 + 0xa84);
      (piVar2 != (int *)0x0 && ((int *)*piVar2 != piVar1)); piVar2 = (int *)piVar2[2]) {
  }
  FUN_005f2ae0(piVar2);
  (**(code **)(*piVar1 + 0x2c))();
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(undefined1 *)(iVar3 + 0x71) = 1;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  (**(code **)*piVar1)(1);
  return;
}

