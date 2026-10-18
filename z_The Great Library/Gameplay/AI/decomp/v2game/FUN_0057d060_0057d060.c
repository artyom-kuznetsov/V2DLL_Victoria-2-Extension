// FUN_0057d060 @ 0057d060 body=[[0057d060, 0057d0dd]]


void FUN_0057d060(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x4c) * 4) + 0xe44);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    do {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((*(int *)(iVar2 + 0xc) == *(int *)(in_ECX + 0x44)) &&
         (*(int *)(iVar2 + 8) == *(int *)(in_ECX + 0x40))) break;
      iVar2 = 0;
    } while (piVar1 != (int *)0x0);
  }
  FUN_0052e900();
  if (*(int *)(iVar2 + 0x5c) == *(int *)(DAT_012588e8 + 0xb60)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(0);
  }
  return;
}

