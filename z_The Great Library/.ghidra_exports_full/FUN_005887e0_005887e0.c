// FUN_005887e0 @ 005887e0 body=[[005887e0, 00588901] [00588905, 0058891b]]


/* WARNING: Removing unreachable block (ram,0x005888f8) */

void FUN_005887e0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a2520(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x44);
  FUN_009a0940(param_1);
  _sprintf(local_118,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(local_118,"%lld",*(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  pcVar3 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar3 - (in_ECX + 0x3d));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  ExceptionList = local_14;
  return;
}

