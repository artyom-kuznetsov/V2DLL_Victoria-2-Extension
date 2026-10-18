// FUN_009992a0 @ 009992a0 body=[[009992a0, 0099947e] [00999480, 00999919] [00999920, 00999928] [00999932, 00999948] [00999952, 00999973] [00999977, 009999ac]]


void FUN_009992a0(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *in_ECX;
  undefined *puVar11;
  uint uVar12;
  bool bVar13;
  undefined4 *puVar14;
  undefined1 local_c8 [88];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  undefined1 local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  undefined1 local_3c;
  int *local_34;
  undefined4 local_30;
  uint local_28;
  undefined4 local_24;
  undefined **local_20 [2];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41d02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_60 = (**(code **)(*in_ECX + 0x24))();
  if (*(int *)(local_60 + 0x10) == 0) {
    ExceptionList = local_10;
    return;
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0x98))(param_4,"ProjectionMatrix",param_3);
  }
  local_30 = 0;
  local_34 = (int *)FUN_00aae9af(0x2c);
  if (local_34 != (int *)0x0) {
    *local_34 = (int)local_34;
    local_34[1] = (int)local_34;
    local_34[2] = (int)local_34;
    *(undefined1 *)(local_34 + 10) = 1;
    *(undefined1 *)((int)local_34 + 0x29) = 1;
    local_48 = (int *)0x0;
    local_44 = (int *)0x0;
    local_40 = 0;
    local_3c = 0;
    local_58 = (int *)0x0;
    local_54 = (int *)0x0;
    local_50 = 0;
    local_4c = 0;
    local_8 = 2;
    FUN_0099e240();
    iVar8 = FUN_00816010();
    if (local_18 != *(uint *)(iVar8 + 8)) {
      do {
        if (local_20[0] == (undefined **)0x0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = *local_20[0];
        }
        local_28 = local_18 >> 2;
        uVar12 = local_18 & 3;
        uVar9 = local_28;
        if (*(uint *)(puVar11 + 8) <= local_28) {
          uVar9 = local_28 - *(uint *)(puVar11 + 8);
        }
        piVar10 = *(int **)(*(int *)(*(int *)(puVar11 + 4) + uVar9 * 4) + uVar12 * 4);
        local_64 = uVar12;
        cVar7 = (**(code **)(*piVar10 + 0x13c))();
        piVar3 = local_58;
        piVar6 = local_48;
        if (cVar7 != '\0') {
          iVar8 = (**(code **)(*piVar10 + 0x30))();
          if (iVar8 == 0) {
            (**(code **)(**(int **)(param_1 + 100) + 0xb0))
                      (*(int **)(param_1 + 100),0x100,piVar10 + 0x25);
            if (param_4 != (int *)0x0) {
              D3DXMatrixMultiply(local_c8,piVar10 + 0x25,param_2);
              piVar3 = param_4;
              (**(code **)(*param_4 + 0x98))(param_4,"WorldViewMatrix",local_c8);
              (**(code **)(*piVar3 + 0x104))(piVar3);
            }
            (**(code **)(*piVar10 + 0x2c))(param_1,param_5);
            piVar3 = local_58;
            piVar6 = local_48;
          }
          else {
            cVar7 = (**(code **)(*piVar10 + 0x128))();
            piVar5 = local_44;
            if (cVar7 == '\0') {
              cVar7 = (**(code **)(*piVar10 + 0x138))();
              piVar5 = local_54;
              if (cVar7 == '\0') {
                local_5c = (int *)(**(code **)(*piVar10 + 0x30))();
                iVar8 = *local_5c;
                param_3 = (int *)0x0;
                piVar3 = local_58;
                piVar6 = local_48;
                if (0 < (int)(local_5c[1] - iVar8 & 0xfffffffcU)) {
                  do {
                    puVar14 = *(undefined4 **)(iVar8 + (int)param_3 * 4);
                    local_68 = *puVar14;
                    if (local_20[0] == (undefined **)0x0) {
                      puVar11 = (undefined *)0x0;
                    }
                    else {
                      puVar11 = *local_20[0];
                    }
                    uVar9 = local_28;
                    if (*(uint *)(puVar11 + 8) <= local_28) {
                      uVar9 = local_28 - *(uint *)(puVar11 + 8);
                    }
                    uVar1 = puVar14[0x19];
                    uVar2 = *(undefined4 *)
                             (*(int *)(*(int *)(puVar11 + 4) + uVar9 * 4) + uVar12 * 4);
                    local_24 = uVar1;
                    FUN_00a46d30(&local_24);
                    puVar14 = &local_70;
                    local_6c = local_68;
                    local_70 = uVar2;
                    local_24 = uVar1;
                    FUN_00a46c00(&local_24);
                    FUN_00a46b50(puVar14);
                    iVar8 = *local_5c;
                    param_3 = (int *)((int)param_3 + 1);
                    uVar12 = local_64;
                    piVar3 = local_58;
                    piVar6 = local_48;
                  } while ((int)param_3 < local_5c[1] - iVar8 >> 2);
                }
              }
              else {
                if (local_20[0] == (undefined **)0x0) {
                  puVar11 = (undefined *)0x0;
                }
                else {
                  puVar11 = *local_20[0];
                }
                uVar9 = local_28;
                if (*(uint *)(puVar11 + 8) <= local_28) {
                  uVar9 = local_28 - *(uint *)(puVar11 + 8);
                }
                iVar8 = *(int *)(*(int *)(puVar11 + 4) + uVar9 * 4);
                local_54 = (int *)FUN_00aae9af(0x10);
                if (local_54 == (int *)0x0) {
                  local_54 = (int *)0x0;
                }
                else {
                  *local_54 = *(int *)(iVar8 + uVar12 * 4);
                  local_54[1] = (int)piVar5;
                  local_54[2] = 0;
                  *(undefined1 *)(local_54 + 3) = 0;
                }
                iVar8 = local_50 + 1;
                bVar13 = local_50 != 0;
                piVar3 = local_54;
                local_50 = iVar8;
                piVar6 = local_48;
                if (bVar13) {
                  piVar5[2] = (int)local_54;
                  piVar3 = local_58;
                }
              }
            }
            else {
              if (local_20[0] == (undefined **)0x0) {
                puVar11 = (undefined *)0x0;
              }
              else {
                puVar11 = *local_20[0];
              }
              uVar9 = local_28;
              if (*(uint *)(puVar11 + 8) <= local_28) {
                uVar9 = local_28 - *(uint *)(puVar11 + 8);
              }
              iVar8 = *(int *)(*(int *)(puVar11 + 4) + uVar9 * 4);
              local_44 = (int *)FUN_00aae9af(0x10);
              if (local_44 == (int *)0x0) {
                local_44 = (int *)0x0;
              }
              else {
                *local_44 = *(int *)(iVar8 + uVar12 * 4);
                local_44[1] = (int)piVar5;
                local_44[2] = 0;
                *(undefined1 *)(local_44 + 3) = 0;
              }
              iVar8 = local_40 + 1;
              bVar13 = local_40 != 0;
              piVar3 = local_58;
              piVar6 = local_44;
              local_40 = iVar8;
              if (bVar13) {
                piVar5[2] = (int)local_44;
                piVar6 = local_48;
              }
            }
          }
        }
        local_48 = piVar6;
        local_58 = piVar3;
        uVar9 = local_18 + 1;
        local_18 = uVar9;
        iVar8 = FUN_00816010();
      } while (uVar9 != *(uint *)(iVar8 + 8));
    }
    param_3 = (int *)*local_34;
    piVar10 = local_48;
    if (param_3 != local_34) {
      do {
        uVar9 = 0;
        if (param_3[8] != 0) {
          do {
            uVar12 = uVar9;
            FUN_0099e240(uVar9);
            piVar10 = (int *)FUN_00868600(uVar12);
            if ((int *)*piVar10 == (int *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)*piVar10;
            }
            uVar12 = (uint)piVar10[2] >> 1;
            if (*(uint *)(iVar8 + 8) <= uVar12) {
              uVar12 = uVar12 - *(uint *)(iVar8 + 8);
            }
            iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 4) + uVar12 * 4) + (piVar10[2] & 1U) * 8) +
                    0x94;
            (**(code **)(**(int **)(param_1 + 100) + 0xb0))(*(int **)(param_1 + 100),0x100,iVar8);
            if (param_4 != (int *)0x0) {
              D3DXMatrixMultiply(local_c8,iVar8,param_2);
              piVar10 = param_4;
              (**(code **)(*param_4 + 0x98))(param_4,"WorldViewMatrix",local_c8);
              (**(code **)(*piVar10 + 0x104))(piVar10);
            }
            uVar12 = uVar9;
            FUN_0099e240(uVar9);
            piVar10 = (int *)FUN_00868600(uVar12);
            if ((int *)*piVar10 == (int *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)*piVar10;
            }
            uVar12 = (uint)piVar10[2] >> 1;
            if (*(uint *)(iVar8 + 8) <= uVar12) {
              uVar12 = uVar12 - *(uint *)(iVar8 + 8);
            }
            iVar8 = *(int *)(*(int *)(param_1 + 0x6bd48) +
                            *(int *)(*(int *)(*(int *)(iVar8 + 4) + uVar12 * 4) +
                                     (piVar10[2] & 1U) * 8 + 4) * 4);
            piVar10 = *(int **)(iVar8 + 4);
            (**(code **)(*piVar10 + 0xc))(piVar10,*(undefined4 *)(iVar8 + 8));
            uVar9 = uVar9 + 1;
          } while (uVar9 < (uint)param_3[8]);
        }
        if (*(char *)((int)param_3 + 0x29) == '\0') {
          piVar10 = (int *)param_3[2];
          if (*(char *)((int)piVar10 + 0x29) == '\0') {
            cVar7 = *(char *)(*piVar10 + 0x29);
            param_3 = piVar10;
            piVar10 = (int *)*piVar10;
            while (cVar7 == '\0') {
              cVar7 = *(char *)(*piVar10 + 0x29);
              param_3 = piVar10;
              piVar10 = (int *)*piVar10;
            }
          }
          else {
            cVar7 = *(char *)(param_3[1] + 0x29);
            piVar3 = (int *)param_3[1];
            piVar10 = param_3;
            while ((param_3 = piVar3, cVar7 == '\0' && (piVar10 == (int *)param_3[2]))) {
              cVar7 = *(char *)(param_3[1] + 0x29);
              piVar3 = (int *)param_3[1];
              piVar10 = param_3;
            }
          }
        }
        piVar10 = local_48;
      } while (param_3 != local_34);
    }
    while (param_3 = piVar10, piVar10 = local_58, param_3 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*(int *)*param_3 + 0x30))();
      param_5 = 0;
      if (0 < (int)(piVar10[1] - *piVar10 & 0xfffffffcU)) {
        do {
          iVar8 = *param_3;
          (**(code **)(**(int **)(param_1 + 100) + 0xb0))
                    (*(int **)(param_1 + 100),0x100,iVar8 + 0x94);
          if (param_4 != (int *)0x0) {
            D3DXMatrixMultiply(local_c8,iVar8 + 0x94,param_2);
            piVar3 = param_4;
            (**(code **)(*param_4 + 0x98))(param_4,"WorldViewMatrix",local_c8);
            (**(code **)(*piVar3 + 0x104))(piVar3);
          }
          iVar4 = param_5;
          iVar8 = *(int *)(*piVar10 + param_5 * 4);
          piVar3 = *(int **)(iVar8 + 4);
          (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
          param_5 = iVar4 + 1;
        } while (param_5 < piVar10[1] - *piVar10 >> 2);
      }
      piVar10 = (int *)param_3[2];
    }
    while (param_3 = piVar10, param_3 != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*(int *)*param_3 + 0x30))();
      param_5 = 0;
      if (0 < (int)(piVar10[1] - *piVar10 & 0xfffffffcU)) {
        do {
          iVar8 = *param_3;
          (**(code **)(**(int **)(param_1 + 100) + 0xb0))
                    (*(int **)(param_1 + 100),0x100,iVar8 + 0x94);
          if (param_4 != (int *)0x0) {
            D3DXMatrixMultiply(local_c8,iVar8 + 0x94,param_2);
            piVar3 = param_4;
            (**(code **)(*param_4 + 0x98))(param_4,"WorldViewMatrix",local_c8);
            (**(code **)(*piVar3 + 0x104))(piVar3);
          }
          iVar4 = param_5;
          iVar8 = *(int *)(*piVar10 + param_5 * 4);
          piVar3 = *(int **)(iVar8 + 4);
          (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
          param_5 = iVar4 + 1;
        } while (param_5 < piVar10[1] - *piVar10 >> 2);
      }
      piVar10 = (int *)param_3[2];
    }
    if (local_58 == (int *)0x0) {
      if (local_48 == (int *)0x0) {
        local_8 = 3;
        FUN_00a46f10(*local_34,local_34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  param_3 = (int *)0x0;
  std::exception::exception((exception *)local_20,(char **)&param_3);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

