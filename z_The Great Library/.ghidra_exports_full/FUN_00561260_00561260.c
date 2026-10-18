// FUN_00561260 @ 00561260 body=[[00561260, 0056130a] [0056130e, 00561321]]


void FUN_00561260(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CGoods::vftable;
  unaff_ESI[2] = in_stack_00000020;
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_00408ed0(&param_1,0,0xffffffff);
  uVar1 = DAT_00f092fc;
  *(undefined2 *)(unaff_ESI + 10) = 0x101;
  *(undefined1 *)((int)unaff_ESI + 0x2a) = 1;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = in_stack_00000024;
  *(undefined2 *)(unaff_ESI + 0xf) = 0;
  unaff_ESI[0x11] = 0x18d;
  unaff_ESI[0x10] = CColor::vftable;
  unaff_ESI[0x12] = uVar1;
  unaff_ESI[0x13] = uVar1;
  unaff_ESI[0x14] = uVar1;
  unaff_ESI[0x15] = uVar1;
  *(undefined1 *)(unaff_ESI + 0x16) = 1;
  FUN_009b7500();
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

