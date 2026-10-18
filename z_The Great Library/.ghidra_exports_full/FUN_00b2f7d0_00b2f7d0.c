// FUN_00b2f7d0 @ 00b2f7d0 body=[[00b2f7d0, 00b2f7f7]]


uint FUN_00b2f7d0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar2 = *(int **)(param_1 + 0xc);
    do {
      if (*piVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0xffffffff;
}

