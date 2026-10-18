// FUN_006f83b0 @ 006f83b0 body=[[006f83b0, 006f85ec] [006f85f0, 006f8617] [006f861b, 006f8651] [006f8655, 006f86a4] [006f86a8, 006f86d4] [006f86d8, 006f8705] [006f8709, 006f8758] [006f875c, 006f878f] [006f8793, 006f89d2] [006f89d6, 006f8a00] [006f8a04, 006f8a40] [006f8a44, 006f8aa4] [006f8aa8, 006f8adb] [006f8adf, 006f8b42] [006f8b46, 006f8bdb]]


void FUN_006f83b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  bool bVar4;
  int iStack_1c4;
  undefined1 local_1b8 [8];
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 local_1a4 [4];
  uint uStack_1a0;
  uint local_190;
  uint uStack_18c;
  uint uStack_184;
  undefined4 local_180;
  undefined4 local_17c;
  uint local_174;
  uint uStack_170;
  uint uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  uint local_13c;
  uint uStack_138;
  uint uStack_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_124 [4];
  uint local_120;
  uint uStack_11c;
  uint uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 auStack_108 [4];
  uint local_104;
  uint uStack_100;
  uint uStack_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_e8;
  uint uStack_e4;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_cc [4];
  uint uStack_c8;
  uint uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  uint uStack_a4;
  undefined4 local_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 local_5c;
  uint uStack_58;
  undefined1 auStack_50 [16];
  undefined1 local_40 [4];
  undefined1 auStack_3c [16];
  undefined1 local_2c [8];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9dc3b;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x1c8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      ExceptionList = &local_14;
      *(bool *)(in_ECX + 0x3c5) = *(char *)(in_ECX + 0x3c5) == '\0';
      if (*(char *)(in_ECX + 0xc5) == '\0') {
        local_160 = 0xf;
        local_164 = 0;
        local_174 = local_174 & 0xffffff00;
        FUN_00409350("PRODUCTION_SHOW_EMPTY_STATES",0x1c);
        local_c = 0xd;
        FUN_009a8ee0(local_2c,&local_174);
        local_c = 0xe;
        iVar1 = FUN_00475500();
        uVar2 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
        local_c = 0xf;
      }
      else {
        local_128 = 0xf;
        local_12c = 0;
        local_13c = local_13c & 0xffffff00;
        FUN_00409350("PRODUCTION_HIDE_EMPTY_STATES",0x1c);
        local_c = 10;
        FUN_009a8ee0(local_40,&local_13c);
        local_c = 0xb;
        iVar1 = FUN_00475500();
        uVar2 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
        local_c = 0xc;
      }
      local_f0 = 0xf;
      local_f4 = 0;
      local_104 = local_104 & 0xffffff00;
      FUN_00409350("show_empty_states",0x11);
      local_c = 0x10;
      local_d4 = 0xf;
      local_d8 = 0;
      local_e8 = local_e8 & 0xffffff00;
      FUN_00409350("invest_buttons",0xe);
      local_c = CONCAT31(local_c._1_3_,0x11);
      piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x34))(auStack_108);
      (**(code **)(*piVar3 + 0xcc))(uVar2,0);
      if (uStack_e4 < 0x10) {
        uStack_e4 = 0xf;
        local_e8 = 0;
        uStack_f8 = uStack_f8 & 0xffffff00;
        if (0xf < uStack_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_114);
        }
        uStack_100 = 0xf;
        local_104 = 0;
        uStack_114 = uStack_114 & 0xffffff00;
        if ((unaff_EDI & 0x800) != 0) {
          unaff_EDI = unaff_EDI & 0xfffff7ff;
          if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_6c);
          }
          uStack_58 = 0xf;
          local_5c = 0;
          uStack_6c = uStack_6c & 0xffffff00;
        }
        uStack_1c = 0xd;
        if ((unaff_EDI & 0x400) != 0) {
          unaff_EDI = unaff_EDI & 0xfffffbff;
          FUN_009a9740(auStack_3c);
        }
        if ((unaff_EDI & 0x200) != 0) {
          unaff_EDI = unaff_EDI & 0xfffffdff;
          if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_184);
          }
          uStack_170 = 0xf;
          local_174 = 0;
          uStack_184 = uStack_184 & 0xffffff00;
        }
        if ((unaff_EDI & 0x100) != 0) {
          unaff_EDI = unaff_EDI & 0xfffffeff;
          if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_88);
          }
          uStack_74 = 0xf;
          local_78 = 0;
          uStack_88 = uStack_88 & 0xffffff00;
        }
        uStack_1c = 10;
        if ((unaff_EDI & 0x80) != 0) {
          unaff_EDI = unaff_EDI & 0xffffff7f;
          FUN_009a9740(auStack_50);
        }
        uStack_1c = 0xffffffff;
        if ((unaff_EDI & 0x40) != 0) {
          if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_14c);
          }
          uStack_138 = 0xf;
          local_13c = 0;
          uStack_14c = uStack_14c & 0xffffff00;
        }
        FUN_006f7140(unaff_ESI);
        ExceptionList = pvStack_24;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_f8);
    }
    if (iVar1 == 2) {
      ExceptionList = &local_14;
      FUN_006f53a0(in_ECX,1);
      ExceptionList = local_14;
      return;
    }
    if (iVar1 != 4) {
      if (iVar1 == 3) {
        ExceptionList = &local_14;
        FUN_00704be0();
      }
      ExceptionList = local_14;
      return;
    }
    ExceptionList = &local_14;
    FUN_007046b0();
    ExceptionList = local_14;
    return;
  }
  bVar4 = *(char *)(in_ECX + 0xc5) == '\0';
  ExceptionList = &local_14;
  *(bool *)(in_ECX + 0xc5) = bVar4;
  if (bVar4) {
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = 0;
    FUN_00409350("PRODUCTION_HIDE_EMPTY_STATES",0x1c);
    local_c = 0;
    FUN_009a8ee0(local_1a4,local_cc);
    local_c = 1;
    iVar1 = FUN_00475500();
    uVar2 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = 2;
  }
  else {
    local_17c = 0xf;
    local_180 = 0;
    local_190 = local_190 & 0xffffff00;
    FUN_00409350("PRODUCTION_SHOW_EMPTY_STATES",0x1c);
    local_c = 3;
    FUN_009a8ee0(local_1b8,&local_190);
    local_c = 4;
    iVar1 = FUN_00475500();
    uVar2 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = 5;
  }
  local_10c = 0xf;
  local_110 = 0;
  local_120 = local_120 & 0xffffff00;
  FUN_00409350("show_empty_states",0x11);
  local_c = 6;
  local_144 = 0xf;
  local_148 = 0;
  local_158 = local_158 & 0xffffff00;
  FUN_00409350("factory_buttons",0xf);
  local_c = CONCAT31(local_c._1_3_,7);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x34))(auStack_124);
  (**(code **)(*piVar3 + 0xcc))(uVar2,0);
  if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_168);
  }
  uStack_154 = 0xf;
  local_158 = 0;
  uStack_168 = uStack_168 & 0xffffff00;
  if (0xf < uStack_11c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_130);
  }
  uStack_11c = 0xf;
  local_120 = 0;
  uStack_130 = uStack_130 & 0xffffff00;
  if ((unaff_EDI & 0x20) != 0) {
    unaff_EDI = unaff_EDI & 0xffffffdf;
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_c0);
    }
    uStack_ac = 0xf;
    local_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
  }
  if ((unaff_EDI & 0x10) != 0) {
    unaff_EDI = unaff_EDI & 0xffffffef;
    uStack_1c = 8;
    FUN_009adb70();
    if (iStack_1c4 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_1c4);
    }
  }
  if ((unaff_EDI & 8) != 0) {
    unaff_EDI = unaff_EDI & 0xfffffff7;
    if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1a0);
    }
    uStack_18c = 0xf;
    local_190 = 0;
    uStack_1a0 = uStack_1a0 & 0xffffff00;
  }
  if ((unaff_EDI & 4) != 0) {
    unaff_EDI = unaff_EDI & 0xfffffffb;
    if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_a4);
    }
    uStack_90 = 0xf;
    local_94 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
  }
  if ((unaff_EDI & 2) != 0) {
    unaff_EDI = unaff_EDI & 0xfffffffd;
    uStack_1c = 9;
    FUN_009adb70();
    if (iStack_1b0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_1b0);
    }
    iStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
  }
  uStack_1c = 0xffffffff;
  if (((unaff_EDI & 1) != 0) && (0xf < uStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_dc);
  }
  FUN_006f3e70();
  ExceptionList = pvStack_24;
  return;
}

