// FUN_008a8d90 @ 008a8d90 body=[[008a8d90, 008a8db8]]


void FUN_008a8d90(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_EAX == 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    return;
  }
  if ((*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) & 0xfffffffcU) == 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = **(undefined4 **)(in_EAX + 0x48);
  return;
}

