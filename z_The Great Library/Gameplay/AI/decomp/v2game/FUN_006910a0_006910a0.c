// FUN_006910a0 @ 006910a0 body=[[006910a0, 006911af]]


void FUN_006910a0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    do {
      iVar1 = *piVar4;
      iVar3 = *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c);
      if (*(int *)(*(int *)(*param_1 + 0xbcc) + 0x28c) + *(int *)(*param_1 + 0xea0) <
          iVar3 + *(int *)(iVar1 + 0xea0)) {
        iVar3 = (int)piVar4 - (int)param_1 >> 2;
        FID_conflict__memcpy(piVar4 + (1 - iVar3),param_1,iVar3 * 4);
        *param_1 = iVar1;
      }
      else {
        piVar6 = piVar4;
        if (*(int *)(*(int *)(piVar4[-1] + 0xbcc) + 0x28c) + *(int *)(piVar4[-1] + 0xea0) <
            iVar3 + *(int *)(iVar1 + 0xea0)) {
          iVar3 = piVar4[-1];
          piVar5 = piVar4;
          piVar2 = piVar4 + -1;
          do {
            piVar6 = piVar2;
            *piVar5 = iVar3;
            iVar3 = piVar6[-1];
            piVar5 = piVar6;
            piVar2 = piVar6 + -1;
          } while (*(int *)(*(int *)(iVar3 + 0xbcc) + 0x28c) + *(int *)(iVar3 + 0xea0) <
                   *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0));
        }
        *piVar6 = iVar1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != param_2);
  }
  return;
}

