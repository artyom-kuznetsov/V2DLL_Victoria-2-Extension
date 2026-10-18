// FUN_00447410 @ 00447410 body=[[00447410, 00447460]]


bool FUN_00447410(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = DAT_01258a94;
  if ((uint)unaff_ESI[1] < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40(unaff_ESI[1],unaff_ESI[2]);
    *unaff_ESI = iVar1;
    return iVar1 != 0;
  }
  *unaff_ESI = 0;
  return false;
}

