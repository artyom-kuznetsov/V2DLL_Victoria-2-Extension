// FUN_00593400 @ 00593400 body=[[00593400, 005934d7]]


void FUN_00593400(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 0x58);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_004013e0(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 8) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x48) + 4))(param_1);
  return;
}

