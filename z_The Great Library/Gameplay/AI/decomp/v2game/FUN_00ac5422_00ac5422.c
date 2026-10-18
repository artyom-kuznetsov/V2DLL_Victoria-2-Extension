// DName @ 00ac5422 body=[[00ac5422, 00ac544e]]


/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}

