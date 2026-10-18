// FUN_0078f7d0 @ 0078f7d0 body=[[0078f7d0, 0078f86f]]


int * FUN_0078f7d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int local_14;
  int local_10;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 600) + 0xdc) + 0xec);
  piVar3 = (int *)0x0;
  iVar4 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if ((piVar2 != *(int **)(param_1 + 600)) && (piVar2[0x31] != (*(int **)(param_1 + 600))[0x31]))
    {
      local_10 = piVar2[0x30];
      cVar5 = FUN_0051af10(1);
      if ((cVar5 != '\0') && ((**(code **)(*piVar2 + 0x5c))(&local_14), iVar4 < local_14)) {
        piVar3 = piVar2;
        iVar4 = local_14;
      }
    }
  }
  return piVar3;
}

