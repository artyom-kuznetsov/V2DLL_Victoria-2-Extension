// __getdcwd_nolock @ 00acc548 body=[[00acc548, 00acc66b]]


/* Library Function - Single Match
    __getdcwd_nolock
   
   Library: Visual Studio 2010 Release */

LPSTR __getdcwd_nolock(uint param_1,LPSTR param_2,size_t param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  uint uVar4;
  DWORD DVar5;
  LPSTR pCVar6;
  LPSTR local_c;
  DWORD local_8;
  
  uVar4 = param_1;
  if (param_1 == 0) {
    uVar4 = __getdrive();
  }
  else {
    iVar1 = __validdrive(param_1);
    if (iVar1 == 0) {
      puVar2 = ___doserrno();
      *puVar2 = 0xf;
      piVar3 = __errno();
      *piVar3 = 0xd;
      FUN_00ab7c17();
      return (LPSTR)0x0;
    }
  }
  pCVar6 = param_2;
  if (param_2 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_00ab7c17();
      return (LPSTR)0x0;
    }
    local_8 = param_3;
    *param_2 = '\0';
  }
  if (uVar4 == 0) {
    param_1 = CONCAT22(param_1._2_2_,0x2e);
  }
  else {
    param_1 = (uint)CONCAT21(0x2e3a,(char)uVar4 + '@');
  }
  DVar5 = GetFullPathNameA((LPCSTR)&param_1,local_8,param_2,&local_c);
  if (DVar5 != 0) {
    if (pCVar6 != (LPSTR)0x0) {
      if ((int)local_8 <= (int)DVar5) {
        piVar3 = __errno();
        *piVar3 = 0x22;
        *pCVar6 = '\0';
        return (LPSTR)0x0;
      }
      return pCVar6;
    }
    if ((int)param_3 < (int)DVar5) {
      param_3 = DVar5;
    }
    pCVar6 = _calloc(param_3,1);
    if (pCVar6 == (LPSTR)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      puVar2 = ___doserrno();
      *puVar2 = 8;
      return (LPSTR)0x0;
    }
    DVar5 = GetFullPathNameA((LPCSTR)&param_1,param_3,pCVar6,&local_c);
    if ((DVar5 != 0) && ((int)DVar5 < (int)param_3)) {
      return pCVar6;
    }
  }
  DVar5 = GetLastError();
  __dosmaperr(DVar5);
  return (LPSTR)0x0;
}

