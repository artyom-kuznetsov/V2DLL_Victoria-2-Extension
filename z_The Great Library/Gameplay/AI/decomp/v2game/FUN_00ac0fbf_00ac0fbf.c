// __mbspbrk_l @ 00ac0fbf body=[[00ac0fbf, 00ac1083]]


/* Library Function - Single Match
    __mbspbrk_l
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbspbrk_l(uchar *_Str,uchar *_Control,_locale_t _Locale)

{
  byte bVar1;
  uchar *puVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (*(int *)(local_10 + 8) == 0) {
    puVar2 = (uchar *)_strpbrk((char *)_Str,(char *)_Control);
  }
  else {
    if ((_Str == (uchar *)0x0) || (_Control == (uchar *)0x0)) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_00ab7c17();
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return (uchar *)0x0;
    }
    pbVar5 = _Control;
    if (*_Str != '\0') {
LAB_00ac104e:
      do {
        if (*pbVar5 != 0) {
          bVar1 = *pbVar5;
          if ((*(byte *)(bVar1 + 0x1d + local_10) & 4) == 0) {
            pbVar4 = pbVar5;
            if (bVar1 != *_Str) goto LAB_00ac104d;
          }
          else if (((bVar1 != *_Str) || (pbVar5[1] != _Str[1])) &&
                  (pbVar4 = pbVar5 + 1, *pbVar4 != 0)) {
LAB_00ac104d:
            pbVar5 = pbVar4 + 1;
            goto LAB_00ac104e;
          }
        }
        if (((*pbVar5 != 0) ||
            (((*(byte *)(*_Str + 0x1d + local_10) & 4) != 0 && (_Str = _Str + 1, *_Str == 0)))) ||
           (_Str = _Str + 1, pbVar5 = _Control, *_Str == 0)) break;
      } while( true );
    }
    puVar2 = (uchar *)(-(uint)(*_Str != 0) & (uint)_Str);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return puVar2;
}

