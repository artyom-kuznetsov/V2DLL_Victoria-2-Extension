// FUN_004454a0 @ 004454a0 body=[[004454a0, 00445561]]


int FUN_004454a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_ECX;
  int iVar4;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  iVar4 = iVar1 - *unaff_ESI;
  iVar3 = iVar4 * -0x6db6db6d;
  uVar2 = iVar4 / 0x1c;
  if (uVar2 < 0x15) {
    if (uVar2 < 0x14) {
      FUN_00445570();
      FUN_00445da0(in_ECX);
      iVar3 = unaff_ESI[1] + (0x14 - (unaff_ESI[1] - *unaff_ESI) / 0x1c) * 0x1c;
      unaff_ESI[1] = iVar3;
    }
  }
  else {
    iVar3 = *unaff_ESI + 0x230;
    if (iVar3 != iVar1) {
      iVar3 = FUN_00a7dff0(iVar1);
      unaff_ESI[1] = iVar3;
      return iVar3;
    }
  }
  return iVar3;
}

