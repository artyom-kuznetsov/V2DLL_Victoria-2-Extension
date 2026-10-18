// FUN_00738c30 @ 00738c30 body=[[00738c30, 00738d3a] [00738d3e, 00738d64] [00738d68, 00738e0c] [00738e10, 00738e36] [00738e3a, 00738e5c] [00738e60, 00738ef7] [00738efb, 00738f21] [00738f25, 00738fc3] [00738fc7, 00738fed] [00738ff1, 007390b9] [007390bd, 007390e3] [007390e7, 00739185] [00739189, 007391af] [007391b3, 007392b9] [007392bd, 007392e3] [007392e7, 0073938a] [0073938e, 007393b8] [007393bc, 00739598]]


/* WARNING: Removing unreachable block (ram,0x0073913a) */
/* WARNING: Removing unreachable block (ram,0x00738f78) */
/* WARNING: Removing unreachable block (ram,0x00738dba) */
/* WARNING: Removing unreachable block (ram,0x00738ce8) */
/* WARNING: Removing unreachable block (ram,0x00738eaf) */
/* WARNING: Removing unreachable block (ram,0x0073906f) */
/* WARNING: Removing unreachable block (ram,0x0073926e) */
/* WARNING: Removing unreachable block (ram,0x00739341) */

void FUN_00738c30(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined4 local_60 [5];
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined8 *local_28;
  undefined8 *local_24;
  undefined8 *local_20;
  undefined8 *local_1c;
  bool local_15;
  undefined8 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3cb23;
  local_10 = ExceptionList;
  puVar11 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 3;
  ExceptionList = &local_10;
  FUN_00739c20(puVar11,param_3 + -3,param_4);
  local_1c = puVar11 + 3;
  uVar6 = local_15;
  local_14 = puVar11;
  if (param_2 < puVar11) {
    do {
      local_15 = (bool)uVar6;
      piVar4 = *(int **)(*(int *)((int)puVar11 - 0xc) + 0x16c);
      iVar7 = (**(code **)(**(int **)(*(int *)((int)puVar11 + 0xc) + 0x16c) + 0x18))(local_60);
      local_8 = 0;
      iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
      local_20 = *(undefined8 **)(iVar7 + 0x10);
      puVar12 = *(undefined8 **)(iVar8 + 0x10);
      puVar13 = local_20;
      if (puVar12 < local_20) {
        puVar13 = puVar12;
      }
      uVar9 = FUN_00414bd0(puVar13);
      if (uVar9 == 0) {
        if (puVar12 < local_20) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(puVar12 != local_20);
        }
      }
      local_15 = (int)uVar9 < 0;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      local_8 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60[0]);
      }
      if (local_15) break;
      piVar4 = *(int **)(*(int *)((int)puVar11 + 0xc) + 0x16c);
      iVar7 = (**(code **)(**(int **)(*(int *)((int)puVar11 - 0xc) + 0x16c) + 0x18))(local_60);
      local_8 = 2;
      iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
      local_20 = *(undefined8 **)(iVar7 + 0x10);
      puVar12 = *(undefined8 **)(iVar8 + 0x10);
      puVar13 = local_20;
      if (puVar12 < local_20) {
        puVar13 = puVar12;
      }
      uVar9 = FUN_00414bd0(puVar13);
      if (uVar9 == 0) {
        if (puVar12 < local_20) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(puVar12 != local_20);
        }
      }
      local_15 = (int)uVar9 < 0;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      local_8 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60[0]);
      }
      if (local_15) break;
      puVar11 = puVar11 + -3;
      uVar6 = 0;
    } while (param_2 < puVar11);
    local_8 = 0xffffffff;
    local_30 = 0xf;
    local_34 = 0;
  }
  local_14 = puVar11;
  local_28 = puVar11;
  local_24 = local_1c;
  if (local_1c < param_3) {
    while( true ) {
      piVar4 = *(int **)(*(int *)((int)local_1c + 0xc) + 0x16c);
      iVar7 = (**(code **)(**(int **)(*(int *)((int)local_14 + 0xc) + 0x16c) + 0x18))(local_60);
      local_8 = 4;
      iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
      uVar9 = *(uint *)(iVar7 + 0x10);
      uVar5 = *(uint *)(iVar8 + 0x10);
      uVar10 = uVar5;
      if (uVar9 <= uVar5) {
        uVar10 = uVar9;
      }
      uVar10 = FUN_00414bd0(uVar10);
      if (uVar10 == 0) {
        if (uVar5 < uVar9) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)(uVar5 != uVar9);
        }
      }
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      local_8 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60[0]);
      }
      local_28 = local_14;
      local_24 = local_1c;
      if ((int)uVar10 < 0) break;
      piVar4 = *(int **)(*(int *)((int)local_14 + 0xc) + 0x16c);
      iVar7 = (**(code **)(**(int **)(*(int *)((int)local_1c + 0xc) + 0x16c) + 0x18))(local_60);
      local_8 = 6;
      iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
      uVar9 = *(uint *)(iVar7 + 0x10);
      uVar5 = *(uint *)(iVar8 + 0x10);
      uVar10 = uVar5;
      if (uVar9 <= uVar5) {
        uVar10 = uVar9;
      }
      uVar10 = FUN_00414bd0(uVar10);
      if (uVar10 == 0) {
        if (uVar5 < uVar9) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)(uVar5 != uVar9);
        }
      }
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      local_8 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60[0]);
      }
      local_28 = local_14;
      local_24 = local_1c;
      if (((int)uVar10 < 0) || (local_1c = local_1c + 3, local_24 = local_1c, param_3 <= local_1c))
      break;
    }
  }
