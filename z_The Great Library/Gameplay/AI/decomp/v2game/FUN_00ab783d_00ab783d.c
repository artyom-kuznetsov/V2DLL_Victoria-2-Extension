// ___getlocaleinfo @ 00ab783d body=[[00ab783d, 00ab79e8]]


/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2010 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  bool bVar1;
  size_t sVar2;
  DWORD DVar3;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar4;
  errno_t eVar5;
  LPWSTR lpLCData;
  _locale_t local_8c;
  CHAR local_88 [128];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_8c = _Locale;
  if (_Lc_type != 1) {
    if (_Lc_type == 2) {
      *(undefined4 *)_Address = 0;
      sVar2 = GetLocaleInfoW((LCID)_LocaleName,_FieldType,(LPWSTR)0x0,0);
      if (sVar2 != 0) {
        lpLCData = __calloc_crt(sVar2,2);
        *(LPWSTR *)_Address = lpLCData;
        if ((lpLCData != (LPWSTR)0x0) &&
           (iVar4 = GetLocaleInfoW((LCID)_LocaleName,_FieldType,lpLCData,sVar2), iVar4 != 0))
        goto LAB_00ab791b;
      }
      _free(*(void **)_Address);
      *(undefined4 *)_Address = 0;
    }
    else if (_Lc_type == 0) {
      local_8c = (_locale_t)0x0;
      iVar4 = GetLocaleInfoW((LCID)_LocaleName,_FieldType | 0x20000000,(LPWSTR)&local_8c,2);
      if (iVar4 != 0) {
        *(undefined1 *)_Address = local_8c._0_1_;
      }
    }
    goto LAB_00ab791b;
  }
  bVar1 = false;
  _LpLCData = local_88;
  sVar2 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar2 == 0) {
    DVar3 = GetLastError();
    if (((DVar3 != 0x7a) ||
        (sVar2 = ___crtGetLocaleInfoA(local_8c,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar2 == 0)) ||
       (_LpLCData = __calloc_crt(sVar2,1), _LpLCData == (LPSTR)0x0)) goto LAB_00ab791b;
    bVar1 = true;
    sVar2 = ___crtGetLocaleInfoA(local_8c,_LocaleName,_FieldType,_LpLCData,sVar2);
    if (sVar2 != 0) goto LAB_00ab78f7;
  }
  else {
LAB_00ab78f7:
    _Dst = __calloc_crt(sVar2,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar5 = _strncpy_s(_Dst,sVar2,_LpLCData,sVar2 - 1);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar1) {
        _free(_LpLCData);
      }
      goto LAB_00ab791b;
    }
    if (!bVar1) goto LAB_00ab791b;
  }
  _free(_LpLCData);
LAB_00ab791b:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

