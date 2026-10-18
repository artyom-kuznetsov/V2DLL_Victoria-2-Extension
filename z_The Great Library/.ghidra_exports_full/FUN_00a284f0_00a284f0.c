// FUN_00a284f0 @ 00a284f0 body=[[00a284f0, 00a285af]]


/* WARNING: Removing unreachable block (ram,0x00a28529) */
/* WARNING: Removing unreachable block (ram,0x00a28530) */

void FUN_00a284f0(void)

{
  int iVar1;
  uint uVar2;
  uint in_EAX;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  uVar2 = (unaff_ESI[1] - *unaff_ESI) / 0xc;
  if (in_EAX < uVar2) {
    iVar1 = *unaff_ESI + in_EAX * 0xc;
    if (iVar1 != unaff_ESI[1]) {
      unaff_ESI[1] = iVar1;
      return;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_007ea380(in_EAX - uVar2);
    FUN_00a285b0(in_ECX);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0xc) * 0xc;
  }
  return;
}

