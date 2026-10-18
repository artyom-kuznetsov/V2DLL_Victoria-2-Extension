// __stat64i32 @ 00ab3b44 body=[[00ab3b44, 00ab3f9a]]


/* Library Function - Single Match
    __stat64i32
   
   Library: Visual Studio 2010 Release */

void __stat64i32(uchar *param_1,int *param_2)

{
  undefined2 uVar1;
  ulong *puVar2;
  int *piVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  char *_Str;
  size_t sVar7;
  int iVar8;
  UINT UVar9;
  errno_t eVar10;
  BOOL BVar11;
  DWORD DVar12;
  __time64_t _Var13;
  _FILETIME local_268;
  void *local_260;
  uint local_25c;
  FILETIME local_258;
  FILETIME local_250;
  FILETIME local_248;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_230;
  _SYSTEMTIME local_11c;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_268.dwHighDateTime = (DWORD)param_1;
  if ((param_1 == (uchar *)0x0) || (param_2 == (int *)0x0)) {
    puVar2 = ___doserrno();
    *puVar2 = 0;
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
    goto LAB_00ab3f8c;
  }
  puVar4 = __mbspbrk(param_1,"?*");
  if (puVar4 != (uchar *)0x0) goto LAB_00ab3ba5;
  if (param_1[1] == ':') {
    if ((*param_1 != '\0') && (param_1[2] == '\0')) goto LAB_00ab3ba5;
    uVar5 = __mbctolower((int)(char)*param_1);
    iVar6 = uVar5 - 0x60;
  }
  else {
    iVar6 = __getdrive();
  }
  local_260 = FindFirstFileExA((LPCSTR)param_1,FindExInfoStandard,&local_25c,FindExSearchNameMatch,
                               (LPVOID)0x0,0);
  if (local_260 == (HANDLE)0xffffffff) {
    local_260 = (void *)0x0;
    puVar4 = __mbspbrk(param_1,"./\\");
    if (puVar4 != (uchar *)0x0) {
      _Str = (char *)__fullpath_helper(local_10c,param_1,0x104,&local_260);
      if ((_Str != (char *)0x0) &&
         (((sVar7 = _strlen(_Str), sVar7 == 3 || (iVar8 = _IsRootUNCName(), iVar8 != 0)) &&
          (UVar9 = GetDriveTypeA(_Str), 1 < UVar9)))) {
        if (local_260 != (void *)0x0) {
          _free(local_260);
        }
        local_25c = 0x10;
        local_240 = 0;
        local_23c = 0;
        local_230 = 0;
        _Var13 = ___loctotime64_t(0x7bc,1,1,0,0,0,-1);
        *(__time64_t *)(param_2 + 8) = _Var13;
        *(__time64_t *)(param_2 + 6) = _Var13;
        *(__time64_t *)(param_2 + 10) = _Var13;
        param_1 = (uchar *)local_268.dwHighDateTime;
        goto LAB_00ab3f1a;
      }
      if (local_260 != (void *)0x0) {
        _free(local_260);
      }
    }
LAB_00ab3ba5:
    piVar3 = __errno();
    *piVar3 = 2;
    puVar2 = ___doserrno();
    *puVar2 = 2;
  }
  else {
    if (((local_25c & 0x400) != 0) && (local_238 == -0x5ffffff4)) {
      local_260 = (void *)0xffffffff;
      eVar10 = __sopen_s((int *)&local_260,(char *)param_1,0,0x40,0);
      if ((eVar10 == 0) && (local_260 != (void *)0xffffffff)) {
        __fstat64i32(local_260,param_2);
        __close((int)local_260);
        goto LAB_00ab3f8c;
      }
      goto LAB_00ab3ba5;
    }
    if ((local_248.dwLowDateTime != 0) || (local_248.dwHighDateTime != 0)) {
      BVar11 = FileTimeToLocalFileTime(&local_248,&local_268);
      if ((BVar11 != 0) && (BVar11 = FileTimeToSystemTime(&local_268,&local_11c), BVar11 != 0)) {
        _Var13 = ___loctotime64_t((uint)local_11c.wYear,(uint)local_11c.wMonth,(uint)local_11c.wDay,
                                  (uint)local_11c.wHour,(uint)local_11c.wMinute,
                                  (uint)local_11c.wSecond,-1);
        *(__time64_t *)(param_2 + 8) = _Var13;
        goto LAB_00ab3de2;
      }
LAB_00ab3f70:
      DVar12 = GetLastError();
      __dosmaperr(DVar12);
      FindClose(local_260);
      goto LAB_00ab3f8c;
    }
    param_2[8] = 0;
    param_2[9] = 0;
LAB_00ab3de2:
    if ((local_250.dwLowDateTime == 0) && (local_250.dwHighDateTime == 0)) {
      param_2[6] = param_2[8];
      param_2[7] = param_2[9];
    }
    else {
      BVar11 = FileTimeToLocalFileTime(&local_250,&local_268);
      if ((BVar11 == 0) || (BVar11 = FileTimeToSystemTime(&local_268,&local_11c), BVar11 == 0))
      goto LAB_00ab3f70;
      _Var13 = ___loctotime64_t((uint)local_11c.wYear,(uint)local_11c.wMonth,(uint)local_11c.wDay,
                                (uint)local_11c.wHour,(uint)local_11c.wMinute,
                                (uint)local_11c.wSecond,-1);
      *(__time64_t *)(param_2 + 6) = _Var13;
    }
    if ((local_258.dwLowDateTime == 0) && (local_258.dwHighDateTime == 0)) {
      param_2[10] = param_2[8];
      param_2[0xb] = param_2[9];
    }
    else {
      BVar11 = FileTimeToLocalFileTime(&local_258,&local_268);
      if ((BVar11 == 0) || (BVar11 = FileTimeToSystemTime(&local_268,&local_11c), BVar11 == 0))
      goto LAB_00ab3f70;
      _Var13 = ___loctotime64_t((uint)local_11c.wYear,(uint)local_11c.wMonth,(uint)local_11c.wDay,
                                (uint)local_11c.wHour,(uint)local_11c.wMinute,
                                (uint)local_11c.wSecond,-1);
      *(__time64_t *)(param_2 + 10) = _Var13;
    }
    FindClose(local_260);
LAB_00ab3f1a:
    uVar1 = ___dtoxmode(local_25c,param_1);
    *(undefined2 *)((int)param_2 + 6) = uVar1;
    *(undefined2 *)(param_2 + 2) = 1;
    param_2[5] = local_23c;
    if (local_240 != 0) {
      param_2[5] = 0;
    }
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0;
    *param_2 = iVar6 + -1;
    param_2[4] = iVar6 + -1;
  }
LAB_00ab3f8c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

