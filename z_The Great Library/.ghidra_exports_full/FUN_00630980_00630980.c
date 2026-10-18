// FUN_00630980 @ 00630980 body=[[00630980, 00630a17] [00630a20, 00630a86]]


void FUN_00630980(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_c;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    local_c = (int)piVar4 - (int)param_1;
    do {
      iVar1 = *piVar4;
      if ((((iVar1 != param_3) || (*param_1 == param_3)) &&
          ((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20) ||
           (*(int *)(*(int *)(*param_1 + 0x156c) + 0x14) == *(int *)(param_3 + 0x20))))) &&
         (piVar3 = piVar4,
         *(int *)(*(int *)(*param_1 + 0x156c) + 0xc) <= *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))) {
        do {
          iVar2 = piVar3[-1];
          if ((iVar1 != param_3) || (iVar2 == param_3)) {
            if (((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20)) ||
                (*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == *(int *)(param_3 + 0x20))) &&
               (*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) <= *(int *)(*(int *)(iVar1 + 0x156c) + 0xc)
               )) goto LAB_00630a6b;
          }
          *piVar3 = iVar2;
          piVar3 = piVar3 + -1;
        } while( true );
      }
      FID_conflict__memcpy(piVar4 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
      piVar3 = param_1;
LAB_00630a6b:
      local_c = local_c + 4;
      piVar4 = piVar4 + 1;
      *piVar3 = iVar1;
    } while (piVar4 != param_2);
  }
  return;
}

