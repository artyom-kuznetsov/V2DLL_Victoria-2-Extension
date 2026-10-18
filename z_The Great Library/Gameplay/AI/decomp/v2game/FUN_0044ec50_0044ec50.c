// FUN_0044ec50 @ 0044ec50 body=[[0044ec50, 0044ec79] [0044ec7d, 0044ec9d]]


undefined4 * FUN_0044ec50(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125a660;
  if (param_1 == DAT_0125a660) {
    DAT_0125a660 = param_1;
    return &DAT_0125a660;
  }
  if (DAT_0125a660 != 0) {
    FUN_0090cd00(DAT_0125a660);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125a660 = param_1;
  return &DAT_0125a660;
}

