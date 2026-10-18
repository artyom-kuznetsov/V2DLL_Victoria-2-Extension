// FUN_007ce3c0 @ 007ce3c0 body=[[007ce3c0, 007ce437] [007ce440, 007ce485]]


void FUN_007ce3c0(int *param_1,int *param_2)

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
      iVar1 = *(int *)(*param_1 + 0x124);
      piVar3 = piVar4;
      if ((iVar1 < *(int *)(iVar2 + 0x124)) ||
         ((iVar1 <= *(int *)(iVar2 + 0x124) &&
          (*(uint *)(*param_1 + 0x120) <= *(uint *)(iVar2 + 0x120))))) {
        while( true ) {
          iVar1 = piVar3[-1];
          if ((*(int *)(iVar1 + 0x124) < *(int *)(iVar2 + 0x124)) ||
             ((*(int *)(iVar1 + 0x124) <= *(int *)(iVar2 + 0x124) &&
              (*(uint *)(iVar1 + 0x120) <= *(uint *)(iVar2 + 0x120))))) break;
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

