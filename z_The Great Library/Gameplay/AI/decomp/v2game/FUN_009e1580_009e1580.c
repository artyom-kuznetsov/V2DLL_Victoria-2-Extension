// FUN_009e1580 @ 009e1580 body=[[009e1580, 009e15ba]]


undefined4 FUN_009e1580(void)

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
  if (0x71c71c7 < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  iVar1 = FUN_00779af0();
  *unaff_ESI = iVar1;
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = iVar1 + unaff_EDI * 0x24;
  return 1;
}

