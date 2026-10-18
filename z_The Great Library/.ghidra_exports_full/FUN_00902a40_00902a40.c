// FUN_00902a40 @ 00902a40 body=[[00902a40, 00902cf6]]


char FUN_00902a40(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b47026;
  local_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  local_28 = 0x7fffffff;
  if (*(int *)(in_ECX + 0x20) == 0) {
    ExceptionList = &local_14;
    if (DAT_0125ce80 == 0) {
      ExceptionList = &local_14;
      iVar4 = FUN_00aae9af(0x3c);
      local_c = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004dada0();
      }
      local_c = 0xffffffff;
      FUN_004dc340(uVar5);
    }
    iVar4 = *(int *)(DAT_0125ce80 + 0x34);
  }
  else {
    ExceptionList = &local_14;
    if (DAT_0125ce80 == 0) {
      ExceptionList = &local_14;
      iVar4 = FUN_00aae9af(0x3c);
      local_c = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004dada0();
      }
      local_c = 0xffffffff;
      FUN_004dc340(uVar5);
    }
    iVar4 = *(int *)(DAT_0125ce80 + 0x38);
  }
  bVar8 = *(char *)(iVar1 + 0x12d0) == '\0';
  if (*(char *)(in_ECX + 0x1d) != '\0') {
    piVar6 = *(int **)(DAT_012588e8 + 0xadc);
    iVar7 = 0;
    while ((*(int **)(DAT_012588e8 + 0xadc) <= piVar6 && (piVar6 < *(int **)(DAT_012588e8 + 0xae0)))
          ) {
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
      if ((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
         ((((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
           (*(char *)(iVar2 + 0x1e) != 'B')) &&
          ((*(int *)(iVar2 + 0x20) != 0 &&
           (iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0xbcc) + 8) + *(int *)(iVar4 + 0x58) * 4),
           iVar7 < iVar2)))))) {
        iVar7 = iVar2;
      }
    }
    if (0 < iVar7) {
      local_28 = iVar7;
    }
  }
  iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4);
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    cVar3 = FUN_00511ef0(iVar1,iVar7,0,bVar8,0,bVar8,bVar8);
    if (((cVar3 != '\0') && (*(char *)(iVar4 + 0x131) != '\0')) &&
       ((iVar1 = *(int *)(*(int *)(iVar7 + 0x118) + *(int *)(iVar4 + 0x134) * 4), iVar1 != 0 &&
        (local_28 <= *(int *)(iVar1 + 0x20) / 1000)))) {
      ExceptionList = local_14;
      return '\0';
    }
    ExceptionList = local_14;
    return cVar3;
  }
  iVar7 = *(int *)(iVar7 + 0x188);
  piVar6 = *(int **)(iVar7 + 0x48);
  while( true ) {
    do {
      if (piVar6 < *(int **)(iVar7 + 0x48)) {
        ExceptionList = local_14;
        return '\0';
      }
      if (*(int **)(iVar7 + 0x4c) <= piVar6) {
        ExceptionList = local_14;
        return '\0';
      }
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4);
      piVar6 = piVar6 + 1;
      cVar3 = FUN_00511ef0(iVar1,iVar2,0,bVar8,0,bVar8,bVar8);
    } while (cVar3 == '\0');
    if (*(char *)(iVar4 + 0x131) == '\0') {
      ExceptionList = local_14;
      return '\x01';
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x118) + *(int *)(iVar4 + 0x134) * 4);
    if (iVar2 == 0) break;
    if (*(int *)(iVar2 + 0x20) / 1000 < local_28) {
      ExceptionList = local_14;
      return '\x01';
    }
  }
  ExceptionList = local_14;
  return '\x01';
}

