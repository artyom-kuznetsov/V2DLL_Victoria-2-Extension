// FUN_00ae50d0 @ 00ae50d0 body=[[00ae50d0, 00ae5226] [00ae5230, 00ae5bdc] [00ae5be0, 00ae5f03] [00ae5f10, 00ae60a6] [00ae60b0, 00ae62ba]]


int * FUN_00ae50d0(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  float fVar16;
  int *piVar17;
  int iVar18;
  int *in_ECX;
  undefined4 uVar19;
  float *pfVar20;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  undefined4 *local_fc;
  undefined4 *local_f4;
  int iStack_f0;
  uint uStack_ec;
  int iStack_e8;
  uint local_e4;
  uint *puStack_e0;
  uint uStack_dc;
  uint local_d4;
  uint *puStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  int *piStack_b4;
  int iStack_a0;
  uint uStack_9c;
  int iStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b37d39;
  local_c = ExceptionList;
  uVar10 = DAT_00ef259c ^ (uint)&stack0xfffffef4;
  ExceptionList = &local_c;
  uVar11 = 0;
  if (param_5[1] != 0) {
    do {
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)param_5[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  local_68 = 1;
  local_4 = 0;
  FUN_00ae4ef0(uVar10);
  FUN_00ae3eb0(param_3);
  local_f4 = (undefined4 *)param_5[1];
  uVar10 = *(uint *)(param_3 + 0x84);
  if (local_f4 != (undefined4 *)0x0) {
    local_e4 = 0;
    do {
      iVar12 = FUN_00ad6e90(0x1f);
      iVar23 = param_1[1];
      uVar11 = iVar23 + 1;
      param_1[1] = uVar11;
      if ((uint)param_1[2] < uVar11) {
        iVar23 = iVar23 + 2;
        if (iVar23 == 0) {
          param_1[1] = 0;
          param_1[2] = 0;
          if (*param_1 != 0) {
            (*(code *)PTR__free_00f01b10)(*param_1);
            *param_1 = 0;
          }
        }
        else {
          if (*param_1 == 0) {
            iVar18 = (*(code *)PTR_FUN_00f01b08)(iVar23 * 4,(short)param_1[3],4,2,0,0xffffffff);
          }
          else {
            iVar18 = (*(code *)PTR_FUN_00f01b0c)(*param_1,iVar23 * 4);
          }
          *param_1 = iVar18;
          param_1[2] = iVar23;
        }
      }
      piVar1 = (int *)(*param_1 + -4 + param_1[1] * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = iVar12;
      }
      local_d4 = 0;
      if (uVar10 != 0) {
        do {
          piVar1 = *(int **)(*(int *)(iVar12 + 0x80) + local_d4 * 4);
          iVar23 = *param_5 + local_e4;
          if ((*(uint *)(iVar23 + 0x18) < uVar10) && (*(uint *)(iVar23 + 0x1c) < uVar10)) {
            if (uVar10 == 0) {
              *(undefined4 *)(iVar23 + 0x18) = 0;
              *(undefined4 *)(iVar23 + 0x1c) = 0;
              if (*(int *)(iVar23 + 0x14) != 0) {
                (*(code *)PTR__free_00f01b10)(*(int *)(iVar23 + 0x14));
                *(undefined4 *)(iVar23 + 0x14) = 0;
              }
            }
            else if (*(int *)(iVar23 + 0x14) == 0) {
              uVar19 = (*(code *)PTR_FUN_00f01b08)
                                 (uVar10 * 8,*(undefined2 *)(iVar23 + 0x20),4,2,0,0xffffffff);
              *(undefined4 *)(iVar23 + 0x14) = uVar19;
              *(uint *)(iVar23 + 0x1c) = uVar10;
            }
            else {
              uVar19 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar23 + 0x14),uVar10 * 8);
              *(undefined4 *)(iVar23 + 0x14) = uVar19;
              *(uint *)(iVar23 + 0x1c) = uVar10;
            }
          }
          uVar11 = 0;
          if (*(uint *)(iVar23 + 0x18) != 0) {
            piVar13 = *(int **)(iVar23 + 0x14);
            do {
              if (*piVar13 == *piVar1) {
                piVar13 = *(int **)(iVar23 + 0x14) + uVar11 * 2;
                if (piVar13 != (int *)0x0) {
                  iVar23 = piVar13[1];
                  if (iVar23 == -1) {
                    FUN_00aea1d0();
                    FUN_00ae9440();
                  }
                  else {
                    iStack_e8 = *(int *)(param_3 + 0xfc);
                    iVar23 = *(int *)(*(int *)(param_3 + 0x80) + iVar23 * 4);
                    if ((iVar23 != 0) && (iStack_e8 != 0)) {
                      iStack_f0 = 0;
                      do {
                        piVar13 = *(int **)(*(int *)(iVar23 + 0x1c) + 4 + iStack_f0);
                        if (piVar13 != (int *)0x0) {
                          (**(code **)(*piVar13 + 4))();
                        }
                        piVar17 = *(int **)(iStack_f0 + *(int *)(iVar23 + 0x1c) + 0xc);
                        local_4 = 1;
                        if (piVar17 != (int *)0x0) {
                          (**(code **)(*piVar17 + 4))();
                        }
                        local_4 = CONCAT31(local_4._1_3_,2);
                        piStack_b4 = piVar13;
                        if ((piVar13 != (int *)0x0) &&
                           (iVar18 = (**(code **)(*piVar13 + 0x10))(), iVar18 != 0)) {
                          (**(code **)(*piVar13 + 0x10))();
                          iVar18 = FUN_00adf420(iVar12,piVar1);
                          if (iVar18 == 0) {
                            (**(code **)(*piVar13 + 8))();
                            piStack_b4 = (int *)0x0;
                          }
                          else {
                            piStack_b4 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff);
                            if (piStack_b4 == (int *)0x0) {
                              piStack_b4 = (int *)0x0;
                            }
                            else {
                              piStack_b4[2] = iVar18;
                              piStack_b4[1] = 0;
                              *piStack_b4 = (int)&PTR_FUN_00ddd99c;
                              (**(code **)(*piStack_b4 + 4))();
                            }
                            (**(code **)(*piVar13 + 8))();
                          }
                        }
                        if ((piVar17 != (int *)0x0) &&
                           (iVar18 = (**(code **)(*piVar17 + 0x10))(), iVar18 != 0)) {
                          (**(code **)(*piVar17 + 0x10))();
                          iVar18 = FUN_00adf420(iVar12,piVar1);
                          if (iVar18 == 0) {
                            (**(code **)(*piVar17 + 8))();
                            piVar17 = (int *)0x0;
                          }
                          else {
                            piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff);
                            if (piVar13 == (int *)0x0) {
                              iVar18 = *piVar17;
                              piVar17 = (int *)0x0;
                              (**(code **)(iVar18 + 8))();
                            }
                            else {
                              piVar13[2] = iVar18;
                              piVar13[1] = 0;
                              *piVar13 = (int)&PTR_FUN_00ddd99c;
                              (**(code **)(*piVar13 + 4))();
                              (**(code **)(*piVar17 + 8))();
                              piVar17 = piVar13;
                            }
                          }
                        }
                        iVar18 = piVar1[7];
                        if (piStack_b4 != (int *)0x0) {
                          (**(code **)(*piStack_b4 + 4))();
                        }
                        piVar13 = *(int **)(iVar18 + iStack_f0 + 4);
                        *(int **)(iVar18 + iStack_f0 + 4) = piStack_b4;
                        if (piVar13 != (int *)0x0) {
                          (**(code **)(*piVar13 + 8))();
                        }
                        iVar18 = iStack_f0 + 8 + piVar1[7];
                        if (piVar17 != (int *)0x0) {
                          (**(code **)(*piVar17 + 4))();
                        }
                        piVar13 = *(int **)(iVar18 + 4);
                        *(int **)(iVar18 + 4) = piVar17;
                        if (piVar13 != (int *)0x0) {
                          (**(code **)(*piVar13 + 8))();
                        }
                        local_4._0_1_ = 1;
                        if (piVar17 != (int *)0x0) {
                          (**(code **)(*piVar17 + 8))();
                        }
                        local_4 = (uint)local_4._1_3_ << 8;
                        if (piStack_b4 != (int *)0x0) {
                          (**(code **)(*piStack_b4 + 8))();
                        }
                        iStack_f0 = iStack_f0 + 0x20;
                        iStack_e8 = iStack_e8 + -1;
                      } while (iStack_e8 != 0);
                    }
                  }
                  goto LAB_00ae5601;
                }
                break;
              }
              uVar11 = uVar11 + 1;
              piVar13 = piVar13 + 2;
            } while (uVar11 < *(uint *)(iVar23 + 0x18));
          }
          iVar18 = *(int *)(iVar23 + 0x18);
          iVar3 = *piVar1;
          uVar11 = iVar18 + 1;
          *(uint *)(iVar23 + 0x18) = uVar11;
          if (*(uint *)(iVar23 + 0x1c) < uVar11) {
            iVar18 = iVar18 + 2;
            if (iVar18 == 0) {
              *(undefined4 *)(iVar23 + 0x18) = 0;
              *(undefined4 *)(iVar23 + 0x1c) = 0;
              if (*(int *)(iVar23 + 0x14) != 0) {
                (*(code *)PTR__free_00f01b10)(*(int *)(iVar23 + 0x14));
                *(undefined4 *)(iVar23 + 0x14) = 0;
              }
            }
            else {
              if (*(int *)(iVar23 + 0x14) == 0) {
                uVar19 = (*(code *)PTR_FUN_00f01b08)
                                   (iVar18 * 8,*(undefined2 *)(iVar23 + 0x20),4,2,0,0xffffffff);
              }
              else {
                uVar19 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar23 + 0x14),iVar18 * 8);
              }
              *(undefined4 *)(iVar23 + 0x14) = uVar19;
              *(int *)(iVar23 + 0x1c) = iVar18;
            }
          }
          piVar1 = (int *)(*(int *)(iVar23 + 0x14) + -8 + *(int *)(iVar23 + 0x18) * 8);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar3;
            piVar1[1] = iVar3;
          }
