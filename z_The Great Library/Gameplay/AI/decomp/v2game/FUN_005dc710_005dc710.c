// FUN_005dc710 @ 005dc710 body=[[005dc710, 005dc7b4]]


int * FUN_005dc710(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 local_c [4];
  int local_8;
  
  piVar2 = param_1;
  piVar6 = (int *)*in_EAX;
  *param_1 = 0;
  param_1 = (int *)0x0;
  if (piVar6 == (int *)0x0) {
    return piVar2;
  }
  do {
    piVar1 = (int *)*piVar6;
    local_8 = piVar1[0x10];
    piVar6 = (int *)piVar6[2];
    piVar3 = (int *)(**(code **)(*piVar1 + 0x44))(local_c);
    iVar4 = __alldiv((longlong)(local_8 * 1000) * (longlong)*piVar3,1000,0);
    iVar5 = piVar1[0x10];
    *piVar2 = *piVar2 + iVar4;
    param_1 = (int *)((int)param_1 + iVar5);
  } while (piVar6 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    uVar7 = __allmul(*piVar2,*piVar2 >> 0x1f,1000,0);
    iVar5 = __alldiv(uVar7,(int)param_1 * 1000,(int)param_1 * 1000 >> 0x1f);
    *piVar2 = iVar5;
  }
  return piVar2;
}

