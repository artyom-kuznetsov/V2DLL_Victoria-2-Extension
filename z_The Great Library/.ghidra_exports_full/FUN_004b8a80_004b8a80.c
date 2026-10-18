// FUN_004b8a80 @ 004b8a80 body=[[004b8a80, 004b8a94]]


undefined4 FUN_004b8a80(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x164) != 0) {
    return **(undefined4 **)(in_EAX + 0x15c);
  }
  return 0;
}

