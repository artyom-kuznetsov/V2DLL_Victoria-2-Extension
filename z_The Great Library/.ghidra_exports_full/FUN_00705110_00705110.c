// FUN_00705110 @ 00705110 body=[[00705110, 007051ad]]


void FUN_00705110(void)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = (unaff_ESI[1] - *unaff_ESI) / 0x14;
  if (in_EAX < uVar1) {
    FUN_00705200(unaff_ESI,&local_8,*unaff_ESI + in_EAX * 0x14,unaff_ESI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_00705270(in_EAX - uVar1);
    FUN_00705a60(unaff_ESI[1],local_8);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x14) * 0x14;
  }
  return;
}

