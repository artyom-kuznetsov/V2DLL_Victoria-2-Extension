// pcharNode @ 00ac500d body=[[00ac500d, 00ac5063]]


/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2010 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_FUN_00ddbed4;
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    puVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,param_2,0);
    *(undefined1 **)(this + 4) = puVar1;
    *(int *)(this + 8) = param_2;
    if ((puVar1 != (undefined1 *)0x0) && (param_2 != 0)) {
      iVar2 = (int)param_1 - (int)puVar1;
      do {
        *puVar1 = puVar1[iVar2];
        puVar1 = puVar1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return this;
}

