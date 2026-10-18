// FUN_00468210 @ 00468210 body=[[00468210, 0046838f] [00468393, 004683bb] [004683bf, 004683e7] [004683eb, 00468479] [0046847d, 0046853a] [0046853e, 00468661] [00468665, 004686ff] [00468711, 00468750] [00468754, 00468768]]


int FUN_00468210(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 local_1bc [16];
  undefined4 local_1ac;
  undefined4 local_1a8;
  int **ppiStack_1a0;
  undefined1 auStack_19c [36];
  undefined4 uStack_178;
  int iStack_174;
  undefined1 *puStack_170;
  int iStack_16c;
  uint local_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined1 local_13c [116];
  undefined1 local_c8 [20];
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  uint local_34 [3];
  int *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b965c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00467240();
  local_18 = 0x2d2d2d;
  iStack_164 = iVar1 + 0x24;
  uStack_160 = 0;
  local_168 = 0x468274;
  FUN_00465e90();
  local_168 = *(uint *)(param_2 + 0xc);
  puStack_170 = (undefined1 *)(iVar1 + 0x34);
  iStack_16c = 0;
  iStack_174 = 0x468283;
  FUN_00466050();
  FUN_00466050();
  FUN_00466050();
  FUN_00466050();
  iVar2 = FUN_008a6620();
  for (piVar3 = *(int **)(iVar2 + 0x20); (piVar3 != *(int **)(iVar2 + 0x24) && (*piVar3 != param_2))
      ; piVar3 = piVar3 + 1) {
  }
  FUN_00466050();
  FUN_00466050();
  iVar2 = FUN_008a6040();
  local_8 = 0;
  bVar5 = *(int *)(iVar2 + 0x10) != 0;
  if (bVar5) {
    FUN_008a6040();
    local_8 = 2;
  }
  else {
    FUN_008a6010();
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00408ed0();
  local_8 = 3;
  if (bVar5) {
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
  }
  if (!bVar5) {
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
  }
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  local_18 = 0x2d2d2d;
  local_7c = 0xf;
  ppiStack_1a0 = (int **)0x468415;
  FUN_008a88d0();
  ppiStack_1a0 = (int **)0x0;
  local_8._0_1_ = 7;
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = 0;
  FUN_00408ed0(local_58,0,0xffffffff);
  local_8._0_1_ = 6;
  FUN_008adbe0(local_34);
  local_8._0_1_ = 8;
  iStack_16c = 0x46845d;
  FUN_0046d310();
  iStack_16c = 0;
  puStack_170 = (undefined1 *)0x0;
  uStack_178 = 0x468467;
  iStack_174 = iVar1;
  FUN_00464b30();
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_16c = param_2;
  puStack_170 = (undefined1 *)0x46848b;
  FUN_00466de0();
  iStack_16c = 1;
  puStack_170 = (undefined1 *)0x0;
  uStack_178 = 0x468495;
  iStack_174 = iVar1;
  FUN_00464b30();
  if ((param_4 < 0) || (*(int *)(param_2 + 0xb4) - *(int *)(param_2 + 0xb0) >> 2 <= param_4)) {
    param_4 = param_2 + 0x4c;
  }
  else {
    param_4 = *(int *)(*(int *)(param_2 + 0xb0) + param_4 * 4);
  }
  if (param_4 == 0) {
    iStack_16c = 0;
    puStack_170 = &DAT_00ded94d;
    local_168 = local_168 & 0xffffff00;
    iStack_174 = 0x468577;
    FUN_00409350();
    iStack_16c = 2;
    puStack_170 = (undefined1 *)0x0;
    uStack_178 = 0x468581;
    iStack_174 = iVar1;
    FUN_00464b30();
  }
  else {
    local_18 = 0x2d2d2d;
    ppiStack_1a0 = (int **)0x4684e7;
    FUN_008a88d0();
    ppiStack_1a0 = (int **)0x0;
    local_8._0_1_ = 9;
    FUN_008a8510(param_4);
    local_8._0_1_ = 6;
    FUN_008adbe0(local_34);
    local_8._0_1_ = 10;
    iStack_16c = 0x46851e;
    FUN_0046d310();
    iStack_16c = 2;
    puStack_170 = (undefined1 *)0x0;
    uStack_178 = 0x468528;
    iStack_174 = iVar1;
    FUN_00464b30();
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  FUN_00464bd0();
  FUN_008a60f0();
  local_8._0_1_ = 0xb;
  FUN_008a6120();
  local_8._0_1_ = 0xc;
  FUN_008a6150();
  local_8._0_1_ = 0xd;
  FUN_008a6180();
  puVar4 = local_13c;
  param_4 = 2;
  while (*(int *)(puVar4 + 0x10) == 0) {
    param_4 = param_4 + 2;
    puVar4 = puVar4 + 0x1c;
    if (9 < param_4) {
      local_8 = CONCAT31(local_8._1_3_,6);
      uStack_160 = 0x468742;
      _eh_vector_destructor_iterator_(local_13c,0x1c,4,FUN_00408ad0);
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return iVar1;
    }
  }
  local_28 = (int *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_3c = 0x2d2d2d;
  local_14 = auStack_19c;
  ppiStack_1a0 = (int **)0x468614;
  FUN_008a88d0();
  ppiStack_1a0 = &local_28;
  local_14 = local_1bc;
  local_8._0_1_ = 0x10;
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = 0;
  FUN_00408ed0(puVar4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_008adbe0(local_c8);
  piVar3 = local_28;
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar2 = 0;
  if (0 < (local_28[1] - *local_28) / 0x1c) {
    do {
      local_14 = (undefined1 *)&local_168;
      iStack_16c = 0x468699;
      FUN_0046d310();
      puStack_170 = (undefined1 *)(param_4 + -1);
      uStack_178 = 0x4686a8;
      iStack_174 = iVar1;
      iStack_16c = iVar2;
      FUN_00464b30();
      iStack_16c = 0x4686ba;
      local_14 = (undefined1 *)&local_168;
      FUN_0046d310();
      puStack_170 = (undefined1 *)param_4;
      uStack_178 = 0x4686c8;
      iStack_174 = iVar1;
      iStack_16c = iVar2;
      FUN_00464b30();
      iVar2 = iVar2 + 1;
    } while (iVar2 < (piVar3[1] - *piVar3) / 0x1c);
  }
  FUN_00463b30();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

