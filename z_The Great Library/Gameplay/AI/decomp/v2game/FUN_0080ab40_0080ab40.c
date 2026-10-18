// FUN_0080ab40 @ 0080ab40 body=[[0080ab40, 0080ac0e] [0080ac14, 0080ac52] [0080ac56, 0080acb3] [0080acb7, 0080accd] [0080acd1, 0080ad9e] [0080ada2, 0080adc0] [0080adc4, 0080adda] [0080adde, 0080adf4] [0080adf8, 0080ae0a]]


void FUN_0080ab40(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined1 local_ec [12];
  undefined4 uStack_e0;
  uint *local_dc;
  uint *local_d8;
  uint *puStack_d4;
  undefined4 local_c4 [5];
  uint local_b0;
  undefined1 *local_a8;
  undefined **local_a4 [5];
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  int local_74;
  char local_6c;
  undefined4 local_68 [5];
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58f89;
  local_10 = ExceptionList;
  puStack_d4 = (uint *)0x80ab74;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  puStack_d4 = (uint *)0x80ab8a;
  FUN_004367c0();
  local_8._0_1_ = 1;
  iVar1 = *(int *)(DAT_012586e0 + 0x5c);
  if (iVar1 == 1) {
    puStack_d4 = (uint *)0xffffffff;
    local_d8 = (uint *)0x0;
    local_dc = local_4c;
    uStack_e0 = 0x80abaa;
    FUN_00408ed0();
  }
  puStack_d4 = (uint *)0x15;
  local_d8 = (uint *)0xe1b528;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_dc = (uint *)0x80abc7;
  FUN_00409350();
  local_8._0_1_ = 2;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 2;
  puStack_d4 = local_68;
  if (iVar1 == 2) {
    local_d8 = local_4c;
    local_dc = local_c4;
    uStack_e0 = 0x80ac28;
    local_8._0_1_ = uVar3;
    local_dc = (uint *)FUN_00436de0();
    puStack_d4 = (uint *)0xffffffff;
    local_d8 = (uint *)0x0;
    local_8._0_1_ = 4;
    uStack_e0 = 0x80ac3a;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_b0) {
      puStack_d4 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080ac53;
      FUN_00aae91b();
    }
  }
  else {
    puStack_d4 = local_2c;
    local_d8 = (uint *)0x80abe2;
    local_dc = (uint *)FUN_00988f20();
    puStack_d4 = (uint *)0xffffffff;
    local_d8 = (uint *)0x0;
    local_8._0_1_ = 3;
    uStack_e0 = 0x80abf2;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_b0) {
      puStack_d4 = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080ac0f;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 2;
  local_a8 = local_ec;
  local_d8 = (uint *)0xf;
  local_dc = (uint *)0x0;
  local_ec[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_a4,local_2c,1);
  iVar1 = param_1;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (local_6c == '\0') {
    puStack_d4 = (uint *)0x4;
    local_30 = *(int *)(param_1 + 0x1900) - *(int *)(param_1 + 0x18fc) >> 4;
    local_d8 = (uint *)&local_30;
    local_dc = (uint *)0x80ad12;
    FUN_00993720();
    piVar2 = *(int **)(iVar1 + 0x1900);
    for (piVar4 = *(int **)(iVar1 + 0x18fc); piVar4 != piVar2; piVar4 = piVar4 + 4) {
      puStack_d4 = (uint *)0x4;
      local_d8 = (uint *)&param_1;
      param_1 = piVar4[1] - *piVar4 >> 3;
      local_dc = (uint *)0x80ad3e;
      FUN_00993720();
      if (0 < param_1) {
        puStack_d4 = (uint *)(param_1 * 8);
        local_d8 = (uint *)*piVar4;
        local_dc = (uint *)0x80ad5b;
        FUN_00993720();
      }
    }
    local_a4[0] = &PTR_FUN_00e37dc0;
    if (local_74 != 0) {
      local_d8 = (uint *)0x80ad79;
      PHYSFS_close();
      local_74 = 0;
    }
    local_a4[0] = &PTR_FUN_00e3b540;
    if (0xf < local_7c) {
      puStack_d4 = (uint *)local_90;
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080ad9f;
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    if (0xf < local_18) {
      puStack_d4 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080adc1;
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_38) {
      puStack_d4 = (uint *)local_4c[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080addb;
      FUN_00aae91b();
    }
    if (local_54 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    puStack_d4 = (uint *)local_68[0];
  }
  else {
    puStack_d4 = (uint *)0x80aca6;
    FUN_00992d60();
    if (0xf < local_18) {
      puStack_d4 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080acb4;
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_38) {
      puStack_d4 = (uint *)local_4c[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (uint *)&UNK_0080acce;
      FUN_00aae91b();
    }
    if (local_54 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    puStack_d4 = (uint *)local_68[0];
  }
  local_18 = 0xf;
  local_1c = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  local_d8 = (uint *)&UNK_0080adf5;
  FUN_00aae91b();
}

