// FUN_0080bce0 @ 0080bce0 body=[[0080bce0, 0080c647] [0080c64b, 0080ddbc]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0080bce0(int param_1,int *param_2,int *param_3,int *param_4,int param_5,ushort *param_6,
                 int *param_7,int param_8,int *param_9,int param_10,int *param_11)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *puVar10;
  ushort uVar11;
  uint uVar12;
  uint *puVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  uint *puVar18;
  undefined **local_108 [18];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  uint local_a0 [8];
  uint local_80 [2];
  float local_78;
  float local_74;
  uint local_70;
  float local_6c;
  float local_68;
  uint local_64;
  float local_60;
  float local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  char local_42;
  char local_41;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  byte local_25;
  uint *local_24;
  uint *local_20;
  byte local_19;
  uint local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = param_11;
  puStack_c = &LAB_00b58eec;
  local_10 = ExceptionList;
  local_40 = 0;
  ExceptionList = &local_10;
  if ((param_7[1] - *param_7 & 0xfffffff8U) != 0) {
    iVar16 = param_7[0xe];
    local_40 = 0;
    piVar7 = (int *)(param_1 + 0x15b8);
    do {
      if (piVar7[-1] == iVar16) break;
      if (*piVar7 == iVar16) {
        local_40 = local_40 + 1;
        break;
      }
      if (piVar7[1] == iVar16) {
        local_40 = local_40 + 2;
        break;
      }
      if (piVar7[2] == iVar16) {
        local_40 = local_40 + 3;
        break;
      }
      if (piVar7[3] == iVar16) {
        local_40 = local_40 + 4;
        break;
      }
      local_40 = local_40 + 5;
      piVar7 = piVar7 + 5;
    } while (local_40 < 200);
    ExceptionList = &local_10;
    if (local_40 == 200) {
      local_40 = 0;
      piVar7 = (int *)(param_1 + 0x15b4);
      do {
        if (*piVar7 == 0) {
          ExceptionList = &local_10;
          *(int *)(param_1 + 0x15b4 + local_40 * 4) = iVar16;
          break;
        }
        local_40 = local_40 + 1;
        piVar7 = piVar7 + 1;
        ExceptionList = &local_10;
      } while (local_40 < 200);
    }
  }
  iVar16 = *param_7;
  local_58 = 0;
  if (0 < (int)(param_7[1] - iVar16 & 0xfffffff8U)) {
    do {
      iVar15 = *(int *)(iVar16 + local_58 * 8);
      puVar13 = (uint *)(iVar16 + 4 + local_58 * 8);
      local_20 = *(uint **)(param_1 + 0x40);
      uVar12 = *puVar13;
      param_11 = (int *)((uint)param_11 & 0xffffff);
      if (iVar15 < 0) {
        local_30 = 0;
      }
      else if ((int)uVar12 < 0) {
        local_30 = 0;
      }
      else {
        uVar9 = local_20[0x84b];
        if (iVar15 < *(int *)(uVar9 + 4)) {
          if ((int)uVar12 < *(int *)(uVar9 + 8)) {
            local_30 = (uint)*(ushort *)
                              (*(int *)(uVar9 + 0xc) * iVar15 + *(int *)(uVar9 + 0x18) * uVar12 +
                              *(int *)(uVar9 + 0x20));
          }
          else {
            local_30 = 0;
          }
        }
        else {
          local_30 = 0;
        }
      }
      iVar6 = *(int *)(param_7[0x17] + 4 + local_58 * 8) + uVar12;
      iVar15 = *(int *)(param_7[0x17] + local_58 * 8) + iVar15;
      if (iVar15 < 0) {
        local_24 = (uint *)0x0;
      }
      else if (iVar6 < 0) {
        local_24 = (uint *)0x0;
      }
      else {
        uVar12 = local_20[0x84b];
        if (iVar15 < *(int *)(uVar12 + 4)) {
          if (iVar6 < *(int *)(uVar12 + 8)) {
            local_24 = (uint *)(uint)*(ushort *)
                                      (*(int *)(uVar12 + 0xc) * iVar15 +
                                       *(int *)(uVar12 + 0x18) * iVar6 + *(int *)(uVar12 + 0x20));
          }
          else {
            local_24 = (uint *)0x0;
          }
        }
        else {
          local_24 = (uint *)0x0;
        }
      }
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_2c = (uint *)0xffffffff;
      local_18[0] = 0xffffffff;
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_8 = 1;
      local_3c = *(uint *)(iVar16 + local_58 * 8);
      local_54 = *puVar13;
      local_19 = 0;
      local_41 = '\0';
      local_42 = '\0';
      local_25 = *(char *)(local_30 + local_20[0x889]) != '\0';
      iVar16 = local_3c - 1;
      iVar15 = local_54 + 1;
      if (iVar16 < 0) {
        local_a0[0] = 0;
      }
      else if (iVar15 < 0) {
        local_a0[0] = 0;
      }
      else {
        uVar12 = local_20[0x84b];
        if (iVar16 < *(int *)(uVar12 + 4)) {
          if (iVar15 < *(int *)(uVar12 + 8)) {
            local_a0[0] = (uint)*(ushort *)
                                 (*(int *)(uVar12 + 0xc) * iVar16 + *(int *)(uVar12 + 0x18) * iVar15
                                 + *(int *)(uVar12 + 0x20));
          }
          else {
            local_a0[0] = 0;
          }
        }
        else {
          local_a0[0] = 0;
        }
      }
      if ((int)local_3c < 0) {
        local_34 = 0;
      }
      else if (iVar15 < 0) {
        local_34 = 0;
      }
      else {
        uVar12 = local_20[0x84b];
        if ((int)local_3c < *(int *)(uVar12 + 4)) {
          if (iVar15 < *(int *)(uVar12 + 8)) {
            local_34 = (uint)*(ushort *)
                              (*(int *)(uVar12 + 0xc) * local_3c + *(int *)(uVar12 + 0x18) * iVar15
                              + *(int *)(uVar12 + 0x20));
          }
          else {
            local_34 = 0;
          }
        }
        else {
          local_34 = 0;
        }
      }
      local_50 = local_3c + 1;
      local_a0[1] = local_34;
      if ((int)local_50 < 0) {
        local_a0[2] = 0;
      }
      else if (iVar15 < 0) {
        local_a0[2] = 0;
      }
      else {
        uVar12 = local_20[0x84b];
        if ((int)local_50 < *(int *)(uVar12 + 4)) {
          if (iVar15 < *(int *)(uVar12 + 8)) {
            local_a0[2] = (uint)*(ushort *)
                                 (*(int *)(uVar12 + 0xc) * local_50 +
                                  *(int *)(uVar12 + 0x18) * iVar15 + *(int *)(uVar12 + 0x20));
          }
          else {
            local_a0[2] = 0;
          }
        }
        else {
          local_a0[2] = 0;
        }
      }
      iVar16 = local_3c - 1;
      if (iVar16 < 0) {
        local_70 = 0;
      }
      else if ((int)local_54 < 0) {
        local_70 = 0;
      }
      else {
        uVar12 = local_20[0x84b];
        if (iVar16 < *(int *)(uVar12 + 4)) {
          if ((int)local_54 < *(int *)(uVar12 + 8)) {
            local_70 = (uint)*(ushort *)
                              (*(int *)(uVar12 + 0xc) * iVar16 + *(int *)(uVar12 + 0x18) * local_54
                              + *(int *)(uVar12 + 0x20));
          }
          else {
            local_70 = 0;
          }
        }
        else {
          local_70 = 0;
        }
      }
      local_a0[3] = local_70;
      if ((int)local_50 < 0) {
        local_38 = 0;
      }
      else if ((int)local_54 < 0) {
        local_38 = 0;
      }
      else {
        uVar12 = local_20[0x84b];
        if ((int)local_50 < *(int *)(uVar12 + 4)) {
          if ((int)local_54 < *(int *)(uVar12 + 8)) {
            local_38 = (uint)*(ushort *)
                              (*(int *)(uVar12 + 0xc) * local_50 +
                               *(int *)(uVar12 + 0x18) * local_54 + *(int *)(uVar12 + 0x20));
          }
          else {
            local_38 = 0;
          }
        }
        else {
          local_38 = 0;
        }
      }
      local_a0[4] = local_38;
      iVar15 = local_54 - 1;
      if (iVar16 < 0) {
        local_a0[5] = 0;
      }
      else if (iVar15 < 0) {
        local_a0[5] = 0;
      }
      else {
        uVar12 = local_20[0x84b];
        if (iVar16 < *(int *)(uVar12 + 4)) {
          if (iVar15 < *(int *)(uVar12 + 8)) {
            local_a0[5] = (uint)*(ushort *)
                                 (*(int *)(uVar12 + 0x18) * iVar15 + *(int *)(uVar12 + 0xc) * iVar16
                                 + *(int *)(uVar12 + 0x20));
          }
          else {
            local_a0[5] = 0;
          }
        }
        else {
          local_a0[5] = 0;
        }
      }
      if ((int)local_3c < 0) {
        local_64 = 0;
      }
      else {
        iVar16 = local_54 - 1;
        if (iVar16 < 0) {
          local_64 = 0;
        }
        else {
          uVar12 = local_20[0x84b];
          if ((int)local_3c < *(int *)(uVar12 + 4)) {
            if (iVar16 < *(int *)(uVar12 + 8)) {
              local_64 = (uint)*(ushort *)
                                (*(int *)(uVar12 + 0x18) * iVar16 +
                                 *(int *)(uVar12 + 0xc) * local_3c + *(int *)(uVar12 + 0x20));
            }
            else {
              local_64 = 0;
            }
          }
          else {
            local_64 = 0;
          }
        }
      }
      local_a0[6] = local_64;
      if ((int)local_50 < 0) {
        local_a0[7] = 0;
      }
      else {
        iVar16 = local_54 - 1;
        if (iVar16 < 0) {
          local_a0[7] = 0;
        }
        else {
          uVar12 = local_20[0x84b];
          if ((int)local_50 < *(int *)(uVar12 + 4)) {
            if (iVar16 < *(int *)(uVar12 + 8)) {
              local_a0[7] = (uint)*(ushort *)
                                   (*(int *)(uVar12 + 0x18) * iVar16 +
                                    *(int *)(uVar12 + 0xc) * local_50 + *(int *)(uVar12 + 0x20));
            }
            else {
              local_a0[7] = 0;
            }
          }
          else {
            local_a0[7] = 0;
          }
        }
      }
      iVar16 = 0;
      do {
        uVar12 = local_a0[iVar16];
        if (uVar12 != local_30) {
          if ((bool)local_25) {
            if ((-1 < (int)uVar12) && (*(char *)(uVar12 + local_20[0x889]) != '\0')) {
LAB_0080c27e:
              param_11 = (int *)CONCAT13(1,param_11._0_3_);
              if (((local_18[0] == 0xffffffff) || ((iVar16 == 1 || (iVar16 == 3)))) ||
                 ((iVar16 == 4 || (iVar16 == 6)))) {
                local_18[0] = uVar12;
              }
            }
          }
          else if ((((int)uVar12 < 0) || (*(char *)(uVar12 + local_20[0x889]) == '\0')) &&
                  (uVar12 != 0)) {
            if (iVar16 == 3) {
              local_41 = '\x01';
            }
            else if (iVar16 == 4) {
              local_42 = '\x01';
            }
            goto LAB_0080c27e;
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 8);
      if ((param_11._3_1_ != '\0') &&
         (((((((local_34 != local_30 && (local_70 != local_30)) && (local_70 != local_34)) &&
             ((*(char *)(local_34 + local_20[0x889]) == '\0' &&
              (*(char *)(local_70 + local_20[0x889]) == '\0')))) ||
            ((((local_64 != local_30 && ((local_70 != local_30 && (local_70 != local_64)))) &&
              (*(char *)(local_64 + local_20[0x889]) == '\0')) &&
             (*(char *)(local_70 + local_20[0x889]) == '\0')))) ||
           ((((local_34 != local_30 && (local_38 != local_30)) && (local_38 != local_34)) &&
            ((*(char *)(local_34 + local_20[0x889]) == '\0' &&
             (*(char *)(local_38 + local_20[0x889]) == '\0')))))) ||
          (((local_64 != local_30 && ((local_38 != local_30 && (local_38 != local_64)))) &&
           ((*(char *)(local_38 + local_20[0x889]) == '\0' &&
            (*(char *)(local_64 + local_20[0x889]) == '\0')))))))) {
        local_2c = (uint *)(local_30 * 0x10);
        piVar7 = (int *)((int)local_2c + *(int *)(param_1 + 0x18fc));
        uVar12 = 0;
        local_19 = 1;
        local_80[0] = local_3c;
        local_80[1] = local_54;
        if (piVar7[1] - *piVar7 >> 3 != 0) {
          puVar13 = (uint *)*piVar7;
          do {
            if ((*puVar13 == local_3c) && (puVar13[1] == local_54)) goto LAB_0080c668;
            uVar12 = uVar12 + 1;
            puVar13 = puVar13 + 2;
          } while (uVar12 < (uint)(piVar7[1] - *piVar7 >> 3));
        }
        if ((piVar7[1] - *piVar7 & 0xfffffff8U) == 0) {
          FUN_004237e0(7);
        }
        puVar18 = (uint *)(*(int *)(param_1 + 0x18fc) + (int)local_2c);
        puVar13 = (uint *)puVar18[1];
        if (local_80 < puVar13) {
          if (local_80 < (uint *)*puVar18) goto LAB_0080c4c6;
          local_34 = (int)local_80 - (int)*puVar18 >> 3;
          if (puVar13 == (uint *)puVar18[2]) {
            uVar12 = (int)((int)puVar13 - *puVar18) >> 3;
            if (0x1ffffffe < uVar12) goto LAB_0080ddb3;
            local_50 = uVar12 + 1;
            uVar12 = (int)((int)puVar18[2] - *puVar18) >> 3;
            if (uVar12 < local_50) {
              if (0x1fffffff - (uVar12 >> 1) < uVar12) {
                uVar12 = 0;
              }
              else {
                uVar12 = uVar12 + (uVar12 >> 1);
              }
              if (uVar12 < local_50) {
                uVar12 = local_50;
              }
              FUN_004237e0(uVar12);
            }
          }
          puVar1 = (undefined4 *)(*puVar18 + local_34 * 8);
          puVar4 = (undefined4 *)puVar18[1];
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar1;
            puVar4[1] = puVar1[1];
          }
        }
        else {
LAB_0080c4c6:
          if (puVar13 == (uint *)puVar18[2]) {
            uVar12 = (int)((int)puVar13 - *puVar18) >> 3;
            if (0x1ffffffe < uVar12) goto LAB_0080ddb3;
            local_34 = uVar12 + 1;
            uVar12 = (int)((int)puVar18[2] - *puVar18) >> 3;
            if (uVar12 < local_34) {
              if (0x1fffffff - (uVar12 >> 1) < uVar12) {
                uVar12 = 0;
              }
              else {
                uVar12 = uVar12 + (uVar12 >> 1);
              }
              if (uVar12 < local_34) {
                uVar12 = local_34;
              }
              FUN_004237e0(uVar12);
            }
          }
          puVar13 = (uint *)puVar18[1];
          if (puVar13 != (uint *)0x0) {
            *puVar13 = local_3c;
            puVar13[1] = local_54;
          }
        }
        puVar18[1] = puVar18[1] + 8;
        piVar7 = (int *)(*(int *)(param_1 + 0x18fc) + (int)local_2c);
        if (7 < (uint)(piVar7[1] - *piVar7 >> 3)) {
          local_a0[6] = 0xf;
          local_a0[5] = 0;
          local_a0[1] = local_a0[1] & 0xffffff00;
          FUN_00409350("provincemanager_mesh.cpp",0x18);
          local_8._0_1_ = 2;
          FUN_004015b0(local_a0 + 1,0x869,0x10004);
          local_8 = CONCAT31(local_8._1_3_,3);
          uVar8 = FUN_00987d20(local_30);
          piVar7 = (int *)FUN_00447240(uVar8);
          FUN_00408be0(piVar7);
          local_34 = 0;
          if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
             (iVar16 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))
                                 (), iVar16 == -1)) {
            local_34 = 4;
          }
          if (local_34 != 0) {
            uVar12 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | local_34;
            if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
              uVar12 = uVar12 | 4;
            }
            FUN_00401120(uVar12,0);
          }
          local_8._0_1_ = 2;
          FUN_00987ac0(local_108);
          local_108[0] = std::ios_base::vftable;
          FUN_00aad52d(local_108);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (0xf < local_a0[6]) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_a0[1]);
          }
        }
        piVar7 = (int *)(*(int *)(param_1 + 0x18fc) + (int)local_2c);
        uVar12 = (piVar7[1] - *piVar7 >> 3) - 1;
