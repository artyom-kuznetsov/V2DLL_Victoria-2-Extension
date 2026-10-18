// FUN_00aca14f @ 00aca14f body=[[00aca14f, 00acad5f]]


void FUN_00aca14f(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  size_t sVar8;
  errno_t eVar9;
  undefined *puVar10;
  int iVar11;
  int extraout_ECX;
  byte *pbVar12;
  wchar_t *pwVar13;
  bool bVar14;
  longlong lVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_284;
  undefined4 local_280;
  int local_27c;
  undefined4 local_278;
  size_t local_274;
  size_t local_26c;
  int *local_268;
  wchar_t *local_264;
  int local_260;
  int local_25c;
  localeinfo_struct local_258;
  int local_250;
  char local_24c;
  uint local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  FILE *local_234;
  undefined1 local_230;
  char local_22f;
  size_t local_22c;
  int local_228;
  wchar_t *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_234 = param_1;
  local_220 = param_4;
  local_25c = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_260 = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_258,param_3);
  local_268 = __errno();
  if (param_1 != (FILE *)0x0) {
    if ((param_1->_flag & 0x40) == 0) {
      uVar5 = __fileno(param_1);
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar10 = &DAT_00ef2ee8;
      }
      else {
        puVar10 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar5 >> 5]);
      }
      if ((puVar10[0x24] & 0x7f) == 0) {
        if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
          puVar10 = &DAT_00ef2ee8;
        }
        else {
          puVar10 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)uVar5 >> 5]);
        }
        if ((puVar10[0x24] & 0x80) == 0) goto LAB_00aca254;
      }
    }
    else {
LAB_00aca254:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_228 = 0;
        local_22c = 0;
        local_248 = 0;
        local_264 = (wchar_t *)0x0;
        if (local_215 != 0) {
          do {
            pbVar12 = param_2 + 1;
            local_244 = pbVar12;
            if (local_228 < 0) break;
            if ((byte)(local_215 - 0x20) < 0x59) {
              uVar5 = (byte)"MessageBoxW"[(char)local_215 + 8] & 0xf;
            }
            else {
              uVar5 = 0;
            }
            local_248 = (uint)((byte)(&DAT_00ddc288)[local_248 + uVar5 * 9] >> 4);
            if (local_248 == 8) goto LAB_00aca1c5;
            switch(local_248) {
            case 0:
switchD_00aca2e1_caseD_0:
              local_240 = 0;
              iVar11 = __isleadbyte_l((uint)local_215,&local_258);
              if (iVar11 != 0) {
                write_char();
                local_244 = param_2 + 2;
                if (*pbVar12 == 0) goto LAB_00aca1c5;
              }
              write_char();
              break;
            case 1:
              local_21c = -1;
              local_278 = 0;
              local_260 = 0;
              local_23c = 0;
              local_238 = 0;
              local_214 = 0;
              local_240 = 0;
              break;
            case 2:
              if (local_215 == 0x20) {
                local_214 = local_214 | 2;
              }
              else if (local_215 == 0x23) {
                local_214 = local_214 | 0x80;
              }
              else if (local_215 == 0x2b) {
                local_214 = local_214 | 1;
              }
              else if (local_215 == 0x2d) {
                local_214 = local_214 | 4;
              }
              else if (local_215 == 0x30) {
                local_214 = local_214 | 8;
              }
              break;
            case 3:
              if (local_215 == 0x2a) {
                local_220 = param_4 + 2;
                local_23c = *(int *)param_4;
                if (local_23c < 0) {
                  local_214 = local_214 | 4;
                  local_23c = -local_23c;
                }
              }
              else {
                local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 4:
              local_21c = 0;
              break;
            case 5:
              if (local_215 == 0x2a) {
                local_220 = param_4 + 2;
                local_21c = *(int *)param_4;
                if (local_21c < 0) {
                  local_21c = -1;
                }
              }
              else {
                local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 6:
              if (local_215 == 0x49) {
                bVar1 = *pbVar12;
                if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                  local_214 = local_214 | 0x8000;
                  local_244 = param_2 + 3;
                }
                else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                  local_214 = local_214 & 0xffff7fff;
                  local_244 = param_2 + 3;
                }
                else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                         ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                  local_248 = 0;
                  goto switchD_00aca2e1_caseD_0;
                }
              }
              else if (local_215 == 0x68) {
                local_214 = local_214 | 0x20;
              }
              else if (local_215 == 0x6c) {
                if (*pbVar12 == 0x6c) {
                  local_214 = local_214 | 0x1000;
                  local_244 = param_2 + 2;
                }
                else {
                  local_214 = local_214 | 0x10;
                }
              }
              else if (local_215 == 0x77) {
                local_214 = local_214 | 0x800;
              }
              break;
            case 7:
              if ((char)local_215 < 'e') {
                if (local_215 == 100) {
LAB_00aca7ad:
                  local_214 = local_214 | 0x40;
LAB_00aca7b4:
                  local_220 = param_4;
                  local_22c = 10;
LAB_00aca7be:
                  if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                    pwVar13 = local_220 + 2;
                    if ((local_214 & 0x20) == 0) {
                      uVar5 = *(uint *)local_220;
                      if ((local_214 & 0x40) == 0) {
                        iVar11 = 0;
                        local_220 = pwVar13;
                      }
                      else {
                        iVar11 = (int)uVar5 >> 0x1f;
                        local_220 = pwVar13;
                      }
                    }
                    else {
                      if ((local_214 & 0x40) == 0) {
                        uVar5 = (uint)(ushort)*local_220;
                      }
                      else {
                        uVar5 = (uint)*local_220;
                      }
                      iVar11 = (int)uVar5 >> 0x1f;
                      local_220 = pwVar13;
                    }
                  }
                  else {
                    uVar5 = *(uint *)local_220;
                    iVar11 = *(int *)(local_220 + 2);
                    local_220 = local_220 + 4;
                  }
                  if ((((local_214 & 0x40) != 0) && (iVar11 < 1)) && (iVar11 < 0)) {
                    bVar14 = uVar5 != 0;
                    uVar5 = -uVar5;
                    iVar11 = -(iVar11 + (uint)bVar14);
                    local_214 = local_214 | 0x100;
                  }
                  if ((local_214 & 0x9000) == 0) {
                    iVar11 = 0;
                  }
                  lVar15 = CONCAT44(iVar11,uVar5);
                  if (local_21c < 0) {
                    local_21c = 1;
                  }
                  else {
                    local_214 = local_214 & 0xfffffff7;
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                  }
                  if (uVar5 == 0 && iVar11 == 0) {
                    local_238 = 0;
                  }
                  pwVar13 = &local_11;
                  while( true ) {
                    sVar8 = (size_t)lVar15;
                    iVar11 = local_21c + -1;
                    if ((local_21c < 1) && (lVar15 == 0)) break;
                    local_21c = iVar11;
                    lVar15 = __aulldvrm(lVar15,local_22c,(int)local_22c >> 0x1f);
                    iVar11 = extraout_ECX + 0x30;
                    if (0x39 < iVar11) {
                      iVar11 = iVar11 + local_25c;
                    }
                    *(char *)pwVar13 = (char)iVar11;
                    pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                    local_26c = sVar8;
                  }
                  local_22c = (int)&local_11 + -(int)pwVar13;
                  local_224 = (wchar_t *)((int)pwVar13 + 1);
                  local_21c = iVar11;
                  if (((local_214 & 0x200) != 0) &&
                     ((local_22c == 0 || (*(char *)local_224 != '0')))) {
                    *(char *)pwVar13 = '0';
                    local_22c = (int)&local_11 + -(int)pwVar13 + 1;
                    local_224 = pwVar13;
                  }
                }
                else if ((char)local_215 < 'T') {
                  if (local_215 == 0x53) {
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
                    goto LAB_00aca5c5;
                  }
                  if (local_215 == 0x41) {
LAB_00aca578:
                    local_215 = local_215 + 0x20;
                    local_278 = 1;
LAB_00aca7e3:
                    local_214 = local_214 | 0x40;
                    local_26c = 0x200;
                    pwVar13 = local_210;
                    sVar8 = local_26c;
                    pwVar17 = local_210;
                    if (local_21c < 0) {
                      local_21c = 6;
                    }
                    else if (local_21c == 0) {
                      if (local_215 == 0x67) {
                        local_21c = 1;
                      }
                    }
                    else {
                      if (0x200 < local_21c) {
                        local_21c = 0x200;
                      }
                      if (0xa3 < local_21c) {
                        sVar8 = local_21c + 0x15d;
                        local_224 = local_210;
                        local_264 = __malloc_crt(sVar8);
                        pwVar13 = local_264;
                        pwVar17 = local_264;
                        if (local_264 == (wchar_t *)0x0) {
                          local_21c = 0xa3;
                          pwVar13 = local_210;
                          sVar8 = local_26c;
                          pwVar17 = local_224;
                        }
                      }
                    }
                    local_224 = pwVar17;
                    local_26c = sVar8;
                    local_284 = *(undefined4 *)param_4;
                    local_220 = param_4 + 4;
                    local_280 = *(undefined4 *)(param_4 + 2);
                    plVar19 = &local_258;
                    iVar6 = (int)(char)local_215;
                    puVar16 = &local_284;
                    pwVar17 = pwVar13;
                    sVar8 = local_26c;
                    iVar11 = local_21c;
                    uVar18 = local_278;
                    pcVar7 = DecodePointer(Ptr_00ef3168);
                    (*pcVar7)(puVar16,pwVar17,sVar8,iVar6,iVar11,uVar18,plVar19);
                    uVar5 = local_214 & 0x80;
                    if ((uVar5 != 0) && (local_21c == 0)) {
                      plVar19 = &local_258;
                      pwVar17 = pwVar13;
                      pcVar7 = DecodePointer(Ptr_00ef3174);
                      (*pcVar7)(pwVar17,plVar19);
                    }
                    if ((local_215 == 0x67) && (uVar5 == 0)) {
                      plVar19 = &local_258;
                      pwVar17 = pwVar13;
                      pcVar7 = DecodePointer(Ptr_00ef3170);
                      (*pcVar7)(pwVar17,plVar19);
                    }
                    if ((char)*pwVar13 == '-') {
                      local_214 = local_214 | 0x100;
                      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                      local_224 = pwVar13;
                    }
LAB_00aca6fe:
                    local_22c = _strlen((char *)pwVar13);
                  }
                  else if (local_215 == 0x43) {
                    local_220 = param_4;
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
LAB_00aca63e:
                    if ((local_214 & 0x810) == 0) {
                      local_210[0]._0_1_ = (char)*local_220;
                      local_22c = 1;
                      local_220 = local_220 + 2;
                    }
                    else {
                      wVar2 = *local_220;
                      local_220 = local_220 + 2;
                      eVar9 = _wctomb_s((int *)&local_22c,(char *)local_210,0x200,wVar2);
                      if (eVar9 != 0) {
                        local_260 = 1;
                      }
                    }
                    local_224 = local_210;
                  }
                  else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_00aca578;
                }
                else {
                  if (local_215 == 0x58) goto LAB_00aca940;
                  if (local_215 == 0x5a) {
                    psVar3 = *(short **)param_4;
                    local_220 = param_4 + 2;
                    if ((psVar3 == (short *)0x0) ||
                       (local_224 = *(wchar_t **)(psVar3 + 2), local_224 == (wchar_t *)0x0)) {
                      local_224 = (wchar_t *)PTR_s__null__00ef2edc;
                      pwVar13 = (wchar_t *)PTR_s__null__00ef2edc;
                      goto LAB_00aca6fe;
                    }
                    local_22c = (size_t)*psVar3;
                    if ((local_214 & 0x800) == 0) {
                      local_240 = 0;
                    }
                    else {
                      local_22c = (int)local_22c / 2;
                      local_240 = 1;
                    }
                  }
                  else {
                    if (local_215 == 0x61) goto LAB_00aca7e3;
                    if (local_215 == 99) goto LAB_00aca63e;
                  }
                }
LAB_00acab20:
                if (local_260 == 0) {
                  if ((local_214 & 0x40) != 0) {
                    if ((local_214 & 0x100) == 0) {
                      if ((local_214 & 1) == 0) {
                        if ((local_214 & 2) == 0) goto LAB_00acab6d;
                        local_230 = 0x20;
                      }
                      else {
                        local_230 = 0x2b;
                      }
                    }
                    else {
                      local_230 = 0x2d;
                    }
                    local_238 = 1;
                  }
LAB_00acab6d:
                  sVar8 = (local_23c - local_22c) - local_238;
                  local_26c = sVar8;
                  if ((local_214 & 0xc) == 0) {
                    do {
                      if ((int)sVar8 < 1) break;
                      sVar8 = sVar8 - 1;
                      write_char();
                    } while (local_228 != -1);
                  }
                  FUN_00ab9d8f(&local_230,local_238);
                  if (((local_214 & 8) != 0) && (sVar8 = local_26c, (local_214 & 4) == 0)) {
                    do {
                      if ((int)sVar8 < 1) break;
                      write_char();
                      sVar8 = sVar8 - 1;
                    } while (local_228 != -1);
                  }
                  if ((local_240 == 0) || ((int)local_22c < 1)) {
                    FUN_00ab9d8f(local_224,local_22c);
                  }
                  else {
                    local_274 = local_22c;
                    pwVar13 = local_224;
                    do {
                      wVar2 = *pwVar13;
                      local_274 = local_274 - 1;
                      pwVar13 = pwVar13 + 1;
                      eVar9 = _wctomb_s(&local_27c,(char *)((int)&local_11 + 1),6,wVar2);
                      if ((eVar9 != 0) || (local_27c == 0)) {
                        local_228 = -1;
                        break;
                      }
                      FUN_00ab9d8f((int)&local_11 + 1,local_27c);
                    } while (local_274 != 0);
                  }
                  if ((-1 < local_228) && (sVar8 = local_26c, (local_214 & 4) != 0)) {
                    do {
                      if ((int)sVar8 < 1) break;
                      write_char();
                      sVar8 = sVar8 - 1;
                    } while (local_228 != -1);
                  }
                }
              }
              else {
                if ('p' < (char)local_215) {
                  if (local_215 == 0x73) {
LAB_00aca5c5:
                    iVar11 = local_21c;
                    if (local_21c == -1) {
                      iVar11 = 0x7fffffff;
                    }
                    local_220 = param_4 + 2;
                    local_224 = *(wchar_t **)param_4;
                    if ((local_214 & 0x810) == 0) {
                      pwVar13 = local_224;
                      if (local_224 == (wchar_t *)0x0) {
                        local_224 = (wchar_t *)PTR_s__null__00ef2edc;
                        pwVar13 = (wchar_t *)PTR_s__null__00ef2edc;
                      }
                      for (; (iVar11 != 0 && (iVar11 = iVar11 + -1, (char)*pwVar13 != '\0'));
                          pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                      }
                      local_22c = (int)pwVar13 - (int)local_224;
                    }
                    else {
                      if (local_224 == (wchar_t *)0x0) {
                        local_224 = (wchar_t *)PTR_u__null__00ef2ee0;
                      }
                      local_240 = 1;
                      for (pwVar13 = local_224;
                          (iVar11 != 0 && (iVar11 = iVar11 + -1, *pwVar13 != L'\0'));
                          pwVar13 = pwVar13 + 1) {
                      }
                      local_22c = (int)pwVar13 - (int)local_224 >> 1;
                    }
                    goto LAB_00acab20;
                  }
                  if (local_215 == 0x75) goto LAB_00aca7b4;
                  if (local_215 != 0x78) goto LAB_00acab20;
                  local_25c = 0x27;
LAB_00aca972:
                  local_22c = 0x10;
                  if ((local_214 & 0x80) != 0) {
                    local_22f = (char)local_25c + 'Q';
                    local_230 = 0x30;
                    local_238 = 2;
                  }
                  goto LAB_00aca7be;
                }
                if (local_215 == 0x70) {
                  local_21c = 8;
LAB_00aca940:
                  local_25c = 7;
                  local_220 = param_4;
                  goto LAB_00aca972;
                }
                if ((char)local_215 < 'e') goto LAB_00acab20;
                param_4 = local_220;
                if ((char)local_215 < 'h') goto LAB_00aca7e3;
                if (local_215 == 0x69) goto LAB_00aca7ad;
                if (local_215 != 0x6e) {
                  if (local_215 != 0x6f) goto LAB_00acab20;
                  local_22c = 8;
                  if ((local_214 & 0x80) != 0) {
                    local_214 = local_214 | 0x200;
                  }
                  goto LAB_00aca7be;
                }
                piVar4 = *(int **)local_220;
                local_220 = local_220 + 2;
                iVar11 = FUN_00ab2944();
                if (iVar11 == 0) goto LAB_00aca1c5;
                if ((local_214 & 0x20) == 0) {
                  *piVar4 = local_228;
                }
                else {
                  *(undefined2 *)piVar4 = (undefined2)local_228;
                }
                local_260 = 1;
              }
              if (local_264 != (wchar_t *)0x0) {
                _free(local_264);
                local_264 = (wchar_t *)0x0;
              }
            }
            local_215 = *local_244;
            param_2 = local_244;
            param_4 = local_220;
          } while (local_215 != 0);
          if ((local_248 != 0) && (local_248 != 7)) goto LAB_00aca1c5;
        }
        if (local_24c != '\0') {
          *(uint *)(local_250 + 0x70) = *(uint *)(local_250 + 0x70) & 0xfffffffd;
        }
        goto LAB_00acad51;
      }
    }
  }
LAB_00aca1c5:
  piVar4 = __errno();
  *piVar4 = 0x16;
  FUN_00ab7c17();
  if (local_24c != '\0') {
    *(uint *)(local_250 + 0x70) = *(uint *)(local_250 + 0x70) & 0xfffffffd;
  }
LAB_00acad51:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

