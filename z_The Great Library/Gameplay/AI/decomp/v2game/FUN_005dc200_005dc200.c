// FUN_005dc200 @ 005dc200  (requested 005DC200, first bytes: 55 8B EC 51 0F 57 C0 F2)


int * FUN_005dc200(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(in_EAX + 4);
  FUN_00401000(0x3f000000);
  iVar5 = FUN_00b31c00();
  piVar2 = (int *)*param_1;
  *param_2 = iVar5;
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    cVar4 = (**(code **)(*piVar3 + 0x38))();
    if ((cVar4 != '\0') && (piVar3[0x31] == iVar1)) {
      iVar6 = iVar5;
      for (piVar3 = (int *)piVar3[0xe]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        iVar6 = iVar6 + *(int *)(*piVar3 + 0x3c);
      }
      *param_2 = *param_2 + iVar6;
    }
  }
  return param_2;
}

