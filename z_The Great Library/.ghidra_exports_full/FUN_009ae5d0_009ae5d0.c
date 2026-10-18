// FUN_009ae5d0 @ 009ae5d0 body=[[009ae5d0, 009ae5ea]]


void FUN_009ae5d0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 4))();
  }
  return;
}

