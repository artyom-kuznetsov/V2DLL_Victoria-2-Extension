// FUN_005492e0 @ 005492e0 body=[[005492e0, 0054934d]]


void FUN_005492e0(void)

{
  uint in_EAX;
  uint uVar1;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar1 = unaff_EDI[1] - *unaff_EDI >> 4;
  if (in_EAX < uVar1) {
    FUN_005496b0(unaff_EDI,&local_8,in_EAX * 0x10 + *unaff_EDI,unaff_EDI[1]);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_00466b40();
    FUN_0054b710(unaff_EDI[1],local_8);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4)) * 0x10 + unaff_EDI[1];
  }
  return;
}

