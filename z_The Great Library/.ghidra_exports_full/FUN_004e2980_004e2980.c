// FUN_004e2980 @ 004e2980 body=[[004e2980, 004e2c68]]


/* WARNING: Removing unreachable block (ram,0x004e2c09) */

void FUN_004e2980(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong local_20;
  uint local_c;
  
  piVar11 = *(int **)(param_1 + 0xa4);
  local_20 = 0;
  local_c = 0;
  if (piVar11 != (int *)0x0) {
    do {
      iVar7 = *piVar11;
      piVar11 = (int *)piVar11[2];
      if (*(int *)(iVar7 + 0x58) < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x10) / 1000) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x58) /
                (((*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14) / 1000) * 1000) / 1000) + 1;
      }
      local_c = local_c + iVar7;
    } while (piVar11 != (int *)0x0);
  }
  iVar7 = *(int *)(DAT_012586dc + 0x50);
  uVar9 = *(uint *)(iVar7 + 0x130);
  iVar2 = *(int *)(iVar7 + 0x134);
  piVar11 = *(int **)(param_1 + 0xa4);
  uVar3 = *(uint *)(iVar7 + 0x128);
  iVar7 = *(int *)(iVar7 + 300);
  if (piVar11 != (int *)0x0) {
    uVar12 = FUN_00b31c36();
    do {
      iVar4 = *piVar11;
      uVar8 = *(uint *)(iVar4 + 0x218) + (uint)uVar12;
      iVar10 = *(int *)(iVar4 + 0x21c) + (int)((ulonglong)uVar12 >> 0x20) +
               (uint)CARRY4(*(uint *)(iVar4 + 0x218),(uint)uVar12);
      if (-1 < iVar10) {
        iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                          *(int *)(*(int *)(iVar4 + 100) + 300) * 4) + 0x1234) + 4);
        uVar6 = *(uint *)(iVar5 + 0x10);
        iVar5 = *(int *)(iVar5 + 0x14);
        uVar13 = __alldiv(uVar8 * 0x8000,iVar10 * 0x8000 | uVar8 >> 0x11,DAT_00f0b1f0,DAT_00f0b1f4);
        uVar13 = __allmul(uVar13,*(undefined4 *)(iVar4 + 0x128),*(undefined4 *)(iVar4 + 300));
        lVar14 = __alldiv((uint)uVar13 & 0xffff8000,(int)((ulonglong)uVar13 >> 0x20),uVar6 + 0x8000,
                          iVar5 + (uint)(0xffff7fff < uVar6));
        iVar10 = *(int *)(iVar4 + 0x124);
        if ((iVar10 < iVar2) || ((iVar10 <= iVar2 && (*(uint *)(iVar4 + 0x120) <= uVar9)))) {
          if ((iVar7 <= iVar10) && ((iVar7 < iVar10 || (uVar3 < *(uint *)(iVar4 + 0x120))))) {
            uVar15 = 0x28000;
            goto LAB_004e2b32;
          }
        }
        else {
          uVar15 = 0x50000;
LAB_004e2b32:
          lVar14 = __allmul(lVar14,uVar15,0);
          lVar14 = lVar14 >> 0xf;
        }
        local_20 = lVar14 + local_20;
      }
      piVar11 = (int *)piVar11[2];
    } while (piVar11 != (int *)0x0);
  }
  if (local_c != 0) {
    local_20 = __alldiv(local_20 << 0xf,local_c << 0xf,
                        ((int)local_c >> 0x1f) << 0xf | local_c >> 0x11);
  }
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(param_1 + 0x3c) * 4) + 0xbcc) + 0x88) +
                  *(int *)(*(int *)(param_1 + 0x30) + 8) * 4);
  uVar9 = iVar7 + 1000;
  uVar12 = __alldiv(iVar7 << 0x1e,((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2,0x1f40000,0);
  uVar12 = __allmul(uVar12,local_20);
  lVar14 = __alldiv((uint)uVar12 & 0xffff8000,(int)((ulonglong)uVar12 >> 0x20),0x320000,0);
  if (lVar14 < 0) {
LAB_004e2c54:
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    if ((lVar14 < 0x100000000) && ((uint)lVar14 < 0x8001)) {
      if (lVar14 < 1) goto LAB_004e2c54;
    }
    else {
      lVar14 = 0x8000;
    }
    *(longlong *)(param_1 + 0xc0) = lVar14;
    puVar1 = (uint *)(param_1 + 0xb8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 + (uint)lVar14;
    *(int *)(param_1 + 0xbc) =
         *(int *)(param_1 + 0xbc) + (int)((ulonglong)lVar14 >> 0x20) +
         (uint)CARRY4(uVar9,(uint)lVar14);
    if ((-1 < *(int *)(param_1 + 0xbc)) &&
       ((0 < *(int *)(param_1 + 0xbc) || (0x8000 < *(uint *)(param_1 + 0xb8))))) {
      *(undefined4 *)(param_1 + 0xb8) = 0x8000;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return;
    }
  }
  return;
}

