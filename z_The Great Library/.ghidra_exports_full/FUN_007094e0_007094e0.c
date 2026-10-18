// FUN_007094e0 @ 007094e0 body=[[007094e0, 007095ba]]


void FUN_007094e0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  if (param_3 < param_2) {
    while( true ) {
      iVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      local_8 = (*(int **)(iVar1 + 0x26c))[1];
      piVar4 = &param_2;
      if (**(int **)(iVar1 + 0x26c) <= local_8) {
        piVar4 = &local_8;
      }
      local_8 = *(int *)(*(int *)(iVar1 + 0x26c) + 8);
      piVar3 = &param_2;
      if (*piVar4 <= local_8) {
        piVar3 = &local_8;
      }
      piVar5 = *(int **)(*param_4 + 0x26c);
      local_8 = piVar5[1];
      piVar4 = &param_2;
      if (*piVar5 <= local_8) {
        piVar4 = &local_8;
      }
      local_8 = *(int *)(*(int *)(*param_4 + 0x26c) + 8);
      piVar5 = &param_2;
      if (*piVar4 <= local_8) {
        piVar5 = &local_8;
      }
      if (*piVar5 <= *piVar3) break;
      *(int *)(param_1 + param_2 * 4) = iVar1;
      param_2 = iVar2;
      if (iVar2 <= param_3) {
        *(int *)(param_1 + iVar2 * 4) = *param_4;
        return;
      }
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

