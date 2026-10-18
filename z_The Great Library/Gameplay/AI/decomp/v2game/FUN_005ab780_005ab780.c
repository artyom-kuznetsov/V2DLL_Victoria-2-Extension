// FUN_005ab780 @ 005ab780 body=[[005ab780, 005ab7da] [005ab7de, 005ab7ef]]


void FUN_005ab780(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *unaff_ESI = 0;
  unaff_ESI[1] = DAT_01268fec;
  unaff_ESI[2] = DAT_01268ff0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0xf;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_00408ed0(&param_1,0,0xffffffff);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

