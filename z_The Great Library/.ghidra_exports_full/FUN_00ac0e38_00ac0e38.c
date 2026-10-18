// __getdrive @ 00ac0e38 body=[[00ac0e38, 00ac0f05]]


/* Library Function - Single Match
    __getdrive
   
   Library: Visual Studio 2010 Release */

int __cdecl __getdrive(void)

{
  bool bVar1;
  DWORD DVar2;
  LPWSTR lpBuffer;
  int *piVar3;
  int iVar4;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  lpBuffer = local_214;
  DVar2 = GetCurrentDirectoryW(0x105,lpBuffer);
  if (0x104 < (int)DVar2) {
    lpBuffer = __calloc_crt(DVar2 + 1,2);
    if (lpBuffer == (LPWSTR)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      DVar2 = 0;
    }
    else {
      bVar1 = true;
      if (DVar2 != 0) {
        DVar2 = GetCurrentDirectoryW(DVar2 + 1,lpBuffer);
      }
    }
  }
  if (DVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  if (bVar1) {
    _free(lpBuffer);
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

