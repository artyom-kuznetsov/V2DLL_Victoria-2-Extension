// FUN_007e6620 @ 007e6620 body=[[007e6620, 007e669d]]


/* WARNING: Removing unreachable block (ram,0x007e6644) */
/* WARNING: Removing unreachable block (ram,0x007e6658) */

void FUN_007e6620(void)

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
    FUN_004959e0(in_ECX);
    iVar2 = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  unaff_EDI[1] = iVar2;
  return;
}

