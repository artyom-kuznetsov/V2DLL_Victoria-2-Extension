// FUN_00726ba0 @ 00726ba0 body=[[00726ba0, 00726bcd] [00726bd0, 00726c52]]


void FUN_00726ba0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_8;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar1 = *piVar5;
      iVar3 = *(int *)(*(int *)(iVar1 + 0x28) + 8);
      if (*(int *)(*(int *)(*param_1 + 0x28) + 8) < iVar3) {
        iVar3 = (int)piVar5 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar5 + (1 - iVar3),param_1,iVar3 * 4);
        *param_1 = iVar1;
      }
      else {
        local_8 = piVar5;
        if (*(int *)(*(int *)(piVar5[-1] + 0x28) + 8) < iVar3) {
          iVar3 = piVar5[-1];
          piVar2 = piVar5 + -1;
          do {
            piVar4 = piVar2;
            *local_8 = iVar3;
            iVar3 = piVar4[-1];
            piVar2 = piVar4 + -1;
            local_8 = piVar4;
          } while (*(int *)(*(int *)(iVar3 + 0x28) + 8) < *(int *)(*(int *)(iVar1 + 0x28) + 8));
        }
        *local_8 = iVar1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}

