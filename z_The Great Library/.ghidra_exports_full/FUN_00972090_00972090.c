// FUN_00972090 @ 00972090 body=[[00972090, 009720b9] [009720bd, 009720dd]]


undefined4 * FUN_00972090(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0131bd5c;
  if (param_1 == DAT_0131bd5c) {
    DAT_0131bd5c = param_1;
    return &DAT_0131bd5c;
  }
  if (DAT_0131bd5c != 0) {
    FUN_0090cd00(DAT_0131bd5c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0131bd5c = param_1;
  return &DAT_0131bd5c;
}

