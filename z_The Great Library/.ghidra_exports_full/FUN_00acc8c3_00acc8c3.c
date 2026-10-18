// __mbsrchr_l @ 00acc8c3 body=[[00acc8c3, 00acc96c]]


/* Library Function - Single Match
    __mbsrchr_l
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbsrchr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  pbVar6 = (byte *)0x0;
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    pbVar6 = (byte *)0x0;
  }
  else if (*(int *)(local_10 + 8) == 0) {
    pbVar6 = (byte *)_strrchr((char *)_Str,_Ch);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    do {
      bVar5 = *_Str;
      if ((*(byte *)(bVar5 + 0x1d + local_10) & 4) == 0) {
        bVar7 = _Ch == bVar5;
LAB_00acc951:
        pbVar4 = _Str;
        if (bVar7) {
          pbVar6 = _Str;
        }
      }
      else {
        pbVar4 = _Str + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          bVar7 = pbVar6 == (byte *)0x0;
          _Str = pbVar4;
          bVar5 = bVar1;
          goto LAB_00acc951;
        }
        uVar2 = CONCAT11(bVar5,bVar1);
        bVar5 = bVar1;
        if (_Ch == uVar2) {
          pbVar6 = _Str;
        }
      }
      _Str = pbVar4 + 1;
    } while (bVar5 != 0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return pbVar6;
}

