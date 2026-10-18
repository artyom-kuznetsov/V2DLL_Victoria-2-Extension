// FUN_0076cbe0 @ 0076cbe0 body=[[0076cbe0, 0076cc19]]


void FUN_0076cbe0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x278) + 0x18) + 0x38))();
  FUN_00758180();
  for (puVar1 = *(undefined4 **)(in_ECX + 0x314); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x38))();
  }
  return;
}

