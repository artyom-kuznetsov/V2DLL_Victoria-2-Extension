// FUN_004c8d90 @ 004c8d90 body=[[004c8d90, 004c8dfc]]


void FUN_004c8d90(void)

{
  uint in_EAX;
  uint uVar1;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar1 = unaff_EDI[1] - *unaff_EDI >> 4;
  if (in_EAX < uVar1) {
    FUN_004c90f0(unaff_EDI,&local_8,in_EAX * 0x10 + *unaff_EDI,unaff_EDI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_004a3b80();
    FUN_004ca070(local_8);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4)) * 0x10 + unaff_EDI[1];
  }
  return;
}

