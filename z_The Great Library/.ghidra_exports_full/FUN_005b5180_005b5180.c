// FUN_005b5180 @ 005b5180 body=[[005b5180, 005b5268] [005b5272, 005b5285]]


void FUN_005b5180(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb66d8;
  local_20 = 0;
  local_c = 0;
  piVar1 = *(int **)(param_1 + 8);
  piVar6 = (int *)0x0;
  piVar4 = (int *)0x0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  while (piVar3 = piVar4, piVar2 = piVar6, piVar6 = piVar3, piVar1 != (int *)0x0) {
    iVar7 = *piVar1;
    piVar1 = (int *)piVar1[2];
    piVar6 = (int *)FUN_00aae9af(0x10);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = iVar7;
      piVar6[1] = (int)piVar2;
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 3) = 0;
    }
    iVar7 = local_20 + 1;
    bVar8 = local_20 != 0;
    piVar4 = piVar6;
    local_20 = iVar7;
    if (bVar8) {
      piVar2[2] = (int)piVar6;
      piVar4 = piVar3;
    }
  }
  while (piVar6 != (int *)0x0) {
    piVar1 = (int *)*piVar6;
    piVar6 = (int *)piVar6[2];
    if (*(char *)((int)piVar1 + 0x29) == '\0') {
      (**(code **)(*piVar1 + 0x34))();
    }
    cVar5 = (**(code **)(*piVar1 + 0x3c))(param_2);
    if (cVar5 == '\x01') {
      FUN_005b5a30(param_1);
    }
  }
  if (piVar3 == (int *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

