// FUN_00892430 @ 00892430 body=[[00892430, 0089254a] [0089254e, 0089268b] [0089268f, 008926b0] [008926b4, 008926de] [008926e2, 00892707] [0089270b, 0089272a] [0089272e, 0089274b] [0089274f, 0089279a] [0089279e, 008927dd] [008927e1, 008927f5]]


/* WARNING: Removing unreachable block (ram,0x00892740) */

undefined1 * FUN_00892430(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint in_stack_00000020;
  uint local_d4;
  uint local_b8;
  uint local_9c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68fb9;
  local_10 = ExceptionList;
  local_14 = (undefined4 *)0x0;
  local_8 = 0;
  iVar4 = *(int *)(in_ECX + 0x20);
  if ((((int)((double)((*(int *)(iVar4 + 0x1d0) + -43800000) / 0x18) / 365.0) < 2) ||
      (1 < (int)((double)((*(int *)(iVar4 + 0x1d4) + -43800000) / 0x18) / 365.0))) ||
     ((int)((double)((*(int *)(iVar4 + 0x1d0) + -43800000) / 0x18) / 365.0) < 2)) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("IDEOLOGY_ENABLED",0x10);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_28,local_74);
    local_8._0_1_ = 3;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfbf14,4);
    local_8._0_1_ = 5;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 8;
    puVar2 = (undefined4 *)FUN_009a8ee0(local_3c,uVar1);
    local_8._0_1_ = 9;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[1] = local_28;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      local_14 = puVar3;
      FUN_00408ed0();
      *puVar3 = &PTR_FUN_00e38f08;
      puVar3[9] = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 0xc;
      FUN_009a97b0();
    }
    local_8._0_1_ = 9;
    local_14 = puVar3;
    FUN_009e6810(local_58,&local_14);
    local_8._0_1_ = 0xd;
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

