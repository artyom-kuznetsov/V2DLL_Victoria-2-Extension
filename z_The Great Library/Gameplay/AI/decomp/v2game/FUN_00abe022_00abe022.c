// ___security_init_cookie @ 00abe022 body=[[00abe022, 00abe0bc]]


/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2010 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00ef259c == 0xbb40e64e) || ((DAT_00ef259c & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00ef259c = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00ef259c == 0xbb40e64e) {
      DAT_00ef259c = 0xbb40e64f;
    }
    else if ((DAT_00ef259c & 0xffff0000) == 0) {
      DAT_00ef259c = DAT_00ef259c | (DAT_00ef259c | 0x4711) << 0x10;
    }
  }
  DAT_00ef25a0 = ~DAT_00ef259c;
  return;
}

