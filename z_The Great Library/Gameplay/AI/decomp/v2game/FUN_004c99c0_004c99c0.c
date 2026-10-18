// FUN_004c99c0 @ 004c99c0 body=[[004c99c0, 004c9a1f]]


uint FUN_004c99c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_EDX;
  
  piVar1 = (int *)*in_EDX;
  iVar3 = in_EDX[1] - (int)piVar1 >> 2;
  piVar2 = piVar1;
  if (piVar1 != piVar1 + iVar3) {
    do {
      if (*piVar2 == *param_1) {
        *piVar2 = piVar1[iVar3 + -1];
        iVar3 = in_EDX[1];
        if (((iVar3 - *in_EDX & 0xfffffffcU) != 0) && (*in_EDX != iVar3)) {
          iVar3 = iVar3 + -4;
          in_EDX[1] = iVar3;
        }
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + iVar3);
  }
  return (uint)piVar2 & 0xffffff00;
}

