// FUN_00906d60 @ 00906d60 body=[[00906d60, 00906dda]]


void FUN_00906d60(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x3c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x40) + 4))(param_1);
  return;
}

