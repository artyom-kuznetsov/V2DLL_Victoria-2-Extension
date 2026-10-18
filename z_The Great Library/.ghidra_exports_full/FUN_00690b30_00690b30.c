// FUN_00690b30 @ 00690b30 body=[[00690b30, 00690ba7] [00690bb0, 00690bf5]]


void FUN_00690b30(int *param_1,int *param_2)

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
      iVar2 = *(int *)(*param_1 + 0x1a4);
      piVar3 = piVar4;
      if ((*(int *)(iVar1 + 0x1a4) < iVar2) ||
         ((*(int *)(iVar1 + 0x1a4) <= iVar2 &&
          (*(uint *)(iVar1 + 0x1a0) <= *(uint *)(*param_1 + 0x1a0))))) {
        while( true ) {
          iVar2 = piVar3[-1];
          if ((*(int *)(iVar1 + 0x1a4) < *(int *)(iVar2 + 0x1a4)) ||
             ((*(int *)(iVar1 + 0x1a4) <= *(int *)(iVar2 + 0x1a4) &&
              (*(uint *)(iVar1 + 0x1a0) <= *(uint *)(iVar2 + 0x1a0))))) break;
          *piVar3 = iVar2;
          piVar3 = piVar3 + -1;
        }
        *piVar3 = iVar1;
      }
      else {
        FID_conflict__memcpy(piVar4 + (1 - (local_8 >> 2)),param_1,(local_8 >> 2) * 4);
        *param_1 = iVar1;
      }
      local_8 = local_8 + 4;
      piVar4 = piVar4 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

