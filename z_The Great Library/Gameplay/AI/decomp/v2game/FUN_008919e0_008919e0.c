// FUN_008919e0 @ 008919e0 body=[[008919e0, 00891abb] [00891abf, 00891b16] [00891b1a, 00891b3c] [00891b40, 00891b8a] [00891b8e, 00891baf] [00891bb3, 00891c05] [00891c09, 00891c48] [00891c4c, 00891c60]]


/* WARNING: Removing unreachable block (ram,0x00891b7f) */
/* WARNING: Removing unreachable block (ram,0x00891ba7) */
/* WARNING: Removing unreachable block (ram,0x00891b34) */

undefined1 * FUN_008919e0(undefined1 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint in_stack_00000020;
  uint local_78;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87911;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_008852b0();
  local_24 = *(undefined4 *)(param_2 + 8);
  puVar1 = (uint *)FUN_0042c350();
  if (((*puVar1 < *(uint *)puVar1[1]) || (((uint *)puVar1[1])[1] <= *puVar1)) &&
     (iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_18 * 4),
     0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("CREATE_VASSAL_EFFECT",0x14);
    local_8._0_1_ = 2;
    FUN_009a8ee0(local_38,local_54);
    local_8._0_1_ = 4;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 5;
    FUN_0055dd40();
    local_8._0_1_ = 6;
    FUN_009a9980();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    FUN_00409350("TARGET_COUNTRY",0xe);
    local_8._0_1_ = 7;
    FUN_0055dd40();
    local_8._0_1_ = 8;
    FUN_009a9980();
    local_8._0_1_ = 4;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_14 = 1;
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

