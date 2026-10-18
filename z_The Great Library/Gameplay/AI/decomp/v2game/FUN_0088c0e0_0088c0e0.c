// FUN_0088c0e0 @ 0088c0e0 body=[[0088c0e0, 0088c16d] [0088c171, 0088c1c6] [0088c1ca, 0088c262] [0088c266, 0088c28b] [0088c28f, 0088c2ae] [0088c2b2, 0088c2cc] [0088c2d0, 0088c31b] [0088c31f, 0088c33a]]


/* WARNING: Removing unreachable block (ram,0x0088c2c4) */

undefined1 * FUN_0088c0e0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint in_stack_00000020;
  uint local_a4;
  uint local_88;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b693a8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FUN_0088bf80();
  if (iVar2 != 0) {
    for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) +
                           0xbd4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == iVar2) {
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        FUN_00409350("KILL_LEADER_EFFECT",0x12);
        local_8._0_1_ = 1;
        FUN_009a8ee0(local_24,local_5c);
        local_8._0_1_ = 3;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8514,2);
        local_8._0_1_ = 4;
        local_2c = 0xf;
        local_30 = 0;
        local_40 = local_40 & 0xffffff00;
        FUN_00409350(&DAT_00dfbf14,4);
        local_8._0_1_ = 5;
        FUN_00988fa0();
        local_8._0_1_ = 6;
        FUN_00988f20();
        local_8._0_1_ = 7;
        FUN_009a9980();
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 3;
        local_2c = 0xf;
        local_30 = 0;
        local_40 = local_40 & 0xffffff00;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_009adb70();
        if (local_20 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        goto joined_r0x0088c32c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
joined_r0x0088c32c:
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

