// FUN_00a8fd00 @ 00a8fd00 body=[[00a8fd00, 00a8ff1c] [00a8ff20, 00a8ffe7] [00a8fff0, 00a901c6] [00a901d0, 00a90236] [00a90240, 00a902a6] [00a902b0, 00a90316] [00a90320, 00a90506] [00a90510, 00a906bc] [00a906c0, 00a907ec] [00a907f0, 00a90986] [00a90990, 00a90a47] [00a90a50, 00a90b29] [00a90b30, 00a90d29] [00a90d30, 00a90dc7] [00a90dd0, 00a91037] [00a91040, 00a91194] [00a911a0, 00a91376] [00a91380, 00a91496] [00a914a0, 00a91695] [00a916a0, 00a9190c] [00a91910, 00a919cc] [00a919d0, 00a91a36] [00a91a40, 00a91c79] [00a91c80, 00a91cf6] [00a91d00, 00a91d76] [00a91d80, 00a91e1c]]


/* WARNING: Removing unreachable block (ram,0x00a917a7) */

undefined4 FUN_00a8fd00(int *param_1)

{
  ushort *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  byte bVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int extraout_ECX;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  byte *pbVar23;
  char *pcVar24;
  int local_78 [2];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar6 = param_1;
  iVar14 = *param_1;
  if (param_1[1] == 10) {
    param_1[0x3e85] = 0;
    param_1[0x3e86] = 0;
    param_1[0x3e87] = 0;
    param_1[0x3e88] = 0;
    param_1[0x3e89] = 0;
    param_1[0x3e8a] = 0;
    param_1[0x3e8b] = 0;
    param_1[0x3e8c] = 0;
    param_1[0x3e8d] = 0;
    param_1[0x3e8e] = 0;
    param_1[0x3e8f] = 0;
    param_1[0x3e90] = 0;
    param_1[0x3e91] = 0;
    param_1[0x3e92] = 0;
    param_1[0x3e93] = 0;
    param_1[0x3e94] = 0;
    param_1[0x3e95] = 0;
    param_1[0x3e96] = 0;
    param_1[0x3e97] = 0;
    param_1[0x3e98] = 0;
    param_1[0x3e99] = 0;
    param_1[0x3e9a] = 0;
    param_1[0x3e9b] = 0;
    param_1[0x3e9c] = 0;
  }
  uVar20 = param_1[0x3e85];
  local_14 = param_1[0x3e86];
  local_20 = param_1[0x3e87];
  local_40 = param_1[0x3e88];
  local_44 = param_1[0x3e89];
  local_2c = param_1[0x3e8a];
  local_60 = (uint *)param_1[0x3e8b];
  local_48 = (int *)param_1[0x3e8c];
  local_30 = param_1[0x3e8d];
  local_24 = param_1[0x3e8e];
  local_54 = param_1[0x3e8f];
  local_10 = param_1[0x3e90];
  local_18 = param_1[0x3e91];
  local_4c = param_1[0x3e92];
  iVar4 = param_1[0x3e94];
  local_28 = param_1[0x3e93];
  local_c = param_1[0x3e95];
  local_1c = param_1[0x3e96];
  local_58 = param_1[0x3e97];
  local_5c = param_1[0x3e98];
  local_50 = param_1[0x3e99];
  local_34 = (int *)param_1[0x3e9a];
  local_38 = (int *)param_1[0x3e9b];
  local_3c = (int *)param_1[0x3e9c];
  local_8 = uVar20;
  switch(param_1[1]) {
  case 10:
    param_1[1] = 10;
    iVar15 = param_1[8];
    while (iVar15 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar15 = param_1[8];
    }
    iVar15 = param_1[8];
    param_1[8] = iVar15 + -8;
    if ((char)((uint)param_1[7] >> ((char)iVar15 - 8U & 0x1f)) == 'B')
    goto switchD_00a8fe9b_caseD_b;
    goto LAB_00a8ff05;
  case 0xb:
switchD_00a8fe9b_caseD_b:
    param_1[1] = 0xb;
    iVar15 = param_1[8];
    while (iVar15 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar15 = param_1[8];
    }
    iVar15 = param_1[8];
    param_1[8] = iVar15 + -8;
    if ((char)((uint)param_1[7] >> ((char)iVar15 - 8U & 0x1f)) == 'Z')
    goto switchD_00a8fe9b_caseD_c;
    goto LAB_00a8ff05;
  case 0xc:
switchD_00a8fe9b_caseD_c:
    param_1[1] = 0xc;
    iVar15 = param_1[8];
    while (iVar15 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar15 = param_1[8];
    }
    iVar15 = param_1[8];
    param_1[8] = iVar15 + -8;
    if ((char)((uint)param_1[7] >> ((char)iVar15 - 8U & 0x1f)) == 'h')
    goto switchD_00a8fe9b_caseD_d;
    goto LAB_00a8ff05;
  case 0xd:
switchD_00a8fe9b_caseD_d:
    param_1[1] = 0xd;
    iVar15 = param_1[8];
    while (iVar15 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar15 = param_1[8];
    }
    iVar15 = param_1[8];
    param_1[8] = iVar15 + -8;
    uVar20 = (uint)param_1[7] >> ((char)iVar15 - 8U & 0x1f) & 0xff;
    param_1[9] = uVar20;
    if ((0x30 < uVar20) && (uVar20 < 0x3a)) {
      iVar15 = uVar20 - 0x30;
      param_1[9] = iVar15;
      if ((char)param_1[10] == '\0') {
        iVar14 = (**(code **)(iVar14 + 0x24))(*(undefined4 *)(iVar14 + 0x2c),iVar15 * 400000,1);
        param_1[0x313] = iVar14;
        if (iVar14 == 0) {
          uVar13 = 0xfffffffd;
          goto LAB_00a917c0;
        }
      }
      else {
        iVar15 = (**(code **)(iVar14 + 0x24))(*(undefined4 *)(iVar14 + 0x2c),iVar15 * 200000);
        param_1[0x314] = iVar15;
        iVar14 = (**(code **)(iVar14 + 0x24))
                           (*(undefined4 *)(iVar14 + 0x2c),param_1[9] * 100000 + 1 >> 1,1);
        param_1[0x315] = iVar14;
        if ((param_1[0x314] == 0) || (iVar14 == 0)) {
          uVar13 = 0xfffffffd;
          goto LAB_00a917c0;
        }
      }
      goto switchD_00a8fe9b_caseD_e;
    }
LAB_00a8ff05:
    uVar13 = 0xfffffffb;
    goto LAB_00a917c0;
  case 0xe:
switchD_00a8fe9b_caseD_e:
    param_1[1] = 0xe;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    cVar5 = (char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f));
    if (cVar5 != '\x17') {
      piVar8 = local_48;
      if (cVar5 == '1') goto switchD_00a8fe9b_caseD_f;
      break;
    }
  case 0x2a:
    param_1[1] = 0x2a;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    piVar8 = local_48;
    if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'r') {
switchD_00a8fe9b_caseD_2b:
      param_1[1] = 0x2b;
      iVar14 = param_1[8];
      while (iVar14 < 8) {
        piVar8 = (int *)*param_1;
        if (piVar8[1] == 0) goto LAB_00a917be;
        bVar7 = *(byte *)*piVar8;
        param_1[8] = param_1[8] + 8;
        param_1[7] = param_1[7] << 8 | (uint)bVar7;
        *piVar8 = *piVar8 + 1;
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
        if (*(int *)(*param_1 + 8) == 0) {
          piVar8 = (int *)(*param_1 + 0xc);
          *piVar8 = *piVar8 + 1;
        }
        iVar14 = param_1[8];
      }
      iVar14 = param_1[8];
      param_1[8] = iVar14 + -8;
      piVar8 = local_48;
      if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'E') {
switchD_00a8fe9b_caseD_2c:
        param_1[1] = 0x2c;
        iVar14 = param_1[8];
        while (iVar14 < 8) {
          piVar8 = (int *)*param_1;
          if (piVar8[1] == 0) goto LAB_00a917be;
          bVar7 = *(byte *)*piVar8;
          param_1[8] = param_1[8] + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar8 = *piVar8 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar8 = (int *)(*param_1 + 0xc);
            *piVar8 = *piVar8 + 1;
          }
          iVar14 = param_1[8];
        }
        iVar14 = param_1[8];
        param_1[8] = iVar14 + -8;
        piVar8 = local_48;
        if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == '8') {
switchD_00a8fe9b_caseD_2d:
          param_1[1] = 0x2d;
          iVar14 = param_1[8];
          while (iVar14 < 8) {
            piVar8 = (int *)*param_1;
            if (piVar8[1] == 0) goto LAB_00a917be;
            bVar7 = *(byte *)*piVar8;
            param_1[8] = param_1[8] + 8;
            param_1[7] = param_1[7] << 8 | (uint)bVar7;
            *piVar8 = *piVar8 + 1;
            *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            if (*(int *)(*param_1 + 8) == 0) {
              piVar8 = (int *)(*param_1 + 0xc);
              *piVar8 = *piVar8 + 1;
            }
            iVar14 = param_1[8];
          }
          iVar14 = param_1[8];
          param_1[8] = iVar14 + -8;
          piVar8 = local_48;
          if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'P') {
switchD_00a8fe9b_caseD_2e:
            param_1[1] = 0x2e;
            iVar14 = param_1[8];
            while (iVar14 < 8) {
              piVar8 = (int *)*param_1;
              if (piVar8[1] == 0) goto LAB_00a917be;
              bVar7 = *(byte *)*piVar8;
              param_1[8] = param_1[8] + 8;
              param_1[7] = param_1[7] << 8 | (uint)bVar7;
              *piVar8 = *piVar8 + 1;
              *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              if (*(int *)(*param_1 + 8) == 0) {
                piVar8 = (int *)(*param_1 + 0xc);
                *piVar8 = *piVar8 + 1;
              }
              iVar14 = param_1[8];
            }
            iVar14 = param_1[8];
            param_1[8] = iVar14 + -8;
            piVar8 = local_48;
            if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == -0x70) {
              param_1[0x317] = 0;
switchD_00a8fe9b_caseD_2f:
              param_1[1] = 0x2f;
              iVar14 = param_1[8];
              while (iVar14 < 8) {
                piVar8 = (int *)*param_1;
                if (piVar8[1] == 0) goto LAB_00a917be;
                bVar7 = *(byte *)*piVar8;
                param_1[8] = param_1[8] + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar8 = *piVar8 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar8 = (int *)(*param_1 + 0xc);
                  *piVar8 = *piVar8 + 1;
                }
                iVar14 = param_1[8];
              }
              iVar14 = param_1[8];
              param_1[8] = iVar14 + -8;
              param_1[0x317] =
                   param_1[0x317] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
              goto switchD_00a8fe9b_caseD_30;
            }
          }
        }
      }
    }
    break;
  case 0xf:
