// FUN_00561410 @ 00561410 body=[[00561410, 00561473] [00561477, 00561489]]


void FUN_00561410(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CGoodsCategory::vftable;
  unaff_ESI[2] = in_stack_00000020;
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_00408ed0(&param_1,0,0xffffffff);
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

