// FUN_00860c10 @ 00860c10 body=[[00860c10, 00860cb0]]


void FUN_00860c10(undefined4 param_1)

{
  int in_ECX;
  
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x60) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 8) + 4))(param_1);
  FUN_009a0940(param_1);
  _sprintf(&stack0xfffffef0,"%lld",*(undefined4 *)(in_ECX + 0xb8),*(undefined4 *)(in_ECX + 0xbc));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

