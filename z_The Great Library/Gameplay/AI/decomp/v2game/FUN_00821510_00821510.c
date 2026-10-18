// FUN_00821510 @ 00821510  (requested 00821510, first bytes: 55 8B EC 83 EC 08 8B 48)


void FUN_00821510(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x34) * 4) + 0x7b4);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int *)(iVar2 + 0xec) < 1) {
      *(undefined4 *)(iVar2 + 0xa0) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0xa0) = **(undefined4 **)(iVar2 + 0xe8);
    }
  }
  return;
}

