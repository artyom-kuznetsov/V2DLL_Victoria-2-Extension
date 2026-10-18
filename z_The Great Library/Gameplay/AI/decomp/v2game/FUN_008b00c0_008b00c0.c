// FUN_008b00c0 @ 008b00c0 body=[[008b00c0, 008b0377] [008b0380, 008b05e2] [008b05f0, 008b0d69] [008b0d70, 008b0de2] [008b0de6, 008b0deb] [008b0e2c, 008b0e54] [008b0e58, 008b0e61] [008b0e65, 008b0e6e] [008b0e72, 008b0e7e] [008b0e82, 008b0e90] [008b0e94, 008b0eba] [008b0ebe, 008b0eca] [008b0ece, 008b0eda] [008b0ede, 008b0eea] [008b0eee, 008b0efc] [008b0f00, 008b0f14]]


float FUN_008b00c0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 *local_108;
  int *local_f8;
  undefined1 local_f0 [8];
  int local_e8 [2];
  int local_e0 [15];
  int *local_a4;
  int *local_a0;
  int local_9c;
  undefined1 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c [2];
  int local_74 [2];
  uint *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_48;
  int *local_44;
  int *local_40;
  float local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int **local_28;
  int **local_24;
  int **local_20;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b58bd3;
  local_10 = ExceptionList;
  local_28 = (int **)0x0;
  local_24 = (int **)0x0;
  local_20 = (int **)0x0;
  local_58 = (int *)0x0;
  local_54 = (int *)0x0;
  local_50 = (int *)0x0;
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_8 = 4;
  local_30 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
  ExceptionList = &local_10;
  FUN_008a88d0();
  local_38 = 0.0005;
  FUN_00401000(0x3f000000);
  local_2c = FUN_00b31c00();
  if (*(int *)(param_2 + 0xc) == DAT_012588e8[0x2d8]) {
    FUN_00401000(local_38 * 1000.0);
    local_2c = FUN_00b31c00();
  }
  local_f8 = *(int **)(param_1 + 0xc);
  while ((*(int **)(param_1 + 0xc) <= local_f8 && (local_f8 < *(int **)(param_1 + 0x10)))) {
    piVar11 = (int *)*local_f8;
    local_f8 = local_f8 + 1;
    local_18[0] = piVar11;
    cVar5 = (**(code **)(*piVar11 + 0x18))();
    if (cVar5 != '\0') {
      uVar1 = piVar11[6];
      uVar6 = in_stack_0000001c;
      if (uVar1 <= in_stack_0000001c) {
        uVar6 = uVar1;
      }
      uVar6 = FUN_00414bd0(uVar6);
      if (uVar6 == 0) {
        if (in_stack_0000001c < uVar1) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(in_stack_0000001c != uVar1);
        }
      }
      if (uVar6 != 0) {
        FUN_00504750();
        iVar14 = local_18[0][9];
        switch(iVar14) {
        case 0:
          cVar5 = (**(code **)(local_18[0][0x18] + 0x18))(local_f0);
          if (cVar5 != '\0') {
            if ((local_18 < local_24) && (local_28 <= local_18)) {
              iVar14 = (int)local_18 - (int)local_28;
              if (local_24 == local_20) {
                FUN_00a513f0();
              }
              if (local_24 != (int **)0x0) {
                *local_24 = local_28[iVar14 >> 2];
              }
            }
            else {
              if (local_24 == local_20) {
                FUN_00a513f0();
              }
              if (local_24 != (int **)0x0) {
                *local_24 = local_18[0];
              }
            }
            local_24 = local_24 + 1;
            FUN_004d61d0();
            FUN_004e9b90();
            FUN_008afd10(local_18[0],local_7c,local_f0);
            FUN_00435ac0();
            local_2c = local_2c + local_7c[0];
          }
          break;
        case 1:
          piVar11 = *(int **)(local_30 + 0x9d8);
          piVar7 = local_18[0];
          iVar14 = local_30;
          while ((*(int **)(iVar14 + 0x9d8) <= piVar11 && (piVar11 < *(int **)(iVar14 + 0x9dc)))) {
            local_e0[0] = *piVar11;
            piVar11 = piVar11 + 1;
            cVar5 = (**(code **)(piVar7[0x18] + 0x18))(local_f0);
            if (cVar5 != '\0') {
              if ((local_18 < local_24) && (local_28 <= local_18)) {
                iVar14 = (int)local_18 - (int)local_28;
                if (local_24 == local_20) {
                  FUN_00a513f0();
                }
                if (local_24 != (int **)0x0) {
                  *local_24 = local_28[iVar14 >> 2];
                }
              }
              else {
                if (local_24 == local_20) {
                  FUN_00a513f0();
                }
                if (local_24 != (int **)0x0) {
                  *local_24 = piVar7;
                }
              }
              local_24 = local_24 + 1;
              FUN_004d61d0();
              FUN_004e9b90();
              FUN_008afd10(local_18[0],&local_8c,local_f0);
              FUN_00435ac0();
              local_2c = local_2c + local_8c;
              piVar7 = local_18[0];
              iVar14 = local_30;
            }
          }
          break;
        case 2:
          local_a4 = (int *)0x0;
          local_a0 = (int *)0x0;
          local_9c = 0;
          local_98 = 0;
          local_8._0_1_ = 5;
          piVar11 = *(int **)(local_30 + 0x9d8);
          iVar14 = local_30;
          while ((*(int **)(iVar14 + 0x9d8) <= piVar11 && (piVar11 < *(int **)(iVar14 + 0x9dc)))) {
            local_6c = *(uint **)(DAT_012588e8[0x2b3] + *piVar11 * 4);
            uVar1 = local_6c[0x17];
            piVar11 = piVar11 + 1;
            local_90 = 0;
            if (0 < (*(int *)(uVar1 + 0xcc) - *(int *)(uVar1 + 200)) / 0x24) {
              local_34 = (int *)0x0;
              do {
                piVar7 = local_a0;
                if ((((*(int *)((int)local_34 + *(int *)(uVar1 + 200)) != 4) &&
                     (iVar14 = *(int *)(DAT_012588e8[0x2b3] +
                                       *(int *)((int)local_34 + *(int *)(uVar1 + 200) + 4) * 4),
                     *(char *)(*(int *)(iVar14 + 0x5c) + 0x2a) != '\0')) &&
                    (*(int *)(iVar14 + 300) != 0)) &&
                   (*(int *)(iVar14 + 300) != *(int *)(local_30 + 0x20))) {
                  for (piVar2 = local_a4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
                    if (*piVar2 == *(int *)(iVar14 + 0x58)) goto LAB_008b055e;
                  }
                  iVar12 = *(int *)(iVar14 + 0x58);
                  local_e0[0] = *(int *)(iVar14 + 0x58);
                  local_a0 = (int *)FUN_00aae9af(0x10);
                  piVar2 = local_18[0];
                  if (local_a0 == (int *)0x0) {
                    local_a0 = (int *)0x0;
                  }
                  else {
                    *local_a0 = iVar12;
                    local_a0[1] = (int)piVar7;
                    local_a0[2] = 0;
                    *(undefined1 *)(local_a0 + 3) = 0;
                  }
                  piVar4 = local_a0;
                  if (local_9c != 0) {
                    piVar7[2] = (int)local_a0;
                    piVar4 = local_a4;
                  }
                  local_a4 = piVar4;
                  local_9c = local_9c + 1;
                  cVar5 = (**(code **)(local_18[0][0x18] + 0x18))(local_f0);
                  if (cVar5 != '\0') {
                    if ((local_18 < local_24) && (local_28 <= local_18)) {
                      iVar14 = (int)local_18 - (int)local_28;
                      if (local_24 == local_20) {
                        FUN_00a513f0();
                      }
                      if (local_24 != (int **)0x0) {
                        *local_24 = local_28[iVar14 >> 2];
                      }
                    }
                    else {
                      if (local_24 == local_20) {
                        FUN_00a513f0();
                      }
                      if (local_24 != (int **)0x0) {
                        *local_24 = piVar2;
                      }
                    }
                    local_24 = local_24 + 1;
                    FUN_004d61d0();
                    FUN_004e9b90();
                    FUN_008afd10(piVar2,&local_94,local_f0);
                    FUN_00435ac0();
                    local_2c = local_2c + local_94;
                  }
                }
LAB_008b055e:
                uVar1 = local_6c[0x17];
                local_34 = local_34 + 9;
                local_90 = local_90 + 1;
                iVar14 = local_30;
              } while (local_90 < (*(int *)(uVar1 + 0xcc) - *(int *)(uVar1 + 200)) / 0x24);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00849e90();
          break;
        case 3:
        case 5:
          iVar12 = 1;
          iVar14 = (**(code **)(*DAT_012588e8 + 0x18))();
          piVar11 = local_18[0];
          if (1 < iVar14) {
            do {
              iVar14 = *(int *)(DAT_012588e8[0x2b3] + iVar12 * 4);
              if (piVar11[9] == 5) {
                bVar15 = *(char *)(*(int *)(iVar14 + 0x5c) + 0x2a) == '\0';
LAB_008b0622:
                if (bVar15) {
                  local_e0[0] = *(int *)(iVar14 + 0x58);
                  cVar5 = (**(code **)(piVar11[0x18] + 0x18))(local_f0);
                  if (cVar5 != '\0') {
                    if ((local_18 < local_24) && (local_28 <= local_18)) {
                      iVar14 = (int)local_18 - (int)local_28;
                      if (local_24 == local_20) {
                        FUN_00a513f0();
                      }
                      if (local_24 != (int **)0x0) {
                        *local_24 = local_28[iVar14 >> 2];
                      }
                    }
                    else {
                      if (local_24 == local_20) {
                        FUN_00a513f0();
                      }
                      if (local_24 != (int **)0x0) {
                        *local_24 = piVar11;
                      }
                    }
                    local_24 = local_24 + 1;
                    FUN_004d61d0();
                    FUN_004e9b90();
                    FUN_008afd10(local_18[0],&local_84,local_f0);
                    FUN_00435ac0();
                    local_2c = local_2c + local_84;
                    piVar11 = local_18[0];
                  }
                }
              }
              else if (*(char *)(*(int *)(iVar14 + 0x5c) + 0x2a) != '\0') {
                bVar15 = *(int *)(iVar14 + 300) == 0;
                goto LAB_008b0622;
              }
              iVar12 = iVar12 + 1;
              iVar14 = (**(code **)(*DAT_012588e8 + 0x18))();
            } while (iVar12 < iVar14);
          }
          break;
        case 4:
          local_108 = *(undefined4 **)(local_30 + 0xda8);
LAB_008b070c:
          if ((*(undefined4 **)(local_30 + 0xda8) <= local_108) &&
             (local_108 < *(undefined4 **)(local_30 + 0xdac))) {
            puVar10 = local_108 + 2;
            local_74[1] = *local_108;
            iVar14 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_108[1] * 4);
            piVar11 = *(int **)(iVar14 + 0x9d8);
            local_6c = (uint *)(iVar14 + 0x9d8);
            piVar7 = local_18[0];
            puVar3 = local_6c;
LAB_008b0760:
            do {
              local_108 = puVar10;
              if ((piVar11 < (int *)*puVar3) || ((int *)puVar3[1] <= piVar11)) goto LAB_008b070c;
              local_e0[0] = *piVar11;
              piVar11 = piVar11 + 1;
              cVar5 = (**(code **)(piVar7[0x18] + 0x18))(local_f0);
            } while (cVar5 == '\0');
            if ((local_18 < local_24) && (local_28 <= local_18)) {
              iVar14 = (int)local_18 - (int)local_28;
              if (local_24 == local_20) {
                FUN_00a513f0();
              }
              if (local_24 != (int **)0x0) {
                *local_24 = local_28[iVar14 >> 2];
              }
            }
            else {
              if (local_24 == local_20) {
                FUN_00a513f0();
              }
              if (local_24 != (int **)0x0) {
                *local_24 = piVar7;
              }
            }
            local_24 = local_24 + 1;
            if ((local_e8 < local_54) && (local_58 <= local_e8)) {
              iVar14 = (int)local_e8 - (int)local_58 >> 3;
              if (local_54 == local_50) {
                FUN_00810820();
              }
              if (local_54 != (int *)0x0) {
                *local_54 = local_58[iVar14 * 2];
                iVar14 = local_58[iVar14 * 2 + 1];
LAB_008b083e:
                local_54[1] = iVar14;
              }
            }
            else {
              if (local_54 == local_50) {
                FUN_00810820();
              }
              if (local_54 != (int *)0x0) {
                *local_54 = local_e8[0];
                iVar14 = local_e8[1];
                goto LAB_008b083e;
              }
            }
            local_54 = local_54 + 2;
            if ((local_e0 < local_64) && (local_68 <= local_e0)) {
              iVar14 = (int)local_e0 - (int)local_68;
              if (local_64 == local_60) {
                FUN_007b94a0();
              }
              if (local_64 != (int *)0x0) {
                *local_64 = local_68[iVar14 >> 2];
              }
            }
            else {
              if (local_64 == local_60) {
                FUN_007b94a0();
              }
              if (local_64 != (int *)0x0) {
                *local_64 = local_e0[0];
              }
            }
            local_64 = local_64 + 1;
            FUN_008afd10(local_18[0],local_74,local_f0);
            iVar14 = local_74[0];
            if ((local_74 < local_44) && (local_48 <= local_74)) {
              iVar12 = (int)local_74 - (int)local_48;
              if (local_44 == local_40) {
                FUN_00435b20();
              }
              piVar7 = (int *)0x0;
              if (local_44 != (int *)0x0) {
                *local_44 = local_48[iVar12 >> 2];
                local_44 = local_44 + 1;
                local_2c = local_2c + iVar14;
                piVar7 = local_18[0];
                puVar3 = local_6c;
                goto LAB_008b0760;
              }
            }
            else {
              piVar7 = local_44;
              if (local_44 == local_40) {
                FUN_00435b20();
                piVar7 = local_44;
              }
              if (piVar7 != (int *)0x0) {
                *piVar7 = iVar14;
              }
            }
            local_44 = piVar7 + 1;
            local_2c = local_2c + iVar14;
            piVar7 = local_18[0];
            puVar3 = local_6c;
            goto LAB_008b0760;
          }
          break;
        case 6:
        case 9:
          if (iVar14 == 9) {
            local_34 = (int *)(local_30 + 0xda8);
          }
          else {
            local_34 = (int *)(local_30 + 0xd88);
          }
          iVar14 = 0;
          local_6c = (uint *)(local_34[1] - *local_34 >> 3);
          piVar11 = local_18[0];
          if (0 < (int)local_6c) {
            do {
              local_e8[0] = *(int *)(*local_34 + iVar14 * 8);
              local_e8[1] = *(int *)(*local_34 + 4 + iVar14 * 8);
              iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_e8[1] * 4);
              if (((0 < (int)(*(int *)(iVar12 + 0x9dc) - *(int *)(iVar12 + 0x9d8) & 0xfffffffcU)) &&
                  (local_e8[1] != *(int *)(local_30 + 0x20))) &&
                 (cVar5 = (**(code **)(piVar11[0x18] + 0x18))(local_f0), cVar5 != '\0')) {
                if ((local_18 < local_24) && (local_28 <= local_18)) {
                  iVar12 = (int)local_18 - (int)local_28;
                  if (local_24 == local_20) {
                    FUN_00a513f0();
                  }
                  if (local_24 != (int **)0x0) {
                    *local_24 = local_28[iVar12 >> 2];
                  }
                }
                else {
                  if (local_24 == local_20) {
                    FUN_00a513f0();
                  }
                  if (local_24 != (int **)0x0) {
                    *local_24 = piVar11;
                  }
                }
                local_24 = local_24 + 1;
                FUN_004d61d0();
                FUN_004e9b90();
                FUN_008afd10(local_18[0],&local_88,local_f0);
                FUN_00435ac0();
                local_2c = local_2c + local_88;
                piVar11 = local_18[0];
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)local_6c);
          }
          break;
        case 7:
        case 8:
          piVar11 = local_18[0];
          if (iVar14 == 7) {
            piVar7 = *(int **)(local_30 + 0x3c0);
          }
          else {
            piVar7 = *(int **)(local_30 + 0x3a4);
          }
          while (piVar7 != (int *)0x0) {
            iVar14 = *piVar7;
            local_74[1] = *(undefined4 *)(iVar14 + 8);
            piVar7 = (int *)piVar7[2];
            iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar14 + 0xc) * 4);
            if (0 < (int)(*(int *)(iVar12 + 0x9dc) - *(int *)(iVar12 + 0x9d8) & 0xfffffffcU)) {
              local_e8[0] = *(int *)(iVar14 + 8);
              local_e8[1] = *(int *)(iVar14 + 0xc);
              if ((local_e8[1] != *(int *)(local_30 + 0x20)) &&
                 (cVar5 = (**(code **)(piVar11[0x18] + 0x18))(local_f0), cVar5 != '\0')) {
                if ((local_18 < local_24) && (local_28 <= local_18)) {
                  iVar14 = (int)local_18 - (int)local_28;
                  if (local_24 == local_20) {
                    FUN_00a513f0();
                  }
                  if (local_24 != (int **)0x0) {
                    *local_24 = local_28[iVar14 >> 2];
                  }
                }
                else {
                  if (local_24 == local_20) {
                    FUN_00a513f0();
                  }
                  if (local_24 != (int **)0x0) {
                    *local_24 = piVar11;
                  }
                }
                local_24 = local_24 + 1;
                FUN_004d61d0();
                FUN_004e9b90();
                FUN_008afd10(local_18[0],&local_38,local_f0);
                FUN_00435ac0();
                local_2c = local_2c + (int)local_38;
                piVar11 = local_18[0];
              }
            }
          }
        }
      }
    }
  }
  uVar16 = __allmul(local_2c,local_2c >> 0x1f,10000,0);
  local_2c = __alldiv(uVar16,1000,0);
  iVar14 = DAT_012587e4;
  iVar12 = 0;
  iVar13 = *(int *)(DAT_012587e4 + 0x2a8) - *(int *)(DAT_012587e4 + 0x2a4) >> 3;
  if (0 < iVar13) {
    do {
      iVar8 = __strnicmp("BUR",(char *)(*(int *)(iVar14 + 0x2a4) + iVar12 * 8),3);
      if (iVar8 == 0) break;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar13);
  }
  iVar14 = (int)local_24 - (int)local_28 >> 2;
  if (0 < iVar14) {
    FUN_00401000(0x447a1fff);
    iVar13 = FUN_00b31c00();
    iVar12 = local_2c;
    if (iVar13 <= local_2c) {
      iVar13 = FUN_009b7950(0x2d,0);
      iVar8 = 0;
      iVar12 = (iVar13 % (iVar12 / 1000)) * 1000;
      if (0 < iVar14) {
        FUN_00401000(0x461c4200);
        local_80 = FUN_00b31c00();
        local_7c[0] = local_80 >> 0x1f;
        local_6c = (uint *)((int)local_28 - (int)local_48);
        piVar11 = local_48;
        do {
          local_38 = *(float *)((int)local_6c + (int)piVar11);
          uVar16 = __allmul(*piVar11,*piVar11 >> 0x1f,local_80,local_7c[0]);
          iVar13 = __alldiv(uVar16,1000,0);
          iVar12 = iVar12 - iVar13;
          if (iVar12 < 0) {
            *(int *)(param_2 + 8) = local_58[iVar8 * 2];
            *(int *)(param_2 + 0xc) = local_58[iVar8 * 2 + 1];
            *(int *)(param_2 + 0x10) = local_68[iVar8];
            if (local_48 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_48);
            }
            if (local_68 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_68);
            }
            if (local_58 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_58);
            }
            if (local_28 == (int **)0x0) {
              if (in_stack_00000020 < 0x10) {
                ExceptionList = local_10;
                return local_38;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(param_3);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_28);
          }
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar8 < iVar14);
      }
    }
  }
  piVar11 = local_48;
  if (0 < iVar14) {
    *(int *)(param_2 + 8) = *local_58;
    *(int *)(param_2 + 0xc) = local_58[1];
    *(int *)(param_2 + 0x10) = *local_68;
    if (local_48 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  fVar9 = (float)FUN_008aff70();
  if (piVar11 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar11);
  }
  if (local_68 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if (local_58 == (int *)0x0) {
    if (local_28 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return fVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_58);
}

