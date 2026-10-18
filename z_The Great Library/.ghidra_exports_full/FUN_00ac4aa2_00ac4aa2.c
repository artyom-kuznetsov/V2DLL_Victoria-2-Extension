// getMemory @ 00ac4aa2 body=[[00ac4aa2, 00ac4b29]]


/* Library Function - Single Match
    public: void * __thiscall _HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2010 Release */

void * __thiscall _HeapManager::getMemory(_HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = getMemory((_HeapManager *)&DAT_00f20958,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_00ac4b19;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_00ac4b19:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}

