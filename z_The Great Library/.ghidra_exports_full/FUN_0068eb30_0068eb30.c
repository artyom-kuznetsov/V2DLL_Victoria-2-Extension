// FUN_0068eb30 @ 0068eb30 body=[[0068eb30, 0068ebbb]]


void FUN_0068eb30(void)

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
      iVar2 = FUN_0068fa70(iVar2,iVar2);
      FUN_0068fae0(unaff_EDI[1],in_ECX);
      unaff_EDI[1] = iVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_0068ec90();
    FUN_0068f8e0(unaff_EDI[1],in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4),in_ECX);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4)) * 0x10 + unaff_EDI[1];
  }
  return;
}

