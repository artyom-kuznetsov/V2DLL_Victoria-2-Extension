// FUN_0050d510 @ 0050d510 body=[[0050d510, 0050d53d]]


undefined4 FUN_0050d510(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (*(int *)(in_EAX + 0x156c) == 0) {
    return 0;
  }
  uVar1 = FUN_0050d540(*(undefined4 *)(*(int *)(in_EAX + 0x156c) + 8),
                       *(int *)(in_EAX + 0x156c) + 0x10,
                       *(undefined4 *)(*(int *)(in_EAX + 0x156c) + 0xc));
  return uVar1;
}

