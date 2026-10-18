// __mtinit @ 00ab99f8 body=[[00ab99f8, 00ab9b72]]


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  undefined1 *puVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  Ptr_00f202d8 = GetProcAddress(hModule,"FlsAlloc");
  lpTlsValue_00f202dc = GetProcAddress(hModule,"FlsGetValue");
  Ptr_00f202e0 = GetProcAddress(hModule,"FlsSetValue");
  Ptr_00f202e4 = GetProcAddress(hModule,"FlsFree");
  if ((((Ptr_00f202d8 == (PVOID)0x0) || (lpTlsValue_00f202dc == (PVOID)0x0)) ||
      (Ptr_00f202e0 == (PVOID)0x0)) || (Ptr_00f202e4 == (FARPROC)0x0)) {
    lpTlsValue_00f202dc = TlsGetValue_exref;
    Ptr_00f202d8 = &LAB_00ab9708;
    Ptr_00f202e0 = TlsSetValue_exref;
    Ptr_00f202e4 = TlsFree_exref;
  }
  dwTlsIndex_00ef2ed8 = TlsAlloc();
  if ((dwTlsIndex_00ef2ed8 != 0xffffffff) &&
     (BVar1 = TlsSetValue(dwTlsIndex_00ef2ed8,lpTlsValue_00f202dc), BVar1 != 0)) {
    __init_pointers();
    Ptr_00f202d8 = EncodePointer(Ptr_00f202d8);
    lpTlsValue_00f202dc = EncodePointer(lpTlsValue_00f202dc);
    Ptr_00f202e0 = EncodePointer(Ptr_00f202e0);
    Ptr_00f202e4 = EncodePointer(Ptr_00f202e4);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      puVar5 = &LAB_00ab98c9;
      pcVar3 = DecodePointer(Ptr_00f202d8);
      DAT_00ef2ed4 = (*pcVar3)(puVar5);
      if ((DAT_00ef2ed4 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        iVar2 = DAT_00ef2ed4;
        p_Var6 = _Ptd;
        pcVar3 = DecodePointer(Ptr_00f202e0);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}

