// _Mutex @ 00aada08 body=[[00aada08, 00aada21]]


/* Library Function - Single Match
    public: __thiscall std::_Mutex::_Mutex(void)
   
   Library: Visual Studio */

_Mutex * __thiscall std::_Mutex::_Mutex(_Mutex *this)

{
  _Rmtx *p_Var1;
  
  p_Var1 = (_Rmtx *)FUN_00aae9af(0x18);
  *(_Rmtx **)this = p_Var1;
  __Mtxinit(p_Var1);
  return this;
}

