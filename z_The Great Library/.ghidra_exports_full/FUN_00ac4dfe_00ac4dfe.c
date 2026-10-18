// DName @ 00ac4dfe body=[[00ac4dfe, 00ac4e50]]


/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(undefined4 *)this = 0;
    this[4] = (DName)0x0;
  }
  else {
    this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    this[4] = (DName)((iVar1 != 0) - 1U & 3);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  return this;
}

