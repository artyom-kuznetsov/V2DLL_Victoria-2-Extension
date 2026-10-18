// FUN_007a2480 @ 007a2480 body=[[007a2480, 007a2552] [007a2556, 007a2594] [007a2598, 007a25be] [007a25c2, 007a26ff] [007a2703, 007a2880]]


/* WARNING: Removing unreachable block (ram,0x007a25b5) */

void FUN_007a2480(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iStack_80;
  int local_68;
  uint uStack_58;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6bb5c;
  local_14 = ExceptionList;
  bVar1 = false;
  if (*(int *)(*(int *)(param_1 + 0xcc) + 0x75c) == 5) {
    ExceptionList = &local_14;
    *(undefined1 *)(param_1 + 0xd0) = 1;
    FUN_00409350();
    local_c = 0;
    FUN_009a8ee0();
    local_c._0_1_ = 1;
    FUN_00475500();
    FUN_009a9880();
    local_c._0_1_ = 2;
    FUN_007a1f20();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_009adb70();
    if (local_68 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x50))();
    FUN_007a0f80();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x48) + 0x18) + 0x34))();
    (**(code **)(**(int **)(param_1 + 0x34) + 0x50))();
    if (*(char *)(param_1 + 200) != '\0') {
      (**(code **)(**(int **)(param_1 + 0x30) + 0x5c))();
      iVar3 = 6;
      do {
        iVar2 = FUN_00aae9af();
        local_c = 4;
        if (iVar2 != 0) {
          FUN_007a0660();
        }
        local_c = 0xffffffff;
        (**(code **)(**(int **)(param_1 + 0x30) + 0x10))();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      (**(code **)(**(int **)(param_1 + 0x30) + 0x6c))();
      (**(code **)(**(int **)(param_1 + 0x30) + 0x50))();
      iStack_80 = 0xf;
      do {
        iVar3 = FUN_00aae9af();
        local_c = 5;
        if (iVar3 != 0) {
          uStack_58 = 0xf;
          FUN_00409350();
          local_c = CONCAT31(local_c._1_3_,6);
          bVar1 = true;
          FUN_007a03c0();
        }
        local_c = 0xffffffff;
        if (bVar1) {
          bVar1 = false;
          if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_58 = 0xf;
        }
        (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
        iStack_80 = iStack_80 + -1;
      } while (iStack_80 != 0);
      (**(code **)(**(int **)(param_1 + 0x34) + 0x50))();
    }
    if (*(char *)(param_1 + 200) == '\0') {
      iVar3 = FUN_00aae9af();
      local_c = 8;
      if (iVar3 != 0) {
        FUN_0072d4e0();
        local_c._0_1_ = 9;
        FUN_00408ed0();
        local_c._0_1_ = 10;
        FUN_00408ed0();
        local_c._0_1_ = 0xb;
        FUN_00409350();
        local_c._0_1_ = 0xc;
        FUN_00408ed0(&DAT_00f0c4e8,0,0xffffffff);
        local_c = CONCAT31(local_c._1_3_,8);
        FUN_00a02b80(iVar3);
      }
      local_c = 0xffffffff;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x38) + 0x18))();
    }
    FUN_007a30b0();
  }
  ExceptionList = local_14;
  return;
}

