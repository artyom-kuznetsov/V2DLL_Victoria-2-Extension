// FUN_005dc180 @ 005dc180  (requested 005DC180, first bytes: 55 8B EC 0F 57 C0 F2 0F)


int * FUN_005dc180(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  param_1 = (int *)*param_1;
  *param_2 = iVar2;
  iVar3 = iVar2;
  if (param_1 != (int *)0x0) {
    do {
      iVar4 = *param_1;
      param_1 = (int *)param_1[2];
      piVar1 = *(int **)(iVar4 + 0x38);
      iVar4 = iVar2;
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        iVar4 = iVar4 + *(int *)(*piVar1 + 0x3c);
      }
      iVar3 = iVar3 + iVar4;
    } while (param_1 != (int *)0x0);
    *param_2 = iVar3;
  }
  return param_2;
}

