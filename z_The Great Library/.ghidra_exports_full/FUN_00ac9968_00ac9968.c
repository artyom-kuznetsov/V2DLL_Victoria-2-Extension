// ___crtMessageBoxW @ 00ac9968 body=[[00ac9968, 00ac9ad3]]


/* Library Function - Single Match
    ___crtMessageBoxW
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtMessageBoxW(LPCWSTR _LpText,LPCWSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_28 [4];
  LPCWSTR local_24;
  LPCWSTR local_20;
  PVOID local_1c;
  int local_18;
  undefined1 local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_24 = _LpText;
  local_20 = _LpCaption;
  local_1c = (PVOID)FUN_00ab96ff();
  local_18 = 0;
  if (Ptr_00f209c8 == (PVOID)0x0) {
    hModule = LoadLibraryW(L"USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxW"), pFVar1 == (FARPROC)0x0)) goto LAB_00ac9ac5;
    Ptr_00f209c8 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_00f209cc = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_00f209d0 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationW");
    Ptr_00f209d8 = EncodePointer(pFVar1);
    if (Ptr_00f209d8 != (PVOID)0x0) {
      pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_00f209d4 = EncodePointer(pFVar1);
    }
  }
  if ((DAT_00f209d4 == local_1c) || (Ptr_00f209d8 == local_1c)) {
LAB_00ac9a74:
    if ((((DAT_00f209cc != local_1c) &&
         (pcVar2 = DecodePointer(DAT_00f209cc), pcVar2 != (code *)0x0)) &&
        (local_18 = (*pcVar2)(), local_18 != 0)) &&
       ((DAT_00f209d0 != local_1c && (pcVar2 = DecodePointer(DAT_00f209d0), pcVar2 != (code *)0x0)))
       ) {
      local_18 = (*pcVar2)(local_18);
    }
  }
  else {
    pcVar2 = DecodePointer(DAT_00f209d4);
    pcVar3 = DecodePointer(Ptr_00f209d8);
    if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) ||
       (((iVar4 = (*pcVar2)(), iVar4 != 0 &&
         (iVar4 = (*pcVar3)(iVar4,1,local_14,0xc,local_28), iVar4 != 0)) && ((local_c & 1) != 0))))
    goto LAB_00ac9a74;
    _UType = _UType | 0x200000;
  }
  pcVar2 = DecodePointer(Ptr_00f209c8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_18,local_24,local_20,_UType);
  }
LAB_00ac9ac5:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

