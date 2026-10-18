// _Copy_str @ 00aae2b2 body=[[00aae2b2, 00aae2f1]]


/* Library Function - Single Match
    private: void __thiscall std::exception::_Copy_str(char const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::_Copy_str(exception *this,char *param_1)

{
  size_t sVar1;
  char *_Dst;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,param_1);
      this[8] = (exception)0x1;
    }
  }
  return;
}

