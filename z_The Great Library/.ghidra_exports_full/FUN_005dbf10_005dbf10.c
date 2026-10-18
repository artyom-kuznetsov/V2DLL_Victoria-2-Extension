// FUN_005dbf10 @ 005dbf10 body=[[005dbf10, 005dbfa4]]


int * FUN_005dbf10(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  piVar4 = (int *)*param_1;
  *param_2 = iVar2;
  param_1 = (int *)iVar2;
  if (piVar4 != (int *)0x0) {
    do {
      piVar3 = *(int **)(*piVar4 + 0x38);
      piVar4 = (int *)piVar4[2];
      iVar5 = iVar2;
      if (piVar3 != (int *)0x0) {
        do {
          iVar1 = *piVar3;
          piVar3 = (int *)piVar3[2];
          if (*(int *)(*(int *)(iVar1 + 0x38) + 0x24) == *(int *)(param_3 + 0x24)) {
            iVar5 = iVar5 + *(int *)(iVar1 + 0x3c);
          }
        } while (piVar3 != (int *)0x0);
      }
      param_1 = (int *)((int)param_1 + iVar5);
    } while (piVar4 != (int *)0x0);
    *param_2 = (int)param_1;
  }
  return param_2;
}

