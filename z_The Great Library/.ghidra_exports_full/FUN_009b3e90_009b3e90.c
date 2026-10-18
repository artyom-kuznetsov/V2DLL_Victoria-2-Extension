// FUN_009b3e90 @ 009b3e90 body=[[009b3e90, 009b3f02]]


void FUN_009b3e90(undefined4 param_1)

{
  int in_ECX;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(*(int *)(in_ECX + 0xbc) + 0x6b9bc) / 2 + (int)(short)param_1;
  local_c = (int)(short)((uint)param_1 >> 0x10) + *(int *)(*(int *)(in_ECX + 0xbc) + 0x6b9c0) / 2;
  (**(code **)(**(int **)(in_ECX + 0xc0) + 0xcc))(&local_10);
  *(undefined4 *)(in_ECX + 0xe4) = param_1;
  return;
}

