// FUN_00455640 @ 00455640 body=[[00455640, 00455669] [0045566d, 0045568d]]


undefined4 * FUN_00455640(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125a858;
  if (param_1 == DAT_0125a858) {
    DAT_0125a858 = param_1;
    return &DAT_0125a858;
  }
  if (DAT_0125a858 != 0) {
    FUN_00454f10(DAT_0125a858);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125a858 = param_1;
  return &DAT_0125a858;
}

