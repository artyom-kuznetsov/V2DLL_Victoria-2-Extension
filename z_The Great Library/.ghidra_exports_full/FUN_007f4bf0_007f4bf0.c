// FUN_007f4bf0 @ 007f4bf0 body=[[007f4bf0, 007f4cc8] [007f4ccc, 007f4ceb] [007f4cef, 007f4d47] [007f4d4b, 007f4d6a] [007f4d6e, 007f4dc6] [007f4dca, 007f4de9] [007f4ded, 007f4e45] [007f4e49, 007f4e68] [007f4e6c, 007f4ec4] [007f4ec8, 007f4ee7] [007f4eeb, 007f4f43] [007f4f47, 007f4f66] [007f4f6a, 007f4fc2] [007f4fc6, 007f4fe5] [007f4fe9, 007f5041] [007f5045, 007f5064] [007f5068, 007f50c0] [007f50c4, 007f50e3] [007f50e7, 007f513f] [007f5143, 007f5162] [007f5166, 007f51be] [007f51c2, 007f5223] [007f5227, 007f5273] [007f5277, 007f52c3] [007f52c7, 007f5313] [007f5317, 007f5363] [007f5367, 007f53b3] [007f53b7, 007f5403] [007f5407, 007f5453] [007f5457, 007f54a3] [007f54a7, 007f54f3] [007f54f7, 007f5543] [007f5547, 007f56f9] [007f56fd, 007f571f] [007f5723, 007f57b0] [007f57b4, 007f57db] [007f57df, 007f5802] [007f5806, 007f58a2] [007f58a6, 007f58cd] [007f58d1, 007f58f4] [007f58f8, 007f592e] [007f5932, 007f595b] [007f595f, 007f597c] [007f5980, 007f5988] [007f5992, 007f59bc] [007f59c0, 007f59e3] [007f59e7, 007f59f9]]


