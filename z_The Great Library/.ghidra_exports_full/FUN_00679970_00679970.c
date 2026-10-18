// FUN_00679970 @ 00679970 body=[[00679970, 006799c7]]


void FUN_00679970(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  if (0x1c < (int)(*(int *)(in_EAX + 0xd84) - *(int *)(in_EAX + 0xd80) & 0xfffffffcU)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 0xd80) + 0x1c) + 0x1c))();
    if ((cVar2 != '\0') &&
       (iVar1 = *(int *)(*(int *)(*(int *)(in_EAX + 0xd80) + 0x1c) + 0x70), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 0x160) = 1;
    }
  }
  if ((*(int *)(in_EAX + 0x1d08) != 0) &&
     (iVar1 = *(int *)(*(int *)(in_EAX + 0x1d08) + 0x2c), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x160) = 1;
  }
  return;
}

