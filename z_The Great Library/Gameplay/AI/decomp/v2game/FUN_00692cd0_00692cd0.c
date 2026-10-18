// FUN_00692cd0 @ 00692cd0 body=[[00692cd0, 00692d57] [00692d5b, 00692de5] [00692de9, 00692e84] [00692e88, 00692f8c] [00692f90, 00693002] [00693006, 00693145] [0069314c, 006931ef] [006931f3, 006932b9] [006932bd, 006932e2] [006932e6, 006933f8] [006933ff, 00693494] [00693498, 00693546] [0069354a, 0069355c] [00693560, 00693693] [0069369a, 00693732] [00693736, 006937e4] [006937e8, 006937fa] [006937fe, 006938b7] [006938bb, 006938d6] [006938da, 006938ea]]


/* WARNING: Removing unreachable block (ram,0x006933b0) */
/* WARNING: Removing unreachable block (ram,0x006930fd) */
/* WARNING: Removing unreachable block (ram,0x0069364b) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00692cd0(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  LPSTR ******pppppppCVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *******pppppppcVar10;
  DWORD DVar11;
  int in_ECX;
  uint uVar12;
  DWORD DVar13;
  bool bVar14;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int local_a0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  int *local_80;
  int *local_7c;
  int local_78;
  int *local_74;
  LPSTR ******local_70 [4];
  DWORD local_60;
  uint local_5c;
  char *******local_54 [4];
  DWORD local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92b87;
  local_10 = ExceptionList;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FUN_00409350("provinces",9);
  local_8 = 0;
  local_74 = (int *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x7c))(local_bc);
  local_8 = 0xffffffff;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc[0]);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  (**(code **)(*local_74 + 0x5c))();
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  FUN_00409350("goto_edit",9);
  local_8 = 1;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x40))(local_f4);
  (**(code **)(*(int *)(iVar4 + 0x54) + 0x4c))(local_70);
  local_8._0_1_ = 3;
  if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f4[0]);
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  pppppppCVar6 = local_70[0];
  if (local_5c < 0x10) {
    pppppppCVar6 = (LPSTR ******)local_70;
  }
  CharLowerBuffA((LPSTR)pppppppCVar6,local_60);
  FUN_009897c0();
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0aef0,4);
  local_8._0_1_ = 4;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x34))(local_9c);
  (**(code **)(*piVar5 + 0xbc))();
  local_8._0_1_ = 3;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  if (1 < (int)local_60) {
    pppppppCVar6 = local_70[0];
    if (local_5c < 0x10) {
      pppppppCVar6 = (LPSTR ******)local_70;
    }
    iVar4 = FUN_00aaf0c5(pppppppCVar6);
    local_18 = (undefined4 *)(**(code **)(*DAT_012588e8 + 0x18))();
    local_7c = DAT_012588e8 + 0x2b7;
    if ((0 < iVar4) && (iVar4 < (int)local_18)) {
      local_78 = FUN_00aae9af(0x2c);
      local_8._0_1_ = 5;
      if (local_78 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00691b40(local_78,*(undefined4 *)(in_ECX + 0x94),
                             *(undefined4 *)(DAT_012588e8[0x2b3] + iVar4 * 4));
      }
      local_8._0_1_ = 3;
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      FUN_00409350(&DAT_00e09e48,4);
      local_8._0_1_ = 6;
      iVar7 = (**(code **)(**(int **)(iVar4 + 0x20) + 0x48))(local_9c);
      (**(code **)(*(int *)(iVar7 + 0x54) + 4))(in_ECX + 0x70);
      local_8._0_1_ = 3;
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9c[0]);
      }
      (**(code **)(*local_74 + 0x10))(iVar4,1);
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      FUN_00409350(&DAT_00e0aef0,4);
      local_8._0_1_ = 7;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x34))(local_d8);
      (**(code **)(*piVar5 + 0xb8))();
      local_8._0_1_ = 3;
      if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_d8[0]);
      }
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
    }
    if (*(int *)(in_ECX + 0x9c) == -1) {
      local_14 = 1;
      if (1 < (int)local_18) {
        do {
          (**(code **)(**(int **)(DAT_012588e8[0x2b3] + local_14 * 4) + 0x1c))(local_54);
          local_8._0_1_ = 8;
          if ((int)local_44 < 5) {
LAB_006930bc:
            pppppppcVar10 = local_54[0];
            if (local_40 < 0x10) {
              pppppppcVar10 = (char *******)local_54;
            }
            CharLowerBuffA((LPSTR)pppppppcVar10,local_44);
            FUN_009897c0();
            iVar4 = FUN_009895f0(local_60);
            DVar13 = local_60;
            uVar8 = *(uint *)(iVar4 + 0x10);
            uVar12 = uVar8;
            if (local_60 <= uVar8) {
              uVar12 = local_60;
            }
            iVar4 = FUN_00414bd0(uVar12);
            bVar14 = false;
            if (iVar4 == 0) {
              if (uVar8 < DVar13) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = (uint)(uVar8 != DVar13);
              }
              bVar14 = uVar8 == 0;
            }
            local_8._0_1_ = 8;
            uVar3 = (undefined1)local_8;
            local_8._0_1_ = 8;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_38[0]);
            }
            iVar4 = local_1c;
            if (bVar14) {
              local_78 = FUN_00aae9af(0x2c);
              iVar4 = local_1c;
              local_8._0_1_ = 10;
              if (local_78 == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = FUN_00691b40(local_78,*(undefined4 *)(local_1c + 0x94),
                                     *(undefined4 *)(DAT_012588e8[0x2b3] + local_14 * 4));
              }
              local_8._0_1_ = 8;
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              FUN_00409350(&DAT_00e09e48,4);
              local_8._0_1_ = 0xb;
              iVar9 = (**(code **)(**(int **)(iVar7 + 0x20) + 0x48))(local_38);
              (**(code **)(*(int *)(iVar9 + 0x54) + 4))(iVar4 + 0x70);
              local_8._0_1_ = 8;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_38[0]);
              }
              (**(code **)(*local_74 + 0x10))(iVar7,1);
              DVar13 = local_60;
              uVar3 = (undefined1)local_8;
            }
            local_8._0_1_ = uVar3;
            DVar2 = local_44;
            DVar11 = local_44;
            if (DVar13 <= local_44) {
              DVar11 = DVar13;
            }
            iVar7 = FUN_00414bd0(DVar11);
            bVar14 = false;
            if (iVar7 == 0) {
              if (DVar2 < DVar13) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = (uint)(DVar2 != DVar13);
              }
              bVar14 = uVar8 == 0;
            }
            if (bVar14) {
              local_88 = 0xf;
              local_8c = 0;
              local_9c[0] = local_9c[0] & 0xffffff00;
              FUN_00409350(&DAT_00e0aef0,4);
              local_8._0_1_ = 0xc;
              piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x98) + 0x34))(local_9c);
              (**(code **)(*piVar5 + 0xb8))();
              if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_9c[0]);
              }
              local_88 = 0xf;
              local_8c = 0;
              local_9c[0] = local_9c[0] & 0xffffff00;
            }
            local_8._0_1_ = 3;
            if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_54[0]);
            }
          }
          else {
            pppppppcVar10 = local_54[0];
            if (local_40 < 0x10) {
              pppppppcVar10 = (char *******)local_54;
            }
            if (*(char *)pppppppcVar10 != 'P') goto LAB_006930bc;
            pppppppcVar10 = local_54[0];
            if (local_40 < 0x10) {
              pppppppcVar10 = (char *******)local_54;
            }
            if (*(char *)((int)pppppppcVar10 + 1) != 'R') goto LAB_006930bc;
            pppppppcVar10 = local_54[0];
            if (local_40 < 0x10) {
              pppppppcVar10 = (char *******)local_54;
            }
            if (*(char *)((int)pppppppcVar10 + 2) != 'O') goto LAB_006930bc;
            pppppppcVar10 = local_54[0];
            if (local_40 < 0x10) {
              pppppppcVar10 = (char *******)local_54;
            }
            if (*(char *)((int)pppppppcVar10 + 3) != 'V') goto LAB_006930bc;
            local_8._0_1_ = 3;
            FUN_00408ad0();
          }
          local_14 = local_14 + 1;
        } while (local_14 < (int)local_18);
      }
      local_18 = (undefined4 *)0x1;
      local_80 = (int *)(local_7c[1] - *local_7c >> 2);
      if (1 < (int)local_80) {
        do {
          local_14 = *(int *)(*local_7c + (int)local_18 * 4);
          if (((0 < (int)(*(int *)(local_14 + 0x9dc) - *(int *)(local_14 + 0x9d8) & 0xfffffffcU)) &&
              (*(int *)(local_14 + 0x20) != 0)) &&
             ((*(char *)(local_14 + 0x1c) != 'R' ||
              ((*(char *)(local_14 + 0x1d) != 'E' || (*(char *)(local_14 + 0x1e) != 'B')))))) {
            FUN_004f97a0();
            local_8._0_1_ = 0xd;
            pppppppcVar10 = local_54[0];
            if (local_40 < 0x10) {
              pppppppcVar10 = (char *******)local_54;
            }
            CharLowerBuffA((LPSTR)pppppppcVar10,local_44);
            FUN_009897c0();
            iVar4 = FUN_009895f0(local_60);
            DVar13 = local_60;
            uVar8 = *(uint *)(iVar4 + 0x10);
            uVar12 = uVar8;
            if (local_60 <= uVar8) {
              uVar12 = local_60;
            }
            iVar4 = FUN_00414bd0(uVar12);
            bVar14 = false;
            if (iVar4 == 0) {
              if (uVar8 < DVar13) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = (uint)(uVar8 != DVar13);
              }
              bVar14 = uVar8 == 0;
            }
            local_8._0_1_ = 0xd;
            uVar3 = (undefined1)local_8;
            local_8._0_1_ = 0xd;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_38[0]);
            }
            iVar4 = local_1c;
            if (bVar14) {
              local_78 = FUN_00aae9af(0x2c);
              iVar4 = local_1c;
              local_8._0_1_ = 0xf;
              if (local_78 == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = FUN_00691ce0(local_78,*(undefined4 *)(local_1c + 0x94),local_14);
              }
              local_8._0_1_ = 0xd;
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              FUN_00409350(&DAT_00e09e48,4);
              local_8._0_1_ = 0x10;
              iVar9 = (**(code **)(**(int **)(iVar7 + 0x20) + 0x48))(local_38);
              (**(code **)(*(int *)(iVar9 + 0x54) + 4))(iVar4 + 0x70);
              local_8._0_1_ = 0xd;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_38[0]);
              }
              (**(code **)(*local_74 + 0x10))(iVar7,1);
              DVar13 = local_60;
              uVar3 = (undefined1)local_8;
            }
            local_8._0_1_ = uVar3;
            DVar2 = local_44;
            DVar11 = local_44;
            if (DVar13 <= local_44) {
              DVar11 = DVar13;
            }
            iVar7 = FUN_00414bd0(DVar11);
            bVar14 = false;
            if (iVar7 == 0) {
              if (DVar2 < DVar13) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = (uint)(DVar2 != DVar13);
              }
              bVar14 = uVar8 == 0;
            }
            if (bVar14) {
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              FUN_00409350(&DAT_00e0aef0,4);
              local_8._0_1_ = 0x11;
              piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x98) + 0x34))(local_38);
              (**(code **)(*piVar5 + 0xb8))();
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_38[0]);
              }
            }
            local_8._0_1_ = 3;
            if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_54[0]);
            }
          }
          local_18 = (undefined4 *)((int)local_18 + 1);
        } while ((int)local_18 < (int)local_80);
      }
      local_14 = 1;
      local_78 = local_7c[1] - *local_7c >> 2;
      uVar3 = (undefined1)local_8;
      if (1 < local_78) {
        do {
          iVar4 = *(int *)(*local_7c + local_14 * 4);
          if (((0 < (int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU)) &&
              (*(int *)(iVar4 + 0x20) != 0)) &&
             ((*(char *)(iVar4 + 0x1c) != 'R' ||
              ((*(char *)(iVar4 + 0x1d) != 'E' || (*(char *)(iVar4 + 0x1e) != 'B')))))) {
            puVar1 = *(undefined4 **)(iVar4 + 0xe44);
            uVar3 = (undefined1)local_8;
            while (local_8._0_1_ = uVar3, local_18 = puVar1, puVar1 != (undefined4 *)0x0) {
              local_18 = (undefined4 *)puVar1[2];
              local_80 = (int *)*puVar1;
              (**(code **)(*local_80 + 0x20))(local_54);
              local_8._0_1_ = 0x12;
              pppppppcVar10 = local_54[0];
              if (local_40 < 0x10) {
                pppppppcVar10 = (char *******)local_54;
              }
              CharLowerBuffA((LPSTR)pppppppcVar10,local_44);
              FUN_009897c0();
              iVar4 = FUN_009895f0(local_60);
              DVar13 = local_60;
              uVar8 = *(uint *)(iVar4 + 0x10);
              uVar12 = uVar8;
              if (local_60 <= uVar8) {
                uVar12 = local_60;
              }
              iVar4 = FUN_00414bd0(uVar12);
              bVar14 = false;
              if (iVar4 == 0) {
                if (uVar8 < DVar13) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = (uint)(uVar8 != DVar13);
                }
                bVar14 = uVar8 == 0;
              }
              local_8._0_1_ = 0x12;
              uVar3 = (undefined1)local_8;
              local_8._0_1_ = 0x12;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_38[0]);
              }
              iVar4 = local_1c;
              if (bVar14) {
                local_a0 = FUN_00aae9af(0x2c);
                iVar4 = local_1c;
                local_8._0_1_ = 0x14;
                if (local_a0 == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = FUN_00691e90(local_a0,*(undefined4 *)(local_1c + 0x94),local_80);
                }
                local_8._0_1_ = 0x12;
                local_24 = 0xf;
                local_28 = 0;
                local_38[0] = local_38[0] & 0xffffff00;
                FUN_00409350(&DAT_00e09e48,4);
                local_8._0_1_ = 0x15;
                iVar9 = (**(code **)(**(int **)(iVar7 + 0x20) + 0x48))(local_38);
                (**(code **)(*(int *)(iVar9 + 0x54) + 4))(iVar4 + 0x70);
                local_8._0_1_ = 0x12;
                if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_38[0]);
                }
                (**(code **)(*local_74 + 0x10))(iVar7,1);
                DVar13 = local_60;
                uVar3 = (undefined1)local_8;
              }
              local_8._0_1_ = uVar3;
              DVar2 = local_44;
              DVar11 = local_44;
              if (DVar13 <= local_44) {
                DVar11 = DVar13;
              }
              iVar7 = FUN_00414bd0(DVar11);
              bVar14 = false;
              if (iVar7 == 0) {
                if (DVar2 < DVar13) {
                  uVar8 = 0xffffffff;
                }
                else {
                  uVar8 = (uint)(DVar2 != DVar13);
                }
                bVar14 = uVar8 == 0;
              }
              if (bVar14) {
                local_24 = 0xf;
                local_28 = 0;
                local_38[0] = local_38[0] & 0xffffff00;
                FUN_00409350(&DAT_00e0aef0,4);
                local_8._0_1_ = 0x16;
                piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x98) + 0x34))(local_38);
                (**(code **)(*piVar5 + 0xb8))();
                if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_38[0]);
                }
              }
              local_8._0_1_ = 3;
              uVar3 = (undefined1)local_8;
              local_8._0_1_ = 3;
              puVar1 = local_18;
              if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_54[0]);
              }
            }
          }
          local_14 = local_14 + 1;
          uVar3 = (undefined1)local_8;
        } while (local_14 < local_78);
      }
    }
    else {
      local_a0 = FUN_00aae9af(0x2c);
      local_8._0_1_ = 0x17;
      if (local_a0 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00691b40(local_a0,*(undefined4 *)(in_ECX + 0x94),
                             *(undefined4 *)(DAT_012588e8[0x2b3] + *(int *)(in_ECX + 0x9c) * 4));
      }
      local_8._0_1_ = 3;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350(&DAT_00e09e48,4);
      local_8._0_1_ = 0x18;
      iVar7 = (**(code **)(**(int **)(iVar4 + 0x20) + 0x48))(local_38);
      (**(code **)(*(int *)(iVar7 + 0x54) + 4))(in_ECX + 0x70);
      local_8._0_1_ = 3;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      (**(code **)(*local_74 + 0x10))(iVar4,1);
      uVar3 = (undefined1)local_8;
    }
  }
  local_8._0_1_ = uVar3;
  if (local_5c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_70[0]);
}

