// FUN_008af810 @ 008af810 body=[[008af810, 008af945]]


int * FUN_008af810(int *param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_20;
  int local_18;
  
  *param_1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x20) >> 2;
  local_20 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x20) + local_20 * 4);
      iVar4 = 0;
      iVar5 = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2;
      if (0 < iVar5) {
        do {
          cVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 8) + iVar4 * 4) + 0x18))(param_2);
          if (cVar1 == '\0') goto LAB_008af896;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      *param_1 = *param_1 + *(int *)(*(int *)(*(int *)(in_ECX + 0x20) + local_20 * 4) + 0x20);
LAB_008af896:
      local_20 = local_20 + 1;
    } while (local_20 < iVar2);
  }
  piVar6 = *(int **)(in_ECX + 8);
  do {
    if ((piVar6 < *(int **)(in_ECX + 8)) || (*(int **)(in_ECX + 0xc) <= piVar6)) {
      return param_1;
    }
    iVar2 = *piVar6;
    iVar3 = piVar6[1] - iVar2 >> 2;
    local_20 = 0;
    local_18 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = *(int *)(iVar2 + local_18 * 4);
        iVar4 = 0;
        iVar5 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 2;
        if (0 < iVar5) {
          do {
            cVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + iVar4 * 4) + 0x18))(param_2);
            if (cVar1 == '\0') goto LAB_008af925;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
        iVar2 = *piVar6;
        local_20 = local_20 + *(int *)(*(int *)(iVar2 + local_18 * 4) + 0x20);
        local_18 = local_18 + 1;
      } while (local_18 < iVar3);
    }
LAB_008af925:
    *param_1 = *param_1 + local_20;
    piVar6 = piVar6 + 4;
  } while( true );
}

