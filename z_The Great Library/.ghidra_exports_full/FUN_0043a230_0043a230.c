// FUN_0043a230 @ 0043a230 body=[[0043a230, 0043a439]]


void FUN_0043a230(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  char local_108 [260];
  
  FUN_009a0940(param_1);
  _sprintf(local_108,"%lld",*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_0043a9a0(in_ECX + 0x18);
  FUN_0043a9a0(in_ECX + 0x28 + DAT_012586e4 * 0x10);
  puVar1 = (undefined4 *)(in_ECX + 0x48 + DAT_012586e4 * 8);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%lld",*puVar1,puVar1[1]);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%lld",*(undefined4 *)(in_ECX + 0x60),*(undefined4 *)(in_ECX + 100));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%lld",*(undefined4 *)(in_ECX + 0x68),*(undefined4 *)(in_ECX + 0x6c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x70);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x74);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

