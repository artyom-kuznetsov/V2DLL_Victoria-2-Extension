// __crtLCMapStringA_stat @ 00ab6aa9 body=[[00ab6aa9, 00ab6c8f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint _Size;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPCWSTR lpDestStr;
  int iVar7;
  LPCWSTR local_10;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  pcVar3 = param_4;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      iVar7 = iVar7 + -1;
      if (*pcVar3 == '\0') goto LAB_00ab6ad9;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 != 0);
    iVar7 = -1;
LAB_00ab6ad9:
    iVar7 = param_5 - iVar7;
    iVar4 = iVar7 + -1;
    bVar1 = iVar4 < param_5;
    param_5 = iVar4;
    if (bVar1) {
      param_5 = iVar7;
    }
  }
  if (param_8 == 0) {
    param_8 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_00ab6c7e;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffe0;
      local_10 = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_00ab6b69:
        local_10 = (LPCWSTR)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_10 = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_00ab6b69;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_00ab6c7e;
  iVar7 = MultiByteToWideChar(param_8,1,param_4,param_5,local_10,cchWideChar);
  if ((iVar7 != 0) &&
     (uVar6 = LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)0x0,0), uVar6 != 0)) {
    if ((param_3 & 0x400) == 0) {
      if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        _Size = uVar6 * 2 + 8;
        if (_Size < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_00ab6c72;
          lpDestStr = (LPCWSTR)&stack0xffffffe8;
        }
        else {
          lpDestStr = _malloc(_Size);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar7 = LCMapStringW(param_2,param_3,local_10,cchWideChar,lpDestStr,uVar6);
        if (iVar7 != 0) {
          if (param_7 == 0) {
            param_7 = 0;
            param_6 = (LPSTR)0x0;
          }
          WideCharToMultiByte(param_8,0,lpDestStr,uVar6,param_6,param_7,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_7 != 0) && ((int)uVar6 <= param_7)) {
      LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)param_6,param_7);
    }
  }
LAB_00ab6c72:
  __freea(local_10);
LAB_00ab6c7e:
  iVar7 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar7;
}

