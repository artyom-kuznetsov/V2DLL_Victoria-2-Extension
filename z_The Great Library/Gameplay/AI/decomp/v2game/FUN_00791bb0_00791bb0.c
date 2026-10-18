// FUN_00791bb0 @ 00791bb0 body=[[00791bb0, 00791c1b] [00791c1f, 00791cd8] [00791cdc, 00791d4a] [00791d4e, 00791dd8] [00791de0, 00791edb] [00791edf, 00791fa9] [00791fad, 00791fd1] [00791fd5, 0079206a] [00792073, 007921e1] [007921e5, 00792299] [0079229d, 007922c1] [007922c5, 00792358] [0079235c, 00792389] [0079238d, 00792408] [0079240c, 0079241e]]


void FUN_00791bb0(char *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char local_d0 [4];
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbb7cc;
  local_10 = ExceptionList;
  iVar8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  (**(code **)(*piVar4 + 0x7c))();
  iVar7 = 0;
  if ((*(int *)(*(int *)(param_1 + 8) + 0x74) != 0) && (cVar3 = FUN_0059c160(), cVar3 != '\0')) {
    iVar7 = 1;
  }
  if (*(int *)(*(int *)(param_1 + 8) + 0x70) != 0) {
    iVar7 = iVar7 + 100;
  }
  if ((*param_1 != '\0') || (*(int *)(param_1 + 0xc) != iVar7)) {
    FUN_00793290();
  }
  piVar4 = *(int **)(DAT_012588e8 + 0xb24);
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  piVar5 = (int *)(**(code **)(*piVar4 + 0x34))();
  local_68 = (**(code **)(*piVar5 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  FUN_00409350();
  local_8 = 2;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
  local_64 = (**(code **)(*piVar4 + 0x48))();
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_8 = 3;
  FUN_0043cb20();
  if (DAT_0125fdd8 == 0) {
    iVar7 = FUN_00aae9af();
    local_8._0_1_ = 4;
    if (iVar7 != 0) {
      FUN_008b0060();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_005c2810();
  }
  iVar7 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
  if (0 < iVar7) {
    do {
      iVar1 = *(int *)(param_1 + 8);
      local_5c = *(undefined4 *)(iVar1 + 0xc0);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(iVar1 + 0xc4) * 4) + 0xbcc) + 0x310) +
                      iVar8 * 4);
      if (*(char *)(iVar2 + 0x39) != '\0') {
        local_5c = *(undefined4 *)(iVar1 + 0xc0);
        if ((2 < *(int *)(iVar2 + 0x24)) &&
           (*(char *)(*(int *)(iVar2 + 0x24) +
                     *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(iVar1 + 0xc4) * 4) + 0xbcc) + 0x2dc)) !=
            '\0')) {
          *(undefined4 *)(local_78 + *(int *)(iVar2 + 0x34) * 4) = 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  iVar8 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) & 0xfffffffcU)) {
    do {
      cVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x3c))();
      if (cVar3 == '\0') {
        if (iVar8 < 3) {
          piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x38);
          local_60 = 0;
          while (piVar4 != (int *)0x0) {
            iVar7 = *piVar4;
            piVar4 = (int *)piVar4[2];
            if (*(int *)(*(int *)(iVar7 + 0x38) + 0x34) == iVar8) {
              local_60 = local_60 + 1;
            }
          }
          local_18 = local_60;
          FUN_00401000();
          local_58 = (int *)FUN_00b31c00();
          piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x38);
          local_38 = (int)local_58;
          while (piVar4 != (int *)0x0) {
            iVar7 = *piVar4;
            piVar4 = (int *)piVar4[2];
            if (*(int *)(*(int *)(iVar7 + 0x38) + 0x34) == iVar8) {
              local_38 = local_38 + *(int *)(iVar7 + 0x3c);
            }
          }
          bVar9 = *(int *)(local_78 + iVar8 * 4) != 0;
          if (iVar8 == 2) {
            piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x38);
            local_60 = 0;
            while (piVar4 != (int *)0x0) {
              iVar7 = *piVar4;
              piVar4 = (int *)piVar4[2];
              if (*(int *)(*(int *)(iVar7 + 0x38) + 0x34) == 3) {
                local_60 = local_60 + 1;
              }
            }
            local_60 = local_60 + local_18;
            piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x38);
            iVar7 = (int)local_58;
            while (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              piVar4 = (int *)piVar4[2];
              if (*(int *)(*(int *)(iVar1 + 0x38) + 0x34) == 3) {
                iVar7 = iVar7 + *(int *)(iVar1 + 0x3c);
              }
            }
            local_38 = local_38 + iVar7;
            if ((!bVar9) && (*(int *)(local_78 + 0xc) != 0)) {
              bVar9 = true;
            }
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 10;
          piVar4 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x44))();
          (**(code **)(*piVar4 + 0x48))();
          local_8._0_1_ = 3;
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          FUN_00409350();
          local_58 = *(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4);
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          local_8._0_1_ = 0xc;
          pcVar6 = __itoa(local_60,local_d0,10);
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          FUN_00409350();
          local_8._0_1_ = 0xd;
          (**(code **)(*local_58 + 0x3c))();
          FUN_00408ed0(local_34,0);
          FUN_00a5ecc0(local_34);
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 3;
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          FUN_00409350("unit_strength");
          local_8._0_1_ = 0xe;
          piVar4 = *(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4);
          local_58 = (int *)&stack0xffffff04;
          local_18 = FUN_005c0800(local_cc);
          local_8._0_1_ = 0xf;
          (**(code **)(*piVar4 + 0x3c))();
          FUN_00408ed0(local_18,0,0xffffffff);
          FUN_00a5ecc0(local_18,0);
          if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_cc[0]);
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          local_b8 = 0xf;
          local_bc = 0;
          local_cc[0] = local_cc[0] & 0xffffff00;
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_54[0]);
          }
          local_58 = *(int **)(local_64 + 0x68);
          (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0xa8))
                    (*(int *)(local_68 + 100) + *(int *)(local_64 + 100) * iVar8,
                     *(undefined4 *)(local_68 + 0x68));
          (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x18) + 0x34))();
          if ((!bVar9) && (local_60 == 0)) goto LAB_007923d6;
        }
        else {
          (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x18) + 0x38))();
        }
      }
      else if (iVar8 < 4) {
LAB_007923d6:
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x18) + 0x38))();
      }
      else {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 5;
        piVar4 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x44))();
        (**(code **)(*piVar4 + 0x48))();
        local_8._0_1_ = 3;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350();
        piVar4 = *(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4);
        piVar5 = *(int **)(*(int *)(param_1 + 8) + 0x38);
        iVar7 = 0;
        while (piVar5 != (int *)0x0) {
          iVar1 = *piVar5;
          piVar5 = (int *)piVar5[2];
          if (*(int *)(*(int *)(iVar1 + 0x38) + 0x34) == iVar8) {
            iVar7 = iVar7 + 1;
          }
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_8._0_1_ = 7;
        pcVar6 = __itoa(iVar7,local_d0,10);
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        FUN_00409350();
        local_8._0_1_ = 8;
        (**(code **)(*piVar4 + 0x3c))();
        FUN_00408ed0(local_34,0);
        FUN_00a5ecc0(local_34);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 3;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = *(int **)(local_64 + 0x68);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0xa8))
                  (*(int *)(local_68 + 100) + (iVar8 + -4) * *(int *)(local_64 + 100));
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x18) + 0x34))();
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350("unit_strength",0xd);
        local_8._0_1_ = 9;
        piVar4 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar8 * 4) + 0x3c))
                                  (local_54);
        (**(code **)(*piVar4 + 0x38))();
        local_8 = CONCAT31(local_8._1_3_,3);
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2);
  }
  *param_1 = '\0';
  if (local_78 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

