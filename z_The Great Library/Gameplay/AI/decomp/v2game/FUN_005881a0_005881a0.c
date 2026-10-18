// FUN_005881a0 @ 005881a0 body=[[005881a0, 0058824c]]


void FUN_005881a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(in_ECX + 0x44) == 0) {
    iVar2 = FUN_00540e80(in_ECX + 0x48);
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
    iVar3 = 0;
    iVar1 = *(int *)(iVar2 + 0x1594) - *(int *)(iVar2 + 0x1590) >> 2;
    if (iVar1 < 1) {
      return;
    }
    piVar4 = *(int **)(iVar2 + 0x1590);
    while (*(int *)(*piVar4 + 0xc) != *(int *)(in_ECX + 0x44)) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return;
      }
    }
    iVar2 = (*(int **)(iVar2 + 0x1590))[iVar3];
  }
  if (iVar2 != 0) {
    FUN_00541680(0);
  }
  return;
}

