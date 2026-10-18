// FUN_00a1ae10 @ 00a1ae10 body=[[00a1ae10, 00a1b149]]


undefined4 FUN_00a1ae10(uint param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *local_10;
  uint local_c;
  byte *local_8;
  
  local_c = param_6[1];
  local_8 = (byte *)*param_6;
  uVar15 = *(uint *)(param_5 + 0x20);
  uVar6 = *(uint *)(param_5 + 0x1c);
  puVar16 = *(undefined1 **)(param_5 + 0x34);
  if (puVar16 < *(undefined1 **)(param_5 + 0x30)) {
    local_10 = *(undefined1 **)(param_5 + 0x30) + (-1 - (int)puVar16);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_5 + 0x2c) - (int)puVar16);
  }
  uVar12 = *(uint *)(&DAT_00dee400 + param_1 * 4);
  uVar5 = *(uint *)(&DAT_00dee400 + param_2 * 4);
  do {
    for (; uVar6 < 0x14; uVar6 = uVar6 + 8) {
      bVar3 = *local_8;
      local_c = local_c - 1;
      local_8 = local_8 + 1;
      uVar15 = uVar15 | (uint)bVar3 << ((byte)uVar6 & 0x1f);
    }
    bVar3 = *(byte *)(param_3 + (uVar12 & uVar15) * 8);
    uVar14 = (uint)bVar3;
    iVar13 = param_3 + (uVar12 & uVar15) * 8;
    bVar4 = *(byte *)(iVar13 + 1);
    uVar15 = uVar15 >> (bVar4 & 0x1f);
    if (uVar14 == 0) {
LAB_00a1b03c:
      uVar6 = uVar6 - bVar4;
      *puVar16 = *(undefined1 *)(iVar13 + 4);
      puVar16 = puVar16 + 1;
      local_10 = local_10 + -1;
    }
    else {
      uVar6 = uVar6 - *(byte *)(iVar13 + 1);
      while ((bVar3 & 0x10) == 0) {
        if ((uVar14 & 0x40) != 0) {
          if ((uVar14 & 0x20) != 0) {
            uVar12 = param_6[1] - local_c;
            if (uVar6 >> 3 < param_6[1] - local_c) {
              uVar12 = uVar6 >> 3;
            }
            *(uint *)(param_5 + 0x20) = uVar15;
            *(uint *)(param_5 + 0x1c) = uVar6 + uVar12 * -8;
            param_6[1] = uVar12 + local_c;
            iVar13 = *param_6;
            *param_6 = (int)local_8 - uVar12;
            param_6[2] = param_6[2] + (((int)local_8 - uVar12) - iVar13);
            *(undefined1 **)(param_5 + 0x34) = puVar16;
            return 1;
          }
          param_6[6] = (int)"invalid literal/length code";
          goto LAB_00a1b104;
        }
        iVar7 = (*(uint *)(&DAT_00dee400 + uVar14 * 4) & uVar15) + *(int *)(iVar13 + 4);
        bVar3 = *(byte *)(iVar13 + iVar7 * 8);
        uVar14 = (uint)bVar3;
        iVar13 = iVar13 + iVar7 * 8;
        bVar4 = *(byte *)(iVar13 + 1);
        uVar15 = uVar15 >> (bVar4 & 0x1f);
        if (uVar14 == 0) goto LAB_00a1b03c;
        uVar6 = uVar6 - *(byte *)(iVar13 + 1);
      }
      uVar14 = uVar14 & 0xf;
      uVar8 = (*(uint *)(&DAT_00dee400 + uVar14 * 4) & uVar15) + *(int *)(iVar13 + 4);
      uVar15 = uVar15 >> (sbyte)uVar14;
      for (uVar6 = uVar6 - uVar14; uVar6 < 0xf; uVar6 = uVar6 + 8) {
        bVar3 = *local_8;
        local_c = local_c - 1;
        local_8 = local_8 + 1;
        uVar15 = uVar15 | (uint)bVar3 << ((byte)uVar6 & 0x1f);
      }
      pbVar1 = (byte *)(param_4 + (uVar5 & uVar15) * 8);
      uVar15 = uVar15 >> (pbVar1[1] & 0x1f);
      uVar6 = uVar6 - pbVar1[1];
      bVar3 = *pbVar1;
      while ((bVar3 & 0x10) == 0) {
        if ((bVar3 & 0x40) != 0) {
          param_6[6] = (int)"invalid distance code";
LAB_00a1b104:
          uVar12 = param_6[1] - local_c;
          if (uVar6 >> 3 < param_6[1] - local_c) {
            uVar12 = uVar6 >> 3;
          }
          *(uint *)(param_5 + 0x20) = uVar15;
          *(uint *)(param_5 + 0x1c) = uVar6 + uVar12 * -8;
          param_6[1] = uVar12 + local_c;
          iVar13 = *param_6;
          *param_6 = (int)local_8 - uVar12;
          param_6[2] = param_6[2] + (((int)local_8 - uVar12) - iVar13);
          *(undefined1 **)(param_5 + 0x34) = puVar16;
          return 0xfffffffd;
        }
        iVar13 = (*(uint *)(&DAT_00dee400 + (uint)bVar3 * 4) & uVar15) + *(int *)(pbVar1 + 4);
        pbVar2 = pbVar1 + iVar13 * 8 + 1;
        pbVar1 = pbVar1 + iVar13 * 8;
        uVar15 = uVar15 >> (*pbVar2 & 0x1f);
        uVar6 = uVar6 - *pbVar2;
        bVar3 = *pbVar1;
      }
      uVar14 = bVar3 & 0xf;
      for (; uVar6 < uVar14; uVar6 = uVar6 + 8) {
        bVar3 = *local_8;
        local_c = local_c - 1;
        local_8 = local_8 + 1;
        uVar15 = uVar15 | (uint)bVar3 << ((byte)uVar6 & 0x1f);
      }
      uVar9 = *(uint *)(&DAT_00dee400 + uVar14 * 4) & uVar15;
      local_10 = local_10 + -uVar8;
      uVar15 = uVar15 >> (sbyte)uVar14;
      uVar6 = uVar6 - uVar14;
      puVar11 = *(undefined1 **)(param_5 + 0x28);
      puVar10 = puVar16 + -(uVar9 + *(int *)(pbVar1 + 4));
      if (puVar10 < puVar11) {
        do {
          puVar10 = puVar10 + (*(int *)(param_5 + 0x2c) - (int)puVar11);
        } while (puVar10 < puVar11);
        param_1 = *(int *)(param_5 + 0x2c) - (int)puVar10;
        if (param_1 < uVar8) {
          iVar13 = uVar8 - param_1;
          do {
            *puVar16 = *puVar10;
            puVar16 = puVar16 + 1;
            puVar10 = puVar10 + 1;
            param_1 = param_1 - 1;
          } while (param_1 != 0);
          puVar11 = *(undefined1 **)(param_5 + 0x28);
          do {
            *puVar16 = *puVar11;
            puVar16 = puVar16 + 1;
            puVar11 = puVar11 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        else {
          *puVar16 = *puVar10;
          puVar16[1] = puVar10[1];
          puVar16 = puVar16 + 2;
          puVar10 = puVar10 + 2;
          iVar13 = uVar8 - 2;
          do {
            *puVar16 = *puVar10;
            puVar16 = puVar16 + 1;
            puVar10 = puVar10 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      else {
        *puVar16 = *puVar10;
        puVar16[1] = puVar10[1];
        puVar16 = puVar16 + 2;
        puVar10 = puVar10 + 2;
        iVar13 = uVar8 - 2;
        do {
          *puVar16 = *puVar10;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if ((local_10 < (undefined1 *)0x102) || (local_c < 10)) {
      uVar12 = param_6[1] - local_c;
      if (uVar6 >> 3 < param_6[1] - local_c) {
        uVar12 = uVar6 >> 3;
      }
      *(uint *)(param_5 + 0x20) = uVar15;
      *(uint *)(param_5 + 0x1c) = uVar6 + uVar12 * -8;
      param_6[1] = uVar12 + local_c;
      iVar13 = *param_6;
      *param_6 = (int)local_8 - uVar12;
      param_6[2] = param_6[2] + (((int)local_8 - uVar12) - iVar13);
      *(undefined1 **)(param_5 + 0x34) = puVar16;
      return 0;
    }
  } while( true );
}

