// FUN_004418d0 @ 004418d0 body=[[004418d0, 0044198a]]


void FUN_004418d0(int param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  if (param_1 < 0) {
    iVar3 = 0;
  }
  else {
    FUN_00401000(0x447a1fff);
    iVar3 = FUN_00b31c00();
    if (param_1 <= iVar3) goto LAB_00441907;
  }
  param_1 = iVar3;
LAB_00441907:
  if (*(int *)(in_EAX + 0xd0) != param_1) {
    *(int *)(in_EAX + 0xd0) = param_1;
    piVar1 = *(int **)(*(int *)(in_EAX + 0x34) + 0x94);
    FUN_00401000(0x47c35040);
    iVar3 = FUN_00b31c00();
    iVar3 = __alldiv((longlong)iVar3 * (longlong)param_1,1000,0);
    FUN_00401000(0x43fa4001);
    iVar2 = FUN_00b31c00();
    (**(code **)(*piVar1 + 0x5c))((iVar2 + iVar3) / 1000);
  }
  return;
}

