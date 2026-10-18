// FUN_0050e710 @ 0050e710 body=[[0050e710, 0050e752]]


int FUN_0050e710(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c0);
  do {
    if (piVar1 == (int *)0x0) {
      return *(int *)(param_1 + 0xbe4);
    }
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    iVar3 = (**(code **)(*piVar2 + 0x18))();
  } while (iVar3 != 0x2a2);
  return piVar2[4];
}

