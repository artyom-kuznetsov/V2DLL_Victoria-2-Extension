// FUN_0096fc30 @ 0096fc30 body=[[0096fc30, 0096fcd2]]


void FUN_0096fc30(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = (unaff_ESI[1] - *unaff_ESI) / 0x30;
  if (in_EAX < uVar1) {
    FUN_0096fd30(unaff_ESI,&local_8,in_EAX * 0x30 + *unaff_ESI,unaff_ESI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_0096fd90(in_EAX - uVar1);
    FUN_009702d0(unaff_ESI[1],in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x30,local_8);
    unaff_ESI[1] = (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x30) * 0x30 + unaff_ESI[1];
  }
  return;
}

