// FUN_0098f250 @ 0098f250 body=[[0098f250, 0098f278] [0098f280, 0098f31f]]


void FUN_0098f250(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    iVar2 = (int)piVar4 - (int)param_1;
    do {
      iVar1 = *piVar4;
      piVar3 = piVar4;
      if (*(float *)(*(int *)(iVar1 + 0x13c) + 0x98) <=
          *(float *)(*(int *)(*param_1 + 0x13c) + 0x98)) {
        while( true ) {
          if (*(float *)(*(int *)(iVar1 + 0x13c) + 0x98) <=
              *(float *)(*(int *)(piVar3[-1] + 0x13c) + 0x98)) break;
          *piVar3 = piVar3[-1];
          piVar3 = piVar3 + -1;
        }
        *piVar3 = iVar1;
      }
      else {
        FID_conflict__memcpy(piVar4 + (1 - (iVar2 >> 2)),param_1,(iVar2 >> 2) * 4);
        *param_1 = iVar1;
      }
      iVar2 = iVar2 + 4;
      piVar4 = piVar4 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

