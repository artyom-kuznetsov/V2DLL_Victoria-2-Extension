// FUN_009862e0 @ 009862e0 body=[[009862e0, 00986817] [00986820, 00986953] [00986957, 00986a68]]


void FUN_009862e0(uint param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  float fVar11;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  undefined1 local_268 [64];
  int local_228 [16];
  int local_1e8 [16];
  undefined4 local_1a8 [16];
  undefined1 local_168 [64];
  undefined4 local_128 [16];
  undefined1 local_e8 [64];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  double local_88;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a558;
  local_10 = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x6bc88);
  if (iVar6 != 0) {
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 0x1c) + 0x16c))();
    puVar10 = local_128;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 0x1c) + 0x174))();
    puVar10 = local_1a8;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar10 = puVar10 + 1;
    }
    D3DXMatrixMultiply(local_e8,local_128,local_1a8);
    if (DAT_00f07858 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + DAT_00f07858 * 4);
    }
    local_4c = (**(code **)(*piVar8 + 0x24))(piVar8,0,"WorldViewProjectionMatrix");
    uVar3 = (**(code **)(*piVar8 + 0x24))(piVar8,0,"CameraPosition");
    local_54 = (**(code **)(*piVar8 + 0x24))(piVar8,0,"ArrowColorAlpha");
    local_34 = (**(code **)(*piVar8 + 0x24))(piVar8,0,"IconTransparency");
    local_60 = (**(code **)(*piVar8 + 0x24))(piVar8,0,"IconRotation");
    local_50 = (**(code **)(*piVar8 + 0x24))(piVar8,0,"IconPosition");
    (**(code **)(*param_2 + 0x15c))(param_2,DAT_01258b4c);
    (**(code **)(*piVar8 + 0x80))(piVar8,uVar3,param_3,2);
    (**(code **)(*piVar8 + 0xe8))(piVar8,"MapInfo");
    (**(code **)(*piVar8 + 0xfc))(piVar8,&local_1c,0);
    local_28 = 0xffffffff;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar13 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    local_88 = (double)fVar13;
    local_44 = 0;
    iVar6 = DAT_0131c530 - DAT_0131c52c >> 4;
    local_2c = iVar6;
    if (0 < iVar6) {
      local_3c = 0;
      local_30 = 0;
      do {
        piVar9 = (int *)(local_30 + DAT_0131c52c);
        local_24 = piVar9;
        if ((piVar9[1] - *piVar9 & 0xfffffffcU) != 0) {
          if (local_44 < (DAT_0131c9e8 - DAT_0131c9e4) / 0x1c) {
            local_98 = *(undefined8 *)(local_3c + 8 + DAT_0131c9e4);
            puVar2 = (undefined4 *)(local_3c + 0x10 + DAT_0131c9e4);
            local_90 = *puVar2;
            uStack_8c = puVar2[1];
            (**(code **)(*piVar8 + 0x80))(piVar8,local_54,&local_98);
          }
          else {
            local_a8 = DAT_00f0ecd8;
            local_a0 = (undefined4)DAT_00f0ece0;
            uStack_9c = DAT_00f0ece0._4_4_;
            (**(code **)(*piVar8 + 0x80))(piVar8,local_54,&local_a8,4);
          }
          local_40 = 0;
          iVar6 = local_2c;
          if (local_1c != 0) {
            do {
              (**(code **)(*piVar8 + 0x100))(piVar8,local_40);
              fVar11 = (float)(piVar9[1] - *piVar9 >> 2);
              local_20 = 0;
              local_48 = fVar11;
              if (0 < (int)fVar11) {
                do {
                  piVar9 = *(int **)(*piVar9 + local_20 * 4);
                  local_38 = piVar9;
                  if ((piVar9[0x50] != 0) &&
                     (cVar1 = (**(code **)(*piVar9 + 0x3c))(), cVar1 != '\0')) {
                    fVar11 = DAT_00f092fc;
                    if ((char)piVar9[0x71] != '\0') {
                      fVar13 = (float10)FUN_00b352e0();
                      fVar14 = (float10)0.5;
                      local_18 = (float)((float10)(float)((fVar13 + (float10)1.0) * fVar14) * fVar14
                                        + fVar14);
                      fVar11 = local_18;
                    }
                    (**(code **)(*piVar8 + 0x78))(piVar8,local_34,fVar11);
                    (**(code **)(*piVar8 + 0x78))(piVar8,local_60,piVar9[0x72]);
                    local_5c = piVar9[0x5b];
                    local_58 = piVar9[0x5c];
                    (**(code **)(*piVar8 + 0x80))(piVar8,local_50,&local_5c,2);
                    uVar4 = *(uint *)(piVar9[0x4f] + 0x90);
                    if (local_28 != uVar4) {
                      local_28 = uVar4;
                      if (uVar4 == 0xffffffff) {
                        (**(code **)(*piVar8 + 0xd0))(piVar8,&DAT_00e0bce4,0);
                      }
                      else {
                        if (uVar4 < 10000) {
                          uVar3 = *(undefined4 *)(uVar4 * 0x2c + 0x15c + param_1);
                        }
                        else {
                          uVar3 = 0;
                        }
                        (**(code **)(*piVar8 + 0xd0))(piVar8,&DAT_00e0bce4,uVar3);
                      }
                    }
                    piVar9 = piVar9 + 0x25;
                    piVar12 = local_228;
                    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *piVar12 = *piVar9;
                      piVar9 = piVar9 + 1;
                      piVar12 = piVar12 + 1;
                    }
                    D3DXMatrixMultiply(local_168,local_228,local_e8);
                    (**(code **)(*piVar8 + 0x98))(piVar8,local_4c,local_168);
                    (**(code **)(*param_2 + 400))(param_2,0,local_38[0x50],0,0x10);
                    (**(code **)(*piVar8 + 0x104))(piVar8);
                    (**(code **)(*param_2 + 0x144))(param_2,5,0,2);
                    fVar11 = local_48;
                  }
                  local_20 = local_20 + 1;
                  piVar9 = local_24;
                } while (local_20 < (int)fVar11);
              }
              (**(code **)(*piVar8 + 0x108))(piVar8);
              local_40 = local_40 + 1;
              iVar6 = local_2c;
            } while (local_40 < local_1c);
          }
        }
        local_3c = local_3c + 0x1c;
        local_44 = local_44 + 1;
        local_30 = local_30 + 0x10;
      } while (local_44 < iVar6);
    }
    (**(code **)(*piVar8 + 0x10c))(piVar8);
    (**(code **)(*param_2 + 0x15c))(param_2,DAT_01258b50);
    (**(code **)(*piVar8 + 0xe8))(piVar8,"MapInfoText");
    (**(code **)(*piVar8 + 0xfc))(piVar8,&local_1c,0);
    local_30 = 0;
    uVar4 = DAT_0131c530 - DAT_0131c52c >> 4;
    if (0 < (int)uVar4) {
      local_20 = 0;
      uVar7 = local_1c;
      local_28 = uVar4;
      do {
        piVar9 = (int *)(local_20 + DAT_0131c52c);
        local_24 = piVar9;
        if (((piVar9[1] - *piVar9 & 0xfffffffcU) != 0) && (param_1 = 0, uVar7 != 0)) {
          do {
            (**(code **)(*piVar8 + 0x100))(piVar8,param_1);
            fVar11 = (float)(piVar9[1] - *piVar9 >> 2);
            local_2c = 0;
            local_18 = fVar11;
            if (0 < (int)fVar11) {
              do {
                piVar9 = *(int **)(*piVar9 + local_2c * 4);
                local_38 = piVar9 + 0x52;
                if (((piVar9[0x55] != 0) || (piVar9[0x56] != 0)) &&
                   (cVar1 = (**(code **)(*piVar9 + 0x3c))(), cVar1 != '\0')) {
                  fVar11 = DAT_00f092fc;
                  if ((char)piVar9[0x71] != '\0') {
                    fVar13 = (float10)FUN_00b352e0();
                    local_48 = (float)((fVar13 + (float10)1.0) * (float10)0.5);
                    fVar11 = local_48;
                  }
                  (**(code **)(*piVar8 + 0x78))(piVar8,local_34,fVar11);
                  (**(code **)(*piVar8 + 0x78))(piVar8,local_60,piVar9[0x72]);
                  local_5c = piVar9[0x5b];
                  local_58 = piVar9[0x5c];
                  (**(code **)(*piVar8 + 0x80))(piVar8,local_50,&local_5c,2);
                  if (piVar9[0x4f] != local_30) {
                    local_68 = 0xf;
                    local_6c = 0;
                    local_7c[0] = local_7c[0] & 0xffffff00;
                    FUN_00409350("allies_country",0xe);
                    local_8 = 0;
                    iVar6 = FUN_00973bd0(local_7c);
                    if (iVar6 == 0) {
                      iVar6 = FUN_00973bd0(local_7c);
                    }
                    local_8 = 0xffffffff;
                    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b(local_7c[0]);
                    }
                    local_68 = 0xf;
                    local_6c = 0;
                    local_7c[0] = local_7c[0] & 0xffffff00;
                    uVar4 = *(uint *)(iVar6 + 0x49c);
                    if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = *(undefined4 *)(*(int *)(piVar9[0x4f] + 0x8c) + 0x15c + uVar4 * 0x2c);
                    }
                    (**(code **)(*param_2 + 0x104))(param_2,0,uVar3);
                    local_30 = piVar9[0x4f];
                  }
                  piVar9 = piVar9 + 0x25;
                  piVar12 = local_1e8;
                  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *piVar12 = *piVar9;
                    piVar9 = piVar9 + 1;
                    piVar12 = piVar12 + 1;
                  }
                  D3DXMatrixMultiply(local_268,local_1e8,local_e8);
                  (**(code **)(*piVar8 + 0x98))(piVar8,local_4c,local_268);
                  (**(code **)(*piVar8 + 0x104))(piVar8);
                  FUN_009f9d50();
                  fVar11 = local_18;
                }
                local_2c = local_2c + 1;
                piVar9 = local_24;
              } while (local_2c < (int)fVar11);
            }
            (**(code **)(*piVar8 + 0x108))(piVar8);
            param_1 = param_1 + 1;
            uVar7 = local_1c;
          } while (param_1 < local_1c);
        }
        local_20 = local_20 + 0x10;
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    (**(code **)(*piVar8 + 0x10c))(piVar8);
  }
  ExceptionList = local_10;
  return;
}

