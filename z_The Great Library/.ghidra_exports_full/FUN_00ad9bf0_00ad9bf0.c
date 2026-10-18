// FUN_00ad9bf0 @ 00ad9bf0 body=[[00ad9bf0, 00ad9c28]]


int * FUN_00ad9bf0(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_1[1];
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*param_1 + uVar4 * 4);
      iVar3 = (**(code **)(*piVar2 + 4))();
      if (iVar3 == param_2) {
        return piVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return (int *)0x0;
}

