// FUN_009c4280 @ 009c4280 body=[[009c4280, 009c42b8]]


void FUN_009c4280(undefined4 param_1)

{
  int in_ECX;
  int local_c;
  int local_8;
  
  *(undefined4 *)(in_ECX + 0xbc) = param_1;
  local_c = (int)(short)param_1;
  local_8 = (int)*(short *)(in_ECX + 0xbe);
  (**(code **)(**(int **)(in_ECX + 0x94) + 0xcc))(&local_c);
  return;
}

