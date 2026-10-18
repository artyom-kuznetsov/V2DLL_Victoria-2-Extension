// FUN_004b85e0 @ 004b85e0 body=[[004b85e0, 004b871d]]


undefined4 FUN_004b85e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_28;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_14;
    iVar2 = FUN_00aae9af(0x188);
    local_c = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_c = 0xffffffff;
    FUN_00423700(uVar3);
  }
  iVar2 = DAT_0131bb34;
  piVar8 = (int *)(DAT_0131bb34 + 0xc);
  iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_20 = 1;
  if (1 < iVar7) {
    local_28 = 0x10;
    do {
      if (*(int *)(iVar2 + 0x10) - *piVar8 >> 2 < local_20) {
        iVar4 = FUN_0096bb70();
      }
      else {
        iVar4 = *(int *)(*piVar8 + local_20 * 4);
      }
      if (*(char *)(iVar4 + 0x42) != '\0') {
        iVar4 = *(int *)(local_28 + *(int *)(param_1 + 0x194));
        while (iVar4 != 0) {
          iVar1 = *(int *)(iVar4 + 0x27c);
          iVar5 = FUN_00965870(iVar4,0);
          iVar6 = FUN_00965930(0);
          if ((iVar5 * 1000 < 0) || (iVar4 = iVar1, iVar5 * 1000 < iVar6 * 1000)) {
            ExceptionList = local_14;
            return 1;
          }
        }
      }
      local_28 = local_28 + 0x10;
      local_20 = local_20 + 1;
    } while (local_20 < iVar7);
  }
  ExceptionList = local_14;
  return 0;
}

