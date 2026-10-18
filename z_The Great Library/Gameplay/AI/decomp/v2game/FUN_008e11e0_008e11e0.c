// FUN_008e11e0 @ 008e11e0 body=[[008e11e0, 008e128b]]


uint FUN_008e11e0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x14) + 0x70);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return (uint)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(param_1 + 0xc) * 4) + 0x132c) +
                          *(int *)(iVar2 + 8) * 4) != 0);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    return (uint)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                            *(int *)(param_1 + 0x10) * 4) + 0x1ec) +
                          *(int *)(iVar2 + 8) * 4) != 0);
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if ((char)uVar1 != '\0') {
    return (uint)(*(int *)(*(int *)(param_1 + 0x14) + 0x70) == iVar2);
  }
  return uVar1 & 0xffffff00;
}

