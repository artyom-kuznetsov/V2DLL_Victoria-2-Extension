// FUN_005dc330 @ 005dc330  (requested 005DC330, first bytes: 55 8B EC 83 EC 0C 0F 57)


void FUN_005dc330(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_c [4];
  int local_8;
  
  FUN_00401000(0x3f000000);
  local_8 = FUN_00b31c00();
  piVar4 = (int *)*param_1;
  *param_2 = local_8;
  iVar5 = local_8;
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar2 = *(int *)(*piVar4 + 0x38);
    iVar3 = iVar5;
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      piVar4 = (int *)FUN_005c0160(local_c);
      iVar5 = iVar5 + *piVar4;
      iVar3 = local_8;
    }
    *param_2 = *param_2 + iVar5;
    piVar4 = piVar1;
    iVar5 = iVar3;
  }
  return;
}

