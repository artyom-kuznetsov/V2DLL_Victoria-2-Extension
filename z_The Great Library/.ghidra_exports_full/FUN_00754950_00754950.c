// FUN_00754950 @ 00754950 body=[[00754950, 00754979] [0075497d, 0075499d]]


undefined4 * FUN_00754950(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01265438;
  if (param_1 == DAT_01265438) {
    DAT_01265438 = param_1;
    return &DAT_01265438;
  }
  if (DAT_01265438 != 0) {
    FUN_007549a0(DAT_01265438);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_01265438 = param_1;
  return &DAT_01265438;
}

