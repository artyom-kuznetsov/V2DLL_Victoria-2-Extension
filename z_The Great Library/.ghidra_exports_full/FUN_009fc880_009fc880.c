// FUN_009fc880 @ 009fc880 body=[[009fc880, 009fc90d]]


void FUN_009fc880(undefined4 param_1)

{
  byte bVar1;
  int in_ECX;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  local_114 = *(undefined4 *)(in_ECX + 0x44);
  local_110 = *(undefined4 *)(in_ECX + 0x48);
  FUN_0099f020(&local_114);
  FUN_004013e0(param_1);
  bVar1 = *(byte *)(in_ECX + 0x3c);
  FUN_009a0940(param_1);
  local_10c = 0xc;
  _sprintf(local_108,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

