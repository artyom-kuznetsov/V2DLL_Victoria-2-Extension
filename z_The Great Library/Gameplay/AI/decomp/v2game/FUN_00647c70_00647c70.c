// FUN_00647c70 @ 00647c70 body=[[00647c70, 00647d22]]


uint FUN_00647c70(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int local_14;
  
  uVar2 = (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c)) / 0x28;
  if (uVar2 != *(uint *)(*(int *)(in_ECX + 0x68) + 0x1608)) {
LAB_00647ca0:
    return uVar2 & 0xffffff00;
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    local_14 = 0;
    do {
      piVar4 = (int *)(*(int *)(in_ECX + 0x6c) + local_14);
      iVar1 = DAT_01258a94;
      if ((uint)piVar4[1] < 0x1269) {
        iVar1 = DAT_01258a98;
      }
      if (iVar1 == 0) {
LAB_00647cf1:
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_009c1d40();
        if (iVar1 == 0) goto LAB_00647cf1;
        iVar1 = iVar1 + -8;
      }
      *piVar4 = iVar1;
      uVar2 = 0;
      if (iVar1 == 0) goto LAB_00647ca0;
      local_14 = local_14 + 0x28;
      uVar2 = (*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c)) / 0x28;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

