// _Init @ 00aad8e0 body=[[00aad8e0, 00aad96e]]


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(void)
   
   Library: Visual Studio 2010 Release */

_Locimp * __cdecl std::locale::_Init(void)

{
  _Locimp *p_Var1;
  _Locimp *p_Var2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0xaad8ec;
  p_Var2 = (_Locimp *)0x0;
  p_Var1 = DAT_00f1f8d4;
  if (DAT_00f1f8d4 == (_Locimp *)0x0) {
    _Lockit::_Lockit(local_14,0);
    local_8 = 0;
    p_Var1 = DAT_00f1f8d4;
    if (DAT_00f1f8d4 == (_Locimp *)0x0) {
      p_Var1 = (_Locimp *)FUN_00aae9af(0x20);
      if (p_Var1 != (_Locimp *)0x0) {
        p_Var2 = (_Locimp *)_Locimp::_Locimp(p_Var1,false);
      }
      _Setgloballocale(p_Var2);
      *(undefined4 *)(p_Var2 + 0x10) = 0x3f;
      _Yarn<char>::operator=((_Yarn<char> *)(p_Var2 + 0x18),"C");
      DAT_00f1f8d8 = p_Var2;
      FUN_00445f40();
      _DAT_00f1f8f0 = DAT_00f1f8d8;
      p_Var1 = p_Var2;
    }
    local_8 = 0xffffffff;
    FUN_00aad9f1();
  }
  return p_Var1;
}

