// FUN_0080de50 @ 0080de50 body=[[0080de50, 0080decd]]


/* WARNING: Removing unreachable block (ram,0x0080de74) */
/* WARNING: Removing unreachable block (ram,0x0080de88) */

void FUN_0080de50(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  int iVar2;
  int *unaff_EDI;
  
  uVar1 = unaff_EDI[1] - *unaff_EDI >> 3;
  if (in_EAX < uVar1) {
    iVar2 = *unaff_EDI + in_EAX * 8;
    if (iVar2 == unaff_EDI[1]) {
      return;
    }
  }
  else {
    if (in_EAX <= uVar1) {
      return;
    }
    FUN_00423780();
    FUN_0080df80(in_ECX);
    iVar2 = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  unaff_EDI[1] = iVar2;
  return;
}

