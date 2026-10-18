// FUN_0068eaa0 @ 0068eaa0 body=[[0068eaa0, 0068eb28]]


void FUN_0068eaa0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  iVar2 = unaff_ESI[1];
  uVar1 = iVar2 - *unaff_ESI >> 4;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      FUN_0068ec30();
      FUN_0068f800(unaff_ESI[1],1 - (unaff_ESI[1] - *unaff_ESI >> 4),in_ECX);
      unaff_ESI[1] = (unaff_ESI[1] - (unaff_ESI[1] - *unaff_ESI & 0xfffffff0U)) + 0x10;
    }
  }
  else if (*unaff_ESI + 0x10 != iVar2) {
    iVar2 = FUN_0068f9c0(iVar2,iVar2);
    FUN_0068fa30(unaff_ESI[1],in_ECX);
    unaff_ESI[1] = iVar2;
    return;
  }
  return;
}

