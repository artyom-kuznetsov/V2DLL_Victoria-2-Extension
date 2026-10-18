// FUN_00419be0 @ 00419be0 body=[[00419be0, 00419c1a]]


undefined4 FUN_00419be0(void)

{
  int iVar1;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  if (unaff_EDI == 0) {
    return 0;
  }
  if (0xccccccc < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  iVar1 = FUN_00804ab0();
  *unaff_ESI = iVar1;
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar1 + unaff_EDI * 0x14;
  return 1;
}

