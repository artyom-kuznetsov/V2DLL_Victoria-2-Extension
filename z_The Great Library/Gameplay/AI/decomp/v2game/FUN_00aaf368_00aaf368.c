// __unlock_file2 @ 00aaf368 body=[[00aaf368, 00aaf396]]


/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_00abb496(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}

