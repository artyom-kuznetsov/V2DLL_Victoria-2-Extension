// getString @ 00ac4e96 body=[[00ac4e96, 00ac4ef4]]


/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    if (param_1 != (char *)0x0) {
      *param_1 = '\0';
    }
  }
  else {
    if (param_1 == (char *)0x0) {
      iVar1 = (**(code **)**(undefined4 **)this)();
      param_2 = iVar1 + 1;
      param_1 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,param_2,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    pcVar2 = param_1;
    if (*(int **)this != (int *)0x0) {
      pcVar2 = (char *)(**(code **)(**(int **)this + 8))(param_1,param_1 + (param_2 - 1));
    }
    *pcVar2 = '\0';
  }
  return param_1;
}

