// _Setgloballocale @ 00aad6a5 body=[[00aad6a5, 00aad6ce]]


/* Library Function - Single Match
    private: static void __cdecl std::locale::_Setgloballocale(void *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::locale::_Setgloballocale(void *param_1)

{
  if (DAT_00f1f8f9 == '\0') {
    DAT_00f1f8f9 = '\x01';
    _Atexit(tidy_global);
  }
  DAT_00f1f8d4 = param_1;
  return;
}

