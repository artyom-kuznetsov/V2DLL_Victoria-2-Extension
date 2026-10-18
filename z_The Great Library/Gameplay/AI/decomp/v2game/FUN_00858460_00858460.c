// FUN_00858460 @ 00858460 body=[[00858460, 00858559]]


void FUN_00858460(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_008577b0(unaff_EDI);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(unaff_EDI + 0x34);
    FUN_004da790(*(undefined4 *)(unaff_EDI + 0x80),
                 *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4),
                 *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4) + 0x1184);
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4);
    iVar2 = *(int *)(iVar4 + 0xe7c);
    if ((local_18 <= iVar2) && ((local_18 < iVar2 || (uVar1 < *(uint *)(iVar4 + 0xe78))))) {
      iVar4 = FUN_00aae9af(0x58);
      uVar5 = 0;
      local_8 = 0;
      if (iVar4 != 0) {
        uVar5 = FUN_0057b560(iVar4,*(undefined4 *)(unaff_EDI + 0x80),*(undefined4 *)(iVar3 + 0x58),
                             *(undefined4 *)(unaff_EDI + 0x34),*(undefined4 *)(unaff_EDI + 0x38));
      }
      local_8 = 0xffffffff;
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