switchD_00a8fe9b_caseD_f:
    param_1[1] = 0xf;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    piVar8 = local_48;
    if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'A')
    goto switchD_00a8fe9b_caseD_10;
    break;
  case 0x10:
switchD_00a8fe9b_caseD_10:
    param_1[1] = 0x10;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    piVar8 = local_48;
    if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'Y')
    goto switchD_00a8fe9b_caseD_11;
    break;
  case 0x11:
switchD_00a8fe9b_caseD_11:
    param_1[1] = 0x11;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    piVar8 = local_48;
    if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == '&')
    goto switchD_00a8fe9b_caseD_12;
    break;
  case 0x12:
switchD_00a8fe9b_caseD_12:
    param_1[1] = 0x12;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    piVar8 = local_48;
    if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'S')
    goto switchD_00a8fe9b_caseD_13;
    break;
  case 0x13:
switchD_00a8fe9b_caseD_13:
    param_1[1] = 0x13;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    piVar8 = local_48;
    if ((char)((uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f)) == 'Y') {
      param_1[0xb] = param_1[0xb] + 1;
      if (1 < param_1[0xc]) {
        pcVar24 = "\n    [%d: huff+mtf ";
        iVar14 = FUN_00aaf1e2("\n    [%d: huff+mtf ",param_1[0xb]);
        _fprintf((FILE *)(iVar14 + 0x40),pcVar24);
      }
      param_1[0x316] = 0;
      goto switchD_00a8fe9b_caseD_14;
    }
    break;
  case 0x14:
switchD_00a8fe9b_caseD_14:
    param_1[1] = 0x14;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    param_1[0x316] = param_1[0x316] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
  case 0x15:
    param_1[1] = 0x15;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    param_1[0x316] = param_1[0x316] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_16:
    param_1[1] = 0x16;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    param_1[0x316] = param_1[0x316] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_17:
    param_1[1] = 0x17;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    param_1[0x316] = param_1[0x316] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_18:
    param_1[1] = 0x18;
    iVar14 = param_1[8];
    while (iVar14 < 1) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[0xd] = 0;
    param_1[8] = iVar14 + -1;
    *(byte *)(param_1 + 4) = (byte)((uint)param_1[7] >> ((char)iVar14 - 1U & 0x1f)) & 1;
