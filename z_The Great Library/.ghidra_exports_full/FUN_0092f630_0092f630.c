// FUN_0092f630 @ 0092f630 body=[[0092f630, 0092fb53]]


/* WARNING: Removing unreachable block (ram,0x0092f8ba) */

void FUN_0092f630(int param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar7 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(iVar7 + *(int *)(param_3 + 4) * 4);
  iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 4) * 4);
  lVar10 = 0x8000;
  if (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(param_1 + 0x90)) {
    uVar8 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x2f0);
    lVar10 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = lVar10 + 0x8000;
  }
  iVar9 = DAT_012586dc;
  iVar4 = *(int *)(iVar2 + 0xd8c);
  iVar6 = *(int *)(iVar2 + 0xd88);
  if (iVar6 == iVar4) {
LAB_0092f717:
    uVar8 = *(uint *)(iVar3 + 0xd88);
    do {
      if ((uVar8 < *(uint *)(iVar3 + 0xd88)) || (*(uint *)(iVar3 + 0xd8c) <= uVar8))
      goto LAB_0092f788;
      piVar1 = (int *)(uVar8 + 4);
      uVar8 = uVar8 + 8;
    } while (*(int *)(*(int *)(iVar7 + *piVar1 * 4) + 0x142c) != *(int *)(param_3 + 4));
    uVar8 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x410);
    lVar11 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = lVar11 + lVar10;
    iVar9 = DAT_012586dc;
  }
  else {
    do {
      if (*(int *)(iVar6 + 4) == *(int *)(param_4 + 4)) break;
      iVar6 = iVar6 + 8;
    } while (iVar6 != iVar4);
    if (iVar6 == iVar4) goto LAB_0092f717;
    uVar8 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x40c);
    lVar11 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = lVar10 + lVar11;
  }
LAB_0092f788:
  if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar2 + 0xbe4) * 4) + 0x16c) !=
      *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar3 + 0xbe4) * 4) + 0x16c)) {
    uVar8 = *(uint *)(*(int *)(iVar9 + 0x30) + 0x414);
    lVar11 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = lVar11 + lVar10;
  }
  iVar7 = *(int *)(param_3 + 4);
  if ((*(int *)(iVar3 + 0xcfc) == iVar7) && (*(char *)(iVar3 + 0xcf4) == '\0')) {
    uVar8 = *(uint *)(*(int *)(iVar9 + 0x30) + 0x418);
    lVar11 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = lVar11 + lVar10;
  }
  uVar8 = *(uint *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(param_4 + 4) * 4) + 0x3c);
  iVar4 = *(int *)(iVar9 + 0x30);
  uVar5 = *(uint *)(iVar4 + 0x48c);
  lVar11 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
  lVar12 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  lVar12 = __alldiv(lVar12 << 0xf,lVar11);
  lVar10 = lVar10 + lVar12;
  FUN_005404a0(iVar3);
  if (0 < lVar11) {
    uVar8 = *(uint *)(*(int *)(iVar3 + 0x1580) + iVar7 * 8);
    uVar5 = *(uint *)(iVar4 + 0x488);
    uVar13 = __alldiv(uVar8 << 0xf,
                      *(int *)(*(int *)(iVar3 + 0x1580) + 4 + iVar7 * 8) << 0xf | uVar8 >> 0x11,
                      lVar11);
    uVar14 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
    lVar11 = __allmul(0x8000 - (uint)uVar13,
                      -(uint)(0x8000 < (uint)uVar13) - (int)((ulonglong)uVar13 >> 0x20),uVar14);
    lVar10 = lVar10 - (lVar11 >> 0xf);
  }
  iVar7 = *(int *)(DAT_012586dc + 0x50);
  uVar8 = *(uint *)(iVar7 + 0x1d0) >> 0xf | *(int *)(iVar7 + 0x1d4) << 0x11;
  if ((uVar8 < *(uint *)(iVar3 + 0x12e8)) &&
     (iVar7 = (int)(*(int *)(iVar3 + 0x12e8) - uVar8) /
              (int)(*(uint *)(iVar7 + 0x1d8) >> 0xf | *(int *)(iVar7 + 0x1dc) << 0x11), 0 < iVar7))
  {
    FUN_00401000(((float)iVar7 + 0.0005) * 1000.0);
    iVar7 = FUN_00b31c00();
    uVar8 = __alldiv((longlong)*(int *)(iVar4 + 0x564) * (longlong)iVar7,1000,0);
    lVar11 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar10 = lVar11 + lVar10;
  }
  uVar8 = *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0);
  lVar11 = __alldiv(uVar8 * 0x40000000,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  lVar11 = lVar11 + CONCAT44(*(int *)(iVar2 + 0x1a4) + *(int *)(iVar2 + 0x19c) +
                             (uint)CARRY4(*(uint *)(iVar2 + 0x1a0),*(uint *)(iVar2 + 0x198)),
                             *(uint *)(iVar2 + 0x1a0) + *(uint *)(iVar2 + 0x198));
  uVar8 = *(int *)(*(int *)(iVar3 + 0xbcc) + 0x28c) + *(int *)(iVar3 + 0xea0);
  lVar12 = __alldiv(uVar8 * 0x40000000,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  lVar12 = lVar12 + CONCAT44(*(int *)(iVar3 + 0x1a4) + *(int *)(iVar3 + 0x19c) +
                             (uint)CARRY4(*(uint *)(iVar3 + 0x1a0),*(uint *)(iVar3 + 0x198)),
                             *(uint *)(iVar3 + 0x1a0) + *(uint *)(iVar3 + 0x198));
  if (((int)((ulonglong)lVar12 >> 0x20) < 1) && (lVar12 < 0)) {
    lVar12 = 0;
  }
  if (lVar11 == 0) {
    lVar11 = 0x8000;
  }
  lVar11 = __alldiv(lVar12 << 0xf,lVar11);
  if (-1 < lVar11) {
    if ((0xffffffff < lVar11) || (0x10000 < (uint)lVar11)) {
      lVar11 = 0x10000;
      goto LAB_0092faf9;
    }
    if ((0xffffffff < lVar11) || (-1 < lVar11)) goto LAB_0092faf9;
  }
  lVar11 = 0;
LAB_0092faf9:
  lVar10 = lVar10 + CONCAT44(-(uint)(0x8000 < (uint)lVar11) - (int)((ulonglong)lVar11 >> 0x20),
                             0x8000 - (uint)lVar11);
  if (((int)((ulonglong)lVar10 >> 0x20) < 1) && (lVar10 < 0)) {
    lVar10 = 0;
  }
  uVar13 = __allmul(lVar10,0x1f40000,0);
  *param_2 = (uint)uVar13 >> 0x1e | (int)((ulonglong)uVar13 >> 0x20) << 2;
  return;
}

