// FUN_00823e70 @ 00823e70 body=[[00823e70, 00823efc] [00823f00, 00824349] [00824350, 00824548] [00824550, 00824640]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823e70(int *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int *local_48;
  int *local_44;
  int local_40;
  char local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  float local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ae70;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_4 * 4);
  local_30 = param_1[0xd];
  iVar6 = *(int *)((int)param_3 + 0xe8);
  ExceptionList = &local_10;
  iVar5 = FUN_0050e450();
  if (iVar6 != iVar5) {
    local_30 = param_1[0xd];
    iVar6 = *(int *)(param_2 + 0xe8);
    iVar5 = FUN_0050e450();
    if (iVar6 != iVar5) {
LAB_00824263:
      local_28 = *(int **)(param_2 + 0xec);
      if (local_28 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      do {
        piVar7 = (int *)*local_28;
        local_28 = (int *)local_28[2];
        cVar4 = (**(code **)(*piVar7 + 0x3c))();
        if (cVar4 == '\0') {
          local_24 = param_1[0xd];
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
          if ((((piVar7[0x31] != *(int *)(iVar6 + 0x20)) &&
               (((*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + piVar7[0x31] * 4) + 0x34) != 0 ||
                 ((((char)piVar7[0x30] == 'R' && (*(char *)((int)piVar7 + 0xc1) == 'E')) &&
                  (*(char *)((int)piVar7 + 0xc2) == 'B')))) ||
                (((*(char *)(iVar6 + 0x1c) == 'R' && (*(char *)(iVar6 + 0x1d) == 'E')) &&
                 (*(char *)(iVar6 + 0x1e) == 'B')))))) || (piVar7[0x31] == param_1[0xe])) &&
             ((0 < piVar7[0x3b] &&
              ((float)*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar7[0x39] * 4) ==
               param_3)))) {
            local_14 = (undefined4 *)param_1[0x1a];
            param_2 = 0;
            local_1c = 1e+06;
            if (local_14 != (undefined4 *)0x0) {
              do {
                piVar7 = (int *)*local_14;
                local_14 = (undefined4 *)local_14[2];
                iVar6 = (**(code **)(*piVar7 + 0x30))();
                if (*(int *)(iVar6 + 0x1ac) < 1) {
                  if (*(int *)(iVar6 + 0xa0) == 0) {
                    if (0 < *(int *)(iVar6 + 0xec)) {
                      iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2238) +
                                      **(int **)(iVar6 + 0xe8) * 4);
                      goto LAB_008243ad;
                    }
                  }
                  else {
                    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xa0) * 4);
LAB_008243ad:
                    if ((iVar5 != 0) && (*(char *)(*(int *)(iVar5 + 0x5c) + 0x2a) == '\0')) {
                      if (iVar5 == iVar1) {
                        piVar7 = (int *)param_1[0x2a];
                        while( true ) {
                          if (piVar7 == (int *)0x0) goto LAB_00823fc2;
                          if (*piVar7 == param_4) break;
                          piVar7 = (int *)piVar7[2];
                        }
                      }
                      goto LAB_00824449;
                    }
                  }
                  FUN_0049b7f0(&local_2c,*(undefined4 *)(iVar1 + 0x58),0);
                  fVar3 = (float)(int)local_2c / 1000.0;
                  if ((fVar3 < local_1c) && (fVar3 < 120.0)) {
                    param_2 = iVar6;
                    local_1c = fVar3;
                  }
                }
LAB_00824449:
              } while (local_14 != (undefined4 *)0x0);
              if ((param_2 != 0) && (cVar4 = FUN_0048fee0(), cVar4 == '\0')) {
                local_48 = (int *)0x0;
                local_44 = (int *)0x0;
                local_40 = 0;
                local_8 = 1;
                local_3c = cVar4;
                local_44 = (int *)FUN_00aae9af(0x10);
                if (local_44 == (int *)0x0) {
                  local_44 = (int *)0x0;
                }
                else {
                  *local_44 = param_2;
                  local_44[1] = 0;
                  local_44[2] = 0;
                  *(undefined1 *)(local_44 + 3) = 0;
                }
                piVar7 = local_44;
                if (local_40 != 0) {
                  _DAT_00000008 = local_44;
                  piVar7 = local_48;
                }
                local_48 = piVar7;
                local_40 = local_40 + 1;
                FUN_00549920();
                fVar9 = (float10)(**(code **)(*param_1 + 0x1dc))(&local_48,0,0,1);
                local_14 = (undefined4 *)(float)fVar9;
                fVar9 = (float10)(**(code **)(*param_1 + 0x1dc))(iVar1 + 0xec,0,0,1);
                local_14 = (undefined4 *)(float)(fVar9 + (float10)(float)local_14);
                fVar9 = (float10)(**(code **)(*param_1 + 0x1dc))(iVar1 + 0xec,0,1,0);
                local_18 = (undefined4 *)(float)fVar9;
                iVar6 = (*(int *)(*(int *)(iVar1 + 0x5c) + 0xcc) -
                        *(int *)(*(int *)(iVar1 + 0x5c) + 200)) / 0x24;
                if (0 < iVar6) {
                  iVar5 = 0;
                  local_20 = iVar6;
                  do {
                    fVar9 = (float10)(**(code **)(*param_1 + 0x1dc))
                                               (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                                        *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) +
                                                                         200) + 4 + iVar5) * 4) +
                                                0xec,0,1,0);
                    iVar5 = iVar5 + 0x24;
                    local_20 = local_20 + -1;
                    local_18 = (undefined4 *)(float)(fVar9 + (float10)(float)local_18);
                  } while (local_20 != 0);
                }
                if ((float)local_18 <= (float)local_14) {
                  iVar6 = param_1[0x2b];
                  piVar7 = (int *)FUN_00aae9af(0x10);
                  if (piVar7 == (int *)0x0) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    *piVar7 = param_4;
                    piVar7[1] = iVar6;
                    piVar7[2] = 0;
                    *(undefined1 *)(piVar7 + 3) = 0;
                  }
                  iVar5 = param_1[0x2c];
                  param_1[0x2b] = (int)piVar7;
                  param_1[0x2c] = iVar5 + 1;
                  if (iVar5 == 0) {
                    param_1[0x2a] = (int)piVar7;
                  }
                  else {
                    *(int **)(iVar6 + 8) = piVar7;
                  }
                  if (*(int *)(iVar1 + 0x58) != 0) {
                    FUN_008255a0(param_1,iVar1,1);
                  }
                  goto LAB_00824629;
                }
                local_8 = 0xffffffff;
                FUN_009a63f0();
              }
            }
          }
        }
        if (local_28 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
      } while( true );
    }
  }
  for (piVar8 = (int *)param_1[0x2a]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
    if (*piVar8 == param_4) goto LAB_00824263;
  }
  local_18 = (undefined4 *)param_1[0x1a];
  param_2 = 0;
  param_3 = 1e+06;
  if (local_18 != (undefined4 *)0x0) {
    do {
      piVar8 = (int *)*local_18;
      local_18 = (undefined4 *)local_18[2];
      iVar6 = (**(code **)(*piVar8 + 0x30))();
      if (*(int *)(iVar6 + 0x1ac) < 1) {
        if (*(int *)(iVar6 + 0xa0) == 0) {
          if (0 < *(int *)(iVar6 + 0xec)) {
            iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar6 + 0xe8) * 4);
            goto LAB_00823f8a;
          }
        }
        else {
          iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xa0) * 4);
