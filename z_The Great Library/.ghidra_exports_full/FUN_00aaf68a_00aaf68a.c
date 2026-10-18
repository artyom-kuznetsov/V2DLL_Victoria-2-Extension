// _fgetpos @ 00aaf68a body=[[00aaf68a, 00aaf6e4]]


/* Library Function - Single Match
    _fgetpos
   
   Library: Visual Studio 2010 Release */

int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return -1;
  }
  if (_Pos == (fpos_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    iVar2 = -1;
  }
  else {
    lVar3 = __ftelli64(_File);
    iVar2 = -1;
    *_Pos = lVar3;
    if (lVar3 != -1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

