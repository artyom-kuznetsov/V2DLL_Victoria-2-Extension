// FUN_005459a0 @ 005459a0 body=[[005459a0, 005459cd] [005459d0, 00545a17]]


void FUN_005459a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int local_8;
  
  iVar1 = *(int *)(in_ECX + 0x58);
  iVar6 = *(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) >> 2;
  iVar4 = 0;
  local_8 = 0;
  if (0 < iVar6) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x15ac) + local_8 * 4);
      piVar3 = *(int **)(iVar2 + 0xc);
      piVar5 = *(int **)(iVar2 + 8);
      if (piVar5 != piVar3) {
        do {
          if (*piVar5 == iVar1) break;
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar3);
        if (piVar5 != piVar3) {
          *(int *)(param_2 + iVar4 * 4) = iVar2;
          iVar4 = iVar4 + 1;
          if (param_3 <= iVar4) {
            return;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar6);
  }
  return;
}

