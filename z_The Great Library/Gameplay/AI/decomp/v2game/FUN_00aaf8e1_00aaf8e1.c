// _fsetpos @ 00aaf8e1 body=[[00aaf8e1, 00aaf91b]]


/* Library Function - Single Match
    _fsetpos
   
   Library: Visual Studio 2010 Release */

int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar2 = __fseeki64(_File,(ulonglong)*(uint *)((int)_Pos + 4),unaff_EBP);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00ab7c17();
  return -1;
}

