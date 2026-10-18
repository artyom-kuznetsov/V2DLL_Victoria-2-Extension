// __fullpath @ 00ac046c body=[[00ac046c, 00ac0562]]


/* WARNING: Removing unreachable block (ram,0x00ac04c0) */
/* Library Function - Single Match
    __fullpath
   
   Library: Visual Studio 2010 Release */

char * __cdecl __fullpath(char *_FullPath,char *_Path,size_t _SizeInBytes)

{
  DWORD DVar1;
  LPSTR lpBuffer;
  int *piVar2;
  char *pcVar3;
  LPSTR local_8;
  
  if ((_Path == (char *)0x0) || (*_Path == '\0')) {
    pcVar3 = __getcwd(_FullPath,_SizeInBytes);
    return pcVar3;
  }
  if (_FullPath == (char *)0x0) {
    DVar1 = GetFullPathNameA(_Path,0,(LPSTR)0x0,(LPSTR *)0x0);
    if (DVar1 == 0) goto LAB_00ac049f;
    if (_SizeInBytes <= DVar1) {
      _SizeInBytes = DVar1;
    }
    lpBuffer = _calloc(_SizeInBytes,1);
    if (lpBuffer == (LPSTR)0x0) {
      piVar2 = __errno();
      *piVar2 = 0xc;
      return (char *)0x0;
    }
  }
  else {
    lpBuffer = _FullPath;
    if (_SizeInBytes == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00ab7c17();
      return (char *)0x0;
    }
  }
  DVar1 = GetFullPathNameA(_Path,_SizeInBytes,lpBuffer,&local_8);
  if (_SizeInBytes <= DVar1) {
    if (_FullPath == (char *)0x0) {
      _free(lpBuffer);
    }
    piVar2 = __errno();
    *piVar2 = 0x22;
    return (char *)0x0;
  }
  if (DVar1 != 0) {
    return lpBuffer;
  }
  if (_FullPath == (char *)0x0) {
    _free(lpBuffer);
  }
LAB_00ac049f:
  DVar1 = GetLastError();
  __dosmaperr(DVar1);
  return (char *)0x0;
}

