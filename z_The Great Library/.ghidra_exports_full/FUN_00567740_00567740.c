// FUN_00567740 @ 00567740 body=[[00567740, 00567769] [0056776d, 0056778d]]


undefined4 * FUN_00567740(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125ea24;
  if (param_1 == DAT_0125ea24) {
    DAT_0125ea24 = param_1;
    return &DAT_0125ea24;
  }
  if (DAT_0125ea24 != 0) {
    FUN_00566320(DAT_0125ea24);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125ea24 = param_1;
  return &DAT_0125ea24;
}

