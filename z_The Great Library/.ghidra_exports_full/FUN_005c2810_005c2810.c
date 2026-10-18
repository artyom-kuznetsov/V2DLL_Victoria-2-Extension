// FUN_005c2810 @ 005c2810 body=[[005c2810, 005c2839] [005c283d, 005c285d]]


undefined4 * FUN_005c2810(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125fdd8;
  if (param_1 == DAT_0125fdd8) {
    DAT_0125fdd8 = param_1;
    return &DAT_0125fdd8;
  }
  if (DAT_0125fdd8 != 0) {
    FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125fdd8 = param_1;
  return &DAT_0125fdd8;
}

