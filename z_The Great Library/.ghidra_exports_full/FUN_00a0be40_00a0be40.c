// FUN_00a0be40 @ 00a0be40 body=[[00a0be40, 00a0bebe]]


void FUN_00a0be40(undefined4 param_1)

{
  byte bVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x3c) + 4))(param_1);
  bVar1 = *(byte *)(in_ECX + 0x8c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

