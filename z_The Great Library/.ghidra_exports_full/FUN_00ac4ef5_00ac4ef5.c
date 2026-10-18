// append @ 00ac4ef5 body=[[00ac4ef5, 00ac4f3c]]


/* Library Function - Single Match
    private: void __thiscall DName::append(class DNameNode *)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::append(DName *this,DNameNode *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (DNameNode *)0x0) {
    puVar2 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,0x10,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)this;
      puVar2[3] = 0xffffffff;
      *puVar2 = &PTR_LAB_00ddbec8;
      puVar2[1] = uVar1;
      puVar2[2] = param_1;
    }
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
  }
  this[4] = (DName)0x3;
  return;
}

