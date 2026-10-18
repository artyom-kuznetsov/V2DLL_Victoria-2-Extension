// FUN_008108e0 @ 008108e0 body=[[008108e0, 00810a8a] [00810a8e, 00810ab1] [00810ab5, 00810b16] [00810b1a, 00810b3d] [00810b41, 00810b9f] [00810ba3, 00810bc6] [00810bca, 00810c2b] [00810c2f, 00810cc7] [00810ccb, 00810ced] [00810cf1, 00810d74] [00810d78, 00810d9b] [00810d9f, 00810e10] [00810e14, 00810e36] [00810e3a, 00810ebd] [00810ec1, 00810ee4] [00810ee8, 00810f59] [00810f5d, 00810f7f] [00810f83, 00811006] [0081100a, 0081102d] [00811031, 008110a2] [008110a6, 008110c8] [008110cc, 00811171] [00811175, 00811198] [0081119c, 008112aa] [008112ae, 008112d3] [008112d7, 00811318] [0081131c, 00811337] [0081133b, 00811373]]


uint * FUN_008108e0(uint *param_1,uint param_2,char *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined **local_1c [2];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61b95;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (uint)param_3;
  puVar1 = param_1 + 1;
  uVar10 = 0;
  *puVar1 = 0;
  puVar3 = (undefined4 *)FUN_00aae9af(8);
  if (puVar3 == (undefined4 *)0x0) {
    param_3 = (char *)0x0;
    std::exception::exception((exception *)local_1c,&param_3);
    local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_1c,&DAT_00e6fb20);
  }
  *puVar1 = (uint)puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  *(uint **)*puVar1 = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar4 = DAT_0125870c;
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  param_1[0x1d] = param_2;
  param_1[0x1f] = 0xffffffff;
  param_1[0x2b] = uVar4;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar4 = FUN_00aae9af(0x9c8);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(uVar4 + 0x9c0) = 0;
    *(undefined4 *)(uVar4 + 0x9c4) = 1;
  }
  param_1[0x1e] = uVar4;
  FUN_009b7670();
  *(undefined4 *)(uVar4 + 0x9c0) = 0;
  FUN_00436780();
  local_8._0_1_ = 6;
  FUN_004367c0();
  local_8._0_1_ = 7;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 7;
  if (*(int *)(DAT_012586e0 + 0x5c) == 1) {
    FUN_00408ed0(local_38,0,0xffffffff);
LAB_00810a29:
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_body.tga",0x17);
    local_8._0_1_ = 8;
    uVar5 = FUN_00988f20(local_8c);
    local_8._0_1_ = 9;
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x20] = uVar4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_movement.tga",0x1b);
    local_8._0_1_ = 10;
    uVar5 = FUN_00988f20(local_8c);
    local_8._0_1_ = 0xb;
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x21] = uVar4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/colormap_water.dds",0x1b);
    local_8._0_1_ = 0xc;
    uVar5 = FUN_00988f20(local_8c);
    local_8._0_1_ = 0xd;
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x1f] = uVar4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_exit.dds",0x17);
    local_8._0_1_ = 0xe;
    uVar5 = FUN_00988f20(local_8c);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x22] = uVar4;
  }
  else {
    if (*(int *)(DAT_012586e0 + 0x5c) != 2) goto LAB_00810a29;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350("/terrain/river_body.tga",0x17);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    pcVar6 = (char *)FUN_00988f20(local_8c);
    if (0xf < *(uint *)(pcVar6 + 0x14)) {
      pcVar6 = *(char **)pcVar6;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_00810cb1:
      param_3 = (char *)((uint)param_3 & 0xffffff);
    }
    else {
      iVar8 = PHYSFS_exists(pcVar6);
      param_3 = (char *)CONCAT13(1,param_3._0_3_);
      if (iVar8 == 0) goto LAB_00810cb1;
    }
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_body.tga",0x17);
    if (param_3._3_1_ == '\0') {
      local_8._0_1_ = 0x13;
      uVar5 = FUN_00988f20(local_8c);
      local_8._0_1_ = 0x14;
    }
    else {
      local_8._0_1_ = 0x11;
      uVar5 = FUN_00988f20(local_8c);
      local_8._0_1_ = 0x12;
    }
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x20] = uVar4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_70[0] = local_70[0] & 0xffffff00;
    local_60 = 0;
    local_5c = 0xf;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_exit.dds",0x17);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    pcVar6 = (char *)FUN_00988f20(local_8c);
    if (0xf < *(uint *)(pcVar6 + 0x14)) {
      pcVar6 = *(char **)pcVar6;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_00810dfa:
      param_3 = (char *)((uint)param_3 & 0xffffff);
    }
    else {
      iVar8 = PHYSFS_exists(pcVar6);
      param_3 = (char *)CONCAT13(1,param_3._0_3_);
      if (iVar8 == 0) goto LAB_00810dfa;
    }
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_exit.dds",0x17);
    if (param_3._3_1_ == '\0') {
      local_8._0_1_ = 0x18;
      uVar5 = FUN_00988f20(local_8c);
      local_8._0_1_ = 0x19;
    }
    else {
      local_8._0_1_ = 0x16;
      uVar5 = FUN_00988f20(local_8c);
      local_8._0_1_ = 0x17;
    }
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x22] = uVar4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_70[0] = local_70[0] & 0xffffff00;
    local_60 = 0;
    local_5c = 0xf;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_movement.tga",0x1b);
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    pcVar6 = (char *)FUN_00988f20(local_8c);
    if (0xf < *(uint *)(pcVar6 + 0x14)) {
      pcVar6 = *(char **)pcVar6;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_00810f43:
      param_3 = (char *)((uint)param_3 & 0xffffff);
    }
    else {
      iVar8 = PHYSFS_exists(pcVar6);
      param_3 = (char *)CONCAT13(1,param_3._0_3_);
      if (iVar8 == 0) goto LAB_00810f43;
    }
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/river_movement.tga",0x1b);
    if (param_3._3_1_ == '\0') {
      local_8._0_1_ = 0x1d;
      uVar5 = FUN_00988f20(local_8c);
      local_8._0_1_ = 0x1e;
    }
    else {
      local_8._0_1_ = 0x1b;
      uVar5 = FUN_00988f20(local_8c);
      local_8._0_1_ = 0x1c;
    }
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x21] = uVar4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_70[0] = local_70[0] & 0xffffff00;
    local_60 = 0;
    local_5c = 0xf;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/colormap_water.dds",0x1b);
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    pcVar6 = (char *)FUN_00988f20(local_8c);
    if (0xf < *(uint *)(pcVar6 + 0x14)) {
      pcVar6 = *(char **)pcVar6;
    }
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_0081108c:
      param_3 = (char *)((uint)param_3 & 0xffffff);
    }
    else {
      iVar8 = PHYSFS_exists(pcVar6);
      param_3 = (char *)CONCAT13(1,param_3._0_3_);
      if (iVar8 == 0) goto LAB_0081108c;
    }
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_8._0_1_ = 7;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    if (param_3._3_1_ == '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0x22;
      uVar5 = FUN_00988f20(local_70);
      local_8._0_1_ = 0x23;
      uVar4 = FUN_009bcbf0(uVar5,1);
      param_1[0x1f] = uVar4;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      uVar4 = local_70[0];
      uVar9 = local_5c;
      goto joined_r0x0081118e;
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("/terrain/colormap_water.dds",0x1b);
    local_8._0_1_ = 0x20;
    uVar5 = FUN_00988f20(local_8c);
    local_8 = CONCAT31(local_8._1_3_,0x21);
    uVar4 = FUN_009bcbf0(uVar5,1);
    param_1[0x1f] = uVar4;
  }
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  uVar4 = local_8c[0];
  uVar9 = local_78;
