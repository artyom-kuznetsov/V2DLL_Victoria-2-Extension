// FUN_0096fb80 @ 0096fb80 body=[[0096fb80, 0096fc2e]]


int FUN_0096fb80(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 local_8;
  
  iVar3 = unaff_ESI[1] - *unaff_ESI;
  iVar2 = iVar3 * -0x6db6db6d;
  uVar1 = iVar3 / 0x1c;
  if (in_EAX < uVar1) {
    iVar2 = FUN_004138b0(unaff_ESI,&local_8,*unaff_ESI + in_EAX * 0x1c,unaff_ESI[1]);
    return iVar2;
  }
  if (uVar1 < in_EAX) {
    FUN_00419410();
    FUN_00970210(unaff_ESI[1],local_8);
    iVar2 = (unaff_ESI[1] - *unaff_ESI) / 0x1c;
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - iVar2) * 0x1c;
  }
  return iVar2;
}

