// FUN_004de400 @ 004de400 body=[[004de400, 004de46d] [004de470, 004de4f2]]


/* WARNING: Removing unreachable block (ram,0x004de42b) */
/* WARNING: Removing unreachable block (ram,0x004de430) */
/* WARNING: Removing unreachable block (ram,0x004de445) */

void FUN_004de400(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_14 [4];
  
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x11c)) {
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x118);
  }
  local_14[2] = *(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 5;
  if (0 < local_14[2]) {
    local_14[3] = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x108) + 8 + local_14[3]);
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + 0x18 + local_14[3]);
      piVar4 = *(int **)(param_1 + 0x11c);
      local_14[0] = iVar2;
      local_14[1] = iVar3;
      if ((local_14 < piVar4) && (piVar5 = *(int **)(param_1 + 0x118), piVar5 <= local_14)) {
        if (piVar4 == *(int **)(param_1 + 0x120)) {
          FUN_00810820();
        }
        puVar1 = (undefined4 *)(*(uint *)(param_1 + 0x118) + ((int)local_14 - (int)piVar5 >> 3) * 8)
        ;
        puVar6 = *(undefined4 **)(param_1 + 0x11c);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar1;
          puVar6[1] = puVar1[1];
        }
      }
      else {
        if (piVar4 == *(int **)(param_1 + 0x120)) {
          FUN_00810820();
        }
        piVar4 = *(int **)(param_1 + 0x11c);
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar2;
          piVar4[1] = iVar3;
        }
      }
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 8;
      local_14[3] = local_14[3] + 0x20;
      local_14[2] = local_14[2] + -1;
    } while (local_14[2] != 0);
  }
  return;
}

