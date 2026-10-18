// FUN_004f5860 @ 004f5860 body=[[004f5860, 004f590c]]


void FUN_004f5860(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  longlong lVar6;
  
  uVar2 = *(uint *)(unaff_ESI + 0x1d8) - *(uint *)(unaff_ESI + 0x168);
  uVar3 = uVar2 - *(uint *)(unaff_ESI + 0x158);
  uVar4 = uVar3 + *(uint *)(unaff_ESI + 0x170);
  uVar5 = uVar4 + *(uint *)(unaff_ESI + 0x160);
  lVar6 = __alldiv(uVar5 * 0x8000,
                   (((((*(int *)(unaff_ESI + 0x1dc) - *(int *)(unaff_ESI + 0x16c)) -
                      (uint)(*(uint *)(unaff_ESI + 0x1d8) < *(uint *)(unaff_ESI + 0x168))) -
                     *(int *)(unaff_ESI + 0x15c)) - (uint)(uVar2 < *(uint *)(unaff_ESI + 0x158))) +
                    *(int *)(unaff_ESI + 0x174) + (uint)CARRY4(uVar3,*(uint *)(unaff_ESI + 0x170)) +
                    *(int *)(unaff_ESI + 0x164) + (uint)CARRY4(uVar4,*(uint *)(unaff_ESI + 0x160)))
                   * 0x8000 | uVar5 >> 0x11,DAT_00f0b2d0,DAT_00f0b2d4);
  if (lVar6 != CONCAT44(DAT_013f368c,DAT_013f3688)) {
    iVar1 = *(int *)(unaff_ESI + 0x1cc);
    *(int *)(unaff_ESI + 0x1cc) = iVar1 + 1;
    *(int *)(unaff_ESI + 400 + iVar1 * 8) = (int)lVar6;
    *(int *)(unaff_ESI + 0x194 + iVar1 * 8) = (int)((ulonglong)lVar6 >> 0x20);
    *(int *)(unaff_ESI + 0x1cc) = *(int *)(unaff_ESI + 0x1cc) % 7;
    if (*(int *)(unaff_ESI + 0x1c8) < 7) {
      *(int *)(unaff_ESI + 0x1c8) = *(int *)(unaff_ESI + 0x1c8) + 1;
    }
  }
  return;
}

