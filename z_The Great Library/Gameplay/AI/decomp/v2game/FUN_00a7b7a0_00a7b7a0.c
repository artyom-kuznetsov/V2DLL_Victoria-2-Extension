// FUN_00a7b7a0 @ 00a7b7a0 body=[[00a7b7a0, 00a7b7dc]]


void FUN_00a7b7a0(void)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  LARGE_INTEGER local_c;
  
  if (*(char *)(in_ECX + 0x28) == '\0') {
    local_c.QuadPart = 0.0;
    QueryPerformanceCounter(&local_c);
    uVar3 = local_c.s.LowPart - *(uint *)(in_ECX + 8);
    puVar1 = (uint *)(in_ECX + 0x10);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(undefined1 *)(in_ECX + 0x28) = 1;
    *(int *)(in_ECX + 0x14) =
         *(int *)(in_ECX + 0x14) +
         ((local_c.s.HighPart - *(int *)(in_ECX + 0xc)) -
         (uint)(local_c.s.LowPart < *(uint *)(in_ECX + 8))) + (uint)CARRY4(uVar2,uVar3);
  }
  return;
}

