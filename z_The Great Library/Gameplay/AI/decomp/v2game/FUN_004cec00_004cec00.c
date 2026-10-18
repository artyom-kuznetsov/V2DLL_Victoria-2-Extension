// FUN_004cec00 @ 004cec00 body=[[004cec00, 004cec99] [004ceca0, 004cecd8]]


void FUN_004cec00(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  param_1 = *(undefined4 *)(param_2 + 0x58);
  ExceptionList = &local_10;
  FUN_004be200();
  if (DAT_0131bb34 == 0) {
    param_1 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar3);
  }
  param_1 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (0 < param_1) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_2 + 0x194));
      while (iVar2 != 0) {
        local_14 = *(undefined4 *)(iVar2 + 0x58);
        iVar1 = *(int *)(iVar2 + 0x27c);
        FUN_004d1020(iVar2,&local_14);
        iVar2 = iVar1;
      }
      iVar4 = iVar4 + 0x10;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  ExceptionList = local_10;
  return;
}

