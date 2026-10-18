// FUN_00a885a0 @ 00a885a0 body=[[00a885a0, 00a88601]]


void FUN_00a885a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xb4);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
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
    piVar1 = (int *)*piVar3;
  }
  return;
}

