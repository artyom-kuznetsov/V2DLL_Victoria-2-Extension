// FUN_00441990 @ 00441990 body=[[00441990, 00441a4a]]


void FUN_00441990(int param_1)

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
    if (param_1 <= iVar3) goto LAB_004419c7;
  }
  param_1 = iVar3;
LAB_004419c7:
  if (*(int *)(in_EAX + 0xd4) != param_1) {
    *(int *)(in_EAX + 0xd4) = param_1;
    piVar1 = *(int **)(*(int *)(in_EAX + 0x38) + 0x94);
    FUN_00401000(0x47c35040);
    iVar3 = FUN_00b31c00();
    iVar3 = __alldiv((longlong)iVar3 * (longlong)param_1,1000,0);
    FUN_00401000(0x43fa4001);
    iVar2 = FUN_00b31c00();
    (**(code **)(*piVar1 + 0x5c))((iVar2 + iVar3) / 1000);
  }
  return;
}

