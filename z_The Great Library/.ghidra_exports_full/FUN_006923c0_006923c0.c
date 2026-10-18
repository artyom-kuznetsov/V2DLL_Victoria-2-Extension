// FUN_006923c0 @ 006923c0 body=[[006923c0, 00692457] [0069245b, 006924f8] [00692500, 006925c2] [006925c6, 006925fd] [00692601, 0069264c] [00692650, 006927cf] [006927d3, 00692807] [0069280b, 006929af] [006929b3, 006929e3] [006929e7, 00692a45] [00692a49, 00692a5e] [00692a64, 00692af8] [00692afc, 00692b1e] [00692b22, 00692b7a] [00692b7e, 00692bd7] [00692bdb, 00692c00]]


/* WARNING: Removing unreachable block (ram,0x00692782) */
/* WARNING: Removing unreachable block (ram,0x0069295d) */
/* WARNING: Type propagation algorithm not settling */

void FUN_006923c0(int param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  DWORD DVar9;
  uint uVar10;
  LPSTR ******pppppppCVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  uint local_cc;
  uint local_b8;
  uint local_b0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  int local_78;
  LPSTR ******local_74 [4];
  DWORD local_64;
  uint local_60;
  LPSTR ******local_58 [4];
  DWORD local_48;
  uint local_44;
  LPSTR ******local_3c [4];
  uint local_2c;
  uint local_28;
  int *local_20;
  int *local_1c;
  int local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b942;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0x9c) != -1) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xb0))(*(int *)(param_1 + 0x9c));
    goto LAB_00692a7b;
  }
  local_11 = '\0';
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("goto_edit",9);
  local_8 = 0;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x98) + 0x40))(local_94);
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x4c))(local_58);
  local_8._0_1_ = 2;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  pppppppCVar11 = local_58[0];
  if (local_44 < 0x10) {
    pppppppCVar11 = (LPSTR ******)local_58;
  }
  CharLowerBuffA((LPSTR)pppppppCVar11,local_48);
  FUN_009897c0();
  iVar6 = (**(code **)(*DAT_012588e8 + 0x18))();
  pppppppCVar11 = local_58[0];
  if (local_44 < 0x10) {
    pppppppCVar11 = (LPSTR ******)local_58;
  }
  local_20 = (int *)iVar6;
  iVar7 = FUN_00aaf0c5(pppppppCVar11);
  if (iVar7 == 0) {
    iVar7 = 1;
    if (1 < iVar6) {
      do {
        (**(code **)(**(int **)(DAT_012588e8[0x2b3] + iVar7 * 4) + 0x1c))(local_74);
        local_8._0_1_ = 3;
        pppppppCVar11 = local_74[0];
        if (local_60 < 0x10) {
          pppppppCVar11 = (LPSTR ******)local_74;
        }
        CharLowerBuffA((LPSTR)pppppppCVar11,local_64);
        FUN_009897c0();
        if (param_2 == '\0') {
          FUN_009895f0(local_48);
          local_8._0_1_ = 4;
          local_12 = FUN_00416db0();
          local_8._0_1_ = 3;
          if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_cc);
          }
          local_b8 = 0xf;
          local_cc = local_cc & 0xffffff00;
          if (local_12 != '\0') {
            local_11 = '\x01';
            (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xb0))(iVar7);
            goto joined_r0x00692642;
          }
        }
        else {
          cVar5 = FUN_00416db0();
          if (cVar5 != '\0') {
            local_11 = '\x01';
            (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xb0))(iVar7);
joined_r0x00692642:
            if (0xf < local_60) {
              local_8._0_1_ = 2;
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_74[0]);
            }
            local_8._0_1_ = 2;
            local_74[0] = (LPSTR ******)((uint)local_74[0] & 0xffffff00);
            local_64 = 0;
            local_60 = 0xf;
            break;
          }
        }
        local_8._0_1_ = 2;
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_74[0]);
        }
        iVar7 = iVar7 + 1;
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = (LPSTR ******)((uint)local_74[0] & 0xffffff00);
      } while (iVar7 < (int)local_20);
    }
  }
  else {
    piVar12 = (int *)DAT_012588e8[0x2c9];
    local_11 = '\x01';
    pppppppCVar11 = local_58[0];
    if (local_44 < 0x10) {
      pppppppCVar11 = (LPSTR ******)local_58;
    }
    uVar8 = FUN_00aaf0c5(pppppppCVar11);
    (**(code **)(*piVar12 + 0xb0))(uVar8);
  }
  local_20 = DAT_012588e8 + 0x2b7;
  if (local_11 == '\0') {
    local_18 = 1;
    local_78 = DAT_012588e8[0x2b8] - *local_20 >> 2;
    if (1 < local_78) {
LAB_00692696:
      piVar12 = *(int **)(*local_20 + local_18 * 4);
      local_1c = piVar12;
      if ((((int)(piVar12[0x277] - piVar12[0x276] & 0xfffffffcU) < 1) || (piVar12[8] == 0)) ||
         (((char)piVar12[7] == 'R' &&
          ((*(char *)((int)piVar12 + 0x1d) == 'E' && (*(char *)((int)piVar12 + 0x1e) == 'B'))))))
      goto LAB_0069280b;
      FUN_004f97a0();
      local_8._0_1_ = 5;
      FUN_009897c0();
      uVar10 = local_2c;
      DVar3 = local_48;
      if (param_2 == '\0') {
        iVar6 = FUN_009895f0(local_48);
        DVar3 = local_48;
        uVar10 = *(uint *)(iVar6 + 0x10);
        uVar13 = uVar10;
        if (local_48 <= uVar10) {
          uVar13 = local_48;
        }
        iVar6 = FUN_00414bd0(uVar13);
        bVar14 = false;
        if (iVar6 == 0) {
          if (uVar10 < DVar3) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (uint)(uVar10 != DVar3);
          }
          bVar14 = uVar10 == 0;
        }
        local_8._0_1_ = 5;
        if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b0);
        }
        local_9c = 0xf;
        local_b0 = local_b0 & 0xffffff00;
        if (bVar14) {
          (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xb0))
                    (*(undefined4 *)(*(int *)(DAT_012588e8[0x2b3] + local_1c[0x2f9] * 4) + 0x58));
          bVar14 = local_28 < 0x10;
          goto LAB_00692a3b;
        }
      }
      else {
        DVar9 = local_2c;
        if (local_48 <= local_2c) {
          DVar9 = local_48;
        }
        iVar6 = FUN_00414bd0(DVar9);
        bVar14 = false;
        if (iVar6 == 0) {
          if (uVar10 < DVar3) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (uint)(uVar10 != DVar3);
          }
          bVar14 = uVar10 == 0;
        }
        if (bVar14) {
          (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xb0))
                    (*(undefined4 *)(*(int *)(DAT_012588e8[0x2b3] + piVar12[0x2f9] * 4) + 0x58));
          bVar14 = local_28 < 0x10;
