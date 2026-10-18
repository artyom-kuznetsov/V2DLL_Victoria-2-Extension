// FUN_007e1ad0 @ 007e1ad0 body=[[007e1ad0, 007e1b18] [007e1b22, 007e1b3d] [007e1b47, 007e1b60]]


void FUN_007e1ad0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a26b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTernary<int,0>::vftable;
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

