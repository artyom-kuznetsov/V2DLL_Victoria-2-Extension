// ___init_monetary @ 00ac223f body=[[00ac223f, 00ac259e]]


/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  LONG LVar23;
  int iVar24;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_00ef22b8;
LAB_00ac2542:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar23 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar23 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar24 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x50);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar26 = &PTR_DAT_00ef22b8;
          ppuVar27 = _Memory;
          for (iVar24 = 0x14; iVar24 != 0; iVar24 = iVar24 + -1) {
            *ppuVar27 = *ppuVar26;
            ppuVar26 = ppuVar26 + 1;
            ppuVar27 = ppuVar27 + 1;
          }
LAB_00ac24ee:
          *_Memory = *(undefined **)_LocInfo[1].lc_codepage;
          _Memory[1] = *(undefined **)(_LocInfo[1].lc_codepage + 4);
          _Memory[2] = *(undefined **)(_LocInfo[1].lc_codepage + 8);
          _Memory[0xc] = *(undefined **)(_LocInfo[1].lc_codepage + 0x30);
          _Memory[0xd] = *(undefined **)(_LocInfo[1].lc_codepage + 0x34);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_00ac2542;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar24 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar2 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar8 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          iVar16 = ___getlocaleinfo(&local_14,2,_LocaleName,0x15,_Memory + 0xe);
          iVar17 = ___getlocaleinfo(&local_14,2,_LocaleName,0x14,_Memory + 0xf);
          iVar18 = ___getlocaleinfo(&local_14,2,_LocaleName,0x16,_Memory + 0x10);
          iVar19 = ___getlocaleinfo(&local_14,2,_LocaleName,0x17,_Memory + 0x11);
          iVar20 = ___getlocaleinfo(&local_14,2,_LocaleName,0x50,_Memory + 0x12);
          iVar21 = ___getlocaleinfo(&local_14,2,_LocaleName,0x51,_Memory + 0x13);
          if (iVar21 == 0 &&
              (((((((((((((((((((iVar24 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) &&
                             iVar5 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0)
                        && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
                    iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0) &&
               iVar19 == 0) && iVar20 == 0)) {
            pcVar22 = _Memory[7];
            while (*pcVar22 != '\0') {
              cVar1 = *pcVar22;
              if ((cVar1 < '0') || ('9' < cVar1)) {
                pcVar25 = pcVar22;
                if (cVar1 != ';') goto LAB_00ac24c6;
                do {
                  *pcVar25 = pcVar25[1];
                  pcVar25 = pcVar25 + 1;
                } while (*pcVar25 != '\0');
              }
              else {
                *pcVar22 = cVar1 + -0x30;
LAB_00ac24c6:
                pcVar22 = pcVar22 + 1;
              }
            }
            goto LAB_00ac24ee;
          }
          ___free_lconv_mon(_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar24 = 1;
  }
  return iVar24;
}

