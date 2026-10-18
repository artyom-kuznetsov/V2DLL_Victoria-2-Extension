// FUN_00555c70 @ 00555c70 body=[[00555c70, 00555c9d] [00555ca0, 00555cf8] [00555d00, 00555d31]]


void FUN_00555c70(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    do {
      iVar1 = *piVar3;
      if (*(int *)(*param_1 + 0x308) < *(int *)(iVar1 + 0x308)) {
        iVar2 = (int)piVar3 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar3 + (1 - iVar2),param_1,iVar2 * 4);
        *param_1 = iVar1;
      }
      else {
        iVar2 = piVar3[-1];
        piVar5 = piVar3;
        piVar4 = piVar3;
        if (*(int *)(iVar2 + 0x308) < *(int *)(iVar1 + 0x308)) {
          do {
            piVar5 = piVar4 + -1;
            *piVar4 = iVar2;
            iVar2 = piVar4[-2];
            piVar4 = piVar5;
          } while (*(int *)(iVar2 + 0x308) < *(int *)(iVar1 + 0x308));
        }
        *piVar5 = iVar1;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != param_2);
  }
  return;
}

