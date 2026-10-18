// FUN_00539130 @ 00539130 body=[[00539130, 00539152]]


undefined4 FUN_00539130(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_EAX + 0x144) - *(int *)(in_EAX + 0x140) >> 2 < *(int *)(in_ECX + 0x24)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_EAX + 0x140) + *(int *)(in_ECX + 0x24) * 4);
}

