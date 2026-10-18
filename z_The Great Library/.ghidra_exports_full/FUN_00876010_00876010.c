// FUN_00876010 @ 00876010 body=[[00876010, 00876039] [0087603d, 0087605d]]


undefined4 * FUN_00876010(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01319730;
  if (param_1 == DAT_01319730) {
    DAT_01319730 = param_1;
    return &DAT_01319730;
  }
  if (DAT_01319730 != 0) {
    FUN_00875160(DAT_01319730);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  DAT_01319730 = param_1;
  return &DAT_01319730;
}

