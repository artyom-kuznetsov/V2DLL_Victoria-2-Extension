// FUN_006a27d0 @ 006a27d0 body=[[006a27d0, 006a280e]]


undefined4 FUN_006a27d0(void)

{
  uint in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  if (in_EAX == 0) {
    return 0;
  }
  if (0x3ffffff < in_EAX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  iVar1 = FUN_004a3a70();
  *unaff_EDI = iVar1;
  unaff_EDI[1] = iVar1;
  unaff_EDI[2] = in_EAX * 0x40 + iVar1;
  return 1;
}

