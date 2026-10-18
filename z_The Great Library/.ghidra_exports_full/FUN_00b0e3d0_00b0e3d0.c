// FUN_00b0e3d0 @ 00b0e3d0 body=[[00b0e3d0, 00b0e434]]


void FUN_00b0e3d0(int *param_1)

{
  int *in_ECX;
  
  if (param_1 != in_ECX) {
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    if (in_ECX[4] != 0) {
      (*(code *)PTR__free_00f01b10)(in_ECX[4]);
      in_ECX[4] = 0;
    }
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    if (*in_ECX != 0) {
      (*(code *)PTR__free_00f01b10)(*in_ECX);
      *in_ECX = 0;
    }
    in_ECX[8] = param_1[8];
    FUN_00ae6590(param_1);
    FUN_00ae6590(param_1 + 4);
  }
  return;
}

