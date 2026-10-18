// FUN_004413f0 @ 004413f0 body=[[004413f0, 00441506] [0044150a, 00441526] [0044152a, 00441549] [0044154d, 0044156a] [00441573, 0044163e] [00441642, 00441654]]


/* WARNING: Removing unreachable block (ram,0x00441562) */

void FUN_004413f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8c;
  uint local_70;
  undefined1 local_4c [20];
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d7ce;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0xcc) != param_2) {
    ExceptionList = &local_10;
    *(int *)(param_1 + 0xcc) = param_2;
    FUN_0043f570(local_4c);
    local_8 = 0;
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
      FUN_00401000();
      iVar1 = FUN_00b31c00();
      if (iVar1 < local_14) {
        FUN_00409350(&DAT_00df8514);
        local_8._0_1_ = 1;
        local_1c = 0xf;
        local_20 = 0;
        local_30 = local_30 & 0xffffff00;
        FUN_00409350(&DAT_00df8510);
        local_8._0_1_ = 2;
        FUN_00988f20();
        local_8._0_1_ = 3;
        uVar2 = FUN_00988f20();
        local_8._0_1_ = 4;
        FUN_00408ed0(uVar2,0);
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_1c = 0xf;
        local_20 = 0;
        local_30 = local_30 & 0xffffff00;
      }
      else {
        FUN_00401000();
        iVar1 = FUN_00b31c00();
        if (local_14 < iVar1) {
          FUN_009885d0();
          local_8._0_1_ = 5;
          FUN_009885d0();
          local_8._0_1_ = 6;
          FUN_00988f20();
          local_8._0_1_ = 7;
          uVar2 = FUN_00988f20();
          local_8._0_1_ = 8;
          FUN_00408ed0(uVar2,0);
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00408ad0();
        }
      }
    }
    FUN_00408ed0(local_4c,0);
    FUN_00a5ecc0(local_4c);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

