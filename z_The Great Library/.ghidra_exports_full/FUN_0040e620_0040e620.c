// FUN_0040e620 @ 0040e620 body=[[0040e620, 0040e685]]


void FUN_0040e620(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  if (*(int *)(in_EAX + 0x394) != 0) {
    FUN_00405970(*(int *)(in_EAX + 0x394),in_ECX);
  }
  FUN_00412940(in_EAX);
  FUN_0040d870();
  *(undefined1 *)(in_EAX + 0x39c) = 0;
  *(undefined4 *)(in_EAX + 0x394) = 0;
  *(undefined4 *)(in_EAX + 0x34c) = 2;
  FUN_0040d870();
  FUN_0040f040(in_EAX);
  FUN_0040f740();
  FUN_0040f4d0();
  return;
}

