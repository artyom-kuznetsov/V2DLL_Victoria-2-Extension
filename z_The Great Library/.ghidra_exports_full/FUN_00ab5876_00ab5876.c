// ___init_ctype @ 00ab5876 body=[[00ab5876, 00ab5c1c]]


/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  void *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  BYTE *pBVar8;
  uint uVar9;
  localeinfo_struct local_50;
  wchar_t *local_48;
  LPWORD local_44;
  byte *local_40;
  int *local_3c;
  BYTE *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  LPCSTR local_28;
  void *local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_20 = (BYTE *)0x0;
  local_24 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (LPCSTR)0x0;
  local_50.locinfo = _LocInfo;
  local_50.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    if ((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_00dd9ba8;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_00dd9d28;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_00ab5c0e;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_50,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_00ab5b9f:
    _free(local_30);
    _free(local_20);
    _free(local_24);
    _free(local_2c);
  }
  else {
    local_30 = __malloc_crt(4);
    local_20 = __calloc_crt(0x180,2);
    local_24 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_28 = __calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_20 == (BYTE *)0x0 || (local_28 == (LPCSTR)0x0)) || (local_24 == (void *)0x0)) ||
        (local_2c == (void *)0x0)))) goto LAB_00ab5b9f;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_28[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_00ab5b9f;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar9 = (uint)pBVar5[-1]; (int)uVar9 <= (int)(uint)bVar2; uVar9 = uVar9 + 1) {
          local_28[uVar9] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_44 = (LPWORD)(local_20 + 0x100);
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_28,0x100,local_44,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_28 + 1,0xff,(LPSTR)((int)local_24 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_28 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_24,
       iVar3 == 0)) goto LAB_00ab5b9f;
    local_40 = local_20 + 0xfe;
    local_40[0] = 0;
    local_40[1] = 0;
    local_48 = (wchar_t *)((int)local_24 + 0x80);
    *(undefined1 *)((int)local_24 + 0x7f) = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(undefined1 *)local_48 = 0;
    local_3c = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_3c = 0;
    pBVar7 = local_20;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        if (*pBVar7 == 0) break;
        local_24 = (void *)(uint)pBVar7[-1];
        if (local_24 <= (void *)(uint)*pBVar7) {
          local_38 = local_20 + (int)local_24 * 2 + 0x100;
          do {
            local_24 = (void *)((int)local_24 + 1);
            local_38[0] = '\0';
            local_38[1] = 0x80;
            local_38 = local_38 + 2;
          } while ((int)local_24 <= (int)(uint)*pBVar7);
        }
        pBVar8 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = pBVar8;
      } while (*pBVar1 != 0);
    }
    local_20 = pBVar7;
    FID_conflict__memcpy(pBVar5,pBVar5 + 0x200,0xfe);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0x100),0x7f);
    FID_conflict__memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_44;
    _LocInfo[1].lc_time_cp = (uint)local_40;
    _LocInfo[1].lc_category[0].wlocale = local_48;
    _LocInfo[1].lc_category[0].refcount = local_3c;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_28);
LAB_00ab5c0e:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

