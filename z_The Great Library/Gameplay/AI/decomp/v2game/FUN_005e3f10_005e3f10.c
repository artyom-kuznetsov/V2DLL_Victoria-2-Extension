// FUN_005e3f10 @ 005e3f10 body=[[005e3f10, 005e3fe8]]


void FUN_005e3f10(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a0940(param_1);
  local_114 = *(undefined4 *)(in_ECX + 0x40);
  local_110 = *(undefined4 *)(in_ECX + 0x44);
  FUN_0099f020(&local_114);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  local_114 = *(undefined4 *)(in_ECX + 0x68);
  local_110 = *(undefined4 *)(in_ECX + 0x6c);
  FUN_0099f020(&local_114);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x8c);
  FUN_009a0940(param_1);
  local_10c = 0xc;
  _sprintf(local_108,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x90);
  FUN_009a2520(param_1);
  return;
}

