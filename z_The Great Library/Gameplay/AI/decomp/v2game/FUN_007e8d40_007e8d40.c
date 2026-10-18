// FUN_007e8d40 @ 007e8d40 body=[[007e8d40, 007e8dab]]


void FUN_007e8d40(float param_1)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x14c) != '\0') {
    param_1 = param_1 - *(float *)(in_ECX + 0x150) * 3.1415927;
  }
  if (*(int *)(in_ECX + 300) != 0) {
    (**(code **)(**(int **)(in_ECX + 300) + 0x94))(param_1);
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x124) + 0x94))(param_1);
  return;
}

