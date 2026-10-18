// FUN_009fa3f0 @ 009fa3f0 body=[[009fa3f0, 009fa45e]]


void FUN_009fa3f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 uStack_10;
  
  *(undefined4 *)(in_ECX + 0x24) = param_1;
  if (*(int *)(in_ECX + -0x20) != 0) {
    FUN_00a87850(*(int *)(in_ECX + -0x20),CONCAT44(uStack_10,in_ECX + -0x7c),0x9fa370);
  }
  FUN_009a8bc0();
  for (puVar1 = *(undefined4 **)(in_ECX + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 4))();
  }
  return;
}

