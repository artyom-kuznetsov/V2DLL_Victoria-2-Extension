// ___strgtold12_l @ 00abd339 body=[[00abd339, 00abd9e1]]


/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2010 Release */

uint __cdecl
___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
               int implicit_E,_locale_t _Locale)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  char cVar10;
  ushort uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined4 uVar19;
  ushort *puVar20;
  ushort uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  iVar16 = 0;
  pcVar23 = local_24;
  uVar9 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  local_68 = 0;
  local_54 = 0;
  if (_Locale != (_locale_t)0x0) {
    local_58 = str;
    for (; (((cVar10 = *str, cVar10 == ' ' || (cVar10 == '\t')) || (cVar10 == '\n')) ||
           (cVar10 == '\r')); str = str + 1) {
    }
LAB_00abd3b6:
    cVar10 = *str;
    pcVar18 = str + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar10 - 0x31U) < 9) {
LAB_00abd3d1:
        iVar16 = 3;
        goto LAB_00abd3d3;
      }
      if (cVar10 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_00abd3e8:
        iVar16 = 5;
        str = pcVar18;
      }
      else if (cVar10 == '+') {
        uVar9 = 0;
        iVar16 = 2;
        str = pcVar18;
      }
      else {
        if (cVar10 != '-') {
          if (cVar10 == '0') goto LAB_00abd402;
          goto LAB_00abd57e;
        }
        iVar16 = 2;
        uVar9 = 0x8000;
        str = pcVar18;
      }
      goto LAB_00abd3b6;
    case 1:
      bVar6 = true;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00abd3d1;
      if (cVar10 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00abd437;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00abd461;
      if (cVar10 == '0') goto LAB_00abd402;
      goto LAB_00abd447;
    case 2:
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00abd3d1;
      if (cVar10 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00abd3e8;
      str = local_58;
      if (cVar10 != '0') goto LAB_00abd5a7;
LAB_00abd402:
      iVar16 = 1;
      str = pcVar18;
      goto LAB_00abd3b6;
    case 3:
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar10 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar10 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00abd4cf;
LAB_00abd437:
      bVar6 = true;
      iVar16 = 4;
      str = pcVar18;
      goto LAB_00abd3b6;
    case 4:
      bVar8 = true;
      if (local_50 == 0) {
        while (cVar10 == '0') {
          local_54 = local_54 + -1;
          cVar10 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar10 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_00abd4cf:
      if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_00abd461:
        bVar6 = true;
        iVar16 = 0xb;
        str = pcVar18 + -1;
      }
      else {
LAB_00abd447:
        bVar6 = true;
        if ((cVar10 < 'D') || (('E' < cVar10 && (1 < (byte)(cVar10 + 0x9cU))))) goto LAB_00abd57e;
        iVar16 = 6;
        str = pcVar18;
      }
      goto LAB_00abd3b6;
    case 5:
      bVar8 = true;
      str = local_58;
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_00abd3d3;
      }
      goto LAB_00abd5a7;
    case 6:
      local_58 = str + -1;
      if (8 < (byte)(cVar10 - 0x31U)) {
        if (cVar10 == '+') goto LAB_00abd565;
        if (cVar10 == '-') goto LAB_00abd559;
LAB_00abd54c:
        str = local_58;
        if (cVar10 != '0') goto LAB_00abd5a7;
        iVar16 = 8;
        str = pcVar18;
        goto LAB_00abd3b6;
      }
      break;
    case 7:
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00abd54c;
      break;
    case 8:
      bVar7 = true;
      while (cVar10 == '0') {
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00abd57e;
      break;
    case 9:
      bVar7 = true;
      local_68 = 0;
      goto LAB_00abd609;
    default:
      goto switchD_00abd3c2_caseD_a;
    case 0xb:
      if (implicit_E != 0) {
        local_58 = str;
        if (cVar10 == '+') {
LAB_00abd565:
          iVar16 = 7;
          str = pcVar18;
        }
        else {
          if (cVar10 != '-') goto LAB_00abd5a7;
LAB_00abd559:
          local_6c = -1;
          iVar16 = 7;
          str = pcVar18;
        }
        goto LAB_00abd3b6;
      }
      iVar16 = 10;
      pcVar18 = str;
switchD_00abd3c2_caseD_a:
      str = pcVar18;
      if (iVar16 != 10) goto LAB_00abd3b6;
      goto LAB_00abd5a7;
    }
    iVar16 = 9;
LAB_00abd3d3:
    str = pcVar18 + -1;
    goto LAB_00abd3b6;
  }
  piVar12 = __errno();
  *piVar12 = 0x16;
  FUN_00ab7c17();
  iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar1 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_00abd9d4;
LAB_00abd609:
  if ((cVar10 < '0') || ('9' < cVar10)) goto LAB_00abd624;
  local_68 = local_68 * 10 + -0x30 + (int)cVar10;
  if (local_68 < 0x1451) {
    cVar10 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_00abd609;
  }
  local_68 = 0x1451;
LAB_00abd624:
  while (('/' < cVar10 && (cVar10 < ':'))) {
    cVar10 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_00abd57e:
  str = pcVar18 + -1;
LAB_00abd5a7:
  *p_end_ptr = str;
  if (bVar6) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_00abd9b5;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    FUN_00acbd29(local_24,local_50,&local_40);
    iVar5 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    iVar2 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    uVar1 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    uVar14 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar7) {
      local_58 = (char *)((int)local_58 + scale);
    }
    if (!bVar8) {
      local_58 = (char *)((int)local_58 - decpt);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_00abd9b5;
      puVar17 = &DAT_00ef3350;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar17 = &DAT_00ef34b0;
        }
        if (mult12 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        uVar14 = uVar1;
        iVar2 = uStack_2e;
        iVar3 = uStack_2a;
        iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar5 = local_3c;
joined_r0x00abd6b1:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
          uVar1 = (int)local_58 >> 3;
          puVar17 = puVar17 + 0x54;
          uVar13 = (uint)local_58 & 7;
          local_58 = (char *)uVar1;
          if (uVar13 != 0) {
            puVar20 = (ushort *)(puVar17 + uVar13 * 0xc);
            if (0x7fff < *puVar20) {
              local_4c = (ushort)*(undefined4 *)puVar20;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar20 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar20 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar20 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar20 + 4);
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              puVar20 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            iVar2 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar11 = puVar20[5] & 0x7fff;
            uVar21 = (puVar20[5] ^ uStack_38._2_2_) & 0x8000;
            uVar15 = uVar11 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar11 < 0x7fff)) && (uVar15 < 0xbffe)) {
              if (0x3fbf < uVar15) {
                if ((((uVar14 & 0x7fff0000) == 0) &&
                    (uVar15 = uVar15 + 1, (uVar14 & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar4 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar14 = uVar14 & 0xffff;
                  iVar2 = 0;
                  iVar3 = 0;
                }
                else if (((uVar11 == 0) &&
                         (uVar15 = uVar15 + 1, (*(uint *)(puVar20 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar20 + 2) == 0 && (*(int *)puVar20 == 0)))) {
                  uStack_38._0_2_ = 0;
                  uStack_38._2_2_ = 0;
                  uVar14 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  iVar4 = 0;
                  iVar5 = 0;
                }
                else {
                  local_6c = 0;
                  psVar24 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar20 + 4;
                      do {
                        bVar6 = false;
                        uVar14 = *(uint *)(psVar24 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar14 < *(uint *)(psVar24 + -2)) ||
                           (uVar14 < (uint)*local_64 * (uint)*local_60)) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar14;
                        if (bVar6) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar15 = uVar15 + 0xc002;
                  if ((short)uVar15 < 1) {
LAB_00abd86d:
                    uVar15 = uVar15 - 1;
                    if ((short)uVar15 < 0) {
                      uVar14 = (uint)(ushort)-uVar15;
                      uVar15 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar3 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                        uVar13 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar14 = uVar14 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar1 >> 1);
                        local_30 = (byte)uVar13;
                        uStack_2f = (undefined1)(uVar13 >> 8);
                      } while (uVar14 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar11 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar2 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar2;
                      uStack_2f = (undefined1)((uint)iVar2 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar2 | uVar11 >> 0xf;
                      iVar3 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar3 | (ushort)uStack_2a >> 0xf;
                      uVar15 = uVar15 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar3 >> 0x10);
                    } while (0 < (short)uVar15);
                    if ((short)uVar15 < 1) goto LAB_00abd86d;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     iVar2 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      iVar2 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar15 = uVar15 + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                      }
                      else {
                        iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                      }
                    }
                    else {
                      iVar2 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar15 < 0x7fff) {
                    local_40 = iVar2;
                    local_3c = iVar3;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar15 | uVar21;
                    uVar14 = CONCAT22(uVar15 | uVar21,uStack_26);
                    iVar4 = iVar2;
                    iVar5 = iVar3;
                  }
                  else {
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    uVar14 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    uStack_38._0_2_ = (ushort)uVar14;
                    uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
                    iVar4 = 0;
                    iVar5 = 0;
                  }
                }
                goto joined_r0x00abd6b1;
              }
              uVar14 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              uVar14 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38._0_2_ = (ushort)uVar14;
            uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
            iVar2 = 0;
            iVar3 = 0;
            iVar4 = 0;
            iVar5 = 0;
          }
          goto joined_r0x00abd6b1;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar5 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar5;
      local_40._2_2_ = (undefined2)((uint)iVar4 >> 0x10);
      local_40._0_2_ = (undefined2)iVar4;
      uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar14;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar16;
      uVar1 = uVar14;
      uStack_2e = iVar2;
      uStack_2a = iVar3;
      local_3c = iVar5;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_00abd9b5:
    iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar1 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = uStack_38._2_2_ | uVar9;
  *(undefined4 *)(pld12->ld12 + 2) = uVar22;
  *(undefined4 *)(pld12->ld12 + 6) = uVar19;
LAB_00abd9d4:
  uStack_38 = uVar1;
  local_40 = iVar4;
  uVar14 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar14;
}

