// FUN_00aeb3e0 @ 00aeb3e0 body=[[00aeb3e0, 00aeb407]]


uint FUN_00aeb3e0(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*(int *)(*piVar2 + 4) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  return 0xffffffff;
}

