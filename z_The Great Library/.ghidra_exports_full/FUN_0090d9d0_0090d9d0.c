// FUN_0090d9d0 @ 0090d9d0 body=[[0090d9d0, 0090d9f9] [0090d9fd, 0090da1d]]


undefined4 * FUN_0090d9d0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0131acac;
  if (param_1 == DAT_0131acac) {
    DAT_0131acac = param_1;
    return &DAT_0131acac;
  }
  if (DAT_0131acac != 0) {
    FUN_0090cd00(DAT_0131acac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0131acac = param_1;
  return &DAT_0131acac;
}

