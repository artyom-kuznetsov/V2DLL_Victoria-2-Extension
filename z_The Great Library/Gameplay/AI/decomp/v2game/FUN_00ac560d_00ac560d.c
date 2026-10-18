// operator+= @ 00ac560d body=[[00ac560d, 00ac5670]]


/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  char cVar1;
  pcharNode *this_00;
  DNameNode *pDVar2;
  int iVar3;
  
  if ((((char)this[4] < '\x02') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,0xc,0);
      if (this_00 == (pcharNode *)0x0) {
        pDVar2 = (DNameNode *)0x0;
      }
      else {
        iVar3 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
          cVar1 = param_1[iVar3];
        }
        pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,iVar3);
      }
      append(this,pDVar2);
    }
  }
  return this;
}

