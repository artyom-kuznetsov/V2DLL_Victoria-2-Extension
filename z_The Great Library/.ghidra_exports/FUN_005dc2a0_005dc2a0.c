// FUN_005dc2a0 @ 005dc2a0  (requested 005DC2A0, first bytes: 55 8B EC 0F 57 C0 F2 0F)


int * FUN_005dc2a0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  FUN_00401000(0x3f000000);
  iVar4 = FUN_00b31c00();
  piVar1 = (int *)*param_1;
  *param_2 = iVar4;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar3 = (**(code **)(*piVar2 + 0x38))();
    if (cVar3 != '\0') {
      iVar5 = iVar4;
      for (piVar2 = (int *)piVar2[0xe]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        iVar5 = iVar5 + *(int *)(*piVar2 + 0x3c);
      }
      *param_2 = *param_2 + iVar5;
    }
  }
  return param_2;
}

