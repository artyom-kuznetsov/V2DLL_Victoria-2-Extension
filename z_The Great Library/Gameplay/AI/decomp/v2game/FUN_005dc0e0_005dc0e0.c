// FUN_005dc0e0 @ 005dc0e0  (requested 005DC0E0, first bytes: 55 8B EC 51 0F 57 C0 F2)


void FUN_005dc0e0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  FUN_00401000(0x3f000000);
  iVar6 = FUN_00b31c00();
  piVar1 = (int *)*param_1;
  *param_2 = iVar6;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    piVar1 = *(int **)(*piVar1 + 0x38);
    iVar7 = iVar6;
    while (piVar1 != (int *)0x0) {
      piVar3 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar5 = (**(code **)(*piVar3 + 0x24))();
      if (cVar5 == '\0') {
        iVar4 = *(int *)(piVar3[0xe] + 0x244);
      }
      else {
        iVar4 = piVar3[0xf];
      }
      iVar7 = iVar7 + iVar4;
    }
    *param_2 = *param_2 + iVar7;
    piVar1 = piVar2;
  }
  return;
}

