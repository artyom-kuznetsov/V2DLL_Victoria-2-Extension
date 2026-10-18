// __Getctype @ 00aadc2a body=[[00aadc2a, 00aadc89]]


/* Library Function - Single Match
    __Getctype
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  int iVar1;
  short *psVar2;
  void *pvVar3;
  ushort *puVar4;
  size_t _Size;
  
  iVar1 = ____lc_handle_func();
  __return_storage_ptr__->_Page = *(uint *)(iVar1 + 4);
  psVar2 = (short *)____lc_codepage_func();
  __return_storage_ptr__->_Table = psVar2;
  pvVar3 = __calloc_crt(0x100,2);
  __return_storage_ptr__->_Delfl = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = ___pctype_func();
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x0;
    __return_storage_ptr__->_Delfl = (int)puVar4;
  }
  else {
    _Size = 0x200;
    puVar4 = ___pctype_func();
    FID_conflict__memcpy((void *)__return_storage_ptr__->_Delfl,puVar4,_Size);
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x1;
  }
  return __return_storage_ptr__;
}

