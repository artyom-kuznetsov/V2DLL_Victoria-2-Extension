// __ui64toa_s @ 00ab70a9 body=[[00ab70a9, 00ab70c7]]


/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  eVar1 = x64toa_s(in_ECX,in_EDX,_Val,_Size,_Radix,0);
  return eVar1;
}

