// FUN_00b28d20 @ 00b28d20 body=[[00b28d20, 00b28db7]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b28d20(LPCWSTR param_1,LPSECURITY_ATTRIBUTES param_2)

{
  WCHAR WVar1;
  uint uVar2;
  WCHAR *pWVar3;
  LPCSTR lpMultiByteStr;
  int iVar4;
  undefined1 *puVar5;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  WVar1 = *param_1;
  pWVar3 = param_1;
  while (WVar1 != L'\0') {
    pWVar3 = pWVar3 + 1;
    iVar4 = iVar4 + 1;
    WVar1 = *pWVar3;
  }
  iVar4 = iVar4 + 1;
  if (iVar4 < 0x80) {
    puVar5 = &stack0xffffffec;
  }
  else {
    puVar5 = (undefined1 *)0x0;
  }
  lpMultiByteStr = (LPCSTR)FUN_00b20970(puVar5,iVar4,iVar4 >> 0x1f);
  WideCharToMultiByte(0,0,param_1,iVar4,lpMultiByteStr,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
  CreateDirectoryA(lpMultiByteStr,param_2);
  FUN_00b209b0(lpMultiByteStr);
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

