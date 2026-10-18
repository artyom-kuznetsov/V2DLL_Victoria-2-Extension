// FUN_0080a7b0 @ 0080a7b0 body=[[0080a7b0, 0080a8c6] [0080a8ca, 0080a91f] [0080a923, 0080a939] [0080a93d, 0080aac5] [0080aac9, 0080aae4] [0080aae8, 0080aafe] [0080ab02, 0080ab1e] [0080ab22, 0080ab32]]


void FUN_0080a7b0(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 local_f0 [12];
  undefined4 uStack_e4;
  uint *local_e0;
  uint *local_dc;
  uint *puStack_d8;
  undefined4 local_c4 [5];
  uint local_b0;
  undefined4 local_a8 [5];
  uint local_94;
  undefined **local_8c [5];
  uint local_78;
  undefined4 local_68;
  uint local_64;
  int local_5c;
  char local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58fdc;
  local_10 = ExceptionList;
  puStack_d8 = (uint *)0x80a7e7;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  puStack_d8 = (uint *)0x80a7fd;
  FUN_004367c0();
  local_8._0_1_ = 1;
  iVar1 = *(int *)(DAT_012586e0 + 0x5c);
  if (iVar1 == 1) {
    puStack_d8 = (uint *)0xffffffff;
    local_dc = (uint *)0x0;
    local_e0 = local_50;
    uStack_e4 = 0x80a820;
    FUN_00408ed0();
  }
  puStack_d8 = (uint *)0x16;
  local_dc = (uint *)0xe1b510;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_e0 = (uint *)0x80a83c;
  FUN_00409350();
  local_8._0_1_ = 2;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 2;
  puStack_d8 = local_a8;
  if (iVar1 == 2) {
    local_dc = local_50;
    local_e0 = local_c4;
    uStack_e4 = 0x80a898;
    local_8._0_1_ = uVar2;
    local_e0 = (uint *)FUN_00436de0();
    puStack_d8 = (uint *)0xffffffff;
    local_dc = (uint *)0x0;
    local_8._0_1_ = 4;
    uStack_e4 = 0x80a8aa;
    FUN_00408ed0();
    if (0xf < local_b0) {
      puStack_d8 = (uint *)local_c4[0];
      goto LAB_0080a8c2;
    }
  }
  else {
    puStack_d8 = local_34;
    local_dc = (uint *)0x80a85a;
    local_e0 = (uint *)FUN_00988f20();
    puStack_d8 = (uint *)0xffffffff;
    local_dc = (uint *)0x0;
    local_8._0_1_ = 3;
    uStack_e4 = 0x80a86a;
    FUN_00408ed0();
    if (0xf < local_b0) {
      puStack_d8 = (uint *)local_c4[0];
LAB_0080a8c2:
      local_8._0_1_ = 2;
                    /* WARNING: Subroutine does not return */
      local_dc = (uint *)&UNK_0080a8c7;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 2;
  local_14 = local_f0;
  local_dc = (uint *)0xf;
  local_e0 = (uint *)0x0;
  local_f0[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_8c,local_34,1);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (local_54 == '\0') {
    puStack_d8 = (uint *)0x4;
    local_dc = (uint *)&DAT_00defc7c;
    local_e0 = (uint *)0x80a96a;
    FUN_00993720();
    puVar3 = (undefined4 *)&DAT_00f09320;
    do {
      local_18 = *puVar3;
      local_14 = (undefined1 *)puVar3[1];
      puStack_d8 = (uint *)0x1;
      local_dc = (uint *)((int)&local_14 + 1);
      local_e0 = (uint *)0x80a98c;
      FUN_00993720();
      puStack_d8 = (uint *)0x2;
      local_dc = (uint *)((int)&local_18 + 2);
      local_e0 = (uint *)0x80a99d;
      FUN_00993720();
      puStack_d8 = (uint *)0x2;
      local_dc = &local_18;
      local_e0 = (uint *)0x80a9ae;
      FUN_00993720();
      puStack_d8 = (uint *)0x1;
      local_dc = &local_14;
      local_e0 = (uint *)0x80a9bf;
      FUN_00993720();
      puStack_d8 = (uint *)0x1;
      local_dc = (uint *)((int)&local_14 + 2);
      local_e0 = (uint *)0x80a9d0;
      FUN_00993720();
      puStack_d8 = (uint *)0x1;
      local_dc = (uint *)((int)&local_14 + 3);
      local_e0 = (uint *)0x80a9e1;
      FUN_00993720();
      puVar3 = puVar3 + 2;
    } while ((int)puVar3 < 0xf09338);
    puStack_d8 = (uint *)0x4;
    local_dc = (uint *)&DAT_00defc80;
    local_e0 = (uint *)0x80a9fe;
    FUN_00993720();
    puVar3 = &DAT_00f09338;
    do {
      local_14 = (undefined1 *)puVar3[1];
      local_18 = *puVar3;
      puStack_d8 = (uint *)0x1;
      local_dc = (uint *)((int)&local_14 + 1);
      local_e0 = (uint *)0x80aa1f;
      FUN_00993720();
      puStack_d8 = (uint *)0x2;
      local_dc = (uint *)((int)&local_18 + 2);
      local_e0 = (uint *)0x80aa30;
      FUN_00993720();
      puStack_d8 = (uint *)0x2;
      local_dc = &local_18;
      local_e0 = (uint *)0x80aa41;
      FUN_00993720();
      puStack_d8 = (uint *)0x1;
      local_dc = &local_14;
      local_e0 = (uint *)0x80aa52;
      FUN_00993720();
      puStack_d8 = (uint *)0x1;
      local_dc = (uint *)((int)&local_14 + 2);
      local_e0 = (uint *)0x80aa63;
      FUN_00993720();
      puStack_d8 = (uint *)0x1;
      local_dc = (uint *)((int)&local_14 + 3);
      local_e0 = (uint *)0x80aa74;
      FUN_00993720();
      puVar3 = puVar3 + 2;
    } while ((int)puVar3 < 0xf09358);
    puStack_d8 = (uint *)0x4;
    local_dc = (uint *)&DAT_00defc84;
    local_e0 = (uint *)0x80aa91;
    FUN_00993720();
    local_8c[0] = &PTR_FUN_00e37dc0;
    if (local_5c != 0) {
      puStack_d8 = (uint *)local_5c;
      local_dc = (uint *)0x80aaa8;
      PHYSFS_close();
      local_5c = 0;
    }
    local_8c[0] = &PTR_FUN_00e3b540;
    if (0xf < local_64) {
      puStack_d8 = (uint *)local_78;
                    /* WARNING: Subroutine does not return */
      local_dc = (uint *)&UNK_0080aac6;
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    if (0xf < local_20) {
      puStack_d8 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_dc = (uint *)&UNK_0080aae5;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      puStack_d8 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_dc = (uint *)&UNK_0080aaff;
      FUN_00aae91b();
    }
    if (local_94 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    puStack_d8 = (uint *)local_a8[0];
  }
  else {
    puStack_d8 = (uint *)0x80a912;
    FUN_00992d60();
    if (0xf < local_20) {
      puStack_d8 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_dc = (uint *)&UNK_0080a920;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      puStack_d8 = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_dc = (uint *)&UNK_0080a93a;
      FUN_00aae91b();
    }
    if (local_94 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    puStack_d8 = (uint *)local_a8[0];
  }
  local_20 = 0xf;
  local_24 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  local_dc = (uint *)&UNK_0080ab1f;
  FUN_00aae91b();
}

