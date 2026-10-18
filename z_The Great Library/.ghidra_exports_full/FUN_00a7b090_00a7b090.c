// FUN_00a7b090 @ 00a7b090 body=[[00a7b090, 00a7b0b2]]


undefined4 FUN_00a7b090(void)

{
  DWORD DVar1;
  int in_ECX;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)(in_ECX + 0xc)) {
    return 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x18) + 4))();
  return 1;
}

