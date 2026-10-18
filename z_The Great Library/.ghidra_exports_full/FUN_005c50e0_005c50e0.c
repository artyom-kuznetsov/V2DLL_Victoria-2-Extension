// FUN_005c50e0 @ 005c50e0 body=[[005c50e0, 005c518f]]


int FUN_005c50e0(void)

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
    iVar2 = FUN_005c51e0(unaff_ESI,&local_8,*unaff_ESI + in_EAX * 0x1c,unaff_ESI[1]);
    return iVar2;
  }
  if (uVar1 < in_EAX) {
    FUN_005c5240();
    FUN_005c5990(unaff_ESI[1],in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x1c,local_8);
    iVar2 = (unaff_ESI[1] - *unaff_ESI) / 0x1c;
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - iVar2) * 0x1c;
  }
  return iVar2;
}

