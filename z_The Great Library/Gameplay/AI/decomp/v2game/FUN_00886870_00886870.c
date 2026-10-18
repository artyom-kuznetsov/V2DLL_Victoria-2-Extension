// FUN_00886870 @ 00886870 body=[[00886870, 00886905] [00886909, 00886a6c] [00886a70, 00886a9a] [00886a9e, 00886ac5] [00886ac9, 00886aeb] [00886aef, 00886b0e] [00886b12, 00886b28] [00886b2c, 00886b46] [00886b4a, 00886c13] [00886c17, 00886c38] [00886c3c, 00886c5e] [00886c62, 00886c7e] [00886c82, 00886c9c] [00886ca0, 00886d04] [00886d08, 00886d1f] [00886d23, 00886d4f] [00886d53, 00886d92] [00886d96, 00886daa]]


undefined1 * FUN_00886870(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  uint in_stack_00000020;
  uint local_f0;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  undefined1 local_c8 [4];
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b69610;
  local_10 = ExceptionList;
  local_8 = 0;
  local_30 = (int *)in_ECX[9];
  ExceptionList = &local_10;
  cVar2 = (**(code **)(*local_30 + 0x24))();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    FUN_00409350("ADD_SUB_UNIT_EFFECT",0x13);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_44,local_e4);
    local_8._0_1_ = 3;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("WHERE",5);
    local_8._0_1_ = 5;
    (**(code **)(*in_ECX + 0x28))(local_60,param_2);
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 9;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_c8,uVar3);
    local_8._0_1_ = 10;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xb;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = local_44;
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      param_2 = puVar5;
      FUN_00408ed0(local_2c,0,0xffffffff);
      *puVar5 = &PTR_FUN_00e38f08;
      puVar5[9] = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 0xd;
      FUN_009a97b0();
    }
    local_8._0_1_ = 10;
    param_2 = puVar5;
    FUN_009e6810(local_2c,&param_2);
    local_8._0_1_ = 0xe;
    FUN_009adb70();
    if (local_c4 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xf;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00e01db8,4);
    local_8._0_1_ = 0x10;
    (**(code **)(*local_30 + 0x18))();
    local_8._0_1_ = 0x11;
    FUN_00988fa0();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0x14;
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      param_2 = (undefined4 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x13;
    FUN_009e6810(local_2c,&param_2);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_18 = 0xf;
    local_1c = 0;
    uVar1 = local_2c[0] >> 8;
    local_2c[0] = uVar1 << 8;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = uVar1 << 8;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0x15;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x16;
    FUN_00988f20();
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x17);
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

