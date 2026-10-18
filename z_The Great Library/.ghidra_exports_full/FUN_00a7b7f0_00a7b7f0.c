// FUN_00a7b7f0 @ 00a7b7f0 body=[[00a7b7f0, 00a7b847]]


float10 FUN_00a7b7f0(void)

{
  int in_ECX;
  uint uVar1;
  LARGE_INTEGER local_c;
  
  if (DAT_01258b6c != '\0') {
    return (float10)*(double *)(in_ECX + 0x20);
  }
  if (*(char *)(in_ECX + 0x28) != '\0') {
    return (float10)*(longlong *)(in_ECX + 0x10) * (float10)*(double *)(in_ECX + 0x18);
  }
  QueryPerformanceCounter(&local_c);
  uVar1 = *(uint *)(in_ECX + 0x10) - *(uint *)(in_ECX + 8);
  return (float10)CONCAT44(((*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0xc)) -
                           (uint)(*(uint *)(in_ECX + 0x10) < *(uint *)(in_ECX + 8))) +
                           local_c.s.HighPart + (uint)CARRY4(uVar1,local_c.s.LowPart),
                           uVar1 + local_c.s.LowPart) * (float10)*(double *)(in_ECX + 0x18);
}

