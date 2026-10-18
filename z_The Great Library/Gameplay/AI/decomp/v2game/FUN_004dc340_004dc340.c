// FUN_004dc340 @ 004dc340 body=[[004dc340, 004dc369] [004dc36d, 004dc38d]]


undefined4 * FUN_004dc340(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125ce80;
  if (param_1 == DAT_0125ce80) {
    DAT_0125ce80 = param_1;
    return &DAT_0125ce80;
  }
  if (DAT_0125ce80 != 0) {
    FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125ce80 = param_1;
  return &DAT_0125ce80;
}

