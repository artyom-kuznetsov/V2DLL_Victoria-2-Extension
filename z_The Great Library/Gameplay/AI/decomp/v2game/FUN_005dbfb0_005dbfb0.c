// FUN_005dbfb0 @ 005dbfb0 body=[[005dbfb0, 005dc043]]


int * FUN_005dbfb0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_00401000(0x3f000000);
  iVar3 = FUN_00b31c00();
  piVar4 = (int *)*param_1;
  *param_2 = iVar3;
  param_1 = (int *)iVar3;
  if (piVar4 != (int *)0x0) {
    do {
      piVar1 = *(int **)(*piVar4 + 0x38);
      piVar4 = (int *)piVar4[2];
      iVar5 = iVar3;
      while (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        piVar1 = (int *)piVar1[2];
        if (*(int *)(*(int *)(iVar2 + 0x38) + 0x34) == param_3) {
          iVar5 = iVar5 + *(int *)(iVar2 + 0x3c);
        }
      }
      param_1 = (int *)((int)param_1 + iVar5);
    } while (piVar4 != (int *)0x0);
    *param_2 = (int)param_1;
  }
  return param_2;
}

