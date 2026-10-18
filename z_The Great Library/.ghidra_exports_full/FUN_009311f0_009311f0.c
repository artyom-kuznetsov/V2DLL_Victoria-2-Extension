// FUN_009311f0 @ 009311f0 body=[[009311f0, 00931220]]


undefined4 FUN_009311f0(void)

{
  int in_EAX;
  
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4) + 0x31) != '\0') {
    return 1;
  }
  return *(undefined4 *)(in_EAX + 0x40);
}

