// FUN_00444f10 @ 00444f10 body=[[00444f10, 00444f76]]


int FUN_00444f10(int *param_1)

{
  int *in_ECX;
  
  if ((in_ECX[4] != DAT_0125a35c) && (in_ECX[4] != *param_1)) {
    in_ECX[6] = in_ECX[6] + 1;
    if ((in_ECX[1] - *in_ECX) / 0x1c <= in_ECX[6]) {
      in_ECX[6] = 0;
    }
    if (in_ECX[5] < in_ECX[6]) {
      in_ECX[5] = in_ECX[6];
    }
  }
  in_ECX[4] = *param_1;
  return *in_ECX + in_ECX[6] * 0x1c;
}

