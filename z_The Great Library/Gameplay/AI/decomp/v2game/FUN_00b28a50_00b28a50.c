// FUN_00b28a50 @ 00b28a50 body=[[00b28a50, 00b28adb]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b28a50(DWORD param_1,LPCVOID param_2,DWORD param_3,DWORD param_4,LPWSTR param_5,
                 uint param_6,va_list *param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  LPCSTR lpBuffer;
  DWORD cbMultiByte;
  
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_6 < 0x80) {
    puVar2 = &stack0xffffffec;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  lpBuffer = (LPCSTR)FUN_00b20970(puVar2,param_6,0);
  cbMultiByte = FormatMessageA(param_1,param_2,param_3,param_4,lpBuffer,param_6,param_7);
  if (cbMultiByte != 0) {
    MultiByteToWideChar(0,1,lpBuffer,cbMultiByte,param_5,param_6);
  }
  FUN_00b209b0(lpBuffer);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