joined_r0x0081118e:
  if (0xf < uVar9) {
    local_8._0_1_ = 7;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar4);
  }
  local_8._0_1_ = 7;
  uVar4 = *param_1;
  if (param_1[0x22] < 10000) {
    iVar7 = param_1[0x22] * 0x2c;
    iVar8 = *(int *)(iVar7 + 0x17c + uVar4);
    local_14 = *(undefined4 *)(iVar7 + 0x180 + uVar4);
  }
  else {
    iVar8 = 0;
  }
  param_1[0xf] = (uint)(128.0 / (float)iVar8);
  if (param_1[0x1f] < 10000) {
    iVar8 = param_1[0x1f] * 0x2c;
    uVar9 = *(uint *)(iVar8 + 0x17c + uVar4);
    uVar10 = *(uint *)(iVar8 + 0x180 + uVar4);
  }
  else {
    uVar9 = 0;
  }
  param_1[0x23] = uVar9;
  param_1[0x24] = uVar10;
  FUN_00814260(param_1);
  FUN_00814210();
  FUN_00815c00();
  FUN_0054ab90(param_1 + 7,param_1[7],param_1[8]);
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350("RiverShader",0xb);
  local_8._0_1_ = 0x24;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("gfx/FX/river.fx",0xf);
  local_8._0_1_ = 0x25;
  iVar8 = FUN_009be510(*param_1 + 0x6bcfc,local_70,local_8c,*(undefined4 *)(*param_1 + 100));
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (iVar8 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(*(int *)(*param_1 + 0x6bd00) + -4 + iVar8 * 4);
  }
  param_1[0x1c] = uVar10;
  FUN_00815890();
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54);
  }
  ExceptionList = local_10;
  return param_1;
}

