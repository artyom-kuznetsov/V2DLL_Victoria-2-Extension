// FUN_00a1a7f0 @ 00a1a7f0 body=[[00a1a7f0, 00a1a97c] [00a1a980, 00a1a9bc] [00a1a9c0, 00a1a9fe] [00a1aa00, 00a1abcd]]


undefined4
FUN_00a1a7f0(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            uint *param_7,int param_8,uint *param_9,uint *param_10)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte bVar13;
  int local_100 [15];
  uint local_c4 [16];
  uint local_84 [17];
  int local_40;
  int *local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_84[4] = 0;
  local_84[5] = 0;
  local_84[6] = 0;
  local_84[7] = 0;
  local_84[8] = 0;
  local_84[9] = 0;
  local_84[10] = 0;
  local_84[0xb] = 0;
  local_84[0xc] = 0;
  local_84[0xd] = 0;
  local_84[0xe] = 0;
  local_84[0xf] = 0;
  piVar4 = (int *)param_1;
  uVar12 = param_2;
  do {
    local_84[*piVar4] = local_84[*piVar4] + 1;
    piVar4 = piVar4 + 1;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (local_84[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_8 = *param_7;
    uVar12 = 1;
    do {
      if (local_84[uVar12] != 0) break;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x10);
    local_c = uVar12;
    if (local_8 < uVar12) {
      local_8 = uVar12;
    }
    local_20 = 0xf;
    do {
      if (local_84[local_20] != 0) break;
      local_20 = local_20 - 1;
    } while (local_20 != 0);
    if (local_20 < local_8) {
      local_8 = local_20;
    }
    uVar10 = local_8;
    *param_7 = local_8;
    local_40 = 1 << ((byte)uVar12 & 0x1f);
    for (uVar8 = uVar12; uVar8 < local_20; uVar8 = uVar8 + 1) {
      if ((int)(local_40 - local_84[uVar8]) < 0) {
        return 0xfffffffd;
      }
      local_40 = (local_40 - local_84[uVar8]) * 2;
    }
    local_18 = local_20 * 4;
    local_40 = local_40 - local_84[local_20];
    if (local_40 < 0) {
      return 0xfffffffd;
    }
    local_84[local_20] = local_84[local_20] + local_40;
    iVar9 = 0;
    iVar5 = local_20 - 1;
    local_c4[1] = 0;
    if (iVar5 != 0) {
      iVar7 = 0;
      do {
        iVar9 = iVar9 + *(int *)((int)local_84 + iVar7 + 4);
        iVar5 = iVar5 + -1;
        *(int *)((int)local_c4 + iVar7 + 8) = iVar9;
        iVar7 = iVar7 + 4;
      } while (iVar5 != 0);
    }
    uVar8 = 0;
    do {
      iVar5 = *param_1;
      param_1 = param_1 + 1;
      if (iVar5 != 0) {
        local_14 = local_c4 + iVar5;
        uVar6 = *local_14;
        param_10[uVar6] = uVar8;
        *local_14 = uVar6 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
    iVar5 = *(int *)((int)local_c4 + local_18);
    iVar9 = -uVar10;
    local_24 = 0;
    local_c4[0] = 0;
    param_1 = param_10;
    local_10 = -1;
    local_100[0] = 0;
    local_14 = (uint *)0x0;
    local_30 = 0;
    if ((int)uVar12 <= (int)local_20) {
      local_1c = local_84 + uVar12;
      uVar8 = local_28;
      do {
        local_18 = *local_1c;
        if (local_18 != 0) {
          local_38 = local_18 + 1;
          do {
            local_38 = local_38 - 1;
            local_18 = local_18 - 1;
            if ((int)(iVar9 + uVar10) < (int)uVar12) {
              local_34 = iVar9 - uVar10;
              iVar7 = iVar9 + uVar10;
              do {
                iVar9 = iVar7;
                local_10 = local_10 + 1;
                local_34 = local_34 + uVar10;
                uVar12 = local_20 - iVar9;
                if (local_8 < local_20 - iVar9) {
                  uVar12 = local_8;
                }
                uVar10 = local_c - iVar9;
                uVar6 = 1 << ((byte)uVar10 & 0x1f);
                if ((local_38 < uVar6) &&
                   (iVar7 = uVar6 + (-1 - local_18), puVar2 = local_1c, uVar10 < uVar12)) {
                  while (uVar10 = uVar10 + 1, uVar10 < uVar12) {
                    uVar6 = puVar2[1];
                    if ((uint)(iVar7 * 2) <= uVar6) break;
                    iVar7 = iVar7 * 2 - uVar6;
                    puVar2 = puVar2 + 1;
                  }
                }
                local_30 = 1 << ((byte)uVar10 & 0x1f);
                uVar12 = local_30 + *param_9;
                if (0x5a0 < uVar12) {
                  return 0xfffffffd;
                }
                iVar7 = param_8 + *param_9 * 8;
                local_3c = local_100 + local_10;
                local_100[local_10] = iVar7;
                uVar6 = local_24;
                *param_9 = uVar12;
                local_14 = (uint *)iVar7;
                if (local_10 == 0) {
                  *param_6 = iVar7;
                }
                else {
                  uVar3 = (undefined1)local_8;
                  local_c4[local_10] = local_24;
                  uVar6 = uVar6 >> ((byte)local_34 & 0x1f);
                  iVar1 = local_3c[-1];
                  local_2c._0_2_ = CONCAT11(uVar3,(byte)uVar10);
                  uVar8 = (iVar7 - iVar1 >> 3) - uVar6;
                  *(undefined4 *)(iVar1 + uVar6 * 8) = local_2c;
                  *(uint *)(iVar1 + 4 + uVar6 * 8) = uVar8;
                }
                iVar7 = iVar9 + local_8;
                uVar12 = local_c;
                uVar10 = local_8;
              } while ((int)(iVar9 + local_8) < (int)local_c);
            }
            bVar13 = (byte)iVar9;
            if (param_1 < param_10 + iVar5) {
              uVar8 = *param_1;
              if (uVar8 < param_3) {
                local_2c._0_1_ = (-(uVar8 < 0x100) & 0xa0U) + 0x60;
              }
              else {
                iVar7 = (uVar8 - param_3) * 4;
                local_2c._0_1_ = *(char *)(iVar7 + param_5) + 'P';
                uVar8 = *(uint *)(iVar7 + param_4);
              }
              param_1 = param_1 + 1;
            }
            else {
              local_2c._0_1_ = -0x40;
            }
            local_2c = CONCAT31(CONCAT21(local_2c._2_2_,(char)uVar12 - bVar13),(char)local_2c);
            iVar7 = 1 << ((char)uVar12 - bVar13 & 0x1f);
            uVar12 = local_24 >> (bVar13 & 0x1f);
            if (uVar12 < local_30) {
              puVar11 = (undefined4 *)((int)local_14 + uVar12 * 8);
              do {
                *puVar11 = local_2c;
                puVar11[1] = uVar8;
                uVar12 = uVar12 + iVar7;
                puVar11 = puVar11 + iVar7 * 2;
              } while (uVar12 < local_30);
            }
            uVar10 = 1 << ((char)local_c - 1U & 0x1f);
            uVar12 = local_24 & uVar10;
            while (uVar12 != 0) {
              local_24 = local_24 ^ uVar10;
              uVar10 = uVar10 >> 1;
              uVar12 = local_24 & uVar10;
            }
            local_24 = local_24 ^ uVar10;
            if (((1 << (bVar13 & 0x1f)) - 1U & local_24) != local_c4[local_10]) {
              do {
                iVar9 = iVar9 - local_8;
                local_10 = local_10 + -1;
              } while (((1 << ((byte)iVar9 & 0x1f)) - 1U & local_24) != local_c4[local_10]);
            }
            uVar12 = local_c;
            uVar10 = local_8;
          } while (local_18 != 0);
        }
        local_1c = local_1c + 1;
        uVar12 = uVar12 + 1;
        local_c = uVar12;
      } while ((int)uVar12 <= (int)local_20);
    }
    if ((local_40 != 0) && (local_20 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}

