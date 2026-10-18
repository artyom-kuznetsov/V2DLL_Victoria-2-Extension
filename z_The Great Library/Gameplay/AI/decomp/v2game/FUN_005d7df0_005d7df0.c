// FUN_005d7df0 @ 005d7df0 body=[[005d7df0, 005d7e1e]]


void FUN_005d7df0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x1a4);
  *(undefined4 *)(in_ECX + 0x108) = param_1;
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x6c))(param_1);
  }
  return;
}

