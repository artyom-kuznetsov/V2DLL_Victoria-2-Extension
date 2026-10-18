// FUN_004d02e0 @ 004d02e0 body=[[004d02e0, 004d0316]]


void FUN_004d02e0(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x60);
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    iVar1 = *(int *)(iVar1 + 0x224);
  }
  *(int *)(iVar1 + 0x17c) = (*(int *)(*(int *)(iVar1 + 0x18) + 0xb8) * 1000) / 1000;
  return;
}

