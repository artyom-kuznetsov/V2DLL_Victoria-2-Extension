// FUN_008b1ab0 @ 008b1ab0 body=[[008b1ab0, 008b1bea] [008b1bee, 008b1bff]]


void FUN_008b1ab0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00ba3a2b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009b7950();
  FUN_008a8650();
  FUN_00504750();
  *(undefined4 *)(unaff_EDI + 0x14) = in_stack_00000020;
  *(undefined4 *)(unaff_EDI + 0x18) = in_stack_00000024;
  FUN_009b7950();
  FUN_008a8650();
  FUN_00504750();
  iVar1 = DAT_012588e8;
  *(undefined4 *)(unaff_EDI + 0x60) = in_stack_00000024;
  *(undefined4 *)(unaff_EDI + 0x5c) = in_stack_00000020;
  *(int *)(unaff_EDI + 0x30) = unaff_EDI + 0x54;
  *(undefined4 *)(unaff_EDI + 0x9c) = *(undefined4 *)(iVar1 + 0xb0c);
  FUN_00408ed0(&param_1,0,0xffffffff);
  local_8._0_1_ = 1;
  if (DAT_0131a4ac == 0) {
    iVar1 = FUN_00aae9af(0x1c);
    local_8._0_1_ = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008b0060();
    }
    local_8._0_1_ = 1;
    FUN_008b2430(uVar2);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar2 = FUN_008b00c0(DAT_0131a4ac,unaff_EDI + 0xc);
  *(undefined4 *)(unaff_EDI + 8) = uVar2;
  if (0 < *(int *)(unaff_EDI + 0x1c)) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(unaff_EDI + 0x1c) * 4);
    *(undefined4 *)(unaff_EDI + 0xa0) = *(undefined4 *)(iVar1 + 0x128);
    *(undefined4 *)(unaff_EDI + 0xa4) = *(undefined4 *)(iVar1 + 300);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

