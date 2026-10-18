// FUN_00961170 @ 00961170 body=[[00961170, 0096178c]]


/* WARNING: Removing unreachable block (ram,0x009615d5) */
/* WARNING: Removing unreachable block (ram,0x009614b3) */
/* WARNING: Removing unreachable block (ram,0x009613c0) */
/* WARNING: Removing unreachable block (ram,0x00961340) */
/* WARNING: Removing unreachable block (ram,0x009612e6) */
/* WARNING: Removing unreachable block (ram,0x0096136b) */
/* WARNING: Removing unreachable block (ram,0x00961453) */
/* WARNING: Removing unreachable block (ram,0x00961592) */
/* WARNING: Removing unreachable block (ram,0x00961778) */

void FUN_00961170(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint *unaff_ESI;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  int *local_48;
  int local_38;
  
  iVar8 = DAT_012586dc;
  iVar14 = *(int *)(DAT_012587e4 + 4);
  iVar13 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(iVar14 + *(int *)(iVar13 + 300) * 4);
  *unaff_ESI = param_2;
  unaff_ESI[1] = param_3;
  lVar16 = FUN_00b31c36();
  lVar17 = FUN_00b31c36();
  uVar18 = FUN_00b31c36();
  iVar4 = DAT_01258a48;
  iVar12 = (int)((ulonglong)uVar18 >> 0x20);
  uVar11 = (uint)uVar18;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    uVar10 = *(uint *)(*(int *)(iVar2 + 0xbcc) + 0x74);
    lVar19 = __alldiv(uVar10 << 0x1e,((int)uVar10 >> 0x1f) << 0x1e | uVar10 >> 2,0x1f40000,0);
    lVar19 = __allmul(*(undefined4 *)(*(int *)(iVar8 + 0x50) + 0xb8),
                      *(undefined4 *)(*(int *)(iVar8 + 0x50) + 0xbc),lVar19 + 0x8000);
    iVar13 = *(int *)(iVar13 + 300);
    *(longlong *)unaff_ESI = (lVar19 >> 0xf) + CONCAT44(param_3,param_2);
    uVar10 = *(uint *)(*(int *)(*(int *)(iVar14 + iVar13 * 4) + 0xa60) + 0x348);
    uVar18 = __alldiv(uVar10 << 0x1e,((int)uVar10 >> 0x1f) << 0x1e | uVar10 >> 2,0x1f40000,0);
    uVar10 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + (uint)uVar18;
    unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)uVar18 >> 0x20) +
                   (uint)CARRY4(uVar10,(uint)uVar18);
  }
  iVar14 = *(int *)(iVar8 + 0x50);
  uVar18 = __allmul(*(uint *)(param_1 + 0x130) - uVar11,
                    (*(int *)(param_1 + 0x134) - iVar12) -
                    (uint)(*(uint *)(param_1 + 0x130) < uVar11),*(undefined4 *)(iVar14 + 0x88),
                    *(undefined4 *)(iVar14 + 0x8c));
  iVar13 = (int)((ulonglong)uVar18 >> 0x20) + (uint)((int)uVar18 != 0);
  uVar10 = (uint)-(int)uVar18 >> 0xf | iVar13 * -0x20000;
  iVar13 = -iVar13 >> 0xf;
  if (lVar16 < CONCAT44(iVar13,uVar10)) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + uVar10;
    unaff_ESI[1] = unaff_ESI[1] + iVar13 + (uint)CARRY4(uVar1,uVar10);
  }
  uVar10 = *(uint *)(param_1 + 0x138) - uVar11;
  iVar13 = (*(int *)(param_1 + 0x13c) - iVar12) - (uint)(*(uint *)(param_1 + 0x138) < uVar11);
  if ((DAT_0131b894 < iVar13) || ((DAT_0131b894 <= iVar13 && (DAT_0131b890 <= uVar10)))) {
    lVar19 = __allmul(*(undefined4 *)(iVar14 + 0x78),*(undefined4 *)(iVar14 + 0x7c),uVar10,iVar13);
    lVar19 = lVar19 >> 0xf;
    if (lVar19 < lVar17) {
      uVar10 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + (uint)lVar19;
      unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)lVar19 >> 0x20) +
                     (uint)CARRY4(uVar10,(uint)lVar19);
    }
  }
  else {
    uVar18 = __allmul(*(undefined4 *)(iVar14 + 0x70),*(undefined4 *)(iVar14 + 0x74),uVar10,iVar13);
    iVar13 = (int)((ulonglong)uVar18 >> 0x20) + (uint)((int)uVar18 != 0);
    uVar10 = (uint)-(int)uVar18 >> 0xf | iVar13 * -0x20000;
    iVar13 = -iVar13 >> 0xf;
    if (lVar16 < CONCAT44(iVar13,uVar10)) {
      uVar1 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + uVar10;
      unaff_ESI[1] = unaff_ESI[1] + iVar13 + (uint)CARRY4(uVar1,uVar10);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x140) - uVar11;
  iVar13 = (*(int *)(param_1 + 0x144) - iVar12) - (uint)(*(uint *)(param_1 + 0x140) < uVar11);
  if ((DAT_0131b894 <= iVar13) && ((DAT_0131b894 < iVar13 || (DAT_0131b890 < uVar10)))) {
    lVar19 = __allmul(*(undefined4 *)(iVar14 + 0x80),*(undefined4 *)(iVar14 + 0x84),uVar10,iVar13);
    lVar19 = lVar19 >> 0xf;
    if (lVar19 < lVar17) {
      uVar11 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + (uint)lVar19;
      unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)lVar19 >> 0x20) +
                     (uint)CARRY4(uVar11,(uint)lVar19);
    }
  }
  local_48 = *(int **)(DAT_01258a3c + 0x1c);
  local_38 = *(int *)(DAT_01258a3c + 0x20) - (int)local_48 >> 2;
  uVar18 = __alldiv(*(uint *)(iVar14 + 0x98) << 0xf,
                    *(int *)(iVar14 + 0x9c) << 0xf | *(uint *)(iVar14 + 0x98) >> 0x11,0x320000,0);
  if (0 < local_38) {
    do {
      lVar19 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(*local_48 + 0x28) * 8),
                        *(undefined4 *)
                         (*(int *)(param_1 + 0x7c) + 4 + *(int *)(*local_48 + 0x28) * 8),uVar18);
      lVar19 = lVar19 >> 0xf;
      if (lVar19 < lVar17) {
        uVar11 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + (uint)lVar19;
        unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)lVar19 >> 0x20) +
                       (uint)CARRY4(uVar11,(uint)lVar19);
      }
      local_48 = local_48 + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  iVar13 = *(int *)(*(int *)(*(int *)(iVar2 + 0x84c) + 0x54) + 0x28);
  uVar18 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x7c) + iVar13 * 8),
                    *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4 + iVar13 * 8),
                    *(undefined4 *)(iVar14 + 0xa0),*(undefined4 *)(iVar14 + 0xa4));
  lVar19 = __alldiv((uint)uVar18 & 0xffff8000,(int)((ulonglong)uVar18 >> 0x20),0x320000,0);
  if (lVar19 < lVar17) {
    uVar11 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + (uint)lVar19;
    unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)lVar19 >> 0x20) +
                   (uint)CARRY4(uVar11,(uint)lVar19);
  }
  iVar14 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if ((0 < iVar14) && (local_38 = 0, 0 < iVar14)) {
    do {
      iVar13 = *(int *)(*(int *)(param_1 + 0x3c) + local_38 * 4);
      iVar12 = *(int *)(iVar13 + 0x74);
      if ((iVar12 != 0) &&
         (cVar9 = (**(code **)(**(int **)(iVar12 + 0xd8) + 0x20))(), cVar9 != '\0')) {
        uVar11 = *(uint *)(*(int *)(*(int *)(*(int *)(iVar13 + 0x74) + 0xd8) + 0x48) + 0x48);
        uVar18 = __alldiv(uVar11 << 0x1e,((int)uVar11 >> 0x1f) << 0x1e | uVar11 >> 2,0x1f40000,0);
        uVar11 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI - (uint)uVar18;
        unaff_ESI[1] = (unaff_ESI[1] - (int)((ulonglong)uVar18 >> 0x20)) -
                       (uint)(uVar11 < (uint)uVar18);
        break;
      }
      local_38 = local_38 + 1;
    } while (local_38 < iVar14);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x188) + 0x84) < 1) {
    lVar17 = __allmul(*(uint *)(param_1 + 0x1c0) + *(uint *)(param_1 + 0x1b8),
                      *(int *)(param_1 + 0x1c4) + *(int *)(param_1 + 0x1bc) +
                      (uint)CARRY4(*(uint *)(param_1 + 0x1c0),*(uint *)(param_1 + 0x1b8)),
                      *(undefined4 *)(*(int *)(iVar8 + 0x50) + 0x90),
                      *(undefined4 *)(*(int *)(iVar8 + 0x50) + 0x94));
    lVar17 = lVar17 >> 0xf;
    if (lVar16 < lVar17) {
      uVar11 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + (uint)lVar17;
      unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)lVar17 >> 0x20) +
                     (uint)CARRY4(uVar11,(uint)lVar17);
    }
  }
  uVar11 = *(uint *)(iVar2 + 0x680);
  lVar17 = __alldiv(uVar11 << 0x1e,((int)uVar11 >> 0x1f) << 0x1e | uVar11 >> 2,0x1f40000,0);
  if (CONCAT44(DAT_0131b894,DAT_0131b890) < lVar17) {
    piVar3 = *(int **)(iVar4 + 0x78);
    iVar13 = *(int *)(iVar4 + 0x7c) - (int)piVar3 >> 2;
    lVar19 = 0;
    iVar14 = 0;
    lVar5 = 0;
    lVar6 = CONCAT44(DAT_0131b894,DAT_0131b890);
    lVar20 = 0;
    lVar7 = 0;
    if (1 < iVar13) {
      iVar2 = *(int *)(param_1 + 0xa4);
      local_38 = (iVar13 - 2U >> 1) + 1;
      iVar14 = local_38 * 2;
      piVar15 = piVar3;
      do {
        iVar4 = *piVar15;
        lVar20 = __allmul(*(undefined4 *)(iVar2 + *(int *)(iVar4 + 0x50) * 8),
                          *(undefined4 *)(iVar2 + 4 + *(int *)(iVar4 + 0x50) * 8),
                          *(undefined4 *)(iVar4 + 0x1b8),*(undefined4 *)(iVar4 + 0x1bc));
        lVar19 = (lVar20 >> 0xf) + lVar19;
        iVar4 = piVar15[1];
        lVar20 = __allmul(*(undefined4 *)(iVar2 + *(int *)(iVar4 + 0x50) * 8),
                          *(undefined4 *)(iVar2 + 4 + *(int *)(iVar4 + 0x50) * 8),
                          *(undefined4 *)(iVar4 + 0x1b8),*(undefined4 *)(iVar4 + 0x1bc));
        lVar5 = (lVar20 >> 0xf) + lVar5;
        piVar15 = piVar15 + 2;
        local_38 = local_38 + -1;
        lVar20 = lVar19;
        lVar7 = lVar5;
      } while (local_38 != 0);
    }
    iVar2 = DAT_0131b894;
    if (iVar14 < iVar13) {
      iVar14 = piVar3[iVar14];
      lVar19 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0xa4) + *(int *)(iVar14 + 0x50) * 8),
                        *(undefined4 *)(*(int *)(param_1 + 0xa4) + 4 + *(int *)(iVar14 + 0x50) * 8),
                        *(undefined4 *)(iVar14 + 0x1b8),*(undefined4 *)(iVar14 + 0x1bc));
      lVar6 = (lVar19 >> 0xf) + CONCAT44(iVar2,DAT_0131b890);
    }
    lVar6 = lVar6 + lVar7 + lVar20;
    uVar11 = (uint)lVar6;
    uVar18 = __alldiv(uVar11 * 0x8000,(int)((ulonglong)lVar6 >> 0x20) * 0x8000 | uVar11 >> 0x11,
                      0x320000,0);
    lVar17 = __allmul(*(undefined4 *)(*(int *)(iVar8 + 0x50) + 0xb0),
                      *(undefined4 *)(*(int *)(iVar8 + 0x50) + 0xb4),lVar17);
    lVar17 = __allmul(uVar18,lVar17 >> 0xf);
    lVar17 = lVar17 >> 0xf;
    if (lVar16 < lVar17) {
      uVar11 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + (uint)lVar17;
      unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)lVar17 >> 0x20) +
                     (uint)CARRY4(uVar11,(uint)lVar17);
    }
  }
  return;
}