LAB_00823f8a:
          if ((iVar5 != 0) && (*(char *)(*(int *)(iVar5 + 0x5c) + 0x2a) == '\0')) {
            if (iVar5 == iVar1) {
              piVar8 = (int *)param_1[0x2a];
              do {
                if (piVar8 == (int *)0x0) {
LAB_00823fc2:
                  iVar1 = param_1[0x2b];
                  piVar7 = (int *)FUN_00aae9af(0x10);
                  if (piVar7 == (int *)0x0) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    *piVar7 = param_4;
                    piVar7[1] = iVar1;
                    piVar7[2] = 0;
                    *(undefined1 *)(piVar7 + 3) = 0;
                  }
                  param_1[0x2b] = (int)piVar7;
                  iVar6 = param_1[0x2c];
                  param_1[0x2c] = iVar6 + 1;
                  if (iVar6 != 0) {
                    *(int **)(iVar1 + 8) = piVar7;
                    ExceptionList = local_10;
                    return;
                  }
                  param_1[0x2a] = (int)piVar7;
                  ExceptionList = local_10;
                  return;
                }
                if (*piVar8 == param_4) break;
                piVar8 = (int *)piVar8[2];
              } while( true );
            }
            goto LAB_00824054;
          }
        }
        FUN_0049b7f0(&local_28,*(undefined4 *)(iVar1 + 0x58),0);
        fVar3 = (float)(int)local_28 / 1000.0;
        if ((fVar3 < param_3) && (fVar3 < 120.0)) {
          param_2 = iVar6;
          param_3 = fVar3;
        }
      }
