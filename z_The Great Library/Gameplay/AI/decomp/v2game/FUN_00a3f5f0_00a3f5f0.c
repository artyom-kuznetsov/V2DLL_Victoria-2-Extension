// FUN_00a3f5f0 @ 00a3f5f0 body=[[00a3f5f0, 00a3f69e] [00a3f6a2, 00a3fca0] [00a3fca4, 00a3fcc4] [00a3fcc8, 00a3fd0c] [00a3fd10, 00a3fd20] [00a3fd24, 00a3fd34] [00a3fd38, 00a3fd4e]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00a3f5f0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *******pppppppuVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int in_ECX;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint *puStack_bc;
  uint *puStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 *******pppppppuStack_a0;
  uint local_9c;
  undefined1 local_94;
  uint uStack_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [52];
  int iStack_44;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b633f3;
  pvStack_14 = ExceptionList;
  local_dc = (uint *)CONCAT31(local_dc._1_3_,0x2f);
  ExceptionList = &pvStack_14;
  iVar6 = FUN_0098a0d0(&local_dc);
  PTR_DAT_00f077fc = (undefined *)(in_ECX + 0xc0);
  if (0xf < *(uint *)(in_ECX + 0xd4)) {
    PTR_DAT_00f077fc = *(undefined **)(in_ECX + 0xc0);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = 0;
  local_c = 1;
  if (iVar6 != -1) {
    uVar7 = FUN_009895f0(iVar6 + 1);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00408ed0(uVar7,0,0xffffffff);
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b0);
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_c._0_1_ = 3;
  _memset(local_78,0,0x40);
  FUN_00a7cd30(local_78);
  local_c = CONCAT31(local_c._1_3_,4);
  (**(code **)(**(int **)(param_1 + 100) + 0x158))
            (*(int **)(param_1 + 100),&DAT_00f07800,&DAT_01258b58);
  puStack_bc = (uint *)0x0;
  puStack_b8 = (uint *)0x0;
  uStack_b4 = 0;
  uStack_18 = 5;
  pppppppuVar8 = pppppppuStack_a0;
  if (uStack_8c < 0x10) {
    pppppppuVar8 = &pppppppuStack_a0;
  }
  piVar1 = (int *)(in_ECX + 0x120);
  FUN_00a7e170(param_1,&puStack_bc,piVar1,pppppppuVar8,&local_84);
  iVar14 = *(int *)(in_ECX + 0x124) - *piVar1 >> 2;
  iVar6 = 0;
  if (3 < iVar14) {
    do {
      iVar11 = *piVar1;
      *(float *)(iVar11 + iVar6 * 4) =
           *(float *)(iVar11 + iVar6 * 4) * *(float *)(iVar11 + iVar6 * 4);
      iVar11 = *piVar1;
      *(float *)(iVar11 + 4 + iVar6 * 4) =
           *(float *)(iVar11 + 4 + iVar6 * 4) * *(float *)(iVar11 + 4 + iVar6 * 4);
      iVar11 = *piVar1;
      *(float *)(iVar11 + 8 + iVar6 * 4) =
           *(float *)(iVar11 + 8 + iVar6 * 4) * *(float *)(iVar11 + 8 + iVar6 * 4);
      iVar4 = *piVar1;
      iVar11 = iVar6 * 4;
      iVar13 = iVar6 * 4;
      iVar2 = iVar6 * 4;
      iVar6 = iVar6 + 4;
      *(float *)(iVar4 + 0xc + iVar2) =
           *(float *)(iVar4 + 0xc + iVar11) * *(float *)(iVar4 + 0xc + iVar13);
    } while (iVar6 < iVar14 + -3);
  }
  for (; iVar6 < iVar14; iVar6 = iVar6 + 1) {
    iVar11 = *piVar1;
    *(float *)(iVar11 + iVar6 * 4) = *(float *)(iVar11 + iVar6 * 4) * *(float *)(iVar11 + iVar6 * 4)
    ;
  }
  puVar16 = (uint *)(((int)puStack_b8 - (int)puStack_bc) / 0x74);
  bVar5 = false;
  if (0 < (int)puVar16) {
    puVar15 = puStack_bc + 0x13;
    local_dc = puVar16;
    do {
      uVar10 = *puVar15;
      if (uVar10 == 0xffffffff) {
        bVar5 = true;
      }
      else {
        piVar1 = (int *)(in_ECX + 0x94);
        if ((int)uVar10 <= *(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 4) {
          uVar10 = uVar10 + 1;
          uVar9 = *(int *)(in_ECX + 0x98) - *piVar1 >> 4;
          if (uVar10 < uVar9) {
            FUN_00a40240(piVar1,&uStack_d8,uVar10 * 0x10 + *piVar1,*(int *)(in_ECX + 0x98));
          }
          else if (uVar9 < uVar10) {
            FUN_00a402b0();
            FUN_00a408e0(*(undefined4 *)(in_ECX + 0x98),uStack_d8);
            *(uint *)(in_ECX + 0x98) =
                 (uVar10 - (*(int *)(in_ECX + 0x98) - *piVar1 >> 4)) * 0x10 +
                 *(int *)(in_ECX + 0x98);
          }
        }
        FUN_00a40490(puVar15 + -0x13);
      }
      puVar15 = puVar15 + 0x1d;
      local_dc = (uint *)((int)local_dc + -1);
    } while (local_dc != (uint *)0x0);
    if (bVar5) {
      iVar6 = *(int *)(in_ECX + 0x94);
      uVar9 = (*(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 4) + 1;
      uVar10 = *(int *)(in_ECX + 0x98) - iVar6 >> 4;
      if (uVar9 < uVar10) {
        FUN_00a40240((int *)(in_ECX + 0x94),&uStack_d8,uVar9 * 0x10 + iVar6,
                     *(undefined4 *)(in_ECX + 0x98));
      }
      else if (uVar10 < uVar9) {
        if (0xfffffff - (uVar9 - uVar10) < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar10 = uVar10 + (uVar9 - uVar10);
        uVar12 = *(int *)(in_ECX + 0x9c) - iVar6 >> 4;
        if (uVar12 < uVar10) {
          if (0xfffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar10) {
            uVar12 = uVar10;
          }
          FUN_00a40350(uVar12);
        }
        FUN_00a408e0(*(undefined4 *)(in_ECX + 0x98),uStack_d8);
        *(uint *)(in_ECX + 0x98) =
             (uVar9 - (*(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 4)) * 0x10 +
             *(int *)(in_ECX + 0x98);
      }
      puVar15 = puStack_bc;
      if (0 < (int)puVar16) {
        do {
          local_dc = puVar15;
          if (puVar15[0x13] == 0xffffffff) {
            FUN_00a40490(puVar15);
          }
          local_dc = local_dc + 0x1d;
          puVar16 = (uint *)((int)puVar16 + -1);
          puVar15 = local_dc;
        } while (puVar16 != (uint *)0x0);
      }
    }
  }
  iVar14 = *(int *)(in_ECX + 0xe4) - *(int *)(in_ECX + 0xe0);
  iVar6 = iVar14 >> 0x1f;
  if (iVar14 / 0x2c + iVar6 != iVar6) {
    uVar7 = FUN_00a7f650(&local_84);
    *(undefined4 *)(in_ECX + 0x90) = uVar7;
  }
  *(undefined8 *)(in_ECX + 0xa4) = 0x7f7fffff7f7fffff;
  uStack_cc = 0xff7fffff;
  uStack_d4 = 0xff7fffff;
  uStack_d0 = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0xb0) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0xb4) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0xb8) = 0xff7fffff;
  *(undefined4 *)(in_ECX + 0xac) = 0x7f7fffff;
  iVar6 = *(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 4;
  if (0 < iVar6) {
    iVar14 = 0;
    do {
      iVar11 = (*(int *)(*(int *)(in_ECX + 0x94) + 4 + iVar14) -
               *(int *)(*(int *)(in_ECX + 0x94) + iVar14)) / 0x74;
      if (0 < iVar11) {
        iVar13 = 0x38;
        do {
          fVar3 = *(float *)(*(int *)(iVar14 + *(int *)(in_ECX + 0x94)) + -0xc + iVar13);
          if (fVar3 < *(float *)(in_ECX + 0xa4)) {
            *(float *)(in_ECX + 0xa4) = fVar3;
          }
          fVar3 = *(float *)(iVar13 + *(int *)(iVar14 + *(int *)(in_ECX + 0x94)));
          if (*(float *)(in_ECX + 0xb0) < fVar3) {
            *(float *)(in_ECX + 0xb0) = fVar3;
          }
          fVar3 = *(float *)(*(int *)(iVar14 + *(int *)(in_ECX + 0x94)) + -8 + iVar13);
          if (fVar3 < *(float *)(in_ECX + 0xa8)) {
            *(float *)(in_ECX + 0xa8) = fVar3;
          }
          fVar3 = *(float *)(*(int *)(iVar14 + *(int *)(in_ECX + 0x94)) + 4 + iVar13);
          if (*(float *)(in_ECX + 0xb4) < fVar3) {
            *(float *)(in_ECX + 0xb4) = fVar3;
          }
          fVar3 = *(float *)(*(int *)(iVar14 + *(int *)(in_ECX + 0x94)) + -4 + iVar13);
          if (fVar3 < *(float *)(in_ECX + 0xac)) {
            *(float *)(in_ECX + 0xac) = fVar3;
          }
          fVar3 = *(float *)(*(int *)(iVar14 + *(int *)(in_ECX + 0x94)) + 8 + iVar13);
          if (*(float *)(in_ECX + 0xb8) < fVar3) {
            *(float *)(in_ECX + 0xb8) = fVar3;
          }
          iVar13 = iVar13 + 0x74;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar14 = iVar14 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00a7fe00(*(undefined4 *)(in_ECX + 0x90),in_ECX + 0xf0,&local_84);
  FUN_00a7f960(&uStack_d4,in_ECX + 0x100,in_ECX + 0x110,&local_84);
  if (puStack_bc != (uint *)0x0) {
    if (puStack_bc != puStack_b8) {
      puVar16 = puStack_bc + 0x1b;
      do {
        if (0xf < *puVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar16[-5]);
        }
        *puVar16 = 0xf;
        puVar16[-1] = 0;
        *(undefined1 *)(puVar16 + -5) = 0;
        puVar15 = puVar16 + 2;
        puVar16 = puVar16 + 0x1d;
      } while (puVar15 != puStack_b8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puStack_bc);
  }
  uStack_18 = 6;
  FUN_00a7d0c0();
  iVar6 = local_34;
  uStack_18 = 7;
  if (local_34 != 0) {
    FUN_00a7da00(local_34,local_30,&local_28,uStack_d8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar6);
  }
  if (iStack_44 == 0) {
    if (uStack_8c < 0x10) {
      ExceptionList = local_20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pppppppuStack_a0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iStack_44);
}

