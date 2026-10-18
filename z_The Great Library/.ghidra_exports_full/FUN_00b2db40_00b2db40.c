// FUN_00b2db40 @ 00b2db40 body=[[00b2db40, 00b2dd18] [00b2dd20, 00b2de38] [00b2de40, 00b2e3e8] [00b2e3f0, 00b2e46c] [00b2e470, 00b2e4c8] [00b2e4d0, 00b2e5d8] [00b2e5e0, 00b2e958] [00b2e960, 00b2ebb9] [00b2ebc0, 00b2ec9b] [00b2eca0, 00b2ef63]]


int FUN_00b2db40(int *param_1,int param_2)

{
  undefined2 uVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined4 local_10;
  byte *local_c;
  uint local_8;
  
  if ((((param_1 == (int *)0x0) || (puVar2 = (uint *)param_1[7], puVar2 == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar2 == 0xb) {
    *puVar2 = 0xc;
  }
  local_24 = param_1[4];
  local_1c = (undefined1 *)param_1[3];
  uVar7 = param_1[1];
  uVar14 = puVar2[0xe];
  uVar3 = *puVar2;
  pbVar4 = (byte *)*param_1;
  uVar16 = puVar2[0xf];
  local_2c = 0;
  local_14 = local_24;
  local_c = pbVar4;
  local_8 = uVar7;
  if (0x1c < uVar3) {
    return -2;
  }
  do {
    pbVar5 = pbVar4;
    uVar12 = local_10;
    switch((&switchD_00b2dbc6::switchdataD_00b2ef64)[uVar3]) {
    case (undefined *)0xb2dbcd:
      if (puVar2[2] == 0) {
        *puVar2 = 0xc;
      }
      else {
        for (; pbVar4 = local_c, local_c = pbVar4, uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if (local_8 == 0) goto LAB_00b2ee5e;
          local_8 = local_8 - 1;
          local_c = pbVar5 + 1;
          uVar14 = uVar14 + ((uint)*pbVar5 << ((byte)uVar16 & 0x1f));
          pbVar5 = local_c;
        }
        if (((puVar2[2] & 2) == 0) || (uVar14 != 0x8b1f)) {
          puVar2[4] = 0;
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x30) = 0xffffffff;
          }
          if (((puVar2[2] & 1) == 0) || (((uVar14 & 0xff) * 0x100 + (uVar14 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else if (((byte)uVar14 & 0xf) == 8) {
            uVar3 = (uVar14 >> 4 & 0xf) + 8;
            uVar16 = uVar16 - 4;
            if (uVar3 <= puVar2[9]) {
              puVar2[5] = 1 << (sbyte)uVar3;
              uVar3 = FUN_00b302d0(0,0,0);
              puVar2[6] = uVar3;
              param_1[0xc] = uVar3;
              *puVar2 = ~(uVar14 >> 0xc) & 2 | 9;
              uVar14 = 0;
              uVar16 = 0;
              pbVar4 = local_c;
              break;
            }
            param_1[6] = (int)"invalid window size";
            uVar14 = uVar14 >> 4;
          }
          else {
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00b2ee01;
        }
        uVar3 = FUN_00b30800(0,0,0);
        puVar2[6] = uVar3;
        local_18 = 0x8b1f;
        uVar3 = FUN_00b30800(puVar2[6],&local_18,2);
        puVar2[6] = uVar3;
        uVar14 = 0;
        uVar16 = 0;
        *puVar2 = 1;
        pbVar4 = local_c;
      }
      break;
    case (undefined *)0xb2dd12:
      for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
        pbVar5 = pbVar4;
        if (local_8 == 0) goto LAB_00b2ee5e;
        bVar10 = *pbVar4;
        local_8 = local_8 - 1;
        pbVar4 = pbVar4 + 1;
        uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
        local_c = pbVar4;
      }
      puVar2[4] = uVar14;
      if ((char)uVar14 == '\b') {
        if ((uVar14 & 0xe000) == 0) {
          if ((uint *)puVar2[8] != (uint *)0x0) {
            *(uint *)puVar2[8] = uVar14 >> 8 & 1;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_18 = (undefined2)uVar14;
            uVar3 = FUN_00b30800(puVar2[6],&local_18,2);
            puVar2[6] = uVar3;
            pbVar4 = local_c;
          }
          uVar14 = 0;
          uVar16 = 0;
          *puVar2 = 2;
          do {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            bVar9 = (byte)uVar16;
            pbVar4 = pbVar4 + 1;
            uVar16 = uVar16 + 8;
            uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_c = pbVar4;
joined_r0x00b2ddba:
          } while (uVar16 < 0x20);
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 4) = uVar14;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_18 = (undefined2)uVar14;
            local_16 = (undefined1)(uVar14 >> 0x10);
            local_15 = (undefined1)(uVar14 >> 0x18);
            uVar3 = FUN_00b30800(puVar2[6],&local_18,4);
            puVar2[6] = uVar3;
            pbVar4 = local_c;
          }
          uVar14 = 0;
          uVar16 = 0;
          *puVar2 = 3;
          do {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            bVar9 = (byte)uVar16;
            pbVar4 = pbVar4 + 1;
            uVar16 = uVar16 + 8;
            uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_c = pbVar4;
joined_r0x00b2de35:
          } while (uVar16 < 0x10);
          if (puVar2[8] != 0) {
            *(uint *)(puVar2[8] + 8) = uVar14 & 0xff;
            *(uint *)(puVar2[8] + 0xc) = uVar14 >> 8;
          }
          if ((puVar2[4] & 0x200) != 0) {
            local_18 = (undefined2)uVar14;
            uVar3 = FUN_00b30800(puVar2[6],&local_18,2);
            puVar2[6] = uVar3;
            pbVar4 = local_c;
          }
          uVar14 = 0;
          uVar16 = 0;
          *puVar2 = 4;
          goto switchD_00b2dbc6_caseD_b2deb3;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00b2ee01;
    case (undefined *)0xb2ddb7:
      goto joined_r0x00b2ddba;
    case (undefined *)0xb2de32:
      goto joined_r0x00b2de35;
    case (undefined *)0xb2deb3:
switchD_00b2dbc6_caseD_b2deb3:
      if ((puVar2[4] & 0x400) == 0) {
        if (puVar2[8] != 0) {
          *(undefined4 *)(puVar2[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          pbVar5 = pbVar4;
          uVar12 = local_10;
          if (local_8 == 0) goto LAB_00b2ee5e;
          bVar10 = *pbVar4;
          local_8 = local_8 - 1;
          pbVar4 = pbVar4 + 1;
          uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
          local_c = pbVar4;
        }
        puVar2[0x10] = uVar14;
        if (puVar2[8] != 0) {
          *(uint *)(puVar2[8] + 0x14) = uVar14;
        }
        if ((puVar2[4] & 0x200) != 0) {
          local_18 = (undefined2)uVar14;
          uVar3 = FUN_00b30800(puVar2[6],&local_18,2);
          puVar2[6] = uVar3;
          pbVar4 = local_c;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *puVar2 = 5;
    case (undefined *)0xb2df34:
      if ((puVar2[4] & 0x400) == 0) {
LAB_00b2dfd7:
        puVar2[0x10] = 0;
        *puVar2 = 6;
switchD_00b2dbc6_caseD_b2dfe4:
        if ((puVar2[4] & 0x800) == 0) {
          if (puVar2[8] != 0) {
            *(undefined4 *)(puVar2[8] + 0x1c) = 0;
          }
LAB_00b2e089:
          puVar2[0x10] = 0;
          *puVar2 = 7;
switchD_00b2dbc6_caseD_b2e096:
          if ((puVar2[4] & 0x1000) == 0) {
            if (puVar2[8] != 0) {
              *(undefined4 *)(puVar2[8] + 0x24) = 0;
            }
LAB_00b2e139:
            *puVar2 = 8;
switchD_00b2dbc6_caseD_b2e13f:
            if ((puVar2[4] & 0x200) != 0) {
              for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                pbVar5 = pbVar4;
                uVar12 = local_10;
                if (local_8 == 0) goto LAB_00b2ee5e;
                bVar10 = *pbVar4;
                local_8 = local_8 - 1;
                pbVar4 = pbVar4 + 1;
                uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
                local_c = pbVar4;
              }
              if (uVar14 != (ushort)puVar2[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00b2ee01;
              }
              uVar14 = 0;
              uVar16 = 0;
            }
            if (puVar2[8] != 0) {
              *(uint *)(puVar2[8] + 0x2c) = (int)puVar2[4] >> 9 & 1;
              *(undefined4 *)(puVar2[8] + 0x30) = 1;
            }
            uVar3 = FUN_00b30800(0,0,0);
            puVar2[6] = uVar3;
            param_1[0xc] = uVar3;
            *puVar2 = 0xb;
            pbVar4 = local_c;
            break;
          }
          pbVar5 = pbVar4;
          uVar12 = local_10;
          if (local_8 != 0) {
            local_10 = 0;
            do {
              bVar10 = pbVar4[local_10];
              local_10 = local_10 + 1;
              uVar3 = puVar2[8];
              if (((uVar3 != 0) && (*(int *)(uVar3 + 0x24) != 0)) &&
                 (puVar2[0x10] < *(uint *)(uVar3 + 0x28))) {
                *(byte *)(*(int *)(uVar3 + 0x24) + puVar2[0x10]) = bVar10;
                puVar2[0x10] = puVar2[0x10] + 1;
                pbVar4 = local_c;
              }
            } while ((bVar10 != 0) && (local_10 < local_8));
            if ((puVar2[4] & 0x200) != 0) {
              uVar3 = FUN_00b30800(puVar2[6],local_c,local_10);
              puVar2[6] = uVar3;
              pbVar4 = local_c;
            }
            local_8 = local_8 - local_10;
            pbVar4 = pbVar4 + local_10;
            pbVar5 = pbVar4;
            uVar12 = local_10;
            local_c = pbVar4;
            if (bVar10 == 0) goto LAB_00b2e139;
          }
        }
        else {
          pbVar5 = pbVar4;
          uVar12 = local_10;
          if (local_8 != 0) {
            local_10 = 0;
            do {
              bVar10 = pbVar4[local_10];
              local_10 = local_10 + 1;
              uVar3 = puVar2[8];
              if (((uVar3 != 0) && (*(int *)(uVar3 + 0x1c) != 0)) &&
                 (puVar2[0x10] < *(uint *)(uVar3 + 0x20))) {
                *(byte *)(*(int *)(uVar3 + 0x1c) + puVar2[0x10]) = bVar10;
                puVar2[0x10] = puVar2[0x10] + 1;
                pbVar4 = local_c;
              }
            } while ((bVar10 != 0) && (local_10 < local_8));
            if ((puVar2[4] & 0x200) != 0) {
              uVar3 = FUN_00b30800(puVar2[6],local_c,local_10);
              puVar2[6] = uVar3;
              pbVar4 = local_c;
            }
            local_8 = local_8 - local_10;
            pbVar4 = pbVar4 + local_10;
            pbVar5 = pbVar4;
            uVar12 = local_10;
            local_c = pbVar4;
            if (bVar10 == 0) goto LAB_00b2e089;
          }
        }
      }
      else {
        local_10 = puVar2[0x10];
        if (local_8 < puVar2[0x10]) {
          local_10 = local_8;
        }
        if (local_10 != 0) {
          if ((puVar2[8] != 0) && (iVar6 = *(int *)(puVar2[8] + 0x10), iVar6 != 0)) {
            iVar15 = *(int *)(puVar2[8] + 0x14) - puVar2[0x10];
            uVar3 = *(uint *)(puVar2[8] + 0x18);
            uVar12 = local_10;
            if (uVar3 < iVar15 + local_10) {
              uVar12 = uVar3 - iVar15;
            }
            FID_conflict__memcpy((void *)(iVar6 + iVar15),local_c,uVar12);
            pbVar4 = local_c;
          }
          if ((puVar2[4] & 0x200) != 0) {
            uVar3 = FUN_00b30800(puVar2[6],local_c,local_10);
            puVar2[6] = uVar3;
            pbVar4 = local_c;
          }
          local_8 = local_8 - local_10;
          pbVar4 = pbVar4 + local_10;
          puVar2[0x10] = puVar2[0x10] - local_10;
          local_c = pbVar4;
        }
        pbVar5 = pbVar4;
        uVar12 = local_10;
        if (puVar2[0x10] == 0) goto LAB_00b2dfd7;
      }
LAB_00b2ee5e:
      local_10 = uVar12;
      param_1[3] = (int)local_1c;
      *param_1 = (int)pbVar5;
      param_1[4] = local_14;
      param_1[1] = local_8;
      puVar2[0xe] = uVar14;
      puVar2[0xf] = uVar16;
      if (((puVar2[10] == 0) && ((0x17 < (int)*puVar2 || (local_24 == param_1[4])))) ||
         (iVar6 = FUN_00b2da40(), iVar6 == 0)) {
        iVar6 = uVar7 - param_1[1];
        iVar15 = local_24 - param_1[4];
        param_1[2] = param_1[2] + iVar6;
        param_1[5] = param_1[5] + iVar15;
        puVar2[7] = puVar2[7] + iVar15;
        if ((puVar2[2] != 0) && (iVar15 != 0)) {
          if (puVar2[4] == 0) {
            uVar7 = FUN_00b302d0(puVar2[6],param_1[3] - iVar15,iVar15);
          }
          else {
            uVar7 = FUN_00b30800(puVar2[6],param_1[3] - iVar15);
          }
          puVar2[6] = uVar7;
          param_1[0xc] = uVar7;
        }
        param_1[0xb] = (-(uint)(puVar2[1] != 0) & 0x40) + ((*puVar2 != 0xb) - 1 & 0x80) +
                       puVar2[0xf];
        if (((iVar6 != 0) || (iVar15 != 0)) && (param_2 != 4)) {
          return local_2c;
        }
        if (local_2c != 0) {
          return local_2c;
        }
        return -5;
      }
      *puVar2 = 0x1c;
switchD_00b2dbc6_caseD_b2eea6:
      return -4;
    case (undefined *)0xb2dfe4:
      goto switchD_00b2dbc6_caseD_b2dfe4;
    case (undefined *)0xb2e096:
      goto switchD_00b2dbc6_caseD_b2e096;
    case (undefined *)0xb2e13f:
      goto switchD_00b2dbc6_caseD_b2e13f;
    case (undefined *)0xb2e1cf:
      for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        pbVar5 = pbVar4;
        if (local_8 == 0) goto LAB_00b2ee5e;
        bVar10 = *pbVar4;
        local_8 = local_8 - 1;
        pbVar4 = pbVar4 + 1;
        uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
        local_c = pbVar4;
      }
      uVar3 = ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 + (uVar14 >> 8 & 0xff00) +
              (uVar14 >> 0x18);
      puVar2[6] = uVar3;
      param_1[0xc] = uVar3;
      uVar14 = 0;
      uVar16 = 0;
      *puVar2 = 10;
    case (undefined *)0xb2e22d:
      if (puVar2[3] == 0) {
        *param_1 = (int)pbVar4;
        param_1[3] = (int)local_1c;
        param_1[1] = local_8;
        param_1[4] = local_14;
        puVar2[0xf] = uVar16;
        puVar2[0xe] = uVar14;
        return 2;
      }
      uVar3 = FUN_00b302d0(0,0,0);
      puVar2[6] = uVar3;
      param_1[0xc] = uVar3;
      *puVar2 = 0xb;
      pbVar4 = local_c;
switchD_00b2dbc6_caseD_b2e257:
      pbVar5 = pbVar4;
      uVar12 = local_10;
      if (param_2 != 5) {
switchD_00b2dbc6_caseD_b2e261:
        if (puVar2[1] == 0) {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            pbVar4 = pbVar4 + 1;
            uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
            local_c = pbVar4;
          }
          puVar2[1] = uVar14 & 1;
          switch(uVar14 >> 1 & 3) {
          case 0:
            uVar14 = uVar14 >> 3;
            *puVar2 = 0xd;
            uVar16 = uVar16 - 3;
            break;
          case 1:
            uVar14 = uVar14 >> 3;
            puVar2[0x13] = (uint)&DAT_00de59f0;
            puVar2[0x15] = 9;
            puVar2[0x14] = (uint)&DAT_00de61f0;
            puVar2[0x16] = 5;
            *puVar2 = 0x12;
            uVar16 = uVar16 - 3;
            break;
          case 2:
            uVar14 = uVar14 >> 3;
            *puVar2 = 0xf;
            uVar16 = uVar16 - 3;
            break;
          case 3:
            param_1[6] = (int)"invalid block type";
            *puVar2 = 0x1b;
          default:
            uVar14 = uVar14 >> 3;
            uVar16 = uVar16 - 3;
          }
        }
        else {
          uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
          uVar16 = uVar16 - (uVar16 & 7);
          *puVar2 = 0x18;
        }
        break;
      }
      goto LAB_00b2ee5e;
    case (undefined *)0xb2e257:
      goto switchD_00b2dbc6_caseD_b2e257;
    case (undefined *)0xb2e261:
      goto switchD_00b2dbc6_caseD_b2e261;
    case (undefined *)0xb2e327:
      uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
      for (uVar16 = uVar16 - (uVar16 & 7); uVar16 < 0x20; uVar16 = uVar16 + 8) {
        pbVar5 = pbVar4;
        if (local_8 == 0) goto LAB_00b2ee5e;
        bVar10 = *pbVar4;
        local_8 = local_8 - 1;
        pbVar4 = pbVar4 + 1;
        uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
        local_c = pbVar4;
      }
      uVar3 = uVar14 & 0xffff;
      if (uVar3 == ~uVar14 >> 0x10) {
        uVar14 = 0;
        puVar2[0x10] = uVar3;
        uVar16 = 0;
        *puVar2 = 0xe;
        goto switchD_00b2dbc6_caseD_b2e386;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_00b2ee01;
    case (undefined *)0xb2e386:
switchD_00b2dbc6_caseD_b2e386:
      local_10 = puVar2[0x10];
      if (local_10 == 0) {
LAB_00b2e9ec:
        *puVar2 = 0xb;
      }
      else {
        if (local_8 < local_10) {
          local_10 = local_8;
        }
        if (local_14 < local_10) {
          local_10 = local_14;
        }
        pbVar5 = pbVar4;
        uVar12 = local_10;
        if (local_10 == 0) goto LAB_00b2ee5e;
        FID_conflict__memcpy(local_1c,local_c,local_10);
        local_8 = local_8 - local_10;
        local_c = local_c + local_10;
        local_14 = local_14 - local_10;
        local_1c = local_1c + local_10;
        puVar2[0x10] = puVar2[0x10] - local_10;
        pbVar4 = local_c;
      }
      break;
    case (undefined *)0xb2e3e2:
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        pbVar5 = pbVar4;
        if (local_8 == 0) goto LAB_00b2ee5e;
        bVar10 = *pbVar4;
        local_8 = local_8 - 1;
        pbVar4 = pbVar4 + 1;
        uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
        local_c = pbVar4;
      }
      puVar2[0x18] = (uVar14 & 0x1f) + 0x101;
      uVar13 = uVar14 >> 10;
      uVar3 = (uVar14 >> 5 & 0x1f) + 1;
      uVar14 = uVar14 >> 0xe;
      uVar16 = uVar16 - 0xe;
      puVar2[0x19] = uVar3;
      puVar2[0x17] = (uVar13 & 0xf) + 4;
      if ((puVar2[0x18] < 0x11f) && (uVar3 < 0x1f)) {
        puVar2[0x1a] = 0;
        *puVar2 = 0x10;
        goto switchD_00b2dbc6_caseD_b2e463;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00b2ee01;
    case (undefined *)0xb2e463:
switchD_00b2dbc6_caseD_b2e463:
      if (puVar2[0x1a] < puVar2[0x17]) {
        do {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            pbVar5 = pbVar4;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            pbVar4 = pbVar4 + 1;
            uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
            local_c = pbVar4;
          }
          *(ushort *)((int)puVar2 + (uint)*(ushort *)(&DAT_00de6270 + puVar2[0x1a] * 2) * 2 + 0x70)
               = (ushort)uVar14 & 7;
          puVar2[0x1a] = puVar2[0x1a] + 1;
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
        } while (puVar2[0x1a] < puVar2[0x17]);
      }
      uVar3 = puVar2[0x1a];
      while (uVar3 < 0x13) {
        *(undefined2 *)
         ((int)puVar2 + (uint)*(ushort *)(&DAT_00de6270 + puVar2[0x1a] * 2) * 2 + 0x70) = 0;
        puVar2[0x1a] = puVar2[0x1a] + 1;
        uVar3 = puVar2[0x1a];
      }
      puVar2[0x1b] = (uint)(puVar2 + 0x14c);
      puVar2[0x13] = (uint)(puVar2 + 0x14c);
      puVar2[0x15] = 7;
      local_2c = FUN_00b2fe20(0,puVar2 + 0x1c,0x13,puVar2 + 0x1b,puVar2 + 0x15,puVar2 + 0xbc);
      pbVar4 = local_c;
      if (local_2c == 0) {
        puVar2[0x1a] = 0;
        *puVar2 = 0x11;
        goto switchD_00b2dbc6_caseD_b2e54f;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00b2ee01:
      *puVar2 = 0x1b;
      break;
    case (undefined *)0xb2e54f:
switchD_00b2dbc6_caseD_b2e54f:
      if (puVar2[0x1a] < puVar2[0x19] + puVar2[0x18]) {
        do {
          uVar12 = *(uint *)(puVar2[0x13] + ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar14) * 4);
          local_10 = uVar12;
          if (uVar16 < (uVar12 >> 8 & 0xff)) {
            do {
              pbVar5 = pbVar4;
              uVar12 = local_10;
              if (local_8 == 0) goto LAB_00b2ee5e;
              bVar10 = *pbVar4;
              local_8 = local_8 - 1;
              bVar9 = (byte)uVar16;
              pbVar4 = pbVar4 + 1;
              uVar16 = uVar16 + 8;
              uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
              uVar12 = *(uint *)(puVar2[0x13] +
                                ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar14) * 4);
              local_10 = uVar12;
              local_c = pbVar4;
            } while (uVar16 < (uVar12 >> 8 & 0xff));
          }
          local_10._2_2_ = (short)(uVar12 >> 0x10);
          bVar10 = (byte)(uVar12 >> 8);
          local_10 = uVar12;
          if (uVar12 >> 0x10 < 0x10) {
            if (uVar16 < (uVar12 >> 8 & 0xff)) {
              do {
                pbVar5 = pbVar4;
                if (local_8 == 0) goto LAB_00b2ee5e;
                bVar9 = *pbVar4;
                local_8 = local_8 - 1;
                bVar8 = (byte)uVar16;
                pbVar4 = pbVar4 + 1;
                uVar16 = uVar16 + 8;
                uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                local_c = pbVar4;
              } while (uVar16 < (uVar12 >> 8 & 0xff));
            }
            uVar14 = uVar14 >> (bVar10 & 0x1f);
            uVar16 = uVar16 - (uVar12 >> 8 & 0xff);
            *(short *)((int)puVar2 + puVar2[0x1a] * 2 + 0x70) = local_10._2_2_;
            puVar2[0x1a] = puVar2[0x1a] + 1;
          }
          else {
            uVar3 = uVar12 >> 8 & 0xff;
            if (local_10._2_2_ == 0x10) {
              if (uVar16 < uVar3 + 2) {
                do {
                  pbVar5 = pbVar4;
                  if (local_8 == 0) goto LAB_00b2ee5e;
                  bVar9 = *pbVar4;
                  local_8 = local_8 - 1;
                  bVar8 = (byte)uVar16;
                  pbVar4 = pbVar4 + 1;
                  uVar16 = uVar16 + 8;
                  uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                  local_c = pbVar4;
                } while (uVar16 < uVar3 + 2);
              }
              uVar14 = uVar14 >> (bVar10 & 0x1f);
              uVar16 = uVar16 - uVar3;
              if (puVar2[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                goto LAB_00b2ee01;
              }
              uVar1 = *(undefined2 *)((int)puVar2 + puVar2[0x1a] * 2 + 0x6e);
              local_10 = (uVar14 & 3) + 3;
              uVar14 = uVar14 >> 2;
              uVar16 = uVar16 - 2;
            }
            else {
              if (local_10._2_2_ == 0x11) {
                if (uVar16 < uVar3 + 3) {
                  do {
                    pbVar5 = pbVar4;
                    if (local_8 == 0) goto LAB_00b2ee5e;
                    bVar9 = *pbVar4;
                    local_8 = local_8 - 1;
                    bVar8 = (byte)uVar16;
                    pbVar4 = pbVar4 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    local_c = pbVar4;
                  } while (uVar16 < uVar3 + 3);
                }
                uVar14 = uVar14 >> (bVar10 & 0x1f);
                local_10 = (uVar14 & 7) + 3;
                uVar14 = uVar14 >> 3;
                iVar6 = -3;
              }
              else {
                if (uVar16 < uVar3 + 7) {
                  do {
                    pbVar5 = pbVar4;
                    if (local_8 == 0) goto LAB_00b2ee5e;
                    bVar9 = *pbVar4;
                    local_8 = local_8 - 1;
                    bVar8 = (byte)uVar16;
                    pbVar4 = pbVar4 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    local_c = pbVar4;
                  } while (uVar16 < uVar3 + 7);
                }
                uVar14 = uVar14 >> (bVar10 & 0x1f);
                local_10 = (uVar14 & 0x7f) + 0xb;
                uVar14 = uVar14 >> 7;
                iVar6 = -7;
              }
              uVar16 = uVar16 + (iVar6 - uVar3);
              uVar1 = 0;
            }
            if (puVar2[0x19] + puVar2[0x18] < puVar2[0x1a] + local_10) {
              param_1[6] = (int)"invalid bit length repeat";
              goto LAB_00b2ee01;
            }
            for (; local_10 != 0; local_10 = local_10 - 1) {
              *(undefined2 *)((int)puVar2 + puVar2[0x1a] * 2 + 0x70) = uVar1;
              puVar2[0x1a] = puVar2[0x1a] + 1;
            }
          }
        } while (puVar2[0x1a] < puVar2[0x19] + puVar2[0x18]);
      }
      if (*puVar2 != 0x1b) {
        puVar2[0x1b] = (uint)(puVar2 + 0x14c);
        puVar2[0x13] = (uint)(puVar2 + 0x14c);
        puVar2[0x15] = 9;
        local_2c = FUN_00b2fe20(1,puVar2 + 0x1c,puVar2[0x18],puVar2 + 0x1b,puVar2 + 0x15,
                                puVar2 + 0xbc);
        if (local_2c == 0) {
          puVar2[0x14] = puVar2[0x1b];
          puVar2[0x16] = 6;
          local_2c = FUN_00b2fe20(2,(int)puVar2 + puVar2[0x18] * 2 + 0x70,puVar2[0x19],puVar2 + 0x1b
                                  ,puVar2 + 0x16,puVar2 + 0xbc);
          pbVar4 = local_c;
          if (local_2c == 0) {
            *puVar2 = 0x12;
            goto switchD_00b2dbc6_caseD_b2e838;
          }
          param_1[6] = (int)"invalid distances set";
        }
        else {
          param_1[6] = (int)"invalid literal/lengths set";
          pbVar4 = local_c;
        }
        goto LAB_00b2ee01;
      }
      break;
    case (undefined *)0xb2e838:
switchD_00b2dbc6_caseD_b2e838:
      if ((local_8 < 6) || (local_14 < 0x102)) {
        uVar3 = *(uint *)(puVar2[0x13] + ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar14) * 4);
        local_10 = uVar3;
        if (uVar16 < (uVar3 >> 8 & 0xff)) {
          do {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            bVar9 = (byte)uVar16;
            pbVar4 = pbVar4 + 1;
            uVar16 = uVar16 + 8;
            uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
            uVar3 = *(uint *)(puVar2[0x13] + ((1 << ((byte)puVar2[0x15] & 0x1f)) - 1U & uVar14) * 4)
            ;
            local_10 = uVar3;
            local_c = pbVar4;
          } while (uVar16 < (uVar3 >> 8 & 0xff));
        }
        cVar11 = (char)uVar3;
        local_10 = uVar3;
        if ((cVar11 != '\0') && ((uVar3 & 0xf0) == 0)) {
          bVar10 = (byte)(uVar3 >> 8);
          local_10 = *(uint *)(puVar2[0x13] +
                              ((((1 << (cVar11 + bVar10 & 0x1f)) - 1U & uVar14) >> (bVar10 & 0x1f))
                              + (uVar3 >> 0x10)) * 4);
          if (uVar16 < (local_10 >> 8 & 0xff) + (uVar3 >> 8 & 0xff)) {
            do {
              pbVar5 = pbVar4;
              uVar12 = local_10;
              if (local_8 == 0) goto LAB_00b2ee5e;
              bVar9 = *pbVar4;
              local_8 = local_8 - 1;
              pbVar4 = pbVar4 + 1;
              uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
              uVar16 = uVar16 + 8;
              local_10 = *(uint *)(puVar2[0x13] +
                                  ((((1 << (cVar11 + bVar10 & 0x1f)) - 1U & uVar14) >>
                                   (bVar10 & 0x1f)) + (uVar3 >> 0x10)) * 4);
              local_c = pbVar4;
            } while (uVar16 < (local_10 >> 8 & 0xff) + (uVar3 >> 8 & 0xff));
          }
          uVar14 = uVar14 >> (bVar10 & 0x1f);
          uVar16 = uVar16 - bVar10;
        }
        uVar14 = uVar14 >> ((byte)(local_10 >> 8) & 0x1f);
        uVar16 = uVar16 - (local_10 >> 8 & 0xff);
        puVar2[0x10] = local_10 >> 0x10;
        if ((char)local_10 == '\0') {
          *puVar2 = 0x17;
          break;
        }
        if ((local_10 & 0x20) == 0) {
          if ((local_10 & 0x40) == 0) {
            puVar2[0x12] = local_10 & 0xf;
            *puVar2 = 0x13;
            goto switchD_00b2dbc6_caseD_b2ea1a;
          }
          param_1[6] = (int)"invalid literal/length code";
          goto LAB_00b2ee01;
        }
        goto LAB_00b2e9ec;
      }
      param_1[3] = (int)local_1c;
      *param_1 = (int)local_c;
      param_1[4] = local_14;
      param_1[1] = local_8;
      puVar2[0xe] = uVar14;
      puVar2[0xf] = uVar16;
      FUN_00b2fa10(param_1,local_24);
      local_1c = (undefined1 *)param_1[3];
      local_14 = param_1[4];
      uVar14 = puVar2[0xe];
      uVar16 = puVar2[0xf];
      local_c = (byte *)*param_1;
      local_8 = param_1[1];
      pbVar4 = local_c;
      break;
    case (undefined *)0xb2ea1a:
switchD_00b2dbc6_caseD_b2ea1a:
      if (puVar2[0x12] != 0) {
        if (uVar16 < puVar2[0x12]) {
          do {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            bVar9 = (byte)uVar16;
            pbVar4 = pbVar4 + 1;
            uVar16 = uVar16 + 8;
            uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_c = pbVar4;
          } while (uVar16 < puVar2[0x12]);
        }
        bVar10 = (byte)puVar2[0x12];
        puVar2[0x10] = puVar2[0x10] + ((1 << (bVar10 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> (bVar10 & 0x1f);
        uVar16 = uVar16 - puVar2[0x12];
      }
      *puVar2 = 0x14;
    case (undefined *)0xb2ea61:
      uVar3 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & uVar14) * 4);
      local_10 = uVar3;
      if (uVar16 < (uVar3 >> 8 & 0xff)) {
        do {
          pbVar5 = pbVar4;
          uVar12 = local_10;
          if (local_8 == 0) goto LAB_00b2ee5e;
          bVar10 = *pbVar4;
          local_8 = local_8 - 1;
          bVar9 = (byte)uVar16;
          pbVar4 = pbVar4 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
          uVar3 = *(uint *)(puVar2[0x14] + ((1 << ((byte)puVar2[0x16] & 0x1f)) - 1U & uVar14) * 4);
          local_10 = uVar3;
          local_c = pbVar4;
        } while (uVar16 < (uVar3 >> 8 & 0xff));
      }
      local_10 = uVar3;
      if ((uVar3 & 0xf0) == 0) {
        bVar10 = (byte)(uVar3 >> 8);
        local_10 = *(uint *)(puVar2[0x14] +
                            ((((1 << ((char)uVar3 + bVar10 & 0x1f)) - 1U & uVar14) >>
                             (bVar10 & 0x1f)) + (uVar3 >> 0x10)) * 4);
        if (uVar16 < (local_10 >> 8 & 0xff) + (uVar3 >> 8 & 0xff)) {
          do {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar9 = *pbVar4;
            local_8 = local_8 - 1;
            pbVar4 = pbVar4 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            local_10 = *(uint *)(puVar2[0x14] +
                                ((((1 << ((char)uVar3 + bVar10 & 0x1f)) - 1U & uVar14) >>
                                 (bVar10 & 0x1f)) + (uVar3 >> 0x10)) * 4);
            local_c = pbVar4;
          } while (uVar16 < (local_10 >> 8 & 0xff) + (uVar3 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar10 & 0x1f);
        uVar16 = uVar16 - bVar10;
      }
      uVar14 = uVar14 >> ((byte)(local_10 >> 8) & 0x1f);
      uVar16 = uVar16 - (local_10 >> 8 & 0xff);
      if ((local_10 & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00b2ee01;
      }
      puVar2[0x11] = local_10 >> 0x10;
      puVar2[0x12] = local_10 & 0xf;
      *puVar2 = 0x15;
switchD_00b2dbc6_caseD_b2ebad:
      if (puVar2[0x12] != 0) {
        if (uVar16 < puVar2[0x12]) {
          do {
            pbVar5 = pbVar4;
            uVar12 = local_10;
            if (local_8 == 0) goto LAB_00b2ee5e;
            bVar10 = *pbVar4;
            local_8 = local_8 - 1;
            bVar9 = (byte)uVar16;
            pbVar4 = pbVar4 + 1;
            uVar16 = uVar16 + 8;
            uVar14 = uVar14 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_c = pbVar4;
          } while (uVar16 < puVar2[0x12]);
        }
        bVar10 = (byte)puVar2[0x12];
        puVar2[0x11] = puVar2[0x11] + ((1 << (bVar10 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> (bVar10 & 0x1f);
        uVar16 = uVar16 - puVar2[0x12];
      }
      if ((puVar2[0xb] - local_14) + local_24 < puVar2[0x11]) {
        param_1[6] = (int)"invalid distance too far back";
        goto LAB_00b2ee01;
      }
      *puVar2 = 0x16;
switchD_00b2dbc6_caseD_b2ec19:
      pbVar5 = pbVar4;
      uVar12 = local_10;
      if (local_14 != 0) {
        uVar3 = puVar2[0x11];
        if (local_24 - local_14 < uVar3) {
          local_10 = uVar3 - (local_24 - local_14);
          if (puVar2[0xc] < local_10) {
            local_10 = local_10 - puVar2[0xc];
            local_30 = (puVar2[0xd] + puVar2[10]) - local_10;
          }
          else {
            local_30 = (puVar2[0xd] - local_10) + puVar2[0xc];
          }
          local_28 = puVar2[0x10];
          if (local_28 < local_10) goto LAB_00b2ec75;
        }
        else {
          local_30 = (int)local_1c - uVar3;
          local_28 = puVar2[0x10];
LAB_00b2ec75:
          local_10 = local_28;
        }
        if (local_14 < local_10) {
          local_10 = local_14;
        }
        local_14 = local_14 - local_10;
        local_30 = local_30 - (int)local_1c;
        puVar2[0x10] = local_28 - local_10;
        do {
          *local_1c = local_1c[local_30];
          local_1c = local_1c + 1;
          local_10 = local_10 - 1;
        } while (local_10 != 0);
        local_10 = 0;
        if (puVar2[0x10] == 0) {
          *puVar2 = 0x12;
        }
        break;
      }
      goto LAB_00b2ee5e;
    case (undefined *)0xb2ebad:
      goto switchD_00b2dbc6_caseD_b2ebad;
    case (undefined *)0xb2ec19:
      goto switchD_00b2dbc6_caseD_b2ec19;
    case (undefined *)0xb2eccc:
      if (local_14 == 0) goto LAB_00b2ee5e;
      *local_1c = (char)puVar2[0x10];
      local_1c = local_1c + 1;
      local_14 = local_14 - 1;
      *puVar2 = 0x12;
      break;
    case (undefined *)0xb2ecf0:
      if (puVar2[2] != 0) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar5 = pbVar4;
          if (local_8 == 0) goto LAB_00b2ee5e;
          bVar10 = *pbVar4;
          local_8 = local_8 - 1;
          pbVar4 = pbVar4 + 1;
          uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
          local_c = pbVar4;
        }
        iVar6 = local_24 - local_14;
        param_1[5] = param_1[5] + iVar6;
        puVar2[7] = puVar2[7] + iVar6;
        if (iVar6 != 0) {
          if (puVar2[4] == 0) {
            uVar3 = FUN_00b302d0(puVar2[6],(int)local_1c - iVar6,iVar6);
          }
          else {
            uVar3 = FUN_00b30800();
          }
          puVar2[6] = uVar3;
          param_1[0xc] = uVar3;
          pbVar4 = local_c;
        }
        local_24 = local_14;
        uVar3 = uVar14;
        if (puVar2[4] == 0) {
          uVar3 = ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 + (uVar14 >> 8 & 0xff00) +
                  (uVar14 >> 0x18);
        }
        if (uVar3 != puVar2[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00b2ee01;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *puVar2 = 0x19;
    case (undefined *)0xb2edb3:
      if ((puVar2[2] != 0) && (puVar2[4] != 0)) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar5 = pbVar4;
          uVar12 = local_10;
          if (local_8 == 0) goto LAB_00b2ee5e;
          bVar10 = *pbVar4;
          local_8 = local_8 - 1;
          pbVar4 = pbVar4 + 1;
          uVar14 = uVar14 + ((uint)bVar10 << ((byte)uVar16 & 0x1f));
          local_c = pbVar4;
        }
        if (uVar14 != puVar2[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00b2ee01;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *puVar2 = 0x1a;
switchD_00b2dbc6_caseD_b2ee4e:
      local_2c = 1;
      pbVar5 = pbVar4;
      uVar12 = local_10;
      goto LAB_00b2ee5e;
    case (undefined *)0xb2ee4e:
      goto switchD_00b2dbc6_caseD_b2ee4e;
    case (undefined *)0xb2ee57:
      local_2c = -3;
      goto LAB_00b2ee5e;
    case (undefined *)0xb2eea6:
      goto switchD_00b2dbc6_caseD_b2eea6;
    }
    uVar3 = *puVar2;
    if (0x1c < uVar3) {
      return -2;
    }
  } while( true );
}

