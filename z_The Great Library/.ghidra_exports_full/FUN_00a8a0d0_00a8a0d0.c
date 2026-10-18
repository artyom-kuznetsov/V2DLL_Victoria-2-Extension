// FUN_00a8a0d0 @ 00a8a0d0 body=[[00a8a0d0, 00a8a1cd]]


int * FUN_00a8a0d0(byte param_1)

{
  uint uVar1;
  int *piVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  
  iVar4 = (uint)param_1 * 0x20 + *(int *)(in_EAX + 0x1c);
  piVar3 = *(int **)(iVar4 + 0x18);
  if (piVar3 == (int *)(iVar4 + 0x18)) {
LAB_00a8a105:
    piVar3 = *(int **)(iVar4 + 0x10);
    if (piVar3 != (int *)(iVar4 + 0x10)) {
      do {
        if (piVar3[0x10] != 0) {
          return (int *)0x0;
        }
        uVar1 = piVar3[2];
        if (*(uint *)(iVar4 + 8) + 1 < uVar1) {
          return (int *)0x0;
        }
        if (*(uint *)(iVar4 + 8) < uVar1) {
          *(uint *)(iVar4 + 8) = uVar1;
          if (piVar3[0xf] != 0) {
            *(uint *)(iVar4 + 8) = piVar3[0xf] + -1 + uVar1;
          }
          goto LAB_00a8a198;
        }
        *(int *)piVar3[0x12] = *(int *)piVar3[0x12] + -1;
        piVar2 = (int *)piVar3[0x12];
        if (*piVar2 == 0) {
          (*(code *)PTR__free_00f071fc)(piVar2[2]);
          (*(code *)PTR__free_00f071fc)(piVar2);
        }
        if (piVar3[0x11] != 0) {
          (*(code *)PTR__free_00f071fc)(piVar3[0x11]);
        }
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        (*(code *)PTR__free_00f071fc)(piVar3);
        piVar3 = *(int **)(iVar4 + 0x10);
      } while (piVar3 != (int *)(iVar4 + 0x10));
    }
    return (int *)0x0;
  }
  if (piVar3[3] != 0) {
    if (*(uint *)(iVar4 + 8) < (uint)piVar3[2]) goto LAB_00a8a105;
    *(int *)(iVar4 + 0xc) = piVar3[3];
  }
LAB_00a8a198:
  *(int *)piVar3[1] = *piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
  piVar2 = (int *)piVar3[0x12];
  *piVar2 = *piVar2 + -1;
  if (piVar3[0x11] != 0) {
    (*(code *)PTR__free_00f071fc)(piVar3[0x11]);
  }
  (*(code *)PTR__free_00f071fc)(piVar3);
  return piVar2;
}

