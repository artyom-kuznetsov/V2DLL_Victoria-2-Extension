// _fread @ 00ab26ae body=[[00ab26ae, 00ab26ca]]


/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = _fread_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

