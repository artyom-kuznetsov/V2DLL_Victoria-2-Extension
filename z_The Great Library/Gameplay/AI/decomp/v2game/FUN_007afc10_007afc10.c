// FUN_007afc10 @ 007afc10 body=[[007afc10, 007afcad]]


void FUN_007afc10(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = (unaff_ESI[1] - *unaff_ESI) / 0x24;
  if (in_EAX < uVar1) {
    FUN_007afcb0(unaff_ESI,&local_8,*unaff_ESI + in_EAX * 0x24,unaff_ESI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_007afd20(in_EAX - uVar1);
    FUN_007b00a0(unaff_ESI[1],local_8);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x24) * 0x24;
  }
  return;
}

