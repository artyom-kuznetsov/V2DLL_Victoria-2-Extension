// FUN_00b2a820 @ 00b2a820 body=[[00b2a820, 00b2aa30]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b2a820(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  WCHAR WVar4;
  LPCWSTR lpWideCharStr;
  WCHAR *pWVar5;
  LPSTR lpMultiByteStr;
  undefined4 *puVar6;
  BOOL BVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  _FILETIME local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_38.dwHighDateTime = (DWORD)param_1;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (((DAT_00f20bd0 != (code *)0x0) || (DAT_00f20ab8 != (code *)0x0)) && (param_1 != (char *)0x0))
  {
    pcVar1 = param_1 + 1;
    do {
      cVar3 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar3 != '\0');
    uVar2 = ((int)param_1 - (int)pcVar1) * 2 + 2;
    if (uVar2 < 0x80) {
      puVar10 = &stack0xffffffbc;
    }
    else {
      puVar10 = (undefined1 *)0x0;
    }
    lpWideCharStr = (LPCWSTR)FUN_00b20970(puVar10,uVar2,0);
    if (lpWideCharStr != (LPCWSTR)0x0) {
      PHYSFS_utf8ToUcs2(local_38.dwHighDateTime,lpWideCharStr,uVar2,0);
      if (DAT_00f20bd0 == (code *)0x0) {
        iVar9 = 0;
        WVar4 = *lpWideCharStr;
        pWVar5 = lpWideCharStr;
        while (WVar4 != L'\0') {
          pWVar5 = pWVar5 + 1;
          iVar9 = iVar9 + 1;
          WVar4 = *pWVar5;
        }
        iVar9 = iVar9 + 1;
        if (iVar9 < 0x80) {
          puVar10 = &stack0xffffffbc;
        }
        else {
          puVar10 = (undefined1 *)0x0;
        }
        lpMultiByteStr = (LPSTR)FUN_00b20970(puVar10,iVar9,iVar9 >> 0x1f);
        if (lpMultiByteStr != (LPSTR)0x0) {
          WideCharToMultiByte(0,0,lpWideCharStr,iVar9,lpMultiByteStr,iVar9,(LPCSTR)0x0,(LPBOOL)0x0);
          local_30 = (*DAT_00f20ab8)(lpMultiByteStr,0,&local_2c);
          FUN_00b209b0(lpMultiByteStr);
        }
      }
      else {
        local_30 = (*DAT_00f20bd0)(lpWideCharStr,0,&local_2c);
      }
      FUN_00b209b0(lpWideCharStr);
      if (((local_30 != 0) && ((local_14 != 0 || (local_18 != 0)))) &&
         (lVar11 = FUN_00b2a690(), lVar11 != -1)) goto LAB_00b2aa1d;
    }
  }
  puVar6 = (undefined4 *)FUN_00b2a0a0(local_38.dwHighDateTime,0x80000000,3,1);
  if (puVar6 == (undefined4 *)0x0) {
    FUN_00b1f840(0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
    return;
  }
  BVar7 = GetFileTime((HANDLE)*puVar6,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_38);
  uVar8 = FUN_00b29110();
  CloseHandle((HANDLE)*puVar6);
  (*DAT_013f3ab0)(puVar6);
  if (BVar7 == 0) {
    FUN_00b1f840(uVar8);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
    return;
  }
  FUN_00b2a690();
LAB_00b2aa1d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

