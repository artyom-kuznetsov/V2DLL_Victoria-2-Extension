// FUN_009d80a0 @ 009d80a0 body=[[009d80a0, 009d8133]]


void FUN_009d80a0(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  LARGE_INTEGER local_28;
  uint local_20;
  int local_1c;
  LARGE_INTEGER local_18;
  uint local_10;
  int local_c;
  
  QueryPerformanceFrequency(&local_18);
  QueryPerformanceCounter(&local_28);
  uVar3 = local_28.s.LowPart + local_18.s.LowPart;
  iVar2 = local_28.s.HighPart + local_18.s.HighPart +
          (uint)CARRY4(local_28.s.LowPart,local_18.s.LowPart);
  uVar1 = rdtsc();
  local_1c = (int)((ulonglong)uVar1 >> 0x20);
  local_20 = (uint)uVar1;
  local_10 = local_20;
  local_c = local_1c;
  do {
    do {
      QueryPerformanceCounter(&local_28);
    } while (local_28.s.HighPart < iVar2);
  } while ((local_28.s.HighPart <= iVar2) && (local_28.s.LowPart <= uVar3));
  uVar1 = rdtsc();
  local_1c = (int)((ulonglong)uVar1 >> 0x20);
  local_20 = (uint)uVar1;
  __alldiv(local_20 - local_10,(local_1c - local_c) - (uint)(local_20 < local_10),1000000,0);
  return;
}

