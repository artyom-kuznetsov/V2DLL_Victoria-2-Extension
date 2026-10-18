// FUN_00a798f0 @ 00a798f0 body=[[00a798f0, 00a79906]]


DWORD FUN_00a798f0(void)

{
  _MEMORYSTATUS local_24;
  
  GlobalMemoryStatus(&local_24);
  return local_24.dwMemoryLoad;
}

