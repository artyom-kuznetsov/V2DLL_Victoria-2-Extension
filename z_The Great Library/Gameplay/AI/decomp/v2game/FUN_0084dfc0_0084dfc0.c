// FUN_0084dfc0 @ 0084dfc0  (requested 0084DFC0, first bytes: 55 8B EC 6A FF 68 E8 FB)


void FUN_0084dfc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  float fVar12;
  int *local_70;
  undefined4 local_6c;
  int local_68;
  undefined1 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  float local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int *local_38;
  float local_34;
  float local_30;
  int *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_20;
  int *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4fbe8;
  local_10 = ExceptionList;
  local_70 = (int *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0084bd60(param_1,&local_70,0xffffffff);
  local_60 = *(undefined4 *)(param_1 + 0x34);
  puVar9 = local_28;
  local_2c = local_70;
  if ((local_68 < 1) &&
     (iVar7 = *(int *)(DAT_012587e4 + 4), local_2c = local_70,
     0 < *(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x38) * 4) + 0x4ac))) {
    local_60 = *(undefined4 *)(param_1 + 0x34);
    iVar10 = *(int *)(iVar7 + *(int *)(param_1 + 0x38) * 4);
    local_2c = local_70;
    if (*(char *)(iVar10 + 0x67c) == '\0') {
      local_3c = **(int **)(iVar10 + 0x4a4);
      local_60 = *(undefined4 *)(local_3c + 8);
      piVar1 = *(int **)(*(int *)(iVar7 + *(int *)(local_3c + 0xc) * 4) + 0xa08);
      while (puVar9 = local_28, local_1c = piVar1, local_2c = local_70, piVar1 != (int *)0x0) {
        local_1c = (int *)piVar1[2];
        local_2c = (int *)*piVar1;
        puVar9 = *(undefined4 **)((int)local_2c + 0x14);
joined_r0x0084e086:
        if (puVar9 != (undefined4 *)0x0) {
          local_20 = (undefined4 *)puVar9[2];
          piVar1 = (int *)*puVar9;
          if (*(int *)(*piVar1 + 0xc) == 0) {
            local_60 = 0x2d2d2d;
            local_58 = 0x2d2d2d;
            iVar7 = 0;
          }
          else {
            iVar7 = **(int **)(*piVar1 + 4);
            iVar10 = *(int *)(iVar7 + 0x110);
            if ((iVar10 == 0) ||
               (iVar10 = *(int *)(iVar10 + 0x10),
               (int)(*(int *)(iVar10 + 0x38) - *(int *)(iVar10 + 0x34) & 0xfffffff8U) < 1)) {
              puVar9 = (undefined4 *)(iVar7 + 0x130);
            }
            else {
              puVar9 = *(undefined4 **)(iVar10 + 0x34);
            }
            local_58 = *puVar9;
            iVar7 = puVar9[1];
          }
          puVar9 = local_20;
          if (iVar7 == *(int *)(param_1 + 0x38)) {
            piVar2 = *(int **)(param_1 + 0x214);
            while (puVar9 = local_20, piVar2 != (int *)0x0) {
              iVar7 = *piVar2;
              piVar2 = (int *)piVar2[2];
              if ((*(int *)(iVar7 + 0xb4) < 1) ||
                 (iVar10 = *(int *)(**(int **)(iVar7 + 0xac) + 0xdc), iVar10 == 0)) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(iVar10 + 0xe8);
              }
              iVar8 = *piVar1;
              if ((iVar10 == iVar8) ||
                 (((*(int *)(iVar7 + 0xe0) != 0 &&
                   (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar7 + 0xe0) * 4) +
                            0xe8) == iVar8)) ||
                  (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar7 + 0xdc) * 4) +
                           0xe8) == iVar8)))) break;
              iVar7 = *(int *)(iVar8 + 0xc) + *(int *)((int)local_2c + 0xc);
              local_58 = *(undefined4 *)(local_3c + 8);
              if ((int *)*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                           *(int *)(local_3c + 0xc) * 4) + 0xbe4) *
                                          4) + 0xe8) == local_2c) {
                iVar7 = iVar7 + 10;
              }
              local_38 = (int *)FUN_00aae9af(0x10);
              if (local_38 == (int *)0x0) {
                local_38 = (int *)0x0;
              }
              else {
                iVar10 = *(int *)(**(int **)(*piVar1 + 4) + 0x58);
                local_38[1] = 0x18d;
                *local_38 = (int)CProvinceValue::vftable;
                local_38[2] = iVar10;
                local_38[3] = iVar7;
              }
              FUN_00853e20(&local_70,&local_38);
            }
          }
          goto joined_r0x0084e086;
        }
        local_20 = (undefined4 *)0x0;
        piVar1 = local_1c;
      }
    }
  }
  do {
    do {
      local_28 = puVar9;
      if (local_2c == (int *)0x0) goto LAB_0084e6f5;
      piVar1 = local_2c + 2;
      local_3c = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(*local_2c + 8) * 4);
      local_28 = *(undefined4 **)(param_1 + 0x214);
      local_38 = (int *)0x0;
      local_34 = 100000.0;
      local_2c = (int *)*piVar1;
      local_24 = local_3c;
      puVar9 = (undefined4 *)0x0;
    } while (local_28 == (undefined4 *)0x0);
    do {
      puVar9 = (undefined4 *)local_28[2];
      local_1c = (int *)*local_28;
      local_28 = puVar9;
      if (((0 < local_1c[0x2d]) &&
          (iVar7 = *(int *)local_1c[0x2b], local_20 = (undefined4 *)iVar7, iVar7 != 0)) &&
         (*(int *)(iVar7 + 0xdc) != 0)) {
        if (local_1c[0x38] < 1) {
LAB_0084e38d:
          if ((float)*(int *)(iVar7 + 0x8c) / 1000.0 <= (float)*(int *)(iVar7 + 0x98) * 0.75 * 3.0)
          {
            if ((*(int *)(local_24 + 0x110) == 0) ||
               (iVar10 = *(int *)(*(int *)(local_24 + 0x110) + 0x10),
               (int)(*(int *)(iVar10 + 0x38) - *(int *)(iVar10 + 0x34) & 0xfffffff8U) < 1)) {
              pcVar11 = (char *)(local_24 + 0x130);
            }
            else {
              pcVar11 = *(char **)(iVar10 + 0x34);
            }
            local_60 = *(undefined4 *)(param_1 + 0x34);
            iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
            if ((*(int *)(pcVar11 + 4) != *(int *)(iVar10 + 0x20)) &&
               (((*(int *)(*(int *)(*(int *)(iVar10 + 0xbe8) + *(int *)(pcVar11 + 4) * 4) + 0x34) !=
                  0 || (((*pcVar11 == 'R' && (pcVar11[1] == 'E')) && (pcVar11[2] == 'B')))) ||
                (((*(char *)(iVar10 + 0x1c) == 'R' && (*(char *)(iVar10 + 0x1d) == 'E')) &&
                 (*(char *)(iVar10 + 0x1e) == 'B')))))) goto LAB_0084e6cd;
          }
          iVar7 = *(int *)(*(int *)(iVar7 + 0xdc) + 0xe8);
          if (iVar7 != *(int *)(local_24 + 0xe8)) {
            for (puVar9 = *(undefined4 **)(*(int *)(local_24 + 0xe8) + 0x14);
                puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[2]) {
              if (*(int *)*puVar9 == iVar7) goto LAB_0084e6cd;
            }
            puVar9 = (undefined4 *)(**(code **)(*local_1c + 0x1a4))();
            piVar1 = (int *)*puVar9;
            iVar7 = 0;
            piVar2 = local_1c;
            while (local_1c = piVar2, piVar1 != (int *)0x0) {
              piVar4 = (int *)*piVar1;
              piVar1 = (int *)piVar1[2];
              cVar6 = (**(code **)(*piVar4 + 0x38))();
              piVar2 = local_1c;
              if (cVar6 != '\0') {
                iVar7 = iVar7 + piVar4[0x26];
              }
            }
            if ((((DAT_00f092fc <= (float)iVar7) && (cVar6 = FUN_0082da90(piVar2), cVar6 == '\0'))
                && ((0 < piVar2[0x2d] && (*(int *)piVar2[0x2b] != 0)))) &&
               (((iVar7 = *(int *)(*(int *)(*(int *)piVar2[0x2b] + 0xdc) + 0xe8), iVar7 == 0 ||
                 (cVar6 = FUN_0048f070(iVar7,1), cVar6 == '\0')) &&
                (iVar7 = FUN_00828e30(), local_5c = iVar7, iVar7 != 0)))) {
              local_40 = 0;
              local_44 = 0;
              local_15 = FUN_00828ab0(iVar7,&local_44,&local_40);
              cVar6 = '\0';
              if ((local_15 != '\0') || (cVar6 = FUN_00828bb0(iVar7), cVar6 != '\0')) {
                FUN_004a0e80(DAT_0125870c,&local_4c);
                local_54 = (float)local_4c / 1000.0;
                if (local_54 < local_34) {
                  if (((local_15 != '\0') && (cVar6 == '\0')) &&
                     ((local_48 = *(undefined4 *)(param_1 + 0x34),
                      *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4)
                               + 0x12d0) == '\0' &&
                      (*(int *)(*(int *)((int)local_20 + 0xdc) + 0xe8) != 0)))) {
                    puVar9 = *(undefined4 **)(*(int *)(iVar7 + 0xe8) + 0x28);
                    fVar12 = 1e+06;
                    local_30 = 1e+06;
                    while (puVar9 != (undefined4 *)0x0) {
                      local_44 = *puVar9;
                      puVar9 = (undefined4 *)puVar9[2];
                      piVar1 = *(int **)(*(int *)(*(int *)((int)local_20 + 0xdc) + 0xe8) + 0x28);
                      while (piVar1 != (int *)0x0) {
                        iVar7 = *piVar1;
                        piVar1 = (int *)piVar1[2];
                        FUN_0049b7f0(&local_50,*(undefined4 *)(iVar7 + 0x58),0);
                        fVar5 = (float)local_50 / 1000.0;
                        fVar12 = local_30;
                        if (fVar5 < local_30) {
                          fVar12 = fVar5;
                          local_30 = fVar5;
                        }
                      }
                    }
                    if (250.0 < fVar12) goto LAB_0084e6cd;
                  }
                  local_3c = local_5c;
                  local_38 = local_1c;
                  local_34 = local_54;
                }
              }
            }
          }
        }
        else {
          iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_1c[0x38] * 4);
          iVar8 = *(int *)(iVar10 + 0x110);
          if ((iVar8 == 0) ||
             (iVar3 = *(int *)(iVar8 + 0x10),
             (int)(*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34) & 0xfffffff8U) < 1)) {
            pcVar11 = (char *)(iVar10 + 0x130);
          }
          else {
            pcVar11 = *(char **)(iVar3 + 0x34);
          }
          local_60 = *(undefined4 *)(param_1 + 0x34);
          iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
          if ((*(int *)(pcVar11 + 4) == *(int *)(iVar3 + 0x20)) ||
             (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(pcVar11 + 4) * 4) + 0x34) == 0
               && (((*pcVar11 != 'R' || (pcVar11[1] != 'E')) || (pcVar11[2] != 'B')))) &&
              (((*(char *)(iVar3 + 0x1c) != 'R' || (*(char *)(iVar3 + 0x1d) != 'E')) ||
               (*(char *)(iVar3 + 0x1e) != 'B')))))) {
            if ((iVar8 == 0) ||
               (iVar8 = *(int *)(iVar8 + 0x10),
               (int)(*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34) & 0xfffffff8U) < 1)) {
              iVar8 = iVar10 + 0x130;
            }
            else {
              iVar8 = *(int *)(iVar8 + 0x34);
            }
            if ((*(int *)(iVar8 + 4) != *(int *)(param_1 + 0x38)) ||
               (cVar6 = FUN_0048f070(*(undefined4 *)(iVar10 + 0xe8),1), cVar6 == '\0'))
            goto LAB_0084e38d;
          }
        }
      }
LAB_0084e6cd:
    } while (local_28 != (undefined4 *)0x0);
    puVar9 = local_28;
  } while (local_38 == (int *)0x0);
  FUN_0082c4d0();
LAB_0084e6f5:
  FUN_008601b0(&local_70);
  if (local_70 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  ExceptionList = local_10;
  return;
}

