// FUN_00ada0f0 @ 00ada0f0 body=[[00ada0f0, 00ada13c]]


void FUN_00ada0f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*param_1 + iVar3 * 4);
      (**(code **)(*piVar2 + 8))();
      (**(code **)*piVar2)(1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_1 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_1);
    *param_1 = 0;
  }
  return;
}

