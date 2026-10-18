// FUN_004bcb90 @ 004bcb90 body=[[004bcb90, 004bcbf9] [004bcc00, 004bcc3e]]


int FUN_004bcb90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar5 = 0;
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
    FUN_00423700(uVar3);
  }
  local_14 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (0 < local_14) {
    iVar2 = 0;
    do {
      for (iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x194)); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 0x27c)) {
        iVar4 = FUN_0095dec0(iVar1);
        iVar5 = iVar5 + iVar4;
      }
      iVar2 = iVar2 + 0x10;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  ExceptionList = local_10;
  return iVar5;
}

