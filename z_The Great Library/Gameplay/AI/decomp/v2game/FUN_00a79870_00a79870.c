// FUN_00a79870 @ 00a79870 body=[[00a79870, 00a798a5]]


uint FUN_00a79870(void)

{
  _MEMORYSTATUS local_24;
  
  GlobalMemoryStatus(&local_24);
  if (DAT_01252644 == 0) {
    return local_24.dwAvailVirtual;
  }
  if (DAT_01252644 == 1) {
    return local_24.dwAvailVirtual >> 10;
  }
  return local_24.dwAvailVirtual >> 0x14;
}

