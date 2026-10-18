// FUN_0045d2d0 @ 0045d2d0 body=[[0045d2d0, 0045d355]]


void FUN_0045d2d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(*param_1 + 4) < *(int *)(iVar1 + 4)) {
        iVar2 = (int)piVar5 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar5 + (1 - iVar2),param_1,iVar2 * 4);
        *param_1 = iVar1;
      }
      else {
        iVar2 = piVar5[-1];
        piVar4 = piVar5;
        piVar3 = piVar5;
        if (*(int *)(iVar2 + 4) < *(int *)(iVar1 + 4)) {
          do {
            piVar4 = piVar3 + -1;
            *piVar3 = iVar2;
            iVar2 = piVar3[-2];
            piVar3 = piVar4;
          } while (*(int *)(iVar2 + 4) < *(int *)(iVar1 + 4));
        }
        *piVar4 = iVar1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}

