// FUN_00b288e0 @ 00b288e0 body=[[00b288e0, 00b289c6]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b288e0(void)

{
  char *cbMultiByte;
  int iVar1;
  char cVar2;
  uint uVar3;
  LPCSTR pCVar4;
  undefined1 *puVar5;
  LPWSTR lpWideCharStr;
  int iVar6;
  LPCSTR in_ECX;
  
  uVar3 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (in_ECX != (LPCSTR)0x0) {
    pCVar4 = in_ECX;
    do {
      cVar2 = *pCVar4;
      pCVar4 = pCVar4 + 1;
    } while (cVar2 != '\0');
    cbMultiByte = pCVar4 + (1 - (int)(in_ECX + 1));
    if ((uint)((int)cbMultiByte * 2) < 0x80) {
      puVar5 = &stack0xffffffe4;
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    lpWideCharStr = (LPWSTR)FUN_00b20970(puVar5,(int)cbMultiByte * 2,0);
    if (lpWideCharStr == (LPWSTR)0x0) {
      FUN_00b1f840("Out of memory");
      __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return;
    }
    MultiByteToWideChar(0,1,in_ECX,(int)cbMultiByte,lpWideCharStr,(int)cbMultiByte);
    iVar1 = (int)cbMultiByte * 4;
    iVar6 = (*DAT_013f3aa8)(iVar1,iVar1 >> 0x1f);
    if (iVar6 == 0) {
      FUN_00b1f840("Out of memory");
    }
    else {
      PHYSFS_utf8FromUcs2(lpWideCharStr,iVar6,iVar1,iVar1 >> 0x1f);
    }
    FUN_00b209b0(lpWideCharStr);
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

