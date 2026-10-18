// __input_l @ 00ab7cde body=[[00ab7cde, 00ab8ce1]]


/* Library Function - Single Match
    __input_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __input_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  uint uVar14;
  wchar_t *pwVar15;
  byte *pbVar16;
  bool bVar17;
  longlong lVar18;
  undefined1 *puVar19;
  localeinfo_struct *plVar20;
  va_list local_204;
  localeinfo_struct local_200;
  int local_1f8;
  char local_1f4;
  wchar_t local_1f0 [2];
  va_list local_1ec;
  int local_1e8;
  byte local_1e4;
  undefined1 local_1e3;
  undefined4 local_1e0;
  int local_1dc;
  byte local_1d5;
  int local_1d4;
  int local_1d0;
  undefined8 local_1cc;
  wchar_t *local_1c4;
  byte *local_1c0;
  int local_1bc;
  uint local_1b8;
  undefined1 *local_1b4;
  int local_1b0;
  byte local_1ac;
  char local_1ab;
  char local_1aa;
  char local_1a9;
  FILE *local_1a8;
  char local_1a1;
  int local_1a0;
  char local_199;
  uint local_198;
  char local_191;
  int local_190;
  byte local_189;
  undefined1 local_188 [352];
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_1ec = _ArgList;
  local_1b4 = local_188;
  local_1a8 = _File;
  local_1e0 = 0x15e;
  local_1d4 = 0;
  local_1f0[0] = L'\0';
  local_1f0[1] = L'\0';
  local_198 = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
    goto LAB_00ab8cd4;
  }
  if ((_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar9 = &DAT_00ef2ee8;
    }
    else {
      puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar4 >> 5]);
    }
    if ((puVar9[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_00ef2ee8;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x80) == 0) goto LAB_00ab7dcd;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
  }
  else {
LAB_00ab7dcd:
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_200,_Locale);
    bVar2 = *param_2;
    local_1a9 = '\0';
    local_190 = 0;
    local_1d0 = 0;
    if (bVar2 != 0) {
LAB_00ab7dfa:
      iVar8 = _isspace((uint)bVar2);
      if (iVar8 != 0) {
        local_190 = local_190 + -1;
        iVar8 = __whiteout(local_1a8);
        if (iVar8 != -1) {
          __ungetc_nolock(iVar8,local_1a8);
        }
        do {
          param_2 = param_2 + 1;
          iVar8 = _isspace((uint)*param_2);
        } while (iVar8 != 0);
        goto LAB_00ab8c32;
      }
      if (*param_2 == 0x25) {
        if (param_2[1] == 0x25) {
          if (param_2[1] == 0x25) {
            param_2 = param_2 + 1;
          }
          goto LAB_00ab8bbc;
        }
        local_1e8 = 0;
        local_1d5 = 0;
        local_1b0 = 0;
        local_1bc = 0;
        local_1a0 = 0;
        local_1ac = 0;
        local_1ab = '\0';
        local_1a1 = '\0';
        local_191 = '\0';
        local_1aa = '\0';
        local_199 = '\0';
        local_189 = 1;
        local_1dc = 0;
        do {
          pbVar13 = param_2 + 1;
          uVar4 = (uint)*pbVar13;
          iVar8 = _isdigit(uVar4);
          pbVar16 = pbVar13;
          if (iVar8 == 0) {
            if (uVar4 < 0x4f) {
              if (uVar4 != 0x4e) {
                if (uVar4 == 0x2a) {
                  local_1a1 = local_1a1 + '\x01';
                }
                else if (uVar4 != 0x46) {
                  if (uVar4 == 0x49) {
                    bVar2 = param_2[2];
                    if ((bVar2 == 0x36) && (pbVar16 = param_2 + 3, *pbVar16 == 0x34))
                    goto LAB_00ab7f1f;
                    if ((((((bVar2 != 0x33) || (pbVar16 = param_2 + 3, *pbVar16 != 0x32)) &&
                          (pbVar16 = pbVar13, bVar2 != 100)) && ((bVar2 != 0x69 && (bVar2 != 0x6f)))
                         ) && (bVar2 != 0x78)) && (bVar2 != 0x58)) goto LAB_00ab7f78;
                  }
                  else if (uVar4 == 0x4c) {
                    local_189 = local_189 + 1;
                  }
                  else {
LAB_00ab7f78:
                    local_191 = local_191 + '\x01';
                    pbVar16 = pbVar13;
                  }
                }
              }
            }
            else if (uVar4 == 0x68) {
              local_189 = local_189 - 1;
              local_199 = local_199 + -1;
            }
            else {
              if (uVar4 == 0x6c) {
                pbVar16 = param_2 + 2;
                if (*pbVar16 == 0x6c) {
LAB_00ab7f1f:
                  local_1dc = local_1dc + 1;
                  local_1cc = 0;
                  goto LAB_00ab7fa2;
                }
                local_189 = local_189 + 1;
              }
              else if (uVar4 != 0x77) goto LAB_00ab7f78;
              local_199 = local_199 + '\x01';
              pbVar16 = pbVar13;
            }
          }
          else {
            local_1bc = local_1bc + 1;
            local_1a0 = local_1a0 * 10 + -0x30 + uVar4;
          }
LAB_00ab7fa2:
          param_2 = pbVar16;
        } while (local_191 == '\0');
        if (local_1a1 == '\0') {
          local_1c4 = *(wchar_t **)local_1ec;
          local_204 = local_1ec;
          local_1ec = local_1ec + 4;
        }
        else {
          local_1c4 = (wchar_t *)0x0;
        }
        local_191 = '\0';
        if ((local_199 == '\0') && ((*pbVar16 == 0x53 || (local_199 = -1, *pbVar16 == 0x43)))) {
          local_199 = '\x01';
        }
        uVar4 = *pbVar16 | 0x20;
        local_1c0 = pbVar16;
        local_1b8 = uVar4;
        if (uVar4 != 0x6e) {
          if ((uVar4 == 99) || (uVar4 == 0x7b)) {
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
          else {
            local_198 = __whiteout(local_1a8);
          }
          if (local_198 == 0xffffffff) goto LAB_00ab8c72;
        }
        uVar11 = local_198;
        if ((local_1bc != 0) && (local_1a0 == 0)) goto LAB_00ab8c5d;
        if (uVar4 < 0x70) {
          if (uVar4 == 0x6f) {
LAB_00ab88e7:
            if (local_198 == 0x2d) {
              local_1ab = '\x01';
            }
            else if (local_198 != 0x2b) goto LAB_00ab892e;
            local_1a0 = local_1a0 + -1;
            if ((local_1a0 == 0) && (local_1bc != 0)) {
              local_191 = '\x01';
            }
            else {
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
            goto LAB_00ab892e;
          }
          if (uVar4 == 99) {
            if (local_1bc == 0) {
              local_1a0 = local_1a0 + 1;
              local_1bc = 1;
            }
LAB_00ab84ba:
            if ('\0' < local_199) {
              local_1aa = '\x01';
            }
LAB_00ab84ca:
            pwVar12 = local_1c4;
            local_190 = local_190 + -1;
            pwVar15 = pwVar12;
            if (local_198 != 0xffffffff) {
              __ungetc_nolock(local_198,local_1a8);
            }
            do {
              if ((local_1bc != 0) &&
                 (iVar8 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar8, bVar17))
              goto LAB_00ab8895;
              local_190 = local_190 + 1;
              local_198 = __inc();
              if (local_198 == 0xffffffff) goto LAB_00ab887c;
              bVar2 = (byte)local_198;
              if (uVar4 != 99) {
                if (uVar4 == 0x73) {
                  if ((8 < (int)local_198) && ((int)local_198 < 0xe)) goto LAB_00ab887c;
                  if (local_198 != 0x20) goto LAB_00ab857c;
                }
                if ((uVar4 != 0x7b) ||
                   (uVar4 = local_1b8,
                   ((int)(char)(local_28[(int)local_198 >> 3] ^ local_1ac) & 1 << (bVar2 & 7)) == 0)
                   ) goto LAB_00ab887c;
              }
LAB_00ab857c:
              if (local_1a1 == '\0') {
                if (local_1aa == '\0') {
                  *(byte *)pwVar12 = bVar2;
                  pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                  local_1c4 = pwVar12;
                }
                else {
                  local_1e4 = bVar2;
                  iVar8 = _isleadbyte(local_198 & 0xff);
                  if (iVar8 != 0) {
                    local_190 = local_190 + 1;
                    local_1e3 = __inc();
                  }
                  local_1f0[0] = L'?';
                  local_1f0[1] = L'\0';
                  __mbtowc_l(local_1f0,(char *)&local_1e4,
                             (size_t)(local_200.locinfo)->locale_name[3],&local_200);
                  *pwVar12 = local_1f0[0];
                  pwVar12 = pwVar12 + 1;
                  local_1c4 = pwVar12;
                }
              }
              else {
                pwVar15 = (wchar_t *)((int)pwVar15 + 1);
              }
            } while( true );
          }
          if (uVar4 == 100) goto LAB_00ab88e7;
          if (uVar4 < 0x65) {
LAB_00ab8630:
            if (*local_1c0 != local_198) goto LAB_00ab8c5d;
            local_1a9 = local_1a9 + -1;
            if (local_1a1 == '\0') {
              local_1ec = local_204;
            }
            goto LAB_00ab8b9d;
          }
          if (0x67 < uVar4) {
            if (uVar4 == 0x69) {
              local_1b8 = 100;
              goto LAB_00ab80d3;
            }
            if (uVar4 != 0x6e) goto LAB_00ab8630;
            iVar8 = local_190;
            lVar18 = local_1cc;
            if (local_1a1 != '\0') goto LAB_00ab8b9d;
            goto LAB_00ab8b71;
          }
          iVar8 = 0;
          if (local_198 == 0x2d) {
            *local_1b4 = 0x2d;
            iVar8 = 1;
LAB_00ab810e:
            local_1a0 = local_1a0 + -1;
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
          else if (local_198 == 0x2b) goto LAB_00ab810e;
          if (local_1bc == 0) {
            local_1a0 = -1;
          }
          while( true ) {
            iVar7 = _isdigit(local_198 & 0xff);
            if ((iVar7 == 0) ||
               (iVar7 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar7, bVar17)) break;
            local_1b0 = local_1b0 + 1;
            local_1b4[iVar8] = (byte)local_198;
            iVar8 = iVar8 + 1;
            iVar7 = ___check_float_string(iVar8,local_188,&local_1d4);
            if (iVar7 == 0) goto LAB_00ab8c72;
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
          local_1ac = **(byte **)local_200.locinfo[1].lc_codepage;
          if ((local_1ac == (byte)local_198) &&
             (iVar7 = local_1a0 + -1, bVar17 = local_1a0 != 0, local_1a0 = iVar7, bVar17)) {
            local_190 = local_190 + 1;
            local_198 = __inc();
            local_1b4[iVar8] = local_1ac;
            iVar8 = iVar8 + 1;
            iVar7 = ___check_float_string(iVar8,local_188,&local_1d4);
            if (iVar7 == 0) goto LAB_00ab8c72;
            while( true ) {
              iVar7 = _isdigit(local_198 & 0xff);
              if ((iVar7 == 0) ||
                 (iVar7 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar7, bVar17))
              break;
              local_1b0 = local_1b0 + 1;
              local_1b4[iVar8] = (byte)local_198;
              iVar8 = iVar8 + 1;
              iVar7 = ___check_float_string(iVar8,local_188,&local_1d4);
              if (iVar7 == 0) goto LAB_00ab8c72;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
          }
          iVar7 = iVar8;
          if ((local_1b0 != 0) &&
             (((local_198 == 0x65 || (local_198 == 0x45)) &&
              (iVar5 = local_1a0 + -1, bVar17 = local_1a0 != 0, local_1a0 = iVar5, bVar17)))) {
            local_1b4[iVar8] = 0x65;
            iVar7 = iVar8 + 1;
            iVar5 = ___check_float_string(iVar7,local_188,&local_1d4);
            if (iVar5 == 0) goto LAB_00ab8c72;
            local_190 = local_190 + 1;
            local_198 = __inc();
            if (local_198 == 0x2d) {
              local_1b4[iVar7] = 0x2d;
              iVar7 = iVar8 + 2;
              iVar8 = ___check_float_string(iVar7,local_188,&local_1d4);
              if (iVar8 == 0) goto LAB_00ab8c72;
LAB_00ab837f:
              if (local_1a0 == 0) {
                local_1a0 = 0;
              }
              else {
                local_190 = local_190 + 1;
                local_1a0 = local_1a0 + -1;
                local_198 = __inc();
              }
            }
            else if (local_198 == 0x2b) goto LAB_00ab837f;
            while( true ) {
              iVar8 = _isdigit(local_198 & 0xff);
              if ((iVar8 == 0) ||
                 (iVar8 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar8, bVar17))
              break;
              local_1b0 = local_1b0 + 1;
              local_1b4[iVar7] = (byte)local_198;
              iVar7 = iVar7 + 1;
              iVar8 = ___check_float_string(iVar7,local_188,&local_1d4);
              if (iVar8 == 0) goto LAB_00ab8c72;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
          }
          local_190 = local_190 + -1;
          if (local_198 != 0xffffffff) {
            __ungetc_nolock(local_198,local_1a8);
          }
          if (local_1b0 != 0) {
            if (local_1a1 == '\0') {
              local_1d0 = local_1d0 + 1;
              plVar20 = &local_200;
              local_1b4[iVar7] = 0;
              iVar8 = (char)local_189 + -1;
              pwVar12 = local_1c4;
              puVar19 = local_1b4;
              pcVar6 = DecodePointer(Ptr_00ef316c);
              (*pcVar6)(iVar8,pwVar12,puVar19,plVar20);
            }
            goto LAB_00ab8b9d;
          }
          goto LAB_00ab8c72;
        }
        if (uVar4 == 0x70) {
          local_189 = 1;
          goto LAB_00ab88e7;
        }
        if (uVar4 == 0x73) goto LAB_00ab84ba;
        if (uVar4 == 0x75) goto LAB_00ab88e7;
        if (uVar4 != 0x78) {
          if (uVar4 == 0x7b) {
            if ('\0' < local_199) {
              local_1aa = '\x01';
            }
            pbVar16 = local_1c0 + 1;
            if (local_1c0[1] == 0x5e) {
              pbVar16 = local_1c0 + 2;
              local_1ac = 0xff;
            }
            _memset(local_28,0,0x20);
            bVar2 = local_1d5;
            if (*pbVar16 == 0x5d) {
              local_28[0xb] = 0x20;
              pbVar16 = pbVar16 + 1;
              bVar2 = 0x5d;
            }
            while (bVar10 = *pbVar16, local_1c0 = pbVar16, bVar10 != 0x5d) {
              if (((bVar10 == 0x2d) && (bVar2 != 0)) && (bVar1 = pbVar16[1], bVar1 != 0x5d)) {
                bVar10 = bVar1;
                local_189 = bVar2;
                if (bVar2 < bVar1) {
                  bVar10 = bVar2;
                  local_189 = bVar1;
                }
                if (bVar10 < local_189) {
                  uVar14 = (uint)bVar10;
                  uVar11 = (uint)(byte)(local_189 - bVar10);
                  do {
                    local_28[uVar14 >> 3] = local_28[uVar14 >> 3] | '\x01' << ((byte)uVar14 & 7);
                    uVar14 = uVar14 + 1;
                    uVar11 = uVar11 - 1;
                    uVar4 = local_1b8;
                  } while (uVar11 != 0);
                }
                local_28[local_189 >> 3] = local_28[local_189 >> 3] | '\x01' << (local_189 & 7);
                pbVar16 = pbVar16 + 2;
                bVar2 = 0;
              }
              else {
                local_28[bVar10 >> 3] = local_28[bVar10 >> 3] | '\x01' << (bVar10 & 7);
                uVar4 = local_1b8;
                pbVar16 = pbVar16 + 1;
                bVar2 = bVar10;
              }
            }
            goto LAB_00ab84ca;
          }
          goto LAB_00ab8630;
        }
LAB_00ab80d3:
        if (local_198 == 0x2d) {
          local_1ab = '\x01';
LAB_00ab876d:
          local_1a0 = local_1a0 + -1;
          if ((local_1a0 == 0) && (local_1bc != 0)) {
            local_191 = '\x01';
          }
          else {
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
        }
        else if (local_198 == 0x2b) goto LAB_00ab876d;
        if (local_198 == 0x30) {
          local_190 = local_190 + 1;
          local_198 = __inc();
          if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
            local_190 = local_190 + 1;
            local_198 = __inc();
            if ((local_1bc != 0) && (local_1a0 = local_1a0 + -2, local_1a0 < 1)) {
              local_191 = local_191 + '\x01';
            }
            local_1b8 = 0x78;
          }
          else {
            local_1b0 = 1;
            if (local_1b8 == 0x78) {
              local_190 = local_190 + -1;
              if (local_198 != 0xffffffff) {
                __ungetc_nolock(local_198,local_1a8);
              }
              local_198 = 0x30;
            }
            else {
              if ((local_1bc != 0) && (local_1a0 = local_1a0 + -1, local_1a0 == 0)) {
                local_191 = local_191 + '\x01';
              }
              local_1b8 = 0x6f;
            }
          }
        }
LAB_00ab892e:
        lVar18 = local_1cc;
        if (local_1dc == 0) {
          iVar8 = local_1e8;
          if (local_191 == '\0') {
            while ((uVar4 = local_198, local_1b8 != 0x78 && (local_1b8 != 0x70))) {
              iVar7 = _isdigit(local_198 & 0xff);
              if (iVar7 == 0) goto LAB_00ab8b1b;
              if (local_1b8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_00ab8b1b;
                iVar8 = iVar8 << 3;
              }
              else {
                iVar8 = iVar8 * 10;
              }
LAB_00ab8ae2:
              local_1b0 = local_1b0 + 1;
              iVar8 = iVar8 + -0x30 + uVar4;
              if ((local_1bc != 0) &&
                 (local_1a0 = local_1a0 + -1, lVar18 = local_1cc, local_1a0 == 0))
              goto LAB_00ab8b34;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
            iVar7 = _isxdigit(local_198 & 0xff);
            if (iVar7 != 0) {
              iVar8 = iVar8 << 4;
              uVar4 = __hextodec(uVar4);
              local_198 = uVar4;
              goto LAB_00ab8ae2;
            }
LAB_00ab8b1b:
            local_190 = local_190 + -1;
            lVar18 = local_1cc;
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
              lVar18 = local_1cc;
            }
          }
LAB_00ab8b34:
          if (local_1ab != '\0') {
            iVar8 = -iVar8;
          }
        }
        else {
          if (local_191 == '\0') {
            while ((uVar4 = local_198, local_1b8 != 0x78 && (local_1b8 != 0x70))) {
              iVar8 = _isdigit(local_198 & 0xff);
              if (iVar8 == 0) goto LAB_00ab8a27;
              if (local_1b8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_00ab8a27;
                lVar18 = local_1cc << 3;
              }
              else {
                lVar18 = __allmul(local_1cc,10,0);
              }
LAB_00ab89de:
              local_1b0 = local_1b0 + 1;
              local_1cc = lVar18 + (int)(uVar4 - 0x30);
              if ((local_1bc != 0) &&
                 (local_1a0 = local_1a0 + -1, lVar18 = local_1cc, local_1a0 == 0))
              goto LAB_00ab8a40;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
            iVar8 = _isxdigit(local_198 & 0xff);
            if (iVar8 != 0) {
              lVar18 = local_1cc << 4;
              uVar4 = __hextodec(uVar4);
              local_198 = uVar4;
              goto LAB_00ab89de;
            }
LAB_00ab8a27:
            local_190 = local_190 + -1;
            lVar18 = local_1cc;
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
              lVar18 = local_1cc;
            }
          }
LAB_00ab8a40:
          local_1cc._4_4_ = (int)((ulonglong)lVar18 >> 0x20);
          local_1cc._0_4_ = (int)lVar18;
          iVar8 = local_1e8;
          if (local_1ab != '\0') {
            lVar18 = CONCAT44(-(local_1cc._4_4_ + (uint)((int)local_1cc != 0)),-(int)local_1cc);
          }
        }
        if (local_1b8 == 0x46) {
          local_1b0 = 0;
        }
        local_1cc = lVar18;
        if (local_1b0 == 0) goto LAB_00ab8c72;
        if (local_1a1 == '\0') {
          local_1d0 = local_1d0 + 1;
LAB_00ab8b71:
          local_1cc = lVar18;
          if (local_1dc == 0) {
            if (local_189 == 0) {
              *local_1c4 = (wchar_t)iVar8;
            }
            else {
              *(int *)local_1c4 = iVar8;
            }
          }
          else {
            *(longlong *)local_1c4 = lVar18;
          }
        }
LAB_00ab8b9d:
        local_1a9 = local_1a9 + '\x01';
        pbVar16 = local_1c0 + 1;
        local_1c0 = pbVar16;
LAB_00ab8c16:
        param_2 = pbVar16;
        if ((local_198 == 0xffffffff) &&
           ((*pbVar16 != 0x25 || (param_2 = local_1c0, local_1c0[1] != 0x6e)))) goto LAB_00ab8c72;
LAB_00ab8c32:
        bVar2 = *param_2;
        if (bVar2 == 0) goto LAB_00ab8c72;
        goto LAB_00ab7dfa;
      }
LAB_00ab8bbc:
      local_190 = local_190 + 1;
      uVar11 = __inc();
      pbVar16 = param_2 + 1;
      local_1c0 = pbVar16;
      local_198 = uVar11;
      if (*param_2 == uVar11) {
        iVar8 = _isleadbyte(uVar11 & 0xff);
        if (iVar8 != 0) {
          local_190 = local_190 + 1;
          uVar4 = __inc();
          bVar2 = *pbVar16;
          pbVar16 = param_2 + 2;
          local_1c0 = pbVar16;
          if (bVar2 != uVar4) {
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
            }
            goto LAB_00ab8c5d;
          }
          local_190 = local_190 + -1;
        }
        goto LAB_00ab8c16;
      }
LAB_00ab8c5d:
      if (uVar11 != 0xffffffff) {
        __ungetc_nolock(local_198,local_1a8);
      }
LAB_00ab8c72:
      if (local_1d4 == 1) {
        _free(local_1b4);
      }
      if (local_198 == 0xffffffff) {
        if (local_1f4 != '\0') {
          *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
        }
        goto LAB_00ab8cd4;
      }
    }
    if (local_1f4 != '\0') {
      *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
    }
  }
LAB_00ab8cd4:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
LAB_00ab887c:
  local_190 = local_190 + -1;
  if (local_198 != 0xffffffff) {
    __ungetc_nolock(local_198,local_1a8);
  }
LAB_00ab8895:
  if (pwVar15 == pwVar12) goto LAB_00ab8c72;
  if ((local_1a1 == '\0') && (local_1d0 = local_1d0 + 1, uVar4 != 99)) {
    if (local_1aa == '\0') {
      *(byte *)local_1c4 = 0;
    }
    else {
      *local_1c4 = L'\0';
    }
  }
  goto LAB_00ab8b9d;
}

