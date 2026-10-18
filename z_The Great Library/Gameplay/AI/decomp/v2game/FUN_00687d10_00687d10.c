// FUN_00687d10 @ 00687d10 body=[[00687d10, 00687db8] [00687dc0, 00687e22]]


void FUN_00687d10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004dada0();
    }
    FUN_004dc340(uVar3);
  }
  iVar2 = DAT_0125ce80;
  iVar5 = 0;
  iVar4 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
  if (0 < iVar4) {
    do {
      iVar7 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar7) + 0xe4) = 0;
    } while (iVar5 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2;
  iVar5 = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          iVar1 = *(int *)(*(int *)(iVar2 + 0x1c) + iVar6 * 4);
          if ((*(char *)(iVar1 + 0x131) != '\0') &&
             (DAT_0125ceac <
              *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xacc) + iVar7 * 4) + 0x118) +
                               *(int *)(iVar1 + 0x134) * 4) + 0x20))) {
            *(int *)(iVar1 + 0xe4) = *(int *)(iVar1 + 0xe4) + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  ExceptionList = local_10;
  return;
}

