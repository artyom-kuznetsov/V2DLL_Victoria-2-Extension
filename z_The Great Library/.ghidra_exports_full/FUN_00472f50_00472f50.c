// FUN_00472f50 @ 00472f50 body=[[00472f50, 00472ff1] [00472ff5, 004730a4]]


/* WARNING: Removing unreachable block (ram,0x00472fe8) */

void FUN_00472f50(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(in_ECX + 0x14) != 0) {
    pcVar3 = (char *)(in_ECX + 0x10);
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    ExceptionList = &pvStack_14;
    FUN_00409350((char *)(in_ECX + 0x10),(int)pcVar3 - (in_ECX + 0x11));
    local_c = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  local_c = 0xffffffff;
  if ((*(int *)(in_ECX + 0xc) != 0) &&
     (cVar2 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x34))(), cVar2 != '\0')) {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  if (*(int *)(in_ECX + 0x18) != 0 || *(int *)(in_ECX + 0x1c) != 0) {
    FUN_0099f310();
  }
  iVar1 = *(int *)(in_ECX + 0x28);
  if (iVar1 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_118,"%u",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(int *)(in_ECX + 0x20) != 0 || *(int *)(in_ECX + 0x24) != 0) {
    FUN_0099f310();
  }
  ExceptionList = pvStack_14;
  return;
}

