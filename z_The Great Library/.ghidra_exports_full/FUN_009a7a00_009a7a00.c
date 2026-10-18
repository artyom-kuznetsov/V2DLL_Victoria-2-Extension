// FUN_009a7a00 @ 009a7a00 body=[[009a7a00, 009a7a1a]]


void FUN_009a7a00(void)

{
  undefined4 *puVar1;
  int in_EAX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x10))();
  }
  return;
}

