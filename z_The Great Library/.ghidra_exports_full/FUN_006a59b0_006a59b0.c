// FUN_006a59b0 @ 006a59b0 body=[[006a59b0, 006a59d9] [006a59dd, 006a59fd]]


undefined4 * FUN_006a59b0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01262ef4;
  if (param_1 == DAT_01262ef4) {
    DAT_01262ef4 = param_1;
    return &DAT_01262ef4;
  }
  if (DAT_01262ef4 != 0) {
    FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_01262ef4 = param_1;
  return &DAT_01262ef4;
}

