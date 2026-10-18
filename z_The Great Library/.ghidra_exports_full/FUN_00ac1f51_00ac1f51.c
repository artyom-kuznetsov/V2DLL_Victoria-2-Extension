// ___init_numeric @ 00ac1f51 body=[[00ac1f51, 00ac2140]]


/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  LONG LVar7;
  int iVar8;
  undefined **_Address;
  undefined4 *puVar9;
  LPCWSTR _LocaleName;
  char *pcVar10;
  undefined **ppuVar11;
  localeinfo_struct local_14;
  wchar_t *local_c;
  wchar_t *local_8;
  
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _Address = &PTR_DAT_00ef22b8;
LAB_00ac20e6:
    if (_LocInfo->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo->locale_name[5]);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar7 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar7 == 0)) {
      _free(_LocInfo->locale_name[4]);
      _free((void *)_LocInfo[1].lc_codepage);
    }
    _LocInfo->locale_name[5] = local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Address;
    iVar8 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x50);
    if (_Address != (undefined **)0x0) {
      puVar9 = (undefined4 *)_LocInfo[1].lc_codepage;
      ppuVar11 = _Address;
      for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
        *ppuVar11 = (undefined *)*puVar9;
        puVar9 = puVar9 + 1;
        ppuVar11 = ppuVar11 + 1;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          *_Address = PTR_DAT_00ef22b8;
          _Address[1] = PTR_DAT_00ef22bc;
          _Address[2] = PTR_DAT_00ef22c0;
          _Address[0xc] = PTR_DAT_00ef22e8;
          local_8 = (wchar_t *)0x0;
          _Address[0xd] = PTR_DAT_00ef22ec;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar8 = 1;
LAB_00ac1fe1:
            _free(_Address);
            _free(local_c);
            return iVar8;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0xe,_Address);
          iVar2 = ___getlocaleinfo(&local_14,1,_LocaleName,0xf,_Address + 1);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x10,_Address + 2);
          iVar4 = ___getlocaleinfo(&local_14,2,_LocaleName,0xe,_Address + 0xc);
          iVar5 = ___getlocaleinfo(&local_14,2,_LocaleName,0xf,_Address + 0xd);
          if (iVar5 != 0 || (((iVar8 != 0 || iVar2 != 0) || iVar3 != 0) || iVar4 != 0)) {
            ___free_lconv_num(_Address);
            iVar8 = -1;
            goto LAB_00ac1fe1;
          }
          pcVar6 = _Address[2];
          while (*pcVar6 != '\0') {
            cVar1 = *pcVar6;
            if ((cVar1 < '0') || ('9' < cVar1)) {
              pcVar10 = pcVar6;
              if (cVar1 != ';') goto LAB_00ac208c;
              do {
                *pcVar10 = pcVar10[1];
                pcVar10 = pcVar10 + 1;
              } while (*pcVar10 != '\0');
            }
            else {
              *pcVar6 = cVar1 + -0x30;
LAB_00ac208c:
              pcVar6 = pcVar6 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_00ac20e6;
      }
      _free(_Address);
    }
    iVar8 = 1;
  }
  return iVar8;
}

