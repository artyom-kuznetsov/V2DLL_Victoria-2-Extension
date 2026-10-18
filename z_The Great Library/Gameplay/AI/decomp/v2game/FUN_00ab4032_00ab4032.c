// FID_conflict:__wchmod @ 00ab4032 body=[[00ab4032, 00ab4096]]


/* Library Function - Multiple Matches With Different Base Names
    __chmod
    __wchmod
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___wchmod(char *_Filename,int _Mode)

{
  ulong *puVar1;
  int *piVar2;
  DWORD DVar3;
  BOOL BVar4;
  
  if (_Filename == (char *)0x0) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
  }
  else {
    DVar3 = GetFileAttributesA(_Filename);
    if (DVar3 != 0xffffffff) {
      if ((_Mode & 0x80U) == 0) {
        DVar3 = DVar3 | 1;
      }
      else {
        DVar3 = DVar3 & 0xfffffffe;
      }
      BVar4 = SetFileAttributesA(_Filename,DVar3);
      if (BVar4 != 0) {
        return 0;
      }
    }
    DVar3 = GetLastError();
    __dosmaperr(DVar3);
  }
  return -1;
}

