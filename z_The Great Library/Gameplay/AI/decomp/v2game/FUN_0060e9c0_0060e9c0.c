// FUN_0060e9c0 @ 0060e9c0 body=[[0060e9c0, 0060eaae]]


void FUN_0060e9c0(int *param_1,int *param_2,int param_3,int param_4)

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
      if (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + *param_1 * 0x10) + param_3 * 4) <
          *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar1 * 0x10) + param_3 * 4)) {
        iVar3 = (int)piVar5 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar5 + (1 - iVar3),param_1,iVar3 * 4);
        *param_1 = iVar1;
      }
      else {
        local_8 = piVar5;
        if (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + piVar5[-1] * 0x10) + param_3 * 4) <
            *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar1 * 0x10) + param_3 * 4)) {
          iVar3 = piVar5[-1];
          piVar2 = piVar5 + -1;
          do {
            piVar4 = piVar2;
            *local_8 = iVar3;
            iVar3 = piVar4[-1];
            piVar2 = piVar4 + -1;
            local_8 = piVar4;
          } while (*(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar3 * 0x10) + param_3 * 4) <
                   *(int *)(*(int *)(*(int *)(param_4 + 0xbc) + iVar1 * 0x10) + param_3 * 4));
        }
        *local_8 = iVar1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}

