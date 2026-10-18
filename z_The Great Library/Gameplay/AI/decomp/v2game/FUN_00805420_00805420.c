// FUN_00805420 @ 00805420 body=[[00805420, 0080543c] [00805440, 00805492]]


void FUN_00805420(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_1 + 1;
  if (piVar4 != param_2) {
    do {
      iVar1 = *piVar4;
      if (iVar1 < *param_1) {
        iVar3 = (int)piVar4 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar4 + (1 - iVar3),param_1,iVar3 * 4);
        *param_1 = iVar1;
      }
      else {
        iVar3 = piVar4[-1];
        piVar2 = piVar4;
        while (iVar1 < iVar3) {
          *piVar2 = iVar3;
          iVar3 = piVar2[-2];
          piVar2 = piVar2 + -1;
        }
        *piVar2 = iVar1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