switchD_00a8fe9b_caseD_19:
    param_1[1] = 0x19;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    param_1[0xd] = param_1[0xd] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_1a:
    param_1[1] = 0x1a;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    param_1[0xd] = param_1[0xd] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_1b:
    param_1[1] = 0x1b;
    iVar14 = param_1[8];
    while (iVar14 < 8) {
      piVar8 = (int *)*param_1;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      param_1[8] = param_1[8] + 8;
      param_1[7] = param_1[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      if (*(int *)(*param_1 + 8) == 0) {
        piVar8 = (int *)(*param_1 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = param_1[8];
    }
    iVar14 = param_1[8];
    param_1[8] = iVar14 + -8;
    uVar20 = param_1[0xd] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
    param_1[0xd] = uVar20;
    piVar8 = local_48;
    if ((-1 < (int)uVar20) && ((int)uVar20 <= param_1[9] * 100000 + 10)) {
      for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
switchD_00a8fe9b_caseD_1c:
        param_1[1] = 0x1c;
        iVar14 = param_1[8];
        while (iVar14 < 1) {
          piVar8 = (int *)*param_1;
          if (piVar8[1] == 0) goto LAB_00a917be;
          bVar7 = *(byte *)*piVar8;
          param_1[8] = param_1[8] + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar8 = *piVar8 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar8 = (int *)(*param_1 + 0xc);
            *piVar8 = *piVar8 + 1;
          }
          iVar14 = param_1[8];
        }
        iVar14 = param_1[8];
        param_1[8] = iVar14 + -1;
        *(bool *)(local_8 + 0xd6c + (int)param_1) =
             ((byte)((uint)param_1[7] >> ((char)iVar14 - 1U & 0x1f)) & 1) == 1;
      }
      _memset(param_1 + 0x31b,0,0x100);
      for (local_8 = 0; (int)local_8 < 0x10; local_8 = local_8 + 1) {
        if (*(char *)(local_8 + 0xd6c + (int)param_1) != '\0') {
          for (local_14 = 0; (int)local_14 < 0x10; local_14 = local_14 + 1) {
switchD_00a8fe9b_caseD_1d:
            param_1[1] = 0x1d;
            iVar14 = param_1[8];
            while (iVar14 < 1) {
              piVar8 = (int *)*param_1;
              if (piVar8[1] == 0) goto LAB_00a917be;
              bVar7 = *(byte *)*piVar8;
              param_1[8] = param_1[8] + 8;
              param_1[7] = param_1[7] << 8 | (uint)bVar7;
              *piVar8 = *piVar8 + 1;
              *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
              *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
              if (*(int *)(*param_1 + 8) == 0) {
                piVar8 = (int *)(*param_1 + 0xc);
                *piVar8 = *piVar8 + 1;
              }
              iVar14 = param_1[8];
            }
            iVar14 = param_1[8];
            param_1[8] = iVar14 + -1;
            if (((byte)((uint)param_1[7] >> ((char)iVar14 - 1U & 0x1f)) & 1) == 1) {
              *(undefined1 *)(local_8 * 0x10 + local_14 + 0xc6c + (int)param_1) = 1;
            }
          }
        }
      }
      FUN_00a8fcc0();
      piVar8 = local_48;
      if (param_1[0x31a] != 0) {
        local_40 = param_1[0x31a] + 2;
switchD_00a8fe9b_caseD_1e:
        iVar14 = param_1[8];
        param_1[1] = 0x1e;
        while (iVar14 < 3) {
          piVar8 = (int *)*param_1;
          if (piVar8[1] == 0) goto LAB_00a917be;
          bVar7 = *(byte *)*piVar8;
          param_1[8] = param_1[8] + 8;
          param_1[7] = param_1[7] << 8 | (uint)bVar7;
          *piVar8 = *piVar8 + 1;
          *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
          if (*(int *)(*param_1 + 8) == 0) {
            piVar8 = (int *)(*param_1 + 0xc);
            *piVar8 = *piVar8 + 1;
          }
          iVar14 = param_1[8];
        }
        iVar14 = param_1[8];
        param_1[8] = iVar14 + -3;
        local_44 = (uint)param_1[7] >> ((char)iVar14 - 3U & 0x1f) & 7;
        piVar8 = local_48;
        if ((1 < local_44) && (local_44 < 7)) {
switchD_00a8fe9b_caseD_1f:
          iVar14 = param_1[8];
          param_1[1] = 0x1f;
          while (iVar14 < 0xf) {
            piVar8 = (int *)*param_1;
            if (piVar8[1] == 0) goto LAB_00a917be;
            bVar7 = *(byte *)*piVar8;
            param_1[8] = param_1[8] + 8;
            param_1[7] = param_1[7] << 8 | (uint)bVar7;
            *piVar8 = *piVar8 + 1;
            *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
            if (*(int *)(*param_1 + 8) == 0) {
              piVar8 = (int *)(*param_1 + 0xc);
              *piVar8 = *piVar8 + 1;
            }
            iVar14 = param_1[8];
          }
          iVar14 = param_1[8];
          param_1[8] = iVar14 + -0xf;
          local_2c = (uint)param_1[7] >> ((char)iVar14 - 0xfU & 0x1f) & 0x7fff;
          piVar8 = local_48;
          if (local_2c != 0) {
            for (uVar20 = 0; uVar19 = local_2c, uVar17 = local_44, (int)uVar20 < (int)local_2c;
                uVar20 = uVar20 + 1) {
              local_14 = 0;
              local_8 = uVar20;
LAB_00a90979:
              while( true ) {
                param_1[1] = 0x20;
                iVar14 = param_1[8];
                while (iVar14 < 1) {
                  piVar8 = (int *)*param_1;
                  if (piVar8[1] == 0) goto LAB_00a917be;
                  bVar7 = *(byte *)*piVar8;
                  param_1[8] = param_1[8] + 8;
                  param_1[7] = param_1[7] << 8 | (uint)bVar7;
                  *piVar8 = *piVar8 + 1;
                  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                  if (*(int *)(*param_1 + 8) == 0) {
                    piVar8 = (int *)(*param_1 + 0xc);
                    *piVar8 = *piVar8 + 1;
                  }
                  iVar14 = param_1[8];
                }
                iVar14 = param_1[8];
                param_1[8] = iVar14 + -1;
                if (((uint)param_1[7] >> ((char)iVar14 - 1U & 0x1f) & 1) == 0) break;
                local_14 = local_14 + 1;
                if ((int)local_44 <= (int)local_14) {
                  uVar13 = 0xfffffffc;
                  goto LAB_00a917c0;
                }
              }
              *(undefined1 *)(uVar20 + 0x650e + (int)param_1) = (undefined1)local_14;
            }
            bVar7 = 0;
            if (0 < (int)local_44) {
              uVar20 = 0;
              do {
                *(byte *)((int)local_78 + uVar20) = bVar7;
                bVar7 = bVar7 + 1;
                uVar20 = (uint)bVar7;
              } while ((int)uVar20 < (int)uVar17);
            }
            uVar20 = 0;
            local_8 = 0;
            if (0 < (int)uVar19) {
              do {
                bVar7 = *(byte *)((int)param_1 + uVar20 + 0x650e);
                uVar3 = *(undefined1 *)((int)local_78 + (uint)bVar7);
                puVar9 = (undefined1 *)((int)local_78 + (uint)bVar7);
                for (; bVar7 != 0; bVar7 = bVar7 - 1) {
                  *puVar9 = puVar9[-1];
                  puVar9 = puVar9 + -1;
                }
                *(undefined1 *)((int)param_1 + uVar20 + 0x1ebc) = uVar3;
                uVar20 = uVar20 + 1;
                uVar17 = (uint)local_78[0] >> 8;
                local_78[0] = CONCAT31((int3)uVar17,uVar3);
                local_8 = uVar20;
              } while ((int)uVar20 < (int)local_2c);
            }
            for (local_20 = 0; (int)local_20 < (int)local_44; local_20 = local_20 + 1) {
switchD_00a8fe9b_caseD_21:
              iVar14 = param_1[8];
              param_1[1] = 0x21;
              while (iVar14 < 5) {
                piVar8 = (int *)*param_1;
                if (piVar8[1] == 0) goto LAB_00a917be;
                bVar7 = *(byte *)*piVar8;
                param_1[8] = param_1[8] + 8;
                param_1[7] = param_1[7] << 8 | (uint)bVar7;
                *piVar8 = *piVar8 + 1;
                *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                if (*(int *)(*param_1 + 8) == 0) {
                  piVar8 = (int *)(*param_1 + 0xc);
                  *piVar8 = *piVar8 + 1;
                }
                iVar14 = param_1[8];
              }
              local_8 = 0;
              local_28 = (uint)param_1[7] >> ((char)param_1[8] - 5U & 0x1f) & 0x1f;
              param_1[8] = param_1[8] + -5;
              while ((int)local_8 < local_40) {
                while( true ) {
                  piVar8 = local_48;
                  if (((int)local_28 < 1) || (0x14 < (int)local_28)) goto LAB_00a9162e;
switchD_00a8fe9b_caseD_22:
                  param_1[1] = 0x22;
                  iVar14 = param_1[8];
                  while (iVar14 < 1) {
                    piVar8 = (int *)*param_1;
                    if (piVar8[1] == 0) goto LAB_00a917be;
                    bVar7 = *(byte *)*piVar8;
                    param_1[8] = param_1[8] + 8;
                    param_1[7] = param_1[7] << 8 | (uint)bVar7;
                    *piVar8 = *piVar8 + 1;
                    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                    if (*(int *)(*param_1 + 8) == 0) {
                      piVar8 = (int *)(*param_1 + 0xc);
                      *piVar8 = *piVar8 + 1;
                    }
                    iVar14 = param_1[8];
                  }
                  iVar14 = param_1[8];
                  param_1[8] = iVar14 + -1;
                  if (((uint)param_1[7] >> ((char)iVar14 - 1U & 0x1f) & 1) == 0) break;
switchD_00a8fe9b_caseD_23:
                  param_1[1] = 0x23;
                  iVar14 = param_1[8];
                  while (iVar14 < 1) {
                    piVar8 = (int *)*param_1;
                    if (piVar8[1] == 0) goto LAB_00a917be;
                    bVar7 = *(byte *)*piVar8;
                    param_1[8] = param_1[8] + 8;
                    param_1[7] = param_1[7] << 8 | (uint)bVar7;
                    *piVar8 = *piVar8 + 1;
                    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
                    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
                    if (*(int *)(*param_1 + 8) == 0) {
                      piVar8 = (int *)(*param_1 + 0xc);
                      *piVar8 = *piVar8 + 1;
                    }
                    iVar14 = param_1[8];
                  }
                  iVar14 = param_1[8];
                  param_1[8] = iVar14 + -1;
                  if (((uint)param_1[7] >> ((char)iVar14 - 1U & 0x1f) & 1) == 0) {
                    local_28 = local_28 + 1;
                  }
                  else {
                    local_28 = local_28 - 1;
                  }
                }
                iVar14 = local_20 * 0x102 + local_8;
                local_8 = local_8 + 1;
                *(undefined1 *)(iVar14 + 0xab60 + (int)param_1) = (undefined1)local_28;
              }
            }
            local_20 = 0;
            if (0 < (int)local_44) {
              local_60 = (uint *)(param_1 + 15999);
              piVar8 = param_1 + 0x3267;
              local_48 = (int *)local_44;
              local_20 = local_44;
              param_1 = param_1 + 0x2ad8;
              do {
                uVar20 = 0x20;
                local_54 = 0;
                local_8 = 0;
                if (0 < local_40) {
                  do {
                    uVar17 = (uint)*(byte *)((int)param_1 + local_8);
                    if (local_54 < uVar17) {
                      local_54 = uVar17;
                    }
                    if (uVar17 < uVar20) {
                      uVar20 = uVar17;
                    }
                    local_8 = local_8 + 1;
                  } while ((int)local_8 < local_40);
                }
                FUN_00a93a90(piVar8 + 0x60c,param_1,uVar20,local_54,local_40);
                param_1 = (int *)((int)param_1 + 0x102);
                *local_60 = uVar20;
                local_60 = local_60 + 1;
                piVar8 = (int *)(extraout_ECX + 0x408);
                local_48 = (int *)((int)local_48 - 1);
              } while (local_48 != (int *)0x0);
            }
            local_60 = (uint *)(piVar6[0x31a] + 1);
            local_54 = piVar6[9] * 100000;
            piVar8 = piVar6 + 0x10;
            for (iVar14 = 0x100; iVar14 != 0; iVar14 = iVar14 + -1) {
              *piVar8 = 0;
              piVar8 = piVar8 + 1;
            }
            local_48 = piVar6 + 0x7ae;
            local_30 = 0;
            local_8 = 0x100;
            iVar14 = 0xfff;
            param_1 = (int *)0xf;
            do {
              iVar15 = 0xf;
              do {
                iVar10 = iVar14;
                *(char *)(iVar10 + 0xe7c + (int)piVar6) = (char)param_1 * '\x10' + (char)iVar15;
                iVar14 = iVar10 + -1;
                iVar15 = iVar15 + -1;
              } while (-1 < iVar15);
              *local_48 = iVar10;
              param_1 = (int *)((int)param_1 + -1);
              local_48 = local_48 + -1;
            } while (-1 < (int)param_1);
            local_10 = 0;
            local_48 = (int *)0x0;
            piVar8 = local_48;
            if (0 < (int)local_2c) {
              local_5c = (uint)*(byte *)(piVar6 + 0x7af);
              local_50 = piVar6[local_5c + 15999];
              local_34 = piVar6 + local_5c * 0x102 + 0x2c5b;
              local_3c = piVar6 + local_5c * 0x102 + 0x3873;
              local_38 = piVar6 + local_5c * 0x102 + 0x3267;
              local_30 = 0x31;
              local_c = local_50;
switchD_00a8fe9b_caseD_24:
              iVar14 = piVar6[8];
              piVar6[1] = 0x24;
              while (iVar14 < local_c) {
                piVar8 = (int *)*piVar6;
                if (piVar8[1] == 0) goto LAB_00a917be;
                bVar7 = *(byte *)*piVar8;
                piVar6[8] = piVar6[8] + 8;
                piVar6[7] = piVar6[7] << 8 | (uint)bVar7;
                *piVar8 = *piVar8 + 1;
                *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + -1;
                *(int *)(*piVar6 + 8) = *(int *)(*piVar6 + 8) + 1;
                if (*(int *)(*piVar6 + 8) == 0) {
                  piVar8 = (int *)(*piVar6 + 0xc);
                  *piVar8 = *piVar8 + 1;
                }
                iVar14 = piVar6[8];
              }
              iVar14 = piVar6[8];
              piVar6[8] = iVar14 - local_c;
              local_1c = (uint)piVar6[7] >> ((byte)(iVar14 - local_c) & 0x1f) &
                         (1 << ((byte)local_c & 0x1f)) - 1U;
              while (piVar8 = local_48, local_c < 0x15) {
                if ((int)local_1c <= local_34[local_c]) {
                  iVar14 = local_1c - local_38[local_c];
                  if ((-1 < iVar14) && (iVar14 < 0x102)) goto LAB_00a90f70;
                  uVar13 = 0xfffffffc;
                  goto LAB_00a917c0;
                }
                local_c = local_c + 1;
switchD_00a8fe9b_caseD_25:
                piVar6[1] = 0x25;
                iVar14 = piVar6[8];
                while (iVar14 < 1) {
                  piVar8 = (int *)*piVar6;
                  if (piVar8[1] == 0) goto LAB_00a917be;
                  bVar7 = *(byte *)*piVar8;
                  piVar6[8] = piVar6[8] + 8;
                  piVar6[7] = piVar6[7] << 8 | (uint)bVar7;
                  *piVar8 = *piVar8 + 1;
                  *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + -1;
                  *(int *)(*piVar6 + 8) = *(int *)(*piVar6 + 8) + 1;
                  if (*(int *)(*piVar6 + 8) == 0) {
                    piVar8 = (int *)(*piVar6 + 0xc);
                    *piVar8 = *piVar8 + 1;
                  }
                  iVar14 = piVar6[8];
                }
                iVar14 = piVar6[8];
                piVar6[8] = iVar14 + -1;
                local_58 = (uint)piVar6[7] >> ((char)iVar14 - 1U & 0x1f) & 1;
                local_1c = local_1c * 2 | local_58;
              }
            }
          }
        }
      }
    }
    break;
  case 0x16:
    goto switchD_00a8fe9b_caseD_16;
  case 0x17:
    goto switchD_00a8fe9b_caseD_17;
  case 0x18:
    goto switchD_00a8fe9b_caseD_18;
  case 0x19:
    goto switchD_00a8fe9b_caseD_19;
  case 0x1a:
    goto switchD_00a8fe9b_caseD_1a;
  case 0x1b:
    goto switchD_00a8fe9b_caseD_1b;
  case 0x1c:
    goto switchD_00a8fe9b_caseD_1c;
  case 0x1d:
    goto switchD_00a8fe9b_caseD_1d;
  case 0x1e:
    goto switchD_00a8fe9b_caseD_1e;
  case 0x1f:
    goto switchD_00a8fe9b_caseD_1f;
  case 0x20:
    goto LAB_00a90979;
  case 0x21:
    goto switchD_00a8fe9b_caseD_21;
  case 0x22:
    goto switchD_00a8fe9b_caseD_22;
  case 0x23:
    goto switchD_00a8fe9b_caseD_23;
  case 0x24:
    goto switchD_00a8fe9b_caseD_24;
  case 0x25:
    goto switchD_00a8fe9b_caseD_25;
  case 0x26:
    goto switchD_00a8fe9b_caseD_26;
  case 0x27:
    goto switchD_00a8fe9b_caseD_27;
  case 0x28:
    goto switchD_00a8fe9b_caseD_28;
  case 0x29:
    goto switchD_00a8fe9b_caseD_29;
  case 0x2b:
    goto switchD_00a8fe9b_caseD_2b;
  case 0x2c:
    goto switchD_00a8fe9b_caseD_2c;
  case 0x2d:
    goto switchD_00a8fe9b_caseD_2d;
  case 0x2e:
    goto switchD_00a8fe9b_caseD_2e;
  case 0x2f:
    goto switchD_00a8fe9b_caseD_2f;
  case 0x30:
    goto switchD_00a8fe9b_caseD_30;
  case 0x31:
    goto switchD_00a8fe9b_caseD_31;
  case 0x32:
    goto switchD_00a8fe9b_caseD_32;
  default:
    pcVar24 = 
    "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
    ;
    iVar14 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                          ,0xfa1,"1.0.3, 15-Feb-2005");
    _fprintf((FILE *)(iVar14 + 0x40),pcVar24);
                    /* WARNING: Subroutine does not return */
    _exit(3);
  }
