// FUN_0047d900 @ 0047d900 body=[[0047d900, 0047d948] [0047d952, 0047d96d] [0047d977, 0047d990]]


void FUN_0047d900(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a26b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTernary<CVariable*,0>::vftable;
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

