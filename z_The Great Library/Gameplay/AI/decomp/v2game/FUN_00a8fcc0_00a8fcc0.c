// FUN_00a8fcc0 @ 00a8fcc0 body=[[00a8fcc0, 00a8fcf8]]


void FUN_00a8fcc0(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(in_EAX + 0xc68) = 0;
  do {
    if (*(char *)(in_EAX + 0xc6c + iVar1) != '\0') {
      *(char *)(in_EAX + 0xd7c + *(int *)(in_EAX + 0xc68)) = (char)iVar1;
      *(int *)(in_EAX + 0xc68) = *(int *)(in_EAX + 0xc68) + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return;
}

