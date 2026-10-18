// _Init_locks @ 00aad96f body=[[00aad96f, 00aad99f]]


/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  _Rmtx *p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&lpAddend_00ef21e4);
  if (LVar1 == 0) {
    p_Var2 = (_Rmtx *)&DAT_00f1f900;
    do {
      __Mtxinit(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0xf1f960);
  }
  return this;
}

