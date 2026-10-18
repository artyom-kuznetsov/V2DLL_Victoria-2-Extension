// FUN_009024c0 @ 009024c0 body=[[009024c0, 00902584]]


undefined4 FUN_009024c0(void)

{
  int iVar1;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0xc) != 0) {
    return *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4);
  }
  if (*(int *)(in_EAX + 0x30) != 0) {
    return *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x30) * 4);
  }
  if (*(int *)(in_EAX + 0x10) < 1) {
    if ((0 < *(int *)(in_EAX + 0x34)) &&
       (iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0x34) * 4),
       *(int *)(iVar1 + 300) != 0)) {
      return *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0x10) * 4);
    if (*(int *)(iVar1 + 300) != 0) {
      return *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4);
    }
  }
  return 0;
}

