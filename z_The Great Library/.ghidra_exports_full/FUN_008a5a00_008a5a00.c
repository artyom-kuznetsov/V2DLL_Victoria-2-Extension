// FUN_008a5a00 @ 008a5a00 body=[[008a5a00, 008a5ab2]]


void FUN_008a5a00(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_108 [260];
  
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%u",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x54);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0xc) + 4))(param_1);
  return;
}

