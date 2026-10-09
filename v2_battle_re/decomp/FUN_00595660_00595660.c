// FUN_00595660 @ 00595660

void FUN_00595660(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))();
  if (iVar4 == 2) {
    piVar6 = *(int **)(param_1 + 0x20);
    if (piVar6 != (int *)0x0) {
      do {
        iVar4 = *piVar6;
        piVar6 = (int *)piVar6[2];
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)(iVar4 + 0x38);
        }
        piVar2 = (int *)*puVar5;
        while (piVar2 != (int *)0x0) {
          iVar4 = *piVar2;
          piVar2 = (int *)piVar2[2];
          piVar1 = (int *)(*(int *)(param_1 + 0x58) + *(int *)(*(int *)(iVar4 + 0x38) + 0x24) * 4);
          *piVar1 = *piVar1 + 1000;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1000;
        }
      } while (piVar6 != (int *)0x0);
      return;
    }
  }
  else {
    piVar6 = *(int **)(param_1 + 0x20);
    while (piVar6 != (int *)0x0) {
      piVar2 = (int *)piVar6[2];
      if (*piVar6 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)(*piVar6 + 0x38);
      }
      piVar1 = (int *)*puVar5;
      while (piVar6 = piVar2, piVar1 != (int *)0x0) {
        piVar3 = (int *)*piVar1;
        local_8 = piVar3[0xf];
        piVar1 = (int *)piVar1[2];
        piVar6 = (int *)(**(code **)(*piVar3 + 0x3c))(local_c);
        iVar4 = __alldiv((longlong)*piVar6 * (longlong)local_8,1000,0);
        piVar6 = (int *)(*(int *)(param_1 + 0x58) + *(int *)(piVar3[0xe] + 0x24) * 4);
        *piVar6 = *piVar6 + iVar4;
        piVar3[0x1b] = piVar3[0x1b] + piVar3[0xf];
        FUN_005c0160(local_10);
      }
    }
  }
  return;
}


