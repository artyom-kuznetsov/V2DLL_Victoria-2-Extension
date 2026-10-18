// FUN_004d5f50 @ 004d5f50 body=[[004d5f50, 004d5fc7]]


/* WARNING: Removing unreachable block (ram,0x004d5f74) */
/* WARNING: Removing unreachable block (ram,0x004d5f82) */

void FUN_004d5f50(void)

{
  uint in_EAX;
  undefined4 in_ECX;
  uint uVar1;
  int iVar2;
  int *unaff_EDI;
  
  uVar1 = unaff_EDI[1] - *unaff_EDI >> 2;
  if (in_EAX < uVar1) {
    iVar2 = *unaff_EDI + in_EAX * 4;
    if (iVar2 == unaff_EDI[1]) {
      return;
    }
  }
  else {
    if (in_EAX <= uVar1) {
      return;
    }
    FUN_00435b20();
    FUN_004d6230(in_ECX);
    iVar2 = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 2)) * 4;
  }
  unaff_EDI[1] = iVar2;
  return;
}

