// FUN_007ccfe0 @ 007ccfe0 body=[[007ccfe0, 007cd065]]


void FUN_007ccfe0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x58) < *(int *)(*param_1 + 0x58)) {
        iVar2 = (int)piVar5 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar5 + (1 - iVar2),param_1,iVar2 * 4);
        *param_1 = iVar1;
      }
      else {
        iVar2 = piVar5[-1];
        piVar4 = piVar5;
        piVar3 = piVar5;
        if (*(int *)(iVar1 + 0x58) < *(int *)(iVar2 + 0x58)) {
          do {
            piVar4 = piVar3 + -1;
            *piVar3 = iVar2;
            iVar2 = piVar3[-2];
            piVar3 = piVar4;
          } while (*(int *)(iVar1 + 0x58) < *(int *)(iVar2 + 0x58));
        }
        *piVar4 = iVar1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}

