// FUN_00ab003e @ 00ab003e body=[[00ab003e, 00ab0163]]


void FUN_00ab003e(LPCSTR param_1,uint *param_2)

{
  int *piVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  errno_t eVar4;
  undefined8 uVar5;
  uint local_148;
  undefined1 local_144 [8];
  undefined1 local_13c [8];
  undefined1 local_134 [12];
  uint local_128;
  char local_11c [276];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if ((param_2 == (uint *)0x0) || (param_1 == (LPCSTR)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    goto LAB_00ab00bf;
  }
  pvVar2 = FindFirstFileExA(param_1,FindExInfoStandard,&local_148,FindExSearchNameMatch,(LPVOID)0x0,
                            0);
  if (pvVar2 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_148 != 0x80) & local_148;
    uVar5 = ___time64_t_from_ft(local_144);
    *(undefined8 *)(param_2 + 2) = uVar5;
    uVar5 = ___time64_t_from_ft(local_13c);
    *(undefined8 *)(param_2 + 4) = uVar5;
    uVar5 = ___time64_t_from_ft(local_134);
    param_2[6] = (uint)uVar5;
    param_2[8] = local_128;
    param_2[7] = (uint)((ulonglong)uVar5 >> 0x20);
    eVar4 = _strcpy_s((char *)(param_2 + 9),0x104,local_11c);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_00ab00bf;
  }
  DVar3 = GetLastError();
  if (DVar3 < 2) {
LAB_00ab00b0:
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    if (3 < DVar3) {
      if (DVar3 == 8) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        goto LAB_00ab00bf;
      }
      if (DVar3 != 0x12) goto LAB_00ab00b0;
    }
    piVar1 = __errno();
    *piVar1 = 2;
  }
LAB_00ab00bf:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

