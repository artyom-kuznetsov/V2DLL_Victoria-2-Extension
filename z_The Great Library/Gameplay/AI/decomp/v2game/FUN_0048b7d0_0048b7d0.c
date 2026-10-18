// FUN_0048b7d0 @ 0048b7d0 body=[[0048b7d0, 0048b885]]


int FUN_0048b7d0(void)

{
  int iVar1;
  uint uVar2;
  uint in_EAX;
  int iVar3;
  int *unaff_ESI;
  undefined4 local_8;
  
  iVar1 = unaff_ESI[1];
  iVar3 = (iVar1 - *unaff_ESI) * -0x77777777;
  uVar2 = (iVar1 - *unaff_ESI) / 0x78;
  if (in_EAX < uVar2) {
    iVar3 = *unaff_ESI + in_EAX * 0x78;
    if (iVar3 != iVar1) {
      iVar3 = FUN_0048c990(iVar1);
      unaff_ESI[1] = iVar3;
      return iVar3;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_0048bce0();
    FUN_0048c750(local_8);
    iVar3 = (unaff_ESI[1] - *unaff_ESI) / 0x78;
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - iVar3) * 0x78;
  }
  return iVar3;
}

