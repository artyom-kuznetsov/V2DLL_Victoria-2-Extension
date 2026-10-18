// FUN_009f90b0 @ 009f90b0 body=[[009f90b0, 009f9106]]


void FUN_009f90b0(int param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x80))();
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(int **)(*(int *)(param_1 + 0xdc) + 0xd4) = in_ECX;
    in_ECX[0x36] = *(int *)(param_1 + 0xdc);
    *(int **)(param_1 + 0xdc) = in_ECX;
    in_ECX[0x39] = param_1;
    return;
  }
  *(int **)(param_1 + 0xe0) = in_ECX;
  *(int **)(param_1 + 0xdc) = in_ECX;
  in_ECX[0x39] = param_1;
  return;
}

