// FUN_0090d7e0 @ 0090d7e0 body=[[0090d7e0, 0090d871] [0090d875, 0090d95d]]


/* WARNING: Removing unreachable block (ram,0x0090d868) */

void FUN_0090d7e0(int param_1)

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
  pcVar3 = (char *)(in_ECX + 0x10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350((char *)(in_ECX + 0x10),(int)pcVar3 - (in_ECX + 0x11));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  uVar2 = *(undefined4 *)(in_ECX + 0xc);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_21c,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x18);
  FUN_009a0940(param_1);
  local_11c = 0xe;
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_118,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  ExceptionList = local_14;
  return;
}

