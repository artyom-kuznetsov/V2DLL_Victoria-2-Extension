// FUN_00a79830 @ 00a79830 body=[[00a79830, 00a79865]]


uint FUN_00a79830(void)

{
  _MEMORYSTATUS local_24;
  
  GlobalMemoryStatus(&local_24);
  if (DAT_01252644 == 0) {
    return local_24.dwTotalPhys;
  }
  if (DAT_01252644 == 1) {
    return local_24.dwTotalPhys >> 10;
  }
  return local_24.dwTotalPhys >> 0x14;
}

