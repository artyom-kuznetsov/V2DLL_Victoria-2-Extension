// FUN_005b8420 @ 005b8420 body=[[005b8420, 005b8449]]


int FUN_005b8420(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = unaff_EDI / 2;
  if (1 < unaff_EDI) {
    do {
      iVar2 = iVar1;
      iVar1 = (unaff_EDI / iVar2 + iVar2) / 2;
    } while (iVar1 < iVar2);
    return iVar2;
  }
  return unaff_EDI;
}

