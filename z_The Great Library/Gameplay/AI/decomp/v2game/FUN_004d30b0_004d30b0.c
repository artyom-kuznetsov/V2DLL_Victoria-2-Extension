// FUN_004d30b0 @ 004d30b0 body=[[004d30b0, 004d3126] [004d3130, 004d31ca] [004d31ce, 004d31ed] [004d31f1, 004d320b] [004d320f, 004d3229] [004d322d, 004d32fe] [004d3302, 004d3321] [004d3325, 004d333f] [004d3343, 004d335d] [004d3361, 004d3444] [004d3448, 004d3466] [004d346a, 004d3486] [004d348a, 004d34a8]]


undefined1 * FUN_004d30b0(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  char local_b8 [32];
  undefined1 *local_98;
  uint local_94;
  undefined4 local_8c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b516c8;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_8c = 1;
  local_11 = '\x01';
  iVar2 = *(int *)(in_ECX + 0x30);
  do {
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_18 = *(int *)(iVar2 + 0x224);
    if (local_11 == '\0') {
      FUN_00448740();
    }
    else {
      local_11 = '\0';
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    FUN_004f3800();
    local_8._0_1_ = 2;
    FUN_00988fa0();
    local_8._0_1_ = 3;
    FUN_00988f20();
    local_8._0_1_ = 4;
    FUN_00448aa0();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    uVar4 = local_34 >> 8;
    local_34 = uVar4 << 8;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (*(int *)(param_2 + 300) == *(int *)(DAT_012588e8 + 0xb60)) {
      local_20 = 0xf;
      local_24 = 0;
      local_34 = uVar4 << 8;
      FUN_00409350();
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      local_8._0_1_ = 6;
      local_8._1_3_ = 0;
      pcVar3 = __itoa(*(int *)(iVar2 + 0x20),local_b8,10);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_8._0_1_ = 7;
      FUN_00988fa0();
      local_8._0_1_ = 8;
      FUN_00988f20();
      local_8._0_1_ = 9;
      FUN_00448aa0();
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350();
      local_8 = 10;
      uVar6 = *(uint *)(iVar2 + 0x168) + *(uint *)(iVar2 + 0x158);
      local_94 = *(uint *)(iVar2 + 0x170) + *(uint *)(iVar2 + 0x160);
      uVar4 = *(uint *)(iVar2 + 0x1d8) - uVar6;
      uVar5 = uVar4 + local_94;
      local_98 = &stack0xffffff30;
      __alldiv(uVar5 * 0x8000,
               (((*(int *)(iVar2 + 0x1dc) -
                 (*(int *)(iVar2 + 0x16c) + *(int *)(iVar2 + 0x15c) +
                 (uint)CARRY4(*(uint *)(iVar2 + 0x168),*(uint *)(iVar2 + 0x158)))) -
                (uint)(*(uint *)(iVar2 + 0x1d8) < uVar6)) +
                *(int *)(iVar2 + 0x174) + *(int *)(iVar2 + 0x164) +
                (uint)CARRY4(*(uint *)(iVar2 + 0x170),*(uint *)(iVar2 + 0x160)) +
               (uint)CARRY4(uVar4,local_94)) * 0x8000 | uVar5 >> 0x11,DAT_00f0b168,DAT_00f0b16c);
      FUN_009c83c0(local_88);
      local_8._0_1_ = 0xb;
      FUN_00988f20();
      local_8._0_1_ = 0xc;
      FUN_00448aa0();
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_58 = 0xf;
    local_5c = 0;
    local_74 = 0xf;
    local_78 = 0;
    iVar2 = local_18;
  } while( true );
}

