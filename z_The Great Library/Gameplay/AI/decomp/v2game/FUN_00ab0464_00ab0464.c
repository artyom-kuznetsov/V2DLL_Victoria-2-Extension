// _fopen @ 00ab0464 body=[[00ab0464, 00ab047a]]


/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}

