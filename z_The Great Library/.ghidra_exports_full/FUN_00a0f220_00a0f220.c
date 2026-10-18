// FUN_00a0f220 @ 00a0f220 body=[[00a0f220, 00a0f31b]]


void FUN_00a0f220(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  bVar1 = *(byte *)(in_ECX + 0x78);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)bVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x74);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_00a122d0(0xeb,in_ECX + 0x98);
  return;
}

