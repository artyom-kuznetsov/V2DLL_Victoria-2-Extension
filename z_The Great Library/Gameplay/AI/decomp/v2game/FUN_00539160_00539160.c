// FUN_00539160 @ 00539160 body=[[00539160, 00539182]]


undefined4 FUN_00539160(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_EAX + 0x154) - *(int *)(in_EAX + 0x150) >> 2 < *(int *)(in_ECX + 0x24)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_EAX + 0x150) + *(int *)(in_ECX + 0x24) * 4);
}

