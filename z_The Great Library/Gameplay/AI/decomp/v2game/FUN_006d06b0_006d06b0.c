// FUN_006d06b0 @ 006d06b0 body=[[006d06b0, 006d0731]]


int FUN_006d06b0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar2 = FUN_00540e80(in_ECX + 0x2c);
    return iVar2;
  }
  iVar1 = *(int *)(iVar2 + 0x1594) - *(int *)(iVar2 + 0x1590) >> 2;
  if (0 < iVar1) {
    iVar3 = 0;
    piVar4 = *(int **)(iVar2 + 0x1590);
    do {
      if (*(int *)(*piVar4 + 0xc) == *(int *)(in_ECX + 0x28)) {
        return (*(int **)(iVar2 + 0x1590))[iVar3];
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

