// FUN_00804430 @ 00804430 body=[[00804430, 008044ed]]


void FUN_00804430(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  iVar2 = unaff_ESI[1];
  uVar1 = (iVar2 - *unaff_ESI) / 0x24;
  if (in_EAX < uVar1) {
    if (*unaff_ESI + in_EAX * 0x24 != iVar2) {
      iVar2 = FUN_00804e20(iVar2);
      FUN_00804e70(unaff_ESI[1],in_ECX);
      unaff_ESI[1] = iVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_008045b0(in_EAX - uVar1);
    FUN_00804dc0(in_ECX);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x24) * 0x24;
  }
  return;
}

