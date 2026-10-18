// FUN_009da350 @ 009da350 body=[[009da350, 009da388]]


float10 FUN_009da350(void)

{
  float fVar1;
  HANDLE Process;
  PROCESS_MEMORY_COUNTERS *ppsmemCounters;
  DWORD cb;
  PROCESS_MEMORY_COUNTERS local_30;
  
  cb = 0x28;
  ppsmemCounters = &local_30;
  Process = GetCurrentProcess();
  GetProcessMemoryInfo(Process,ppsmemCounters,cb);
  fVar1 = (float)(int)local_30.WorkingSetSize;
  if ((int)local_30.WorkingSetSize < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  return (float10)(fVar1 * 0.0009765625);
}

