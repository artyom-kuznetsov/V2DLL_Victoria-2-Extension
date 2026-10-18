// FUN_0052fcd0 @ 0052fcd0 body=[[0052fcd0, 0052fe2c] [0052fe30, 0052feb4] [0052feb8, 00530141] [00530145, 00530179] [0053017d, 005301a7] [005301ab, 005301d5] [005301d9, 00530203] [00530207, 0053022b] [0053022f, 00530254] [00530258, 005302aa] [005302bd, 00530335] [00530340, 0053070f] [00530713, 00530743] [00530747, 00530772] [00530776, 005307a1] [005307a5, 005307d0] [005307d4, 005307ff] [00530803, 0053082b] [0053082f, 00530857] [0053085b, 00530886] [0053088a, 005308af] [005308b3, 005308d5] [005308d9, 0053090c] [00530910, 0053092d] [00530931, 0053093e] [00530942, 00530958] [00530962, 00530978]]


/* WARNING: Removing unreachable block (ram,0x0052ff6c) */
/* WARNING: Removing unreachable block (ram,0x00530425) */
/* WARNING: Removing unreachable block (ram,0x0052ff7a) */
/* WARNING: Removing unreachable block (ram,0x0052ffc1) */

void FUN_0052fcd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  void **ppvVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 local_1e0;
  int *local_1c8;
  int local_1c4;
  int local_1c0;
  int *local_1bc;
  undefined8 local_1b8;
  int local_1b0;
  uint *local_1ac;
  uint *local_1a8;
  uint *local_1a4;
  int local_19c;
  uint local_198 [2];
  undefined8 uStack_190;
  undefined4 local_188;
  uint local_184;
  undefined8 local_178;
  int *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  uint local_15c [4];
  undefined4 local_14c;
  uint local_148;
  uint auStack_140 [4];
  undefined4 uStack_130;
  uint uStack_12c;
  int local_124;
  int local_120;
  undefined4 local_11c;
  uint auStack_114 [4];
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_f8;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_dc [4];
  undefined4 uStack_cc;
  uint uStack_c8;
  uint local_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  pvStack_14 = ExceptionList;
  puStack_10 = &LAB_00b8f303;
  ExceptionList = &pvStack_14;
  local_16c = (int *)0x0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_c = 0;
  ppvVar6 = &pvStack_14;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    ppvVar6 = ExceptionList;
  }
  ExceptionList = ppvVar6;
  piVar15 = *(int **)(param_1 + 0xe44);
  piVar8 = local_16c;
  piVar7 = local_1c8;
  while (local_1c8 = piVar8, local_16c = local_1c8, piVar15 != (int *)0x0) {
    local_1bc = (int *)piVar15[2];
    local_1c0 = *piVar15;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1c4 = 0;
    iVar9 = *(int *)(local_1c0 + 0x60);
    piVar15 = local_1bc;
    piVar8 = local_1c8;
    if (*(int *)(local_1c0 + 0x60) != 0) {
      do {
        piVar1 = (int *)(iVar9 + 0x224);
        if ((*(int *)(iVar9 + 0xf4) - *(int *)(iVar9 + 0xf0) & 0xfffffff0U) != 0) {
          iVar2 = *(int *)(iVar9 + 0x20);
          local_1b8 = CONCAT44(local_1b8._4_4_ + (iVar2 >> 0xf) +
                               (uint)CARRY4((uint)(int **)local_1b8,iVar2 * 0x20000),
                               (int)(int **)local_1b8 + iVar2 * 0x20000);
          local_1b0 = local_1b0 + *(int *)(*(int *)(*(int *)(iVar9 + 0x18) + 300) + 0x128) * iVar2;
        }
        iVar9 = *piVar1;
      } while (*piVar1 != 0);
      local_1c4 = 0;
      if (0 < local_1b0) {
        local_1c4 = 0;
        if (DAT_0131bb34 == 0) {
          local_1e0._4_4_ = (int **)0x188;
          local_1e0._0_4_ = (int **)0x52fde6;
          local_1c8 = piVar7;
          local_1c8 = (int *)FUN_00aae9af();
          local_c._0_1_ = 1;
          if (local_1c8 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            local_1e0._4_4_ = (int **)0x52fe00;
            iVar9 = FUN_0041a160();
          }
          iVar2 = DAT_0131bb34;
          local_c = CONCAT31(local_c._1_3_,2);
          local_1c8 = (int *)0x0;
          if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            local_1e0._4_4_ = (int **)DAT_0131bb34;
            local_1e0._0_4_ = (int **)0x52fe27;
            FUN_0096dd80();
            local_1e0._4_4_ = (int **)iVar2;
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_0052fe2d;
            FUN_00aae91b();
          }
          local_c = (uint)local_c._1_3_ << 8;
          DAT_0131bb34 = iVar9;
        }
        piVar15 = (int *)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
        local_19c = 0;
        iVar9 = DAT_0131bb34;
        local_1c8 = piVar15;
        if (0 < (int)piVar15) {
          do {
            if (iVar9 == 0) {
              local_1e0._4_4_ = (int **)0x188;
              local_1e0._0_4_ = (int **)0x52fe6e;
              local_178._0_4_ = (undefined8 *)FUN_00aae9af();
              local_c._0_1_ = 3;
              if ((undefined8 *)local_178 == (undefined8 *)0x0) {
                iVar9 = 0;
              }
              else {
                local_1e0._4_4_ = (int **)0x52fe88;
                iVar9 = FUN_0041a160();
              }
              iVar2 = DAT_0131bb34;
              local_c = CONCAT31(local_c._1_3_,4);
              local_178._0_4_ = (undefined8 *)0x0;
              if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
                local_1e0._4_4_ = (int **)DAT_0131bb34;
                local_1e0._0_4_ = (int **)0x52feaf;
                FUN_0096dd80();
                local_1e0._4_4_ = (int **)iVar2;
                    /* WARNING: Subroutine does not return */
                local_1e0._0_4_ = (int **)&UNK_0052feb5;
                FUN_00aae91b();
              }
              local_c = (uint)local_c._1_3_ << 8;
              piVar15 = local_1c8;
              DAT_0131bb34 = iVar9;
            }
            iVar2 = local_19c;
            if (*(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2 < local_19c) {
              local_1e0._4_4_ = (int **)0x52fee1;
              iVar10 = FUN_0096bb70();
              iVar9 = DAT_0131bb34;
            }
            else {
              iVar10 = *(int *)(*(int *)(iVar9 + 0xc) + local_19c * 4);
            }
            if (*(char *)(iVar10 + 0x50) != '\0') {
              local_1c4 = local_1c4 + *(int *)(*(int *)(local_1c0 + 0x118) + iVar2 * 4);
            }
            local_19c = iVar2 + 1;
          } while (local_19c < (int)piVar15);
        }
        uVar13 = local_1c4 / 100;
        uVar5 = local_1b0 / 100;
        local_1e0._4_4_ = (int **)(((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
        local_1e0._0_4_ = (int **)(uVar5 * 0x8000);
        lVar16 = __alldiv(uVar13 * 0x40000000,((int)uVar13 >> 0x1f) << 0x1e | uVar13 >> 2);
        local_1e0._4_4_ = (int **)0x52ff66;
        lVar17 = FUN_00b31c36();
        if (lVar16 < lVar17) {
          lVar16 = lVar17;
        }
        if (0x8000 < lVar16) {
          lVar16 = 0x8000;
        }
        local_1e0._4_4_ = (int **)local_1b8._4_4_;
        local_1e0._0_4_ = (int **)local_1b8;
        lVar16 = __allmul(lVar16);
        lVar16 = lVar16 >> 0xf;
        piVar7 = local_1c8;
        piVar15 = local_1bc;
        if (param_2 == 0) {
          puVar14 = (uint *)(param_1 + 0x198);
          uVar13 = *puVar14;
          *puVar14 = *puVar14 + (uint)lVar16;
          *(int *)(param_1 + 0x19c) =
               *(int *)(param_1 + 0x19c) + (int)((ulonglong)lVar16 >> 0x20) +
               (uint)CARRY4(uVar13,(uint)lVar16);
          piVar8 = local_16c;
        }
        else {
          piVar8 = local_16c;
          if (0 < lVar16) {
            local_1e0._4_4_ = (int **)0x10;
            local_1e0._0_4_ = (int **)0x52ffcc;
            local_1c8 = (int *)FUN_00aae9af();
            if (local_1c8 == (int *)0x0) {
              local_1c8 = (int *)0x0;
            }
            else {
              local_1c8[2] = 0;
              local_1c8[3] = 0;
            }
            *local_1c8 = local_1c0;
            *(longlong *)(local_1c8 + 2) = lVar16;
            local_1e0._4_4_ = &local_1c8;
            local_1e0._0_4_ = &local_16c;
            FUN_0054a410();
            piVar15 = local_1bc;
            piVar8 = local_16c;
            piVar7 = local_1c8;
          }
        }
      }
    }
  }
  local_1bc = (int *)0x0;
  if (param_2 != 0) {
    local_1c0 = 0;
    if (local_1c8 != (int *)0x0) {
      do {
        puVar3 = (undefined4 *)*local_1c8;
        local_1c8 = (int *)local_1c8[2];
        if (local_1c0 < 10) {
          local_1e0._4_4_ = (int **)0x3;
          local_1e0._0_4_ = (int **)&DAT_00dfc7b4;
          local_148 = 0xf;
          local_14c = 0;
          local_15c[0] = local_15c[0] & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 5;
          local_1e0._4_4_ = (int **)0x4;
          local_1e0._0_4_ = (int **)&DAT_00dfc940;
          local_184 = 0xf;
          local_188 = 0;
          local_198[0] = local_198[0] & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 6;
          local_1e0._0_4_ = (int **)puVar3[2];
          local_178._0_4_ = &local_1e0;
          local_1e0._4_4_ = (int **)puVar3[3];
          uVar11 = FUN_00988bb0(local_c0,3);
          local_c._0_1_ = 7;
          local_1e0._4_4_ = (int **)local_dc;
          local_1e0._0_4_ = (int **)0x5300ca;
          (**(code **)(*(int *)*puVar3 + 0x20))();
          local_1e0._4_4_ = (int **)local_198;
          local_c._0_1_ = 8;
          local_1e0._0_4_ = (int **)0x5300e5;
          FUN_00988f20();
          local_c._0_1_ = 9;
          local_1e0._0_4_ = (int **)0x5300fc;
          local_1e0._4_4_ = (int **)uVar11;
          FUN_00988f20();
          local_1e0._4_4_ = (int **)local_15c;
          local_c._0_1_ = 10;
          local_1e0._0_4_ = (int **)0x530117;
          uVar11 = FUN_00988f20();
          local_1e0._4_4_ = (int **)0xffffffff;
          local_1e0._0_4_ = (int **)0x0;
          local_c._0_1_ = 0xb;
          FUN_00448aa0(uVar11);
          if (0xf < uStack_100) {
            local_1e0._4_4_ = (int **)auStack_114[0];
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_00530142;
            FUN_00aae91b();
          }
          uStack_100 = 0xf;
          uStack_104 = 0;
          auStack_114[0] = auStack_114[0] & 0xffffff00;
          if (0xf < uStack_12c) {
            local_1e0._4_4_ = (int **)auStack_140[0];
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_0053017a;
            FUN_00aae91b();
          }
          uStack_12c = 0xf;
          uStack_130 = 0;
          auStack_140[0] = auStack_140[0] & 0xffffff00;
          if (0xf < uStack_e4) {
            local_1e0._4_4_ = (int **)uStack_f8;
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_005301a8;
            FUN_00aae91b();
          }
          uStack_e4 = 0xf;
          uStack_e8 = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
          if (0xf < uStack_c8) {
            local_1e0._4_4_ = (int **)local_dc[0];
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_005301d6;
            FUN_00aae91b();
          }
          uStack_c8 = 0xf;
          uStack_cc = 0;
          local_dc[0] = local_dc[0] & 0xffffff00;
          if (0xf < uStack_ac) {
            local_1e0._4_4_ = (int **)local_c0[0];
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_00530204;
            FUN_00aae91b();
          }
          uStack_ac = 0xf;
          uStack_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
          if (0xf < local_184) {
            local_1e0._4_4_ = (int **)local_198[0];
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_0053022c;
            FUN_00aae91b();
          }
          local_c = (uint)local_c._1_3_ << 8;
          local_184 = 0xf;
          local_188 = 0;
          local_198[0] = local_198[0] & 0xffffff00;
          if (0xf < local_148) {
            local_1e0._4_4_ = (int **)local_15c[0];
                    /* WARNING: Subroutine does not return */
            local_1e0._0_4_ = (int **)&UNK_00530255;
            FUN_00aae91b();
          }
          local_148 = 0xf;
          local_14c = 0;
          local_15c[0] = local_15c[0] & 0xffffff00;
        }
        local_1c0 = local_1c0 + 1;
      } while (local_1c8 != (int *)0x0);
      piVar7 = local_1c8;
      if (10 < local_1c0) {
        local_1e0._4_4_ = (int **)0x4;
        local_1e0._0_4_ = (int **)&DAT_00dff018;
        FUN_00448740();
        piVar7 = local_1c8;
      }
    }
    local_1c8 = piVar7;
    if (local_16c != (int *)0x0) {
      local_1e0._4_4_ = (int **)*local_16c;
                    /* WARNING: Subroutine does not return */
      local_1e0._0_4_ = (int **)&UNK_005302ab;
      FUN_00aae91b();
    }
    local_16c = (int *)0x0;
    local_168 = 0;
    local_164 = 0;
    piVar7 = local_1c8;
  }
  local_1c8 = piVar7;
  local_1ac = (uint *)0x0;
  local_1a8 = (uint *)0x0;
  local_1a4 = (uint *)0x0;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_c._0_1_ = 0xd;
  local_1e0._4_4_ = (int **)(DAT_012588e8 + 0xadc);
  local_1e0._0_4_ = (int **)0x53030b;
  FUN_009beeb0();
  local_c._0_1_ = 0xe;
  local_1c4 = 0;
  local_1c8 = (int *)(local_120 - local_124 >> 2);
  if (0 < (int)local_1c8) {
    do {
      local_1bc = *(int **)(local_124 + local_1c4 * 4);
      iVar9 = *(int *)(param_1 + 0x20);
      if ((*(int *)((int)local_1bc + 0x20) != iVar9) &&
         (0 < (int)(*(int *)((int)local_1bc + 0x9dc) - *(int *)((int)local_1bc + 0x9d8) &
                   0xfffffffcU))) {
        uVar11 = *(undefined4 *)(*(int *)((int)local_1bc + 0x1580) + iVar9 * 8);
        uVar4 = *(undefined4 *)(*(int *)((int)local_1bc + 0x1580) + 4 + iVar9 * 8);
        local_1e0._4_4_ = (int **)0x530394;
        local_1b8 = FUN_00b31c36();
        uVar13 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x9c);
        local_1e0._4_4_ = (int **)0x0;
        local_1e0._0_4_ = (int **)0x1f40000;
        uVar18 = __alldiv(uVar13 << 0x1e,
                          (((int)uVar13 >> 0x1f) << 0xf | uVar13 >> 0x11) << 0xf |
                          (uVar13 & 0x1ffff) >> 2);
        local_1e0._0_4_ = (int **)uVar11;
        local_1e0._4_4_ = (int **)uVar4;
        local_178 = uVar18;
        lVar16 = __allmul((int **)local_1b8,local_1b8._4_4_);
        local_1e0 = local_178;
        lVar16 = __allmul(lVar16 >> 0xf);
        lVar16 = lVar16 >> 0xf;
        if (param_2 == 0) {
          puVar14 = (uint *)(param_1 + 0x198);
          uVar13 = *puVar14;
          *puVar14 = *puVar14 + (uint)lVar16;
          *(int *)(param_1 + 0x19c) =
               *(int *)(param_1 + 0x19c) + (int)((ulonglong)lVar16 >> 0x20) +
               (uint)CARRY4(uVar13,(uint)lVar16);
        }
        else if (0 < lVar16) {
          local_198[0] = *(uint *)((int)local_1bc + 0x1c);
          local_198[1] = *(uint *)((int)local_1bc + 0x20);
          uStack_190 = lVar16;
          if ((local_198 < local_1a8) && (local_1ac <= local_198)) {
            uVar13 = (int)local_198 - (int)local_1ac;
            if (local_1a8 == local_1a4) {
              local_1e0._4_4_ = (int **)0x530470;
              FUN_0054ac30();
            }
            puVar14 = (uint *)((uVar13 & 0xfffffff0) + (int)local_1ac);
            if (local_1a8 != (uint *)0x0) {
              *local_1a8 = *puVar14;
              local_1a8[1] = puVar14[1];
              local_1a8[2] = puVar14[2];
              local_1a8[3] = puVar14[3];
            }
          }
          else {
            if (local_1a8 == local_1a4) {
              local_1e0._4_4_ = (int **)0x5304a8;
              FUN_0054ac30();
            }
            if (local_1a8 != (uint *)0x0) {
              *local_1a8 = local_198[0];
              local_1a8[1] = local_198[1];
              *(longlong *)(local_1a8 + 2) = lVar16;
            }
          }
          local_1a8 = local_1a8 + 4;
        }
      }
      local_1c4 = local_1c4 + 1;
    } while (local_1c4 < (int)local_1c8);
  }
  iVar9 = (int)local_1a8 - (int)local_1ac >> 4;
  if (0 < iVar9) {
    local_1c8 = (int *)((uint)local_1c8 & 0xffffff00);
    local_1e0._4_4_ = (int **)local_1c8;
    local_1e0._0_4_ = (int **)iVar9;
    FUN_0054c8c0(local_1ac,local_1a8);
    puVar14 = local_1ac;
    if (0 < iVar9) {
      do {
        local_1c0 = iVar9;
        local_1e0._4_4_ = (int **)0x3;
        local_1e0._0_4_ = (int **)&DAT_00dfc7b4;
        uStack_100 = 0xf;
        uStack_104 = 0;
        auStack_114[0] = auStack_114[0] & 0xffffff00;
        FUN_00409350();
        local_c._0_1_ = 0xf;
        local_1e0._4_4_ = (int **)0x4;
        local_1e0._0_4_ = (int **)&DAT_00dfc940;
        uStack_12c = 0xf;
        uStack_130 = 0;
        auStack_140[0] = auStack_140[0] & 0xffffff00;
        FUN_00409350();
        local_c._0_1_ = 0x10;
        local_1e0._4_4_ = (int **)0x1;
        local_1e0._0_4_ = (int **)&DAT_00ded950;
        local_184 = 0xf;
        local_188 = 0;
        local_198[0] = local_198[0] & 0xffffff00;
        FUN_00409350();
        local_c._0_1_ = 0x11;
        local_1e0._0_4_ = (int **)puVar14[2];
        local_178._0_4_ = &local_1e0;
        local_1e0._4_4_ = (int **)puVar14[3];
        local_19c = FUN_00988bb0(auStack_34,3);
        local_c._0_1_ = 0x12;
        local_1b8 = CONCAT44(local_1b8._4_4_,*puVar14);
        local_1e0._4_4_ = (int **)0x5305f9;
        local_1c8 = (int *)FUN_004f97a0();
        local_c._0_1_ = 0x13;
        local_148 = 0xf;
        local_14c = 0;
        local_15c[0] = local_15c[0] & 0xffffff00;
        puVar12 = puVar14;
        do {
          uVar13 = *puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
        } while ((char)uVar13 != '\0');
        local_1e0._4_4_ = (int **)((int)puVar12 - (int)((int)puVar14 + 1));
        local_1e0._0_4_ = (int **)puVar14;
        FUN_00409350();
        local_1e0._4_4_ = (int **)local_15c;
        local_c._0_1_ = 0x14;
        local_1e0._0_4_ = (int **)0x530655;
        FUN_00988fa0();
        local_1e0._4_4_ = (int **)local_198;
        local_c._0_1_ = 0x15;
        local_1e0._0_4_ = (int **)0x530673;
        FUN_00988f20();
        local_c._0_1_ = 0x16;
        local_1e0._4_4_ = (int **)local_1c8;
        local_1e0._0_4_ = (int **)0x53068e;
        FUN_00988f20();
        local_1e0._4_4_ = (int **)auStack_140;
        local_c._0_1_ = 0x17;
        local_1e0._0_4_ = (int **)0x5306ac;
        FUN_00988f20();
        local_1e0._4_4_ = (int **)local_19c;
        local_c._0_1_ = 0x18;
        local_1e0._0_4_ = (int **)0x5306c7;
        FUN_00988f20();
        local_1e0._4_4_ = (int **)auStack_114;
        local_c._0_1_ = 0x19;
        local_1e0._0_4_ = (int **)0x5306e5;
        uVar11 = FUN_00988f20();
        local_1e0._4_4_ = (int **)0xffffffff;
        local_1e0._0_4_ = (int **)0x0;
        local_c._0_1_ = 0x1a;
        FUN_00448aa0(uVar11);
        if (0xf < uStack_ac) {
          local_1e0._4_4_ = (int **)local_c0[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_00530710;
          FUN_00aae91b();
        }
        uStack_ac = 0xf;
        uStack_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        if (0xf < uStack_c8) {
          local_1e0._4_4_ = (int **)local_dc[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_00530744;
          FUN_00aae91b();
        }
        uStack_c8 = 0xf;
        uStack_cc = 0;
        local_dc[0] = local_dc[0] & 0xffffff00;
        if (0xf < uStack_e4) {
          local_1e0._4_4_ = (int **)uStack_f8;
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_00530773;
          FUN_00aae91b();
        }
        uStack_e4 = 0xf;
        uStack_e8 = 0;
        uStack_f8 = uStack_f8 & 0xffffff00;
        if (0xf < uStack_90) {
          local_1e0._4_4_ = (int **)uStack_a4;
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_005307a2;
          FUN_00aae91b();
        }
        uStack_90 = 0xf;
        uStack_94 = 0;
        uStack_a4 = uStack_a4 & 0xffffff00;
        if (0xf < uStack_3c) {
          local_1e0._4_4_ = (int **)uStack_50;
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_005307d1;
          FUN_00aae91b();
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        uStack_50 = uStack_50 & 0xffffff00;
        if (0xf < uStack_74) {
          local_1e0._4_4_ = (int **)uStack_88;
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_00530800;
          FUN_00aae91b();
        }
        uStack_74 = 0xf;
        uStack_78 = 0;
        uStack_88 = uStack_88 & 0xffffff00;
        if (0xf < local_148) {
          local_1e0._4_4_ = (int **)local_15c[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_0053082c;
          FUN_00aae91b();
        }
        local_148 = 0xf;
        local_14c = 0;
        local_15c[0] = local_15c[0] & 0xffffff00;
        if (0xf < uStack_58) {
          local_1e0._4_4_ = (int **)uStack_6c;
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_00530858;
          FUN_00aae91b();
        }
        uStack_58 = 0xf;
        uStack_5c = 0;
        uStack_6c = uStack_6c & 0xffffff00;
        if (0xf < uStack_20) {
          local_1e0._4_4_ = (int **)auStack_34[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_00530887;
          FUN_00aae91b();
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        auStack_34[0] = auStack_34[0] & 0xffffff00;
        if (0xf < local_184) {
          local_1e0._4_4_ = (int **)local_198[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_005308b0;
          FUN_00aae91b();
        }
        local_184 = 0xf;
        local_188 = 0;
        local_198[0] = local_198[0] & 0xffffff00;
        if (0xf < uStack_12c) {
          local_1e0._4_4_ = (int **)auStack_140[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_005308d6;
          FUN_00aae91b();
        }
        local_c._0_1_ = 0xe;
        uStack_12c = 0xf;
        uStack_130 = 0;
        auStack_140[0] = auStack_140[0] & 0xffffff00;
        if (0xf < uStack_100) {
          local_1e0._4_4_ = (int **)auStack_114[0];
                    /* WARNING: Subroutine does not return */
          local_1e0._0_4_ = (int **)&UNK_0053090d;
          FUN_00aae91b();
        }
        local_1c0 = local_1c0 + -1;
        puVar14 = puVar14 + 4;
        iVar9 = local_1c0;
      } while (local_1c0 != 0);
    }
  }
  if (local_124 != 0) {
    local_1e0._4_4_ = (int **)local_124;
                    /* WARNING: Subroutine does not return */
    local_1e0._0_4_ = (int **)&UNK_0053092e;
    FUN_00aae91b();
  }
  if (local_1ac == (uint *)0x0) {
    if (local_16c == (int *)0x0) {
      ExceptionList = pvStack_14;
      return;
    }
    local_1e0._4_4_ = (int **)local_16c;
                    /* WARNING: Subroutine does not return */
    local_1e0._0_4_ = (int **)&UNK_00530959;
    FUN_00aae91b();
  }
  local_1e0._4_4_ = (int **)local_1ac;
                    /* WARNING: Subroutine does not return */
  local_1e0._0_4_ = (int **)&UNK_0053093f;
  FUN_00aae91b();
}

