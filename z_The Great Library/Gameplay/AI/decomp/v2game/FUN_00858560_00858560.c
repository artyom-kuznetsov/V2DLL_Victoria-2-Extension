// FUN_00858560 @ 00858560 body=[[00858560, 00858664]]


void FUN_00858560(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_EDI;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_00857e60(unaff_EDI);
  if (iVar4 != 0) {
    uVar1 = *(uint *)(unaff_EDI + 0x34);
    FUN_004da790(*(undefined4 *)(unaff_EDI + 0x7c),
                 *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4),
                 *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4) + 0x1184);
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4);
    iVar2 = *(int *)(iVar6 + 0xe7c);
    uVar3 = uVar1 >> 0x10;
    iVar5 = (int)(local_18 << 0x10 | uVar3) >> 0xf;
    if ((iVar5 <= iVar2) &&
       ((iVar5 < iVar2 || (((uVar1 & 0xffff) << 1 | uVar3 << 0x11) < *(uint *)(iVar6 + 0xe78))))) {
      iVar6 = FUN_00aae9af(0x58);
      uVar7 = 0;
      local_8 = 0;
      if (iVar6 != 0) {
        uVar7 = FUN_0057b560(iVar6,*(undefined4 *)(unaff_EDI + 0x7c),*(undefined4 *)(iVar4 + 0x58),
                             *(undefined4 *)(unaff_EDI + 0x34),*(undefined4 *)(unaff_EDI + 0x38));
      }
      local_8 = 0xffffffff;
      iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

