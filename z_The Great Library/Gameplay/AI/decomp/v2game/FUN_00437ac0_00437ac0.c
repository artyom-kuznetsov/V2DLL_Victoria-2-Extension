// FUN_00437ac0 @ 00437ac0 body=[[00437ac0, 00437b0f]]


void FUN_00437ac0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar3;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(unaff_ESI + 0x20) + 0xa60) + unaff_EDI * 8);
  lVar3 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  if (-1 < lVar3) {
    *(longlong *)(unaff_ESI + 0x40) = lVar3;
    iVar2 = *(int *)(unaff_ESI + 0x44);
    *(int *)(unaff_ESI + 0x4c) = unaff_EDI;
    if ((*(int *)(unaff_ESI + 0x14) <= iVar2) &&
       ((*(int *)(unaff_ESI + 0x14) < iVar2 ||
        (*(uint *)(unaff_ESI + 0x10) < *(uint *)(unaff_ESI + 0x40))))) {
      *(uint *)(unaff_ESI + 0x10) = *(uint *)(unaff_ESI + 0x40);
      *(int *)(unaff_ESI + 0x14) = iVar2;
    }
  }
  return;
}

