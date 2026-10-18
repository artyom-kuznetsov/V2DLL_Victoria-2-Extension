// FUN_00795a50 @ 00795a50 body=[[00795a50, 00795ae1]]


void FUN_00795a50(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_2;
  iVar1 = param_2[7];
  iVar2 = param_2[6];
  iVar5 = FUN_00795b80(param_3);
  piVar3 = (int *)*piVar4;
  iVar5 = (iVar1 - iVar2) / 0x28 - iVar5;
  if (iVar5 < 1) {
    if (*(char *)((int)piVar3 + 0x4f) != '\0') {
      (**(code **)(*piVar3 + 0x38))();
    }
    param_3 = 0;
  }
  else {
    if (*(char *)((int)piVar3 + 0x4f) == '\0') {
      (**(code **)(*piVar3 + 0x34))();
    }
    param_3 = iVar5 * 1000;
  }
  iVar1 = *(int *)(*piVar4 + 0x54);
  param_2 = (int *)0x3e8;
  FUN_0043d130(&param_2);
  (**(code **)(iVar1 + 0x14))();
  return;
}

