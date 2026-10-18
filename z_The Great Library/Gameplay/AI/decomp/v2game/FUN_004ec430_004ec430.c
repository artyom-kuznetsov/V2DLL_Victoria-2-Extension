// FUN_004ec430 @ 004ec430 body=[[004ec430, 004ec459] [004ec45d, 004ec47d]]


undefined4 * FUN_004ec430(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125d36c;
  if (param_1 == DAT_0125d36c) {
    DAT_0125d36c = param_1;
    return &DAT_0125d36c;
  }
  if (DAT_0125d36c != 0) {
    FUN_0090cd00(DAT_0125d36c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125d36c = param_1;
  return &DAT_0125d36c;
}

