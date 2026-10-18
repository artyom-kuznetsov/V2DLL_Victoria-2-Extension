// FUN_007d8660 @ 007d8660 body=[[007d8660, 007d86e2]]


void FUN_007d8660(void)

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
      iVar2 = FUN_007df690(iVar2);
      FUN_004651b0(unaff_EDI[1]);
      unaff_EDI[1] = iVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_007d8800();
    FUN_007df630(unaff_EDI[1],in_ECX);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4)) * 0x10 + unaff_EDI[1];
  }
  return;
}

