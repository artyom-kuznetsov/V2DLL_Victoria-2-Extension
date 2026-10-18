// FUN_009c3950 @ 009c3950 body=[[009c3950, 009c398a]]


void FUN_009c3950(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int local_c;
  int local_8;
  
  uVar1 = *param_1;
  *(undefined4 *)(in_ECX + 0x9c) = uVar1;
  local_c = (int)(short)uVar1;
  local_8 = (int)*(short *)(in_ECX + 0x9e);
  (**(code **)(**(int **)(in_ECX + 0x94) + 0xcc))(&local_c);
  return;
}

