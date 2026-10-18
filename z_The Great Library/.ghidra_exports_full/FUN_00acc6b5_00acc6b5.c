// __mbsicmp_l @ 00acc6b5 body=[[00acc6b5, 00acc8ab]]


/* Library Function - Single Match
    __mbsicmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  pthreadmbcinfo ptVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  ushort uVar8;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte local_8;
  byte local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_Str2 == (uchar *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else {
    ptVar4 = local_18.mbcinfo;
    if ((local_18.mbcinfo)->ismbcodepage == 0) {
      iVar3 = __stricmp_l((char *)_Str1,(char *)_Str2,&local_18);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        uVar6 = (uint)*_Str1;
        pbVar7 = _Str1 + 1;
        if ((ptVar4->mbctype[uVar6 + 5] & 4) == 0) {
          _Str1 = pbVar7;
          if ((ptVar4->mbctype[uVar6 + 5] & 0x10) != 0) {
            uVar6 = (uint)ptVar4->mbcasemap[uVar6 + 4];
          }
        }
        else if (*pbVar7 == 0) {
          uVar6 = 0;
          _Str1 = pbVar7;
        }
        else {
          iVar3 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar4->mbulinfo,0x200,(LPCSTR)_Str1,2,
                                     (LPSTR)&local_8,2,ptVar4->mbcodepage,1);
          if (iVar3 == 1) {
            uVar6 = (uint)local_8;
          }
          else {
            if (iVar3 != 2) goto LAB_00acc864;
            uVar6 = (uint)(ushort)((ushort)local_8 * 0x100 + (ushort)local_7);
          }
          ptVar4 = local_18.mbcinfo;
          _Str1 = _Str1 + 2;
        }
        bVar1 = *_Str2;
        pbVar7 = _Str2 + 1;
        if ((ptVar4->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar4->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar5 = (ushort)bVar1;
          }
          else {
            uVar5 = (ushort)ptVar4->mbcasemap[bVar1 + 4];
          }
        }
        else if (*pbVar7 == 0) {
          uVar5 = 0;
        }
        else {
          iVar3 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar4->mbulinfo,0x200,(LPCSTR)_Str2,2,
                                     (LPSTR)&local_8,2,ptVar4->mbcodepage,1);
          if (iVar3 == 1) {
            uVar5 = (ushort)local_8;
          }
          else {
            if (iVar3 != 2) {
LAB_00acc864:
              piVar2 = __errno();
              *piVar2 = 0x16;
              if (local_c != '\0') {
                *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
              }
              return 0x7fffffff;
            }
            uVar5 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          pbVar7 = _Str2 + 2;
          ptVar4 = local_18.mbcinfo;
        }
        uVar8 = (ushort)uVar6;
        if (uVar5 != uVar8) {
          iVar3 = (-(uint)(uVar5 < uVar8) & 2) - 1;
          if (local_c == '\0') {
            return iVar3;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return iVar3;
        }
        _Str2 = pbVar7;
      } while (uVar8 != 0);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}

