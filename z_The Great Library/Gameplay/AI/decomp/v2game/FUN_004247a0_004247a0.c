// FUN_004247a0 @ 004247a0 body=[[004247a0, 0042480e]]


void FUN_004247a0(void)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = (*unaff_EDI + -43800000) / 0x18;
  iVar2 = 1;
  if ((int)unaff_ESI < 0) {
    iVar2 = -1;
  }
  *unaff_EDI = (*unaff_EDI + -43800000) % 0x18 +
               (iVar2 * ((((unaff_ESI ^ (int)unaff_ESI >> 0x1f) - ((int)unaff_ESI >> 0x1f)) * 0x16d
                         - (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) + iVar1) * 3 +
               0x538ab8) * 8;
  return;
}

