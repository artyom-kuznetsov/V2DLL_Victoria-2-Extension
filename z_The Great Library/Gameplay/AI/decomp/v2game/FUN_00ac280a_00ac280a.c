// _TestDefaultLanguage @ 00ac280a body=[[00ac280a, 00ac2864]]


/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2010 Release */

undefined4 _TestDefaultLanguage(int param_1,undefined4 *param_2)

{
  char *_Str;
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  uint local_8;
  
  iVar1 = GetLocaleInfoW(in_EAX & 0x3ff | 0x400,0x20000001,(LPWSTR)&local_8,2);
  if (iVar1 == 0) {
LAB_00ac2835:
    uVar2 = 0;
  }
  else {
    if ((in_EAX != local_8) && (param_1 != 0)) {
      _Str = (char *)*param_2;
      sVar3 = _GetPrimaryLen();
      sVar4 = _strlen(_Str);
      if (sVar3 == sVar4) goto LAB_00ac2835;
    }
    uVar2 = 1;
  }
  return uVar2;
}

