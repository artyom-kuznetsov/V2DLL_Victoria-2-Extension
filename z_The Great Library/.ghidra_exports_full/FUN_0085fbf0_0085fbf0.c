// FUN_0085fbf0 @ 0085fbf0 body=[[0085fbf0, 0085fc8e]]


uint FUN_0085fbf0(void)

{
  uint uVar1;
  int in_ECX;
  int in_EDX;
  
  uVar1 = 0;
  if (*(int *)(*(int *)(in_EDX + 0xbcc) + 0x28c) + *(int *)(in_EDX + 0xea0) <
      *(int *)(*(int *)(in_ECX + 0xbcc) + 0x28c) + *(int *)(in_ECX + 0xea0)) {
    uVar1 = 4;
  }
  if ((*(int *)(in_EDX + 0x1a4) <= *(int *)(in_ECX + 0x1a4)) &&
     ((*(int *)(in_EDX + 0x1a4) < *(int *)(in_ECX + 0x1a4) ||
      (*(uint *)(in_EDX + 0x1a0) < *(uint *)(in_ECX + 0x1a0))))) {
    uVar1 = uVar1 | 1;
  }
  if ((*(int *)(in_EDX + 0x19c) <= *(int *)(in_ECX + 0x19c)) &&
     ((*(int *)(in_EDX + 0x19c) < *(int *)(in_ECX + 0x19c) ||
      (*(uint *)(in_EDX + 0x198) < *(uint *)(in_ECX + 0x198))))) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