LAB_00a9162e:
  local_48 = piVar8;
  uVar13 = 0xfffffffc;
LAB_00a917c0:
  piVar6[0x3e85] = local_8;
  piVar6[0x3e86] = local_14;
  piVar6[0x3e87] = local_20;
  piVar6[0x3e88] = local_40;
  piVar6[0x3e89] = local_44;
  piVar6[0x3e8a] = local_2c;
  piVar6[0x3e8b] = (int)local_60;
  piVar6[0x3e8c] = (int)local_48;
  piVar6[0x3e8d] = local_30;
  piVar6[0x3e8e] = local_24;
  piVar6[0x3e8f] = local_54;
  piVar6[0x3e90] = local_10;
  piVar6[0x3e91] = local_18;
  piVar6[0x3e92] = local_4c;
  piVar6[0x3e93] = local_28;
  piVar6[0x3e94] = iVar4;
  piVar6[0x3e95] = local_c;
  piVar6[0x3e96] = local_1c;
  piVar6[0x3e97] = local_58;
  piVar6[0x3e98] = local_5c;
  piVar6[0x3e99] = local_50;
  piVar6[0x3e9a] = (int)local_34;
  piVar6[0x3e9b] = (int)local_38;
  piVar6[0x3e9c] = (int)local_3c;
  return uVar13;
