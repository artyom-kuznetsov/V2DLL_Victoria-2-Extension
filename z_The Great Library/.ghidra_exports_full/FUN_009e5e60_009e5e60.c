// FUN_009e5e60 @ 009e5e60 body=[[009e5e60, 009e5eaa]]


void FUN_009e5e60(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x68);
  *(char *)(in_ECX + 0x54) = (char)param_1;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x98))(param_1);
  }
  for (puVar1 = *(undefined4 **)(in_ECX + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x98))(param_1);
  }
  return;
}

