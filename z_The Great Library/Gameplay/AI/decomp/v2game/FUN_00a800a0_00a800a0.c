// FUN_00a800a0 @ 00a800a0 body=[[00a800a0, 00a80160]]


/* WARNING: Removing unreachable block (ram,0x00a800d9) */
/* WARNING: Removing unreachable block (ram,0x00a800e0) */

void FUN_00a800a0(void)

{
  int iVar1;
  uint uVar2;
  uint in_EAX;
  undefined4 in_ECX;
  int *unaff_EDI;
  
  uVar2 = (unaff_EDI[1] - *unaff_EDI) / 0xc;
  if (in_EAX < uVar2) {
    iVar1 = *unaff_EDI + in_EAX * 0xc;
    if (iVar1 != unaff_EDI[1]) {
      unaff_EDI[1] = iVar1;
      return;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_00a80250(in_EAX - uVar2);
    FUN_00a807d0(in_ECX);
    unaff_EDI[1] = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0xc) * 0xc;
  }
  return;
}

