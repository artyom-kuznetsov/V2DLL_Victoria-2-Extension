// FUN_005e5800 @ 005e5800  (requested 005E5800, first bytes: 55 8B EC 83 E4 F8 83 EC)


undefined4 FUN_005e5800(void)

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
      iVar1 = iVar1 + -8;
      *unaff_ESI = iVar1;
      return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
    }
  }
  *unaff_ESI = 0;
  return 0;
}

