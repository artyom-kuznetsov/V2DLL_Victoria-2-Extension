// FUN_00ab0165 @ 00ab0165 body=[[00ab0165, 00ab0291]]


void FUN_00ab0165(HANDLE param_1,uint *param_2)

{
  int *piVar1;
  BOOL BVar2;
  DWORD DVar3;
  errno_t eVar4;
  undefined8 uVar5;
  _WIN32_FIND_DATAA local_148;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 == (HANDLE)0xffffffff) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    goto LAB_00ab01f1;
  }
  if (param_2 == (uint *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    goto LAB_00ab01f1;
  }
  BVar2 = FindNextFileA(param_1,&local_148);
  if (BVar2 != 0) {
    *param_2 = -(uint)(local_148.dwFileAttributes != 0x80) & local_148.dwFileAttributes;
    uVar5 = ___time64_t_from_ft(&local_148.ftCreationTime);
    *(undefined8 *)(param_2 + 2) = uVar5;
    uVar5 = ___time64_t_from_ft(&local_148.ftLastAccessTime);
    *(undefined8 *)(param_2 + 4) = uVar5;
    uVar5 = ___time64_t_from_ft(&local_148.ftLastWriteTime);
    param_2[6] = (uint)uVar5;
    param_2[8] = local_148.nFileSizeLow;
    param_2[7] = (uint)((ulonglong)uVar5 >> 0x20);
    eVar4 = _strcpy_s((char *)(param_2 + 9),0x104,local_148.cFileName);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_00ab01f1;
  }
  DVar3 = GetLastError();
  if (DVar3 < 2) {
LAB_00ab01e2:
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    if (3 < DVar3) {
      if (DVar3 == 8) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        goto LAB_00ab01f1;
      }
      if (DVar3 != 0x12) goto LAB_00ab01e2;
    }
    piVar1 = __errno();
    *piVar1 = 2;
  }
LAB_00ab01f1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

