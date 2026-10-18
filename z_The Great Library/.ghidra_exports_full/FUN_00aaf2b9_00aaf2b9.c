// __lock_file @ 00aaf2b9 body=[[00aaf2b9, 00aaf2f9]]


/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_00ef2310) || ((FILE *)&DAT_00ef2570 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)&_File[-0x77919]._file >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}

