// FUN_008d6d90 @ 008d6d90 body=[[008d6d90, 008d6de3] [008d6df0, 008d6ead]]


undefined4 FUN_008d6d90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                      0x188);
    cVar4 = (**(code **)(*piVar1 + 0x24))();
    if (cVar4 == '\0') {
      return 1;
    }
    piVar6 = (int *)piVar1[0x12];
    while (((int *)piVar1[0x12] <= piVar6 && (piVar6 < (int *)piVar1[0x13]))) {
      iVar2 = *piVar6;
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 0x5c);
      piVar6 = piVar6 + 1;
      iVar7 = 0;
      if (0 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24) {
        piVar5 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) +
                                          0x5c) + 200) + 4);
        do {
          if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4) + 300) == 0) {
            return 1;
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 9;
        } while (iVar7 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
      }
    }
  }
  return 0;
}

