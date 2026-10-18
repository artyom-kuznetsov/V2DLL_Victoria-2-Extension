// __isatty @ 00ac9f54 body=[[00ac9f54, 00ac9fa9]]


/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2010 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < uNumber_013f3ac0)) {
      return (int)*(char *)((&DAT_013f3ae0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
             0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00ab7c17();
  }
  return 0;
}

