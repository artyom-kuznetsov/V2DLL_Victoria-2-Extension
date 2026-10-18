// getExternalDataType @ 00ac98ef body=[[00ac98ef, 00ac9967]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExternalDataType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getExternalDataType(DName *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DName local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[1] = puVar1[1] & 0xffff00ff;
  }
  getDataType(param_1);
  getDataIndirectType();
  local_c = local_14;
  local_8 = local_10;
  DName::operator+=((DName *)&local_c,' ');
  puVar2 = (undefined4 *)DName::operator+((DName *)&local_c,local_1c);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}

