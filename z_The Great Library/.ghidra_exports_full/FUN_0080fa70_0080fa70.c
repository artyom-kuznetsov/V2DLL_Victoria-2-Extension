// FUN_0080fa70 @ 0080fa70 body=[[0080fa70, 0080fbd1] [0080fbd5, 00810818]]


void FUN_0080fa70(int param_1,int *param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_1b4 [64];
  double local_174;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  float local_104;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  float local_e4;
  undefined4 uStack_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c0;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined8 local_94;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int *local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  float local_68;
  float local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6a8c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0080ec30(param_1);
  piVar9 = (int *)0x0;
  if (DAT_0125ce80 == 0) {
    local_88 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (local_88 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar2);
  }
  local_7c = (int *)(DAT_0125ce80 + 0x1c);
  if (DAT_012589f4 != 0) {
    piVar9 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + DAT_012589f4 * 4);
  }
  (**(code **)(*piVar9 + 0xe8))(piVar9,"railroad");
  iVar4 = *(int *)(param_1 + 0x6bc88);
  uVar2 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x16c))();
  uVar3 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x174))();
  D3DXMatrixMultiply(local_1b4,uVar2,uVar3);
  uVar2 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"ViewProjectionMatrix");
  (**(code **)(*piVar9 + 0x98))(piVar9,uVar2,local_1b4);
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  FUN_00409350("gfx/anims/railroad.dds",0x16);
  local_8 = 1;
  iVar4 = *piVar9;
  uVar2 = FUN_009bcfc0(local_100);
  (**(code **)(iVar4 + 0xd0))(piVar9,&DAT_00e0bce4,uVar2);
  local_8 = 0xffffffff;
  if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_100[0]);
  }
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  local_54 = DAT_0125870c;
  local_4c = (**(code **)(*piVar9 + 0x24))(piVar9,0,"ControlPoints");
  local_48 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"TotalVertices_Length_Pos");
  local_60 = 0;
  (**(code **)(*piVar9 + 0xfc))(piVar9,&local_60,0);
  local_24 = (float)*(int *)(DAT_0125870c + 0x2abc);
  local_84 = 0;
  piVar8 = local_7c;
  if (local_60 != 0) {
    do {
      uVar10 = local_84;
      (**(code **)(*piVar9 + 0x100))(piVar9,local_84);
      iVar4 = *piVar8;
      local_6c = 0;
      fVar14 = DAT_00f092dc;
      if (0 < (int)(piVar8[1] - iVar4 & 0xfffffffcU)) {
        do {
          local_58 = *(int *)(iVar4 + local_6c * 4);
          if (*(char *)(local_58 + 0x139) != '\0') {
            local_74 = 0;
            local_88 = param_2[1] - *param_2 >> 2;
            if (0 < local_88) {
              do {
                iVar4 = *(int *)(*param_2 + local_74 * 4);
                iVar5 = *(int *)(iVar4 + 8);
                local_bc = *(int *)(iVar4 + 0xc);
                iVar4 = (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24;
                local_14 = 0;
                local_5c = 0;
                local_94 = (double)CONCAT44(iVar4,(undefined4)local_94);
                local_8c = iVar5;
                if (iVar4 < 1) {
LAB_008104fc:
                  if (*(char *)(iVar5 + 0x2a) != '\0') {
                    if (*(char *)(local_58 + 0x131) == '\0') {
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0x18) + 0x118) +
                                      *(int *)(local_58 + 0x134) * 4);
                    }
                    if (0 < *(int *)(iVar4 + 0x20)) {
                      iVar4 = *(int *)(local_58 + 0x58) * 0x10 + *(int *)(iVar5 + 0x330);
                      fVar15 = *(float *)(iVar4 + 8);
                      fVar16 = *(float *)(iVar4 + 0xc);
                      iVar4 = (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24;
                      local_2c = (double)((ulonglong)local_2c & 0xffffffff);
                      local_c8 = fVar15;
                      local_c0 = fVar16;
                      if (0 < iVar4) {
                        local_94 = (double)CONCAT44(*(int *)(local_54 + 0x2aa4),(undefined4)local_94
                                                   );
                        piVar8 = (int *)(*(int *)(iVar5 + 200) + 4);
                        do {
                          if ((*(char *)(*(int *)(*(int *)(local_54 + 0x2aa4) + *piVar8 * 4) + 0x2a)
                               != '\0') &&
                             (((float)piVar8[6] != fVar14 || ((float)piVar8[7] != fVar14)))) {
                            if (0 < iVar4) {
                              iVar6 = 0;
                              local_2c = (double)((ulonglong)local_2c & 0xffffffff);
                              local_14 = iVar4;
                              do {
                                iVar6 = iVar6 + *(int *)(iVar5 + 200);
                                if (*(char *)(*(int *)(*(int *)(local_54 + 0x2aa4) +
                                                      *(int *)(iVar6 + 4) * 4) + 0x2a) != '\0') {
                                  local_10c = (float)*(int *)(iVar6 + 0x1c);
                                  local_104 = (float)*(int *)(iVar6 + 0x20);
                                  if ((local_10c != fVar14) || (local_104 != fVar14)) {
                                    local_16c = fVar15;
                                    local_168 = fVar16;
                                    local_164 = fVar15;
                                    local_160 = fVar16;
                                    local_15c = local_10c;
                                    local_158 = local_104;
                                    local_154 = local_10c;
                                    local_150 = local_104;
                                    (**(code **)(*piVar9 + 0x80))(piVar9,local_4c,&local_16c,8);
                                    local_12c = 0x41700000;
                                    local_94 = (double)(local_10c - local_c8) *
                                               (double)(local_10c - local_c8);
                                    fVar11 = (float10)FUN_00401030((float)(local_94 + 0.0 +
                                                                          (double)(local_104 -
                                                                                  local_c0) *
                                                                          (double)(local_104 -
                                                                                  local_c0)));
                                    local_128 = (float)fVar11;
                                    local_124 = param_3;
                                    local_120 = param_4;
                                    (**(code **)(*piVar9 + 0x80))(piVar9,local_48,&local_12c,4);
                                    (**(code **)(*piVar9 + 0x104))(piVar9);
                                    FUN_009f9d50();
                                    iVar5 = local_8c;
                                    fVar14 = DAT_00f092dc;
                                    fVar15 = local_c8;
                                    fVar16 = local_c0;
                                  }
                                }
                                iVar6 = local_2c._4_4_ + 0x24;
                                local_14 = local_14 + -1;
                                local_2c = (double)CONCAT44(iVar6,(undefined4)local_2c);
                              } while (local_14 != 0);
                            }
                            break;
                          }
                          local_2c._4_4_ = local_2c._4_4_ + 1;
                          piVar8 = piVar8 + 9;
                        } while (local_2c._4_4_ < iVar4);
                      }
                    }
                  }
                }
                else {
                  local_80 = 0;
                  local_50 = 0;
                  do {
                    if (((-1 < local_5c) &&
                        (local_5c < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24)) &&
                       ((*(int *)(iVar5 + 0x98) - *(int *)(iVar5 + 0x94) <= local_5c ||
                        (*(char *)(*(int *)(iVar5 + 0x94) + local_5c) != '\0')))) {
                      iVar4 = *(int *)(*(int *)(iVar5 + 200) + 4 + local_50);
                      iVar6 = *(int *)(iVar5 + 0xb4);
                      iVar1 = *(int *)(*(int *)(local_54 + 0x2aa4) + iVar4 * 4);
                      local_2c = (double)CONCAT44(iVar1,(undefined4)local_2c);
                      if (iVar4 <= iVar6) {
                        if (DAT_012589a6 == '\0') {
                          if (*(char *)(local_58 + 0x131) == '\0') {
                            iVar7 = 0;
                          }
                          else {
                            iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x18) + 0x118) +
                                            *(int *)(local_58 + 0x134) * 4);
                          }
                          if (0 < *(int *)(iVar7 + 0x20)) {
                            if (*(char *)(local_58 + 0x131) == '\0') {
                              iVar7 = 0;
                            }
                            else {
                              iVar7 = *(int *)(*(int *)(*(int *)(iVar1 + 0x18) + 0x118) +
                                              *(int *)(local_58 + 0x134) * 4);
                            }
                            if ((0 < *(int *)(iVar7 + 0x20)) &&
                               (*(int *)(*(int *)(*(int *)(local_54 + 0x2238) + iVar4 * 4) + 300) ==
                                *(int *)(local_bc + 300))) goto LAB_0080fe0f;
                          }
                        }
                        else {
LAB_0080fe0f:
                          iVar4 = *(int *)(*(int *)(iVar5 + 200) + local_50);
                          if ((iVar4 != 4) &&
                             (((iVar4 != 1 && (*(char *)(iVar5 + 0x2a) != '\0')) &&
                              (*(char *)(iVar1 + 0x2a) != '\0')))) {
                            iVar4 = *(int *)(local_58 + 0x58) * 0x10;
                            local_2c = (double)(local_24 * 0.5);
                            local_44 = *(float *)(*(int *)(iVar5 + 0x330) + 8 + iVar4);
                            local_3c = *(float *)(*(int *)(iVar5 + 0x330) + 0xc + iVar4);
                            local_38 = *(float *)(*(int *)(iVar1 + 0x330) + 8 + iVar4);
                            uStack_40 = 0x3f051eb8;
                            uStack_34 = 0x3f051eb8;
                            local_30 = *(float *)(*(int *)(iVar1 + 0x330) + iVar4 + 0xc);
                            local_b8 = local_3c - local_30;
                            local_20 = (ulonglong)(uint)(local_44 - local_38);
                            local_18 = local_b8;
                            fVar11 = (float10)FUN_0040b340(local_44 - local_38);
                            if ((float10)local_2c < fVar11) {
                              if ((double)param_3 <= local_2c) {
                                if ((double)local_44 <= local_2c) {
                                  local_38 = local_38 - local_24;
                                }
                                else {
                                  local_44 = local_44 + local_24;
                                }
                              }
                              else if ((double)local_38 <= local_2c) {
                                local_38 = local_38 + local_24;
                              }
                              else {
                                local_44 = local_44 + local_24;
                              }
                              local_e4 = local_44 - local_38;
                              local_dc = local_b8;
                              uStack_e0 = 0;
                              local_20 = (ulonglong)(uint)local_e4;
                              local_18 = local_b8;
                            }
                            iVar4 = *(int *)(iVar5 + 0x84);
                            fVar14 = -local_18;
                            if (((local_5c < *(int *)(iVar5 + 0x88) - iVar4 >> 4) &&
                                ((iVar5 = iVar4 + local_80, *(float *)(iVar4 + 8 + local_80) != 0.0
                                 || (*(float *)(iVar5 + 0xc) != 0.0)))) && (iVar5 != 0)) {
                              local_13c = *(undefined4 *)(iVar5 + 8);
                              local_138 = *(undefined4 *)(iVar5 + 0xc);
                              local_148 = local_3c;
                              local_140 = local_3c;
                              local_130 = local_30;
                              local_14c = local_44;
                              local_144 = local_44;
                              local_134 = local_38;
                              (**(code **)(*piVar9 + 0x80))(piVar9,local_4c,&local_14c,8);
                              local_20 = CONCAT44(uStack_40,local_44);
                              fVar15 = local_44 - *(float *)(iVar5 + 8);
                              local_18 = local_3c;
                              fVar14 = local_3c - *(float *)(iVar5 + 0xc);
                              local_d8 = 0x41700000;
                              local_174 = 0.0;
                              fVar11 = (float10)FUN_00401030(fVar15 * fVar15 + 0.0 + fVar14 * fVar14
                                                            );
                              local_d4 = (float)fVar11;
                              local_d0 = param_3;
                              local_cc = param_4;
                              (**(code **)(*piVar9 + 0x80))(piVar9,local_48,&local_d8,4);
                              (**(code **)(*piVar9 + 0x104))(piVar9);
                              FUN_009f9d50();
                              local_b4 = local_44;
                              local_b0 = local_3c;
                              local_ac = *(float *)(iVar5 + 8);
                              local_a8 = *(float *)(iVar5 + 0xc);
                              local_a4 = local_38;
                              local_a0 = local_30;
                              local_9c = local_38;
                              local_98 = local_30;
                              (**(code **)(*piVar9 + 0x80))(piVar9,local_4c,&local_b4,8);
                              local_20 = CONCAT44(uStack_34,local_38);
                              local_18 = local_30;
                              dVar12 = (double)(local_38 - *(float *)(iVar5 + 8));
                              dVar13 = (double)(local_30 - *(float *)(iVar5 + 0xc));
                              fVar11 = (float10)FUN_00401030((float)(dVar12 * dVar12 + local_174 +
                                                                    dVar13 * dVar13));
                              local_d4 = (float)fVar11;
                              (**(code **)(*piVar9 + 0x80))(piVar9,local_48,&local_d8,4);
                              (**(code **)(*piVar9 + 0x104))(piVar9);
                            }
                            else {
                              iVar4 = iVar6 % 3;
                              if (iVar4 == 0) {
                                local_64 = (float)local_20;
                                local_78 = local_20._4_4_;
                              }
                              else if (iVar4 == 1) {
                                local_78 = local_20._4_4_;
                                local_64 = fVar14;
                              }
                              else if (iVar4 == 2) {
                                local_78 = -local_20._4_4_;
                                local_64 = local_18;
                              }
                              iVar4 = iVar6 % 9 >> 0x1f;
                              iVar6 = (iVar6 % 9) / 3 + iVar4;
                              iVar5 = iVar6 - iVar4;
                              fVar15 = (float)local_20;
                              if (iVar6 == iVar4) {
LAB_00810351:
                                local_68 = -local_20._4_4_;
                                local_70 = -fVar15;
                              }
                              else if (iVar5 == 1) {
                                local_68 = local_20._4_4_;
                                local_70 = fVar14;
                              }
                              else {
                                fVar15 = fVar14;
                                if (iVar5 == 2) goto LAB_00810351;
                              }
                              local_b4 = local_64 + local_44;
                              local_a0 = local_30;
                              local_b0 = local_78 + local_3c;
                              local_9c = local_70 + local_38;
                              local_98 = local_68 + local_30;
                              local_a8 = local_3c;
                              local_ac = local_44;
                              local_a4 = local_38;
                              (**(code **)(*piVar9 + 0x80))(piVar9,local_4c,&local_b4,8);
                              local_11c = 0x41700000;
                              fVar11 = (float10)FUN_00401030(local_20._4_4_ * local_20._4_4_ +
                                                             (float)local_20 * (float)local_20 +
                                                             local_18 * local_18);
                              local_118 = (float)fVar11;
                              local_114 = param_3;
                              local_110 = param_4;
                              (**(code **)(*piVar9 + 0x80))(piVar9,local_48,&local_11c,4);
                              (**(code **)(*piVar9 + 0x104))(piVar9);
                            }
                            FUN_009f9d50();
                            local_14 = local_14 + 1;
                            iVar5 = local_8c;
                            fVar14 = DAT_00f092dc;
                          }
                        }
                      }
                    }
                    local_50 = local_50 + 0x24;
                    local_80 = local_80 + 0x10;
                    local_5c = local_5c + 1;
                  } while (local_5c < local_94._4_4_);
                  if (local_14 == 0) goto LAB_008104fc;
                }
                local_74 = local_74 + 1;
              } while (local_74 < local_88);
            }
          }
          iVar4 = *local_7c;
          local_6c = local_6c + 1;
          uVar10 = local_84;
          piVar8 = local_7c;
        } while (local_6c < local_7c[1] - iVar4 >> 2);
      }
      (**(code **)(*piVar9 + 0x108))(piVar9);
      local_84 = uVar10 + 1;
    } while (local_84 < local_60);
  }
  (**(code **)(*piVar9 + 0x10c))(piVar9);
  ExceptionList = local_10;
  return;
}

