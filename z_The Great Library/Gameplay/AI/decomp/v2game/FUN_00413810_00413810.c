// FUN_00413810 @ 00413810 body=[[00413810, 00413854]]


undefined4 FUN_00413810(void)

{
  int iVar1;
  int *unaff_ESI;
  uint unaff_EDI;
  
  iVar1 = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  if (unaff_EDI == 0) {
    return 0;
  }
  if (0x9249249 < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if (unaff_EDI != 0) {
    iVar1 = FUN_009b6bb0();
  }
  *unaff_ESI = iVar1;
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar1 + unaff_EDI * 0x1c;
  return 1;
}

