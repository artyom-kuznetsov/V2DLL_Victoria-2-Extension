// _strtol @ 00abae21 body=[[00abae21, 00abae4b]]


/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2010 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_00f1fc74 == 0) {
    ppuVar2 = &PTR_DAT_00ef2ecc;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