LAB_00692a3b:
          if (!bVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
          goto LAB_00692a49;
        }
      }
      local_8._0_1_ = 2;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
LAB_0069280b:
      local_18 = local_18 + 1;
      if (local_78 <= local_18) goto LAB_0069281e;
      goto LAB_00692696;
    }
LAB_0069281e:
    iVar6 = local_20[1] - *local_20 >> 2;
    local_18 = 1;
    local_78 = iVar6;
    if (1 < iVar6) {
      do {
        iVar7 = *(int *)(*local_20 + local_18 * 4);
        if (((0 < (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU)) &&
            (*(int *)(iVar7 + 0x20) != 0)) &&
           ((*(char *)(iVar7 + 0x1c) != 'R' ||
            ((*(char *)(iVar7 + 0x1d) != 'E' || (*(char *)(iVar7 + 0x1e) != 'B')))))) {
          puVar2 = *(undefined4 **)(iVar7 + 0xe44);
          uVar4 = (undefined1)local_8;
          while (local_8._0_1_ = uVar4, puVar2 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)puVar2[2];
            local_1c = (int *)*puVar2;
            (**(code **)(*local_1c + 0x20))(local_3c);
            local_8._0_1_ = 7;
            pppppppCVar11 = local_3c[0];
            if (local_28 < 0x10) {
              pppppppCVar11 = (LPSTR ******)local_3c;
            }
            CharLowerBuffA((LPSTR)pppppppCVar11,local_2c);
            FUN_009897c0();
            iVar6 = FUN_009895f0(local_48);
            DVar3 = local_48;
            uVar10 = *(uint *)(iVar6 + 0x10);
            uVar13 = uVar10;
            if (local_48 <= uVar10) {
              uVar13 = local_48;
            }
            iVar6 = FUN_00414bd0(uVar13);
            bVar14 = false;
            if (iVar6 == 0) {
              if (uVar10 < DVar3) {
                uVar10 = 0xffffffff;
              }
              else {
                uVar10 = (uint)(uVar10 != DVar3);
              }
              bVar14 = uVar10 == 0;
            }
            local_8._0_1_ = 7;
            if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_b0);
            }
            local_9c = 0xf;
            local_b0 = local_b0 & 0xffffff00;
            if (bVar14) {
              if ((local_1c[0x13] - local_1c[0x12] & 0xfffffffcU) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)local_1c[0x12];
              }
              (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0xb0))(uVar8);
              bVar14 = local_28 < 0x10;
              goto LAB_00692a3b;
            }
            local_8._0_1_ = 2;
            uVar4 = (undefined1)local_8;
            local_8._0_1_ = 2;
            puVar2 = puVar1;
            iVar6 = local_78;
            if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_3c[0]);
            }
          }
        }
        local_18 = local_18 + 1;
      } while (local_18 < iVar6);
    }
  }
LAB_00692a49:
  local_8 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
LAB_00692a7b:
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = (LPSTR ******)((uint)local_74[0] & 0xffffff00);
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 9;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  FUN_00409350("goto_edit",9);
  local_8 = CONCAT31(local_8._1_3_,10);
  iVar6 = (**(code **)(**(int **)(param_1 + 0x98) + 0x40))(local_94);
  (**(code **)(*(int *)(iVar6 + 0x54) + 0x40))(local_74);
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  local_8 = 0xffffffff;
  local_80 = 0xf;
  local_84 = 0;
  uVar10 = local_94[0] >> 8;
  local_94[0] = uVar10 << 8;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = uVar10 << 8;
  FUN_00409350("goto_edit",9);
  local_8 = 0xb;
  uVar8 = (**(code **)(**(int **)(param_1 + 0x98) + 0x40))(local_94);
  FUN_009b6400(uVar8);
  local_8 = 0xffffffff;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94[0]);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x98) + 0x18) + 0x38))();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = (LPSTR ******)((uint)local_3c[0] & 0xffffff00);
  FUN_00409350("provinces",9);
  local_8 = 0xc;
  piVar12 = (int *)(**(code **)(**(int **)(param_1 + 0x98) + 0x7c))(local_3c);
  local_8 = 0xffffffff;
  if (local_28 < 0x10) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = (LPSTR ******)((uint)local_3c[0] & 0xffffff00);
    (**(code **)(*piVar12 + 0x5c))();
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_3c[0]);
}

