// FUN_009d7860 @ 009d7860 body=[[009d7860, 009d78c9] [009d78cd, 009d78de]]


void FUN_009d7860(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  *unaff_ESI = &PTR_FUN_00e3b540;
  unaff_ESI[1] = unaff_EDI;
  unaff_ESI[2] = 1;
  *(undefined1 *)((int)unaff_ESI + 0xe) = 1;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0xf;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  FUN_00408ed0(param_1,0,0xffffffff);
  if (unaff_EDI == 2) {
    *(undefined1 *)(unaff_ESI + 3) = 1;
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

