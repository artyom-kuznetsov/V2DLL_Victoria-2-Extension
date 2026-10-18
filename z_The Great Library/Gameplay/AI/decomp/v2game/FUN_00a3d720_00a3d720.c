// FUN_00a3d720 @ 00a3d720 body=[[00a3d720, 00a3e3a5] [00a3e3b0, 00a3e835]]


void FUN_00a3d720(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort in_CX;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_48 = 0.0;
  *(uint *)(unaff_ESI + 0xc0) = (uint)in_CX;
  if ((in_CX != 0) && (local_48 = (float)(in_CX - 1), *(uint *)(unaff_ESI + 0x94) <= (uint)local_48)
     ) {
    local_48 = 0.0;
  }
  uVar1 = *(uint *)(unaff_ESI + 0xa4);
  uVar3 = 1;
  uVar4 = uVar3;
  if (1 < uVar1) {
    do {
      uVar3 = 0;
      if (uVar4 == 0) break;
      uVar3 = uVar4 * 2;
      uVar4 = uVar3;
    } while (uVar3 < uVar1);
  }
  local_50 = (float)(int)uVar3;
  if ((int)uVar3 < 0) {
    local_50 = local_50 + 4.2949673e+09;
  }
  local_50 = (float)(int)uVar1 / local_50;
  uVar3 = *(uint *)(unaff_ESI + 0xa0);
  uVar4 = 1;
  uVar5 = uVar4;
  if (1 < uVar3) {
    do {
      uVar5 = 0;
      if (uVar4 == 0) break;
      uVar4 = uVar4 * 2;
      uVar5 = uVar4;
    } while (uVar4 < uVar3);
  }
  local_58 = (float)(int)uVar5;
  if ((int)uVar5 < 0) {
    local_58 = local_58 + 4.2949673e+09;
  }
  local_58 = (float)(int)uVar3 / local_58;
  local_40 = (float)*(int *)(unaff_ESI + 0x94);
  if (*(int *)(unaff_ESI + 0x94) < 0) {
    local_40 = local_40 + 4.2949673e+09;
  }
  local_40 = local_58 / local_40;
  local_80 = (float)(int)local_48;
  if ((int)local_48 < 0) {
    local_80 = local_80 + 4.2949673e+09;
  }
  local_80 = local_80 * local_40;
  local_20 = (float)*(int *)(unaff_ESI + 0xb0);
  local_78 = (local_20 / (float)(int)uVar3) * local_58;
  local_18 = (float)*(int *)(unaff_ESI + 0xb4);
  local_88 = (local_18 / (float)(int)uVar1) * local_50;
  local_84 = ((local_20 + 1.0) / (float)(int)uVar3) * local_58;
  local_74 = ((local_18 + 1.0) / (float)(int)uVar1) * local_50;
  local_44 = local_74 + 0.0;
  local_38 = local_80 + local_78;
  local_14 = 0.0;
  local_1c = DAT_00f092dc;
  local_24 = 0.0;
  uVar12 = (ulonglong)DAT_00f092fc;
  local_10 = local_44;
  local_c = local_80;
  local_8 = local_38;
  FUN_00a3ed10(&local_24,&local_1c,DAT_00f092fc,local_80,local_38,0,local_44);
  local_14 = 0.0;
  local_10 = local_44;
  local_5c = local_80 + local_40;
  local_1c = DAT_00f092dc;
  local_18 = (float)*(int *)(unaff_ESI + 0xb4);
  local_24 = (float)(*(int *)(unaff_ESI + 0xa8) - *(int *)(unaff_ESI + 0xb0));
  local_20 = (float)*(int *)(unaff_ESI + 0xa8);
  local_4c = local_5c - local_78;
  local_c = local_4c;
  local_8 = local_5c;
  FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_4c,local_5c,0,local_44);
  local_60 = local_50 + 0.0;
  local_30 = local_60 - local_88;
  local_c = local_4c;
  local_8 = local_5c;
  local_1c = (float)(*(int *)(unaff_ESI + 0xac) - *(int *)(unaff_ESI + 0xb4));
  local_18 = (float)*(int *)(unaff_ESI + 0xac);
  local_24 = (float)(*(int *)(unaff_ESI + 0xa8) - *(int *)(unaff_ESI + 0xb0));
  local_20 = (float)*(int *)(unaff_ESI + 0xa8);
  local_14 = local_30;
  local_10 = local_60;
  FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_4c,local_5c,local_30,local_60);
  local_14 = local_30;
  local_10 = local_60;
  local_c = local_80;
  local_8 = local_38;
  local_1c = (float)(*(int *)(unaff_ESI + 0xac) - *(int *)(unaff_ESI + 0xb4));
  local_18 = (float)*(int *)(unaff_ESI + 0xac);
  local_24 = 0.0;
  local_20 = (float)*(int *)(unaff_ESI + 0xb0);
  FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_80,local_38,local_30,local_60);
  local_54 = *(int *)(unaff_ESI + 0xa4) + *(int *)(unaff_ESI + 0xb4) * -2;
  iVar10 = 0x18;
  local_44 = (float)(*(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_ESI + 0xb0) * -2);
  if (*(int *)(unaff_ESI + 0xa0) <= *(int *)(unaff_ESI + 0xa8)) {
    local_2c = (*(int *)(unaff_ESI + 0xa8) + *(int *)(unaff_ESI + 0xb0) * -2) / (int)local_44;
    local_3c = (((float)*(int *)(unaff_ESI + 0xb4) + 1.0) / (float)*(int *)(unaff_ESI + 0xa4)) *
               local_50;
    iVar9 = 0;
    fVar11 = local_3c;
    if (0 < local_2c) {
      local_14 = local_3c + 0.0;
      local_10 = 0.0;
      local_c = local_38;
      local_8 = local_4c;
      local_18 = DAT_00f092dc;
      iVar9 = 1;
      local_34 = local_2c;
      local_28 = local_2c;
      do {
        local_1c = (float)*(int *)(unaff_ESI + 0xb4);
        local_24 = (float)((iVar9 + -2) * *(int *)(unaff_ESI + 0xb0) + *(int *)(unaff_ESI + 0xa0));
        local_20 = (float)(*(int *)(unaff_ESI + 0xb0) * iVar9);
        FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_c,local_8,local_14,local_10);
        iVar10 = iVar10 + 6;
        iVar9 = iVar9 + 1;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_28 = 0;
      iVar9 = local_34;
      fVar11 = local_3c;
    }
    iVar7 = *(int *)(unaff_ESI + 0xb0);
    local_3c = (float)((*(int *)(unaff_ESI + 0xa0) + iVar7 * -2) * local_2c);
    iVar8 = (iVar9 + 1) * iVar7;
    iVar9 = (iVar7 * -2 - (int)local_3c) + *(int *)(unaff_ESI + 0xa8);
    if (iVar9 != 0) {
      local_14 = fVar11 + 0.0;
      local_10 = 0.0;
      local_c = ((float)(iVar7 + iVar9) / (float)*(int *)(unaff_ESI + 0xa0)) * local_58;
      local_8 = local_38;
      local_1c = (float)*(int *)(unaff_ESI + 0xb4);
      local_18 = DAT_00f092dc;
      local_24 = (float)(iVar9 + iVar8);
      local_20 = (float)iVar8;
      FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_c,local_38,local_14,0);
      iVar10 = iVar10 + 6;
    }
  }
  if (*(int *)(unaff_ESI + 0xa0) <= *(int *)(unaff_ESI + 0xa8)) {
    iVar9 = *(int *)(unaff_ESI + 0xb0);
    iVar7 = *(int *)(unaff_ESI + 0xa0) + iVar9 * -2;
    local_2c = (*(int *)(unaff_ESI + 0xa8) + iVar9 * -2) / iVar7;
    if (0 < local_2c) {
      local_14 = local_30;
      local_10 = local_60;
      local_c = local_84;
      local_8 = local_4c;
      local_28 = local_2c;
      do {
        local_1c = (float)(*(int *)(unaff_ESI + 0xac) - *(int *)(unaff_ESI + 0xb4));
        local_18 = (float)*(int *)(unaff_ESI + 0xac);
        local_24 = (float)iVar9;
        local_20 = (float)(iVar7 + iVar9);
        FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_c,local_8,local_14,local_10);
        iVar7 = *(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_ESI + 0xb0) * -2;
        iVar10 = iVar10 + 6;
        iVar9 = iVar9 + iVar7;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    iVar7 = *(int *)(unaff_ESI + 0xb0);
    local_3c = (float)((*(int *)(unaff_ESI + 0xa0) + iVar7 * -2) * local_2c);
    iVar8 = (iVar7 * -2 - (int)local_3c) + *(int *)(unaff_ESI + 0xa8);
    if (iVar8 != 0) {
      local_14 = local_30;
      local_10 = local_60;
      local_c = ((float)(iVar7 + iVar8) / (float)*(int *)(unaff_ESI + 0xa0)) * local_58;
      local_8 = local_38;
      local_1c = (float)(*(int *)(unaff_ESI + 0xac) - *(int *)(unaff_ESI + 0xb4));
      local_18 = (float)*(int *)(unaff_ESI + 0xac);
      local_24 = (float)iVar9;
      local_20 = (float)(iVar8 + iVar9);
      FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_c,local_38,local_30,local_60);
      iVar10 = iVar10 + 6;
    }
  }
  iVar9 = *(int *)(unaff_ESI + 0xb4);
  local_2c = (*(int *)(unaff_ESI + 0xac) + *(int *)(unaff_ESI + 0xb0) * -2) /
             (*(int *)(unaff_ESI + 0xa4) + iVar9 * -2);
  if (0 < local_2c) {
    local_14 = local_30;
    local_10 = local_74;
    local_c = local_38;
    local_8 = local_80;
    local_20 = 0.0;
    local_28 = local_2c;
    do {
      local_1c = (float)(iVar9 + local_54);
      local_18 = (float)iVar9;
      local_24 = (float)*(int *)(unaff_ESI + 0xb0);
      FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_c,local_8,local_14,local_10);
      iVar10 = iVar10 + 6;
      iVar9 = iVar9 + *(int *)(unaff_ESI + 0xa4) + *(int *)(unaff_ESI + 0xb4) * -2;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar7 = *(int *)(unaff_ESI + 0xb4);
  local_3c = (float)((*(int *)(unaff_ESI + 0xa4) + iVar7 * -2) * local_2c);
  iVar8 = (iVar7 * -2 - (int)local_3c) + *(int *)(unaff_ESI + 0xac);
  if (iVar8 != 0) {
    local_14 = ((float)(iVar7 + iVar8) / (float)*(int *)(unaff_ESI + 0xa4)) * local_50;
    local_10 = local_30;
    local_c = local_38;
    local_8 = local_80;
    local_1c = (float)(iVar8 + iVar9);
    local_18 = (float)iVar9;
    local_24 = (float)*(int *)(unaff_ESI + 0xb0);
    local_20 = 0.0;
    FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_38,local_80,local_14,local_30);
    iVar10 = iVar10 + 6;
  }
  iVar9 = *(int *)(unaff_ESI + 0xb4);
  local_2c = (*(int *)(unaff_ESI + 0xac) + *(int *)(unaff_ESI + 0xb0) * -2) /
             (*(int *)(unaff_ESI + 0xa4) + iVar9 * -2);
  if (0 < local_2c) {
    local_14 = local_30;
    local_10 = local_74;
    local_8 = local_4c;
    local_28 = local_2c;
    do {
      local_c = local_5c;
      local_1c = (float)(iVar9 + local_54);
      local_18 = (float)iVar9;
      local_24 = (float)*(int *)(unaff_ESI + 0xa8);
      local_20 = (float)(*(int *)(unaff_ESI + 0xa8) - *(int *)(unaff_ESI + 0xb0));
      FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_5c,local_8,local_14,local_10);
      iVar10 = iVar10 + 6;
      iVar9 = iVar9 + *(int *)(unaff_ESI + 0xa4) + *(int *)(unaff_ESI + 0xb4) * -2;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar7 = *(int *)(unaff_ESI + 0xb4);
  local_3c = (float)((*(int *)(unaff_ESI + 0xa4) + iVar7 * -2) * local_2c);
  iVar8 = (iVar7 * -2 - (int)local_3c) + *(int *)(unaff_ESI + 0xac);
  if (iVar8 != 0) {
    local_14 = local_30;
    local_10 = ((float)(iVar7 + iVar8) / (float)*(int *)(unaff_ESI + 0xa4)) * local_50;
    local_c = local_5c;
    local_8 = local_4c;
    local_1c = (float)(iVar8 + iVar9);
    local_18 = (float)iVar9;
    local_24 = (float)*(int *)(unaff_ESI + 0xa8);
    local_20 = (float)(*(int *)(unaff_ESI + 0xa8) - *(int *)(unaff_ESI + 0xb0));
    FUN_00a3ed10(&local_24,&local_1c,(int)uVar12,local_5c,local_4c,local_30,local_10);
    iVar10 = iVar10 + 6;
  }
  local_28 = (*(int *)(unaff_ESI + 0xa8) + *(int *)(unaff_ESI + 0xb0) * -2) /
             (*(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_ESI + 0xb0) * -2);
  iVar9 = *(int *)(unaff_ESI + 0xb4);
  local_2c = iVar9 * 2;
  local_48 = (float)((*(int *)(unaff_ESI + 0xac) + iVar9 * -2) /
                    (*(int *)(unaff_ESI + 0xa4) + iVar9 * -2));
  fVar11 = (float)(int)local_48;
  if (0 < (int)local_48) {
    do {
      local_3c = fVar11;
      iVar9 = *(int *)(unaff_ESI + 0xb0);
      if (0 < local_28) {
        local_10 = local_5c - local_78;
        local_98 = (float)(local_2c - local_54);
        local_94 = (float)local_2c;
        local_34 = local_28;
        do {
          if (*(char *)(unaff_ESI + 0xfd) == '\0') {
            local_14 = local_84;
            local_c = local_74;
            local_8 = local_74;
          }
          else {
            local_14 = local_80 + local_78;
            local_c = local_88 + 0.0;
            local_8 = local_60 - local_78;
          }
          local_90 = (float)iVar9;
          local_8c = (float)(iVar9 + (int)local_44);
          FUN_00a3ed10(&local_90,&local_98,(int)uVar12,local_14,local_10,local_c,local_8);
          iVar10 = iVar10 + 6;
          iVar9 = iVar9 + *(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_ESI + 0xb0) * -2;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      iVar7 = *(int *)(unaff_ESI + 0xb0);
      local_34 = (*(int *)(unaff_ESI + 0xa0) + iVar7 * -2) * local_28;
      iVar8 = (iVar7 * -2 - local_34) + *(int *)(unaff_ESI + 0xa8);
      if (0 < iVar8) {
        local_24 = local_30;
        local_20 = ((float)(iVar7 + iVar8) / (float)*(int *)(unaff_ESI + 0xa0)) * local_58;
        local_1c = local_38;
        local_18 = local_4c;
        local_68 = (float)(local_2c - local_54);
        local_64 = (float)local_2c;
        local_70 = (float)iVar9;
        local_6c = (float)(iVar8 + iVar9);
        FUN_00a3ed10(&local_70,&local_68,(int)uVar12,local_38,local_4c,local_30,local_20);
        iVar10 = iVar10 + 6;
      }
      local_2c = local_2c + *(int *)(unaff_ESI + 0xa4) + *(int *)(unaff_ESI + 0xb4) * -2;
      local_3c = (float)((int)local_3c + -1);
      fVar11 = local_3c;
    } while (local_3c != 0.0);
  }
  uVar6 = (undefined4)uVar12;
  iVar9 = *(int *)(unaff_ESI + 0xb4);
  local_34 = (iVar9 * -2 - (*(int *)(unaff_ESI + 0xa4) + iVar9 * -2) * (int)local_48) +
             *(int *)(unaff_ESI + 0xac);
  local_48 = ((float)(local_34 + iVar9) / (float)*(int *)(unaff_ESI + 0xa4)) * local_50;
  if (*(int *)(unaff_ESI + 0xa0) <= *(int *)(unaff_ESI + 0xa8)) {
    iVar9 = *(int *)(unaff_ESI + 0xb0);
    local_28 = (*(int *)(unaff_ESI + 0xa8) + iVar9 * -2) / (*(int *)(unaff_ESI + 0xa0) + iVar9 * -2)
    ;
    if (0 < local_28) {
      local_24 = local_38;
      local_20 = local_4c;
      local_70 = (float)(local_2c - local_54);
      local_1c = local_30;
      local_3c = (float)local_28;
      local_18 = local_48;
      do {
        local_6c = (float)((local_34 - *(int *)(unaff_ESI + 0xb4)) + local_2c);
        local_68 = (float)iVar9;
        local_64 = (float)(iVar9 + (int)local_44);
        FUN_00a3ed10(&local_68,&local_70,(int)uVar12,local_24,local_20,local_1c,local_18);
        uVar6 = (undefined4)uVar12;
        iVar10 = iVar10 + 6;
        iVar9 = iVar9 + *(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_ESI + 0xb0) * -2;
        local_3c = (float)((int)local_3c + -1);
      } while (local_3c != 0.0);
      local_3c = 0.0;
    }
    iVar7 = *(int *)(unaff_ESI + 0xb0);
    iVar8 = (iVar7 * -2 - (*(int *)(unaff_ESI + 0xa0) + iVar7 * -2) * local_28) +
            *(int *)(unaff_ESI + 0xa8);
    if (iVar8 != 0) {
      local_24 = local_38;
      local_1c = local_30;
      local_20 = ((float)(iVar7 + local_34) / (float)*(int *)(unaff_ESI + 0xa0)) * local_58;
      local_70 = (float)(local_2c - local_54);
      local_6c = (float)((local_34 - *(int *)(unaff_ESI + 0xb4)) + local_2c);
      local_68 = (float)iVar9;
      local_64 = (float)(iVar8 + iVar9);
      local_18 = local_48;
      FUN_00a3ed10(&local_68,&local_70,uVar6,local_38,local_20,local_30,local_48);
      iVar10 = iVar10 + 6;
    }
  }
  if (*(int *)(unaff_ESI + 0xbc) != iVar10) {
    *(int *)(unaff_ESI + 0xbc) = iVar10;
    if (*(int *)(unaff_ESI + 0xb8) != 0) {
      FUN_00aaea59(*(int *)(unaff_ESI + 0xb8));
    }
    lVar2 = (ulonglong)*(uint *)(unaff_ESI + 0xbc) * 0x14;
    uVar6 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    *(undefined4 *)(unaff_ESI + 0xb8) = uVar6;
  }
  FID_conflict__memcpy(*(void **)(unaff_ESI + 0xb8),&DAT_0132ced0,*(int *)(unaff_ESI + 0xbc) * 0x14)
  ;
  return;
}

