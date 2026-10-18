// FUN_0072c830 @ 0072c830 body=[[0072c830, 0072c920]]


void FUN_0072c830(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar2 = *(undefined4 *)(in_ECX + 0x58);
  FUN_009a0940(param_1);
  local_10c = 0xc;
  _sprintf(local_108,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x5c);
  FUN_009a0940(param_1);
  local_10c = 0xe;
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_108,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  local_114 = *(undefined4 *)(in_ECX + 100);
  local_110 = *(undefined4 *)(in_ECX + 0x68);
  FUN_0099f020(&local_114);
  FUN_004013e0(param_1);
  return;
}