LAB_0080c668:
        local_2c = (uint *)uVar12;
        if (6 < (int)uVar12) {
          local_2c = (uint *)0x7;
        }
      }
      uVar12 = local_30 * 0xe;
      if (local_19 == 0) {
        if (param_11._3_1_ != '\0') {
          iVar16 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2aa4) + local_30 * 4);
          iVar15 = (*(int *)(iVar16 + 0xcc) - *(int *)(iVar16 + 200)) / 0x24;
          local_2c = (uint *)0x0;
          if (0 < iVar15) {
            puVar13 = (uint *)(*(int *)(iVar16 + 200) + 4);
            do {
              if (local_18[0] == *puVar13) goto LAB_0080c720;
              local_2c = (uint *)((int)local_2c + 1);
              puVar13 = puVar13 + 9;
            } while ((int)local_2c < iVar15);
          }
          local_2c = (uint *)0xffffffff;
          goto LAB_0080c720;
        }
      }
      else {
        iVar16 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2aa4) + local_30 * 4);
        local_2c = (uint *)((*(int *)(iVar16 + 0xcc) - *(int *)(iVar16 + 200)) / 0x24 +
                           (int)local_2c);
LAB_0080c720:
        uVar12 = uVar12 + (int)local_2c;
      }
      local_18[0] = uVar12 & 0x800001ff;
      if ((int)local_18[0] < 0) {
        local_18[0] = (local_18[0] - 1 | 0xfffffe00) + 1;
      }
      fVar17 = (float)param_7[0xc];
      iVar16 = param_7[4];
      local_2c = (uint *)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1ffU)) >> 9);
      fVar3 = (float)param_7[0xd];
      pfVar2 = (float *)(iVar16 + local_58 * 8);
      local_78 = (fVar17 + *(float *)(iVar16 + local_58 * 8)) - 0.5;
      local_74 = (*(float *)(iVar16 + 4 + local_58 * 8) + fVar3) - 0.5;
      local_4c = *pfVar2 + fVar17 + 0.5;
      local_48 = (pfVar2[1] + fVar3) - 0.5;
      local_6c = (*pfVar2 + fVar17) - 0.5;
      local_68 = pfVar2[1] + fVar3 + 0.5;
      local_60 = fVar17 + *pfVar2 + 0.5;
      local_5c = pfVar2[1] + fVar3 + 0.5;
      if (param_11._3_1_ != '\0') {
        *(short *)(param_8 + *param_9 * 2) = (short)*piVar5;
        *(short *)(param_8 + 2 + *param_9 * 2) = (short)*piVar5 + 1;
        *(short *)(param_8 + 4 + *param_9 * 2) = (short)*piVar5 + 2;
        *(short *)(param_8 + 6 + *param_9 * 2) = (short)*piVar5 + 2;
        *(short *)(param_8 + 8 + *param_9 * 2) = (short)*piVar5 + 3;
        *(short *)(param_8 + 10 + *param_9 * 2) = (short)*piVar5;
        *param_9 = *param_9 + 6;
      }
      *(ushort *)(*param_2 + *param_3 * 2) = *param_6;
      *(ushort *)(*param_2 + 2 + *param_3 * 2) = *param_6 + 1;
      *(ushort *)(*param_2 + 4 + *param_3 * 2) = *param_6 + 2;
      *(ushort *)(*param_2 + 6 + *param_3 * 2) = *param_6 + 2;
      *(ushort *)(*param_2 + 8 + *param_3 * 2) = *param_6 + 3;
      *(ushort *)(*param_2 + 10 + *param_3 * 2) = *param_6;
      *param_3 = *param_3 + 6;
      *(int *)(*param_4 + 4) = *(int *)(*param_4 + 4) + 6;
      iVar16 = *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4);
      local_34 = local_40 * 0x10;
      if ((uint)(*(int *)(*(int *)(param_1 + 0x15ac) + 4 + local_34) -
                 *(int *)(*(int *)(param_1 + 0x15ac) + local_34) >> 1) < iVar16 + 5U) {
        piVar7 = (int *)(local_34 + *(int *)(param_1 + 0x15ac));
        FUN_007d85d0((piVar7[1] - *piVar7 >> 1) + 500 + iVar16);
      }
      *(ushort *)
       (*(int *)(local_34 + *(int *)(param_1 + 0x15ac)) +
       *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4) * 2) = *param_6;
      *(ushort *)
       (*(int *)(local_34 + *(int *)(param_1 + 0x15ac)) + 2 +
       *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4) * 2) = *param_6 + 1;
      *(ushort *)
       (*(int *)(local_34 + *(int *)(param_1 + 0x15ac)) + 4 +
       *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4) * 2) = *param_6 + 2;
      *(ushort *)
       (*(int *)(local_34 + *(int *)(param_1 + 0x15ac)) + 6 +
       *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4) * 2) = *param_6 + 2;
      *(ushort *)
       (*(int *)(local_34 + *(int *)(param_1 + 0x15ac)) + 8 +
       *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4) * 2) = *param_6 + 3;
      *(ushort *)
       (*(int *)(local_34 + *(int *)(param_1 + 0x15ac)) + 10 +
       *(int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4) * 2) = *param_6;
      piVar7 = (int *)(*(int *)(param_1 + 0x15b0) + local_40 * 4);
      *piVar7 = *piVar7 + 6;
      uVar11 = (ushort)local_24 & 0xff;
      *(ushort *)(param_5 + 8 + *(int *)param_6 * 0xc) = uVar11;
      puVar13 = (uint *)((uint)local_24 >> 8);
      uVar14 = (undefined2)((uint)local_24 >> 8);
      *(undefined2 *)(param_5 + 10 + *(int *)param_6 * 0xc) = uVar14;
      if (param_11._3_1_ != '\0') {
        local_30 = *(uint *)(param_1 + 0x1580);
        puVar18 = (uint *)(*param_7 + local_58 * 8);
        local_50 = puVar18[1];
        local_34 = *puVar18;
        local_25 = *(char *)(*(int *)(local_30 + 0x3c) + 3 +
                            (*(int *)(local_30 + 0x40) * local_50 + local_34) * 4) * '\b';
        local_19 = *(char *)(*(int *)(local_30 + 0x3c) +
                            (*(int *)(local_30 + 0x40) * local_50 + local_34) * 4) * '\b';
        *(uint *)(param_10 + 0xc + *piVar5 * 0x18) =
             (((uint)local_25 << 8 | (uint)local_24 & 0xff) << 8 | (uint)puVar13 & 0xff) << 8 |
             (uint)local_19;
        *(undefined2 *)(param_10 + 8 + *piVar5 * 0x18) = (undefined2)local_18[0];
        *(undefined2 *)(param_10 + 10 + *piVar5 * 0x18) = local_2c._0_2_;
      }
      *(ushort *)(param_5 + 0x14 + *(int *)param_6 * 0xc) = uVar11;
      *(undefined2 *)(param_5 + 0x16 + *(int *)param_6 * 0xc) = uVar14;
      if (param_11._3_1_ != '\0') {
        local_30 = *(uint *)(param_1 + 0x1580);
        puVar18 = (uint *)(*param_7 + local_58 * 8);
        local_3c = puVar18[1];
        local_38 = *puVar18;
        local_25 = *(char *)(*(int *)(local_30 + 0x3c) + 3 +
                            (*(int *)(local_30 + 0x40) * local_3c + local_38) * 4) * '\b';
        local_19 = *(char *)(*(int *)(local_30 + 0x3c) +
                            (*(int *)(local_30 + 0x40) * local_3c + local_38) * 4) * '\b';
        *(uint *)(param_10 + 0x24 + *piVar5 * 0x18) =
             (((uint)local_25 << 8 | (uint)local_24 & 0xff) << 8 | (uint)puVar13 & 0xff) << 8 |
             (uint)local_19;
        *(undefined2 *)(param_10 + 0x20 + *piVar5 * 0x18) = (undefined2)local_18[0];
        *(undefined2 *)(param_10 + 0x22 + *piVar5 * 0x18) = local_2c._0_2_;
      }
      *(ushort *)(param_5 + 0x20 + *(int *)param_6 * 0xc) = uVar11;
      *(undefined2 *)(param_5 + 0x22 + *(int *)param_6 * 0xc) = uVar14;
      if (param_11._3_1_ != '\0') {
        local_30 = *(uint *)(param_1 + 0x1580);
        puVar18 = (uint *)(*param_7 + local_58 * 8);
        local_3c = puVar18[1];
        local_38 = *puVar18;
        local_25 = *(char *)(*(int *)(local_30 + 0x3c) + 3 +
                            (*(int *)(local_30 + 0x40) * local_3c + local_38) * 4) * '\b';
        local_19 = *(char *)(*(int *)(local_30 + 0x3c) +
                            (*(int *)(local_30 + 0x40) * local_3c + local_38) * 4) * '\b';
        *(uint *)(param_10 + 0x3c + *piVar5 * 0x18) =
             (((uint)local_25 << 8 | (uint)local_24 & 0xff) << 8 | (uint)puVar13 & 0xff) << 8 |
             (uint)local_19;
        *(undefined2 *)(param_10 + 0x38 + *piVar5 * 0x18) = (undefined2)local_18[0];
        *(undefined2 *)(param_10 + 0x3a + *piVar5 * 0x18) = local_2c._0_2_;
      }
      *(ushort *)(param_5 + 0x2c + *(int *)param_6 * 0xc) = uVar11;
      *(undefined2 *)(param_5 + 0x2e + *(int *)param_6 * 0xc) = uVar14;
      if (param_11._3_1_ != '\0') {
        puVar13 = (uint *)(*param_7 + local_58 * 8);
        local_3c = puVar13[1];
        local_38 = *puVar13;
        puVar13 = (uint *)(*(int *)(*(int *)(param_1 + 0x1580) + 0x40) * local_3c + local_38);
        local_25 = *(char *)(*(int *)(*(int *)(param_1 + 0x1580) + 0x3c) + 3 + (int)puVar13 * 4) *
                   '\b';
        local_19 = *(char *)(*(int *)(*(int *)(param_1 + 0x1580) + 0x3c) +
                            (*(int *)(*(int *)(param_1 + 0x1580) + 0x40) * local_3c + local_38) * 4)
                   * '\b';
        *(uint *)(param_10 + 0x54 + *piVar5 * 0x18) =
             (((uint)local_25 << 8 | (uint)local_24 & 0xff) << 8 | (uint)local_24 >> 8 & 0xff) << 8
             | (uint)local_19;
        *(undefined2 *)(param_10 + 0x50 + *piVar5 * 0x18) = (undefined2)local_18[0];
        *(undefined2 *)(param_10 + 0x52 + *piVar5 * 0x18) = local_2c._0_2_;
      }
      local_24 = puVar13;
      iVar16 = *(int *)(param_7[0xf] + local_58 * 4);
      if (iVar16 == 0) {
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_78;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_74;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = DAT_00f092fc;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_78;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_74;
        if ((param_11._3_1_ != '\0') && (local_41 != '\0')) {
          local_18[0] = (uint)*param_6;
          local_20 = (uint *)(param_1 + 0x190c);
          puVar13 = *(uint **)(param_1 + 0x1910);
          if (local_18 < puVar13) {
            local_2c = (uint *)*local_20;
            if (local_18 < local_2c) goto LAB_0080cf17;
            local_24 = (uint *)((int)local_18 - (int)local_2c >> 1);
            if (puVar13 == *(uint **)(param_1 + 0x1914)) {
              uVar12 = (int)puVar13 - (int)local_2c >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              uVar12 = uVar12 + 1;
              uVar9 = (int)*(uint **)(param_1 + 0x1914) - (int)local_2c >> 1;
              if (uVar9 < uVar12) {
                if (0x7fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar12) {
                  uVar9 = uVar12;
                }
                FUN_005c5920(uVar9);
              }
            }
            if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
              *(undefined2 *)local_20[1] = *(undefined2 *)(*local_20 + (int)local_24 * 2);
            }
          }
          else {
LAB_0080cf17:
            local_24 = *(uint **)(param_1 + 0x1914);
            if (puVar13 == local_24) {
              uVar12 = (int)((int)puVar13 - *local_20) >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              local_2c = (uint *)(uVar12 + 1);
              puVar13 = (uint *)((int)((int)local_24 - *local_20) >> 1);
              if (puVar13 < local_2c) {
                if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                  puVar13 = (uint *)0x0;
                }
                else {
                  puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
                }
                if (puVar13 < local_2c) {
                  puVar13 = local_2c;
                }
                FUN_005c5920(puVar13);
              }
            }
            if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
              *(undefined2 *)local_20[1] = (undefined2)local_18[0];
            }
          }
          local_20[1] = local_20[1] + 2;
        }
        *(int *)param_6 = *(int *)param_6 + 1;
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_6c;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_68;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_6c;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_68;
        if ((param_11._3_1_ != '\0') && (local_41 != '\0')) {
          local_18[0] = (uint)*param_6;
          puVar13 = *(uint **)(param_1 + 0x1910);
          local_20 = (uint *)(param_1 + 0x190c);
          if (local_18 < puVar13) {
            local_2c = (uint *)*local_20;
            if (local_2c <= local_18) {
              local_24 = (uint *)((int)local_18 - (int)local_2c >> 1);
              if (puVar13 == *(uint **)(param_1 + 0x1914)) {
                uVar12 = (int)puVar13 - (int)local_2c >> 1;
                if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
                uVar12 = uVar12 + 1;
                uVar9 = (int)*(uint **)(param_1 + 0x1914) - (int)local_2c >> 1;
                if (uVar9 < uVar12) {
                  if (0x7fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar12) {
                    uVar9 = uVar12;
                  }
                  FUN_005c5920(uVar9);
                }
              }
              if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
                *(undefined2 *)local_20[1] = *(undefined2 *)(*local_20 + (int)local_24 * 2);
              }
              local_20[1] = local_20[1] + 2;
              goto LAB_0080d0f2;
            }
          }
          if (puVar13 == *(uint **)(param_1 + 0x1914)) {
            uVar12 = (int)((int)puVar13 - *local_20) >> 1;
            if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
            local_2c = (uint *)(uVar12 + 1);
            puVar13 = (uint *)((int)(*(int *)(param_1 + 0x1914) - *local_20) >> 1);
            if (puVar13 < local_2c) {
              if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                puVar13 = (uint *)0x0;
              }
              else {
                puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
              }
              if (puVar13 < local_2c) {
                puVar13 = local_2c;
              }
              FUN_005c5920(puVar13);
            }
          }
          if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
            *(undefined2 *)local_20[1] = (undefined2)local_18[0];
          }
          local_20[1] = local_20[1] + 2;
        }
