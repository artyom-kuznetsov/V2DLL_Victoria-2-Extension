// FUN_0098ccc0 @ 0098ccc0 body=[[0098ccc0, 0098ced8] [0098cedc, 0098cfa7] [0098cfb0, 0098d255]]


void FUN_0098ccc0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  undefined1 local_1d8 [64];
  undefined4 local_198 [16];
  int local_158 [16];
  undefined1 local_118 [64];
  undefined4 local_d8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  double local_78;
  int local_70 [4];
  int *local_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  int *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  float local_24;
  uint local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3bfa8;
  local_10 = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x6bc88);
  if (iVar7 != 0) {
    ExceptionList = &local_10;
    puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar7 + 0x1c) + 0x16c))();
    puVar11 = local_d8;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar7 + 0x1c) + 0x174))();
    puVar11 = local_198;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar11 = puVar11 + 1;
    }
    D3DXMatrixMultiply(local_118,local_d8,local_198);
    if (DAT_00f082bc == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + DAT_00f082bc * 4);
    }
    local_54 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"WorldViewProjectionMatrix");
    uVar4 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"CameraPosition");
    local_44 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"ArrowColorAlpha");
    local_38 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"ArrowTransparency");
    local_48 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"NoFade");
    (**(code **)(*param_2 + 0x15c))(param_2,DAT_01258a5c);
    (**(code **)(*piVar9 + 0x80))(piVar9,uVar4,param_3,2);
    (**(code **)(*piVar9 + 0xe8))(piVar9,"BattleArrow");
    (**(code **)(*piVar9 + 0xfc))(piVar9,&local_34,0);
    local_2c = 0xffffffff;
    local_40 = 0xffffffff;
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
    local_78 = (double)fVar13;
    local_28 = 0;
    iVar7 = DAT_0131c8c0 - DAT_0131c8bc >> 4;
    local_5c = iVar7;
    if (0 < iVar7) {
      local_1c = 0;
      local_3c = 0;
      do {
        piVar10 = (int *)(local_3c + DAT_0131c8bc);
        iVar6 = *piVar10;
        iVar5 = piVar10[1] - iVar6 >> 2;
        local_30 = piVar10;
        if (iVar5 != 0) {
          local_18 = iVar6 + iVar5 * 4;
          local_58 = local_58 & 0xffffff00;
          if (iVar6 != local_18) {
            iVar7 = local_18 - iVar6 >> 2;
            local_70[3] = (iVar7 + 1) / 2;
            local_60 = local_70;
            local_70[0] = 0;
            local_70[1] = 0;
            local_70[2] = 0;
            local_8 = 0;
            FUN_0098eb80(iVar6,local_18,iVar7,local_60,local_58);
            local_8 = 0xffffffff;
            if (local_70[0] != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_70[0]);
            }
          }
          if (local_28 < (DAT_0131c9e8 - DAT_0131c9e4) / 0x1c) {
            local_88 = *(undefined8 *)(local_1c + 8 + DAT_0131c9e4);
            puVar3 = (undefined4 *)(local_1c + 0x10 + DAT_0131c9e4);
            local_80 = *puVar3;
            uStack_7c = puVar3[1];
            (**(code **)(*piVar9 + 0x80))(piVar9,local_44,&local_88);
          }
          else {
            local_98 = DAT_00f0ecd8;
            local_90 = (undefined4)DAT_00f0ece0;
            uStack_8c = DAT_00f0ece0._4_4_;
            (**(code **)(*piVar9 + 0x80))(piVar9,local_44,&local_98,4);
          }
          local_20 = 0;
          if (local_34 != 0) {
            do {
              (**(code **)(*piVar9 + 0x100))(piVar9,local_20);
              iVar7 = piVar10[1] - *piVar10 >> 2;
              local_18 = 0;
              local_4c = iVar7;
              if (0 < iVar7) {
                do {
                  piVar10 = *(int **)(*piVar10 + local_18 * 4);
                  local_50 = piVar10;
                  if ((piVar10[0x50] != 0) &&
                     (cVar2 = (**(code **)(*piVar10 + 0x3c))(), cVar2 != '\0')) {
                    if ((char)piVar10[0x59] == '\0') {
                      pcVar8 = *(code **)(*piVar9 + 0x78);
                      fVar15 = DAT_00f092fc;
                    }
                    else {
                      iVar7 = *piVar9;
                      fVar13 = (float10)FUN_00b352e0();
                      fVar14 = (float10)0.5;
                      pcVar8 = *(code **)(iVar7 + 0x78);
                      local_24 = (float)((float10)(float)((fVar13 + (float10)1.0) * fVar14) * fVar14
                                        + fVar14);
                      fVar15 = local_24;
                    }
                    (*pcVar8)(piVar9,local_38,fVar15);
                    (**(code **)(*piVar9 + 0x58))
                              (piVar9,local_48,*(undefined1 *)(piVar10[0x4f] + 200));
                    uVar1 = *(uint *)(piVar10[0x4f] + 0x90);
                    if (local_2c != uVar1) {
                      local_2c = uVar1;
                      if (uVar1 == 0xffffffff) {
                        (**(code **)(*piVar9 + 0xd0))(piVar9,&DAT_00e0bce4,0);
                      }
                      else {
                        if (uVar1 < 10000) {
                          uVar4 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + param_1);
                        }
                        else {
                          uVar4 = 0;
                        }
                        (**(code **)(*piVar9 + 0xd0))(piVar9,&DAT_00e0bce4,uVar4);
                      }
                    }
                    uVar1 = *(uint *)(piVar10[0x4f] + 0x94);
                    if (local_40 != uVar1) {
                      local_40 = uVar1;
                      if (uVar1 == 0xffffffff) {
                        (**(code **)(*piVar9 + 0xd0))(piVar9,&DAT_00e19384,0);
                      }
                      else {
                        if (uVar1 < 10000) {
                          uVar4 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + param_1);
                        }
                        else {
                          uVar4 = 0;
                        }
                        (**(code **)(*piVar9 + 0xd0))(piVar9,&DAT_00e19384,uVar4);
                      }
                    }
                    piVar10 = piVar10 + 0x25;
                    piVar12 = local_158;
                    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *piVar12 = *piVar10;
                      piVar10 = piVar10 + 1;
                      piVar12 = piVar12 + 1;
                    }
                    D3DXMatrixMultiply(local_1d8,local_158,local_118);
                    (**(code **)(*piVar9 + 0x98))(piVar9,local_54,local_1d8);
                    piVar10 = local_50;
                    (**(code **)(*param_2 + 400))(param_2,0,local_50[0x50],0,0x14);
                    (**(code **)(*piVar9 + 0x104))(piVar9);
                    (**(code **)(*param_2 + 0x144))(param_2,5,0,piVar10[0x51] + -2);
                    (**(code **)(*param_2 + 0x144))(param_2,5,piVar10[0x51],2);
                    iVar7 = local_4c;
                  }
                  local_18 = local_18 + 1;
                  piVar10 = local_30;
                } while (local_18 < iVar7);
              }
              (**(code **)(*piVar9 + 0x108))(piVar9);
              local_20 = local_20 + 1;
            } while (local_20 < local_34);
          }
          (**(code **)(**(int **)(param_1 + 100) + 0xac))
                    (*(int **)(param_1 + 100),0,0,4,0xff000000,DAT_00f092fc,0);
          iVar7 = local_5c;
        }
        local_1c = local_1c + 0x1c;
        local_28 = local_28 + 1;
        local_3c = local_3c + 0x10;
      } while (local_28 < iVar7);
    }
    (**(code **)(*piVar9 + 0x10c))(piVar9);
    (**(code **)(**(int **)(param_1 + 100) + 0xac))
              (*(int **)(param_1 + 100),0,0,4,0xff000000,DAT_00f092fc,0);
  }
  ExceptionList = local_10;
  return;
}

