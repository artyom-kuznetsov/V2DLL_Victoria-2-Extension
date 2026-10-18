// FUN_00a8dde0 @ 00a8dde0 body=[[00a8dde0, 00a8ddf6] [00a8de00, 00a8de4e]]


void FUN_00a8dde0(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_EAX + 0x25c);
  while (7 < iVar1) {
    *(undefined1 *)(*(int *)(in_EAX + 0x2c) + *(int *)(in_EAX + 0x4c)) =
         *(undefined1 *)(in_EAX + 0x25b);
    *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) + 1;
    *(int *)(in_EAX + 600) = *(int *)(in_EAX + 600) << 8;
    *(int *)(in_EAX + 0x25c) = *(int *)(in_EAX + 0x25c) + -8;
    iVar1 = *(int *)(in_EAX + 0x25c);
  }
  *(uint *)(in_EAX + 600) =
       *(uint *)(in_EAX + 600) |
       in_ECX << ((' ' - (char)*(int *)(in_EAX + 0x25c)) - (char)param_1 & 0x1fU);
  *(int *)(in_EAX + 0x25c) = *(int *)(in_EAX + 0x25c) + param_1;
  return;
}

