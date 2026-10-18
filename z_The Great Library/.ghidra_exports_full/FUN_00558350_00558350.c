// FUN_00558350 @ 00558350 body=[[00558350, 00558457]]


void FUN_00558350(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_c;
  
  if ((param_1 != param_2) && (piVar7 = param_1 + 1, piVar7 != param_2)) {
    local_c = (int)piVar7 - (int)param_1;
    do {
      iVar2 = *piVar7;
      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*param_1 + 0xc) * 4) + 0xe88);
      iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0xe88);
      iVar5 = *(int *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x14);
      piVar6 = piVar7;
      if ((iVar1 < iVar5) ||
         ((iVar1 <= iVar5 && (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar3 + 0x10))))) {
        while( true ) {
          iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(piVar6[-1] + 0xc) * 4) +
                          0xe88);
          iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0xe88)
          ;
          iVar5 = *(int *)(iVar3 + 0x14);
          iVar1 = *(int *)(iVar4 + 0x14);
          if ((iVar1 < iVar5) ||
             ((iVar1 <= iVar5 && (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar3 + 0x10))))) break;
          *piVar6 = piVar6[-1];
          piVar6 = piVar6 + -1;
        }
        *piVar6 = iVar2;
      }
      else {
        FID_conflict__memcpy(piVar7 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
        *param_1 = iVar2;
      }
      local_c = local_c + 4;
      piVar7 = piVar7 + 1;
    } while (piVar7 != param_2);
  }
  return;
}

