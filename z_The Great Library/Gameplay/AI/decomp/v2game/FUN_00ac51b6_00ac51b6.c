// DName @ 00ac51b6 body=[[00ac51b6, 00ac51f2]]


/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  int iVar1;
  
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if ((param_1 != (char *)0x0) && (iVar1 = 0, *param_1 != '\0')) {
    do {
      iVar1 = iVar1 + 1;
    } while (param_1[iVar1] != '\0');
    if (iVar1 != 0) {
      doPchar(this,param_1,iVar1);
    }
  }
  return this;
}

