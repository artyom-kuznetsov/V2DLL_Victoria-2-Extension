// _Locimp @ 00aad83d body=[[00aad83d, 00aad87b]]


/* Library Function - Single Match
    private: __thiscall std::locale::_Locimp::_Locimp(bool)
   
   Library: Visual Studio 2010 Release */

_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  this[0x14] = (_Locimp)param_1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (_Locimp)0x0;
  _Yarn<char>::operator=((_Yarn<char> *)(this + 0x18),"*");
  return this;
}