joined_r0x00739019:
  do {
    if (param_3 <= local_24) {
LAB_0073920f:
      if (param_2 < local_28) {
        local_20 = local_28 + -3;
        do {
          piVar4 = *(int **)(*(int *)((int)local_20 + 0xc) + 0x16c);
          iVar7 = (**(code **)(**(int **)(*(int *)((int)local_14 + 0xc) + 0x16c) + 0x18))(local_60);
          local_8 = 0xc;
          iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
          uVar9 = *(uint *)(iVar7 + 0x10);
          uVar5 = *(uint *)(iVar8 + 0x10);
          uVar10 = uVar5;
          if (uVar9 <= uVar5) {
            uVar10 = uVar9;
          }
          uVar10 = FUN_00414bd0(uVar10);
          if (uVar10 == 0) {
            if (uVar5 < uVar9) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = (uint)(uVar5 != uVar9);
            }
          }
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_44[0]);
          }
          local_8 = 0xffffffff;
          local_30 = 0xf;
          local_34 = 0;
          local_44[0] = local_44[0] & 0xffffff00;
          if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_60[0]);
          }
          if (-1 < (int)uVar10) {
            piVar4 = *(int **)(*(int *)((int)local_14 + 0xc) + 0x16c);
            iVar7 = (**(code **)(**(int **)(*(int *)((int)local_20 + 0xc) + 0x16c) + 0x18))
                              (local_98);
            local_8 = 0xe;
            iVar8 = (**(code **)(*piVar4 + 0x18))(local_7c);
            uVar9 = *(uint *)(iVar7 + 0x10);
            uVar5 = *(uint *)(iVar8 + 0x10);
            uVar10 = uVar5;
            if (uVar9 <= uVar5) {
              uVar10 = uVar9;
            }
            uVar10 = FUN_00414bd0(uVar10);
            if (uVar10 == 0) {
              if (uVar5 < uVar9) {
                uVar10 = 0xffffffff;
              }
              else {
                uVar10 = (uint)(uVar5 != uVar9);
              }
            }
            if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_7c[0]);
            }
            local_8 = 0xffffffff;
            local_68 = 0xf;
            local_6c = 0;
            local_7c[0] = local_7c[0] & 0xffffff00;
            if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_98[0]);
            }
            local_84 = 0xf;
            local_88 = 0;
            local_98[0] = local_98[0] & 0xffffff00;
            if ((int)uVar10 < 0) break;
            uVar1 = local_14[-3];
            uVar2 = local_14[-2];
            uVar3 = local_14[-1];
            local_14[-3] = *local_20;
            local_14[-2] = local_20[1];
            local_14[-1] = local_20[2];
            *local_20 = uVar1;
            local_20[1] = uVar2;
            local_20[2] = uVar3;
            local_14 = local_14 + -3;
          }
          local_8 = 0xffffffff;
          local_20 = local_20 + -3;
          local_28 = local_28 + -3;
        } while (param_2 < local_28);
      }
      if (local_28 == param_2) {
        if (local_24 == param_3) {
          param_1[1] = (uint)local_1c;
          *param_1 = (uint)local_14;
          ExceptionList = local_10;
          return;
        }
        if (local_1c != local_24) {
          uVar1 = *local_14;
          uVar2 = local_14[1];
          uVar3 = local_14[2];
          *local_14 = *local_1c;
          local_14[1] = local_1c[1];
          local_14[2] = local_1c[2];
          *local_1c = uVar1;
          local_1c[1] = uVar2;
          local_1c[2] = uVar3;
        }
        puVar11 = local_24;
        puVar12 = local_14;
        local_24 = local_24 + 3;
        local_1c = local_1c + 3;
        local_14 = local_14 + 3;
      }
      else {
        puVar13 = local_28 + -3;
        if (local_24 != param_3) {
          uVar1 = *local_24;
          uVar2 = local_24[1];
          uVar3 = local_24[2];
          *local_24 = *puVar13;
          local_24[1] = local_28[-2];
          local_24[2] = local_28[-1];
          *puVar13 = uVar1;
          local_24 = local_24 + 3;
          local_28[-2] = uVar2;
          local_28[-1] = uVar3;
          local_28 = puVar13;
          goto joined_r0x00739019;
        }
        puVar12 = local_14 + -3;
        if (puVar13 != puVar12) {
          uVar1 = *puVar13;
          uVar2 = local_28[-2];
          uVar3 = local_28[-1];
          *puVar13 = *puVar12;
          local_28[-2] = local_14[-2];
          local_28[-1] = local_14[-1];
          *puVar12 = uVar1;
          local_14[-2] = uVar2;
          local_14[-1] = uVar3;
        }
        puVar11 = local_1c + -3;
        local_28 = puVar13;
        local_1c = puVar11;
        local_14 = puVar12;
      }
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      *puVar12 = *puVar11;
      puVar12[1] = puVar11[1];
      puVar12[2] = puVar11[2];
      *puVar11 = uVar1;
      puVar11[1] = uVar2;
      puVar11[2] = uVar3;
      goto joined_r0x00739019;
    }
    piVar4 = *(int **)(*(int *)((int)local_14 + 0xc) + 0x16c);
    iVar7 = (**(code **)(**(int **)(*(int *)((int)local_24 + 0xc) + 0x16c) + 0x18))(local_60);
    local_8 = 8;
    iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
    uVar9 = *(uint *)(iVar7 + 0x10);
    uVar5 = *(uint *)(iVar8 + 0x10);
    uVar10 = uVar5;
    if (uVar9 <= uVar5) {
      uVar10 = uVar9;
    }
    uVar10 = FUN_00414bd0(uVar10);
    if (uVar10 == 0) {
      if (uVar5 < uVar9) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = (uint)(uVar5 != uVar9);
      }
    }
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    local_8 = 0xffffffff;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60[0]);
    }
    if (-1 < (int)uVar10) {
      piVar4 = *(int **)(*(int *)((int)local_24 + 0xc) + 0x16c);
      iVar7 = (**(code **)(**(int **)(*(int *)((int)local_14 + 0xc) + 0x16c) + 0x18))(local_60);
      local_8 = 10;
      iVar8 = (**(code **)(*piVar4 + 0x18))(local_44);
      uVar9 = *(uint *)(iVar7 + 0x10);
      uVar5 = *(uint *)(iVar8 + 0x10);
      uVar10 = uVar5;
      if (uVar9 <= uVar5) {
        uVar10 = uVar9;
      }
      uVar10 = FUN_00414bd0(uVar10);
      if (uVar10 == 0) {
        if (uVar5 < uVar9) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)(uVar5 != uVar9);
        }
      }
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      local_8 = 0xffffffff;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60[0]);
      }
      if ((int)uVar10 < 0) goto LAB_0073920f;
      uVar1 = *local_1c;
      uVar2 = local_1c[1];
      uVar3 = local_1c[2];
      *local_1c = *local_24;
      local_1c[1] = local_24[1];
      local_1c[2] = local_24[2];
      *local_24 = uVar1;
      local_24[1] = uVar2;
      local_24[2] = uVar3;
      local_1c = local_1c + 3;
    }
    local_8 = 0xffffffff;
    local_30 = 0xf;
    local_34 = 0;
    local_24 = local_24 + 3;
  } while( true );
}

