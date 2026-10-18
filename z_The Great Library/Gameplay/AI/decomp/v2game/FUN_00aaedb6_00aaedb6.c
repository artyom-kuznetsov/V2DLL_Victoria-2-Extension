// _tolower @ 00aaedb6 body=[[00aaedb6, 00aaede1]]


/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2010 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_00f1fc74 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}

