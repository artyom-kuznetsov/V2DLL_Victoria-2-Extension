// FUN_00ae07a0 @ 00ae07a0 body=[[00ae07a0, 00ae080e]]


void FUN_00ae07a0(float param_1)

{
  float fVar1;
  float fVar2;
  int *in_ECX;
  
  if ((char)in_ECX[9] != '\0') {
    fVar2 = param_1 * (float)in_ECX[8] + (float)in_ECX[6];
    in_ECX[6] = (int)fVar2;
    fVar1 = (float)in_ECX[7];
    if ((float)in_ECX[8] <= 0.0) {
      if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
        *(undefined1 *)(in_ECX + 9) = 0;
        in_ECX[6] = in_ECX[7];
        if ((float)in_ECX[7] < 1e-05) {
          (**(code **)(*in_ECX + 0x1c))();
        }
      }
    }
    else if (fVar2 >= fVar1) {
      *(undefined1 *)(in_ECX + 9) = 0;
      in_ECX[6] = in_ECX[7];
      if (0.999999 < (float)in_ECX[7]) {
        (**(code **)(*in_ECX + 0x20))();
        return;
      }
    }
  }
  return;
}

