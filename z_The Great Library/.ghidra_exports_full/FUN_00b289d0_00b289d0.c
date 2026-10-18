// FUN_00b289d0 @ 00b289d0 body=[[00b289d0, 00b28a4f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b289d0(LPWSTR param_1,LPDWORD param_2)

{
  uint cbMultiByte;
  uint uVar1;
  undefined1 *puVar2;
  LPSTR lpBuffer;
  
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_2;
  if (cbMultiByte < 0x80) {
    puVar2 = &stack0xffffffe8;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  lpBuffer = (LPSTR)FUN_00b20970(puVar2,cbMultiByte,0);
  GetUserNameA(lpBuffer,param_2);
  if (param_1 != (LPWSTR)0x0) {
    MultiByteToWideChar(0,1,lpBuffer,cbMultiByte,param_1,*param_2);
  }
  FUN_00b209b0(lpBuffer);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

