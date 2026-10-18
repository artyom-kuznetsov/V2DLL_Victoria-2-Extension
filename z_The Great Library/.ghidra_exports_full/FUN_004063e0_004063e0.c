// FUN_004063e0 @ 004063e0 body=[[004063e0, 0040649c]]


void FUN_004063e0(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10) & 0xfffffffcU)) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(in_EAX + 0x10) + iVar1 * 4) + 0x164) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10) >> 2);
  }
  if (0 < (int)(*(int *)(in_EAX + 0x24) - *(int *)(in_EAX + 0x20) & 0xfffffffcU)) {
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)(*(int *)(in_EAX + 0x20) + iVar1 * 4) + 0x164) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_EAX + 0x24) - *(int *)(in_EAX + 0x20) >> 2);
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0x34) - *(int *)(in_EAX + 0x30) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(in_EAX + 0x30) + iVar1 * 4) != 0) {
        *(undefined1 *)(*(int *)(*(int *)(in_EAX + 0x30) + iVar1 * 4) + 0x1c4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_EAX + 0x34) - *(int *)(in_EAX + 0x30) >> 2);
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x40) & 0xfffffffcU)) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(in_EAX + 0x40) + iVar1 * 4) + 0x1c4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x40) >> 2);
  }
  return;
}

