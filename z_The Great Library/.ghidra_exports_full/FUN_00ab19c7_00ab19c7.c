// _toupper @ 00ab19c7 body=[[00ab19c7, 00ab19f2]]


/* Library Function - Single Match
    _toupper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_00f1fc74 == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}

