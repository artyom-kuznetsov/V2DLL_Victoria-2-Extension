// FUN_00a8dda0 @ 00a8dda0 body=[[00a8dda0, 00a8ddda]]


void FUN_00a8dda0(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x25c);
  while (0 < iVar1) {
    *(undefined1 *)(*(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x4c)) =
         *(undefined1 *)(in_EAX + 0x25b);
    *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) + 1;
    *(int *)(in_EAX + 600) = *(int *)(in_EAX + 600) << 8;
    *(int *)(in_EAX + 0x25c) = *(int *)(in_EAX + 0x25c) + -8;
    iVar1 = *(int *)(in_EAX + 0x25c);
  }
  return;
}

