// FUN_00a798b0 @ 00a798b0 body=[[00a798b0, 00a798e5]]


uint FUN_00a798b0(void)

{
  _MEMORYSTATUS local_24;
  
  GlobalMemoryStatus(&local_24);
  if (DAT_01252644 == 0) {
    return local_24.dwTotalVirtual;
  }
  if (DAT_01252644 == 1) {
    return local_24.dwTotalVirtual >> 10;
  }
  return local_24.dwTotalVirtual >> 0x14;
}

