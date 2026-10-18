// FUN_005dcac0 @ 005dcac0  (requested 005DCAC0, first bytes: 55 8B EC 8B 00 83 EC 08)


void FUN_005dcac0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_EAX;
  int *piVar7;
  
  piVar1 = (int *)*in_EAX;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    piVar3 = *(int **)(iVar2 + 0x38);
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    while (piVar3 != (int *)0x0) {
      iVar4 = *(int *)(iVar2 + 0x94);
      iVar5 = *piVar3;
      piVar3 = (int *)piVar3[2];
      piVar7 = (int *)FUN_00aae9af(0x10);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = iVar5;
        piVar7[1] = iVar4;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar6 = *(int *)(iVar2 + 0x98);
      *(int **)(iVar2 + 0x94) = piVar7;
      *(int *)(iVar2 + 0x98) = iVar6 + 1;
      if (iVar6 == 0) {
        *(int **)(iVar2 + 0x90) = piVar7;
      }
      else {
        *(int **)(iVar4 + 8) = piVar7;
      }
      *(int *)(iVar5 + 0x78) = iVar2;
      *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + *(int *)(iVar5 + 0x3c);
    }
  }
  return;
}

