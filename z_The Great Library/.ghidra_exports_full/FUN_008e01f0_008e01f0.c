// FUN_008e01f0 @ 008e01f0 body=[[008e01f0, 008e0310]]


uint FUN_008e01f0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    if (*(int *)(param_1 + 0xc) != 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
      if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) == *(int *)(*(int *)(param_1 + 0x24) + 0xc)))
      {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x6c);
        goto LAB_008e0281;
      }
    }
    iVar2 = *(int *)(param_1 + 0x24);
    if (*(int *)(iVar2 + 0xc) == 0) {
      if (*(int *)(iVar2 + 0x10) < 1) {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0x6c);
      }
      else {
        iVar2 = FUN_009692c0();
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe64);
    }
  }
LAB_008e0281:
  if (*(int *)(param_1 + 0xc) != 0) {
    return (uint)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(param_1 + 0xc) * 4) + 0x1330) +
                          *(int *)(iVar2 + 8) * 4) != 0);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    return (uint)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                            *(int *)(param_1 + 0x10) * 4) + 0x1f0) +
                          *(int *)(iVar2 + 8) * 4) != 0);
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if ((char)uVar3 != '\0') {
    return (uint)(*(int *)(*(int *)(param_1 + 0x14) + 0x6c) == iVar2);
  }
  return uVar3 & 0xffffff00;
}

