// FUN_0087a690 @ 0087a690 body=[[0087a690, 0087a6bb]]


void FUN_0087a690(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x2c))(param_1,param_2);
  }
  return;
}

