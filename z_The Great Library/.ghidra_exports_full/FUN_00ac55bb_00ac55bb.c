// operator+= @ 00ac55bb body=[[00ac55bb, 00ac560c]]


/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  DNameNode *pDVar1;
  
  if (((char)this[4] < '\x02') && (param_1 != '\0')) {
    if (*(int *)this == 0) {
      DName(this,param_1);
    }
    else {
      pDVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
      if (pDVar1 == (DNameNode *)0x0) {
        pDVar1 = (DNameNode *)0x0;
      }
      else {
        *(undefined ***)pDVar1 = &PTR_LAB_00ddbea4;
        pDVar1[4] = (DNameNode)param_1;
      }
      append(this,pDVar1);
    }
  }
  return this;
}

