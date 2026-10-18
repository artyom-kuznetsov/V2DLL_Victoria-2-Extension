// FUN_00a79370 @ 00a79370 body=[[00a79370, 00a793a0]]


bool FUN_00a79370(void)

{
  BOOL BVar1;
  int in_ECX;
  DWORD local_8;
  
  local_8 = 0;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 4),&local_8);
  if (BVar1 == 0) {
    return false;
  }
  return local_8 == 0x103;
}

