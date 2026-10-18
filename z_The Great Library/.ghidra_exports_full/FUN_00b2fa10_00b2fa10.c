// FUN_00b2fa10 @ 00b2fa10 body=[[00b2fa10, 00b2fe1a]]


void FUN_00b2fa10(int *param_1,uint param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte *local_8;
  
  puVar3 = (undefined4 *)param_1[7];
  local_8 = (byte *)(*param_1 + -1);
  uVar19 = puVar3[0xe];
  pbVar1 = local_8 + param_1[1] + -5;
  puVar20 = (undefined1 *)(param_1[3] + -1);
  puVar16 = puVar20 + (param_1[4] - param_2);
  puVar2 = puVar20 + param_1[4] + -0x101;
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar24 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar22 = puVar3[0xf];
LAB_00b2fa98:
  if (uVar22 < 0xf) {
    pbVar13 = local_8 + 1;
    local_8 = local_8 + 2;
    uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
             ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
    uVar22 = uVar22 + 0x10;
  }
  uVar17 = *(uint *)(iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar19) * 4);
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  cVar11 = (char)uVar17;
  while (cVar11 != '\0') {
    if ((uVar17 & 0x10) != 0) {
      param_2 = uVar17 >> 0x10;
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar22 < uVar17) {
          local_8 = local_8 + 1;
          uVar19 = uVar19 + ((uint)*local_8 << ((byte)uVar22 & 0x1f));
          uVar22 = uVar22 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar19);
        uVar19 = uVar19 >> (sbyte)uVar17;
        uVar22 = uVar22 - uVar17;
      }
      if (uVar22 < 0xf) {
        pbVar13 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
                 ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
        uVar22 = uVar22 + 0x10;
      }
      uVar17 = *(uint *)(iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar19) * 4);
      uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
      uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
      goto joined_r0x00b2fb9a;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00b2fdbc;
      }
      *puVar3 = 0xb;
      goto LAB_00b2fdc8;
    }
    uVar17 = *(uint *)(iVar7 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4
                      );
    uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
    uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
    cVar11 = (char)uVar17;
  }
  uVar12 = (undefined1)(uVar17 >> 0x10);
  goto LAB_00b2fd6a;
joined_r0x00b2fb9a:
  if ((uVar17 & 0x10) != 0) goto LAB_00b2fbd6;
  if ((uVar17 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
LAB_00b2fdbc:
    *puVar3 = 0x1b;
    goto LAB_00b2fdc8;
  }
  uVar17 = *(uint *)(iVar8 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4);
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  goto joined_r0x00b2fb9a;
LAB_00b2fbd6:
  uVar14 = uVar17 & 0xf;
  uVar23 = uVar22;
  pbVar13 = local_8;
  if (uVar22 < uVar14) {
    uVar23 = uVar22 + 8;
    uVar19 = uVar19 + ((uint)local_8[1] << ((byte)uVar22 & 0x1f));
    pbVar13 = local_8 + 1;
    if (uVar23 < uVar14) {
      uVar19 = uVar19 + ((uint)local_8[2] << ((byte)uVar23 & 0x1f));
      uVar23 = uVar22 + 0x10;
      pbVar13 = local_8 + 2;
    }
  }
  local_8 = pbVar13;
  uVar22 = uVar23 - uVar14;
  uVar23 = (1 << (sbyte)uVar14) - 1U & uVar19;
  uVar19 = uVar19 >> (sbyte)uVar14;
  uVar23 = (uVar17 >> 0x10) + uVar23;
  if ((uint)((int)puVar20 - (int)puVar16) < uVar23) {
    uVar17 = uVar23 - ((int)puVar20 - (int)puVar16);
    if (uVar5 < uVar17) {
      param_1[6] = (int)"invalid distance too far back";
      *puVar3 = 0x1b;
LAB_00b2fdc8:
      iVar4 = (int)local_8 - (uVar22 >> 3);
      iVar24 = uVar22 + (uVar22 >> 3) * -8;
      *param_1 = iVar4 + 1;
      param_1[3] = (int)(puVar20 + 1);
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar20));
      param_1[1] = (int)(pbVar1 + (5 - iVar4));
      puVar3[0xf] = iVar24;
      puVar3[0xe] = uVar19 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
      return;
    }
    iVar15 = iVar24 + -1;
    if (uVar6 == 0) {
      iVar15 = iVar15 + (iVar4 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
LAB_00b2fcd2:
        iVar15 = (int)puVar20 - uVar23;
      }
    }
    else if (uVar6 < uVar17) {
      uVar14 = uVar17 - uVar6;
      iVar15 = iVar15 + (uVar6 - uVar17) + iVar4;
      if (uVar14 < param_2) {
        param_2 = param_2 - uVar14;
        iVar15 = iVar15 - (int)puVar20;
        do {
          puVar21 = puVar20 + iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar14 = uVar14 - 1;
          *puVar20 = *puVar21;
        } while (uVar14 != 0);
        iVar15 = iVar24 + -1;
        if (uVar6 < param_2) {
          param_2 = param_2 - uVar6;
          uVar17 = uVar6;
          do {
            puVar21 = (undefined1 *)(iVar15 + 1);
            iVar15 = iVar15 + 1;
            puVar20 = puVar20 + 1;
            uVar17 = uVar17 - 1;
            *puVar20 = *puVar21;
          } while (uVar17 != 0);
          goto LAB_00b2fcd2;
        }
      }
    }
    else {
      iVar15 = iVar15 + (uVar6 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
        goto LAB_00b2fcd2;
      }
    }
    if (2 < param_2) {
      iVar18 = (param_2 - 3) / 3 + 1;
      do {
        param_2 = param_2 - 3;
        puVar20[1] = *(undefined1 *)(iVar15 + 1);
        puVar20[2] = *(undefined1 *)(iVar15 + 2);
        puVar21 = (undefined1 *)(iVar15 + 3);
        iVar15 = iVar15 + 3;
        puVar20 = puVar20 + 3;
        iVar18 = iVar18 + -1;
        *puVar20 = *puVar21;
      } while (iVar18 != 0);
    }
    if (param_2 == 0) goto LAB_00b2fd6c;
    puVar20 = puVar20 + 1;
    *puVar20 = *(undefined1 *)(iVar15 + 1);
    if (param_2 < 2) goto LAB_00b2fd6c;
    uVar12 = *(undefined1 *)(iVar15 + 2);
  }
  else {
    iVar15 = (int)puVar20 - uVar23;
    do {
      puVar21 = puVar20;
      iVar18 = iVar15;
      puVar21[1] = *(undefined1 *)(iVar18 + 1);
      puVar21[2] = *(undefined1 *)(iVar18 + 2);
      puVar20 = puVar21 + 3;
      *puVar20 = *(undefined1 *)(iVar18 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar18 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_00b2fd6c;
    puVar20 = puVar21 + 4;
    *puVar20 = *(undefined1 *)(iVar18 + 4);
    if (param_2 < 2) goto LAB_00b2fd6c;
    uVar12 = *(undefined1 *)(iVar18 + 5);
  }
LAB_00b2fd6a:
  puVar20 = puVar20 + 1;
  *puVar20 = uVar12;
LAB_00b2fd6c:
  if ((pbVar1 <= local_8) || (puVar2 <= puVar20)) goto LAB_00b2fdc8;
  goto LAB_00b2fa98;
}

