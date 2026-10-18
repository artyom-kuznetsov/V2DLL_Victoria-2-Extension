// FUN_007cf9f0 @ 007cf9f0 body=[[007cf9f0, 007cfa67] [007cfa70, 007cfab5]]


void FUN_007cf9f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    local_8 = (int)piVar4 - (int)param_1;
    do {
      iVar2 = *piVar4;
      iVar1 = *(int *)(*param_1 + 0x144);
      piVar3 = piVar4;
      if ((iVar1 < *(int *)(iVar2 + 0x144)) ||
         ((iVar1 <= *(int *)(iVar2 + 0x144) &&
          (*(uint *)(*param_1 + 0x140) <= *(uint *)(iVar2 + 0x140))))) {
        while( true ) {
          iVar1 = piVar3[-1];
          if ((*(int *)(iVar1 + 0x144) < *(int *)(iVar2 + 0x144)) ||
             ((*(int *)(iVar1 + 0x144) <= *(int *)(iVar2 + 0x144) &&
              (*(uint *)(iVar1 + 0x140) <= *(uint *)(iVar2 + 0x140))))) break;
          *piVar3 = iVar1;
          piVar3 = piVar3 + -1;
        }
        *piVar3 = iVar2;
      }
      else {
        FID_conflict__memcpy(piVar4 + (1 - (local_8 >> 2)),param_1,(local_8 >> 2) * 4);
        *param_1 = iVar2;
      }
      local_8 = local_8 + 4;
      piVar4 = piVar4 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

