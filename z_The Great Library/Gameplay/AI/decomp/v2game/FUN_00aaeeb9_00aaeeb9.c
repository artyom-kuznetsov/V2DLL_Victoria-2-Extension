// _sprintf_s @ 00aaeeb9 body=[[00aaeeb9, 00aaeed6]]


/* Library Function - Single Match
    _sprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}