LAB_0080d0f2:
        *(int *)param_6 = *(int *)param_6 + 1;
        uVar8 = DAT_00f092fc;
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_60;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_5c;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_60;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_5c;
        if ((param_11._3_1_ != '\0') && (local_42 != '\0')) {
          local_18[0] = (uint)*param_6;
          puVar13 = *(uint **)(param_1 + 0x1910);
          local_20 = (uint *)(param_1 + 0x190c);
          if (local_18 < puVar13) {
            local_2c = (uint *)*local_20;
            if (local_2c <= local_18) {
              local_24 = (uint *)((int)local_18 - (int)local_2c >> 1);
              if (puVar13 == *(uint **)(param_1 + 0x1914)) {
                uVar12 = (int)puVar13 - (int)local_2c >> 1;
                if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
                uVar12 = uVar12 + 1;
                uVar9 = (int)*(uint **)(param_1 + 0x1914) - (int)local_2c >> 1;
                if (uVar9 < uVar12) {
                  if (0x7fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar12) {
                    uVar9 = uVar12;
                  }
                  FUN_005c5920(uVar9);
                }
              }
              if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
                *(undefined2 *)local_20[1] = *(undefined2 *)(*local_20 + (int)local_24 * 2);
              }
              local_20[1] = local_20[1] + 2;
              goto LAB_0080d25e;
            }
          }
          if (puVar13 == *(uint **)(param_1 + 0x1914)) {
            uVar12 = (int)((int)puVar13 - *local_20) >> 1;
            if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
            local_2c = (uint *)(uVar12 + 1);
            puVar13 = (uint *)((int)(*(int *)(param_1 + 0x1914) - *local_20) >> 1);
            if (puVar13 < local_2c) {
              if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                puVar13 = (uint *)0x0;
              }
              else {
                puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
              }
              if (puVar13 < local_2c) {
                puVar13 = local_2c;
              }
              FUN_005c5920(puVar13);
            }
          }
          if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
            *(undefined2 *)local_20[1] = (undefined2)local_18[0];
          }
          local_20[1] = local_20[1] + 2;
        }
