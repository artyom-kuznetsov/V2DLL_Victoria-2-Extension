// FUN_0043a880 @ 0043a880  (requested 0043A880, first bytes: 55 8B EC 51 8B 4F 04 8B)


/* WARNING: Removing unreachable block (ram,0x0043a8a4) */
/* WARNING: Removing unreachable block (ram,0x0043a8b8) */

void FUN_0043a880(void)

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
    FUN_0043ab60(in_ECX);
    iVar2 = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  unaff_EDI[1] = iVar2;
  return;
}

