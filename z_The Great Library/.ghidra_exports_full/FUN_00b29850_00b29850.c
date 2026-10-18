// FUN_00b29850 @ 00b29850 body=[[00b29850, 00b29b74]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b29850(char *param_1,int param_2,code *param_3,undefined4 param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  LPCWSTR lpWideCharStr;
  LPCSTR lpMultiByteStr;
  BOOL BVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  HANDLE local_39c;
  uint local_398 [9];
  int local_374;
  short local_36c;
  short local_36a;
  short local_368;
  _WIN32_FIND_DATAA local_148;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if ((DAT_00f20bc8 == (code *)0x0) || (bVar4 = true, DAT_00f20ab0 == (code *)0x0)) {
    bVar4 = false;
  }
  local_39c = (HANDLE)0xffffffff;
  pcVar5 = param_1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  iVar6 = (int)pcVar5 - (int)(param_1 + 1);
  if (iVar6 + 3U < 0x80) {
    puVar8 = &stack0xfffffc44;
  }
  else {
    puVar8 = (undefined1 *)0x0;
  }
  pcVar5 = (char *)FUN_00b20970(puVar8,iVar6 + 3U,0);
  if (pcVar5 != (char *)0x0) {
    iVar9 = (int)pcVar5 - (int)param_1;
    do {
      cVar3 = *param_1;
      param_1[iVar9] = cVar3;
      param_1 = param_1 + 1;
    } while (cVar3 != '\0');
    if (pcVar5[iVar6 + -1] != '\\') {
      (pcVar5 + iVar6)[0] = '\\';
      (pcVar5 + iVar6)[1] = '\0';
    }
    pcVar10 = pcVar5 + -1;
    do {
      pcVar1 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    pcVar10[0] = '*';
    pcVar10[1] = '\0';
    pcVar10 = pcVar5;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar2 = ((int)pcVar10 - (int)(pcVar5 + 1)) * 2 + 2;
    if (uVar2 < 0x80) {
      puVar8 = &stack0xfffffc44;
    }
    else {
      puVar8 = (undefined1 *)0x0;
    }
    lpWideCharStr = (LPCWSTR)FUN_00b20970(puVar8,uVar2,0);
    if (lpWideCharStr != (LPCWSTR)0x0) {
      PHYSFS_utf8ToUcs2(pcVar5,lpWideCharStr,uVar2,0);
      if (bVar4) {
        local_39c = (HANDLE)(*DAT_00f20bc8)(lpWideCharStr,local_398);
      }
      else {
        iVar6 = FUN_00b28820();
        iVar6 = iVar6 + 1;
        if (iVar6 < 0x80) {
          puVar8 = &stack0xfffffc44;
        }
        else {
          puVar8 = (undefined1 *)0x0;
        }
        lpMultiByteStr = (LPCSTR)FUN_00b20970(puVar8,iVar6,iVar6 >> 0x1f);
        if (lpMultiByteStr != (LPCSTR)0x0) {
          WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,iVar6,(LPCSTR)0x0,(LPBOOL)0x0);
          local_39c = FindFirstFileA(lpMultiByteStr,&local_148);
          FUN_00b209b0(lpMultiByteStr);
        }
      }
      FUN_00b209b0(lpWideCharStr);
      FUN_00b209b0(pcVar5);
      if (local_39c != (HANDLE)0xffffffff) {
        if (bVar4) {
          do {
            if (((local_36c != 0x2e) ||
                ((local_36a != 0 && ((local_36a != 0x2e || (local_368 != 0)))))) &&
               (((param_2 == 0 || (((local_398[0] & 0x400) == 0 || (local_374 != -0x5ffffff4)))) &&
                (iVar6 = FUN_00b28840(&local_36c), iVar6 != 0)))) {
              (*param_3)(param_5,param_4,iVar6);
              (*DAT_013f3ab0)(iVar6);
            }
            iVar6 = (*DAT_00f20ab0)(local_39c,local_398);
          } while (iVar6 != 0);
        }
        else {
          do {
            if ((((local_148.cFileName[0] != '.') ||
                 ((local_148.cFileName[1] != '\0' &&
                  ((local_148.cFileName[1] != '.' || (local_148.cFileName[2] != '\0')))))) &&
                ((param_2 == 0 ||
                 (((local_148.dwFileAttributes & 0x400) == 0 ||
                  (local_148.dwReserved0 != 0xa000000c)))))) && (iVar6 = FUN_00b288e0(), iVar6 != 0)
               ) {
              (*param_3)(param_5,param_4,iVar6);
              (*DAT_013f3ab0)(iVar6);
            }
            BVar7 = FindNextFileA(local_39c,&local_148);
          } while (BVar7 != 0);
        }
        FindClose(local_39c);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

