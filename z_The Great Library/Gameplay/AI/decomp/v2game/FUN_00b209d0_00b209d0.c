// FUN_00b209d0 @ 00b209d0 body=[[00b209d0, 00b20a89]]


void FUN_00b209d0(int *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[2] == 0) {
    iVar3 = (*DAT_013f3aac)(*param_1,param_1[1] * 4 + 8,0);
    pcVar4 = param_2;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    iVar5 = (*DAT_013f3aa8)(pcVar4 + (1 - (int)(param_2 + 1)),0);
    if ((iVar3 != 0) && (*param_1 = iVar3, iVar5 != 0)) {
      iVar3 = iVar5 - (int)param_2;
      do {
        cVar2 = *param_2;
        param_2[iVar3] = cVar2;
        param_2 = param_2 + 1;
      } while (cVar2 != '\0');
      *(int *)(*param_1 + param_1[1] * 4) = iVar5;
      param_1[1] = param_1[1] + 1;
      return;
    }
    param_1[2] = (int)"Out of memory";
    *(undefined4 *)(*param_1 + param_1[1] * 4) = 0;
    param_1 = (int *)*param_1;
    iVar3 = *param_1;
    piVar6 = param_1;
    while (iVar3 != 0) {
      (*DAT_013f3ab0)(iVar3);
      piVar1 = piVar6 + 1;
      piVar6 = piVar6 + 1;
      iVar3 = *piVar1;
    }
    (*DAT_013f3ab0)(param_1);
  }
  return;
}

