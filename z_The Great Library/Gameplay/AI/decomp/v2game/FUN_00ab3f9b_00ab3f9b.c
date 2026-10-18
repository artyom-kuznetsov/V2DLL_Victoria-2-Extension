// FID_conflict:__waccess_s @ 00ab3f9b body=[[00ab3f9b, 00ab4019]]


/* Library Function - Multiple Matches With Different Base Names
    __access_s
    __waccess_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl FID_conflict___waccess_s(wchar_t *_Filename,int _AccessMode)

{
  ulong *puVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if ((_Filename == (wchar_t *)0x0) || ((_AccessMode & 0xfffffff9U) != 0)) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_00ab7c17();
  }
  else {
    DVar3 = GetFileAttributesA((LPCSTR)_Filename);
    if (DVar3 == 0xffffffff) {
      DVar3 = GetLastError();
      __dosmaperr(DVar3);
    }
    else {
      if ((((DVar3 & 0x10) != 0) || ((DVar3 & 1) == 0)) || ((_AccessMode & 2U) == 0)) {
        return 0;
      }
      puVar1 = ___doserrno();
      *puVar1 = 5;
      piVar2 = __errno();
      *piVar2 = 0xd;
    }
    piVar2 = __errno();
    iVar4 = *piVar2;
  }
  return iVar4;
}

