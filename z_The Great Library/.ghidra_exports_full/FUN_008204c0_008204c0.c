// FUN_008204c0 @ 008204c0 body=[[008204c0, 008205b5]]


int FUN_008204c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  param_1 = 0;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004dada0();
    }
    FUN_004dc340(uVar4);
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x34) * 4);
  piVar2 = *(int **)(iVar1 + 0x9d8);
  piVar6 = piVar2;
  while ((piVar2 <= piVar6 && (piVar6 < *(int **)(iVar1 + 0x9dc)))) {
    iVar3 = *piVar6;
    iVar5 = 0;
    piVar6 = piVar6 + 1;
    if ((*(char *)(*(int *)(DAT_0125ce80 + 0x30) + 0x131) != '\0') &&
       (iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 0x118) +
                        *(int *)(*(int *)(DAT_0125ce80 + 0x30) + 0x134) * 4),
       DAT_0125ceac < *(int *)(iVar3 + 0x20))) {
      iVar5 = *(int *)(iVar3 + 0x24) / 1000;
    }
    if (param_1 < iVar5) {
      param_1 = iVar5;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