LAB_0080d25e:
        *(int *)param_6 = *(int *)param_6 + 1;
        uVar8 = DAT_00f092fc;
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_4c;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_48;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = uVar8;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_4c;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_48;
        if ((param_11._3_1_ != '\0') && (local_42 != '\0')) {
          param_11 = (int *)(uint)*param_6;
          puVar13 = (uint *)(param_1 + 0x190c);
          puVar1 = *(undefined4 **)(param_1 + 0x1910);
          if (&param_11 < puVar1) {
            if ((undefined4 *)*puVar13 <= &param_11) {
              local_18[0] = (int)&param_11 - (int)*puVar13 >> 1;
              if (puVar1 == *(undefined4 **)(param_1 + 0x1914)) {
                uVar12 = (int)((int)puVar1 - *puVar13) >> 1;
                if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
                local_24 = (uint *)(uVar12 + 1);
                uVar12 = (int)((int)*(undefined4 **)(param_1 + 0x1914) - *puVar13) >> 1;
                if (uVar12 < local_24) {
                  if (0x7fffffff - (uVar12 >> 1) < uVar12) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = uVar12 + (uVar12 >> 1);
                  }
                  if (uVar12 < local_24) {
                    uVar12 = (uint)local_24;
                  }
                  FUN_005c5920(uVar12);
                }
              }
              if (*(undefined2 **)(param_1 + 0x1910) != (undefined2 *)0x0) {
                **(undefined2 **)(param_1 + 0x1910) = *(undefined2 *)(*puVar13 + local_18[0] * 2);
              }
              *(int *)(param_1 + 0x1910) = *(int *)(param_1 + 0x1910) + 2;
              *(int *)param_6 = *(int *)param_6 + 1;
              goto LAB_0080dd54;
            }
          }
          if (puVar1 == *(undefined4 **)(param_1 + 0x1914)) {
            uVar12 = (int)((int)puVar1 - *puVar13) >> 1;
            if (0x7ffffffe < uVar12) {
LAB_0080ddb3:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            local_18[0] = uVar12 + 1;
            uVar12 = (int)(*(int *)(param_1 + 0x1914) - *puVar13) >> 1;
            if (uVar12 < local_18[0]) {
              if (0x7fffffff - (uVar12 >> 1) < uVar12) {
                uVar12 = 0;
              }
              else {
                uVar12 = uVar12 + (uVar12 >> 1);
              }
              if (uVar12 < local_18[0]) {
                uVar12 = local_18[0];
              }
              FUN_005c5920(uVar12);
            }
          }
          if (*(undefined2 **)(param_1 + 0x1910) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x1910) = param_11._0_2_;
          }
          *(int *)(param_1 + 0x1910) = *(int *)(param_1 + 0x1910) + 2;
        }
        *(int *)param_6 = *(int *)param_6 + 1;
      }
      else if (iVar16 == 4) {
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_6c;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_68;
        if (param_11._3_1_ != '\0') {
          local_18[0] = (uint)*param_6;
          puVar13 = *(uint **)(param_1 + 0x1910);
          local_20 = (uint *)(param_1 + 0x190c);
          if ((local_18 < puVar13) && (local_2c = (uint *)*local_20, local_2c <= local_18)) {
            local_24 = (uint *)((int)local_18 - (int)local_2c >> 1);
            if (puVar13 == *(uint **)(param_1 + 0x1914)) {
              uVar12 = (int)puVar13 - (int)local_2c >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              uVar12 = uVar12 + 1;
              uVar9 = (int)*(uint **)(param_1 + 0x1914) - (int)local_2c >> 1;
              if (uVar9 < uVar12) {
                if (0x7fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar12) {
                  uVar9 = uVar12;
                }
                FUN_005c5920(uVar9);
              }
            }
            if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
              *(undefined2 *)local_20[1] = *(undefined2 *)(*local_20 + (int)local_24 * 2);
            }
            local_20[1] = local_20[1] + 2;
          }
          else {
            if (puVar13 == *(uint **)(param_1 + 0x1914)) {
              uVar12 = (int)((int)puVar13 - *local_20) >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              local_2c = (uint *)(uVar12 + 1);
              puVar13 = (uint *)((int)(*(int *)(param_1 + 0x1914) - *local_20) >> 1);
              if (puVar13 < local_2c) {
                if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                  puVar13 = (uint *)0x0;
                }
                else {
                  puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
                }
                if (puVar13 < local_2c) {
                  puVar13 = local_2c;
                }
                FUN_005c5920(puVar13);
              }
            }
            if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
              *(undefined2 *)local_20[1] = (undefined2)local_18[0];
            }
            local_20[1] = local_20[1] + 2;
          }
        }
        *(int *)param_6 = *(int *)param_6 + 1;
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_6c;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_68;
          uVar8 = DAT_00f092fc;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
          *piVar5 = *piVar5 + 1;
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_60;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_5c;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_60;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_5c;
        if (param_11._3_1_ != '\0') {
          local_18[0] = (uint)*param_6;
          puVar13 = *(uint **)(param_1 + 0x1910);
          local_20 = (uint *)(param_1 + 0x190c);
          if (local_18 < puVar13) {
            local_2c = (uint *)*local_20;
            if (local_2c <= local_18) {
              local_24 = (uint *)((int)local_18 - (int)local_2c >> 1);
              if (puVar13 == *(uint **)(param_1 + 0x1914)) {
                uVar12 = (int)puVar13 - (int)local_2c >> 1;
                if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
                uVar12 = uVar12 + 1;
                uVar9 = (int)*(uint **)(param_1 + 0x1914) - (int)local_2c >> 1;
                if (uVar9 < uVar12) {
                  if (0x7fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar12) {
                    uVar9 = uVar12;
                  }
                  FUN_005c5920(uVar9);
                }
              }
              if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
                *(undefined2 *)local_20[1] = *(undefined2 *)(*local_20 + (int)local_24 * 2);
              }
              local_20[1] = local_20[1] + 2;
              goto LAB_0080d66f;
            }
          }
          if (puVar13 == *(uint **)(param_1 + 0x1914)) {
            uVar12 = (int)((int)puVar13 - *local_20) >> 1;
            if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
            local_2c = (uint *)(uVar12 + 1);
            puVar13 = (uint *)((int)(*(int *)(param_1 + 0x1914) - *local_20) >> 1);
            if (puVar13 < local_2c) {
              if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                puVar13 = (uint *)0x0;
              }
              else {
                puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
              }
              if (puVar13 < local_2c) {
                puVar13 = local_2c;
              }
              FUN_005c5920(puVar13);
            }
          }
          if ((undefined2 *)local_20[1] != (undefined2 *)0x0) {
            *(undefined2 *)local_20[1] = (undefined2)local_18[0];
          }
          local_20[1] = local_20[1] + 2;
        }
