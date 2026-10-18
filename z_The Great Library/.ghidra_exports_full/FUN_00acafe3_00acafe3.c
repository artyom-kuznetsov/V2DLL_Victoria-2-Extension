// __mbsnbcmp_l @ 00acafe3 body=[[00acafe3, 00acb12e]]


/* Library Function - Single Match
    __mbsnbcmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (*(int *)(local_10 + 8) == 0) {
    iVar2 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if (_Str2 != (uchar *)0x0) {
      do {
        uVar5 = (uint)*_Str1;
        sVar1 = _MaxCount - 1;
        pbVar6 = _Str1 + 1;
        if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) == 0) {
LAB_00acb0d6:
          uVar4 = (ushort)uVar5;
          uVar5 = (uint)*_Str2;
          pbVar7 = _Str2 + 1;
          if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) != 0) {
            if (sVar1 != 0) {
              sVar1 = _MaxCount - 2;
              if (*pbVar7 != 0) {
                uVar5 = (uint)CONCAT11(*_Str2,*pbVar7);
                pbVar7 = _Str2 + 2;
                goto LAB_00acb104;
              }
            }
            _MaxCount = sVar1;
            uVar5 = 0;
            sVar1 = _MaxCount;
          }
        }
        else {
          if (sVar1 != 0) {
            if (*pbVar6 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (uint)CONCAT11(*_Str1,*pbVar6);
              pbVar6 = _Str1 + 2;
            }
            goto LAB_00acb0d6;
          }
          uVar5 = (uint)*_Str2;
          uVar4 = 0;
          pbVar7 = _Str2;
          if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) != 0) {
LAB_00acb0ab:
            if (local_8 != '\0') {
              *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            }
            return 0;
          }
        }
LAB_00acb104:
        _MaxCount = sVar1;
        if ((ushort)uVar5 != uVar4) {
          iVar2 = (-(uint)((ushort)uVar5 < uVar4) & 2) - 1;
          if (local_8 == '\0') {
            return iVar2;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return iVar2;
        }
        if ((uVar4 == 0) || (_Str1 = pbVar6, _Str2 = pbVar7, _MaxCount == 0)) goto LAB_00acb0ab;
      } while( true );
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

