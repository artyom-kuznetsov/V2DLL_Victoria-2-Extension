// FUN_004e1e20 @ 004e1e20 body=[[004e1e20, 004e21f8] [004e2200, 004e2345] [004e2350, 004e23cc] [004e23d0, 004e24be]]


void FUN_004e1e20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *extraout_ECX_02;
  uint *extraout_ECX_03;
  uint *puVar10;
  uint *puVar11;
  int *local_78;
  uint uStack_74;
  undefined **ppuStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint *local_54;
  undefined4 local_50;
  uint *local_4c;
  uint *local_48;
  int local_44;
  undefined1 local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  undefined1 local_30;
  uint *puStack_2c;
  uint *puStack_28;
  int iStack_24;
  undefined1 uStack_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb6a18;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004e6220(param_1);
  local_54 = *(uint **)(param_1 + 0x38);
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x3c) * 4);
  if (((((int)(*(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) & 0xfffffffcU) < 1) &&
       ((iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0xf8), iVar8 == 0 || (iVar8 == 3)))) ||
      ((iVar8 = *(int *)(param_1 + 0x48), iVar8 != 0 &&
       (local_54 = *(uint **)(param_1 + 0x44),
       iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar8 * 4),
       0 < (int)(*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) & 0xfffffffcU))))) ||
     ((*(int *)(*(int *)(param_1 + 0x30) + 0x100) != 6 && (iVar8 == 0)))) goto LAB_004e1e88;
  local_68 = *(uint *)(param_1 + 0x78);
  local_64 = *(uint *)(param_1 + 0x7c);
  if (local_68 < 0x1269) {
    if (DAT_01258a98 != (uint *)0x0) goto LAB_004e1ffb;
LAB_004e1f05:
    local_78 = (int *)0x0;
    puVar10 = DAT_01258a94;
  }
  else {
    if (DAT_01258a94 == (uint *)0x0) goto LAB_004e1f05;
LAB_004e1ffb:
    local_78 = (int *)FUN_009c1d40();
    puVar10 = extraout_ECX_00;
  }
  if ((*(int *)(param_1 + 0xac) != 0) &&
     ((*(int *)(*(int *)(param_1 + 0x30) + 0xfc) != 2 ||
      (iVar8 = *(int *)(*(int *)(param_1 + 0x4c) + 0x50), puVar10 = *(uint **)(iVar8 + 0x1c),
      local_54 = puVar10, *(int *)(param_1 + 0x3c) != *(int *)(iVar8 + 0x20))))) {
    local_3c = (uint *)0x0;
    local_38 = (uint *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_c = 0;
    piVar1 = *(int **)(param_1 + 0x94);
    while (puVar11 = local_3c, piVar1 != (int *)0x0) {
      iVar8 = *piVar1;
      uVar2 = *(uint *)(*(int *)(DAT_012588e8 + 0xacc) + iVar8 * 4);
      piVar1 = (int *)piVar1[2];
      if ((((*(char *)(uVar2 + 0x130) == 'R') && (*(char *)(uVar2 + 0x131) == 'E')) &&
          (*(char *)(uVar2 + 0x132) == 'B')) && (*(int *)(uVar2 + 300) != 0)) {
        cVar6 = FUN_004e19d0(*(undefined4 *)(uVar2 + 0x128),*(undefined4 *)(uVar2 + 300));
        puVar11 = local_38;
        puVar10 = extraout_ECX;
        if (cVar6 != '\0') {
          puVar7 = (uint *)FUN_00aae9af(0x10);
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          else {
            *puVar7 = uVar2;
            puVar7[1] = (uint)local_38;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          local_38 = puVar7;
          if (local_34 == 0) {
            puVar10 = (uint *)0x1;
            local_3c = puVar7;
            local_34 = local_34 + 1;
          }
          else {
            puVar11[2] = (uint)puVar7;
            puVar10 = puVar11;
            local_34 = local_34 + 1;
          }
        }
      }
      else {
        for (piVar3 = *(int **)(param_1 + 0x94); (piVar3 != (int *)0x0 && (*piVar3 != iVar8));
            piVar3 = (int *)piVar3[2]) {
        }
        FUN_005f2ae0(piVar3);
        puVar10 = extraout_ECX_01;
      }
    }
    while (puVar11 != (uint *)0x0) {
      uVar2 = *puVar11;
      local_54 = *(uint **)(uVar2 + 0x128);
      puVar11 = (uint *)puVar11[2];
      local_50 = *(undefined4 *)(uVar2 + 300);
      FUN_004b5730(uVar2,&local_54,DAT_012588e8 + 0xb0c,1);
      puVar10 = extraout_ECX_02;
    }
    local_4c = (uint *)0x0;
    local_48 = (uint *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_c._1_3_ = (undefined3)((uint)local_c >> 8);
    local_c = CONCAT31(local_c._1_3_,1);
    puVar7 = (uint *)0x0;
    puVar11 = *(uint **)(param_1 + 0x80);
    while (puVar5 = puVar7, puVar7 = local_4c, puVar11 != (uint *)0x0) {
      uVar2 = *puVar11;
      puVar10 = (uint *)puVar11[3];
      uVar4 = puVar11[1];
      local_68 = uVar2;
      local_64 = uVar4;
      puVar11 = puVar10;
      if (uVar2 < 0x1269) {
        if (DAT_01258a98 != (uint *)0x0) goto LAB_004e2110;
        goto LAB_004e2130;
      }
      if (DAT_01258a94 == (uint *)0x0) goto LAB_004e2130;
LAB_004e2110:
      iVar8 = FUN_009c1d40();
      if (((iVar8 == 0) || (iVar8 == 8)) ||
         (puVar7 = puVar5, puVar10 = *(uint **)(param_1 + 0x58),
         *(uint **)(iVar8 + 0xbc) != *(uint **)(param_1 + 0x58))) {
LAB_004e2130:
        local_48 = (uint *)FUN_00aae9af(0x14);
        if (local_48 == (uint *)0x0) {
          local_48 = (uint *)0x0;
        }
        else {
          *local_48 = uVar2;
          local_48[1] = uVar4;
          local_48[2] = (uint)puVar5;
          local_48[3] = 0;
          *(undefined1 *)(local_48 + 4) = 0;
        }
        puVar7 = local_48;
        if (local_44 == 0) {
          puVar10 = (uint *)0x1;
          local_4c = local_48;
          local_44 = local_44 + 1;
        }
        else {
          puVar5[3] = (uint)local_48;
          local_44 = local_44 + 1;
          puVar10 = puVar5;
        }
      }
    }
    while (puVar7 != (uint *)0x0) {
      puVar7 = (uint *)puVar7[3];
      FUN_004e9470(*(undefined4 *)(param_1 + 0x80));
      FUN_0099e580(puVar10);
      puVar10 = extraout_ECX_03;
    }
    if (((*(int *)(param_1 + 0xac) == 0) && (*(int *)(param_1 + 0x88) == 0)) &&
       (*(int *)(param_1 + 0x9c) == 0)) {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x80);
joined_r0x004e21f1:
      if (puVar10 != (uint *)0x0) {
        puVar11 = (uint *)puVar10[3];
        local_60 = *puVar10;
        local_5c = puVar10[1];
        puVar10 = DAT_01258a94;
        if (local_60 < 0x1269) {
          puVar10 = DAT_01258a98;
        }
        if ((puVar10 == (uint *)0x0) || (iVar8 = FUN_009c1d40(), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar8 + -8;
        }
        if (((*(char *)(*(int *)(param_1 + 0x30) + 0x120) != '\0') && (local_78 != (int *)0x0)) &&
           ((cVar6 = (**(code **)(*local_78 + 0x20))(), cVar6 != '\0' && (local_78[0x22] == 0)))) {
          FUN_005cbcc0(local_78);
        }
        puVar10 = puVar11;
        if (((*(int *)(iVar8 + 0xec) < 1) && (*(char *)(iVar8 + 0x104) == '\0')) &&
           (*(int *)(iVar8 + 0x74) == 0)) {
          cVar6 = FUN_004e1a50();
          if ((cVar6 == '\0') || (*(int *)(iVar8 + 0x70) == 0)) {
            iVar9 = FUN_004e1b20(param_1,iVar8);
            if (iVar9 == 0) {
              if (cVar6 != '\0') goto joined_r0x004e21f1;
              cVar6 = FUN_004e1a50();
              if (cVar6 == '\0') {
                cVar6 = FUN_004e19d0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x130),
                                     *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134));
                if (cVar6 != '\0') {
                  FUN_004e7910(param_1);
                  FUN_0068aa10(iVar8);
                }
                goto joined_r0x004e21f1;
              }
              iVar9 = *(int *)(param_1 + 0x34);
            }
            puStack_2c = (uint *)0x0;
            puStack_28 = (uint *)0x0;
            iStack_24 = 0;
            uStack_20 = 0;
            uStack_1c = 0;
            local_c = CONCAT31(local_c._1_3_,4);
            ppuStack_6c = CPathFind::vftable;
            FUN_005b8500(&ppuStack_6c,iVar8,iVar9,&puStack_2c);
            if (iStack_24 < 1) {
              cVar6 = FUN_004e19d0(*(undefined4 *)(*(int *)(iVar8 + 0xdc) + 0x130),
                                   *(undefined4 *)(*(int *)(iVar8 + 0xdc) + 0x134));
              if (cVar6 != '\0') {
                FUN_004e7910(param_1);
                FUN_0068aa10(iVar8);
              }
            }
            else {
              uStack_74 = *puStack_2c;
              puVar11 = puStack_2c;
              do {
                local_68 = *puVar11;
                puVar11 = (uint *)puVar11[2];
                cVar6 = FUN_004e1a50();
                if (cVar6 != '\0') {
                  uStack_74 = local_68;
                  break;
                }
              } while (puVar11 != (uint *)0x0);
              uVar2 = *puStack_28;
              while (uVar2 != uStack_74) {
                FUN_009c2ec0();
                uVar2 = *puStack_28;
              }
              FUN_005d1bb0(&puStack_2c,1);
            }
            local_c = CONCAT31(local_c._1_3_,1);
            FUN_00849e90();
          }
        }
        goto joined_r0x004e21f1;
      }
      if (*(int *)(param_1 + 200) == 0) {
        iVar8 = FUN_009b7950(0,0);
        *(int *)(param_1 + 200) = iVar8 % 0x1e;
      }
      FUN_004e2980(param_1);
      iVar8 = FUN_00424930();
      if ((iVar8 == *(int *)(param_1 + 200)) && (cVar6 = FUN_004e7de0(param_1), cVar6 != '\0')) {
        FUN_004e7ed0(param_1,1,0);
      }
    }
    FUN_004e9430();
    FUN_009a63f0();
    ExceptionList = local_14;
    return;
  }
LAB_004e1e88:
  *(undefined1 *)(param_1 + 0x91) = 1;
  ExceptionList = local_14;
  return;
}

