// FUN_004dea30 @ 004dea30 body=[[004dea30, 004dea9c]]


int * FUN_004dea30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar2 = (param_1[1] - iVar1) / 0x160;
  iVar4 = 0;
  if (0 < iVar2) {
    piVar3 = (int *)(iVar1 + 0x80);
    do {
      if (((piVar3[0x2e] == 0) && (*piVar3 != 0)) && (*(int *)(*piVar3 + 8) == param_2)) {
        return (int *)(iVar4 * 0x160 + iVar1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x58;
    } while (iVar4 < iVar2);
  }
  return param_1 + 4;
}

