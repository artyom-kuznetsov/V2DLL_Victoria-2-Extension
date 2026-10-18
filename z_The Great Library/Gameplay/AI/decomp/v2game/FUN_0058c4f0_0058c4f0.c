// FUN_0058c4f0 @ 0058c4f0 body=[[0058c4f0, 0058c591] [0058c595, 0058c6da]]


/* WARNING: Removing unreachable block (ram,0x0058c588) */

void FUN_0058c4f0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
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
  pcVar3 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar3 - (in_ECX + 0x3d));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  FUN_009a0940(param_1);
  _sprintf(local_21c,"%lld",*(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x50);
  FUN_009a0940(param_1);
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_21c,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x44);
  FUN_009a0940(param_1);
  _sprintf(local_21c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x51);
  FUN_009a0940(param_1);
  local_11c = 0xe;
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_118,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = local_14;
  return;
}

