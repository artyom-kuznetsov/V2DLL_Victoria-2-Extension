// FUN_005e00f0 @ 005e00f0 body=[[005e00f0, 005e0197]]


undefined4 FUN_005e00f0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int local_14;
  
  iVar1 = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x28;
  iVar2 = 0;
  if (0 < iVar1) {
    local_14 = 0;
    do {
      piVar3 = (int *)(*(int *)(in_ECX + 0x3c) + local_14);
      iVar1 = DAT_01258a94;
      if ((uint)piVar3[1] < 0x1269) {
        iVar1 = DAT_01258a98;
      }
      if (iVar1 == 0) {
LAB_005e015d:
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_009c1d40();
        if (iVar1 == 0) goto LAB_005e015d;
        iVar1 = iVar1 + -8;
      }
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      local_14 = local_14 + 0x28;
      iVar1 = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x28;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

