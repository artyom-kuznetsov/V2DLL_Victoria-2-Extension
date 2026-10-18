// FUN_004a3f70 @ 004a3f70 body=[[004a3f70, 004a3fa5]]


/* WARNING: Removing unreachable block (ram,0x004a3f86) */

undefined4 FUN_004a3f70(void)

{
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  if (unaff_EDI != 0) {
    iVar1 = FUN_00408fd0(unaff_EDI);
    *unaff_ESI = iVar1;
    unaff_ESI[1] = iVar1;
    unaff_ESI[2] = iVar1 + unaff_EDI;
    return CONCAT31((int3)((uint)(iVar1 + unaff_EDI) >> 8),1);
  }
  return 0;
}

