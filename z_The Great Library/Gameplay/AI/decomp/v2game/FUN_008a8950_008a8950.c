// FUN_008a8950 @ 008a8950 body=[[008a8950, 008a89f1] [008a89f5, 008a8ab1] [008a8ab5, 008a8bf0]]


/* WARNING: Removing unreachable block (ram,0x008a8aa8) */
/* WARNING: Removing unreachable block (ram,0x008a89e8) */

void FUN_008a8950(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  int in_ECX;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  char local_21c [256];
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e466;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(in_ECX + 0xc) != 0) {
    pcVar4 = (char *)(in_ECX + 8);
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    ExceptionList = &pvStack_14;
    FUN_00409350((char *)(in_ECX + 8),(int)pcVar4 - (in_ECX + 9));
    local_c = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  local_c = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    FUN_009a0940(param_1);
    local_220 = 0xc;
    _sprintf(local_21c,"%d",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    pcVar4 = (char *)(in_ECX + 0x2c);
    do {
      cVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    FUN_00409350((char *)(in_ECX + 0x2c),(int)pcVar4 - (in_ECX + 0x2d));
    local_c = 1;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_c = 0xffffffff;
  }
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    FUN_009a0940(param_1);
    local_220 = 0xc;
    _sprintf(local_21c,"%d",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) != 0) || (*(int *)(in_ECX + 0x3c) != 0)) {
    FUN_009a0940(param_1);
    FUN_0099f020(in_ECX + 0x38);
  }
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    FUN_009a0940(param_1);
    local_220 = 0xc;
    _sprintf(local_21c,"%d",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if ((*(int *)(in_ECX + 0x14) != 0) &&
     (cVar3 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x20))(), cVar3 != '\0')) {
    uStack_228 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 8);
    uStack_224 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(&uStack_228);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x20);
  FUN_009a0940(param_1);
  uStack_11c = 0xc;
  _sprintf(acStack_118,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = pvStack_14;
  return;
}

