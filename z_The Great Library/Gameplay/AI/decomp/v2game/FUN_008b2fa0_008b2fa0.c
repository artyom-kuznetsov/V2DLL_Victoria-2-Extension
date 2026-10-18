// FUN_008b2fa0 @ 008b2fa0 body=[[008b2fa0, 008b2fc9] [008b2fcd, 008b2fed]]


undefined4 * FUN_008b2fa0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0131a584;
  if (param_1 == DAT_0131a584) {
    DAT_0131a584 = param_1;
    return &DAT_0131a584;
  }
  if (DAT_0131a584 != 0) {
    FUN_008b2740(DAT_0131a584);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0131a584 = param_1;
  return &DAT_0131a584;
}

