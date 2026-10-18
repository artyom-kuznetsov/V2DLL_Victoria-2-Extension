// FUN_008c7310 @ 008c7310 body=[[008c7310, 008c740a]]


uint FUN_008c7310(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      uVar1 = *(int *)(in_ECX + 0x24) * 1000;
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                               *(int *)(in_ECX + 0x20) * 4) + 0x3c);
      bVar4 = SBORROW4(iVar3,uVar1);
      iVar3 = iVar3 + *(int *)(in_ECX + 0x24) * -1000;
      goto LAB_008c73a5;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    iVar2 = *(int *)(in_ECX + 0x24) * 1000;
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x34);
      goto LAB_008c736e;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    iVar2 = *(int *)(in_ECX + 0x24) * 1000;
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
LAB_008c736e:
      uVar1 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbe8);
      iVar3 = *(int *)(*(int *)(uVar1 + *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4
                                                         ) + 0x134) * 4) + 0x3c);
      bVar4 = SBORROW4(iVar3,iVar2);
      iVar3 = iVar3 - iVar2;
LAB_008c73a5:
      if (bVar4 == iVar3 < 0) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      goto LAB_008c7402;
    }
  }
  uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                            0xbe8) + iVar3 * 4);
  if (iVar2 <= *(int *)(uVar1 + 0x3c)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
LAB_008c7402:
  return uVar1 & 0xffffff00;
}