LAB_0080d66f:
        *(int *)param_6 = *(int *)param_6 + 1;
        uVar8 = DAT_00f092fc;
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_4c;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_48;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = uVar8;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_4c;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_48;
        if (param_11._3_1_ != '\0') {
          local_18[0] = (uint)*param_6;
          puVar13 = *(uint **)(param_1 + 0x1910);
          puVar18 = (uint *)(param_1 + 0x190c);
          if (local_18 < puVar13) {
            if (local_18 < (uint *)*puVar18) goto LAB_0080d750;
            local_24 = (uint *)((int)local_18 - (int)*puVar18 >> 1);
            if (puVar13 == *(uint **)(param_1 + 0x1914)) {
              uVar12 = (int)((int)puVar13 - *puVar18) >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              local_2c = (uint *)(uVar12 + 1);
              puVar13 = (uint *)((int)((int)*(uint **)(param_1 + 0x1914) - *puVar18) >> 1);
              if (puVar13 < local_2c) {
                if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                  puVar13 = (uint *)0x0;
                }
                else {
                  puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
                }
                if (puVar13 < local_2c) {
                  puVar13 = local_2c;
                }
                FUN_005c5920(puVar13);
              }
            }
            puVar10 = *(undefined2 **)(param_1 + 0x1910);
            if (puVar10 != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)(*puVar18 + (int)local_24 * 2);
              goto LAB_0080d7a3;
            }
          }
          else {
LAB_0080d750:
            if (puVar13 == *(uint **)(param_1 + 0x1914)) {
              uVar12 = (int)((int)puVar13 - *puVar18) >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              local_24 = (uint *)(uVar12 + 1);
              puVar13 = (uint *)((int)((int)*(uint **)(param_1 + 0x1914) - *puVar18) >> 1);
              if (puVar13 < local_24) {
                if ((uint *)(0x7fffffff - ((uint)puVar13 >> 1)) < puVar13) {
                  puVar13 = (uint *)0x0;
                }
                else {
                  puVar13 = (uint *)((int)puVar13 + ((uint)puVar13 >> 1));
                }
                if (puVar13 < local_24) {
                  puVar13 = local_24;
                }
                FUN_005c5920(puVar13);
              }
            }
            puVar10 = *(undefined2 **)(param_1 + 0x1910);
            if (puVar10 != (undefined2 *)0x0) {
              uVar14 = (undefined2)local_18[0];
LAB_0080d7a3:
              *puVar10 = uVar14;
            }
          }
          *(int *)(param_1 + 0x1910) = *(int *)(param_1 + 0x1910) + 2;
        }
        *(int *)param_6 = *(int *)param_6 + 1;
        uVar8 = DAT_00f092fc;
        if (param_11._3_1_ != '\0') {
          iVar16 = *piVar5;
          *(float *)(param_10 + iVar16 * 0x18) = local_4c;
          *(float *)(param_10 + 4 + iVar16 * 0x18) = local_48;
          *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
          *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = uVar8;
          *piVar5 = *piVar5 + 1;
        }
        iVar16 = *(int *)param_6;
        *(float *)(param_5 + iVar16 * 0xc) = local_4c;
        *(float *)(param_5 + 4 + iVar16 * 0xc) = local_48;
        if (param_11._3_1_ != '\0') {
          param_11 = (int *)(uint)*param_6;
          puVar1 = *(undefined4 **)(param_1 + 0x1910);
          puVar13 = (uint *)(param_1 + 0x190c);
          if ((&param_11 < puVar1) && ((undefined4 *)*puVar13 <= &param_11)) {
            local_18[0] = (int)&param_11 - (int)*puVar13 >> 1;
            if (puVar1 == *(undefined4 **)(param_1 + 0x1914)) {
              uVar12 = (int)((int)puVar1 - *puVar13) >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              local_24 = (uint *)(uVar12 + 1);
              uVar12 = (int)((int)*(undefined4 **)(param_1 + 0x1914) - *puVar13) >> 1;
              if (uVar12 < local_24) {
                if (0x7fffffff - (uVar12 >> 1) < uVar12) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar12 + (uVar12 >> 1);
                }
                if (uVar12 < local_24) {
                  uVar12 = (uint)local_24;
                }
                FUN_005c5920(uVar12);
              }
            }
            if (*(undefined2 **)(param_1 + 0x1910) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1910) = *(undefined2 *)(*puVar13 + local_18[0] * 2);
              *(int *)(param_1 + 0x1910) = *(int *)(param_1 + 0x1910) + 2;
              *(int *)param_6 = *(int *)param_6 + 1;
              goto LAB_0080dd54;
            }
          }
          else {
            if (puVar1 == *(undefined4 **)(param_1 + 0x1914)) {
              uVar12 = (int)((int)puVar1 - *puVar13) >> 1;
              if (0x7ffffffe < uVar12) goto LAB_0080ddb3;
              local_18[0] = uVar12 + 1;
              uVar12 = (int)((int)*(undefined4 **)(param_1 + 0x1914) - *puVar13) >> 1;
              if (uVar12 < local_18[0]) {
                if (0x7fffffff - (uVar12 >> 1) < uVar12) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar12 + (uVar12 >> 1);
                }
                if (uVar12 < local_18[0]) {
                  uVar12 = local_18[0];
                }
                FUN_005c5920(uVar12);
              }
            }
            if (*(undefined2 **)(param_1 + 0x1910) != (undefined2 *)0x0) {
              **(undefined2 **)(param_1 + 0x1910) = param_11._0_2_;
            }
          }
          *(int *)(param_1 + 0x1910) = *(int *)(param_1 + 0x1910) + 2;
        }
        *(int *)param_6 = *(int *)param_6 + 1;
      }
      else {
        if (iVar16 == 3) {
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_78;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_74;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = DAT_00f092fc;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_78;
          *(float *)(param_5 + 4 + iVar16 * 0xc) = local_74;
          if (param_11._3_1_ != '\0') {
            local_18[0] = (uint)*param_6;
            FUN_005c5860();
          }
          *(int *)param_6 = *(int *)param_6 + 1;
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_6c;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_68;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_6c;
          *(float *)(param_5 + 4 + iVar16 * 0xc) = local_68;
          if (param_11._3_1_ != '\0') {
            local_18[0] = (uint)*param_6;
            FUN_005c5860();
          }
          *(int *)param_6 = *(int *)param_6 + 1;
          uVar8 = DAT_00f092fc;
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_60;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_5c;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_60;
          *(float *)(param_5 + 4 + iVar16 * 0xc) = local_5c;
          if (param_11._3_1_ != '\0') {
            local_18[0] = (uint)*param_6;
            FUN_005c5860();
          }
          *(int *)param_6 = *(int *)param_6 + 1;
          uVar8 = DAT_00f092fc;
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_60;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_5c;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_60;
          fVar17 = local_5c;
        }
        else {
          if (iVar16 != 2) {
            if (iVar16 == 1) {
              if (param_11._3_1_ != '\0') {
                iVar16 = *piVar5;
                *(float *)(param_10 + iVar16 * 0x18) = local_78;
                *(float *)(param_10 + 4 + iVar16 * 0x18) = local_74;
                *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
                *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = DAT_00f092fc;
                *piVar5 = *piVar5 + 1;
              }
              iVar16 = *(int *)param_6;
              *(float *)(param_5 + iVar16 * 0xc) = local_78;
              *(float *)(param_5 + 4 + iVar16 * 0xc) = local_74;
              if (param_11._3_1_ != '\0') {
                local_18[0] = (uint)*param_6;
                FUN_005c5860();
              }
              *(int *)param_6 = *(int *)param_6 + 1;
              if (param_11._3_1_ != '\0') {
                iVar16 = *piVar5;
                *(float *)(param_10 + iVar16 * 0x18) = local_6c;
                *(float *)(param_10 + 4 + iVar16 * 0x18) = local_68;
                *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
                *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
                *piVar5 = *piVar5 + 1;
              }
              iVar16 = *(int *)param_6;
              *(float *)(param_5 + iVar16 * 0xc) = local_6c;
              fVar17 = local_68;
              goto LAB_0080dc3e;
            }
            goto LAB_0080dd54;
          }
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_78;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_74;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = 0;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = DAT_00f092fc;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_78;
          *(float *)(param_5 + 4 + iVar16 * 0xc) = local_74;
          if (param_11._3_1_ != '\0') {
            local_18[0] = (uint)*param_6;
            FUN_005c5860();
          }
          *(int *)param_6 = *(int *)param_6 + 1;
          uVar8 = DAT_00f092fc;
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_60;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_5c;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = 0;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_60;
          fVar17 = local_5c;
LAB_0080dc3e:
          *(float *)(param_5 + 4 + iVar16 * 0xc) = fVar17;
          if (param_11._3_1_ != '\0') {
            local_18[0] = (uint)*param_6;
            FUN_005c5860();
          }
          *(int *)param_6 = *(int *)param_6 + 1;
          uVar8 = DAT_00f092fc;
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_4c;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_48;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = uVar8;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_4c;
          *(float *)(param_5 + 4 + iVar16 * 0xc) = local_48;
          if (param_11._3_1_ != '\0') {
            local_18[0] = (uint)*param_6;
            FUN_005c5860();
          }
          *(int *)param_6 = *(int *)param_6 + 1;
          uVar8 = DAT_00f092fc;
          if (param_11._3_1_ != '\0') {
            iVar16 = *piVar5;
            *(float *)(param_10 + iVar16 * 0x18) = local_4c;
            *(float *)(param_10 + 4 + iVar16 * 0x18) = local_48;
            *(undefined4 *)(param_10 + 0x10 + *piVar5 * 0x18) = uVar8;
            *(undefined4 *)(param_10 + 0x14 + *piVar5 * 0x18) = uVar8;
            *piVar5 = *piVar5 + 1;
          }
          iVar16 = *(int *)param_6;
          *(float *)(param_5 + iVar16 * 0xc) = local_4c;
          fVar17 = local_48;
        }
        *(float *)(param_5 + 4 + iVar16 * 0xc) = fVar17;
        if (param_11._3_1_ != '\0') {
          param_11 = (int *)(uint)*param_6;
          FUN_005c5860();
        }
        *(int *)param_6 = *(int *)param_6 + 1;
      }
LAB_0080dd54:
      iVar16 = *param_7;
      local_58 = local_58 + 1;
    } while (local_58 < param_7[1] - iVar16 >> 3);
  }
  ExceptionList = local_10;
  return;
}

