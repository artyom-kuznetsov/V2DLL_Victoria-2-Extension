// FUN_009a14e0 @ 009a14e0 body=[[009a14e0, 009a1534] [009a1538, 009a1547]]


void FUN_009a14e0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009a1440(unaff_ESI);
  piVar1 = (int *)(**(code **)(*unaff_EDI + 8))();
  if (piVar1 != (int *)0x0) {
    *param_1 = piVar1;
    (**(code **)(*piVar1 + 0xc))();
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

