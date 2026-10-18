// FUN_00a40ca0 @ 00a40ca0 body=[[00a40ca0, 00a40cde]]


undefined4 FUN_00a40ca0(void)

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
  if (0x234f72c < in_EAX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  iVar1 = FUN_00a40890();
  *unaff_EDI = iVar1;
  unaff_EDI[1] = iVar1;
  unaff_EDI[2] = in_EAX * 0x74 + iVar1;
  return 1;
}

