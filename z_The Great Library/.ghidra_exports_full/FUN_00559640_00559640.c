// FUN_00559640 @ 00559640 body=[[00559640, 00559762]]


void FUN_00559640(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar6 = (param_2 + -1) / 2;
    piVar1 = (int *)*param_4;
    piVar2 = *(int **)(param_1 + iVar6 * 4);
    cVar4 = (**(code **)(*piVar2 + 0x38))();
    if (cVar4 == '\0') {
      piVar2 = (int *)piVar2[0xe];
      local_c = 0;
      while (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar4 = (**(code **)(*piVar3 + 0x28))();
        if ((cVar4 != '\0') && (*(char *)(piVar3[0xe] + 0x3c) == '\0')) {
          local_c = local_c + 1;
        }
      }
    }
    else {
      local_c = piVar2[0x10];
    }
    cVar4 = (**(code **)(*piVar1 + 0x38))();
    if (cVar4 == '\0') {
      piVar1 = (int *)piVar1[0xe];
      iVar5 = 0;
      while (piVar1 != (int *)0x0) {
        piVar2 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar4 = (**(code **)(*piVar2 + 0x28))();
        if ((cVar4 != '\0') && (*(char *)(piVar2[0xe] + 0x3c) == '\0')) {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      iVar5 = piVar1[0x10];
    }
    if (local_c <= iVar5) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    param_2 = iVar6;
    if (iVar6 <= param_3) {
      *(int *)(param_1 + iVar6 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

