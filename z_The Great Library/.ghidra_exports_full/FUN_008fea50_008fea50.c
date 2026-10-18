// FUN_008fea50 @ 008fea50 body=[[008fea50, 008feb3d]]


undefined1 FUN_008fea50(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = 0;
    if (DAT_01258a20 != 0) {
      piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                        0x1f0);
      iVar2 = DAT_01258a20;
      do {
        if (*piVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (1 < iVar3) {
        return *(undefined1 *)(in_ECX + 0x1c);
      }
    }
    return *(char *)(in_ECX + 0x1c) == '\0';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      return false;
    }
    iVar2 = FUN_0096bb50();
    iVar3 = iVar2 + -1;
    bVar4 = iVar3 == 0;
  }
  else {
    iVar2 = 0;
    if (DAT_01258a20 == 0) goto LAB_008feafb;
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x110);
    iVar3 = DAT_01258a20;
    do {
      if (*piVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = iVar2 + -1;
    bVar4 = iVar2 == 1;
  }
  if (!bVar4 && SBORROW4(iVar2,1) == iVar3 < 0) {
    return *(undefined1 *)(in_ECX + 0x1c);
  }
LAB_008feafb:
  return *(char *)(in_ECX + 0x1c) == '\0';
}

