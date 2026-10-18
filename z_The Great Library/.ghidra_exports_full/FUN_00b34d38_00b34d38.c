// _strlwr_s_l_stat @ 00b34d38 body=[[00b34d38, 00b34eb5]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strlwr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _strlwr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  uint uVar2;
  int *piVar3;
  size_t sVar4;
  uint _CchDest;
  undefined4 *puVar5;
  int iVar6;
  char *local_c;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
LAB_00b34d54:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    sVar4 = _strnlen(param_1,param_2);
    if (param_2 <= sVar4) {
      *param_1 = '\0';
      goto LAB_00b34d54;
    }
    _LocaleName = param_3->locinfo->lc_category[0].wlocale;
    if (_LocaleName == (LPCWSTR)0x0) {
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = *param_1;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *param_1 = cVar1 + ' ';
        }
        param_1 = param_1 + 1;
        cVar1 = *param_1;
      }
      goto LAB_00b34ea4;
    }
    _CchDest = ___crtLCMapStringA(param_3,_LocaleName,0x100,param_1,-1,(LPSTR)0x0,0,
                                  param_3->locinfo->lc_codepage,1);
    if (_CchDest == 0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_00b34ddb:
      __errno();
      goto LAB_00b34ea4;
    }
    if (_CchDest <= param_2) {
      if (((int)_CchDest < 1) || (0xffffffe0 / _CchDest == 0)) {
        local_c = (char *)0x0;
      }
      else if (_CchDest + 8 < 0x401) {
        puVar5 = (undefined4 *)&stack0xffffffe4;
        local_c = &stack0xffffffe4;
        if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_00b34e39:
          local_c = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_CchDest + 8);
        local_c = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_00b34e39;
        }
      }
      if (local_c != (char *)0x0) {
        iVar6 = ___crtLCMapStringA(param_3,param_3->locinfo->lc_category[0].wlocale,0x100,param_1,-1
                                   ,local_c,_CchDest,param_3->locinfo->lc_codepage,1);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _strcpy_s(param_1,param_2,local_c);
        }
        __freea(local_c);
        goto LAB_00b34ea4;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_00b34ddb;
    }
    *param_1 = '\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_00ab7c17();
LAB_00b34ea4:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

