// _mbtowc @ 00ac9f05 body=[[00ac9f05, 00ac9f1e]]


/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2010 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}

