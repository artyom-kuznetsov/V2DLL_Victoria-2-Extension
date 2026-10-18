// FUN_009e6450 @ 009e6450 body=[[009e6450, 009e6497]]


void FUN_009e6450(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x68);
  *(undefined1 *)(in_ECX + 0x50) = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x84))(0);
  }
  for (puVar1 = *(undefined4 **)(in_ECX + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x84))(0);
  }
  return;
}

