// __crtGetStringTypeA_stat @ 00ac11ce body=[[00ac11ce, 00ac12b4]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  uint uVar1;
  uint cchWideChar;
  undefined4 *puVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_00ac12a3;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar2 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00ac125d:
        lpWideCharStr = (LPCWSTR)(puVar2 + 2);
      }
    }
    else {
      puVar2 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0xdddd;
        goto LAB_00ac125d;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar3 = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,cchWideChar);
    if (iVar3 != 0) {
      GetStringTypeW(param_2,lpWideCharStr,iVar3,param_5);
    }
    __freea(lpWideCharStr);
  }
LAB_00ac12a3:
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

