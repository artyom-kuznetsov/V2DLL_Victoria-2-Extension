// FUN_0080ae10 @ 0080ae10 body=[[0080ae10, 0080aedb] [0080aee1, 0080af1c] [0080af20, 0080af54] [0080af58, 0080af6e] [0080af72, 0080af88] [0080af8c, 0080aff8] [0080affc, 0080b012] [0080b016, 0080b030] [0080b049, 0080b107] [0080b10b, 0080b126] [0080b12a, 0080b140] [0080b144, 0080b158]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0080ae10(int param_1)

{
  undefined1 uVar1;
  char *******pppppppcVar2;
  int iVar3;
  undefined1 local_f4 [12];
  undefined4 uStack_e8;
  uint *local_e4;
  uint *local_e0;
  char *******pppppppcStack_dc;
  undefined1 local_c8 [56];
  char local_90;
  undefined4 local_8c [5];
  uint local_78;
  undefined4 local_70 [5];
  uint local_5c;
  int *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 *local_34;
  char *******local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58f39;
  local_10 = ExceptionList;
  pppppppcStack_dc = (char *******)0x80ae44;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  pppppppcStack_dc = (char *******)0x80ae5a;
  FUN_004367c0();
  local_8._0_1_ = 1;
  iVar3 = *(int *)(DAT_012586e0 + 0x5c);
  if (iVar3 == 1) {
    pppppppcStack_dc = (char *******)0xffffffff;
    local_e0 = (uint *)0x0;
    local_e4 = local_50;
    uStack_e8 = 0x80ae7a;
    FUN_00408ed0();
  }
  pppppppcStack_dc = (char *******)0x15;
  local_e0 = (uint *)0xe1b528;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
  local_e4 = (uint *)0x80ae97;
  FUN_00409350();
  local_8._0_1_ = 2;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 2;
  pppppppcStack_dc = (char *******)local_70;
  if (iVar3 == 2) {
    local_e0 = local_50;
    local_e4 = local_8c;
    uStack_e8 = 0x80aef5;
    local_8._0_1_ = uVar1;
    local_e4 = (uint *)FUN_00436de0();
    pppppppcStack_dc = (char *******)0xffffffff;
    local_e0 = (uint *)0x0;
    local_8._0_1_ = 4;
    uStack_e8 = 0x80af07;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_78) {
      pppppppcStack_dc = (char *******)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_e0 = (uint *)&UNK_0080af1d;
      FUN_00aae91b();
    }
  }
  else {
    pppppppcStack_dc = (char *******)local_30;
    local_e0 = (uint *)0x80aeb2;
    local_e4 = (uint *)FUN_00988f20();
    pppppppcStack_dc = (char *******)0xffffffff;
    local_e0 = (uint *)0x0;
    local_8._0_1_ = 3;
    uStack_e8 = 0x80aec2;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_78) {
      pppppppcStack_dc = (char *******)local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_e0 = (uint *)&UNK_0080aedc;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 2;
  if (local_1c < 0x10) {
    pppppppcStack_dc = (char *******)local_30;
  }
  else {
    pppppppcStack_dc = local_30[0];
    pppppppcVar2 = local_30[0];
    if (local_30[0] == (char *******)0x0) goto joined_r0x0080b06c;
  }
  pppppppcVar2 = local_30[0];
  if (*(char *)pppppppcStack_dc != '\0') {
    local_e0 = (uint *)0x80af40;
    iVar3 = PHYSFS_exists();
    pppppppcVar2 = local_30[0];
    if (iVar3 != 0) {
      local_34 = local_f4;
      local_e0 = (uint *)0xf;
      local_e4 = (uint *)0x0;
      local_f4[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_c8,local_30,0);
      local_8._0_1_ = 5;
      if (local_90 != '\0') {
        pppppppcStack_dc = (char *******)0x80afeb;
        FUN_00992d60();
        if (0xf < local_1c) {
          pppppppcStack_dc = local_30[0];
                    /* WARNING: Subroutine does not return */
          local_e0 = (uint *)&UNK_0080aff9;
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
        if (local_3c < 0x10) {
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (local_5c < 0x10) {
            ExceptionList = local_10;
            return 0;
          }
          pppppppcStack_dc = (char *******)local_70[0];
                    /* WARNING: Subroutine does not return */
          local_e0 = (uint *)&UNK_0080b031;
          FUN_00aae91b();
        }
        pppppppcStack_dc = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
        local_e0 = (uint *)&UNK_0080b013;
        FUN_00aae91b();
      }
      pppppppcStack_dc = (char *******)0x4;
      local_e0 = (uint *)&local_14;
      local_14 = 0;
      local_e4 = (uint *)0x80b057;
      FUN_00992f20();
      if (0 < local_14) {
        local_54 = (int *)(param_1 + 0x18fc);
        pppppppcStack_dc = (char *******)0x80b08b;
        FUN_007d8660();
        local_34 = (undefined1 *)0x0;
        if (0 < local_14) {
          iVar3 = 0;
          do {
            pppppppcStack_dc = (char *******)0x4;
            local_e0 = (uint *)&param_1;
            param_1 = 0;
            local_e4 = (uint *)0x80b0a9;
            FUN_00992f20();
            if (0 < param_1) {
              pppppppcStack_dc = (char *******)0x80b0bc;
              FUN_00495920();
              pppppppcStack_dc = (char *******)(param_1 * 8);
              local_e0 = *(uint **)(iVar3 + *local_54);
              local_e4 = (uint *)0x80b0db;
              FUN_00992f20();
            }
            local_34 = (undefined1 *)((int)local_34 + 1);
            iVar3 = iVar3 + 0x10;
          } while ((int)local_34 < local_14);
        }
        pppppppcStack_dc = (char *******)0x80b0fa;
        FUN_00992d60();
        if (0xf < local_1c) {
          pppppppcStack_dc = local_30[0];
                    /* WARNING: Subroutine does not return */
          local_e0 = (uint *)&UNK_0080b108;
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
        if (0xf < local_3c) {
          pppppppcStack_dc = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
          local_e0 = (uint *)&UNK_0080b127;
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_5c) {
          pppppppcStack_dc = (char *******)local_70[0];
                    /* WARNING: Subroutine does not return */
          local_e0 = (uint *)&UNK_0080b141;
          FUN_00aae91b();
        }
        ExceptionList = local_10;
        return 1;
      }
      pppppppcStack_dc = (char *******)0x80b069;
      FUN_00992d60();
      pppppppcVar2 = local_30[0];
    }
  }
joined_r0x0080b06c:
  pppppppcStack_dc = pppppppcVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    local_e0 = (uint *)&UNK_0080af55;
    local_30[0] = pppppppcStack_dc;
    FUN_00aae91b();
  }
  local_30[0] = (char *******)((uint)pppppppcStack_dc & 0xffffff00);
  local_20 = 0;
  local_1c = 0xf;
  if (local_3c < 0x10) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (local_5c < 0x10) {
      ExceptionList = local_10;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    local_e0 = (uint *)&UNK_0080af89;
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  local_e0 = (uint *)&UNK_0080af6f;
  FUN_00aae91b();
}

