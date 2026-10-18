// FUN_00a88610 @ 00a88610 body=[[00a88610, 00a886c2]]


undefined1 FUN_00a88610(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  char in_DL;
  int *piVar4;
  
  piVar1 = param_1 + 0x2b;
  piVar4 = param_1;
  for (piVar2 = (int *)param_1[0x2b];
      (piVar2 != piVar1 &&
      ((piVar4 = piVar2, piVar2[2] != in_ECX || (*(char *)((int)piVar2 + 0x25) != in_DL))));
      piVar2 = (int *)*piVar2) {
  }
  if (piVar2 == piVar1) {
    return 0;
  }
  iVar3 = piVar4[9];
  *(int *)piVar4[1] = *piVar4;
  *(int *)(*piVar4 + 4) = piVar4[1];
  if (piVar4[0x14] != 0) {
    param_1[0x27] = param_1[0x27] - (uint)*(ushort *)(piVar4 + 8);
    *(int *)piVar4[0x14] = *(int *)piVar4[0x14] + -1;
    piVar2 = (int *)piVar4[0x14];
    if (*piVar2 == 0) {
      (*(code *)PTR__free_00f071fc)(piVar2[2]);
      (*(code *)PTR__free_00f071fc)(piVar2);
    }
  }
  (*(code *)PTR__free_00f071fc)(piVar4);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    param_1[0x11] = piVar2[5] + piVar2[4];
  }
  return (char)iVar3;
}

