// FUN_009a7a20 @ 009a7a20 body=[[009a7a20, 009a7a3a]]


void FUN_009a7a20(void)

{
  undefined4 *puVar1;
  int in_EAX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x18))();
  }
  return;
}

