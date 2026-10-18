// FUN_004b8720 @ 004b8720 body=[[004b8720, 004b87f9] [004b8800, 004b8860]]


void FUN_004b8720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_20 = 0;
  if (DAT_0131bb34 == 0) {
    iVar1 = FUN_00aae9af(0x188);
    local_c = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_c = 0xffffffff;
    FUN_00423700(uVar2);
  }
  iVar1 = DAT_0131bb34;
  piVar6 = (int *)(DAT_0131bb34 + 0xc);
  iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  iVar7 = 1;
  if (1 < iVar5) {
    local_24 = 0x10;
    do {
      *(int *)(param_1 + 0x24) =
           *(int *)(param_1 + 0x24) + *(int *)(local_24 + 8 + *(int *)(param_1 + 0x194));
      if (*(int *)(iVar1 + 0x10) - *piVar6 >> 2 < iVar7) {
        iVar3 = FUN_0096bb70();
      }
      else {
        iVar3 = *(int *)(*piVar6 + iVar7 * 4);
      }
      if (*(char *)(iVar3 + 0x42) != '\0') {
        iVar3 = *(int *)(local_24 + *(int *)(param_1 + 0x194));
        while (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 0x27c);
          iVar4 = FUN_00965930(0);
          local_20 = local_20 + iVar4;
        }
      }
      local_24 = local_24 + 0x10;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
    *(int *)(param_1 + 0x4c) = local_20;
    ExceptionList = local_14;
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  ExceptionList = local_14;
  return;
}

