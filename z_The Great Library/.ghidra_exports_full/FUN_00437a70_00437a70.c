// FUN_00437a70 @ 00437a70 body=[[00437a70, 00437abf]]


/* WARNING: Removing unreachable block (ram,0x00437a99) */

void FUN_00437a70(void)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar3;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(unaff_ESI + 0x20) + 0xa60) + unaff_EDI * 8);
  lVar3 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  if (0 < lVar3) {
    *(longlong *)(unaff_ESI + 0x38) = lVar3;
    iVar2 = *(int *)(unaff_ESI + 0x3c);
    *(int *)(unaff_ESI + 0x48) = unaff_EDI;
    if ((iVar2 <= *(int *)(unaff_ESI + 0x14)) &&
       ((iVar2 < *(int *)(unaff_ESI + 0x14) ||
        (*(uint *)(unaff_ESI + 0x38) < *(uint *)(unaff_ESI + 0x10))))) {
      *(uint *)(unaff_ESI + 0x10) = *(uint *)(unaff_ESI + 0x38);
      *(int *)(unaff_ESI + 0x14) = iVar2;
    }
  }
  return;
}

