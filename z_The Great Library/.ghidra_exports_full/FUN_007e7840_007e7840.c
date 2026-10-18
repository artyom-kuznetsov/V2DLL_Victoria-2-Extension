// FUN_007e7840 @ 007e7840 body=[[007e7840, 007e7869] [007e786d, 007e788d]]


undefined4 * FUN_007e7840(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01268284;
  if (param_1 == DAT_01268284) {
    DAT_01268284 = param_1;
    return &DAT_01268284;
  }
  if (DAT_01268284 != 0) {
    FUN_0090cd00(DAT_01268284);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_01268284 = param_1;
  return &DAT_01268284;
}

