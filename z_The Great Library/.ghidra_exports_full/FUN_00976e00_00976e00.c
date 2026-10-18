// FUN_00976e00 @ 00976e00 body=[[00976e00, 00976e5f] [00976e63, 00976e74]]


void FUN_00976e00(undefined4 param_1)

{
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
  *unaff_ESI = CPartyLoyalty::vftable;
  unaff_ESI[2] = in_stack_00000020;
  unaff_ESI[3] = in_stack_00000024;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_00408ed0(&param_1,0,0xffffffff);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

