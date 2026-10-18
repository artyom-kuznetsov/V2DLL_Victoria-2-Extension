// FUN_00b1dfa0 @ 00b1dfa0 body=[[00b1dfa0, 00b1dfed]]


void FUN_00b1dfa0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  uVar1 = in_ECX[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = (int *)*in_ECX;
    do {
      if (*piVar3 == param_1) {
        if (uVar2 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < uVar1);
  }
  in_ECX[1] = uVar1 + 1;
  if ((uint)in_ECX[2] < uVar1 + 1) {
    FUN_00aeb6c0(uVar1 + 2);
  }
  piVar3 = (int *)(*in_ECX + -4 + in_ECX[1] * 4);
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_1;
  }
  return;
}

