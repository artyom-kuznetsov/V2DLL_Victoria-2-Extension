// FUN_0095a780 @ 0095a780 body=[[0095a780, 0095a85c] [0095a860, 0095aa2e]]


/* WARNING: Removing unreachable block (ram,0x0095a7e7) */
/* WARNING: Removing unreachable block (ram,0x0095a88f) */

uint FUN_0095a780(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint unaff_EBX;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(*(int *)(DAT_00f20c04 + 0x4c) + 0x18))(&local_28);
  local_28 = __alldiv(unaff_EBX << 0x1e,
                      (((int)unaff_EBX >> 0x1f) << 0xf | unaff_EBX >> 0x11) << 0xf |
                      (unaff_EBX & 0x1ffff) >> 2,0x1f40000,0);
  if (local_28 < 1) {
    ExceptionList = pvStack_1c;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 100);
  if (*(int *)(iVar4 + 0x164) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(iVar4 + 0x15c);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_00f20c0c + 0xbf0) + *(int *)(iVar4 + 300) * 0x10) +
                    *(int *)(iVar9 + 0x6c) * 4);
  cVar3 = (**(code **)(*piVar1 + 0x34))();
  if (cVar3 != '\0') {
    iVar9 = 0;
    iVar4 = piVar1[0x20] - piVar1[0x1f] >> 2;
    if (0 < iVar4) {
      piVar7 = (int *)piVar1[0x1f];
      do {
        if (0 < *piVar7) {
          iVar4 = *(int *)(param_1 + 0x68);
          if (*(int *)(iVar4 + 0x28) != iVar9) {
            iVar2 = *(int *)(iVar4 + 200);
            iVar8 = iVar9 * 0x30;
            if (((((*(int *)(iVar2 + 0x24 + iVar8) - *(int *)(iVar2 + 0x20 + iVar8) & 0xfffffffcU)
                   != 0) ||
                 ((*(int *)(iVar2 + iVar8 + 0xc) - *(int *)(iVar2 + iVar8 + 8) & 0xfffffff0U) != 0))
                || (iVar8 = *(int *)(iVar4 + 0xd8) + iVar8,
                   (*(int *)(iVar8 + 0x24) - *(int *)(iVar8 + 0x20) & 0xfffffffcU) != 0)) ||
               ((*(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8) & 0xfffffff0U) != 0)) {
              if (DAT_0131bb34 == 0) {
                iVar4 = FUN_00aae9af(0x188);
                pvStack_14 = (void *)0x0;
                if (iVar4 == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = FUN_0041a160();
                }
                pvStack_14 = (void *)0xffffffff;
                FUN_00423700(uVar6);
              }
              if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar9) {
                iVar4 = FUN_0096bb70();
              }
              else {
                iVar4 = *(int *)(*(int *)(DAT_0131bb34 + 0xc) + iVar9 * 4);
              }
              if (*(int *)(*(int *)(param_1 + 0x68) + 0x3c) <= *(int *)(iVar4 + 0x3c)) {
                uVar5 = *(uint *)(piVar1[0x1f] + iVar9 * 4);
                goto LAB_0095a873;
              }
            }
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar9 < iVar4);
    }
    uVar5 = 0;
LAB_0095a873:
    lVar10 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
    if (0 < lVar10) {
      local_28 = lVar10 + local_28;
    }
    if (0 < *(int *)(piVar1[0x1f] + *(int *)(*(int *)(param_1 + 0x68) + 0x28) * 4)) {
      ExceptionList = pvStack_1c;
      return 0;
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 100) + 300);
  lVar10 = __allmul(*(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x30),
                    *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x34),local_28);
  uVar5 = *(uint *)(param_1 + 0x58);
  lVar10 = __allmul(lVar10 >> 0xf,uVar5 << 0xf,((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4);
  uVar11 = __allmul(lVar10 >> 0xf,*(undefined4 *)(iVar4 + 0xe70),*(undefined4 *)(iVar4 + 0xe74));
  uVar5 = (uint)uVar11 >> 0x1e | (int)((ulonglong)uVar11 >> 0x20) << 2;
  if ((int)uVar5 < 1) {
    uVar5 = 1;
  }
  ExceptionList = pvStack_1c;
  return uVar5;
}

