// FUN_009a6230 @ 009a6230 body=[[009a6230, 009a6253]]


void FUN_009a6230(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  *(undefined1 *)(in_ECX + 0x18) = 1;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 4))();
  }
  return;
}

