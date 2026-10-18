// FUN_00423700 @ 00423700 body=[[00423700, 00423729] [0042372d, 0042374d]]


undefined4 * FUN_00423700(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0131bb34;
  if (param_1 == DAT_0131bb34) {
    DAT_0131bb34 = param_1;
    return &DAT_0131bb34;
  }
  if (DAT_0131bb34 != 0) {
    FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0131bb34 = param_1;
  return &DAT_0131bb34;
}

