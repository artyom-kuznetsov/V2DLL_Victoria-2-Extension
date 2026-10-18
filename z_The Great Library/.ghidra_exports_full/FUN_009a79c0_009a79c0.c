// FUN_009a79c0 @ 009a79c0 body=[[009a79c0, 009a79d9]]


void FUN_009a79c0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 8))();
  }
  return;
}

