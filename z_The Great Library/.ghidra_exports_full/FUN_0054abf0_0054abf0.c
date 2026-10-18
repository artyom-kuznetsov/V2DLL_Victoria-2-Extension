// FUN_0054abf0 @ 0054abf0 body=[[0054abf0, 0054ac27]]


undefined4 FUN_0054abf0(void)

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
  if (0x3fffffff < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  iVar1 = FUN_007055a0();
  *unaff_ESI = iVar1;
  unaff_ESI[1] = iVar1;
  iVar1 = iVar1 + unaff_EDI * 4;
  unaff_ESI[2] = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

