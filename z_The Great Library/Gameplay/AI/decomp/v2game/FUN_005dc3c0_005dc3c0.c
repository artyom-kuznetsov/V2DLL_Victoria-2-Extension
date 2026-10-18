// FUN_005dc3c0 @ 005dc3c0 body=[[005dc3c0, 005dc45c]]


void FUN_005dc3c0(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_c [4];
  int local_8;
  
  FUN_00401000(0x3f000000);
  iVar5 = FUN_00b31c00();
  piVar2 = (int *)*param_1;
  *param_2 = iVar5;
  local_8 = iVar5;
  while (piVar2 != (int *)0x0) {
    piVar3 = *(int **)(*piVar2 + 0x38);
    piVar2 = (int *)piVar2[2];
    iVar1 = iVar5;
    while (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar5 = local_8;
      if (*(int *)(*(int *)(iVar4 + 0x38) + 0x24) == *(int *)(param_3 + 0x24)) {
        piVar6 = (int *)FUN_005c0160(local_c);
        iVar1 = iVar1 + *piVar6;
        iVar5 = local_8;
      }
    }
    *param_2 = *param_2 + iVar1;
  }
  return;
}

