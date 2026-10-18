// FUN_0095dec0 @ 0095dec0 body=[[0095dec0, 0095e09e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0095dec0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_EDX;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar1 = *(int *)(param_1 + 100);
  if (*(int *)(iVar1 + 300) == 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  lVar10 = *(longlong *)(iVar1 + 0x30);
  iVar2 = *(int *)(*(int *)(DAT_00f20c08 + 0x50) + 0x6c);
  uVar3 = *(uint *)(*(int *)(DAT_00f20c08 + 0x50) + 0x68);
  iVar4 = *(int *)(param_1 + 0x134);
  uVar5 = *(uint *)(param_1 + 0x130);
  if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (uVar5 < uVar3)))) {
    uVar6 = uVar5 - uVar3 >> 0xf;
    lVar7 = __allmul((uVar5 - uVar3 & 0x7fff) << 2 | uVar6 << 0x11,
                     (int)(((iVar4 - iVar2) - (uint)(uVar5 < uVar3)) * 0x20000 | uVar6) >> 0xf,
                     *(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34));
    lVar10 = (lVar7 >> 0xf) + lVar10;
  }
  uVar8 = CONCAT44(DAT_013f1c84,DAT_013f1c80);
  if ((_DAT_013f1c88 & 1) == 0) {
    _DAT_013f1c88 = _DAT_013f1c88 | 1;
    uVar8 = FUN_00b31c36();
  }
  DAT_013f1c84 = (undefined4)((ulonglong)uVar8 >> 0x20);
  DAT_013f1c80 = (undefined4)uVar8;
  iVar1 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(DAT_012587e4 + 4);
  uVar3 = *(uint *)(*(int *)(*(int *)(iVar2 + *(int *)(iVar1 + 300) * 4) + 0xa60) + 400);
  uVar8 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
  lVar7 = __allmul(DAT_013f1c80,DAT_013f1c84,uVar8);
  iVar4 = *(int *)(iVar1 + 300);
  uVar3 = *(uint *)(*(int *)(iVar1 + 0x9c) + 0x188);
  lVar9 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
  lVar10 = lVar10 + (lVar7 >> 0xf) +
                    lVar9 + *(longlong *)(*(int *)(*(int *)(iVar2 + iVar4 * 4) + 0xbcc) + 0x80);
  if (*(char *)(*(int *)(param_1 + 0x68) + 0x3d9) != '\0') {
    lVar10 = __alldiv((uint)lVar10 * 0x8000,
                      (int)((ulonglong)lVar10 >> 0x20) * 0x8000 | (uint)lVar10 >> 0x11,
                      *(undefined4 *)(*(int *)(DAT_00f20c08 + 0x50) + 0x158),
                      *(undefined4 *)(*(int *)(DAT_00f20c08 + 0x50) + 0x15c));
  }
  uVar3 = *(uint *)(param_1 + 0x58);
  lVar10 = __allmul(uVar3 << 0xf,((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11,lVar10);
  return lVar10 >> 0x1e;
}

