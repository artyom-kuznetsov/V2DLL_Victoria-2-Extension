// FUN_00b28c00 @ 00b28c00 body=[[00b28c00, 00b28c7e]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b28c00(uint param_1,LPWSTR param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  DWORD cbMultiByte;
  LPSTR lpBuffer;
  
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  lpBuffer = (LPSTR)0x0;
  if (param_2 != (LPWSTR)0x0) {
    if (param_1 < 0x80) {
      puVar2 = &stack0xffffffec;
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
    lpBuffer = (LPSTR)FUN_00b20970(puVar2,param_1,0);
  }
  cbMultiByte = GetCurrentDirectoryA(param_1,lpBuffer);
  if (lpBuffer != (LPSTR)0x0) {
    MultiByteToWideChar(0,1,lpBuffer,cbMultiByte,param_2,param_1);
    FUN_00b209b0(lpBuffer);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

