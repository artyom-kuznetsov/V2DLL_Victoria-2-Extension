// FUN_004a0fa0 @ 004a0fa0 body=[[004a0fa0, 004a0fe1]]


void FUN_004a0fa0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  *(undefined4 *)(in_EAX + 0x2aac) = in_EDX;
  if (0 < (int)(*(int *)(in_EAX + 0x223c) - *(int *)(in_EAX + 0x2238) & 0xfffffffcU)) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(*(int *)(in_EAX + 0x2238) + iVar1 * 4) + 0x54) = in_EDX;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_EAX + 0x223c) - *(int *)(in_EAX + 0x2238) >> 2);
  }
  return;
}

