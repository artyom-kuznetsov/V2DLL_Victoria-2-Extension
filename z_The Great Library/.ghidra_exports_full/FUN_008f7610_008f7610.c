// FUN_008f7610 @ 008f7610 body=[[008f7610, 008f76f6]]


ulonglong FUN_008f7610(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  ulonglong uVar3;
  uint local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar2 = *(uint *)(DAT_012588e8 + 0xacc);
        iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0x10) * 4) + 0x1a8;
        goto LAB_008f769d;
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
      uVar2 = (uint)(uVar3 >> 0x20);
      if ((char)uVar3 == '\0') goto LAB_008f76ed;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 0x188);
    }
    else {
      uVar2 = *(uint *)(DAT_012588e8 + 0xacc);
      iVar1 = *(int *)(*(int *)(uVar2 + *(int *)(param_1 + 0x18) * 4) + 0x188);
    }
    iVar1 = iVar1 + 200;
  }
  else {
    local_10 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(DAT_012587e4 + 4);
    iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0xc) * 4) + 0x12e8;
  }
LAB_008f769d:
  uVar3 = (ulonglong)uVar2 << 0x20;
  if (iVar1 != 0) {
    FUN_0096a0b0(iVar1,&local_10,*(undefined4 *)(in_ECX + 0x28),*(undefined4 *)(in_ECX + 0x2c));
    if ((local_c <= *(int *)(in_ECX + 0x24)) &&
       ((local_c < *(int *)(in_ECX + 0x24) || (local_10 < *(uint *)(in_ECX + 0x20))))) {
      return 0;
    }
    return 1;
  }
LAB_008f76ed:
  return uVar3 & 0xffffffffffffff00;
}

