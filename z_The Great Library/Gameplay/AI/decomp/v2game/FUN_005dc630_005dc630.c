// FUN_005dc630 @ 005dc630 body=[[005dc630, 005dc709]]


int * FUN_005dc630(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_8 [4];
  
  piVar2 = param_2;
  FUN_00401000(0x3f000000);
  iVar3 = FUN_00b31c00();
  *param_2 = iVar3;
  param_1 = (int *)*param_1;
  param_2 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    return piVar2;
  }
  do {
    piVar1 = (int *)*param_1;
    iVar3 = piVar1[0x10];
    param_1 = (int *)param_1[2];
    piVar4 = (int *)(**(code **)(*piVar1 + 0x94))(local_8);
    iVar5 = __alldiv((longlong)(iVar3 * 1000) * (longlong)*piVar4,1000,0);
    iVar3 = piVar1[0x10];
    *piVar2 = *piVar2 + iVar5;
    param_2 = (int *)((int)param_2 + iVar3);
  } while (param_1 != (int *)0x0);
  if (param_2 != (int *)0x0) {
    uVar6 = __allmul(*piVar2,*piVar2 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar6,(int)param_2 * 1000,(int)param_2 * 1000 >> 0x1f);
    *piVar2 = iVar3;
  }
  return piVar2;
}

