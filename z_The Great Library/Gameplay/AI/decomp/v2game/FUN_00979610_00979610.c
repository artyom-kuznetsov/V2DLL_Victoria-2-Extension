// FUN_00979610 @ 00979610 body=[[00979610, 0097967c] [00979680, 009796a8]]


void FUN_00979610(void)

{
  BOOL BVar1;
  _STARTUPINFOA local_78;
  _PROCESS_INFORMATION local_30;
  DWORD local_14;
  
  _memset(&local_78,0,0x44);
  local_78.cb = 0x44;
  local_30.hProcess = (HANDLE)0x0;
  local_30.hThread = (HANDLE)0x0;
  local_30.dwProcessId = 0;
  local_30.dwThreadId = 0;
  CreateProcessA("movies/binkplay.exe","movies\\binkplay.exe movies\\game_intro.bik /C /R /D511 /U1"
                 ,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,
                 &local_78,&local_30);
  while( true ) {
    BVar1 = GetExitCodeProcess(local_30.hProcess,&local_14);
    if ((BVar1 == 0) || (local_14 != 0x103)) break;
    Sleep(2000);
  }
  return;
}

