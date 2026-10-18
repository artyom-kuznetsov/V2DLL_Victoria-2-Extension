// FUN_00a3f300 @ 00a3f300 body=[[00a3f300, 00a3f378] [00a3f380, 00a3f40b] [00a3f40f, 00a3f41e] [00a3f422, 00a3f443] [00a3f447, 00a3f468] [00a3f46c, 00a3f4a2] [00a3f4a9, 00a3f4c8] [00a3f4cc, 00a3f51c] [00a3f520, 00a3f546] [00a3f54a, 00a3f587] [00a3f58b, 00a3f5ab] [00a3f5af, 00a3f5c7] [00a3f5cb, 00a3f5e7]]


void FUN_00a3f300(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3da69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e40c40;
  local_8 = 7;
  local_18 = (int)(param_1[0x26] - param_1[0x25]) >> 4;
  if (0 < local_18) {
    iVar3 = 0;
    do {
      iVar5 = 0;
      local_14 = (*(int *)(param_1[0x25] + 4 + iVar3) - *(int *)(param_1[0x25] + iVar3)) / 0x74;
      if (0 < local_14) {
        do {
          piVar1 = *(int **)(*(int *)(iVar3 + param_1[0x25]) + 0x20 + iVar5);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          piVar1 = *(int **)(*(int *)(iVar3 + param_1[0x25]) + 0x24 + iVar5);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          piVar1 = *(int **)(*(int *)(iVar3 + param_1[0x25]) + 0x28 + iVar5);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          iVar5 = iVar5 + 0x74;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar3 = iVar3 + 0x10;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar3 = param_1[0x24];
  if (iVar3 != 0) {
    _free(*(void **)(iVar3 + 8));
    _free(*(void **)(iVar3 + 4));
    _free(*(void **)(iVar3 + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  if (param_1[0x48] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x48]);
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  if (param_1[0x44] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x44]);
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  if (param_1[0x40] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x40]);
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  puVar4 = (undefined4 *)param_1[0x3c];
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x3d];
    while( true ) {
      if (puVar4 == puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x3c]);
      }
      if (0xf < (uint)puVar4[5]) break;
      puVar4[5] = 0xf;
      puVar4[4] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar4 = puVar4 + 0xf;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar4);
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar4 = (undefined4 *)param_1[0x38];
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x39];
    for (; puVar4 != puVar2; puVar4 = puVar4 + 0xb) {
      (**(code **)*puVar4)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x38]);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  if ((uint)param_1[0x35] < 0x10) {
    param_1[0x35] = 0xf;
    param_1[0x34] = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (param_1[0x25] != 0) {
      FUN_00a40980(param_1[0x26],param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0x25]);
    }
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if ((uint)param_1[0xf] < 0x10) {
      param_1[0xf] = 0xf;
      param_1[0xe] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      if ((uint)param_1[7] < 0x10) {
        param_1[6] = 0;
        param_1[7] = 0xf;
        *(undefined1 *)(param_1 + 2) = 0;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[2]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x30]);
}

