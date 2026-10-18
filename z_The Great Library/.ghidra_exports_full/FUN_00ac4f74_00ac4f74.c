// operator+= @ 00ac4f74 body=[[00ac4f74, 00ac4fbd]]


/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2010 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)this != 9) && (*(int *)param_1 != 0)) {
    puVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)this = *(int *)this + 1;
      *(undefined4 **)(this + *(int *)this * 4 + 4) = puVar1;
    }
  }
  return this;
}

