// FUN_00857430 @ 00857430 body=[[00857430, 0085752f]]


int FUN_00857430(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8897b;
  local_14 = ExceptionList;
  local_1c = -10000;
  local_20 = 0;
  ExceptionList = &local_14;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af(0x3c);
    local_c = 2;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004dada0();
    }
    local_c = 0xffffffff;
    FUN_004dc340(uVar4);
  }
  iVar3 = DAT_0125ce80;
  local_24 = 0;
  iVar6 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
  if (0 < iVar6) {
    do {
      iVar1 = local_24 * 4;
      cVar2 = (**(code **)(**(int **)(iVar1 + *(int *)(iVar3 + 0xc)) + 0x24))();
      if (cVar2 != '\0') {
        iVar5 = FUN_008571a0(*(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar1),param_1);
        if ((local_20 == 0) || (local_1c < iVar5)) {
          local_20 = *(int *)(iVar1 + *(int *)(iVar3 + 0xc));
          local_1c = iVar5;
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < iVar6);
    ExceptionList = local_14;
    return local_20;
  }
  ExceptionList = local_14;
  return 0;
}

