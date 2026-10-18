// FUN_00853fc0 @ 00853fc0  (requested 00854075, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_00853fc0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  undefined4 *puStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  undefined4 local_14c;
  undefined4 *puStack_148;
  undefined4 *local_140;
  undefined4 *puStack_13c;
  int iStack_138;
  undefined1 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 *puStack_110;
  undefined4 *local_10c;
  undefined4 *puStack_108;
  int iStack_104;
  undefined1 uStack_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar4 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba3be5;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x30) = 1;
  iVar4 = (*(int *)(iVar4 + 0xb0c) + -43800000) / 0x18;
  iVar8 = 0;
  for (iVar4 = (iVar4 - (int)((float)(int)((double)iVar4 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar4; iVar4 = iVar4 - (&DAT_00f1027c)[iVar8]) {
    iVar8 = iVar8 + 1;
  }
  if (*(int *)(in_ECX + 0x68) != iVar8) {
    bVar11 = DAT_012586d7 != '\0';
    *(int *)(in_ECX + 0x68) = iVar8;
    if (bVar11) {
      local_f8 = 0xf;
      local_fc = 0;
      local_10c = (undefined4 *)((uint)local_10c & 0xffffff00);
      FUN_00409350("ai_national_focus.cpp",0x15);
      local_c = 0;
      local_150 = *(int *)(in_ECX + 0x34);
      local_14c = *(undefined4 *)(in_ECX + 0x38);
      puVar5 = (undefined4 *)FUN_0055dd40();
      local_c._0_1_ = 1;
      uVar6 = FUN_004015b0(&local_10c,0x47,0x10002);
      local_c._0_1_ = 2;
      FUN_00987d50(uVar6,"Recalc national focus for ",0x1a,0);
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      uVar6 = FUN_00418e30(uVar6,puVar5);
      FUN_00401280(uVar6);
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_140);
      }
      local_c = 0xffffffff;
      uStack_12c = 0xf;
      uStack_130 = 0;
      local_140 = (undefined4 *)((uint)local_140 & 0xffffff00);
      if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_10c);
      }
    }
    local_c = 0xffffffff;
    local_150 = *(int *)(in_ECX + 0x34);
    local_14c = *(undefined4 *)(in_ECX + 0x38);
    piVar1 = (int *)(in_ECX + 0x6c);
    FUN_00854620(piVar1,&local_150);
    uStack_124 = *(undefined4 *)(in_ECX + 0x34);
    puStack_110 = (undefined4 *)
                  (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x148c);
    iStack_114 = DAT_012588e8;
    local_10c = (undefined4 *)0x0;
    puStack_108 = (undefined4 *)0x0;
    iStack_104 = 0;
    uStack_100 = 0;
    local_140 = (undefined4 *)0x0;
    puStack_13c = (undefined4 *)0x0;
    iStack_138 = 0;
    uStack_134 = 0;
    local_c = 4;
    puStack_15c = (undefined4 *)0x0;
    iStack_118 = 0;
    if (0 < (*(int *)(in_ECX + 0x70) - *piVar1) / 0xc) {
      iStack_158 = 0;
      do {
        puStack_148 = *(undefined4 **)(in_ECX + 0x34);
        if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x1488) <=
            (int)puStack_15c) break;
        uStack_e8 = *(undefined4 *)(in_ECX + 0x34);
        uStack_e4 = *(undefined4 *)(in_ECX + 0x38);
        cVar3 = FUN_00563fb0(*(undefined4 *)(*piVar1 + 8 + iStack_158),
                             *(undefined4 *)(*piVar1 + 4 + iStack_158));
        puVar5 = local_140;
        puVar9 = local_10c;
        if (cVar3 != '\0') {
          uStack_ec = *(undefined4 *)(in_ECX + 0x38);
          uStack_f0 = *(undefined4 *)(in_ECX + 0x34);
          piVar7 = (int *)FUN_00564770(*(undefined4 *)(*piVar1 + 8 + iStack_158),&local_150,
                                       &uStack_f0);
          puVar2 = puStack_108;
          puVar5 = local_140;
          puVar9 = local_10c;
          if (0 < *piVar7) {
            iVar8 = iStack_158 + *piVar1;
            puStack_15c = (undefined4 *)((int)puStack_15c + 1);
            iVar4 = *(int *)(iVar8 + 4);
            if (*(int *)(iVar4 + 0x164) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = **(int **)(iVar4 + 0x15c);
            }
            for (piVar7 = (int *)*puStack_110; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
              if (*piVar7 == iVar10) {
                puStack_148 = *(undefined4 **)(in_ECX + 0x34);
                if (*(int *)(iVar4 + 0x164) == 0) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = **(int **)(iVar4 + 0x15c);
                }
                if (*(int *)(*(int *)(*(int *)(iStack_114 + 0xbf0) + *(int *)(in_ECX + 0x38) * 0x10)
                            + *(int *)(iVar10 + 0x6c) * 4) != *(int *)(iVar8 + 8)) {
                  uStack_dc = *(undefined4 *)(in_ECX + 0x38);
                  uStack_e0 = *(undefined4 *)(in_ECX + 0x34);
                  uVar6 = *(undefined4 *)(iVar8 + 4);
                  goto LAB_00854311;
                }
                if (*(int *)(iVar4 + 0x164) == 0) {
                  uStack_154 = 0;
                }
                else {
                  uStack_154 = **(undefined4 **)(iVar4 + 0x15c);
                }
                puStack_108 = (undefined4 *)FUN_00aae9af(0x10);
                if (puStack_108 == (undefined4 *)0x0) {
                  puStack_108 = (undefined4 *)0x0;
                }
                else {
                  *puStack_108 = uStack_154;
                  puStack_108[1] = puVar2;
                  puStack_108[2] = 0;
                  *(undefined1 *)(puStack_108 + 3) = 0;
                }
                iVar4 = iStack_104 + 1;
                bVar11 = iStack_104 != 0;
                puVar5 = local_140;
                puVar9 = puStack_108;
                iStack_104 = iVar4;
                if (bVar11) {
                  puVar2[2] = puStack_108;
                  puVar9 = local_10c;
                }
                goto LAB_00854459;
              }
            }
            iStack_120 = *(int *)(in_ECX + 0x38);
            uStack_124 = *(undefined4 *)(in_ECX + 0x34);
            uVar6 = *(undefined4 *)(iVar8 + 4);
LAB_00854311:
            cVar3 = FUN_00563fb0(*(undefined4 *)(iVar8 + 8),uVar6);
            puVar5 = local_140;
            puVar9 = local_10c;
            if (cVar3 != '\0') {
              puVar9 = (undefined4 *)(*piVar1 + iStack_158);
              puStack_148 = puStack_13c;
              puVar5 = (undefined4 *)FUN_00aae9af(0x18);
              if (puVar5 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                *puVar5 = *puVar9;
                puVar5[1] = puVar9[1];
                puVar5[2] = puVar9[2];
                puVar5[3] = puStack_13c;
                puVar5[4] = 0;
                *(undefined1 *)(puVar5 + 5) = 0;
              }
              iVar4 = iStack_138 + 1;
              bVar11 = iStack_138 != 0;
              puStack_13c = puVar5;
              iStack_138 = iVar4;
              puVar9 = local_10c;
              if (bVar11) {
                puStack_148[4] = puVar5;
                puVar5 = local_140;
              }
            }
          }
        }
