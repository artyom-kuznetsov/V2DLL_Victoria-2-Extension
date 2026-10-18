// FUN_009a79e0 @ 009a79e0 body=[[009a79e0, 009a79f9]]


void FUN_009a79e0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0xc))();
  }
  return;
}

