// FUN_00876ab0 @ 00876ab0 body=[[00876ab0, 00876af8] [00876b03, 00876b25]]


void FUN_00876ab0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a2eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CEffect::vftable;
  piVar1 = in_ECX + 2;
  local_8 = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  ExceptionList = local_10;
  return;
}

