// FUN_004d0050 @ 004d0050 body=[[004d0050, 004d0066]]


undefined4 FUN_004d0050(void)

{
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) & 0xfffffffcU) == 0) {
    return 0;
  }
  return **(undefined4 **)(in_EAX + 0x48);
}

