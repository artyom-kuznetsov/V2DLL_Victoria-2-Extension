// FUN_0080ddc0 @ 0080ddc0 body=[[0080ddc0, 0080ddec] [0080ddf0, 0080de4c]]


/* WARNING: Removing unreachable block (ram,0x0080dde7) */
/* WARNING: Removing unreachable block (ram,0x0080ddf0) */

void FUN_0080ddc0(void)

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
    FUN_0043ab60(local_8);
    unaff_EDI[1] = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  return;
}

