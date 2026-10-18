// __strtoi64 @ 00abb0e9 body=[[00abb0e9, 00abb113]]


/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_00f1fc74 == 0) {
    ppuVar2 = &PTR_DAT_00ef2ecc;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}

