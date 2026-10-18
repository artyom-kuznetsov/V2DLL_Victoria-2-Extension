// FUN_00a80000 @ 00a80000 body=[[00a80000, 00a8009a]]


void FUN_00a80000(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar1 = (unaff_EDI[1] - *unaff_EDI) / 0x54;
  if (in_EAX < uVar1) {
    FUN_00a80170(unaff_EDI,&local_8,in_EAX * 0x54 + *unaff_EDI,unaff_EDI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_00a801c0(in_EAX - uVar1);
    FUN_00a80780(unaff_EDI[1],in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0x54,local_8);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0x54) * 0x54 + unaff_EDI[1];
  }
  return;
}

