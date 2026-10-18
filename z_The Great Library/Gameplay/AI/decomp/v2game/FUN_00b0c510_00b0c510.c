// FUN_00b0c510 @ 00b0c510 body=[[00b0c510, 00b0d20d]]


void FUN_00b0c510(char param_1,char param_2,int param_3,int param_4,char param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  int in_ECX;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *local_e0;
  uint local_dc;
  float *local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int *local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined **local_90;
  int *local_8c;
  float local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int *piStack_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b394a3;
  local_c = ExceptionList;
  uVar7 = DAT_00ef259c ^ (uint)&stack0xffffff0c;
  ExceptionList = &local_c;
  local_ac = in_ECX;
  if (param_2 != '\0') {
    local_84 = *(uint *)(param_4 + 0x84);
    local_80 = 0;
    if (local_84 != 0) {
      do {
        iVar15 = *(int *)(*(int *)(param_4 + 0x80) + local_80 * 4);
        uVar8 = 0;
        if (*(uint *)(param_3 + 0x84) != 0) {
          piVar10 = *(int **)(param_3 + 0x80);
LAB_00b0c5b0:
          if (*(int *)(*piVar10 + 0x10) != *(int *)(iVar15 + 0x10)) goto code_r0x00b0c5b7;
          local_a4 = (int *)(*(int **)(param_3 + 0x80))[uVar8];
          if (local_a4 != (int *)0x0) {
            if (*(int *)(local_a4[7] + 4) == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = (**(code **)(**(int **)(local_a4[7] + 4) + 0x10))(uVar7);
            }
            iVar9 = local_a8;
            iVar15 = *(int *)(iVar15 + 0x1c);
            if (*(int *)(iVar15 + 4) == 0) {
              iVar15 = 0;
            }
            else {
              iVar15 = (**(code **)(**(int **)(iVar15 + 4) + 0x10))();
            }
            iVar3 = local_a8;
            if ((iVar9 != 0) && (iVar15 != 0)) {
              local_7c = *(uint *)(local_a8 + 0x18);
              if (*(int *)(local_a8 + 0x14) == *(int *)(iVar15 + 0x14)) {
                if (local_7c != *(uint *)(iVar15 + 0x18)) {
                  FUN_00b15e10("EMotionFX::PMorphTargetStandard::InitFromPose() - Number of vertices of base mesh (%d verts) is different from the number of morph target vertices (%d verts). This can lead to some visual shading errors."
                               ,local_7c,*(uint *)(iVar15 + 0x18));
                }
                iVar17 = 0;
                local_b0 = FUN_00add410(0,0);
                local_d8 = (float *)FUN_00add410(1,0);
                local_4c = FUN_00add410(5,0);
                iVar9 = FUN_00add410(2,0);
                local_48 = FUN_00add410(0,0);
                local_78 = FUN_00add410(1,0);
                local_50 = FUN_00add410(2,0);
                local_a0 = (int *)0x0;
                local_9c = 0;
                local_98 = 0;
                local_94 = CONCAT22(local_94._2_2_,1);
                local_c0 = (int *)0x0;
                local_bc = 0;
                local_b8 = 0;
                local_b4 = CONCAT22(local_b4._2_2_,1);
                local_4 = 1;
                FUN_00b0c2b0(iVar3,&local_a0);
                FUN_00b0c2b0(iVar15,&local_c0);
                local_44 = 3.4028235e+38;
                uVar8 = 0;
                local_40 = 3.4028235e+38;
                local_3c = 3.4028235e+38;
                local_38 = -3.4028235e+38;
                local_34 = -3.4028235e+38;
                local_30 = -3.4028235e+38;
                if (local_7c != 0) {
                  pfVar16 = (float *)(local_b0 + 8);
                  do {
                    iVar15 = local_48 + *(int *)local_c0[*(int *)(local_4c + uVar8 * 4) * 4] * 0xc;
                    local_68 = *(float *)(local_48 +
                                         *(int *)local_c0[*(int *)(local_4c + uVar8 * 4) * 4] * 0xc)
                               - pfVar16[-2];
                    local_64 = *(float *)(iVar15 + 4) - pfVar16[-1];
                    local_60 = *(float *)(iVar15 + 8) - *pfVar16;
                    fVar4 = local_64 * local_64 + local_68 * local_68 + local_60 * local_60;
                    if ((1e-05 < fVar4) && (0.0001 < SQRT(fVar4))) {
                      FUN_00ad2ef0(&local_68);
                      iVar17 = iVar17 + 1;
                    }
                    uVar8 = uVar8 + 1;
                    pfVar16 = pfVar16 + 3;
                  } while (uVar8 < local_7c);
                  if (iVar17 != 0) {
                    local_d4 = local_44;
                    if (local_40 <= local_44) {
                      local_d4 = local_40;
                    }
                    if (local_3c <= local_d4) {
                      local_d4 = local_3c;
                    }
                    local_d0 = local_38;
                    if (local_38 <= local_34) {
                      local_d0 = local_34;
                    }
                    if (local_d0 <= local_30) {
                      local_d0 = local_30;
                    }
                    if (local_d0 - local_d4 < 1.0) {
                      if ((local_d4 < 0.0) && (-1.0 < local_d4)) {
                        local_d4 = -1.0;
                      }
                      if ((0.0 < local_d0) && (local_d0 < 1.0)) {
                        local_d0 = 1.0;
                      }
                    }
                    if ((iVar9 == 0) || (bVar5 = true, local_50 == 0)) {
                      bVar5 = false;
                    }
                    piVar10 = (int *)(*(code *)PTR_FUN_00f01b08)(0x14,0xcd,4,0,0,0xffffffff);
                    local_4._0_1_ = 2;
                    if (piVar10 == (int *)0x0) {
                      piStack_2c = (int *)0x0;
                    }
                    else {
                      iVar15 = *local_a4;
                      piVar10[1] = iVar17;
                      piVar10[2] = iVar15;
                      iVar15 = (*(code *)PTR_FUN_00f01b08)(iVar17 << 4,0xcd,4,0x65,0,0);
                      piVar10[3] = -0x3ee00000;
                      *piVar10 = iVar15;
                      piVar10[4] = 0x41200000;
                      piStack_2c = piVar10;
                    }
                    piStack_2c[3] = (int)local_d4;
                    local_e0 = (float *)(iVar9 + 8);
                    piStack_2c[4] = (int)local_d0;
                    uVar8 = 0;
                    local_4 = CONCAT31(local_4._1_3_,1);
                    local_dc = 0;
                    pfVar16 = (float *)(local_b0 + 8);
                    piVar10 = piStack_2c;
                    local_b0 = (int)local_d8 - local_b0;
                    do {
                      piVar14 = piStack_2c;
                      iVar9 = *(int *)(local_4c + uVar8 * 4);
                      iVar3 = *(int *)local_c0[iVar9 * 4];
                      iVar15 = local_48 + iVar3 * 0xc;
                      local_5c = *(float *)(local_48 + iVar3 * 0xc) - pfVar16[-2];
                      local_58 = *(float *)(iVar15 + 4) - pfVar16[-1];
                      local_54 = *(float *)(iVar15 + 8) - *pfVar16;
                      fVar4 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
                      if ((1e-05 < fVar4) && (0.0001 < SQRT(fVar4))) {
                        uVar11 = 0;
                        if (local_a0[iVar9 * 4 + 1] == local_c0[iVar9 * 4 + 1]) {
                          if (local_a0[iVar9 * 4 + 1] != 0) {
                            puVar13 = (uint *)local_a0[iVar9 * 4];
                            do {
                              if (*puVar13 == uVar8) goto LAB_00b0caa5;
                              uVar11 = uVar11 + 1;
                              puVar13 = puVar13 + 1;
                            } while (uVar11 < (uint)local_a0[iVar9 * 4 + 1]);
                          }
                          uVar11 = 0xffffffff;
                        }
LAB_00b0caa5:
                        iVar9 = ((int *)local_c0[iVar9 * 4])[uVar11];
                        iVar15 = local_78 + iVar9 * 0xc;
                        local_74 = *(float *)(local_78 + iVar9 * 0xc) - *local_d8;
                        local_70 = *(float *)(iVar15 + 4) - local_d8[1];
                        local_6c = *(float *)(iVar15 + 8) - *(float *)(local_b0 + (int)pfVar16);
                        local_cc = 0.0;
                        local_c8 = 0.0;
                        local_c4 = 0.0;
                        if (bVar5) {
                          local_cc = *(float *)(local_50 + iVar9 * 0x10) - local_e0[-2];
                          local_c8 = *(float *)(local_50 + 4 + iVar9 * 0x10) - local_e0[-1];
                          local_c4 = *(float *)(local_50 + 8 + iVar9 * 0x10) - *local_e0;
                        }
                        *(uint *)(local_dc + 0xc + *piStack_2c) = uVar8;
                        FUN_00b0d330(&local_5c,local_d4,local_d0);
                        FUN_00b0d400(&local_74,0xbf800000,0x3f800000);
                        FUN_00b0d400(&local_cc,0xbf800000,0x3f800000);
                        local_dc = local_dc + 0x10;
                        piVar10 = piVar14;
                      }
                      iVar15 = local_ac;
                      local_d8 = local_d8 + 3;
                      local_e0 = local_e0 + 4;
                      uVar8 = uVar8 + 1;
                      pfVar16 = pfVar16 + 3;
                    } while (uVar8 < local_7c);
                    iVar9 = *(int *)(local_ac + 0x28);
                    uVar8 = iVar9 + 1;
                    *(uint *)(local_ac + 0x28) = uVar8;
                    if (*(uint *)(local_ac + 0x2c) < uVar8) {
                      FUN_00aeb6c0(iVar9 + 2);
                    }
                    puVar1 = (undefined4 *)
                             (*(int *)(iVar15 + 0x24) + -4 + *(int *)(iVar15 + 0x28) * 4);
                    if (puVar1 != (undefined4 *)0x0) {
                      *puVar1 = piVar10;
                    }
                    iVar15 = local_a4[7];
                    if ((*(int **)(iVar15 + 0x14) == (int *)0x0) ||
                       (iVar9 = (**(code **)(**(int **)(iVar15 + 0x14) + 0x10))(), iVar9 == 0)) {
                      local_78 = (*(code *)PTR_FUN_00f01b08)(0x14,0xcb,4,0,0,0xffffffff);
                      local_4._0_1_ = 3;
                      if (local_78 == 0) {
                        uVar12 = 0;
                      }
                      else {
                        uVar12 = FUN_00aeb090(local_a8);
                      }
                      local_4._0_1_ = 1;
                      local_90 = &PTR_FUN_00ddd998;
                      local_8c = (int *)0x0;
                      FUN_00ad8ad0(uVar12);
                      piVar10 = local_8c;
                      local_4 = CONCAT31(local_4._1_3_,4);
                      if (local_8c != (int *)0x0) {
                        (**(code **)(*local_8c + 4))();
                      }
                      piVar14 = *(int **)(iVar15 + 0x14);
                      *(int **)(iVar15 + 0x14) = piVar10;
                      if (piVar14 != (int *)0x0) {
                        (**(code **)(*piVar14 + 8))();
                      }
                      local_4 = CONCAT31(local_4._1_3_,1);
                      local_90 = &PTR_FUN_00ddd998;
                      local_8c = (int *)0x0;
                      if (piVar10 != (int *)0x0) {
                        (**(code **)(*piVar10 + 8))();
                      }
                      piVar10 = *(int **)(iVar15 + 0x14);
                      iVar9 = local_a4[7];
                      if (piVar10 != (int *)0x0) {
                        (**(code **)(*piVar10 + 4))();
                      }
                      piVar14 = *(int **)(iVar9 + 0x14);
                      *(int **)(iVar9 + 0x14) = piVar10;
                      if (piVar14 != (int *)0x0) {
                        (**(code **)(*piVar14 + 8))();
                      }
                    }
                    if (*(int **)(iVar15 + 0x14) != (int *)0x0) {
                      (**(code **)(**(int **)(iVar15 + 0x14) + 0x10))();
                    }
                    iVar9 = FUN_00aeb040(2,0);
                    if (iVar9 == 0) {
                      local_78 = (*(code *)PTR_FUN_00f01b08)(0x1c,0xcb,4,0,0,0xffffffff);
                      local_4._0_1_ = 5;
                      if (local_78 == 0) {
                        iVar9 = 0;
                      }
                      else {
                        iVar9 = FUN_00b120e0(local_a8);
                      }
                      local_4 = CONCAT31(local_4._1_3_,1);
                      if (*(int **)(iVar15 + 0x14) != (int *)0x0) {
                        (**(code **)(**(int **)(iVar15 + 0x14) + 0x10))();
                      }
                      FUN_00aeb2a0(0,iVar9);
                    }
                    iVar17 = local_ac;
                    iVar15 = *(int *)(iVar9 + 0x10);
                    iVar3 = *(int *)(local_ac + 0x28);
                    uVar8 = iVar15 + 1;
                    local_20 = (float)((uint)local_20 & 0xffffff00);
                    *(uint *)(iVar9 + 0x10) = uVar8;
                    if (*(uint *)(iVar9 + 0x14) < uVar8) {
                      FUN_00adfdb0(iVar15 + 2);
                    }
                    piVar14 = local_c0;
                    piVar10 = (int *)(*(int *)(iVar9 + 0xc) + (*(int *)(iVar9 + 0x10) * 3 + -3) * 4)
                    ;
                    if (piVar10 != (int *)0x0) {
                      *piVar10 = iVar17;
                      piVar10[1] = iVar3 + -1;
                      piVar10[2] = (int)local_20;
                    }
                    local_4 = local_4 & 0xffffff00;
                    piVar10 = local_c0;
                    for (iVar15 = local_bc; iVar15 != 0; iVar15 = iVar15 + -1) {
                      if (*piVar10 != 0) {
                        (*(code *)PTR__free_00f01b10)(*piVar10);
                      }
                      piVar10 = piVar10 + 4;
                    }
                    if (piVar14 != (int *)0x0) {
                      (*(code *)PTR__free_00f01b10)(piVar14);
                    }
                    piVar14 = local_a0;
                    local_4 = 0xffffffff;
                    piVar10 = local_a0;
                    for (iVar15 = local_9c; iVar15 != 0; iVar15 = iVar15 + -1) {
                      if (*piVar10 != 0) {
                        (*(code *)PTR__free_00f01b10)(*piVar10);
                      }
                      piVar10 = piVar10 + 4;
                    }
                    if (piVar14 != (int *)0x0) {
                      (*(code *)PTR__free_00f01b10)(piVar14);
                    }
                    goto LAB_00b0ce24;
                  }
                }
                local_4 = local_4 & 0xffffff00;
                FUN_00ad44f0();
                local_4 = 0xffffffff;
                FUN_00ad44f0();
              }
              else {
                FUN_00b15da0("EMotionFX::PMorphTargetStandard::InitFromPose() - Number of original vertices from base mesh (%d org verts) differs from morph target num org vertices (%d verts)"
                             ,*(int *)(local_a8 + 0x14),*(int *)(iVar15 + 0x14));
              }
            }
          }
        }
LAB_00b0ce24:
        local_80 = local_80 + 1;
      } while (local_80 < local_84);
    }
  }
  if (param_1 != '\0') {
    local_84 = *(uint *)(param_4 + 0x84);
    local_dc = 0;
    if (local_84 != 0) {
      do {
        piVar10 = *(int **)(*(int *)(param_4 + 0x80) + local_dc * 4);
        uVar7 = 0;
        if (*(uint *)(param_3 + 0x84) != 0) {
          piVar14 = *(int **)(param_3 + 0x80);
          do {
            if (*(int *)(*piVar14 + 0x10) == piVar10[4]) {
              piVar14 = (int *)(*(int **)(param_3 + 0x80))[uVar7];
              if (piVar14 != (int *)0x0) {
                iVar15 = *piVar14;
                local_74 = *(float *)(*(int *)(param_3 + 0x1c) + 0x2c + iVar15 * 0x38);
                puVar1 = (undefined4 *)(*(int *)(param_3 + 0x1c) + iVar15 * 0x38);
                local_70 = (float)puVar1[0xc];
                local_6c = (float)puVar1[0xd];
                puVar2 = (undefined4 *)(*(int *)(param_4 + 0x1c) + *piVar10 * 0x38);
                local_28 = (float)puVar2[0xb];
                local_24 = (float)puVar2[0xc];
                local_20 = (float)puVar2[0xd];
                local_1c = *puVar1;
                local_18 = puVar1[1];
                local_14 = puVar1[2];
                local_10 = puVar1[3];
                local_a0 = (int *)*puVar2;
                local_9c = puVar2[1];
                local_98 = puVar2[2];
                local_94 = puVar2[3];
                local_cc = (float)puVar1[8];
                local_c8 = (float)puVar1[9];
                local_c4 = (float)puVar1[10];
                local_90 = (undefined **)puVar2[8];
                local_8c = (int *)puVar2[9];
                local_88 = (float)puVar2[10];
                local_44 = (float)puVar1[4];
                local_40 = (float)puVar1[5];
                local_3c = (float)puVar1[6];
                local_38 = (float)puVar1[7];
                local_c0 = (int *)puVar2[4];
                local_bc = puVar2[5];
                local_b8 = puVar2[6];
                local_b4 = puVar2[7];
                if ((((0.0001 < (local_74 - local_28) * (local_74 - local_28) +
                                (local_70 - local_24) * (local_70 - local_24) +
                                (local_6c - local_20) * (local_6c - local_20)) ||
                     (cVar6 = FUN_00ad87c0(&local_1c,&local_a0,0x38d1b717), cVar6 == '\0')) ||
                    (0.0001 < (local_c4 - local_88) * (local_c4 - local_88) +
                              (local_c8 - (float)local_8c) * (local_c8 - (float)local_8c) +
                              (local_cc - (float)local_90) * (local_cc - (float)local_90))) ||
                   (cVar6 = FUN_00ad87c0(&local_44,&local_c0,0x38d1b717), cVar6 == '\0')) {
                  iVar3 = local_ac;
                  local_5c = local_28 - local_74;
                  iVar9 = *(int *)(local_ac + 0x18);
                  uVar7 = iVar9 + 1;
                  *(uint *)(local_ac + 0x18) = uVar7;
                  local_58 = local_24 - local_70;
                  local_54 = local_20 - local_6c;
                  local_68 = (float)local_90 - local_cc;
                  local_64 = (float)local_8c - local_c8;
                  local_60 = local_88 - local_c4;
                  if (*(uint *)(local_ac + 0x1c) < uVar7) {
                    FUN_00b0d4d0(iVar9 + 2);
                  }
                  puVar1 = (undefined4 *)
                           (*(int *)(iVar3 + 0x14) + -0x3c + *(int *)(iVar3 + 0x18) * 0x3c);
                  if (puVar1 != (undefined4 *)0x0) {
                    *puVar1 = local_a0;
                    puVar1[1] = local_9c;
                    puVar1[2] = local_98;
                    puVar1[3] = local_94;
                    puVar1[4] = local_c0;
                    puVar1[5] = local_bc;
                    puVar1[6] = local_b8;
                    puVar1[7] = local_b4;
                    puVar1[8] = local_5c;
                    puVar1[9] = local_58;
                    puVar1[10] = local_54;
                    puVar1[0xb] = local_68;
                    puVar1[0xc] = local_64;
                    puVar1[0xd] = local_60;
                    puVar1[0xe] = iVar15;
                  }
                }
              }
              break;
            }
            uVar7 = uVar7 + 1;
            piVar14 = piVar14 + 1;
          } while (uVar7 < *(uint *)(param_3 + 0x84));
        }
        local_dc = local_dc + 1;
      } while (local_dc < local_84);
    }
  }
  if ((param_5 != '\0') && (param_4 != 0)) {
    FUN_00ad7d30();
    (*(code *)PTR__free_00f01b10)(param_4);
  }
  ExceptionList = local_c;
  return;
code_r0x00b0c5b7:
  uVar8 = uVar8 + 1;
  piVar10 = piVar10 + 1;
  if (*(uint *)(param_3 + 0x84) <= uVar8) goto LAB_00b0ce24;
  goto LAB_00b0c5b0;
}

