// FUN_00a6a600 @ 00a6a600 body=[[00a6a600, 00a6a698]]


void FUN_00a6a600(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  iVar2 = unaff_ESI[1];
  uVar1 = iVar2 - *unaff_ESI >> 4;
  if (uVar1 < 0x100) {
    if (uVar1 < 0xff) {
      FUN_00a6a790();
      FUN_00a6b480(unaff_ESI[1],0xff - (unaff_ESI[1] - *unaff_ESI >> 4),in_ECX);
      unaff_ESI[1] = (0xff - (unaff_ESI[1] - *unaff_ESI >> 4)) * 0x10 + unaff_ESI[1];
    }
  }
  else if (*unaff_ESI + 0xff0 != iVar2) {
    iVar2 = FUN_00a6b560(iVar2,iVar2);
    FUN_0068fae0(unaff_ESI[1],in_ECX);
    unaff_ESI[1] = iVar2;
    return;
  }
  return;
}

