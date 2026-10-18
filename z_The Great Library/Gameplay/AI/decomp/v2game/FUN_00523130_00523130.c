// FUN_00523130 @ 00523130 body=[[00523130, 005233f7]]


/* WARNING: Removing unreachable block (ram,0x005233aa) */

undefined4 FUN_00523130(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xa60) + 0x3c0) + 1000;
  if (0 < iVar4) {
    iVar1 = *(int *)(DAT_012586dc + 0x10);
    uVar5 = __alldiv((longlong)iVar4 * (longlong)*(int *)(iVar1 + 0x28),1000,0);
    lVar9 = __alldiv(uVar5 << 0x1e,
                     (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf | (uVar5 & 0x1ffff) >> 2,
                     0x1f40000,0);
    iVar4 = (int)((ulonglong)lVar9 >> 0x20);
    if (param_3 == 0) {
      lVar11 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4);
      iVar7 = *(int *)(iVar2 + 0xe88);
      iVar2 = *(int *)(*(int *)(iVar2 + 0xa60) + 0x3c0);
      uVar5 = iVar2 + 1000;
      uVar10 = __alldiv(iVar2 * 0x40000000,
                        (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf |
                        (uVar5 & 0x1ffff) >> 2,0x1f40000,0);
      lVar11 = __allmul(*(uint *)(iVar7 + 0x10) - *(uint *)(iVar7 + 0x18),
                        (*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x1c)) -
                        (uint)(*(uint *)(iVar7 + 0x10) < *(uint *)(iVar7 + 0x18)),uVar10);
      lVar11 = lVar11 >> 0xf;
    }
    iVar7 = (int)((ulonglong)lVar11 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x20);
    if (((param_3 == iVar2) ||
        (((*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + param_3 * 4) + 0x34) == 0 &&
          ((((char)param_2 != 'R' || ((char)((uint)param_2 >> 8) != 'E')) ||
           ((char)((uint)param_2 >> 0x10) != 'B')))) &&
         (((*(char *)(param_1 + 0x1c) != 'R' || (*(char *)(param_1 + 0x1d) != 'E')) ||
          (*(char *)(param_1 + 0x1e) != 'B')))))) &&
       ((*(int *)(param_1 + 0xe9c) + (*(int *)(iVar1 + 8) / 1000) * 0x2238 <=
         *(int *)(DAT_012588e8 + 0xb0c) || (iVar2 == param_3)))) {
      piVar6 = *(int **)(param_1 + 0xe8c);
      do {
        if ((piVar6 < *(int **)(param_1 + 0xe8c)) || (*(int **)(param_1 + 0xe90) <= piVar6)) {
          if (param_3 == 0) {
            return 1;
          }
          if (iVar7 < DAT_0125db6c) {
            return 0;
          }
          if (DAT_0125db6c < iVar7) {
            return 1;
          }
          bVar8 = DAT_0125db68 < (uint)lVar11;
          goto LAB_005233eb;
        }
        iVar3 = *piVar6;
        piVar6 = piVar6 + 1;
      } while (*(int *)(iVar3 + 0xc) != param_3);
      if (*(char *)(iVar3 + 0x20) != '\0') {
        if (*(int *)(iVar3 + 0xc) == 0) {
          FUN_0043a5b0(*(undefined4 *)(iVar1 + 0x10));
          if (*(int *)(iVar3 + 0x1c) <= iVar4) {
            if (iVar4 <= *(int *)(iVar3 + 0x1c)) {
              bVar8 = *(uint *)(iVar3 + 0x18) < (uint)lVar9;
LAB_005233eb:
              if (!bVar8) {
                return 0;
              }
            }
            return 1;
          }
        }
        else {
          if (iVar2 == param_3) {
            if (CONCAT44(DAT_0125db6c,DAT_0125db68) < lVar11) {
              return 1;
            }
            return 0;
          }
          lVar12 = __allmul(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564),
                            lVar9);
          FUN_0048bfc0((lVar12 >> 0xf) - *(longlong *)(iVar3 + 0x18),
                       lVar11 - CONCAT44(DAT_0125db6c,DAT_0125db68));
          if (-1 < lVar9) {
            if (0xffffffff < lVar9) {
              return 1;
            }
            if ((uint)lVar9 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

