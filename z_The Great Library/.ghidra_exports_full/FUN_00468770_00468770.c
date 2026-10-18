// FUN_00468770 @ 00468770 body=[[00468770, 00468885] [00468889, 004688b1] [004688b5, 0046894b] [0046894f, 0046897b] [0046897f, 004689b0] [004689b6, 00468b1e] [00468b22, 00468bb9] [00468bce, 00468c11] [00468c15, 00468c2f] [00468c33, 00468c48]]


int FUN_00468770(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint extraout_ECX;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 local_1a0 [16];
  undefined4 local_190;
  undefined4 local_18c;
  int **ppiStack_184;
  undefined1 auStack_180 [36];
  undefined4 uStack_15c;
  uint *puStack_158;
  int iStack_154;
  int iStack_150;
  uint local_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined1 local_120 [28];
  undefined1 local_104;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 local_5c [20];
  uint local_48;
  uint local_40;
  int *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b96511;
  local_10 = ExceptionList;
  local_18 = (undefined1 *)0x0;
  ExceptionList = &local_10;
  local_1c = FUN_00467240();
  local_24 = 0x2d2d2d;
  iStack_148 = local_1c + 0x24;
  uStack_144 = 0;
  local_14c = 0x4687c8;
  FUN_00465e90();
  iStack_150 = 0xffffffff;
  puStack_158 = (uint *)(param_2 + 8);
  iStack_154 = 0;
  local_14c = extraout_ECX & 0xffffff00;
  uStack_15c = 0x4687e9;
  FUN_00408ed0();
  iStack_150 = 0;
  iStack_154 = 0;
  puStack_158 = (uint *)local_1c;
  uStack_15c = 0x4687f4;
  FUN_00464b30();
  bVar4 = *(int *)(param_2 + 0x104) != 0;
  if (bVar4) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = local_40 & 0xffffff00;
    FUN_00408ed0();
    local_18 = (undefined1 *)0x2;
  }
  else {
    FUN_00874950();
    local_18 = (undefined1 *)0x1;
  }
  local_8 = (uint)bVar4;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  FUN_00408ed0();
  local_8 = 2;
  if (((uint)local_18 & 2) != 0) {
    local_18 = (undefined1 *)((uint)local_18 & 0xfffffffd);
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = local_40 & 0xffffff00;
  }
  if (((uint)local_18 & 1) != 0) {
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
  }
  local_24 = 0x2d2d2d;
  ppiStack_184 = (int **)0x4688e7;
  FUN_008a88d0();
  ppiStack_184 = (int **)0x0;
  local_8._0_1_ = 5;
  local_18c = 0xf;
  local_190 = 0;
  local_1a0[0] = 0;
  FUN_00408ed0(local_94,0,0xffffffff);
  local_8._0_1_ = 4;
  FUN_008adbe0(local_5c);
  local_8._0_1_ = 6;
  iStack_150 = 0x468931;
  FUN_0046d310();
  iStack_150 = 1;
  iStack_154 = 0;
  puStack_158 = (uint *)local_1c;
  uStack_15c = 0x46893d;
  FUN_00464b30();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_8._0_1_ = 7;
  iVar2 = FUN_00466e50();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
    FUN_00408ed0();
  }
  else {
    FUN_00466e50();
    local_8._0_1_ = 8;
    FUN_00408ed0();
    local_8._0_1_ = 7;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iStack_150 = 0xffffffff;
  iStack_154 = 0;
  puStack_158 = local_78;
  local_14c = local_14c & 0xffffff00;
  uStack_15c = 0x4689e7;
  FUN_00408ed0();
  iStack_150 = 2;
  iStack_154 = 0;
  puStack_158 = (uint *)local_1c;
  uStack_15c = 0x4689f3;
  FUN_00464b30();
  FUN_00464bd0();
  FUN_00874830();
  local_8._0_1_ = 9;
  local_f0 = 0xf;
  local_f4 = 0;
  local_104 = 0;
  FUN_00408ed0();
  local_8._0_1_ = 10;
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8 = 0;
  FUN_00408ed0();
  local_8._0_1_ = 0xb;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = 0;
  FUN_00408ed0();
  puVar3 = local_120;
  param_1 = 2;
  do {
    if (*(int *)(puVar3 + 0x10) != 0) {
      local_34 = (int *)0x0;
      local_30 = 0;
      local_2c = 0;
      local_24 = 0x2d2d2d;
      local_18 = auStack_180;
      ppiStack_184 = (int **)0x468ade;
      FUN_008a88d0();
      ppiStack_184 = &local_34;
      local_18 = local_1a0;
      local_8._0_1_ = 0xe;
      local_18c = 0xf;
      local_190 = 0;
      local_1a0[0] = 0;
      FUN_00408ed0(puVar3,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_008adbe0(local_5c);
      piVar1 = local_34;
      if (local_48 < 0x10) {
        iVar2 = 0;
        if (0 < (local_34[1] - *local_34) / 0x1c) {
          do {
            local_18 = (undefined1 *)&local_14c;
            iStack_150 = 0x468b54;
            FUN_0046d310();
            iStack_154 = param_1 + -1;
            puStack_158 = (uint *)local_1c;
            uStack_15c = 0x468b63;
            iStack_150 = iVar2;
            FUN_00464b30();
            iStack_150 = 0x468b75;
            local_18 = (undefined1 *)&local_14c;
            FUN_0046d310();
            iStack_154 = param_1;
            puStack_158 = (uint *)local_1c;
            uStack_15c = 0x468b83;
            iStack_150 = iVar2;
            FUN_00464b30();
            iVar2 = iVar2 + 1;
          } while (iVar2 < (piVar1[1] - *piVar1) / 0x1c);
        }
        FUN_00463b30();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    param_1 = param_1 + 2;
    puVar3 = puVar3 + 0x1c;
  } while (param_1 < 10);
  local_8 = CONCAT31(local_8._1_3_,7);
  uStack_144 = 0x468bff;
  _eh_vector_destructor_iterator_(local_120,0x1c,4,FUN_00408ad0);
  if (local_64 < 0x10) {
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (local_80 < 0x10) {
      ExceptionList = local_10;
      return local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