void FUN_007f4bf0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  int *local_7c;
  int local_78;
  undefined4 local_74 [5];
  uint local_60;
  int *local_58;
  int local_54;
  char local_4d;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61d76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  FUN_004367c0();
  local_8._0_1_ = 1;
  local_e4 = *(int *)(DAT_012586e0 + 0x5c);
  if (local_e4 == 1) {
    FUN_00408ed0(local_d0,0,0xffffffff);
  }
  else if (local_e4 == 2) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/base.dds",0x11);
    local_8._0_1_ = 0x18;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/colormap.dds",0x15);
    local_8._0_1_ = 0x19;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/colormap_political.dds",0x1f);
    local_8._0_1_ = 0x1a;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/stripes.dds",0x14);
    local_8._0_1_ = 0x1b;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/colormap_water.dds",0x1b);
    local_8._0_1_ = 0x1c;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/terrainalpha.tga",0x19);
    local_8._0_1_ = 0x1d;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/noise-2d.dds",0x15);
    local_8._0_1_ = 0x1e;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0x17c) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/water_blur_20_pixels_tilable.dds",0x29);
    local_8._0_1_ = 0x1f;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0x178) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/water.dds",0x12);
    local_8._0_1_ = 0x20;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0x188) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/test_noise.dds",0x17);
    local_8._0_1_ = 0x21;
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    local_8._0_1_ = 1;
    *(undefined4 *)(param_1 + 0x180) = uVar2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/noise_test2.dds",0x18);
    local_8 = CONCAT31(local_8._1_3_,0x22);
    uVar2 = FUN_00802710(param_1,local_d0,local_74);
    *(undefined4 *)(param_1 + 0x184) = uVar2;
    goto LAB_007f5531;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/base.dds",0x11);
  local_8._0_1_ = 2;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 3;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/colormap.dds",0x15);
  local_8._0_1_ = 4;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 5;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/colormap_political.dds",0x1f);
  local_8._0_1_ = 6;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 7;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/stripes.dds",0x14);
  local_8._0_1_ = 8;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 9;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/colormap_water.dds",0x1b);
  local_8._0_1_ = 10;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 0xb;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/terrainalpha.tga",0x19);
  local_8._0_1_ = 0xc;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 0xd;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/noise-2d.dds",0x15);
  local_8._0_1_ = 0xe;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 0xf;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/water_blur_20_pixels_tilable.dds",0x29);
  local_8._0_1_ = 0x10;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 0x11;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/water.dds",0x12);
  local_8._0_1_ = 0x12;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 0x13;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/test_noise.dds",0x17);
  local_8._0_1_ = 0x14;
  uVar2 = FUN_00988f20(local_30);
  local_8._0_1_ = 0x15;
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/terrain/noise_test2.dds",0x18);
  local_8._0_1_ = 0x16;
  uVar2 = FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  uVar2 = FUN_009bcbf0(uVar2,1);
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
LAB_007f5531:
  local_8._0_1_ = 1;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (*(uint *)(param_1 + 0xb8) < 10000) {
    iVar3 = *(uint *)(param_1 + 0xb8) * 0x2c;
    uVar2 = *(undefined4 *)(iVar3 + 0x17c + *(int *)(param_1 + 0x3c));
    uVar6 = *(undefined4 *)(iVar3 + 0x180 + *(int *)(param_1 + 0x3c));
  }
  else {
    uVar2 = 0;
    uVar6 = 0;
  }
  local_7c = (int *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  FUN_0068ea30(0x100);
  FUN_004a0d60(*(undefined4 *)(param_1 + 0x40),&local_f4);
  local_8._0_1_ = 0x23;
  local_54 = 0;
  local_58 = local_f4;
  if (local_f4 != (int *)0x0) {
    local_78 = param_1 + 0x94;
    piVar8 = local_f4;
    do {
      iVar3 = *piVar8;
      iVar4 = *(int *)(iVar3 + 0x2c);
      iVar7 = 0;
      if (0 < (int)(*(int *)(iVar3 + 0x30) - iVar4 & 0xfffffffcU)) {
        do {
          *(int *)(*local_7c + *(int *)(iVar4 + iVar7 * 4) * 4) = local_54;
          iVar4 = *(int *)(iVar3 + 0x2c);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar3 + 0x30) - iVar4 >> 2);
      }
      local_58 = (int *)0xffffffff;
      FUN_004e9b90();
      piVar8 = (int *)piVar8[2];
      local_54 = local_54 + 1;
      local_58 = piVar8;
    } while (piVar8 != (int *)0x0);
  }
  FUN_004a0e30(*(undefined4 *)(param_1 + 0x40),&local_e0);
  local_54 = 0;
  if (0 < (int)(local_dc - local_e0 & 0xfffffffcU)) {
    local_7c = (int *)(param_1 + 0xd8);
    do {
      local_8._0_1_ = 0x24;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00408ed0(*(int *)(local_e0 + local_54 * 4) + 0x24,0,0xffffffff);
      local_8._0_1_ = 0x25;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 0x25;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (local_e4 == 2) {
        local_38 = 0xf;
        local_8._0_1_ = uVar1;
        FUN_00409350(&DAT_00dedc68,1);
        local_8._0_1_ = 0x29;
        FUN_00988f20(local_4c);
        local_8 = CONCAT31(local_8._1_3_,0x2a);
        pcVar5 = (char *)FUN_00988f20(local_30);
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar5 = *(char **)pcVar5;
        }
        if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
LAB_007f579d:
          local_4d = '\0';
        }
        else {
          iVar3 = PHYSFS_exists(pcVar5);
          local_4d = '\x01';
          if (iVar3 == 0) goto LAB_007f579d;
        }
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_98);
        }
        local_84 = 0xf;
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b4);
        }
        local_8._0_1_ = 0x25;
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        FUN_00409350(&DAT_00dedc68,1);
        if (local_4d == '\0') {
          local_8._0_1_ = 0x2e;
          FUN_00988f20(local_4c);
          local_8._0_1_ = 0x2f;
          uVar2 = FUN_00988f20(local_30);
          local_8._0_1_ = 0x30;
        }
        else {
          local_8._0_1_ = 0x2b;
          FUN_00988f20(local_4c);
          local_8._0_1_ = 0x2c;
          uVar2 = FUN_00988f20(local_30);
          local_8._0_1_ = 0x2d;
        }
        FUN_00408ed0(uVar2,0,0xffffffff);
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_98);
        }
        local_98 = local_98 & 0xffffff00;
        local_88 = 0;
        local_84 = 0xf;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b4);
        }
        local_b4 = local_b4 & 0xffffff00;
      }
      else {
        local_38 = 0xf;
        FUN_00409350(&DAT_00dedc68,1);
        local_8._0_1_ = 0x26;
        FUN_00988f20(local_4c);
        local_8._0_1_ = 0x27;
        uVar2 = FUN_00988f20(local_30);
        local_8._0_1_ = 0x28;
        FUN_00408ed0(uVar2,0,0xffffffff);
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b4);
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_98);
        }
        local_98 = local_98 & 0xffffff00;
      }
      local_8._0_1_ = 0x25;
      local_84 = 0xf;
      local_88 = 0;
      local_a0 = 0xf;
      local_a4 = 0;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_78 = FUN_009bcbf0(local_30,1);
      FUN_004e9b90();
      local_8._0_1_ = 0x24;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_54 = local_54 + 1;
    } while (local_54 < local_dc - local_e0 >> 2);
  }
  local_8._0_1_ = 0x24;
  if (local_e0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  if (local_f4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f4);
  }
  local_f4 = (int *)0x0;
  local_f0 = 0;
  local_ec = 0;
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d0[0]);
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  if (local_60 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_74[0]);
}

