// FUN_00690df0 @ 00690df0 body=[[00690df0, 00690e67] [00690e70, 00690eb5]]


void FUN_00690df0(int *param_1,int *param_2)

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
      iVar2 = *(int *)(*param_1 + 0x19c);
      piVar3 = piVar4;
      if ((*(int *)(iVar1 + 0x19c) < iVar2) ||
         ((*(int *)(iVar1 + 0x19c) <= iVar2 &&
          (*(uint *)(iVar1 + 0x198) <= *(uint *)(*param_1 + 0x198))))) {
        while( true ) {
          iVar2 = piVar3[-1];
          if ((*(int *)(iVar1 + 0x19c) < *(int *)(iVar2 + 0x19c)) ||
             ((*(int *)(iVar1 + 0x19c) <= *(int *)(iVar2 + 0x19c) &&
              (*(uint *)(iVar1 + 0x198) <= *(uint *)(iVar2 + 0x198))))) break;
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

