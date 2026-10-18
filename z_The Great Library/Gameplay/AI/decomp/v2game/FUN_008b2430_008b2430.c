// FUN_008b2430 @ 008b2430 body=[[008b2430, 008b2459] [008b245d, 008b247d]]


undefined4 * FUN_008b2430(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0131a4ac;
  if (param_1 == DAT_0131a4ac) {
    DAT_0131a4ac = param_1;
    return &DAT_0131a4ac;
  }
  if (DAT_0131a4ac != 0) {
    FUN_0090cd00(DAT_0131a4ac);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0131a4ac = param_1;
  return &DAT_0131a4ac;
}

