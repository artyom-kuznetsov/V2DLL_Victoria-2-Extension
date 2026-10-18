// FUN_0044ec00 @ 0044ec00 body=[[0044ec00, 0044ec29] [0044ec2d, 0044ec4d]]


undefined4 * FUN_0044ec00(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125a69c;
  if (param_1 == DAT_0125a69c) {
    DAT_0125a69c = param_1;
    return &DAT_0125a69c;
  }
  if (DAT_0125a69c != 0) {
    FUN_005c1a70(DAT_0125a69c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125a69c = param_1;
  return &DAT_0125a69c;
}

