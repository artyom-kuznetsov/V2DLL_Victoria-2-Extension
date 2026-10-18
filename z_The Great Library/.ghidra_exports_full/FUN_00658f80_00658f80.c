// FUN_00658f80 @ 00658f80 body=[[00658f80, 00658f8c] [00658f90, 00658fab]]


uint FUN_00658f80(void)

{
  undefined4 *puVar1;
  uint in_EAX;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1600);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return in_EAX & 0xffffff00;
    }
    in_EAX = (**(code **)(*(int *)*puVar1 + 4))();
    if (in_EAX == 0) break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  return 1;
}

