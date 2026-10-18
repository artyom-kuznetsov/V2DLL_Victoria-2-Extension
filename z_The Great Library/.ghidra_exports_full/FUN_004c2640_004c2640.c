// FUN_004c2640 @ 004c2640 body=[[004c2640, 004c26e0]]


void FUN_004c2640(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar1 = (unaff_EDI[1] - *unaff_EDI) / 0xb0;
  if (in_EAX < uVar1) {
    FUN_004c26f0(unaff_EDI,&local_8,in_EAX * 0xb0 + *unaff_EDI,unaff_EDI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_004c2770(in_EAX - uVar1);
    FUN_004c2960(unaff_EDI[1],in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0xb0,local_8);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI) / 0xb0) * 0xb0 + unaff_EDI[1];
  }
  return;
}

