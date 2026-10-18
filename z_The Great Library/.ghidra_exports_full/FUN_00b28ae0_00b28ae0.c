// FUN_00b28ae0 @ 00b28ae0 body=[[00b28ae0, 00b28b5b]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b28ae0(HMODULE param_1,LPWSTR param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  LPSTR lpFilename;
  DWORD cbMultiByte;
  
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_3 < 0x80) {
    puVar2 = &stack0xffffffec;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  lpFilename = (LPSTR)FUN_00b20970(puVar2,param_3,0);
  cbMultiByte = GetModuleFileNameA(param_1,lpFilename,param_3);
  if (cbMultiByte != 0) {
    MultiByteToWideChar(0,1,lpFilename,cbMultiByte,param_2,param_3);
  }
  FUN_00b209b0(lpFilename);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

