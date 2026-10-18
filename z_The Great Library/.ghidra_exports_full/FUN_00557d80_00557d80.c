// FUN_00557d80 @ 00557d80 body=[[00557d80, 00557e9f]]


void FUN_00557d80(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar4 = param_2;
  while( true ) {
    iVar7 = iVar4 * 2 + 2;
    if (param_3 <= iVar7) break;
    piVar1 = *(int **)(param_1 + iVar7 * 4);
    piVar2 = *(int **)(param_1 + -4 + iVar7 * 4);
    cVar5 = (**(code **)(*piVar1 + 0x38))();
    if (cVar5 == '\0') {
      piVar1 = (int *)piVar1[0xe];
      local_8 = 0;
      local_c = local_8;
      while (piVar1 != (int *)0x0) {
        piVar3 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar5 = (**(code **)(*piVar3 + 0x28))();
        if ((cVar5 != '\0') && (*(char *)(piVar3[0xe] + 0x3c) == '\0')) {
          local_c = local_c + 1;
        }
      }
    }
    else {
      local_c = piVar1[0x10];
    }
    cVar5 = (**(code **)(*piVar2 + 0x38))();
    if (cVar5 == '\0') {
      piVar1 = (int *)piVar2[0xe];
      local_8 = 0;
      while (piVar1 != (int *)0x0) {
        piVar2 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar5 = (**(code **)(*piVar2 + 0x28))();
        if ((cVar5 != '\0') && (*(char *)(piVar2[0xe] + 0x3c) == '\0')) {
          local_8 = local_8 + 1;
        }
      }
    }
    else {
      local_8 = piVar2[0x10];
    }
    if (local_8 < local_c) {
      iVar7 = iVar4 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    iVar4 = iVar7;
  }
  iVar6 = iVar4;
  if (iVar7 == param_3) {
    iVar6 = param_3 + -1;
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
  }
  FUN_00559640(param_1,iVar6,param_2,param_4,param_5);
  return;
}

