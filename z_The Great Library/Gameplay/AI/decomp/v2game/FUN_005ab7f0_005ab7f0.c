// FUN_005ab7f0 @ 005ab7f0  (requested 005AB7F0, first bytes: 55 8B EC 83 E4 F8 83 EC)


void FUN_005ab7f0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = DAT_01258a94;
  if ((uint)unaff_ESI[1] < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40(unaff_ESI[1],unaff_ESI[2]);
    if (iVar1 != 0) {
      *unaff_ESI = iVar1 + -8;
      return;
    }
  }
  *unaff_ESI = 0;
  return;
}

