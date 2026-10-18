// FUN_00a869f0 @ 00a869f0 body=[[00a869f0, 00a86a67]]


void FUN_00a869f0(undefined4 param_1)

{
  short sVar1;
  int in_ECX;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(*(int *)(in_ECX + 0xbc) + 0x6b9bc) / 2 + (int)(short)param_1;
  sVar1 = (short)((uint)param_1 >> 0x10);
  local_c = (int)sVar1 + *(int *)(*(int *)(in_ECX + 0xbc) + 0x6b9c0) / 2;
  (**(code **)(**(int **)(in_ECX + 0xb8) + 0xcc))(&local_10);
  *(int *)(in_ECX + 0x54) = (int)(short)param_1;
  *(int *)(in_ECX + 0x58) = (int)sVar1;
  return;
}

