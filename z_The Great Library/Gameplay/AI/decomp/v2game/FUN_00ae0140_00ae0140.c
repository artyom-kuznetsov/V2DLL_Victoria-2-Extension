// FUN_00ae0140 @ 00ae0140 body=[[00ae0140, 00ae01bd]]


void FUN_00ae0140(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    if (*in_ECX != 0) {
      (*(code *)PTR__free_00f01b10)(*in_ECX);
      *in_ECX = 0;
    }
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    if (in_ECX[4] != 0) {
      (*(code *)PTR__free_00f01b10)(in_ECX[4]);
      in_ECX[4] = 0;
    }
  }
  else {
    uVar1 = in_ECX[1];
    if (((param_1 != uVar1) && (in_ECX[1] = param_1, uVar1 < param_1)) &&
       ((uint)in_ECX[2] < param_1)) {
      FUN_00ad8720(param_1);
    }
    uVar1 = in_ECX[5];
    if (((param_1 != uVar1) && (in_ECX[5] = param_1, uVar1 < param_1)) &&
       ((uint)in_ECX[6] < param_1)) {
      FUN_00adfdb0(param_1);
      return;
    }
  }
  return;
}

