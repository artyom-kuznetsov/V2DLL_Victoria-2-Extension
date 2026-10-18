// FUN_0043a170 @ 0043a170 body=[[0043a170, 0043a1cd]]


/* WARNING: Removing unreachable block (ram,0x0043a19c) */

void FUN_0043a170(void)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  longlong lVar3;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(unaff_ESI + 8) + 0xa60) + 0xb8);
  lVar3 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  if (lVar3 < 1) {
    lVar3 = 0x8000;
  }
  *(longlong *)(unaff_ESI + 0x60) = lVar3;
  iVar2 = *(int *)(unaff_ESI + 100);
  *(undefined4 *)(unaff_ESI + 0x70) = 0x17;
  if ((iVar2 <= *(int *)(unaff_ESI + 0x14)) &&
     ((iVar2 < *(int *)(unaff_ESI + 0x14) ||
      (*(uint *)(unaff_ESI + 0x60) < *(uint *)(unaff_ESI + 0x10))))) {
    *(uint *)(unaff_ESI + 0x10) = *(uint *)(unaff_ESI + 0x60);
    *(int *)(unaff_ESI + 0x14) = iVar2;
  }
  return;
}

