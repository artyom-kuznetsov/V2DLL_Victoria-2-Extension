// __mtinitlocks @ 00abb3f5 body=[[00abb3f5, 00abb43e]]


/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  
  iVar2 = 0;
  p_Var3 = (LPCRITICAL_SECTION)&DAT_00f202f0;
  do {
    if ((&DAT_00ef2f2c)[iVar2 * 2] == 1) {
      (&lpCriticalSection_00ef2f28)[iVar2 * 2] = p_Var3;
      p_Var3 = p_Var3 + 1;
      BVar1 = InitializeCriticalSectionAndSpinCount((&lpCriticalSection_00ef2f28)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&lpCriticalSection_00ef2f28)[iVar2 * 2] = (LPCRITICAL_SECTION)0x0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

