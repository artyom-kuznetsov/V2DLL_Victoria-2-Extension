// FUN_00b2a610 @ 00b2a610 body=[[00b2a610, 00b2a63f]]


LPCRITICAL_SECTION FUN_00b2a610(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*DAT_013f3aa8)(0x18,0);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    FUN_00b1f840("Out of memory");
    return (LPCRITICAL_SECTION)0x0;
  }
  InitializeCriticalSection(lpCriticalSection);
  return lpCriticalSection;
}

