// FUN_005c4ad0 @ 005c4ad0 body=[[005c4ad0, 005c4afc] [005c4b00, 005c4b5c]]


/* WARNING: Removing unreachable block (ram,0x005c4af7) */
/* WARNING: Removing unreachable block (ram,0x005c4b00) */

void FUN_005c4ad0(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar2 = unaff_EDI[1] - *unaff_EDI >> 3;
  if (in_EAX < uVar2) {
    iVar1 = *unaff_EDI + in_EAX * 8;
    if (iVar1 != unaff_EDI[1]) {
      unaff_EDI[1] = iVar1;
      return;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_00423780();
    FUN_005c4df0(local_8);
    unaff_EDI[1] = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  return;
}

