// FUN_0048b650 @ 0048b650 body=[[0048b650, 0048b6ec]]


void FUN_0048b650(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar1 = (unaff_EDI[1] - *unaff_EDI) / 0x58;
  if (in_EAX < uVar1) {
    FUN_0048b8c0(unaff_EDI,&local_8,in_EAX * 0x58 + *unaff_EDI,unaff_EDI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_0048b940(in_EAX - uVar1);
    FUN_0048c600(unaff_EDI[1],in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0x58,local_8);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0x58) * 0x58 + unaff_EDI[1];
  }
  return;
}

