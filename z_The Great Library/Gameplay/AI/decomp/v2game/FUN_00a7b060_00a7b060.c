// FUN_00a7b060 @ 00a7b060 body=[[00a7b060, 00a7b081]]


bool FUN_00a7b060(void)

{
  DWORD in_ECX;
  DWORD local_8;
  
  local_8 = in_ECX;
  GetExitCodeThread(*(HANDLE *)(in_ECX + 8),&local_8);
  return local_8 == 0x103;
}

