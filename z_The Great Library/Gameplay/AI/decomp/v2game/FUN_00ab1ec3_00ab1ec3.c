// __ui64toa @ 00ab1ec3 body=[[00ab1ec3, 00ab1edf]]


/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2010 Release */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  x64toa(in_ECX,in_EDX,_Val,_Radix,0);
  return _DstBuf;
}

