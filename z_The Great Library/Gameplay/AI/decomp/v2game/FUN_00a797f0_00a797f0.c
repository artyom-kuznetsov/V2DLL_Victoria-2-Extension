// FUN_00a797f0 @ 00a797f0 body=[[00a797f0, 00a79825]]


uint FUN_00a797f0(void)

{
  _MEMORYSTATUS local_24;
  
  GlobalMemoryStatus(&local_24);
  if (DAT_01252644 == 0) {
    return local_24.dwAvailPhys;
  }
  if (DAT_01252644 == 1) {
    return local_24.dwAvailPhys >> 10;
  }
  return local_24.dwAvailPhys >> 0x14;
}

