// FUN_008f68d0 @ 008f68d0 body=[[008f68d0, 008f6a5d]]


uint FUN_008f68d0(int param_1)

{
  char cVar1;
  uint3 uVar4;
  uint uVar2;
  undefined3 uVar5;
  int iVar3;
  int in_ECX;
  uint uVar6;
  
  uVar6 = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x24) != '\0') {
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0xc) * 4) + 0xe64) + 0x50) +
                      0x20);
      uVar5 = (undefined3)((uint)iVar3 >> 8);
      if (*(char *)(in_ECX + 0x25) != '\0') {
        return CONCAT31(uVar5,iVar3 == *(int *)(param_1 + 0xc));
      }
      return CONCAT31(uVar5,iVar3 != *(int *)(param_1 + 0xc));
    }
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x20) * 4) + 0xe64);
LAB_008f6a0f:
    uVar2 = *(uint *)(iVar3 + 0x50);
LAB_008f6a19:
    uVar6 = *(uint *)(uVar2 + 0x20);
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if (cVar1 != '\0') {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x6c);
      goto LAB_008f6a0f;
    }
    iVar3 = FUN_008a8dc0();
    if (*(int *)(iVar3 + 4) != 0) {
      iVar3 = FUN_008a8dc0();
      uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 4) * 4) +
                                0xe64) + 0x50);
      goto LAB_008f6a19;
    }
    uVar4 = (uint3)((uint)iVar3 >> 8);
    if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
      uVar2 = CONCAT31(uVar4,1);
    }
    else {
      uVar2 = (uint)uVar4 << 8;
    }
    if ((char)uVar2 == '\0') {
      iVar3 = FUN_009c16d0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 0x4c) + 0x50);
        goto LAB_008f6a19;
      }
    }
  }
  if (uVar6 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 == 0) {
      iVar3 = FUN_008a8dc0();
      uVar2 = *(uint *)(iVar3 + 4);
      if (uVar2 == 0) goto LAB_008f6a53;
    }
    if (uVar2 == uVar6) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_008f6a53:
  return uVar2 & 0xffffff00;
}

