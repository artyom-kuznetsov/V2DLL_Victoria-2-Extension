// FUN_00a8a230 @ 00a8a230 body=[[00a8a230, 00a8a29d]]


void FUN_00a8a230(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    if (piVar1[0x12] != 0) {
      *(int *)piVar1[0x12] = *(int *)piVar1[0x12] + -1;
      piVar2 = (int *)piVar1[0x12];
      if (*piVar2 == 0) {
        (*(code *)PTR__free_00f071fc)(piVar2[2]);
        (*(code *)PTR__free_00f071fc)(piVar2);
      }
    }
    if (piVar1[0x11] != 0) {
      (*(code *)PTR__free_00f071fc)(piVar1[0x11]);
    }
    (*(code *)PTR__free_00f071fc)(piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

