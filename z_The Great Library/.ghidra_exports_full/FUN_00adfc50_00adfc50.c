// FUN_00adfc50 @ 00adfc50 body=[[00adfc50, 00adfc72]]


uint FUN_00adfc50(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  return 0xffffffff;
}

