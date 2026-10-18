// FUN_006a8210 @ 006a8210 body=[[006a8210, 006a82c5] [006a82c9, 006a82e7] [006a82eb, 006a83c6] [006a83ca, 006a83ec] [006a83f0, 006a840b] [006a8410, 006a84cd] [006a84d1, 006a84ec] [006a84f0, 006a85fb] [006a85ff, 006a86f4] [006a86f8, 006a8716] [006a871a, 006a8730] [006a8734, 006a8750] [006a8754, 006a877d] [006a8781, 006a879c] [006a87a5, 006a87c1] [006a87c5, 006a87da]]


undefined1 * FUN_006a8210(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_c4 [20];
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  uint local_58;
  undefined1 local_50 [4];
  undefined1 *local_4c;
  undefined1 *local_48;
  uint local_44;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8b724;
  local_10 = ExceptionList;
  local_8 = 0;
  local_8c = 0;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8 = 1;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0bfa8,4);
  local_8._0_1_ = 2;
  FUN_00988f20();
  local_8._0_1_ = 3;
  FUN_00408ed0();
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 1;
  local_44 = 0xf;
  local_48 = (undefined1 *)0x0;
  local_58 = local_58 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009a8ee0(local_6c,local_a8);
  local_8._0_1_ = 4;
  local_34 = *(undefined4 **)(param_1 + 0x38);
  local_38 = *(undefined4 *)(param_1 + 0x34);
  if ((local_34 == (undefined4 *)0x0) || (local_34 == *(undefined4 **)(DAT_012588e8 + 0xb60))) {
    local_38 = *(undefined4 *)(param_1 + 0x3c);
    local_34 = *(undefined4 **)(param_1 + 0x40);
  }
  if (local_34 == (undefined4 *)0x0) {
    local_38 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_34 = *(undefined4 **)(DAT_012588e8 + 0xb60);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("COUNTRY",7);
  local_8._0_1_ = 5;
  FUN_0055dd40();
  local_8._0_1_ = 6;
  local_3c = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_3c == (undefined4 *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  FUN_009e6810(local_30,&local_14);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_14 = *(int *)(param_1 + 0x24);
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (local_14 != 0) {
    do {
      local_8._0_1_ = 4;
      puVar2 = (undefined4 *)FUN_009a8ee0(local_50,local_14 + 0x1c);
      local_8._0_1_ = 8;
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 9;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = local_6c;
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        local_3c = puVar3;
        FUN_00408ed0();
        *puVar3 = &PTR_FUN_00e38f08;
        local_34 = puVar3 + 9;
        *local_34 = *puVar2;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        local_8._0_1_ = 0xb;
        FUN_009a97b0();
      }
      local_8._0_1_ = 8;
      local_3c = puVar3;
      FUN_009e6810(local_14,&local_3c);
      local_8._0_1_ = 0xc;
      FUN_009adb70();
      local_8._0_1_ = 4;
      puVar1 = local_4c;
      if (local_4c != (undefined1 *)0x0) {
        while( true ) {
          if (puVar1 == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puVar1 + 0x14)) break;
          *(undefined4 *)(puVar1 + 0x14) = 0xf;
          *(undefined4 *)(puVar1 + 0x10) = 0;
          *puVar1 = 0;
          puVar1 = puVar1 + 0x20;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14 = *(int *)(local_14 + 0x3c);
      local_4c = (undefined1 *)0x0;
      local_48 = (undefined1 *)0x0;
      local_44 = 0;
    } while (local_14 != 0);
    local_14 = 0;
  }
  local_8._0_1_ = 4;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8c = 1;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_0043b700(DAT_012588e8 + 0xb0c,local_c4);
    local_8._0_1_ = 0xd;
    FUN_00408ed0();
    local_8._0_1_ = 4;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00408ed0();
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (iVar4 == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0xf;
      if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
      local_8._0_1_ = 4;
      DAT_0125b5e0 = puVar2;
    }
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8._0_1_ = 0x10;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9638,2);
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
  }
  else {
    FUN_00408ed0();
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 0x14;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9638,2);
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    FUN_00988f20();
    local_8._0_1_ = 0x17;
  }
  FUN_00408ed0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = local_88 & 0xffffff00;
  local_78 = 0;
  local_74 = 0xf;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = local_58 & 0xffffff00;
  local_48 = (undefined1 *)0x0;
  local_44 = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30[0] = local_30[0] & 0xffffff00;
  local_20 = 0;
  local_1c = 0xf;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0x18);
  FUN_009adb70();
  if (local_68 == (undefined1 *)0x0) {
    local_68 = (undefined1 *)0x0;
    local_64 = (undefined1 *)0x0;
    local_60 = 0;
    if (local_94 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  while( true ) {
    if (local_68 == local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < *(uint *)(local_68 + 0x14)) break;
    *(undefined4 *)(local_68 + 0x14) = 0xf;
    *(undefined4 *)(local_68 + 0x10) = 0;
    *local_68 = 0;
    local_68 = local_68 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

