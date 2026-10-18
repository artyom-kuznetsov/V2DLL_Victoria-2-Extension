// FUN_00a8a1d0 @ 00a8a1d0 body=[[00a8a1d0, 00a8a22c]]


void FUN_00a8a1d0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    if (piVar1[0x14] != 0) {
      *(int *)piVar1[0x14] = *(int *)piVar1[0x14] + -1;
      piVar2 = (int *)piVar1[0x14];
      if (*piVar2 == 0) {
        (*(code *)PTR__free_00f071fc)(piVar2[2]);
        (*(code *)PTR__free_00f071fc)(piVar2);
      }
    }
    (*(code *)PTR__free_00f071fc)(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

