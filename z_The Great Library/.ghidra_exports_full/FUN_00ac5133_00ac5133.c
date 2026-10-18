// doPchar @ 00ac5133 body=[[00ac5133, 00ac51b5]]


/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  
  if (*(int *)this != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
    this[4] = (DName)0x3;
    *(undefined4 *)this = 0;
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    this[4] = (DName)0x2;
    return;
  }
  if (param_2 == 0) goto LAB_00ac51a5;
  if (param_2 == 1) {
    puVar2 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00ac519d;
    cVar1 = *param_1;
    *puVar2 = &PTR_LAB_00ddbea4;
    *(char *)(puVar2 + 1) = cVar1;
  }
  else {
    this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,0xc,0);
    if (this_00 == (pcharNode *)0x0) {
LAB_00ac519d:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
    }
  }
  *(undefined4 **)this = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    return;
  }
LAB_00ac51a5:
  this[4] = (DName)0x3;
  return;
}

