// FUN_00aeb3a0 @ 00aeb3a0 body=[[00aeb3a0, 00aeb3d3]]


int FUN_00aeb3a0(int param_1)

{
  uint uVar1;
  int *in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*(int *)(*piVar2 + 4) == param_1) {
        return ((int *)*in_ECX)[uVar1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  return 0;
}

