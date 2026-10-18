// FUN_00801ff0 @ 00801ff0 body=[[00801ff0, 00802487]]


void FUN_00801ff0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  undefined1 local_84 [28];
  undefined **local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined1 local_50;
  undefined **local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  float local_c;
  
  local_30 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_2c = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_20 = 1;
  if (1 < local_2c) {
    fVar9 = 0.0;
    local_24 = (int *)(DAT_012588e8 + 0xb60);
    local_10 = iVar6;
    do {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_20 * 4) + 0xc);
      if (((DAT_00f092fa == '\0') || (DAT_00f092fb == '\0')) ||
         (0 < *(int *)(*(int *)(iVar5 + 0x5c) + 0x360))) {
        local_c = DAT_00f092fc;
      }
      else {
        local_c = 0.3;
      }
      fVar8 = local_c * 0.5;
      local_48 = 0x18d;
      local_4c = CColor::vftable;
      local_44 = CONCAT44(fVar8,fVar8);
      local_3c = CONCAT44(DAT_00f092fc,fVar8);
      if (((fVar8 <= 0.999) || (fVar8 <= 0.999)) || (local_34 = 1, fVar8 <= 0.999)) {
        local_34 = 0;
      }
      if ((*(int *)(iVar5 + 300) == *local_24) && (*(int *)(iVar5 + 0x134) == *local_24)) {
        iVar2 = FUN_004b8870(iVar5);
        if (0 < iVar2) {
          iVar3 = FUN_004b8720(iVar5);
          fStack_54 = DAT_00f092fc;
          if (iVar3 < iVar2) {
            local_60 = local_c * 0.4;
            fStack_5c = local_c * 0.9;
            if (((local_60 <= 0.999) || (fStack_5c <= 0.999)) || (local_60 <= 0.999))
            goto LAB_008021f3;
            local_34 = 1;
          }
          else {
            local_60 = local_c * 0.7;
            fStack_5c = local_60;
            if (((local_60 <= 0.999) || (local_60 <= 0.999)) || (local_c * 0.4 <= 0.999)) {
LAB_008021f3:
              local_34 = 0;
            }
            else {
              local_34 = 1;
            }
          }
          local_58 = local_c * 0.4;
          local_44 = CONCAT44(fStack_5c,local_60);
          local_3c = CONCAT44(DAT_00f092fc,local_58);
          local_48 = 0x18d;
        }
        cVar1 = FUN_004b85e0(iVar5);
        fVar9 = 0.0;
        if (cVar1 != '\0') {
          local_60 = local_c;
          fStack_54 = DAT_00f092fc;
          local_64 = 0x18d;
          local_68 = CColor::vftable;
          fStack_5c = 0.0;
          local_58 = 0.0;
          local_50 = 0;
          iVar2 = FUN_009b7270(local_84);
          local_44 = *(undefined8 *)(iVar2 + 8);
          local_48 = *(undefined4 *)(iVar2 + 4);
          local_3c = *(undefined8 *)(iVar2 + 0x10);
          local_34 = *(undefined1 *)(iVar2 + 0x18);
        }
      }
      fVar8 = DAT_00f092fc;
      uVar4 = FUN_009b6df0();
      local_14 = *(int *)(iVar5 + 0x58);
      iVar2 = 0;
      iVar5 = *(int *)(iVar6 + 0x1574) - *(int *)(iVar6 + 0x1570) >> 2;
      if (0 < iVar5) {
        piVar7 = *(int **)(iVar6 + 0x1570);
        do {
          if ((*(int *)(*piVar7 + 8) == local_14) && (*(char *)(*piVar7 + 0x20) == '\0')) {
            local_1c = *(int *)(*(int *)(local_10 + 0x1570) + iVar2 * 4);
            iVar6 = local_10;
            goto LAB_008022f6;
          }
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 1;
          iVar6 = local_10;
        } while (iVar2 < iVar5);
      }
      local_1c = 0;
LAB_008022f6:
      iVar3 = 0;
      iVar2 = iVar6;
      if (0 < iVar5) {
        piVar7 = *(int **)(iVar6 + 0x1570);
        do {
          if ((*(int *)(*piVar7 + 8) == local_14) && (*(char *)(*piVar7 + 0x20) == '\x01')) {
            iVar5 = (*(int **)(iVar6 + 0x1570))[iVar3];
            iVar6 = local_10;
            goto LAB_00802328;
          }
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
          iVar2 = local_10;
        } while (iVar3 < iVar5);
      }
      iVar5 = 0;
      iVar6 = iVar2;
LAB_00802328:
      local_28 = uVar4;
      local_18 = uVar4;
      if (local_1c == 0) {
        if (iVar5 != 0) {
          local_58 = 16.0;
          local_60 = 16.0;
          fStack_5c = 16.0;
          goto LAB_0080242f;
        }
      }
      else {
        if (iVar5 == 0) {
          fStack_5c = 255.0;
          local_58 = 64.0;
          local_50 = 0;
          local_60 = fVar9;
        }
        else {
          local_60 = 42.0;
          fStack_5c = 148.0;
          local_58 = 202.0;
LAB_0080242f:
          local_50 = 1;
        }
        local_3c = CONCAT44(fVar8,fVar9);
        local_44 = CONCAT44(fVar9,fVar9);
        local_34 = 0;
        local_48 = 0x18d;
        local_4c = CColor::vftable;
        local_64 = 0x18d;
        local_68 = CColor::vftable;
        fStack_54 = fVar8;
        FUN_009b7270(local_84);
        uVar4 = FUN_009b6df0();
      }
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_20 * 4) = local_28;
      iVar5 = local_20 * 4;
      local_20 = local_20 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 4) = uVar4;
    } while (local_20 < local_2c);
  }
  return;
}