LAB_00a90f70:
  local_24 = local_3c[iVar14];
LAB_00a90f79:
  piVar8 = local_48;
  if ((uint *)local_24 == local_60) {
    if ((-1 < piVar6[0xd]) && (piVar6[0xd] < local_10)) {
      piVar11 = piVar6 + 0x112;
      piVar6[0x111] = 0;
      piVar18 = piVar6 + 0x10;
      piVar22 = piVar11;
      for (iVar14 = 0x100; iVar14 != 0; iVar14 = iVar14 + -1) {
        *piVar22 = *piVar18;
        piVar18 = piVar18 + 1;
        piVar22 = piVar22 + 1;
      }
      iVar14 = 0x100;
      do {
        *piVar11 = *piVar11 + piVar11[-1];
        piVar11 = piVar11 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      local_8 = 0;
      piVar11 = piVar6 + 0x111;
      while ((-1 < *piVar11 && (*piVar11 <= local_10))) {
        local_8 = local_8 + 1;
        piVar11 = piVar11 + 1;
        if (0x100 < (int)local_8) {
          piVar6[3] = 0;
          *(undefined1 *)(piVar6 + 2) = 0;
          piVar6[0x318] = -1;
          piVar6[1] = 2;
          if (1 < piVar6[0xc]) {
            pcVar24 = "rt+rld";
            iVar14 = FUN_00aaf1e2();
            _fprintf((FILE *)(iVar14 + 0x40),pcVar24);
          }
          if ((char)piVar6[10] == '\0') {
            uVar20 = 0;
            local_8 = 0;
            if (0 < local_10) {
              do {
                uVar17 = (uint)*(byte *)(piVar6[0x313] + uVar20 * 4);
                puVar2 = (uint *)(piVar6[0x313] + piVar6[uVar17 + 0x111] * 4);
                *puVar2 = *puVar2 | uVar20 << 8;
                piVar6[uVar17 + 0x111] = piVar6[uVar17 + 0x111] + 1;
                uVar20 = uVar20 + 1;
                local_8 = uVar20;
              } while ((int)uVar20 < local_10);
            }
            iVar14 = piVar6[0x313];
            uVar20 = *(uint *)(iVar14 + piVar6[0xd] * 4) >> 8;
            piVar6[0xe] = uVar20;
            piVar6[0x110] = 0;
            if ((char)piVar6[4] == '\0') {
              uVar20 = *(uint *)(iVar14 + piVar6[0xe] * 4);
              piVar6[0xe] = uVar20;
              piVar6[0xe] = (uint)piVar6[0xe] >> 8;
              piVar6[0xf] = uVar20 & 0xff;
              piVar6[0x110] = 1;
            }
            else {
              piVar6[5] = 0;
              piVar6[6] = 0;
              uVar20 = *(uint *)(iVar14 + uVar20 * 4);
              piVar6[0xe] = uVar20;
              piVar6[0xe] = (uint)piVar6[0xe] >> 8;
              piVar6[0xf] = uVar20 & 0xff;
              piVar6[0x110] = 1;
              piVar6[5] = DAT_00f069f8;
              piVar6[5] = piVar6[5] + -1;
              piVar6[6] = 1;
              piVar6[0xf] = piVar6[0xf] ^ (uint)(piVar6[5] == 1);
            }
          }
          else {
            uVar20 = 0;
            piVar8 = piVar6 + 0x111;
            piVar11 = piVar6 + 0x212;
            for (iVar14 = 0x101; iVar14 != 0; iVar14 = iVar14 + -1) {
              *piVar11 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar11 = piVar11 + 1;
            }
            if (0 < local_10) {
              do {
                uVar17 = (uint)*(byte *)(piVar6[0x314] + uVar20 * 2);
                piVar8 = piVar6 + uVar17 + 0x212;
                *(short *)(piVar6[0x314] + uVar20 * 2) = (short)piVar6[uVar17 + 0x212];
                if ((uVar20 & 1) == 0) {
                  pbVar23 = (byte *)(piVar6[0x315] + ((int)uVar20 >> 1));
                  *pbVar23 = *pbVar23 & 0xf0 | *(byte *)((int)piVar8 + 2);
                }
                else {
                  pbVar23 = (byte *)(((int)uVar20 >> 1) + piVar6[0x315]);
                  *pbVar23 = ((byte)(*piVar8 >> 0xc) ^ *pbVar23) & 0xf ^ (byte)(*piVar8 >> 0xc);
                }
                *piVar8 = *piVar8 + 1;
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < local_10);
            }
            uVar20 = piVar6[0xd];
            local_14 = (*(byte *)(((int)uVar20 >> 1) + piVar6[0x315]) >> ((byte)uVar20 & 1) * '\x04'
                       & 0xf) << 0x10 | (uint)*(ushort *)(piVar6[0x314] + uVar20 * 2);
            do {
              local_8 = local_14;
              puVar1 = (ushort *)(piVar6[0x314] + local_8 * 2);
              local_14 = (*(byte *)(((int)local_8 >> 1) + piVar6[0x315]) >>
                          ((byte)local_8 & 1) * '\x04' & 0xf) << 0x10 | (uint)*puVar1;
              *puVar1 = (ushort)uVar20;
              pbVar23 = (byte *)(((int)local_8 >> 1) + piVar6[0x315]);
              if ((local_8 & 1) == 0) {
                *pbVar23 = (byte)(uVar20 >> 0x10) | *pbVar23 & 0xf0;
              }
              else {
                bVar7 = (byte)((int)uVar20 >> 0xc);
                *pbVar23 = (bVar7 ^ *pbVar23) & 0xf ^ bVar7;
              }
              uVar20 = local_8;
            } while (local_8 != piVar6[0xd]);
            iVar14 = 0;
            uVar20 = piVar6[0xd];
            piVar6[0xe] = uVar20;
            piVar6[0x110] = 0;
            if ((char)piVar6[4] == '\0') {
              iVar15 = 0x100;
              do {
                iVar10 = iVar15 + iVar14 >> 1;
                if (piVar6[iVar10 + 0x111] <= (int)uVar20) {
                  iVar14 = iVar10;
                  iVar10 = iVar15;
                }
                iVar15 = iVar10;
              } while (iVar10 - iVar14 != 1);
              piVar6[0xf] = iVar14;
              piVar6[0xe] = (*(byte *)((uVar20 >> 1) + piVar6[0x315]) >> ((byte)uVar20 & 1) * '\x04'
                            & 0xf) << 0x10 | (uint)*(ushort *)(piVar6[0x314] + uVar20 * 2);
              piVar6[0x110] = 1;
            }
            else {
              uVar19 = 0;
              piVar6[5] = 0;
              piVar6[6] = 0;
              uVar17 = 0x100;
              do {
                uVar12 = (int)(uVar17 + uVar19) >> 1;
                uVar16 = uVar12;
                if (piVar6[uVar12 + 0x111] <= (int)uVar20) {
                  uVar16 = uVar17;
                  uVar19 = uVar12;
                }
                uVar17 = uVar16;
              } while (uVar16 - uVar19 != 1);
              piVar6[0xf] = uVar19;
              piVar6[0xe] = (*(byte *)((uVar20 >> 1) + piVar6[0x315]) >> ((byte)uVar20 & 1) * '\x04'
                            & 0xf) << 0x10 | (uint)*(ushort *)(piVar6[0x314] + uVar20 * 2);
              piVar6[0x110] = 1;
              piVar6[5] = DAT_00f069f8;
              piVar6[6] = 1;
              piVar6[5] = piVar6[5] + -1;
              piVar6[0xf] = piVar6[5] == 1 ^ uVar19;
            }
          }
          goto LAB_00a917be;
        }
      }
    }
    goto LAB_00a9162e;
  }
  if ((local_24 == 0) || (local_24 == 1)) goto LAB_00a90f91;
  if ((int)local_54 <= local_10) goto LAB_00a9162e;
  uVar20 = local_24 - 1;
  if (uVar20 < 0x10) {
    local_78[0] = piVar6[0x79f];
    bVar7 = *(byte *)(local_78[0] + uVar20 + 0xe7c + (int)piVar6);
    if (3 < uVar20) {
      iVar14 = (int)piVar6 + 0xe7b;
      local_68 = (int)piVar6 + (0xe7c - iVar14);
      local_6c = (int)piVar6 + (0xe7a - iVar14);
      local_70 = (int)piVar6 + (0xe78 - iVar14);
      local_64 = (int)piVar6 + (0xe79 - iVar14);
      puVar9 = (undefined1 *)(local_78[0] + uVar20 + iVar14);
      iVar14 = (local_24 - 5U >> 2) + 1;
      do {
        puVar9[local_68] = *puVar9;
        *puVar9 = puVar9[local_6c];
        puVar9[local_6c] = puVar9[local_64];
        puVar9[local_64] = puVar9[local_70];
        uVar20 = uVar20 - 4;
        puVar9 = puVar9 + -4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (uVar20 != 0) {
      puVar9 = (undefined1 *)(local_78[0] + uVar20 + 0xe7c + (int)piVar6);
      do {
        *puVar9 = puVar9[-1];
        puVar9 = puVar9 + -1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    *(byte *)(local_78[0] + 0xe7c + (int)piVar6) = bVar7;
  }
  else {
    uVar17 = uVar20 >> 4;
    piVar8 = piVar6 + uVar17 + 0x79f;
    iVar14 = (uVar20 & 0xf) + piVar6[uVar17 + 0x79f];
    bVar7 = *(byte *)(iVar14 + 0xe7c + (int)piVar6);
    if (piVar6[uVar17 + 0x79f] < iVar14) {
      do {
        *(undefined1 *)(iVar14 + 0xe7c + (int)piVar6) =
             *(undefined1 *)(iVar14 + 0xe7b + (int)piVar6);
        iVar14 = iVar14 + -1;
      } while (*piVar8 < iVar14);
    }
    *piVar8 = *piVar8 + 1;
    if (uVar17 != 0) {
      do {
        *piVar8 = *piVar8 + -1;
        piVar11 = piVar8 + -1;
        iVar14 = *piVar8;
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + -1;
        *(undefined1 *)((int)piVar6 + iVar14 + 0xe7c) =
             *(undefined1 *)(*piVar11 + 0xe8b + (int)piVar6);
      } while (0 < (int)uVar17);
    }
    piVar6[0x79f] = piVar6[0x79f] + -1;
    *(byte *)(piVar6[0x79f] + 0xe7c + (int)piVar6) = bVar7;
    if (piVar6[0x79f] == 0) {
      iVar14 = 0xfff;
      piVar8 = piVar6 + 0x7ae;
      iVar15 = 0xf;
      do {
        iVar10 = 0xf;
        do {
          iVar21 = iVar14;
          *(undefined1 *)(iVar21 + 0xe7c + (int)piVar6) =
               *(undefined1 *)(*piVar8 + iVar10 + 0xe7c + (int)piVar6);
          *(undefined1 *)(iVar21 + 0xe7b + (int)piVar6) =
               *(undefined1 *)(*piVar8 + iVar10 + 0xe7b + (int)piVar6);
          *(undefined1 *)(iVar21 + 0xe7a + (int)piVar6) =
               *(undefined1 *)(*piVar8 + iVar10 + 0xe7a + (int)piVar6);
          *(undefined1 *)(iVar21 + 0xe79 + (int)piVar6) =
               *(undefined1 *)(*piVar8 + iVar10 + 0xe79 + (int)piVar6);
          iVar14 = iVar21 + -4;
          iVar10 = iVar10 + -4;
        } while (-1 < iVar10);
        *piVar8 = iVar21 + -3;
        piVar8 = piVar8 + -1;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
  }
  piVar6[*(byte *)(bVar7 + 0xd7c + (int)piVar6) + 0x10] =
       piVar6[*(byte *)(bVar7 + 0xd7c + (int)piVar6) + 0x10] + 1;
  bVar7 = *(byte *)(bVar7 + 0xd7c + (int)piVar6);
  if ((char)piVar6[10] == '\0') {
    *(uint *)(piVar6[0x313] + local_10 * 4) = (uint)bVar7;
  }
  else {
    *(ushort *)(piVar6[0x314] + local_10 * 2) = (ushort)bVar7;
  }
  local_10 = local_10 + 1;
  if (local_30 == 0) {
    piVar8 = (int *)((int)local_48 + 1);
    if ((int)local_2c <= (int)piVar8) goto LAB_00a9162e;
    local_5c = (uint)*(byte *)((int)local_48 + 0x1ebd + (int)piVar6);
    local_50 = piVar6[local_5c + 15999];
    local_34 = piVar6 + local_5c * 0x102 + 0x2c5b;
    local_3c = piVar6 + local_5c * 0x102 + 0x3873;
    local_38 = piVar6 + local_5c * 0x102 + 0x3267;
    local_30 = 0x32;
    local_48 = piVar8;
  }
  local_30 = local_30 + -1;
  local_c = local_50;
switchD_00a8fe9b_caseD_28:
  iVar14 = piVar6[8];
  piVar6[1] = 0x28;
  while (iVar14 < local_c) {
    piVar8 = (int *)*piVar6;
    if (piVar8[1] == 0) goto LAB_00a917be;
    bVar7 = *(byte *)*piVar8;
    piVar6[8] = piVar6[8] + 8;
    piVar6[7] = piVar6[7] << 8 | (uint)bVar7;
    *piVar8 = *piVar8 + 1;
    *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + -1;
    *(int *)(*piVar6 + 8) = *(int *)(*piVar6 + 8) + 1;
    if (*(int *)(*piVar6 + 8) == 0) {
      piVar8 = (int *)(*piVar6 + 0xc);
      *piVar8 = *piVar8 + 1;
    }
    iVar14 = piVar6[8];
  }
  iVar14 = piVar6[8];
  piVar6[8] = iVar14 - local_c;
  local_1c = (uint)piVar6[7] >> ((byte)(iVar14 - local_c) & 0x1f) &
             (1 << ((byte)local_c & 0x1f)) - 1U;
  while( true ) {
    piVar8 = local_48;
    if (0x14 < local_c) goto LAB_00a9162e;
    if ((int)local_1c <= local_34[local_c]) break;
    local_c = local_c + 1;
switchD_00a8fe9b_caseD_29:
    piVar6[1] = 0x29;
    iVar14 = piVar6[8];
    while (iVar14 < 1) {
      piVar8 = (int *)*piVar6;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      piVar6[8] = piVar6[8] + 8;
      piVar6[7] = piVar6[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + -1;
      *(int *)(*piVar6 + 8) = *(int *)(*piVar6 + 8) + 1;
      if (*(int *)(*piVar6 + 8) == 0) {
        piVar8 = (int *)(*piVar6 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = piVar6[8];
    }
    iVar14 = piVar6[8];
    piVar6[8] = iVar14 + -1;
    local_58 = (uint)piVar6[7] >> ((char)iVar14 - 1U & 0x1f) & 1;
    local_1c = local_1c * 2 | local_58;
  }
  iVar14 = local_1c - local_38[local_c];
  if ((iVar14 < 0) || (0x101 < iVar14)) goto LAB_00a9162e;
  goto LAB_00a90f70;
LAB_00a90f91:
  local_18 = -1;
  local_4c = 1;
  do {
    if (local_24 == 0) {
      local_18 = local_18 + local_4c;
    }
    else if (local_24 == 1) {
      local_18 = local_18 + local_4c * 2;
    }
    local_4c = local_4c * 2;
    if (local_30 == 0) {
      piVar8 = (int *)((int)local_48 + 1);
      if ((int)local_2c <= (int)piVar8) goto LAB_00a9162e;
      local_5c = (uint)*(byte *)((int)local_48 + 0x1ebd + (int)piVar6);
      local_50 = piVar6[local_5c + 15999];
      local_34 = piVar6 + local_5c * 0x102 + 0x2c5b;
      local_3c = piVar6 + local_5c * 0x102 + 0x3873;
      local_38 = piVar6 + local_5c * 0x102 + 0x3267;
      local_30 = 0x32;
      local_48 = piVar8;
    }
    local_30 = local_30 + -1;
    local_c = local_50;
switchD_00a8fe9b_caseD_26:
    iVar14 = piVar6[8];
    piVar6[1] = 0x26;
    while (iVar14 < local_c) {
      piVar8 = (int *)*piVar6;
      if (piVar8[1] == 0) goto LAB_00a917be;
      bVar7 = *(byte *)*piVar8;
      piVar6[8] = piVar6[8] + 8;
      piVar6[7] = piVar6[7] << 8 | (uint)bVar7;
      *piVar8 = *piVar8 + 1;
      *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + -1;
      *(int *)(*piVar6 + 8) = *(int *)(*piVar6 + 8) + 1;
      if (*(int *)(*piVar6 + 8) == 0) {
        piVar8 = (int *)(*piVar6 + 0xc);
        *piVar8 = *piVar8 + 1;
      }
      iVar14 = piVar6[8];
    }
    iVar14 = piVar6[8] - local_c;
    local_1c = (uint)piVar6[7] >> ((byte)iVar14 & 0x1f) & (1 << ((byte)local_c & 0x1f)) - 1U;
    while( true ) {
      piVar6[8] = iVar14;
      piVar8 = local_48;
      if (0x14 < local_c) goto LAB_00a9162e;
      if ((int)local_1c <= local_34[local_c]) break;
      local_c = local_c + 1;
switchD_00a8fe9b_caseD_27:
      piVar6[1] = 0x27;
      iVar14 = piVar6[8];
      while (iVar14 < 1) {
        piVar8 = (int *)*piVar6;
        if (piVar8[1] == 0) goto LAB_00a917be;
        bVar7 = *(byte *)*piVar8;
        piVar6[8] = piVar6[8] + 8;
        piVar6[7] = piVar6[7] << 8 | (uint)bVar7;
        *piVar8 = *piVar8 + 1;
        *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + -1;
        *(int *)(*piVar6 + 8) = *(int *)(*piVar6 + 8) + 1;
        if (*(int *)(*piVar6 + 8) == 0) {
          piVar8 = (int *)(*piVar6 + 0xc);
          *piVar8 = *piVar8 + 1;
        }
        iVar14 = piVar6[8];
      }
      iVar14 = piVar6[8] + -1;
      local_58 = (uint)piVar6[7] >> ((char)piVar6[8] - 1U & 0x1f) & 1;
      local_1c = local_58 | local_1c * 2;
    }
    iVar14 = local_1c - local_38[local_c];
    if ((iVar14 < 0) || (0x101 < iVar14)) goto LAB_00a9162e;
    local_24 = local_3c[iVar14];
  } while ((local_24 == 0) || (local_24 == 1));
  bVar7 = *(byte *)(*(byte *)(piVar6[0x79f] + 0xe7c + (int)piVar6) + 0xd7c + (int)piVar6);
  local_18 = local_18 + 1;
  piVar6[bVar7 + 0x10] = piVar6[bVar7 + 0x10] + local_18;
  if ((char)piVar6[10] == '\0') {
    for (; 0 < local_18; local_18 = local_18 + -1) {
      if ((int)local_54 <= local_10) goto LAB_00a9162e;
      *(uint *)(piVar6[0x313] + local_10 * 4) = (uint)bVar7;
      local_10 = local_10 + 1;
    }
  }
  else {
    for (; 0 < local_18; local_18 = local_18 + -1) {
      if ((int)local_54 <= local_10) goto LAB_00a9162e;
      *(ushort *)(piVar6[0x314] + local_10 * 2) = (ushort)bVar7;
      local_10 = local_10 + 1;
    }
  }
  goto LAB_00a90f79;
switchD_00a8fe9b_caseD_30:
  param_1[1] = 0x30;
  iVar14 = param_1[8];
  while (iVar14 < 8) {
    piVar8 = (int *)*param_1;
    if (piVar8[1] == 0) goto LAB_00a917be;
    bVar7 = *(byte *)*piVar8;
    param_1[8] = param_1[8] + 8;
    param_1[7] = param_1[7] << 8 | (uint)bVar7;
    *piVar8 = *piVar8 + 1;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    if (*(int *)(*param_1 + 8) == 0) {
      piVar8 = (int *)(*param_1 + 0xc);
      *piVar8 = *piVar8 + 1;
    }
    iVar14 = param_1[8];
  }
  iVar14 = param_1[8];
  param_1[8] = iVar14 + -8;
  param_1[0x317] = param_1[0x317] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_31:
  param_1[1] = 0x31;
  iVar14 = param_1[8];
  while (iVar14 < 8) {
    piVar8 = (int *)*param_1;
    if (piVar8[1] == 0) goto LAB_00a917be;
    bVar7 = *(byte *)*piVar8;
    param_1[8] = param_1[8] + 8;
    param_1[7] = param_1[7] << 8 | (uint)bVar7;
    *piVar8 = *piVar8 + 1;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    if (*(int *)(*param_1 + 8) == 0) {
      piVar8 = (int *)(*param_1 + 0xc);
      *piVar8 = *piVar8 + 1;
    }
    iVar14 = param_1[8];
  }
  iVar14 = param_1[8];
  param_1[8] = iVar14 + -8;
  param_1[0x317] = param_1[0x317] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
switchD_00a8fe9b_caseD_32:
  param_1[1] = 0x32;
  iVar14 = param_1[8];
  while (iVar14 < 8) {
    piVar8 = (int *)*param_1;
    if (piVar8[1] == 0) goto LAB_00a917be;
    bVar7 = *(byte *)*piVar8;
    param_1[8] = param_1[8] + 8;
    param_1[7] = param_1[7] << 8 | (uint)bVar7;
    *piVar8 = *piVar8 + 1;
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    if (*(int *)(*param_1 + 8) == 0) {
      piVar8 = (int *)(*param_1 + 0xc);
      *piVar8 = *piVar8 + 1;
    }
    iVar14 = param_1[8];
  }
  iVar14 = param_1[8];
  param_1[8] = iVar14 + -8;
  param_1[0x317] = param_1[0x317] << 8 | (uint)param_1[7] >> ((char)iVar14 - 8U & 0x1f) & 0xff;
  param_1[1] = 1;
  uVar13 = 4;
  goto LAB_00a917c0;
LAB_00a917be:
  uVar13 = 0;
  goto LAB_00a917c0;
}

