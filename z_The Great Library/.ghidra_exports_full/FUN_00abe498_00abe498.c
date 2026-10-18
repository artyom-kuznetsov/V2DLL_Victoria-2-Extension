// __cftoe @ 00abe498 body=[[00abe498, 00abe4b7]]


/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return eVar1;
}

