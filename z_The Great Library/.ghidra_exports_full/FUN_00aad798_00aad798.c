// operator= @ 00aad798 body=[[00aad798, 00aad7ef]]


/* Library Function - Single Match
    public: class std::_Yarn<char> & __thiscall std::_Yarn<char>::operator=(char const *)
   
   Library: Visual Studio 2010 Release */

_Yarn<char> * __thiscall std::_Yarn<char>::operator=(_Yarn<char> *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  pcVar2 = *(char **)this;
  if (pcVar2 != param_1) {
    if (pcVar2 != (char *)0x0) {
      _free(pcVar2);
    }
    *(undefined4 *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar2 = param_1;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      _Dst = _malloc((size_t)(pcVar2 + (1 - (int)param_1)));
      *(void **)this = _Dst;
      if (_Dst != (void *)0x0) {
        FID_conflict__memcpy(_Dst,param_1,(size_t)(pcVar2 + (1 - (int)param_1)));
      }
    }
  }
  return this;
}

