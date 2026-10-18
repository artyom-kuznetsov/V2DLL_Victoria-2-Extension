// FUN_008af4b0 @ 008af4b0 body=[[008af4b0, 008af4d4]]


undefined4 FUN_008af4b0(void)

{
  int in_EAX;
  
  if (((*(int *)(in_EAX + 0x24) - *(int *)(in_EAX + 0x20) & 0xfffffffcU) == 0) &&
     ((*(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 8) & 0xfffffff0U) == 0)) {
    return 0;
  }
  return 1;
}

