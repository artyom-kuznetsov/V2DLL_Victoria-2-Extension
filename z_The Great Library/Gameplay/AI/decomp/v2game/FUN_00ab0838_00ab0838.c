// _feof @ 00ab0838 body=[[00ab0838, 00ab085f]]


/* Library Function - Single Match
    _feof
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl _feof(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return 0;
  }
  return _File->_flag & 0x10;
}

