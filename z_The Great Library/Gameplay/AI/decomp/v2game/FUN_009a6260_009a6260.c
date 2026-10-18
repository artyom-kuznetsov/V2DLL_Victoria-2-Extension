// FUN_009a6260 @ 009a6260 body=[[009a6260, 009a6283]]


void FUN_009a6260(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  *(undefined1 *)(in_ECX + 0x18) = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 8))();
  }
  return;
}

