// FUN_004b8870 @ 004b8870 body=[[004b8870, 004b897b]]


void FUN_004b8870(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9fb7b;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar3);
  }
  iVar2 = DAT_0131bb34;
  piVar6 = (int *)(DAT_0131bb34 + 0xc);
  iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  iVar7 = 1;
  if (1 < iVar5) {
    local_18 = 0x10;
    do {
      if (*(int *)(iVar2 + 0x10) - *piVar6 >> 2 < iVar7) {
        iVar4 = FUN_0096bb70();
      }
      else {
        iVar4 = *(int *)(*piVar6 + iVar7 * 4);
      }
      if (*(char *)(iVar4 + 0x42) != '\0') {
        iVar4 = *(int *)(local_18 + *(int *)(param_1 + 0x194));
        while (iVar4 != 0) {
          iVar1 = *(int *)(iVar4 + 0x27c);
          iVar4 = FUN_00965870(iVar4,0);
          local_14 = local_14 + iVar4;
          iVar4 = iVar1;
        }
      }
      local_18 = local_18 + 0x10;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
    *(int *)(param_1 + 0x50) = local_14;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  ExceptionList = local_10;
  return;
}