LAB_00ae5601:
          local_d4 = local_d4 + 1;
        } while (local_d4 < uVar10);
      }
      if ((*(int *)(*(int *)(iVar12 + 0xd8) + 4) != 0) &&
         (iVar23 = (**(code **)(**(int **)(*(int *)(iVar12 + 0xd8) + 4) + 0x10))(), iVar23 != 0)) {
        uVar11 = *(uint *)(local_e4 + 0x28 + *param_5);
        uVar24 = 0;
        if (uVar11 != 0) {
          do {
            iVar23 = FUN_00aeb3e0(*(undefined4 *)(*(int *)(*param_5 + local_e4 + 0x24) + uVar24 * 4)
                                 );
            if (iVar23 != -1) {
              FUN_00aeb4d0(iVar23,1);
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar11);
        }
      }
      local_e4 = local_e4 + 0x34;
      local_f4 = (undefined4 *)((int)local_f4 + -1);
    } while (local_f4 != (undefined4 *)0x0);
  }
  FUN_00ae3fb0(param_3);
  uStack_60 = 0;
  uStack_54 = 0;
  FUN_00ad4820(param_2,&uStack_60,&uStack_54);
  puStack_c8 = (uint *)0x0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_4 = 3;
  local_d4 = 0;
  if (uVar10 != 0) {
    iStack_50 = param_2 << 5;
    do {
      piVar1 = *(int **)(*(int *)(param_3 + 0x80) + local_d4 * 4);
      if ((*(int *)(piVar1[7] + iStack_50 + 4) != 0) &&
         (piVar13 = (int *)(**(code **)(**(int **)(piVar1[7] + iStack_50 + 4) + 0x10))(),
         piVar13 != (int *)0x0)) {
        uVar11 = param_5[1];
        uVar24 = 0;
        if (uVar11 != 0) {
          local_f4 = (undefined4 *)0x0;
          do {
            if (*(char *)(*param_5 + 8 + (int)local_f4) != '\0') {
              fStack_4c = 1.0;
              fStack_38 = fStack_4c;
              fStack_24 = fStack_4c;
              if (*piVar1 != -1) {
                iVar23 = *piVar1;
                do {
                  iVar12 = *(int *)(*(int *)(*param_1 + uVar24 * 4) + 0x1c);
                  fStack_4c = fStack_4c * *(float *)(iVar12 + 0x20 + iVar23 * 0x38);
                  iVar18 = *(int *)(*(int *)(*(int *)(*(int *)(*param_1 + uVar24 * 4) + 0x80) +
                                            iVar23 * 4) + 4);
                  fStack_38 = *(float *)(iVar12 + 0x24 + iVar23 * 0x38) * fStack_38;
                  fStack_24 = *(float *)(iVar12 + iVar23 * 0x38 + 0x28) * fStack_24;
                  iVar23 = iVar18;
                } while (iVar18 != -1);
              }
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              uStack_34 = 0;
              uStack_30 = 0;
              uStack_2c = 0;
              uStack_28 = 0;
              uStack_20 = 0;
              uStack_1c = 0;
              uStack_18 = 0;
              uStack_14 = 0;
              uStack_10 = 0x3f800000;
              fStack_80 = 3.4028235e+38;
              fStack_7c = 3.4028235e+38;
              fStack_78 = 3.4028235e+38;
              fStack_74 = -3.4028235e+38;
              fStack_70 = -3.4028235e+38;
              fStack_6c = -3.4028235e+38;
              FUN_00addde0(&fStack_80,&fStack_4c,1);
              fVar16 = ABS(fStack_78 - fStack_6c);
              fVar9 = ABS(fStack_7c - fStack_70);
              if (fVar9 < ABS(fStack_80 - fStack_74)) {
                fVar9 = ABS(fStack_80 - fStack_74);
              }
              if (fVar16 < fVar9) {
                fVar16 = fVar9;
              }
              if (fVar16 < *(float *)(*param_5 + 4 + (int)local_f4)) {
                FUN_00aea1d0();
              }
            }
            uVar24 = uVar24 + 1;
            local_f4 = (undefined4 *)((int)local_f4 + 0x34);
          } while (uVar24 < uVar11);
        }
        iStack_58 = FUN_00add410(0,0);
        iStack_64 = FUN_00add410(5,0);
        iStack_5c = FUN_00add2c0(3,0);
        uVar24 = piVar13[1];
        local_e4 = 0;
        if (uVar24 != 0) {
          do {
            iVar12 = *(int *)(*piVar13 + local_e4 * 4);
            iVar18 = *(int *)(iVar12 + 0x10);
            uVar4 = *(uint *)(iVar12 + 0x18);
            iVar23 = iStack_58 + iVar18 * 0xc;
            iVar3 = *(int *)(iVar12 + 0x14);
            iVar5 = *(int *)(*(int *)(iVar12 + 0x24) + 0x10);
            uVar6 = *(uint *)(iVar12 + 0x1c);
            iVar12 = iStack_64 + iVar18 * 4;
            FUN_00ae4ef0();
            if (((uVar4 != uStack_c4) && (bVar8 = uStack_c4 < uVar4, uStack_c4 = uVar4, bVar8)) &&
               (uStack_c0 < uVar4)) {
              if (uVar4 == 0) {
                uStack_c4 = 0;
                uStack_c0 = 0;
                if (puStack_c8 != (uint *)0x0) {
                  (*(code *)PTR__free_00f01b10)(puStack_c8);
                  puStack_c8 = (uint *)0x0;
                }
              }
              else {
                uStack_c0 = uVar4;
                if (puStack_c8 == (uint *)0x0) {
                  puStack_c8 = (uint *)(*(code *)PTR_FUN_00f01b08)(uVar4 * 0xc,1,4,2,0,0xffffffff);
                }
                else {
                  puStack_c8 = (uint *)(*(code *)PTR_FUN_00f01b0c)(puStack_c8,uVar4 * 0xc);
                }
              }
            }
            uVar25 = 0;
            if (uVar4 != 0) {
              local_fc = (undefined4 *)(iVar23 + 8);
              puStack_e0 = puStack_c8;
              do {
                local_f4 = (undefined4 *)FUN_00aae9af(0x44);
                if (local_f4 == (undefined4 *)0x0) {
                  local_f4 = (undefined4 *)0x0;
                }
                else {
                  local_f4[3] = 0;
                  local_f4[4] = 0;
                  local_f4[5] = 0;
                  *(undefined2 *)(local_f4 + 6) = 1;
                  local_f4[7] = 0;
                  local_f4[8] = 0;
                  local_f4[9] = 0;
                  *(undefined2 *)(local_f4 + 10) = 1;
                  local_f4[0xb] = in_ECX;
                  *local_f4 = local_fc[-2];
                  local_f4[1] = local_fc[-1];
                  uVar19 = *local_fc;
                  local_f4[0xd] = uVar25;
                  local_f4[2] = uVar19;
                  *(undefined1 *)(local_f4 + 0x10) = 0;
                  local_f4[0xe] = 0;
                }
                iVar27 = in_ECX[1];
                uVar26 = iVar27 + 1;
                in_ECX[1] = uVar26;
                if ((uint)in_ECX[2] < uVar26) {
                  iVar27 = iVar27 + 2;
                  if (iVar27 == 0) {
                    in_ECX[1] = 0;
                    in_ECX[2] = 0;
                    if (*in_ECX != 0) {
                      (*(code *)PTR__free_00f01b10)(*in_ECX);
                      *in_ECX = 0;
                    }
                  }
                  else {
                    if (*in_ECX == 0) {
                      iVar14 = (*(code *)PTR_FUN_00f01b08)
                                         (iVar27 * 4,(short)in_ECX[3],4,2,0,0xffffffff);
                    }
                    else {
                      iVar14 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,iVar27 * 4);
                    }
                    *in_ECX = iVar14;
                    in_ECX[2] = iVar27;
                  }
                }
                puVar2 = (undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
                if (puVar2 != (undefined4 *)0x0) {
                  *puVar2 = local_f4;
                }
                if (iStack_5c != 0) {
                  *(uint *)(*(int *)(*in_ECX + -4 + in_ECX[1] * 4) + 0x38) =
                       (uint)*(byte *)(*(int *)(iStack_5c + 0x1c) + 4 +
                                      *(int *)(iVar12 + uVar25 * 4) * 8);
                }
                *puStack_e0 = uVar25;
                puStack_e0[1] = uVar25;
                *(uint *)(((int)puStack_c8 - iVar23) + (int)local_fc) = uVar25;
                uVar25 = uVar25 + 1;
                local_fc = local_fc + 3;
                puStack_e0 = puStack_e0 + 3;
              } while (uVar25 < uVar4);
            }
            if (uVar6 != 0) {
              piVar22 = (int *)(iVar5 + iVar3 * 4 + 4);
              local_fc = (undefined4 *)((uVar6 - 1) / 3 + 1);
              piVar17 = in_ECX + 4;
              do {
                iVar23 = FUN_00aae9af(0x1c);
                local_4._0_1_ = 4;
                if (iVar23 == 0) {
                  local_f4 = (undefined4 *)0x0;
                }
                else {
                  iVar23 = *in_ECX;
                  local_f4 = (undefined4 *)
                             FUN_00ae4970(*(undefined4 *)(iVar23 + (piVar22[-1] - iVar18) * 4),
                                          *(undefined4 *)(iVar23 + (*piVar22 - iVar18) * 4),
                                          *(undefined4 *)(iVar23 + (piVar22[1] - iVar18) * 4),
                                          piVar17);
                }
                iVar23 = in_ECX[5];
                uVar25 = iVar23 + 1;
                local_4 = CONCAT31(local_4._1_3_,3);
                in_ECX[5] = uVar25;
                if ((uint)in_ECX[6] < uVar25) {
                  iVar23 = iVar23 + 2;
                  if (iVar23 == 0) {
                    in_ECX[5] = 0;
                    in_ECX[6] = 0;
                    if (*piVar17 != 0) {
                      (*(code *)PTR__free_00f01b10)(*piVar17);
                      *piVar17 = 0;
                    }
                  }
                  else {
                    if (*piVar17 == 0) {
                      iVar12 = (*(code *)PTR_FUN_00f01b08)
                                         (iVar23 * 4,(short)in_ECX[7],4,2,0,0xffffffff);
                    }
                    else {
                      iVar12 = (*(code *)PTR_FUN_00f01b0c)(*piVar17,iVar23 * 4);
                    }
                    *piVar17 = iVar12;
                    in_ECX[6] = iVar23;
                  }
                }
                puVar2 = (undefined4 *)(*piVar17 + -4 + in_ECX[5] * 4);
                if (puVar2 != (undefined4 *)0x0) {
                  *puVar2 = local_f4;
                }
                piVar22 = piVar22 + 3;
                local_fc = (undefined4 *)((int)local_fc + -1);
              } while (local_fc != (undefined4 *)0x0);
            }
            uVar25 = 0;
            if (uVar4 != 0) {
              do {
                FUN_00ae45a0(*(undefined4 *)(*in_ECX + uVar25 * 4),param_4);
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar4);
            }
            iVar23 = 0;
            uStack_ec = 0;
            if ((*(char *)(param_4 + 0xc) == '\0') && (uVar4 != 0)) {
              piVar17 = (int *)*in_ECX;
              uVar25 = uVar4;
              do {
                if (*(char *)(*piVar17 + 0x40) != '\0') {
                  iVar23 = iVar23 + 1;
                }
                piVar17 = piVar17 + 1;
                uVar25 = uVar25 - 1;
                uStack_ec = iVar23;
              } while (uVar25 != 0);
            }
            iStack_90 = 0;
            iStack_a0 = 0;
            uStack_9c = 0;
            local_4 = CONCAT31(local_4._1_3_,6);
            if ((in_ECX[1] != 0) && (iVar23 = in_ECX[1] + 1, iVar23 != 0)) {
              iStack_90 = (*(code *)PTR_FUN_00f01b08)(iVar23 * 4,1,4,2,0,0xffffffff);
            }
            uVar25 = in_ECX[1];
            if (uVar25 != 0) {
              if (uVar25 + 1 == 0) {
                uStack_9c = 0;
              }
              else {
                iStack_a0 = (*(code *)PTR_FUN_00f01b08)((uVar25 + 1) * 4,1,4,2,0,0xffffffff);
                uStack_9c = uVar25;
              }
            }
            iVar23 = in_ECX[1];
            while (iVar23 != 0) {
              iVar23 = FUN_00ae4dc0();
              *(int *)(iStack_90 + *(int *)(iVar23 + 0x34) * 4) = in_ECX[1] + -1;
              if (*(int *)(iVar23 + 0x30) == 0) {
                uVar19 = 0xffffffff;
              }
              else {
                uVar19 = *(undefined4 *)(*(int *)(iVar23 + 0x30) + 0x34);
              }
              *(undefined4 *)(iStack_a0 + -4 + in_ECX[1] * 4) = uVar19;
              FUN_00ae4f90(iVar23,*(undefined4 *)(iVar23 + 0x30),param_4);
              iVar23 = in_ECX[1];
            }
            uVar25 = 0;
            if (uStack_9c != 0) {
              do {
                iVar23 = *(int *)(iStack_a0 + uVar25 * 4);
                if (iVar23 == -1) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(undefined4 *)(iStack_90 + iVar23 * 4);
                }
                *(undefined4 *)(iStack_a0 + uVar25 * 4) = uVar19;
                uVar25 = uVar25 + 1;
              } while (uVar25 < uStack_9c);
            }
            uVar25 = 0;
            puVar15 = puStack_c8;
            if (uVar4 != 0) {
              do {
                uVar26 = 0;
                puVar21 = puStack_c8 + 2;
                do {
                  if (*puVar21 == uVar25) {
                    *puVar15 = uVar26;
                    uVar7 = *(uint *)(iStack_90 + uVar25 * 4);
                    puVar15[1] = uVar7;
                    puStack_c8[uVar26 * 3 + 2] =
                         puStack_c8[uVar26 * 3 + 2] ^ puStack_c8[uVar7 * 3 + 2];
                    puStack_c8[puVar15[1] * 3 + 2] =
                         puStack_c8[puVar15[1] * 3 + 2] ^ puStack_c8[*puVar15 * 3 + 2];
                    puStack_c8[*puVar15 * 3 + 2] =
                         puStack_c8[*puVar15 * 3 + 2] ^ puStack_c8[puVar15[1] * 3 + 2];
                    break;
                  }
                  uVar26 = uVar26 + 1;
                  puVar21 = puVar21 + 3;
                } while (uVar26 < uVar4);
                uVar25 = uVar25 + 1;
                puVar15 = puVar15 + 3;
              } while (uVar25 < uVar4);
            }
            local_f4 = (undefined4 *)0x0;
            if (uVar11 != 0) {
              local_fc = (undefined4 *)0x0;
              do {
                pfVar20 = (float *)(*param_5 + (int)local_fc);
                fVar16 = *pfVar20;
                if (NAN(fVar16) || 100.0 < fVar16 == (fVar16 == 100.0)) {
                  fVar16 = 0.0;
                  if (pfVar20[6] != 0.0) {
                    piVar17 = (int *)pfVar20[5];
                    do {
                      if (*piVar17 == *piVar1) {
                        piVar17 = (int *)pfVar20[5] + (int)fVar16 * 2;
                        if ((((piVar17 != (int *)0x0) && (iVar23 = piVar17[1], iVar23 != -1)) &&
                            (iVar23 = *(int *)(*(int *)(*(int *)(*(int *)(*param_1 +
                                                                         (int)local_f4 * 4) + 0x80)
                                                       + iVar23 * 4) + 0x1c),
                            *(int *)(iVar23 + 4) != 0)) &&
                           (piVar17 = (int *)(**(code **)(**(int **)(iVar23 + 4) + 0x10))(),
                           piVar17 != (int *)0x0)) {
                          iVar23 = *(int *)(*piVar17 + local_e4 * 4);
                          iVar12 = *(int *)(iVar23 + 0x10);
                          iVar23 = *(int *)(*(int *)(iVar23 + 0x24) + 0x10) +
                                   *(int *)(iVar23 + 0x14) * 4;
                          puVar15 = puStack_c8;
                          for (uVar25 = uVar4; uVar25 != 0; uVar25 = uVar25 - 1) {
                            if (*puVar15 != puVar15[1]) {
                              FUN_00add390(iVar12 + *puVar15,puVar15[1] + iVar12);
                            }
                            puVar15 = puVar15 + 3;
                          }
                          fVar16 = (float)(int)uVar4;
                          if ((int)uVar4 < 0) {
                            fVar16 = fVar16 + 4.2949673e+09;
                          }
                          uStack_dc = (uint)(longlong)
                                            ROUND(fVar16 * *(float *)((int)local_fc + *param_5) *
                                                           0.01);
                          fVar16 = (float)(int)(uStack_dc + 1);
                          if ((int)(uStack_dc + 1) < 0) {
                            fVar16 = fVar16 + 4.2949673e+09;
                          }
                          fVar9 = (float)(int)uStack_ec;
                          if ((int)uStack_ec < 0) {
                            fVar9 = fVar9 + 4.2949673e+09;
                          }
                          if (fVar16 < fVar9) {
                            fVar16 = fVar9;
                          }
                          uVar25 = 0;
                          uStack_dc = (uint)(longlong)ROUND(fVar16);
                          if (uVar6 != 0) {
                            do {
                              iVar18 = *(int *)(iStack_90 +
                                               (*(int *)(iVar23 + uVar25 * 4) - iVar12) * 4) +
                                       iVar12;
                              *(int *)(iVar23 + uVar25 * 4) = iVar18;
                              uVar26 = iVar18 - iVar12;
                              if (uStack_dc == 0) {
                                uVar26 = 0;
                              }
                              else {
                                for (; uStack_dc <= uVar26;
                                    uVar26 = *(uint *)(iStack_a0 + uVar26 * 4)) {
                                }
                              }
                              *(uint *)(iVar23 + uVar25 * 4) = uVar26 + iVar12;
                              uVar25 = uVar25 + 1;
                            } while (uVar25 < uVar6);
                          }
                          FUN_00addb10(0);
                          if (uStack_dc < uVar4 - 1) {
                            FUN_00addc60(uStack_dc + iVar12,iVar12 + -1 + uVar4,1,0);
                          }
                        }
                        break;
                      }
                      fVar16 = (float)((int)fVar16 + 1);
                      piVar17 = piVar17 + 2;
                    } while ((uint)fVar16 < (uint)pfVar20[6]);
                  }
                }
                local_fc = (undefined4 *)((int)local_fc + 0x34);
                local_f4 = (undefined4 *)((int)local_f4 + 1);
              } while (local_f4 < uVar11);
            }
            local_4._0_1_ = 5;
            if (iStack_a0 != 0) {
              (*(code *)PTR__free_00f01b10)(iStack_a0);
            }
            local_4 = CONCAT31(local_4._1_3_,3);
            if (iStack_90 != 0) {
              (*(code *)PTR__free_00f01b10)(iStack_90);
            }
            local_e4 = local_e4 + 1;
          } while (local_e4 < uVar24);
        }
      }
      local_d4 = local_d4 + 1;
    } while (local_d4 < uVar10);
  }
  uVar10 = param_1[1];
  uStack_ec = 0;
  if (uVar10 != 0) {
    iStack_e8 = 0;
    do {
      iVar23 = *(int *)(*param_1 + uStack_ec * 4);
      uVar11 = *(uint *)(iVar23 + 0x84);
      uVar24 = 0;
      if (uVar11 != 0) {
        do {
          iVar12 = *(int *)(*(int *)(*(int *)(iVar23 + 0x80) + uVar24 * 4) + 0x1c);
          if ((*(int *)(iVar12 + 4) != 0) &&
             (iVar12 = (**(code **)(**(int **)(iVar12 + 4) + 0x10))(), iVar12 != 0)) {
            FUN_00addd60(1,1,0);
            iVar12 = FUN_00add2c0(3,0);
            if (iVar12 != 0) {
              FUN_00b0d940(*(undefined4 *)(iStack_e8 + 0xc + *param_5),
                           *(undefined4 *)(iStack_e8 + *param_5 + 0x10));
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar11);
      }
      iStack_e8 = iStack_e8 + 0x34;
      uStack_ec = uStack_ec + 1;
    } while (uStack_ec < uVar10);
  }
  FUN_00ae4ef0();
  uVar10 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_00ae3c80(*(undefined4 *)(*param_1 + uVar10 * 4),param_3);
      FUN_00ae3fb0(*(undefined4 *)(*param_1 + uVar10 * 4));
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_1[1]);
  }
  local_4 = local_4 & 0xffffff00;
  if (puStack_c8 != (uint *)0x0) {
    (*(code *)PTR__free_00f01b10)(puStack_c8);
  }
  ExceptionList = local_c;
  return param_1;
}

