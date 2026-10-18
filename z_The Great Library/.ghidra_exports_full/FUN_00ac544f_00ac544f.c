// operator= @ 00ac544f body=[[00ac544f, 00ac5483]]


/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}

