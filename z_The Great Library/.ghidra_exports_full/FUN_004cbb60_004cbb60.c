// FUN_004cbb60 @ 004cbb60 body=[[004cbb60, 004cbcbb] [004cbcbf, 004cbcd9] [004cbcdd, 004cbcfd] [004cbd01, 004cbd0e] [004cbd12, 004cbd2b] [004cbd2f, 004cbd43]]


undefined1 * FUN_004cbb60(undefined1 *param_1)

{
  int in_ECX;
  int iVar1;
  byte bVar2;
  char *local_b8;
  undefined4 *local_b4;
  char *local_b0;
  uint *puStack_ac;
  undefined4 local_9c [5];
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_2c [4];
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b82504;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  bVar2 = *(int *)(in_ECX + 0x98) != 0;
  local_1c = 1;
  if (*(int *)(in_ECX + 0xb4) != 0) {
    bVar2 = bVar2 + 1;
  }
  if (*(int *)(in_ECX + 0xd0) != 0) {
    bVar2 = bVar2 + 1;
  }
  if (*(int *)(in_ECX + 0xec) != 0) {
    bVar2 = bVar2 + 1;
  }
  if (1 < bVar2) {
    local_2c[0] = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_8 = 1;
    puStack_ac = (uint *)0x4;
    local_b0 = (char *)0x4cbbea;
    FUN_004237e0();
    iVar1 = in_ECX + 0x94;
    local_18 = (undefined1 *)0x4;
    do {
      if (*(int *)(iVar1 + 4) != 0) {
        puStack_ac = (uint *)0x4cbc06;
        FUN_004d61d0();
      }
      iVar1 = iVar1 + 0x1c;
      local_18 = (undefined1 *)((int)local_18 + -1);
    } while (local_18 != (undefined1 *)0x0);
    local_18 = (undefined1 *)&local_b8;
    local_b8 = (char *)0x0;
    local_b4 = (undefined4 *)0x0;
    local_b0 = (char *)0x0;
    FUN_005196b0(local_48,local_2c);
    local_8._0_1_ = 2;
    local_b0 = *(char **)(*(int *)(DAT_012586dc + 0x30) + 0x470);
    puStack_ac = (uint *)0x1;
    local_18 = (undefined1 *)&local_b0;
    local_b4 = local_9c;
    local_b8 = (char *)0x4cbc5e;
    local_b4 = (undefined4 *)FUN_009c8c30();
    puStack_ac = local_48;
    local_b0 = "COUNTRIES";
    local_b8 = "BONUS";
    local_8._0_1_ = 3;
    puStack_ac = (uint *)FUN_0043ec10(local_64);
    local_8._0_1_ = 4;
    local_b0 = (char *)0x4cbc97;
    local_b4 = (undefined4 *)FUN_00988fa0();
    puStack_ac = (uint *)0xffffffff;
    local_b0 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,5);
    local_b8 = (char *)0x4cbca9;
    FUN_00448aa0();
    if (0xf < local_6c) {
      puStack_ac = (uint *)local_80;
                    /* WARNING: Subroutine does not return */
      local_b0 = &UNK_004cbcbc;
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_50) {
      puStack_ac = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = &UNK_004cbcda;
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_88) {
      puStack_ac = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = &UNK_004cbcfe;
      FUN_00aae91b();
    }
    if (0xf < local_34) {
      puStack_ac = (uint *)local_48[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = &UNK_004cbd0f;
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (local_2c[0] != 0) {
      puStack_ac = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = &UNK_004cbd2c;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

