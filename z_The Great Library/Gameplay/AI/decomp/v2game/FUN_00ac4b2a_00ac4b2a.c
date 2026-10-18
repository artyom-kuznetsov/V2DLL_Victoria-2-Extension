// operator|= @ 00ac4b2a body=[[00ac4b2a, 00ac4b48]]


/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  if ((this[4] != (DName)0x3) && ('\x01' < (char)param_1[4])) {
    this[4] = param_1[4];
  }
  return this;
}

