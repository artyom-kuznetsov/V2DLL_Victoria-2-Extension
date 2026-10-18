// __itoa @ 00ab1df7 body=[[00ab1df7, 00ab1e20]]


/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2010 Release */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  undefined4 uVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar1 = 1;
    _Radix = 10;
  }
  else {
    uVar1 = 0;
  }
  xtoa(_Radix,uVar1);
  return _Dest;
}

