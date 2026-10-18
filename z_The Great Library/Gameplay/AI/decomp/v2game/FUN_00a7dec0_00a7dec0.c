// FUN_00a7dec0 @ 00a7dec0 body=[[00a7dec0, 00a7defc]]


undefined4 FUN_00a7dec0(void)

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
  if (0x2aaaaaa < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  iVar1 = FUN_00a7d9a0();
  *unaff_ESI = iVar1;
  unaff_ESI[1] = iVar1;
  unaff_ESI[2] = unaff_EDI * 0x60 + iVar1;
  return 1;
}

