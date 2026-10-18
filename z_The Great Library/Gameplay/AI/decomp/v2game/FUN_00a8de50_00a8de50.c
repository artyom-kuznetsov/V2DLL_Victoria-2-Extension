// FUN_00a8de50 @ 00a8de50 body=[[00a8de50, 00a8debc]]


void FUN_00a8de50(void)

{
  int in_EAX;
  int iVar1;
  
  *(undefined4 *)(in_EAX + 0x54) = 0;
  iVar1 = 0;
  do {
    if (*(char *)(in_EAX + 0x58 + iVar1) != '\0') {
      *(undefined1 *)(iVar1 + 0x158 + in_EAX) = *(undefined1 *)(in_EAX + 0x54);
      *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + 1;
    }
    if (*(char *)(in_EAX + 0x59 + iVar1) != '\0') {
      *(undefined1 *)(iVar1 + 0x159 + in_EAX) = *(undefined1 *)(in_EAX + 0x54);
      *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + 1;
    }
    if (*(char *)(in_EAX + 0x5a + iVar1) != '\0') {
      *(undefined1 *)(iVar1 + 0x15a + in_EAX) = *(undefined1 *)(in_EAX + 0x54);
      *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + 1;
    }
    if (*(char *)(in_EAX + 0x5b + iVar1) != '\0') {
      *(undefined1 *)(iVar1 + 0x15b + in_EAX) = *(undefined1 *)(in_EAX + 0x54);
      *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x100);
  return;
}

