// FUN_00885380 @ 00885380 body=[[00885380, 00885431] [00885435, 0088557d] [00885581, 008855ab] [008855af, 008855d9] [008855dd, 008855fc] [00885600, 00885616] [0088561a, 00885634] [00885638, 0088570d] [00885711, 00885732] [00885736, 0088575b] [0088575f, 0088577e] [00885782, 0088579c] [008857a0, 008857eb] [008857ef, 0088582e] [00885832, 00885846]]


undefined1 * FUN_00885380(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_00000020;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  undefined4 *local_d0;
  undefined1 local_cc [4];
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b88065;
  local_10 = ExceptionList;
  local_14 = (undefined4 *)0x0;
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
  ExceptionList = &local_10;
  iVar2 = FUN_008852b0();
  if (piVar1[0x4d] == *(int *)(iVar2 + 4)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    FUN_00409350("CHANGE_CONTROLLER_EFFECT",0x18);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_44,local_f0);
    local_8._0_1_ = 3;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("WHERE",5);
    local_8._0_1_ = 5;
    (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 8;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_cc,uVar3);
    local_8._0_1_ = 9;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[1] = local_44;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      local_14 = puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      local_d0 = puVar5 + 9;
      *local_d0 = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0xc;
      FUN_009a97b0();
    }
    local_8._0_1_ = 9;
    local_14 = puVar5;
    FUN_009e6810(local_30,&local_14);
    local_8._0_1_ = 0xd;
    FUN_009adb70();
    if (local_c8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xe;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 0xf;
    FUN_008852b0();
    FUN_0055dd40();
    local_8._0_1_ = 0x10;
    FUN_00988fa0();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 0x13;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x12;
    FUN_009e6810(local_30,&param_2);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

