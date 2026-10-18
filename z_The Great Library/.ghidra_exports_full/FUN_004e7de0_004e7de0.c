// FUN_004e7de0 @ 004e7de0 body=[[004e7de0, 004e7ec4]]


bool FUN_004e7de0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 300);
  piVar3 = *(int **)(param_1 + 0xa4);
  local_8 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if ((iVar1 <= *(int *)(iVar2 + 0x124)) &&
         ((iVar1 < *(int *)(iVar2 + 0x124) ||
          (*(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x128) < *(uint *)(iVar2 + 0x120))))) {
        if (*(int *)(iVar2 + 0x58) < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x10) / 1000) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x58) /
                  (((*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14) / 1000) * 1000) / 1000) + 1;
        }
        local_8 = local_8 + iVar2;
      }
    } while (piVar3 != (int *)0x0);
    if (local_8 != 0) {
      FUN_004e9130(&local_8);
      FUN_009b7ac0(0x1b);
      return param_1 < local_8;
    }
  }
  return false;
}

