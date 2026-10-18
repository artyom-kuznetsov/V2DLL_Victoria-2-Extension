// FUN_00827410 @ 00827410 body=[[00827410, 00827950] [00827954, 00827969] [0082796d, 0082799b] [0082799f, 008279b4] [008279b8, 008279d2]]


void FUN_00827410(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int **local_54;
  int **local_50;
  int **local_4c;
  int **local_44;
  int **local_40;
  int **local_3c;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ead0;
  local_10 = ExceptionList;
  local_44 = (int **)0x0;
  local_40 = (int **)0x0;
  local_3c = (int **)0x0;
  local_54 = (int **)0x0;
  local_50 = (int **)0x0;
  local_4c = (int **)0x0;
  local_8 = 1;
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  ExceptionList = &local_10;
  FUN_004bf300(uVar1);
  FUN_004bf300(uVar1);
  piVar2 = *(int **)(param_2 + 0xec);
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    local_18[0] = piVar3;
    cVar5 = (**(code **)(*piVar3 + 0x3c))();
    if (cVar5 != '\0') {
      local_2c = param_1[0xd];
      iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
      if ((piVar3[0x31] != *(int *)(iVar8 + 0x20)) &&
         (((*(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + piVar3[0x31] * 4) + 0x34) != 0 ||
           ((((char)piVar3[0x30] == 'R' && (*(char *)((int)piVar3 + 0xc1) == 'E')) &&
            (*(char *)((int)piVar3 + 0xc2) == 'B')))) ||
          (((*(char *)(iVar8 + 0x1c) == 'R' && (*(char *)(iVar8 + 0x1d) == 'E')) &&
           (*(char *)(iVar8 + 0x1e) == 'B')))))) {
        if ((local_18 < local_40) && (local_44 <= local_18)) {
          iVar8 = (int)local_18 - (int)local_44;
          if (local_40 == local_3c) {
            FUN_00a513f0();
          }
          if (local_40 != (int **)0x0) {
            *local_40 = local_44[iVar8 >> 2];
          }
          local_40 = local_40 + 1;
        }
        else {
          if (local_40 == local_3c) {
            FUN_00a513f0();
          }
          if (local_40 != (int **)0x0) {
            *local_40 = piVar3;
          }
          local_40 = local_40 + 1;
        }
      }
      local_2c = param_1[0xd];
      if ((piVar3[0x31] == param_1[0xe]) ||
         ((piVar3[0x17] != 0 &&
          (local_2c = param_1[0xd], *(int *)(piVar3[0x17] + 0xc4) == param_1[0xe])))) {
        if ((local_18 < local_50) && (local_54 <= local_18)) {
          iVar8 = (int)local_18 - (int)local_54;
          if (local_50 == local_4c) {
            FUN_00a513f0();
          }
          if (local_50 != (int **)0x0) {
            *local_50 = local_54[iVar8 >> 2];
          }
        }
        else {
          if (local_50 == local_4c) {
            FUN_00a513f0();
          }
          if (local_50 != (int **)0x0) {
            *local_50 = piVar3;
          }
        }
        local_50 = local_50 + 1;
      }
    }
  }
  iVar8 = *(int *)(param_2 + 0x5c);
  local_28 = 0;
  if (0 < (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24) {
    local_24 = 0;
    do {
      local_1c = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                         *(int *)(*(int *)(iVar8 + 200) + 4 + local_24) * 4);
      if ((*(char *)(*(int *)(local_1c + 0x5c) + 0x2a) == '\0') ||
         (((*(int *)(local_1c + 300) != 0 && (*(int *)(local_1c + 0x158) != 0)) &&
          (*(int *)(*(int *)(local_1c + 0x158) + 0x18) == *(int *)(param_2 + 0x58))))) {
        puVar4 = *(undefined4 **)(local_1c + 0xec);
        while (puVar4 != (undefined4 *)0x0) {
          piVar2 = (int *)*puVar4;
          puVar4 = (undefined4 *)puVar4[2];
          local_20 = puVar4;
          local_18[0] = piVar2;
          cVar5 = (**(code **)(*piVar2 + 0x3c))();
          if (cVar5 != '\0') {
            local_34 = param_1[0xd];
            iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
            if ((piVar2[0x31] != *(int *)(iVar8 + 0x20)) &&
               (((*(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + piVar2[0x31] * 4) + 0x34) != 0 ||
                 (((((char)piVar2[0x30] == 'R' && (*(char *)((int)piVar2 + 0xc1) == 'E')) &&
                   (*(char *)((int)piVar2 + 0xc2) == 'B')) ||
                  (((*(char *)(iVar8 + 0x1c) == 'R' && (*(char *)(iVar8 + 0x1d) == 'E')) &&
                   (*(char *)(iVar8 + 0x1e) == 'B')))))) &&
                (((0 < piVar2[0x3b] &&
                  (*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar2[0x39] * 4) == param_2))
                 || (((char)param_3 != '\0' && (*(char *)(*(int *)(local_1c + 0x5c) + 0x2a) != '\0')
                     ))))))) {
              if ((local_18 < local_40) && (local_44 <= local_18)) {
                iVar8 = (int)local_18 - (int)local_44;
                if (local_40 == local_3c) {
                  FUN_00a513f0();
                }
                if (local_40 != (int **)0x0) {
                  *local_40 = local_44[iVar8 >> 2];
                }
              }
              else {
                if (local_40 == local_3c) {
                  FUN_00a513f0();
                }
                if (local_40 != (int **)0x0) {
                  *local_40 = piVar2;
                }
              }
              local_40 = local_40 + 1;
            }
            local_34 = param_1[0xd];
            if ((piVar2[0x31] == param_1[0xe]) ||
               ((puVar4 = local_20, piVar2[0x17] != 0 &&
                (local_34 = param_1[0xd], *(int *)(piVar2[0x17] + 0xc4) == param_1[0xe])))) {
              if ((local_18 < local_50) && (local_54 <= local_18)) {
                iVar8 = (int)local_18 - (int)local_54;
                if (local_50 == local_4c) {
                  uVar6 = (int)local_50 - (int)local_54 >> 2;
                  if (0x3ffffffe < uVar6) {
LAB_00827985:
                    /* WARNING: Subroutine does not return */
                    FUN_00aad3ad("vector<T> too long");
                  }
                  uVar6 = uVar6 + 1;
                  uVar7 = (int)local_4c - (int)local_54 >> 2;
                  if (uVar7 < uVar6) {
                    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 + (uVar7 >> 1);
                    }
                    if (uVar7 < uVar6) {
                      uVar7 = uVar6;
                    }
                    FUN_004bf300(uVar7);
                  }
                }
                if (local_50 != (int **)0x0) {
                  *local_50 = local_54[iVar8 >> 2];
                }
              }
              else {
                if (local_50 == local_4c) {
                  uVar6 = (int)local_50 - (int)local_54 >> 2;
                  if (0x3ffffffe < uVar6) goto LAB_00827985;
                  uVar6 = uVar6 + 1;
                  uVar7 = (int)local_4c - (int)local_54 >> 2;
                  if (uVar7 < uVar6) {
                    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 + (uVar7 >> 1);
                    }
                    if (uVar7 < uVar6) {
                      uVar7 = uVar6;
                    }
                    FUN_004bf300(uVar7);
                  }
                }
                if (local_50 != (int **)0x0) {
                  *local_50 = piVar2;
                }
              }
              local_50 = local_50 + 1;
              puVar4 = local_20;
            }
          }
        }
      }
      iVar8 = *(int *)(param_2 + 0x5c);
      local_24 = local_24 + 0x24;
      local_28 = local_28 + 1;
    } while (local_28 < (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24);
  }
  if (0 < (int)((int)local_40 - (int)local_44 & 0xfffffffcU)) {
    (**(code **)(*param_1 + 0x1d8))(&local_54,param_3,0,1);
    fVar9 = (float10)(**(code **)(*param_1 + 0x1d8))(&local_44,(char)param_3 == '\0',1,0);
    if (0.0 < (float)fVar9) {
      if (local_54 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54);
      }
      local_54 = (int **)0x0;
      local_50 = (int **)0x0;
      local_4c = (int **)0x0;
      if (local_44 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44);
      }
      ExceptionList = local_10;
      return;
    }
  }
  if (local_54 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54);
  }
  local_54 = (int **)0x0;
  local_50 = (int **)0x0;
  local_4c = (int **)0x0;
  if (local_44 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44);
  }
  ExceptionList = local_10;
  return;
}

