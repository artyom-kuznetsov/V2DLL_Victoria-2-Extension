// FUN_00b308b0 @ 00b308b0 body=[[00b308b0, 00b311b8] [00b311c0, 00b31290]]


undefined4
FUN_00b308b0(undefined4 *param_1,byte *param_2,byte *param_3,int *param_4,int param_5,uint param_6,
            uint *param_7)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int local_3c;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  uVar5 = param_1[2];
  uVar6 = param_1[1];
  puVar7 = (undefined4 *)param_1[3];
  local_10 = 1;
  local_28 = 1;
  uVar8 = *param_1;
  local_24 = 1;
  local_2c = 1;
  *param_4 = 0;
  *param_7 = 0;
  puVar17 = param_1 + 1;
  bVar9 = (byte)uVar8;
  local_18 = 0;
  param_1 = (undefined4 *)0x0;
  uVar10 = (0x300 << ((char)*puVar17 + bVar9 & 0x1f)) + 0x736;
  local_14 = 0;
  if (uVar10 != 0) {
    puVar17 = puVar7;
    for (uVar12 = uVar10 >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar17 = 0x4000400;
      puVar17 = puVar17 + 1;
    }
    for (uVar10 = (uint)((uVar10 & 1) != 0); uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined2 *)puVar17 = 0x400;
      puVar17 = (undefined4 *)((int)puVar17 + 2);
    }
  }
  pbVar1 = param_2 + (int)param_3;
  uVar12 = 0;
  uVar10 = 0xffffffff;
  iVar18 = 0;
  param_3 = param_2;
  do {
    if (param_3 == pbVar1) {
      return 1;
    }
    iVar18 = iVar18 + 1;
    uVar12 = uVar12 << 8 | (uint)*param_3;
    param_3 = param_3 + 1;
  } while (iVar18 < 5);
  if (param_6 != 0) {
LAB_00b30970:
    uVar20 = local_2c;
    uVar13 = (1 << ((byte)uVar5 & 0x1f)) - 1U & local_18;
    puVar15 = (ushort *)((int)puVar7 + (local_14 * 0x10 + uVar13) * 2);
    uVar11 = uVar10;
    if (uVar10 < 0x1000000) {
      if (param_3 == pbVar1) {
        return 1;
      }
      uVar11 = uVar10 << 8;
      uVar12 = uVar12 << 8 | (uint)*param_3;
      param_3 = param_3 + 1;
    }
    uVar4 = *puVar15;
    uVar10 = (uVar11 >> 0xb) * (uint)uVar4;
    if (uVar12 < uVar10) {
      iVar18 = 1;
      *puVar15 = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
      iVar19 = ((uint)(param_1._3_1_ >> (8 - bVar9 & 0x1f)) +
               (((1 << ((byte)uVar6 & 0x1f)) - 1U & local_18) << (bVar9 & 0x1f))) * 0x600;
      iVar2 = iVar19 + 0xe6c;
      if ((int)local_14 < 7) goto LAB_00b30ab0;
      uVar20 = (uint)*(byte *)((local_18 - local_10) + param_5);
      do {
        uVar20 = uVar20 * 2;
        uVar11 = uVar20 & 0x100;
        puVar15 = (ushort *)((int)puVar7 + (uVar11 + iVar18) * 2 + iVar19 + 0x106c);
        if (uVar10 < 0x1000000) {
          if (param_3 == pbVar1) {
            return 1;
          }
          uVar10 = uVar10 << 8;
          uVar12 = uVar12 << 8 | (uint)*param_3;
          param_3 = param_3 + 1;
        }
        uVar4 = *puVar15;
        uVar13 = (uVar10 >> 0xb) * (uint)uVar4;
        if (uVar12 < uVar13) {
          iVar18 = iVar18 * 2;
          *puVar15 = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
          uVar10 = uVar13;
          if (uVar11 != 0) goto joined_r0x00b30aa1;
        }
        else {
          uVar10 = uVar10 - uVar13;
          uVar12 = uVar12 - uVar13;
          *puVar15 = uVar4 - (uVar4 >> 5);
          iVar18 = iVar18 * 2 + 1;
          if (uVar11 == 0) goto joined_r0x00b30aa1;
        }
      } while (iVar18 < 0x100);
      goto LAB_00b30b71;
    }
    uVar11 = uVar11 - uVar10;
    uVar12 = uVar12 - uVar10;
    *puVar15 = uVar4 - (uVar4 >> 5);
    if (uVar11 < 0x1000000) {
      if (param_3 == pbVar1) {
        return 1;
      }
      uVar11 = uVar11 * 0x100;
      uVar12 = uVar12 * 0x100 | (uint)*param_3;
      param_3 = param_3 + 1;
    }
    uVar4 = *(ushort *)((int)puVar7 + local_14 * 2 + 0x180);
    uVar14 = (uVar11 >> 0xb) * (uint)uVar4;
    if (uVar14 <= uVar12) {
      uVar11 = uVar11 - uVar14;
      uVar12 = uVar12 - uVar14;
      *(ushort *)((int)puVar7 + local_14 * 2 + 0x180) = uVar4 - (uVar4 >> 5);
      if (uVar11 < 0x1000000) {
        if (param_3 == pbVar1) {
          return 1;
        }
        uVar11 = uVar11 * 0x100;
        uVar12 = uVar12 * 0x100 | (uint)*param_3;
        param_3 = param_3 + 1;
      }
      uVar4 = *(ushort *)((int)puVar7 + local_14 * 2 + 0x198);
      uVar14 = (uVar11 >> 0xb) * (uint)uVar4;
      if (uVar14 <= uVar12) {
        uVar11 = uVar11 - uVar14;
        uVar12 = uVar12 - uVar14;
        *(ushort *)((int)puVar7 + local_14 * 2 + 0x198) = uVar4 - (uVar4 >> 5);
        if (uVar11 < 0x1000000) {
          if (param_3 == pbVar1) {
            return 1;
          }
          uVar11 = uVar11 * 0x100;
          uVar12 = uVar12 * 0x100 | (uint)*param_3;
          param_3 = param_3 + 1;
        }
        uVar4 = *(ushort *)((int)puVar7 + local_14 * 2 + 0x1b0);
        uVar14 = (uVar11 >> 0xb) * (uint)uVar4;
        if (uVar12 < uVar14) {
          *(ushort *)((int)puVar7 + local_14 * 2 + 0x1b0) =
               (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
          uVar20 = local_28;
        }
        else {
          uVar11 = uVar11 - uVar14;
          uVar12 = uVar12 - uVar14;
          *(ushort *)((int)puVar7 + local_14 * 2 + 0x1b0) = uVar4 - (uVar4 >> 5);
          if (uVar11 < 0x1000000) {
            if (param_3 == pbVar1) {
              return 1;
            }
            uVar11 = uVar11 * 0x100;
            uVar12 = uVar12 * 0x100 | (uint)*param_3;
            param_3 = param_3 + 1;
          }
          uVar4 = *(ushort *)((int)puVar7 + local_14 * 2 + 0x1c8);
          uVar10 = (uVar11 >> 0xb) * (uint)uVar4;
          if (uVar12 < uVar10) {
            *(ushort *)((int)puVar7 + local_14 * 2 + 0x1c8) =
                 (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
            uVar14 = uVar10;
            uVar20 = local_24;
          }
          else {
            uVar14 = uVar11 - uVar10;
            uVar12 = uVar12 - uVar10;
            *(ushort *)((int)puVar7 + local_14 * 2 + 0x1c8) = uVar4 - (uVar4 >> 5);
            local_2c = local_24;
          }
          local_24 = local_28;
        }
        local_28 = local_10;
        local_10 = uVar20;
LAB_00b30eab:
        local_14 = ((6 < (int)local_14) - 1 & 0xfffffffd) + 0xb;
        puVar15 = (ushort *)(puVar7 + 0x29a);
        goto LAB_00b30ec5;
      }
      *(ushort *)((int)puVar7 + local_14 * 2 + 0x198) =
           (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
      puVar15 = (ushort *)((int)puVar7 + ((local_14 + 0xf) * 0x10 + uVar13) * 2);
      if (uVar14 < 0x1000000) {
        if (param_3 == pbVar1) {
          return 1;
        }
        uVar14 = uVar14 * 0x100;
        uVar12 = uVar12 << 8 | (uint)*param_3;
        param_3 = param_3 + 1;
      }
      uVar4 = *puVar15;
      uVar10 = (uVar14 >> 0xb) * (uint)uVar4;
      if (uVar10 <= uVar12) {
        uVar14 = uVar14 - uVar10;
        uVar12 = uVar12 - uVar10;
        *puVar15 = uVar4 - (uVar4 >> 5);
        goto LAB_00b30eab;
      }
      *puVar15 = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
      if (local_18 == 0) {
        return 1;
      }
      local_14 = (uint)(6 < (int)local_14) * 2 + 9;
      bVar3 = *(byte *)((local_18 - local_10) + param_5);
      *(byte *)(local_18 + param_5) = bVar3;
      param_1 = (undefined4 *)((uint)bVar3 << 0x18);
      goto LAB_00b30b88;
    }
    local_2c = local_24;
    *(ushort *)((int)puVar7 + local_14 * 2 + 0x180) =
         (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
    local_24 = local_28;
    local_28 = local_10;
    local_14 = ((int)local_14 < 7) - 1 & 3;
    puVar15 = (ushort *)(puVar7 + 0x199);
LAB_00b30ec5:
    if (uVar14 < 0x1000000) {
      if (param_3 == pbVar1) {
        return 1;
      }
      uVar14 = uVar14 << 8;
      uVar12 = uVar12 << 8 | (uint)*param_3;
      param_3 = param_3 + 1;
    }
    uVar4 = *puVar15;
    uVar10 = (uVar14 >> 0xb) * (uint)uVar4;
    if (uVar12 < uVar10) {
      local_34 = 0;
      *puVar15 = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
      puVar15 = puVar15 + uVar13 * 8 + 2;
      iVar18 = 3;
    }
    else {
      uVar14 = uVar14 - uVar10;
      uVar12 = uVar12 - uVar10;
      *puVar15 = uVar4 - (uVar4 >> 5);
      if (uVar14 < 0x1000000) {
        if (param_3 == pbVar1) {
          return 1;
        }
        uVar14 = uVar14 * 0x100;
        uVar12 = uVar12 * 0x100 | (uint)*param_3;
        param_3 = param_3 + 1;
      }
      uVar4 = puVar15[1];
      uVar20 = (uVar14 >> 0xb) * (uint)uVar4;
      if (uVar12 < uVar20) {
        local_34 = 8;
        puVar15[1] = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
        puVar15 = puVar15 + uVar13 * 8 + 0x82;
        iVar18 = 3;
        uVar10 = uVar20;
      }
      else {
        uVar10 = uVar14 - uVar20;
        uVar12 = uVar12 - uVar20;
        puVar15[1] = uVar4 - (uVar4 >> 5);
        puVar15 = puVar15 + 0x102;
        local_34 = 0x10;
        iVar18 = 8;
      }
    }
    local_1c = 1;
    local_3c = iVar18;
    do {
      if (uVar10 < 0x1000000) {
        if (param_3 == pbVar1) {
          return 1;
        }
        uVar10 = uVar10 << 8;
        uVar12 = uVar12 << 8 | (uint)*param_3;
        param_3 = param_3 + 1;
      }
      uVar4 = puVar15[local_1c];
      uVar20 = (uVar10 >> 0xb) * (uint)uVar4;
      if (uVar12 < uVar20) {
        puVar15[local_1c] = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
        uVar10 = uVar20;
        local_1c = local_1c << 1;
      }
      else {
        uVar10 = uVar10 - uVar20;
        uVar12 = uVar12 - uVar20;
        puVar15[local_1c] = uVar4 - (uVar4 >> 5);
        local_1c = local_1c * 2 + 1;
      }
      local_3c = local_3c + -1;
    } while (local_3c != 0);
    local_1c = local_1c + (local_34 - (1 << (sbyte)iVar18));
    if ((int)local_14 < 4) {
      local_14 = local_14 + 7;
      iVar18 = local_1c;
      if (3 < local_1c) {
        iVar18 = 3;
      }
      iVar18 = iVar18 * 0x80 + 0x360;
      local_3c = 6;
      local_34 = 1;
      do {
        iVar2 = local_34 * 2;
        if (uVar10 < 0x1000000) {
          if (param_3 == pbVar1) {
            return 1;
          }
          uVar10 = uVar10 << 8;
          uVar12 = uVar12 << 8 | (uint)*param_3;
          param_3 = param_3 + 1;
        }
        uVar4 = *(ushort *)((int)puVar7 + iVar2 + iVar18);
        uVar20 = (uVar10 >> 0xb) * (uint)uVar4;
        if (uVar12 < uVar20) {
          *(ushort *)((int)puVar7 + iVar2 + iVar18) =
               (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
          local_34 = local_34 * 2;
          uVar10 = uVar20;
        }
        else {
          uVar10 = uVar10 - uVar20;
          uVar12 = uVar12 - uVar20;
          *(ushort *)((int)puVar7 + iVar2 + iVar18) = uVar4 - (uVar4 >> 5);
          local_34 = iVar2 + 1;
        }
        local_3c = local_3c + -1;
      } while (local_3c != 0);
      local_34 = local_34 - 0x40;
      local_10 = local_34;
      if (3 < (int)local_34) {
        local_30 = ((int)local_34 >> 1) + -1;
        local_10 = local_34 & 1 | 2;
        if ((int)local_34 < 0xe) {
          local_10 = local_10 << ((byte)local_30 & 0x1f);
          puVar17 = (undefined4 *)((int)puVar7 + (local_10 - local_34) * 2 + 0x55e);
        }
        else {
          iVar18 = ((int)local_34 >> 1) + -5;
          pbVar16 = param_3;
          do {
            if (uVar10 < 0x1000000) {
              if (pbVar16 == pbVar1) {
                return 1;
              }
              uVar10 = uVar10 << 8;
              uVar12 = uVar12 << 8 | (uint)*pbVar16;
              pbVar16 = pbVar16 + 1;
              param_3 = pbVar16;
            }
            uVar10 = uVar10 >> 1;
            local_10 = local_10 * 2;
            if (uVar10 <= uVar12) {
              uVar12 = uVar12 - uVar10;
              local_10 = local_10 | 1;
            }
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          puVar17 = puVar7 + 0x191;
          local_10 = local_10 << 4;
          local_30 = 4;
        }
        local_34 = 1;
        param_1 = (undefined4 *)0x1;
        do {
          iVar18 = (int)param_1 * 2;
          if (uVar10 < 0x1000000) {
            if (param_3 == pbVar1) {
              return 1;
            }
            uVar10 = uVar10 << 8;
            uVar12 = uVar12 << 8 | (uint)*param_3;
            param_3 = param_3 + 1;
          }
          uVar4 = *(ushort *)(iVar18 + (int)puVar17);
          uVar20 = (uVar10 >> 0xb) * (uint)uVar4;
          if (uVar12 < uVar20) {
            *(ushort *)(iVar18 + (int)puVar17) = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
            param_1 = (undefined4 *)((int)param_1 * 2);
            uVar10 = uVar20;
          }
          else {
            uVar10 = uVar10 - uVar20;
            uVar12 = uVar12 - uVar20;
            *(ushort *)(iVar18 + (int)puVar17) = uVar4 - (uVar4 >> 5);
            param_1 = (undefined4 *)(iVar18 + 1);
            local_10 = local_10 | local_34;
          }
          local_34 = local_34 << 1;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      local_10 = local_10 + 1;
      if (local_10 == 0) goto LAB_00b30b97;
    }
    local_1c = local_1c + 2;
    if (local_18 < local_10) {
      return 1;
    }
    while( true ) {
      bVar3 = *(byte *)((param_5 - local_10) + local_18);
      local_1c = local_1c + -1;
      *(byte *)(local_18 + param_5) = bVar3;
      local_18 = local_18 + 1;
      param_1 = (undefined4 *)((uint)bVar3 << 0x18);
      if (local_1c == 0) break;
      if (param_6 <= local_18) goto LAB_00b30b97;
    }
    goto LAB_00b30b8b;
  }
LAB_00b30bad:
  *param_4 = (int)param_3 - (int)param_2;
  *param_7 = local_18;
  return 0;
joined_r0x00b30aa1:
  while (iVar18 < 0x100) {
LAB_00b30ab0:
    iVar19 = iVar18 * 2;
    if (uVar10 < 0x1000000) {
      if (param_3 == pbVar1) {
        return 1;
      }
      uVar10 = uVar10 << 8;
      uVar12 = uVar12 << 8 | (uint)*param_3;
      param_3 = param_3 + 1;
    }
    uVar4 = *(ushort *)((int)puVar7 + iVar19 + iVar2);
    uVar20 = (uVar10 >> 0xb) * (uint)uVar4;
    if (uVar12 < uVar20) {
      *(ushort *)((int)puVar7 + iVar19 + iVar2) = (short)((int)(0x800 - (uint)uVar4) >> 5) + uVar4;
      iVar18 = iVar18 * 2;
      uVar10 = uVar20;
    }
    else {
      uVar10 = uVar10 - uVar20;
      uVar12 = uVar12 - uVar20;
      *(ushort *)((int)puVar7 + iVar19 + iVar2) = uVar4 - (uVar4 >> 5);
      iVar18 = iVar19 + 1;
    }
  }
LAB_00b30b71:
  *(char *)(local_18 + param_5) = (char)iVar18;
  param_1 = (undefined4 *)(iVar18 << 0x18);
  if ((int)local_14 < 4) {
    local_14 = 0;
  }
  else if ((int)local_14 < 10) {
    local_14 = local_14 - 3;
  }
  else {
    local_14 = local_14 - 6;
  }
LAB_00b30b88:
  local_18 = local_18 + 1;
LAB_00b30b8b:
  if (param_6 <= local_18) goto LAB_00b30b97;
  goto LAB_00b30970;
LAB_00b30b97:
  if (uVar10 < 0x1000000) {
    if (param_3 == pbVar1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  goto LAB_00b30bad;
}

