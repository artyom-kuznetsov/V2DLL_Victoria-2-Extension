// FUN_005660f0 @ 005660f0 body=[[005660f0, 0056611a] [0056611e, 00566140]]


undefined4 * FUN_005660f0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0125e874;
  if (param_1 == DAT_0125e874) {
    DAT_0125e874 = param_1;
    return &DAT_0125e874;
  }
  if (DAT_0125e874 != 0) {
    FUN_00566150();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_0125e874 = param_1;
  return &DAT_0125e874;
}

