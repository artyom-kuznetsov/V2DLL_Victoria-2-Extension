// _Locinfo_dtor @ 00aad77d body=[[00aad77d, 00aad797]]


/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  if (*(char **)(param_1 + 0x14) != (char *)0x0) {
    _setlocale(0,*(char **)(param_1 + 0x14));
  }
  return;
}

