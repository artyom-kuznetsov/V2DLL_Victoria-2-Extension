// FUN_005c2880 @ 005c2880 body=[[005c2880, 005c2920]]


void FUN_005c2880(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = (unaff_ESI[1] - *unaff_ESI) / 0x18;
  if (in_EAX < uVar1) {
    FUN_0057af60(unaff_ESI,&local_8,*unaff_ESI + in_EAX * 0x18,unaff_ESI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_005c2930(in_EAX - uVar1);
    FUN_005c2b80(local_8);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x18) * 0x18;
  }
  return;
}

