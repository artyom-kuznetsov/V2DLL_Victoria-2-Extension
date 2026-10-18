// FUN_00548900 @ 00548900 body=[[00548900, 005489a0]]


void FUN_00548900(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = (unaff_ESI[1] - *unaff_ESI) / 0x18;
  if (in_EAX < uVar1) {
    FUN_00549090(unaff_ESI,&local_8,*unaff_ESI + in_EAX * 0x18,unaff_ESI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_00549100(in_EAX - uVar1);
    FUN_0054b5a0(local_8);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x18) * 0x18;
  }
  return;
}

