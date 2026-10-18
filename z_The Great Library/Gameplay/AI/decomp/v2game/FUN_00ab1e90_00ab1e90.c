// __i64toa @ 00ab1e90 body=[[00ab1e90, 00ab1ec2]]


/* Library Function - Single Match
    __i64toa
   
   Library: Visual Studio 2010 Release */

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  uVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    uVar1 = 1;
  }
  x64toa(in_ECX,in_EDX,_Val,_Radix,uVar1);
  return _DstBuf;
}

