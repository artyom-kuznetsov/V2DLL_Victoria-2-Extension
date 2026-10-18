// FUN_00a04880 @ 00a04880 body=[[00a04880, 00a048eb]]


void FUN_00a04880(undefined4 param_1)

{
  byte bVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  FUN_00a12420(in_ECX + 0x3c);
  bVar1 = *(byte *)(in_ECX + 0x4c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

