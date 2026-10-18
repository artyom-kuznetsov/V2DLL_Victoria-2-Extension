// FUN_008c8440 @ 008c8440 body=[[008c8440, 008c8599]]


uint FUN_008c8440(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      iVar2 = *(int *)(in_ECX + 0x24);
      uVar1 = iVar2 * 1000;
      if (DAT_01258a08 == 0) {
        iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                                 *(int *)(in_ECX + 0x20) * 4) + 0x48);
        bVar6 = SBORROW4(iVar3,uVar1);
        bVar5 = iVar3 + iVar2 * -1000 < 0;
      }
      else {
        bVar6 = SBORROW4(100000,uVar1);
        bVar5 = iVar2 * -1000 + 100000 < 0;
      }
      goto LAB_008c84f9;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    iVar3 = *(int *)(in_ECX + 0x24) * 1000;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (DAT_01258a08 == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x34);
        goto LAB_008c84ca;
      }
      uVar1 = 100000;
      goto LAB_008c84f7;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    iVar3 = *(int *)(in_ECX + 0x24) * 1000;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (DAT_01258a08 == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
LAB_008c84ca:
        uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xbe8
                                           ) +
                                  *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4) +
                                          0x134) * 4) + 0x48);
      }
      else {
        uVar1 = 100000;
      }
LAB_008c84f7:
      bVar6 = SBORROW4(uVar1,iVar3);
      bVar5 = (int)(uVar1 - iVar3) < 0;
LAB_008c84f9:
      if (bVar6 == bVar5) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      goto LAB_008c8591;
    }
  }
  if (DAT_01258a08 == 0) {
    uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(param_1 + 0xc) * 4) + 0xbe8) + iVar2 * 4) +
                     0x48);
  }
  else {
    uVar1 = 100000;
  }
  if (iVar3 <= (int)uVar1) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
LAB_008c8591:
  return uVar1 & 0xffffff00;
}

