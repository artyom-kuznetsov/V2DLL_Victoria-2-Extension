// FUN_00b28f20 @ 00b28f20 body=[[00b28f20, 00b29103]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00b28f20(void)

{
  HMODULE hModule;
  
  DAT_00f20bec = LoadLibraryA("userenv.dll");
  if ((DAT_00f20bec != (HMODULE)0x0) &&
     ((DAT_00f20be4 == 0 ||
      (DAT_00f20bdc = GetProcAddress(DAT_00f20bec,"GetUserProfileDirectoryW"),
      DAT_00f20bdc == (FARPROC)0x0)))) {
    DAT_00f20bdc = (FARPROC)0x0;
  }
  _DAT_00f20bf0 = LoadLibraryA("advapi32.dll");
  if ((_DAT_00f20bf0 != (HMODULE)0x0) &&
     ((DAT_00f20be4 == 0 ||
      (DAT_00f20ab4 = GetProcAddress(_DAT_00f20bf0,"GetUserNameW"), DAT_00f20ab4 == (FARPROC)0x0))))
  {
    DAT_00f20ab4 = FUN_00b289d0;
  }
  hModule = LoadLibraryA("kernel32.dll");
  DAT_00f20be8 = hModule;
  if (hModule != (HMODULE)0x0) {
    DAT_00f20ab8 = GetProcAddress(hModule,"GetFileAttributesExA");
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bd0 = GetProcAddress(hModule,"GetFileAttributesExW"), DAT_00f20bd0 == (FARPROC)0x0)
       ) {
      DAT_00f20bd0 = (FARPROC)0x0;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bc8 = GetProcAddress(hModule,"FindFirstFileW"), DAT_00f20bc8 == (FARPROC)0x0)) {
      DAT_00f20bc8 = (FARPROC)0x0;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20ab0 = GetProcAddress(hModule,"FindNextFileW"), DAT_00f20ab0 == (FARPROC)0x0)) {
      DAT_00f20ab0 = (FARPROC)0x0;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bc0 = GetProcAddress(hModule,"GetModuleFileNameW"), DAT_00f20bc0 == (FARPROC)0x0))
    {
      DAT_00f20bc0 = FUN_00b28ae0;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bd4 = GetProcAddress(hModule,"FormatMessageW"), DAT_00f20bd4 == (FARPROC)0x0)) {
      DAT_00f20bd4 = FUN_00b28a50;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bc4 = GetProcAddress(hModule,"GetFileAttributesW"), DAT_00f20bc4 == (FARPROC)0x0))
    {
      DAT_00f20bc4 = FUN_00b28b60;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bcc = GetProcAddress(hModule,"GetCurrentDirectoryW"), DAT_00f20bcc == (FARPROC)0x0)
       ) {
      DAT_00f20bcc = FUN_00b28c00;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20abc = GetProcAddress(hModule,"CreateDirectoryW"), DAT_00f20abc == (FARPROC)0x0)) {
      DAT_00f20abc = FUN_00b28d20;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20aac = GetProcAddress(hModule,"RemoveDirectoryW"), DAT_00f20aac == (FARPROC)0x0)) {
      DAT_00f20aac = FUN_00b28c80;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20bd8 = GetProcAddress(hModule,"CreateFileW"), DAT_00f20bd8 == (FARPROC)0x0)) {
      DAT_00f20bd8 = FUN_00b28e60;
    }
    if ((DAT_00f20be4 == 0) ||
       (DAT_00f20aa8 = GetProcAddress(hModule,"DeleteFileW"), DAT_00f20aa8 == (FARPROC)0x0)) {
      DAT_00f20aa8 = FUN_00b28dc0;
    }
  }
  return 1;
}

