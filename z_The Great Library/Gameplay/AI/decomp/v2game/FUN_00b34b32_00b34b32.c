// _strupr_s_l_stat @ 00b34b32 body=[[00b34b32, 00b34ca5]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strupr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _strupr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  _locale_t unaff_EBX;
  char *unaff_EDI;
  int iVar6;
  char *local_c;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (unaff_EDI == (char *)0x0) {
LAB_00b34b49:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pcVar4 = (char *)_strnlen(unaff_EDI,(size_t)param_1);
    if (param_1 <= pcVar4) {
      *unaff_EDI = '\0';
      goto LAB_00b34b49;
    }
    _LocaleName = unaff_EBX->locinfo->lc_category[0].wlocale;
    if (_LocaleName == (LPCWSTR)0x0) {
      cVar1 = *unaff_EDI;
      while (cVar1 != '\0') {
        cVar1 = *unaff_EDI;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *unaff_EDI = cVar1 + -0x20;
        }
        unaff_EDI = unaff_EDI + 1;
        cVar1 = *unaff_EDI;
      }
      goto LAB_00b34c96;
    }
    pcVar4 = (char *)___crtLCMapStringA(unaff_EBX,_LocaleName,0x200,unaff_EDI,-1,(LPSTR)0x0,0,
                                        unaff_EBX->locinfo->lc_codepage,1);
    if (pcVar4 == (char *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_00b34bcd:
      __errno();
      goto LAB_00b34c96;
    }
    if (pcVar4 <= param_1) {
      if (((int)pcVar4 < 1) || (0xffffffe0U / (uint)pcVar4 == 0)) {
        local_c = (char *)0x0;
      }
      else if (pcVar4 + 8 < (char *)0x401) {
        puVar5 = (undefined4 *)&stack0xffffffec;
        local_c = &stack0xffffffec;
        if (&stack0x00000000 != (undefined1 *)0x14) {
LAB_00b34c2b:
          local_c = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc((size_t)(pcVar4 + 8));
        local_c = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_00b34c2b;
        }
      }
      if (local_c != (char *)0x0) {
        iVar6 = ___crtLCMapStringA(unaff_EBX,unaff_EBX->locinfo->lc_category[0].wlocale,0x200,
                                   unaff_EDI,-1,local_c,(int)pcVar4,unaff_EBX->locinfo->lc_codepage,
                                   1);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _strcpy_s(unaff_EDI,(rsize_t)param_1,local_c);
        }
        __freea(local_c);
        goto LAB_00b34c96;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_00b34bcd;
    }
    *unaff_EDI = '\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_00ab7c17();
LAB_00b34c96:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

