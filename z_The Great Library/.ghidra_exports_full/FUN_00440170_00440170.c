// FUN_00440170 @ 00440170 body=[[00440170, 004401fd]]


void FUN_00440170(int param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(in_EAX + 0xa8) != param_1) {
    *(int *)(in_EAX + 0xa8) = param_1;
    piVar1 = *(int **)(*(int *)(in_EAX + 0x84) + 0x94);
    FUN_00401000(0x47c35040);
    iVar2 = FUN_00b31c00();
    iVar2 = __alldiv((longlong)iVar2 * (longlong)param_1,1000,0);
    FUN_00401000(0x43fa4001);
    iVar3 = FUN_00b31c00();
    (**(code **)(*piVar1 + 0x5c))((iVar3 + iVar2) / 1000);
  }
  return;
}

