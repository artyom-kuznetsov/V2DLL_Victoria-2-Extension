// __unlock_file @ 00aaf32c body=[[00aaf32c, 00aaf367]]


/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0xef230f < _File) && (_File < (FILE *)0xef2571)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_00abb496(((int)&_File[-0x77919]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

