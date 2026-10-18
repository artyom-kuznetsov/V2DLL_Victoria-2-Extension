// FUN_0095aa30 @ 0095aa30 body=[[0095aa30, 0095ac9d]]


/* WARNING: Removing unreachable block (ram,0x0095aa9b) */
/* WARNING: Removing unreachable block (ram,0x0095ab42) */

uint FUN_0095aa30(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint unaff_ESI;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int local_24 [2];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(*(int *)(DAT_00f20c04 + 0x7c) + 0x18))(local_24);
  lVar11 = __alldiv(unaff_ESI << 0x1e,
                    (((int)unaff_ESI >> 0x1f) << 0xf | unaff_ESI >> 0x11) << 0xf |
                    (unaff_ESI & 0x1ffff) >> 2,0x1f40000,0);
  local_24[0] = (int)((ulonglong)lVar11 >> 0x20);
  uVar4 = (undefined4)lVar11;
  if (lVar11 < 1) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  iVar5 = *(int *)(param_1 + 100);
  if (*(int *)(iVar5 + 0x164) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = **(int **)(iVar5 + 0x15c);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) + *(int *)(iVar5 + 300) * 0x10) +
                    *(int *)(iVar10 + 0x6c) * 4);
  cVar3 = (**(code **)(*piVar1 + 0x34))();
  if (cVar3 != '\0') {
    iVar10 = 0;
    iVar5 = piVar1[0x20] - piVar1[0x1f] >> 2;
    if (0 < iVar5) {
      piVar8 = (int *)piVar1[0x1f];
      do {
        if (0 < *piVar8) {
          iVar5 = *(int *)(param_1 + 0x68);
          if (*(int *)(iVar5 + 0x28) == iVar10) break;
          iVar2 = *(int *)(iVar5 + 200);
          iVar9 = iVar10 * 0x30;
          if (((*(int *)(iVar2 + 0x24 + iVar9) - *(int *)(iVar2 + 0x20 + iVar9) & 0xfffffffcU) == 0)
             && ((*(int *)(iVar2 + iVar9 + 0xc) - *(int *)(iVar2 + iVar9 + 8) & 0xfffffff0U) == 0))
          {
            iVar5 = *(int *)(iVar5 + 0xd8);
            if (((*(int *)(iVar5 + 0x24 + iVar9) - *(int *)(iVar5 + 0x20 + iVar9) & 0xfffffffcU) ==
                 0) && ((*(int *)(iVar5 + iVar9 + 0xc) - *(int *)(iVar5 + iVar9 + 8) & 0xfffffff0U)
                        == 0)) break;
          }
          if (DAT_0131bb34 == 0) {
            iVar5 = FUN_00aae9af(0x188);
            pvStack_14 = (void *)0x0;
            if (iVar5 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_0041a160();
            }
            pvStack_14 = (void *)0xffffffff;
            FUN_00423700(uVar7);
          }
          if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar10) {
            iVar5 = FUN_0096bb70();
          }
          else {
            iVar5 = *(int *)(*(int *)(DAT_0131bb34 + 0xc) + iVar10 * 4);
          }
          if (*(int *)(*(int *)(param_1 + 0x68) + 0x3c) <= *(int *)(iVar5 + 0x3c)) {
            uVar6 = *(uint *)(piVar1[0x1f] + iVar10 * 4);
            goto LAB_0095ab22;
          }
          break;
        }
        iVar10 = iVar10 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar10 < iVar5);
    }
    uVar6 = 0;
LAB_0095ab22:
    lVar12 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
    lVar11 = CONCAT44(local_24[0],uVar4);
    if (0 < lVar12) {
      lVar11 = lVar12 + CONCAT44(local_24[0],uVar4);
    }
  }
  lVar11 = __allmul(*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x30),
                    *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x34),lVar11);
  uVar6 = *(uint *)(param_1 + 0x58);
  uVar13 = __allmul(lVar11 >> 0xf,uVar6 << 0xf,((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11);
  uVar6 = (uint)uVar13 >> 0x1e | (int)((ulonglong)uVar13 >> 0x20) << 2;
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  ExceptionList = pvStack_1c;
  return uVar6;
}

