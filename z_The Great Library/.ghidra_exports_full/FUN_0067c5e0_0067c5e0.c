// FUN_0067c5e0 @ 0067c5e0 body=[[0067c5e0, 0067c695]]


void FUN_0067c5e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    local_8 = (int)piVar4 - (int)param_1;
    do {
      iVar1 = *piVar4;
      if ((*(char *)(*param_1 + 0x20) < *(char *)(iVar1 + 0x20)) ||
         (piVar3 = piVar4, *(float *)(iVar1 + 0x18) < *(float *)(*param_1 + 0x18))) {
        FID_conflict__memcpy(piVar4 + (1 - (local_8 >> 2)),param_1,(local_8 >> 2) * 4);
        *param_1 = iVar1;
      }
      else {
        while( true ) {
          iVar2 = piVar3[-1];
          if ((*(char *)(iVar1 + 0x20) <= *(char *)(iVar2 + 0x20)) &&
             (*(float *)(iVar2 + 0x18) <= *(float *)(iVar1 + 0x18))) break;
          *piVar3 = iVar2;
          piVar3 = piVar3 + -1;
        }
        *piVar3 = iVar1;
      }
      local_8 = local_8 + 4;
      piVar4 = piVar4 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

