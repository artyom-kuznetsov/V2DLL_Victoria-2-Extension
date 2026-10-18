// FUN_0043a1d0 @ 0043a1d0 body=[[0043a1d0, 0043a226]]


void FUN_0043a1d0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  longlong lVar3;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(unaff_ESI + 8) + 0xa60) + 0xb0);
  lVar3 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  if (-1 < lVar3) {
    *(longlong *)(unaff_ESI + 0x68) = lVar3;
    iVar2 = *(int *)(unaff_ESI + 0x6c);
    *(undefined4 *)(unaff_ESI + 0x74) = 0x16;
    if ((*(int *)(unaff_ESI + 0x14) <= iVar2) &&
       ((*(int *)(unaff_ESI + 0x14) < iVar2 ||
        (*(uint *)(unaff_ESI + 0x10) < *(uint *)(unaff_ESI + 0x68))))) {
      *(uint *)(unaff_ESI + 0x10) = *(uint *)(unaff_ESI + 0x68);
      *(int *)(unaff_ESI + 0x14) = iVar2;
    }
  }
  return;
}

