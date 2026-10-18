// __setargv @ 00abde84 body=[[00abde84, 00abdf3e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2010 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_013f3bf0 == 0) {
    ___initmbctable();
  }
  DAT_00f2054c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_00f20448,0x104);
  _DAT_00f1fc5c = &DAT_00f20448;
  if ((DAT_013f3bf8 == (char *)0x0) || (local_8 = DAT_013f3bf8, *DAT_013f3bf8 == '\0')) {
    local_8 = &DAT_00f20448;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_00f1fc40 = local_c - 1;
      _DAT_00f1fc44 = pvVar1;
      return 0;
    }
  }
  return -1;
}

