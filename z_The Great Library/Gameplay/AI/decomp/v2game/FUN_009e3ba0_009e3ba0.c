// FUN_009e3ba0 @ 009e3ba0 body=[[009e3ba0, 009e3c0b]]


void FUN_009e3ba0(undefined4 param_1)

{
  int in_ECX;
  int local_10;
  int local_c;
  
  *(undefined4 *)(in_ECX + 0x250) = param_1;
  local_10 = *(int *)(*(int *)(in_ECX + 0x90) + 0x6b9bc) / 2 + (int)(short)param_1;
  local_c = (int)(short)((uint)param_1 >> 0x10) + *(int *)(*(int *)(in_ECX + 0x90) + 0x6b9c0) / 2;
  (**(code **)(**(int **)(in_ECX + 0x494) + 0xcc))(&local_10);
  return;
}

