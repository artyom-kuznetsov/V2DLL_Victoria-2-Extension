// __crtCompareStringA_stat @ 00acdb6a body=[[00acdb6a, 00acddd7]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *pcVar1;
  byte *pbVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  uint uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  char *pcVar7;
  int iVar8;
  byte *in_EDX;
  LPWSTR lpWideCharStr;
  PCNZWCH local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)param_3;
  pcVar7 = param_4;
  if ((int)param_4 < 1) {
    if ((int)param_4 < -1) goto LAB_00acddc6;
  }
  else {
    do {
      pcVar7 = pcVar7 + -1;
      if (*pcVar1 == '\0') goto LAB_00acdba1;
      pcVar1 = pcVar1 + 1;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = (char *)0xffffffff;
LAB_00acdba1:
    param_4 = param_4 + (-1 - (int)pcVar7);
  }
  pbVar2 = in_EDX;
  iVar8 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_00acddc6;
  }
  else {
    do {
      iVar8 = iVar8 + -1;
      if (*pbVar2 == 0) goto LAB_00acdbc4;
      pbVar2 = pbVar2 + 1;
    } while (iVar8 != 0);
    iVar8 = -1;
LAB_00acdbc4:
    param_5 = param_5 + (-1 - iVar8);
  }
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_4 == (char *)0x0) || (param_5 == 0)) {
    if ((param_4 == (char *)param_5) ||
       (((1 < param_5 || (1 < (int)param_4)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_00acddc6;
    if (0 < (int)param_4) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*(byte *)param_3 < *pBVar4 || (pBVar4[1] < *(byte *)param_3))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00acddc6;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00acddc6;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)param_3,(int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_00acddc6;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_20 = (PCNZWCH)0x0;
  }
  else {
    uVar5 = cchWideChar * 2 + 8;
    if (uVar5 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffc4;
      local_20 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00acdcfc:
        local_20 = (PCNZWCH)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar5);
      local_20 = (PCNZWCH)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_00acdcfc;
      }
    }
  }
  if (local_20 == (PCNZWCH)0x0) goto LAB_00acddc6;
  iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)param_3,(int)param_4,local_20,cchWideChar);
  if ((iVar8 != 0) &&
     (uVar5 = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_5,(LPWSTR)0x0,0), uVar5 != 0)
     ) {
    if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar5 * 2 + 8;
      if (_Size < 0x401) {
        puVar6 = (undefined4 *)&stack0xffffffc4;
        lpWideCharStr = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00acdd7c:
          lpWideCharStr = (LPWSTR)(puVar6 + 2);
        }
      }
      else {
        puVar6 = _malloc(_Size);
        lpWideCharStr = (LPWSTR)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_00acdd7c;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_5,lpWideCharStr,uVar5);
      if (iVar8 != 0) {
        CompareStringW((LCID)param_1,param_2,local_20,cchWideChar,lpWideCharStr,uVar5);
      }
      __freea(lpWideCharStr);
    }
  }
  __freea(local_20);
LAB_00acddc6:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

