// FUN_0095fcb0 @ 0095fcb0 body=[[0095fcb0, 0096010a]]


/* WARNING: Removing unreachable block (ram,0x0095ff11) */
/* WARNING: Removing unreachable block (ram,0x0095fe69) */
/* WARNING: Removing unreachable block (ram,0x0095ffe7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095fcb0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EDI;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = DAT_012586dc;
  uVar9 = CONCAT44(DAT_013f1c74,DAT_013f1c70);
  iVar1 = *(int *)(unaff_EDI + 100);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4);
  if (((*(char *)(iVar1 + 0x130) == 'R') && (*(char *)(iVar1 + 0x131) == 'E')) &&
     (*(char *)(iVar1 + 0x132) == 'B')) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  uVar8 = DAT_013f1c78;
  if ((DAT_013f1c78 & 1) == 0) {
    uVar8 = DAT_013f1c78 | 1;
    DAT_013f1c78 = uVar8;
    uVar9 = FUN_00b31c36();
  }
  uVar10 = CONCAT44(DAT_013f1c6c,DAT_013f1c68);
  DAT_013f1c74 = (undefined4)((ulonglong)uVar9 >> 0x20);
  DAT_013f1c70 = (undefined4)uVar9;
  if ((uVar8 & 2) == 0) {
    uVar8 = uVar8 | 2;
    DAT_013f1c78 = uVar8;
    uVar10 = FUN_00b31c36();
    uVar9 = CONCAT44(DAT_013f1c74,DAT_013f1c70);
  }
  DAT_013f1c6c = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_013f1c68 = (undefined4)uVar10;
  DAT_013f1c74 = (undefined4)((ulonglong)uVar9 >> 0x20);
  DAT_013f1c70 = (undefined4)uVar9;
  if ((uVar8 & 4) == 0) {
    DAT_013f1c78 = uVar8 | 4;
    _DAT_013f1c60 = FUN_00b31c36();
    uVar9 = CONCAT44(DAT_013f1c74,DAT_013f1c70);
    uVar10 = CONCAT44(DAT_013f1c6c,DAT_013f1c68);
  }
  DAT_013f1c74 = (undefined4)((ulonglong)uVar9 >> 0x20);
  DAT_013f1c70 = (undefined4)uVar9;
  DAT_013f1c6c = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_013f1c68 = (undefined4)uVar10;
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 100) + 0x188) + 0x84);
  local_18 = 0x8000;
  local_14 = 0;
  if (0 < iVar1) {
    iVar3 = *(int *)(iVar4 + 0x50);
    local_18 = *(undefined4 *)(iVar3 + 0xe8);
    local_14 = *(undefined4 *)(iVar3 + 0xec);
  }
  uVar8 = *(uint *)(*(int *)(iVar2 + 0xa60) + 0x2a0);
  lVar11 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  iVar4 = *(int *)(iVar4 + 0x50);
  lVar12 = __allmul(*(undefined4 *)(iVar4 + 0xc0),*(undefined4 *)(iVar4 + 0xc4),
                    *(undefined4 *)(unaff_EDI + 0x128),*(undefined4 *)(unaff_EDI + 300));
  lVar11 = __allmul(lVar12 >> 0xf,lVar11 + 0x8000);
  lVar12 = __allmul(lVar11 >> 0xf,local_18,local_14);
  lVar11 = 0;
  if (CONCAT44(DAT_013f1c74,DAT_013f1c70) < lVar12 >> 0xf) {
    lVar11 = lVar12 >> 0xf;
  }
  uVar8 = *(uint *)(iVar2 + 0x1a8);
  uVar9 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  uVar9 = __allmul(uVar9,lVar11);
  lVar11 = __alldiv((uint)uVar9 & 0xffff8000,(int)((ulonglong)uVar9 >> 0x20),0x320000,0);
  lVar12 = __allmul(*(undefined4 *)(iVar4 + 200),*(undefined4 *)(iVar4 + 0xcc),
                    *(undefined4 *)(unaff_EDI + 0x140),*(undefined4 *)(unaff_EDI + 0x144));
  lVar12 = __allmul(lVar12 >> 0xf,local_18,local_14);
  if (CONCAT44(DAT_013f1c74,DAT_013f1c70) < lVar12 >> 0xf) {
    lVar11 = (lVar12 >> 0xf) + lVar11;
  }
  uVar8 = *(uint *)(*(int *)(unaff_EDI + 100) + 0x1bc);
  uVar5 = *(uint *)(*(int *)(unaff_EDI + 100) + 0x1a8);
  uVar6 = uVar8 >> 0x11;
  uVar7 = uVar5 >> 0x11;
  uVar9 = CONCAT44(uVar6,uVar8 << 0xf);
  if ((DAT_0131b894 <= (int)uVar7) &&
     ((DAT_0131b894 < (int)uVar7 ||
      (uVar9 = CONCAT44(uVar6,uVar8 << 0xf), DAT_0131b890 < uVar5 << 0xf)))) {
    uVar5 = *(uint *)(*(int *)(unaff_EDI + 100) + 0x1a8);
    uVar9 = __alldiv(uVar8 << 0x1e,uVar6 << 0xf | (uVar8 & 0x1ffff) >> 2,uVar5 << 0xf,uVar5 >> 0x11)
    ;
  }
  if (*(int *)(*(int *)(unaff_EDI + 0x68) + 0x3c) == 0) {
    uVar15 = *(undefined4 *)(iVar4 + 0xd4);
    uVar14 = *(undefined4 *)(iVar4 + 0xd0);
  }
  else {
    uVar15 = *(undefined4 *)(iVar4 + 0xdc);
    uVar14 = *(undefined4 *)(iVar4 + 0xd8);
  }
  lVar12 = __allmul(uVar14,uVar15,uVar9);
  lVar12 = __allmul(lVar12 >> 0xf,local_18,local_14);
  if (lVar12 >> 0xf < CONCAT44(DAT_013f1c6c,DAT_013f1c68)) {
    lVar11 = (lVar12 >> 0xf) + lVar11;
  }
  iVar2 = *(int *)(unaff_EDI + 100);
  uVar8 = *(uint *)(*(int *)(iVar2 + 0x9c) + 0x2b0);
  lVar12 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  iVar4 = *(int *)(DAT_012587e4 + 4);
  uVar8 = *(uint *)(*(int *)(*(int *)(iVar4 + *(int *)(iVar2 + 300) * 4) + 0xa60) + 0x330);
  lVar13 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
  lVar11 = lVar11 + lVar12 + lVar13;
  if (iVar1 < 1) {
    uVar8 = *(uint *)(*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(unaff_EDI + 100) + 300) * 4) +
                              0xa60) + 0x340);
    lVar12 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar11 = lVar11 + lVar12;
  }
  if (*(char *)(unaff_EDI + 0x4c) == '\0') {
    uVar8 = *(uint *)(*(int *)(*(int *)(iVar4 + *(int *)(*(int *)(unaff_EDI + 100) + 300) * 4) +
                              0xa60) + 0x350);
    lVar12 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar11 = lVar12 + lVar11;
  }
  *param_1 = lVar11;
  return;
}

