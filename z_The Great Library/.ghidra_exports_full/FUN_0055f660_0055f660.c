// FUN_0055f660 @ 0055f660 body=[[0055f660, 0055f67c]]


undefined4 FUN_0055f660(void)

{
  int in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX < *(int *)(in_EAX + 0x10) - *(int *)(in_EAX + 0xc) >> 2) {
    return *(undefined4 *)(*(int *)(in_EAX + 0xc) + in_ECX * 4);
  }
  uVar1 = FUN_00561180();
  return uVar1;
}

