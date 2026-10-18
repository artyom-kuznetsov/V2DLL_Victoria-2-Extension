// FUN_009f9050 @ 009f9050 body=[[009f9050, 009f90a6]]


void FUN_009f9050(int param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x80))();
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(int **)(*(int *)(param_1 + 0xe0) + 0xd8) = in_ECX;
    in_ECX[0x35] = *(int *)(param_1 + 0xe0);
    *(int **)(param_1 + 0xe0) = in_ECX;
    in_ECX[0x39] = param_1;
    return;
  }
  *(int **)(param_1 + 0xdc) = in_ECX;
  *(int **)(param_1 + 0xe0) = in_ECX;
  in_ECX[0x39] = param_1;
  return;
}

