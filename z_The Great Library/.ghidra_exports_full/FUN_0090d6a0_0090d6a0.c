// FUN_0090d6a0 @ 0090d6a0 body=[[0090d6a0, 0090d6b9]]


undefined4 FUN_0090d6a0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_ECX < *(int *)(in_EAX + 0x10) - *(int *)(in_EAX + 0xc) >> 2) {
    return *(undefined4 *)(*(int *)(in_EAX + 0xc) + in_ECX * 4);
  }
  return **(undefined4 **)(in_EAX + 0xc);
}

