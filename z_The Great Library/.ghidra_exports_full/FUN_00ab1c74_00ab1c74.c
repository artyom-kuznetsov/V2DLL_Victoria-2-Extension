// ___ascii_stricmp @ 00ab1c74 body=[[00ab1c74, 00ab1cac]]


/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2010 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}

