// FUN_0044eca0 @ 0044eca0 body=[[0044eca0, 0044eccc] [0044ecd0, 0044ed2c]]


/* WARNING: Removing unreachable block (ram,0x0044ecc7) */
/* WARNING: Removing unreachable block (ram,0x0044ecd0) */

void FUN_0044eca0(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar2 = unaff_EDI[1] - *unaff_EDI >> 3;
  if (in_EAX < uVar2) {
    iVar1 = *unaff_EDI + in_EAX * 8;
    if (iVar1 != unaff_EDI[1]) {
      unaff_EDI[1] = iVar1;
      return;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_00423780();
    FUN_0044ef70(local_8);
    unaff_EDI[1] = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  return;
}

