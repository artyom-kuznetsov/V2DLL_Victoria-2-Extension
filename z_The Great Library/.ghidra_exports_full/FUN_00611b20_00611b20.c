// FUN_00611b20 @ 00611b20 body=[[00611b20, 00611bdc]]


void FUN_00611b20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    local_c = (int)piVar6 - (int)param_1;
    do {
      iVar2 = *piVar6;
      iVar3 = *(int *)(*(int *)(*param_1 + 0x30) + 0x1c);
      iVar1 = *(int *)(*(int *)(iVar2 + 0x30) + 0x1c);
      piVar5 = piVar6;
      if ((iVar1 < iVar3) ||
         ((iVar1 <= iVar3 &&
          (*(uint *)(*(int *)(iVar2 + 0x30) + 0x18) <= *(uint *)(*(int *)(*param_1 + 0x30) + 0x18)))
         )) {
        while( true ) {
          iVar3 = *(int *)(piVar5[-1] + 0x30);
          iVar4 = *(int *)(iVar3 + 0x1c);
          iVar1 = *(int *)(*(int *)(iVar2 + 0x30) + 0x1c);
          if ((iVar1 < iVar4) ||
             ((iVar1 <= iVar4 &&
              (*(uint *)(*(int *)(iVar2 + 0x30) + 0x18) <= *(uint *)(iVar3 + 0x18))))) break;
          *piVar5 = piVar5[-1];
          piVar5 = piVar5 + -1;
        }
        *piVar5 = iVar2;
      }
      else {
        FID_conflict__memcpy(piVar6 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
        *param_1 = iVar2;
      }
      local_c = local_c + 4;
      piVar6 = piVar6 + 1;
    } while (piVar6 != param_2);
  }
  return;
}

