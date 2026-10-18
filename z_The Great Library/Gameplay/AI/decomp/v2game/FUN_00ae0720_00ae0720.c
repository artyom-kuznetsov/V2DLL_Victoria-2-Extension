// FUN_00ae0720 @ 00ae0720 body=[[00ae0720, 00ae0796]]


void FUN_00ae0720(float param_1,float param_2)

{
  int *in_ECX;
  
  if (param_2 == 0.0) {
    *(undefined1 *)(in_ECX + 9) = 0;
    in_ECX[6] = (int)param_1;
    in_ECX[7] = (int)param_1;
    in_ECX[8] = 0;
    if (param_1 < 1e-05) {
      (**(code **)(*in_ECX + 0x1c))();
    }
    if (0.99999 < (float)in_ECX[6]) {
      (**(code **)(*in_ECX + 0x20))();
      return;
    }
  }
  else {
    *(undefined1 *)(in_ECX + 9) = 1;
    in_ECX[7] = (int)param_1;
    in_ECX[8] = (int)((param_1 - (float)in_ECX[6]) / param_2);
  }
  return;
}

