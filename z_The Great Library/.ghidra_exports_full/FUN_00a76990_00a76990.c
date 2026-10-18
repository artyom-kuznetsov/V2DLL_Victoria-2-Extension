// FUN_00a76990 @ 00a76990 body=[[00a76990, 00a76a42]]


void FUN_00a76990(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  iVar2 = unaff_ESI[1];
  uVar1 = (iVar2 - *unaff_ESI) / 0x24;
  if (uVar1 < 0x21) {
    if (uVar1 < 0x20) {
      FUN_00a76a50(0x20 - uVar1);
      FUN_00a76bc0(in_ECX);
      unaff_ESI[1] = unaff_ESI[1] + (0x20 - (unaff_ESI[1] - *unaff_ESI) / 0x24) * 0x24;
    }
  }
  else if (*unaff_ESI + 0x480 != iVar2) {
    iVar2 = FUN_00804e20(iVar2);
    unaff_ESI[1] = iVar2;
    return;
  }
  return;
}

