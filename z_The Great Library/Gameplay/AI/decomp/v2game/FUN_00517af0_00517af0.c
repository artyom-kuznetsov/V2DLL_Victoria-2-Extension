// FUN_00517af0 @ 00517af0 body=[[00517af0, 00517c31]]


/* WARNING: Removing unreachable block (ram,0x00517b19) */
/* WARNING: Removing unreachable block (ram,0x00517b20) */

void FUN_00517af0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_24 [4];
  undefined4 local_14;
  int *local_10;
  int local_c;
  
  *(undefined1 *)(param_1 + 0x67c) = 0;
  if (*(int *)(param_1 + 0xda8) != *(int *)(param_1 + 0xdac)) {
    *(int *)(param_1 + 0xdac) = *(int *)(param_1 + 0xda8);
  }
  local_14 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_24[2] = *DAT_012587e4;
  local_10 = DAT_012587e4;
  local_c = 0;
  if (0 < local_24[2]) {
    do {
      iVar4 = *(int *)(local_10[1] + local_c * 4);
      iVar1 = *(int *)(iVar4 + 0x20);
      iVar4 = *(int *)(iVar4 + 0x1c);
      local_24[3] = *(int *)(*(int *)(param_1 + 0xbe8) + iVar1 * 4);
      if (*(int *)(local_24[3] + 0x34) != 0) {
        *(undefined1 *)(param_1 + 0x67c) = 1;
        piVar2 = *(int **)(param_1 + 0xdac);
        local_24[0] = iVar4;
        local_24[1] = iVar1;
        if ((local_24 < piVar2) && (*(int **)(param_1 + 0xda8) <= local_24)) {
          iVar4 = (int)local_24 - (int)*(int **)(param_1 + 0xda8) >> 3;
          if (piVar2 == *(int **)(param_1 + 0xdb0)) {
            FUN_00810820();
          }
          puVar3 = *(undefined4 **)(param_1 + 0xdac);
          if (puVar3 != (undefined4 *)0x0) {
            iVar1 = *(int *)(param_1 + 0xda8);
            *puVar3 = *(undefined4 *)(iVar1 + iVar4 * 8);
            puVar3[1] = *(undefined4 *)(iVar1 + 4 + iVar4 * 8);
          }
        }
        else {
          if (piVar2 == *(int **)(param_1 + 0xdb0)) {
            FUN_00810820();
          }
          piVar2 = *(int **)(param_1 + 0xdac);
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar4;
            piVar2[1] = iVar1;
          }
        }
        *(int *)(param_1 + 0xdac) = *(int *)(param_1 + 0xdac) + 8;
        *(undefined4 *)(local_24[3] + 0x68) = local_14;
      }
      local_c = local_c + 1;
    } while (local_c < local_24[2]);
  }
  return;
}

