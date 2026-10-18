// FUN_004be240 @ 004be240 body=[[004be240, 004be2cb]]


void FUN_004be240(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  int *unaff_EDI;
  
  iVar2 = unaff_EDI[1];
  uVar1 = iVar2 - *unaff_EDI >> 4;
  if (in_EAX < uVar1) {
    if (*unaff_EDI + in_EAX * 0x10 != iVar2) {
      iVar2 = FUN_004bf670(iVar2,iVar2);
      FUN_004bf6f0(unaff_EDI[1],in_ECX);
      unaff_EDI[1] = iVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_004be370();
    FUN_004bf570(unaff_EDI[1],in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4),in_ECX);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4)) * 0x10 + unaff_EDI[1];
  }
  return;
}

