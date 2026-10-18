// FUN_009d9510 @ 009d9510 body=[[009d9510, 009d9537] [009d9540, 009d95a3]]


/* WARNING: Removing unreachable block (ram,0x009d9536) */
/* WARNING: Removing unreachable block (ram,0x009d9540) */

void FUN_009d9510(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  int iVar2;
  int *unaff_EDI;
  
  uVar1 = unaff_EDI[1] - *unaff_EDI >> 4;
  if (in_EAX < uVar1) {
    iVar2 = *unaff_EDI + in_EAX * 0x10;
    if (iVar2 != unaff_EDI[1]) {
      unaff_EDI[1] = iVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_009d95b0();
    FUN_009d96d0(in_ECX);
    unaff_EDI[1] = (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 4)) * 0x10 + unaff_EDI[1];
  }
  return;
}