LAB_00824054:
    } while (local_18 != (undefined4 *)0x0);
    if (param_2 != 0) {
      for (piVar8 = (int *)param_1[0x2a]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*piVar8 == param_4) {
          ExceptionList = local_10;
          return;
        }
      }
      local_38 = (int *)0x0;
      local_34 = (int *)0x0;
      local_30 = 0;
      local_2c = local_2c & 0xffffff00;
      local_8 = 0;
      local_34 = (int *)FUN_00aae9af(0x10);
      if (local_34 == (int *)0x0) {
        local_34 = (int *)0x0;
      }
      else {
        *local_34 = param_2;
        local_34[1] = 0;
        local_34[2] = 0;
        *(undefined1 *)(local_34 + 3) = 0;
      }
      piVar8 = local_34;
      if (local_30 != 0) {
        _DAT_00000008 = local_34;
        piVar8 = local_38;
      }
      local_38 = piVar8;
      local_30 = local_30 + 1;
      FUN_00549920();
      fVar9 = (float10)(**(code **)(*param_1 + 0x1dc))(&local_38,0,0,1);
      fVar10 = (float10)(**(code **)(*param_1 + 0x1dc))(iVar1 + 0xec,0,0,1);
      fVar11 = (float10)(**(code **)(*param_1 + 0x1dc))(iVar1 + 0xec,0,1,0);
      param_1 = (int *)(float)fVar11;
      puVar2 = (undefined4 *)
               ((*(int *)(*(int *)(iVar1 + 0x5c) + 0xcc) - *(int *)(*(int *)(iVar1 + 0x5c) + 200)) /
               0x24);
      if (0 < (int)puVar2) {
        iVar6 = 0;
        local_18 = puVar2;
        do {
          fVar11 = (float10)(**(code **)(*piVar7 + 0x1dc))
                                      (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                               *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 200) + 4 +
                                                       iVar6) * 4) + 0xec,0,1,0);
          iVar6 = iVar6 + 0x24;
          local_18 = (undefined4 *)((int)local_18 + -1);
          param_1 = (int *)(float)(fVar11 + (float10)(float)param_1);
        } while (local_18 != (undefined4 *)0x0);
      }
      if ((float)param_1 <= (float)(fVar10 + (float10)(float)fVar9)) {
        iVar6 = piVar7[0x2b];
        piVar8 = (int *)FUN_00aae9af(0x10);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = param_4;
          piVar8[1] = iVar6;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar5 = piVar7[0x2c];
        piVar7[0x2b] = (int)piVar8;
        piVar7[0x2c] = iVar5 + 1;
        if (iVar5 == 0) {
          piVar7[0x2a] = (int)piVar8;
        }
        else {
          *(int **)(iVar6 + 8) = piVar8;
        }
        if (*(int *)(iVar1 + 0x58) != 0) {
          FUN_008255a0(piVar7,iVar1,1);
        }
      }
LAB_00824629:
      FUN_009a63f0();
    }
  }
  ExceptionList = local_10;
  return;
}

