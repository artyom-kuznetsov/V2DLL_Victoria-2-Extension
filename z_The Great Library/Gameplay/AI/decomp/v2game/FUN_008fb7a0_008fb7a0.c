// FUN_008fb7a0 @ 008fb7a0 body=[[008fb7a0, 008fb856]]


undefined4 FUN_008fb7a0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int in_ECX;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0xc) == 0) {
        return 0;
      }
      puVar2 = (uint *)FUN_00969ed0(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(param_1 + 0xc) * 4) + 0x12e8);
      if ((int)puVar2[1] < *(int *)(in_ECX + 0x24)) {
        return 0;
      }
      if (*(int *)(in_ECX + 0x24) < (int)puVar2[1]) {
        return 1;
      }
      bVar3 = *puVar2 < *(uint *)(in_ECX + 0x20);
      goto LAB_008fb7e9;
    }
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x1a8;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    ) + 200;
  }
  puVar2 = (uint *)FUN_00969ed0(iVar1);
  if ((int)puVar2[1] < *(int *)(in_ECX + 0x24)) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x24) < (int)puVar2[1]) {
    return 1;
  }
  bVar3 = *puVar2 < *(uint *)(in_ECX + 0x20);
LAB_008fb7e9:
  if (bVar3) {
    return 0;
  }
  return 1;
}

