// FUN_004a0490 @ 004a0490 body=[[004a0490, 004a07bc] [004a07c0, 004a07c8] [004a07d2, 004a088c] [004a0890, 004a094a] [004a094e, 004a0a54] [004a0a58, 004a0aae] [004a0ab2, 004a0ad5] [004a0ad9, 004a0b0c]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0490(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 ******ppppppuVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined **local_100 [18];
  int *local_b8;
  char local_ac [4];
  undefined4 *****local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  undefined1 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40 [8];
  int *local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b309;
  local_10 = ExceptionList;
  iVar10 = 1;
  if ((_DAT_013f29d4 & 1) == 0) {
    _DAT_013f29d4 = _DAT_013f29d4 | 1;
    DAT_013f29b4 = 1;
    DAT_013f29b8 = 0;
    DAT_013f29bc = 0xffffffff;
    DAT_013f29c0 = 0;
    _DAT_013f29c4 = 0;
    _DAT_013f29c8 = 1;
    _DAT_013f29cc = 0;
    _DAT_013f29d0 = 0xffffffff;
  }
  local_18 = 1;
  ExceptionList = &local_10;
  iVar3 = (**(code **)(*param_1 + 0x24))();
  if (1 < iVar3) {
    do {
      local_58 = (int *)0x0;
      local_54 = (int *)0x0;
      local_50 = 0;
      local_4c = 0;
      local_8 = 0;
      local_64 = *(int *)(param_1[0xaa9] + iVar10 * 4);
      piVar7 = *(int **)(local_64 + 0xa4);
      while ((*(int **)(local_64 + 0xa4) <= piVar7 && (piVar7 < *(int **)(local_64 + 0xa8)))) {
        local_5c = piVar7[1];
        local_b8 = piVar7 + 2;
        local_60 = *piVar7;
        local_20 = &DAT_013f29b4;
        do {
          iVar3 = *local_20 + local_60;
          iVar10 = local_20[1] + local_5c;
          if (iVar3 < 0) {
            iVar3 = iVar3 + param_1[0xaaf];
          }
          piVar7 = local_58;
          if (-1 < iVar10) {
            if (param_1[0xaaf] <= iVar3) {
              iVar3 = iVar3 - param_1[0xaaf];
            }
            if (iVar10 < param_1[0xab0]) {
              iVar12 = param_1[0x84b];
              iVar11 = *(int *)(iVar12 + 4) + -1;
              if (iVar3 <= iVar11) {
                iVar11 = iVar3;
              }
              iVar4 = *(int *)(iVar12 + 8) + -1;
              if (iVar4 < iVar10) {
                iVar10 = iVar4;
              }
              iVar10 = *(int *)(param_1[0xaa9] +
                               (uint)*(ushort *)
                                      (*(int *)(iVar12 + 0x18) * iVar10 +
                                       *(int *)(iVar12 + 0xc) * iVar11 + *(int *)(iVar12 + 0x20)) *
                               4);
              local_1c = iVar3;
              if (((iVar10 != 0) && (local_1c = *(int *)(iVar10 + 0xb4), local_1c != 0)) &&
                 (piVar2 = local_58, local_1c != local_18)) {
                for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
                  if (*piVar2 == local_1c) goto LAB_004a078a;
                }
                iVar10 = *(int *)(param_1[0xaa9] + local_1c * 4);
                iVar3 = (*(int *)(iVar10 + 0xcc) - *(int *)(iVar10 + 200)) / 0x24;
                iVar12 = 0;
                if (0 < iVar3) {
                  piVar7 = (int *)(*(int *)(iVar10 + 200) + 4);
                  do {
                    if (*piVar7 == local_18) goto LAB_004a0747;
                    iVar12 = iVar12 + 1;
                    piVar7 = piVar7 + 9;
                  } while (iVar12 < iVar3);
                }
                local_44 = local_18;
                local_40[5] = local_94;
                local_40[6] = local_90;
                iVar3 = (*(int *)(iVar10 + 0xcc) - *(int *)(iVar10 + 200)) / 0x24;
                iVar12 = 0;
                local_48 = 0;
                local_40[0] = 0;
                local_40[1] = 0;
                local_40[2] = 0;
                local_40[3] = 0;
                local_40[4] = 0;
                if (0 < iVar3) {
                  piVar7 = (int *)(*(int *)(iVar10 + 200) + 4);
                  do {
                    if (*piVar7 == local_18) goto LAB_004a06cb;
                    iVar12 = iVar12 + 1;
                    piVar7 = piVar7 + 9;
                  } while (iVar12 < iVar3);
                }
                FUN_004c98f0();
LAB_004a06cb:
                local_44 = local_1c;
                local_40[5] = local_6c;
                local_40[6] = local_68;
                iVar10 = *(int *)(param_1[0xaa9] + local_18 * 4);
                iVar3 = (*(int *)(iVar10 + 0xcc) - *(int *)(iVar10 + 200)) / 0x24;
                iVar12 = 0;
                local_48 = 0;
                local_40[0] = 0;
                local_40[1] = 0;
                local_40[2] = 0;
                local_40[3] = 0;
                local_40[4] = 0;
                if (0 < iVar3) {
                  piVar7 = (int *)(*(int *)(iVar10 + 200) + 4);
                  do {
                    if (*piVar7 == local_1c) goto LAB_004a0747;
                    iVar12 = iVar12 + 1;
                    piVar7 = piVar7 + 9;
                  } while (iVar12 < iVar3);
                }
                FUN_004c98f0();
LAB_004a0747:
                piVar2 = local_54;
                local_54 = (int *)FUN_00aae9af(0x10);
                if (local_54 == (int *)0x0) {
                  local_54 = (int *)0x0;
                }
                else {
                  *local_54 = local_1c;
                  local_54[1] = (int)piVar2;
                  local_54[2] = 0;
                  *(undefined1 *)(local_54 + 3) = 0;
                }
                iVar10 = local_50 + 1;
                bVar13 = local_50 != 0;
                piVar7 = local_54;
                local_50 = iVar10;
                if (bVar13) {
                  piVar2[2] = (int)local_54;
                  piVar7 = local_58;
                }
              }
            }
          }
LAB_004a078a:
          local_58 = piVar7;
          local_20 = local_20 + 2;
          piVar7 = local_b8;
        } while ((int)local_20 < 0x13f29d4);
      }
      local_8 = 0xffffffff;
      if (local_58 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58);
      }
      iVar10 = local_18 + 1;
      local_58 = (int *)0x0;
      local_54 = (int *)0x0;
      local_50 = 0;
      local_18 = iVar10;
      iVar3 = (**(code **)(*param_1 + 0x24))();
    } while (iVar10 < iVar3);
  }
  local_18 = 0;
  iVar10 = (**(code **)(*param_1 + 0x24))();
  if (0 < iVar10) {
    do {
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      local_8 = 1;
      FUN_00448740("Adjacencies for ",0x10);
      local_40[5] = 0xf;
      local_40[4] = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      local_8._0_1_ = 2;
      pcVar5 = __itoa(local_18,local_ac,10);
      pcVar8 = pcVar5;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
      local_8._0_1_ = 3;
      FUN_00448aa0(local_40,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_40[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      FUN_00448740(" ==> ",5);
      iVar10 = *(int *)(param_1[0xaa9] + local_18 * 4);
      piVar7 = (int *)(param_1[0xaa9] + local_18 * 4);
      local_20 = (int *)0x0;
      if ((*(int *)(iVar10 + 0xcc) - *(int *)(iVar10 + 200)) / 0x24 < 1) {
        FUN_00448740(&DAT_00dedc10,4);
      }
      else {
        local_1c = 0;
        do {
          local_40[5] = 0xf;
          local_40[4] = 0;
          local_40[0] = local_40[0] & 0xffffff00;
          local_8._0_1_ = 4;
          pcVar5 = __itoa(*(int *)(*(int *)(*piVar7 + 200) + 4 + local_1c),local_ac,10);
          pcVar8 = pcVar5;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
          local_8._0_1_ = 5;
          FUN_00448aa0(local_40,0,0xffffffff);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (0xf < local_40[5]) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40[0]);
          }
          FUN_00448740(&DAT_00ded950,1);
          local_1c = local_1c + 0x24;
          piVar7 = (int *)(param_1[0xaa9] + local_18 * 4);
          local_20 = (int *)((int)local_20 + 1);
        } while ((int)local_20 < (*(int *)(*piVar7 + 0xcc) - *(int *)(*piVar7 + 200)) / 0x24);
      }
      local_40[5] = 0xf;
      local_40[4] = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("map.cpp",7);
      local_8._0_1_ = 6;
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = (undefined4 *****)((uint)local_a8[0] & 0xffffff00);
      FUN_00408ed0(local_80,0,0xffffffff);
      local_8._0_1_ = 7;
      uVar6 = FUN_004015b0(local_40,0x8bd,0x10000);
      local_8._0_1_ = 10;
      ppppppuVar9 = (undefined4 ******)local_a8[0];
      if (local_94 < 0x10) {
        ppppppuVar9 = local_a8;
      }
      uVar6 = FUN_00418e30(uVar6,ppppppuVar9);
      local_8._0_1_ = 9;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a8[0]);
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = (undefined4 *****)((uint)local_a8[0] & 0xffffff00);
      FUN_00401280(uVar6);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_00987ac0(local_100);
      local_100[0] = std::ios_base::vftable;
      FUN_00aad52d(local_100);
      if (0xf < local_40[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_40[5] = 0xf;
      local_40[4] = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_6c = 0xf;
      iVar3 = local_18 + 1;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      local_18 = iVar3;
      iVar10 = (**(code **)(*param_1 + 0x24))();
    } while (iVar3 < iVar10);
  }
  ExceptionList = local_10;
  return;
}

