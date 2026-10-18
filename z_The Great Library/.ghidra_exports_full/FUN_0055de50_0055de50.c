// FUN_0055de50 @ 0055de50 body=[[0055de50, 0055dedf] [0055dee3, 0055dfeb]]


/* WARNING: Removing unreachable block (ram,0x0055ded6) */

void FUN_0055de50(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
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
  pcVar2 = (char *)(in_ECX + 8);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar2 - (in_ECX + 9));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  FUN_009a0940(param_1);
  _sprintf(local_21c,"%lld",*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(local_21c,"%lld",*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x20);
  FUN_009a0940(param_1);
  local_11c = 0xe;
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_118,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = local_14;
  return;
}

