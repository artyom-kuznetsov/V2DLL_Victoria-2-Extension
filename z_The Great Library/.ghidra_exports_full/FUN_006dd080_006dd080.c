// FUN_006dd080 @ 006dd080 body=[[006dd080, 006dd106] [006dd10a, 006dd209] [006dd20d, 006dd237] [006dd23b, 006dd293] [006dd297, 006dd39b] [006dd39f, 006dd4a5] [006dd4a9, 006dd533] [006dd540, 006dd5f0] [006dd5f4, 006dd6b9] [006dd6c0, 006dd760] [006dd764, 006dd794]]


/* WARNING: Type propagation algorithm not settling */

void FUN_006dd080(int param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 uVar8;
  int ***pppiVar9;
  float10 fVar10;
  int ****ppppiStack_c4;
  char *pcStack_c0;
  undefined1 *puStack_bc;
  float fVar11;
  int iVar12;
  float fStack_a8;
  int ***pppiStack_a0;
  int ****ppppiStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_88;
  int **ppiStack_84;
  uint uStack_80;
  undefined1 *puStack_7c;
  int ****ppppiStack_78;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_54;
  undefined1 local_50 [12];
  uint uStack_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 uStack_34;
  uint uStack_30;
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bacd42;
  pvStack_14 = ExceptionList;
  puStack_bc = (undefined1 *)0x10;
  pcStack_c0 = "movements_window";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = 0;
  ppppiStack_c4 = (int ****)0x6dd0cc;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_bc = local_50;
  pcStack_c0 = (char *)0x6dd0e5;
  ppppiStack_9c = (int ****)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
  iVar12 = DAT_012588e8;
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_40) {
    pcStack_c0 = (char *)uStack_54;
                    /* WARNING: Subroutine does not return */
    ppppiStack_c4 = (int ****)&UNK_006dd107;
    FUN_00aae91b();
  }
  local_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (*(int *)(param_1 + 0x2d4) != 3) {
    pcStack_c0 = (char *)0x6dd12e;
    (*(code *)ppppiStack_9c[6][0xe])();
    ExceptionList = pvStack_18;
    return;
  }
  puStack_7c = *(undefined1 **)(DAT_012588e8 + 0xb5c);
  pppiVar9 = (int ***)(DAT_012588e8 + 0xb5c);
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  pcStack_c0 = (char *)0x11;
  ppppiStack_c4 = (int ****)0xe0ddec;
  uStack_60 = 0xf;
  uStack_64 = 0;
  auStack_74[0] = 0;
  FUN_00409350();
  pcStack_c0 = (char *)0x1;
  puStack_7c = (undefined1 *)&ppppiStack_c4;
  puStack_10 = (undefined1 *)0x1;
  ppppiStack_c4 = *(int *****)(iVar6 + 0x15a0);
  FUN_00988a50();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  pcStack_c0 = auStack_74;
  ppppiStack_c4 = (int ****)0x6dd1d1;
  pppiVar2 = (int ***)(*(code *)(*ppppiStack_9c)[0xf])();
  ppppiStack_c4 = (int ****)0xffffffff;
  FUN_00408ed0();
  ppppiStack_c4 = (int ****)0x0;
  FUN_00a5ecc0();
  if (0xf < uStack_88) {
    ppppiStack_c4 = ppppiStack_9c;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_88 = 0xf;
  uStack_8c = 0;
  uVar5 = (uint)ppppiStack_9c >> 8;
  ppppiStack_9c = (int ****)(uVar5 << 8);
  if (0xf < uStack_64) {
    ppppiStack_c4 = ppppiStack_78;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppppiStack_c4 = (int ****)0xd;
  uStack_88 = 0xf;
  uStack_8c = 0;
  ppppiStack_9c = (int ****)(uVar5 << 8);
  FUN_00409350();
  pvStack_14 = (void *)0x3;
  ppppiStack_c4 = (int ****)&ppppiStack_9c;
  piVar3 = (int *)(**(code **)((int)*pppiStack_a0 + 0x7c))();
  pvStack_18 = (void *)0xffffffff;
  if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_8c = 0xf;
  uStack_90 = 0;
  if (piVar3[0x41] == 0) {
    fStack_a8 = DAT_00f092dc;
  }
  else {
    fVar10 = (float10)(**(code **)(*(int *)(piVar3[0x41] + 0x54) + 0x10))();
    fStack_a8 = (float)fVar10;
  }
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x5c))();
  ppiStack_84 = *pppiVar9;
  pppiVar1 = pppiVar9;
  for (iVar12 = *(int *)(*(int *)(iVar12 + 0xb60) * 0x10 + *(int *)(DAT_012588e8 + 0xb98));
      iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
    ppiStack_84 = (int **)FUN_00aae9af();
    pvStack_18 = (void *)0x4;
    if (ppiStack_84 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_006cf1c0();
    }
    pvStack_18 = (void *)0xffffffff;
    uStack_68 = 0xf;
    uStack_6c = 0;
    puStack_7c = (undefined1 *)((uint)puStack_7c & 0xffffff00);
    FUN_00409350();
    pvStack_18 = (void *)0x5;
    (**(code **)(*piVar4 + 0x24))();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    (**(code **)(*piVar3 + 0x10))();
    pppiVar1 = pppiVar2;
  }
  iVar12 = piVar3[0x41];
  if ((iVar12 != 0) && (DAT_00f092dc < fStack_a8)) {
    FUN_00401000((fStack_a8 + 0.0005) * 1000.0);
    FUN_00b31c00();
    (**(code **)(*(int *)(iVar12 + 0x54) + 0x1c))();
  }
  (**(code **)(*piVar3 + 0x6c))();
  pppiStack_a0 = (int ***)0x0;
  ppppiStack_9c = (int ****)0x0;
  uStack_98 = 0;
  pvStack_18 = (void *)0x6;
  uStack_68 = 0xf;
  uStack_6c = 0;
  puStack_7c = (undefined1 *)((uint)puStack_7c & 0xffffff00);
  FUN_00409350();
  pvStack_18 = (void *)CONCAT31(pvStack_18._1_3_,7);
  piVar3 = (int *)(*(code *)(*pppiVar9)[0x1f])();
  uStack_1c = CONCAT31(uStack_1c._1_3_,6);
  if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_6c = 0xf;
  uStack_70 = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  fVar11 = DAT_00f092dc;
  if (piVar3[0x41] != 0) {
    fVar10 = (float10)(**(code **)(*(int *)(piVar3[0x41] + 0x54) + 0x10))();
    fVar11 = (float)fVar10;
  }
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x5c))();
  uStack_88 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)pppiVar1[1] * 4);
  uVar5 = *(int *)(uStack_88 + 0x1594) - *(int *)(uStack_88 + 0x1590) >> 2;
  iVar12 = 0;
  uStack_64 = uVar5;
  if (0 < (int)uVar5) {
    do {
      if (*(int *)(*(int *)(*(int *)(uStack_88 + 0x1590) + iVar12 * 4) + 0x28) != 0) {
        iVar6 = FUN_00aae9af();
        uStack_1c._0_1_ = 8;
        if (iVar6 == 0) {
          ppiVar7 = (int **)0x0;
        }
        else {
          ppiVar7 = (int **)FUN_006d0250();
        }
        uStack_1c._0_1_ = 6;
        uStack_30 = 0xf;
        uStack_34 = 0;
        uStack_44 = uStack_44 & 0xffffff00;
        FUN_00409350();
        uStack_1c._0_1_ = 9;
        (*(code *)(*ppiVar7)[9])();
        uStack_1c = CONCAT31(uStack_1c._1_3_,6);
        if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_30 = 0xf;
        uStack_34 = 0;
        uStack_44 = uStack_44 & 0xffffff00;
        if ((&stack0xffffff48 < pppiStack_a0) && (pppiVar9 <= &stack0xffffff48)) {
          if ((int ****)pppiStack_a0 == ppppiStack_9c) {
            FUN_00a513f0();
          }
          if (pppiStack_a0 != (int ***)0x0) {
            *pppiStack_a0 = pppiVar9[(int)&stack0xffffff48 - (int)pppiVar9 >> 2];
          }
        }
        else {
          if ((int ****)pppiStack_a0 == ppppiStack_9c) {
            FUN_00a513f0();
          }
          if (pppiStack_a0 != (int ***)0x0) {
            *pppiStack_a0 = ppiVar7;
          }
        }
        pppiStack_a0 = pppiStack_a0 + 1;
        uVar5 = uStack_64;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar5);
  }
  uStack_88 = CONCAT31(uStack_88._1_3_,*(undefined1 *)(param_1 + 0x16c));
  iVar12 = (int)pppiStack_a0 - (int)pppiVar9 >> 2;
  FUN_006e0600(pppiVar9,pppiStack_a0,iVar12);
  iVar6 = 0;
  if (0 < iVar12) {
    do {
      (**(code **)(*piVar3 + 0x10))();
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar12);
  }
  iVar12 = piVar3[0x41];
  if ((iVar12 != 0) && (DAT_00f092dc < fVar11)) {
    FUN_00401000((fVar11 + 0.0005) * 1000.0,piVar3);
    uVar8 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar12 + 0x54) + 0x1c))(uVar8);
  }
  (**(code **)(*piVar3 + 0x6c))();
  uStack_1c = 0xffffffff;
  if (pppiVar9 != (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(char *)(*(int *)(param_1 + 0x4c) + 0x67) != '\0') {
    (**(code **)(*(int *)((int)fStack_a8 + 0x18) + 0x34))();
  }
  ExceptionList = pvStack_24;
  return;
}

