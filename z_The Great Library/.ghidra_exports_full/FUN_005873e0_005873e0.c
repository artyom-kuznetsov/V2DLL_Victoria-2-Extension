// FUN_005873e0 @ 005873e0 body=[[005873e0, 005874d5] [005874d9, 00587536]]


/* WARNING: Removing unreachable block (ram,0x005874cc) */

void FUN_005873e0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a2520(param_1);
  FUN_009a0940(param_1);
  _sprintf(local_21c,"%lld",*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  pcVar3 = (char *)(in_ECX + 0x4c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x4c),(int)pcVar3 - (in_ECX + 0x4d));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  uVar2 = *(undefined4 *)(in_ECX + 0x48);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = local_14;
  return;
}