LAB_00854459:
        local_10c = puVar9;
        local_140 = puVar5;
        iStack_158 = iStack_158 + 0xc;
        iStack_118 = iStack_118 + 1;
      } while (iStack_118 < (*(int *)(in_ECX + 0x70) - *piVar1) / 0xc);
      if (iStack_138 != 0) {
        uStack_124 = *(undefined4 *)(in_ECX + 0x34);
        iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x1488
                        ) -
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x1494
                        );
        puStack_15c = local_140;
        if (local_140 != (undefined4 *)0x0) {
          do {
            iStack_120 = puStack_15c[1];
            uStack_11c = puStack_15c[2];
            if (iVar4 == 0) {
              cVar3 = FUN_00854920(in_ECX,&local_10c,puStack_110);
              if (cVar3 != '\0') {
                iVar4 = 1;
LAB_00854553:
                local_150 = FUN_00aae9af(0x4c);
                local_c._0_1_ = 5;
                if (local_150 == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = FUN_00584340(local_150,*(undefined4 *)(iStack_120 + 0x58),
                                       *(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38)
                                       ,uStack_11c);
                }
                local_c = CONCAT31(local_c._1_3_,4);
                iVar8 = (**(code **)(**(int **)(iStack_114 + 0xb24) + 0x44))();
                (**(code **)(**(int **)(iVar8 + 0x38) + 0x18))(uVar6);
                iVar4 = iVar4 + -1;
              }
            }
            else if (0 < iVar4) goto LAB_00854553;
            puStack_15c = (undefined4 *)puStack_15c[4];
          } while (puStack_15c != (undefined4 *)0x0);
          if (local_140 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_140);
          }
        }
        if (local_10c == (undefined4 *)0x0) {
          ExceptionList = local_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_10c);
      }
    }
    if (local_140 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_140);
    }
    if (local_10c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10c);
    }
  }
  ExceptionList = local_14;
  return;
}

