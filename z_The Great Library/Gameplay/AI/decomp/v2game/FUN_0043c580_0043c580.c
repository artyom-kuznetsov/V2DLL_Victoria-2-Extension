// FUN_0043c580 @ 0043c580 body=[[0043c580, 0043c5c8] [0043c5d2, 0043c5ed] [0043c5f7, 0043c610]]


void FUN_0043c580(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a26b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTernary<CFlag*,0>::vftable;
  local_8 = 0;
  FUN_009e6ac0(in_ECX[1]);
  in_ECX[1] = 0;
  if (in_ECX[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[3] = 0;
  if (in_ECX[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  ExceptionList = local_10;
  return;
}

