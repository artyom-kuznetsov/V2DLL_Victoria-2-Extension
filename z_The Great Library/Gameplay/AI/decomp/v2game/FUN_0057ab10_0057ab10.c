// FUN_0057ab10 @ 0057ab10  (requested 0057AB10, first bytes: 55 8B EC A1 DC EA 25 01)


undefined4 * FUN_0057ab10(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125eadc;
  if (param_1 == DAT_0125eadc) {
    DAT_0125eadc = param_1;
    return &DAT_0125eadc;
  }
  if (DAT_0125eadc != 0) {
    FUN_00576d10(DAT_0125eadc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125eadc = param_1;
  return &DAT_0125eadc;
}

