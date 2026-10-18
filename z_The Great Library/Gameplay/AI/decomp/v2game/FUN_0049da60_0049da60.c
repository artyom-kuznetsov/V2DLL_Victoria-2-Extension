// FUN_0049da60 @ 0049da60 body=[[0049da60, 0049db27]]


void FUN_0049da60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 0x2a88);
  while ((*(int **)(param_1 + 0x2a88) <= piVar7 && (piVar7 < *(int **)(param_1 + 0x2a8c)))) {
    iVar1 = *piVar7;
    piVar2 = *(int **)(iVar1 + 8);
    piVar7 = piVar7 + 1;
    while (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (iVar3 < *(int *)(param_1 + 0x223c) - *(int *)(param_1 + 0x2238) >> 2) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x2238) + iVar3 * 4);
        iVar4 = *(int *)(iVar3 + 0x160);
        piVar6 = (int *)FUN_00aae9af(0x10);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar1;
          piVar6[1] = iVar4;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar5 = *(int *)(iVar3 + 0x164);
        *(int **)(iVar3 + 0x160) = piVar6;
        *(int *)(iVar3 + 0x164) = iVar5 + 1;
        if (iVar5 == 0) {
          *(int **)(iVar3 + 0x15c) = piVar6;
        }
        else {
          *(int **)(iVar4 + 8) = piVar6;
        }
      }
    }
  }
  return;
}

