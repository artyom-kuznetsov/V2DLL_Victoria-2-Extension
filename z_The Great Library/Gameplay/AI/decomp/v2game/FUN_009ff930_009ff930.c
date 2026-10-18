// FUN_009ff930 @ 009ff930 body=[[009ff930, 009ffa3c]]


void FUN_009ff930(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  local_114 = *(undefined4 *)(in_ECX + 0x4c);
  local_110 = *(undefined4 *)(in_ECX + 0x50);
  FUN_0099f020(&local_114);
  FUN_004013e0(param_1);
  bVar1 = *(byte *)(in_ECX + 0x3c);
  FUN_009a0940(param_1);
  local_10c = 0xc;
  _sprintf(local_108,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x44);
  FUN_009a0940(param_1);
  local_10c = 0x14;
  _sprintf(local_108,"%u",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  bVar1 = *(byte *)(in_ECX + 0x40);
  FUN_009a0940(param_1);
  local_10c = 0xc;
  _sprintf(local_108,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

