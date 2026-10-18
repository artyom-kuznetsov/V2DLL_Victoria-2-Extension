// FUN_009b3e40 @ 009b3e40 body=[[009b3e40, 009b3e84]]


void FUN_009b3e40(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x38))();
  }
  if (*(int **)(in_ECX + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x80))();
  }
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  for (puVar1 = *(undefined4 **)(in_ECX + 0x5c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x10))();
  }
  return;
}

