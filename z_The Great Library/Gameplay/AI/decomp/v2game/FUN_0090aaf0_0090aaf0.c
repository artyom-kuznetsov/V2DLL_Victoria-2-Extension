// FUN_0090aaf0 @ 0090aaf0 body=[[0090aaf0, 0090ac25] [0090ac29, 0090ac54] [0090ac58, 0090ac7c] [0090ac80, 0090ad49] [0090ad4d, 0090ad69] [0090ad6d, 0090ad8e] [0090ad92, 0090ae72] [0090ae76, 0090aea5] [0090aea9, 0090aed2] [0090aed6, 0090af3a] [0090af3e, 0090afcb] [0090afcf, 0090b04f] [0090b053, 0090b0ce] [0090b0d2, 0090b155] [0090b159, 0090b16f] [0090b173, 0090b18d] [0090b191, 0090b287] [0090b28b, 0090b2ab] [0090b2af, 0090b2c5] [0090b2c9, 0090b2ef] [0090b2f3, 0090b313] [0090b317, 0090b494] [0090b498, 0090b4b3] [0090b4b7, 0090b4cd] [0090b4d1, 0090b4f1] [0090b4f5, 0090b70c] [0090b710, 0090b806] [0090b80a, 0090b82a] [0090b82e, 0090b844] [0090b848, 0090b86e] [0090b872, 0090b892] [0090b896, 0090b98c] [0090b990, 0090b9b0] [0090b9b4, 0090b9ca] [0090b9ce, 0090b9f4] [0090b9f8, 0090ba18] [0090ba1c, 0090bb07] [0090bb0b, 0090bb26] [0090bb2a, 0090bb40] [0090bb44, 0090bb70] [0090bb74, 0090bb97] [0090bb9b, 0090bc5a] [0090bc5e, 0090bc79] [0090bc7d, 0090bc93] [0090bc97, 0090bcc3] [0090bcc7, 0090bcea] [0090bcee, 0090bdb0] [0090bdb4, 0090c7d0] [0090c7d4, 0090c7fe] [0090c802, 0090c827] [0090c82b, 0090c850] [0090c854, 0090c879] [0090c87d, 0090c940] [0090c944, 0090c95f] [0090c963, 0090c979] [0090c97d, 0090c9a9] [0090c9ad, 0090c9d4]]


undefined4 FUN_0090aaf0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_2ec;
  undefined1 local_2d4 [24];
  undefined4 local_2bc;
  undefined1 *local_2b0;
  undefined1 local_28c [8];
  undefined4 local_284;
  undefined4 local_280;
  uint local_228;
  undefined4 local_218;
  uint local_214;
  uint local_20c;
  undefined4 local_1fc;
  uint local_1f8;
  uint local_1f0 [4];
  undefined4 local_1e0;
  uint local_1dc;
  uint local_1d4 [4];
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1b8 [4];
  undefined4 local_1a8;
  uint local_1a4;
  uint local_19c [4];
  undefined4 local_18c;
  uint local_188;
  undefined1 local_180 [20];
  undefined4 local_16c;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  undefined1 *local_c0;
  uint local_bc [2];
  undefined1 local_b4 [8];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  int local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba365a;
  local_10 = ExceptionList;
  local_16c = 0;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  local_8 = 1;
  local_2ec = 0x200df8518;
  local_138 = 0xf;
  local_13c = 0;
  local_14c = local_14c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 2;
  if (1000 < *(int *)(param_1 + 0xf4)) {
    local_2ec = 0x200df8510;
    FUN_00409350();
  }
  local_2ec = 0x300df8544;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_2ec;
  local_2ec._4_4_ = 0;
  local_8._0_1_ = 3;
  FUN_00401000();
  local_14 = (undefined1 *)FUN_00b31c00();
  uVar4 = __alldiv((longlong)(int)local_14 * (longlong)*(int *)(param_1 + 0xf4),1000,0);
  local_2ec = CONCAT44(local_2ec._4_4_,uVar4);
  uVar4 = FUN_00988a50();
  local_8._0_1_ = 4;
  local_2ec = CONCAT44(uVar4,0x90abfc);
  FUN_00988f20();
  local_8._0_1_ = 5;
  local_2ec = CONCAT44(local_30,0x90ac11);
  FUN_00988f20();
  if (0xf < local_8c) {
    local_2ec = CONCAT44(local_a0[0],&UNK_0090ac26);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (0xf < local_154) {
    local_2ec = CONCAT44(local_168[0],&UNK_0090ac55);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_154 = 0xf;
  local_158 = 0;
  local_168[0] = local_168[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0xf < local_1c) {
    local_2ec = CONCAT44(local_30[0],&UNK_0090ac7d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0x200df8518;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  if (*(int *)(param_1 + 0xf8) < 1000) {
    local_2ec = 0x200df8510;
    FUN_00409350();
  }
  local_2ec = 0x300df8544;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 10;
  local_c0 = (undefined1 *)&local_2ec;
  local_2ec._4_4_ = 0;
  uVar4 = __alldiv((longlong)(int)local_14 * (longlong)*(int *)(param_1 + 0xf8),1000,0);
  local_2ec = CONCAT44(local_2ec._4_4_,uVar4);
  uVar4 = FUN_00988a50();
  local_8._0_1_ = 0xb;
  local_2ec = CONCAT44(uVar4,0x90ad23);
  FUN_00988f20();
  local_8._0_1_ = 0xc;
  local_2ec = CONCAT44(local_bc,0x90ad3b);
  FUN_00988f20();
  if (0xf < local_70) {
    local_2ec = CONCAT44(local_84[0],&UNK_0090ad4a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_38) {
    local_2ec = CONCAT44(local_4c[0],&UNK_0090ad6a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x10);
  if (0xf < local_a8) {
    local_2ec = CONCAT44(local_bc[0],&UNK_0090ad8f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0x200df8518;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350();
  if (1000 < *(int *)(param_1 + 0xfc)) {
    local_2ec = 0x200df8510;
    FUN_00409350();
  }
  local_2ec = 0x300df8544;
  local_188 = 0xf;
  local_18c = 0;
  local_19c[0] = local_19c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x11;
  local_c0 = (undefined1 *)&local_2ec;
  local_2ec._4_4_ = 0;
  uVar4 = __alldiv((longlong)(int)local_14 * (longlong)*(int *)(param_1 + 0xfc),1000,0);
  local_2ec = CONCAT44(local_2ec._4_4_,uVar4);
  uVar4 = FUN_00988a50();
  local_8._0_1_ = 0x12;
  local_2ec = CONCAT44(uVar4,0x90ae46);
  FUN_00988f20();
  local_8._0_1_ = 0x13;
  local_2ec = CONCAT44(local_19c,0x90ae5e);
  FUN_00988f20();
  if (0xf < local_1f8) {
    local_2ec = CONCAT44(local_20c,&UNK_0090ae73);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1f8 = 0xf;
  local_1fc = 0;
  local_20c = local_20c & 0xffffff00;
  if (0xf < local_214) {
    local_2ec = CONCAT44(local_228,&UNK_0090aea6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_214 = 0xf;
  local_218 = 0;
  local_228 = local_228 & 0xffffff00;
  local_8._0_1_ = 0x17;
  if (0xf < local_188) {
    local_2ec = CONCAT44(local_19c[0],&UNK_0090aed3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0xc00e33490;
  local_188 = 0xf;
  local_18c = 0;
  local_19c[0] = local_19c[0] & 0xffffff00;
  local_154 = 0xf;
  local_158 = 0;
  local_168[0] = local_168[0] & 0xffffff00;
  FUN_00409350();
  local_2ec = CONCAT44(local_168,local_180);
  local_8._0_1_ = 0x18;
  FUN_009a8ee0();
  local_8._0_1_ = 0x1a;
  if (0xf < local_154) {
    local_2ec = CONCAT44(local_168[0],&UNK_0090af3b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0x600dfe4b4;
  local_154 = 0xf;
  local_158 = 0;
  local_168[0] = local_168[0] & 0xffffff00;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1b;
  local_2ec = 0x400090af73;
  local_c0 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0x1c;
  if (local_c0 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_2ec = CONCAT44(local_1f0,local_180);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1b;
  local_2ec = CONCAT44(&local_14,local_30);
  FUN_009e6810();
  local_8._0_1_ = 0x1a;
  if (0xf < local_1c) {
    local_2ec = CONCAT44(local_30[0],&UNK_0090afcc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0x800e334a0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1d;
  local_2ec = 0x400090aff7;
  local_c0 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0x1e;
  if (local_c0 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_2ec = CONCAT44(local_1b8,local_180);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1d;
  local_2ec = CONCAT44(&local_14,local_30);
  FUN_009e6810();
  local_8._0_1_ = 0x1a;
  if (0xf < local_1c) {
    local_2ec = CONCAT44(local_30[0],&UNK_0090b050);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0x400dfeb48;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1f;
  local_2ec = 0x400090b076;
  local_c0 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0x20;
  if (local_c0 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_2ec = CONCAT44(local_1d4,local_180);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1f;
  local_2ec = CONCAT44(&local_14,local_30);
  FUN_009e6810();
  local_8._0_1_ = 0x1a;
  if (0xf < local_1c) {
    local_2ec = CONCAT44(local_30[0],&UNK_0090b0cf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2ec = 0x100dee2cc;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x21;
  local_2ec = CONCAT44(0x90b0f8,(undefined4)local_2ec);
  iVar5 = FUN_00475500();
  local_2ec = *(undefined8 *)(iVar5 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
  local_8._0_1_ = 0x22;
  local_2ec = CONCAT44(local_30,0x90b130);
  FUN_00988f20();
  local_2ec = 0xffffffff00000000;
  local_8._0_1_ = 0x23;
  FUN_00448aa0();
  if (0xf < local_38) {
    local_2ec = CONCAT44(local_4c[0],&UNK_0090b156);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_70) {
    local_2ec = CONCAT44(local_84[0],&UNK_0090b170);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1a;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_2ec = CONCAT44(local_30[0],&UNK_0090b18e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  for (piVar1 = *(int **)(param_1 + 0x120); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == 0x8a1) {
      local_2ec = 0x100dee2cc;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x24;
      local_2ec = 0x1000e334ac;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_2ec = CONCAT44(local_30,local_b4);
      local_8._0_1_ = 0x25;
      FUN_009a8ee0();
      local_8._0_1_ = 0x26;
      local_2ec = CONCAT44(0x90b21a,(undefined4)local_2ec);
      iVar5 = FUN_00475500();
      local_2ec = *(undefined8 *)(iVar5 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8._0_1_ = 0x27;
      local_2ec = CONCAT44(uVar4,0x90b24e);
      FUN_00988fa0();
      local_8._0_1_ = 0x28;
      local_2ec = CONCAT44(local_a0,0x90b266);
      FUN_00988f20();
      local_2ec = 0xffffffff00000000;
      local_8._0_1_ = 0x29;
      FUN_00448aa0();
      if (0xf < local_38) {
        local_2ec = CONCAT44(local_4c[0],&UNK_0090b288);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_70) {
        local_2ec = CONCAT44(local_84[0],&UNK_0090b2ac);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_54) {
        local_2ec = CONCAT44(local_68[0],&UNK_0090b2c6);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      local_8._0_1_ = 0x25;
      local_2ec = CONCAT44(local_b4,0x90b2e2);
      FUN_009a9740();
      if (0xf < local_1c) {
        local_2ec = CONCAT44(local_30[0],&UNK_0090b2f0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1a;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_8c) {
        local_2ec = CONCAT44(local_a0[0],&UNK_0090b314);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      break;
    }
  }
  for (piVar1 = *(int **)(param_1 + 0x120); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == 0x8a3) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      local_2ec = 0x90b359;
      FUN_008a8650();
      local_2ec = 0x90b365;
      FUN_008a8650();
      local_284 = *(undefined4 *)(param_3 + 0x1c);
      local_280 = *(undefined4 *)(param_3 + 0x20);
      local_2b0 = local_28c;
      piVar1 = *(int **)(param_4 + 0xe44);
      local_14 = (undefined1 *)0x0;
      goto joined_r0x0090b39c;
    }
  }
LAB_0090b710:
  local_8._0_1_ = 0x1a;
  for (piVar1 = *(int **)(param_1 + 0x120); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == 0x8a2) {
      local_2ec = 0x100dee2cc;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x3b;
      local_2ec = 0x1800e334e4;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_2ec = CONCAT44(local_30,local_b4);
      local_8._0_1_ = 0x3c;
      FUN_009a8ee0();
      local_8._0_1_ = 0x3d;
      local_2ec = CONCAT44(0x90b799,(undefined4)local_2ec);
      iVar5 = FUN_00475500();
      local_2ec = *(undefined8 *)(iVar5 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8._0_1_ = 0x3e;
      local_2ec = CONCAT44(uVar4,0x90b7cd);
      FUN_00988fa0();
      local_8._0_1_ = 0x3f;
      local_2ec = CONCAT44(local_a0,0x90b7e5);
      FUN_00988f20();
      local_2ec = 0xffffffff00000000;
      local_8._0_1_ = 0x40;
      FUN_00448aa0();
      if (0xf < local_54) {
        local_2ec = CONCAT44(local_68[0],&UNK_0090b807);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_38) {
        local_2ec = CONCAT44(local_4c[0],&UNK_0090b82b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_70) {
        local_2ec = CONCAT44(local_84[0],&UNK_0090b845);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      local_8._0_1_ = 0x3c;
      local_2ec = CONCAT44(local_b4,0x90b861);
      FUN_009a9740();
      if (0xf < local_1c) {
        local_2ec = CONCAT44(local_30[0],&UNK_0090b86f);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1a;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_8c) {
        local_2ec = CONCAT44(local_a0[0],&UNK_0090b893);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      break;
    }
  }
  local_8._0_1_ = 0x1a;
  for (piVar1 = *(int **)(param_1 + 0x120); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == 0x8aa) {
      local_2ec = 0x100dee2cc;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x41;
      local_2ec = 0x1900e33500;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_2ec = CONCAT44(local_30,local_b4);
      local_8._0_1_ = 0x42;
      FUN_009a8ee0();
      local_8._0_1_ = 0x43;
      local_2ec = CONCAT44(0x90b91f,(undefined4)local_2ec);
      iVar5 = FUN_00475500();
      local_2ec = *(undefined8 *)(iVar5 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8._0_1_ = 0x44;
      local_2ec = CONCAT44(uVar4,0x90b953);
      FUN_00988fa0();
      local_8._0_1_ = 0x45;
      local_2ec = CONCAT44(local_a0,0x90b96b);
      FUN_00988f20();
      local_2ec = 0xffffffff00000000;
      local_8._0_1_ = 0x46;
      FUN_00448aa0();
      if (0xf < local_54) {
        local_2ec = CONCAT44(local_68[0],&UNK_0090b98d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_38) {
        local_2ec = CONCAT44(local_4c[0],&UNK_0090b9b1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_70) {
        local_2ec = CONCAT44(local_84[0],&UNK_0090b9cb);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      local_8._0_1_ = 0x42;
      local_2ec = CONCAT44(local_b4,0x90b9e7);
      FUN_009a9740();
      if (0xf < local_1c) {
        local_2ec = CONCAT44(local_30[0],&UNK_0090b9f5);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1a;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_8c) {
        local_2ec = CONCAT44(local_a0[0],&UNK_0090ba19);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      break;
    }
  }
  local_8._0_1_ = 0x1a;
  piVar1 = *(int **)(param_1 + 0x120);
  do {
    if (piVar1 == (int *)0x0) {
LAB_0090ba48:
      local_8._0_1_ = 0x1a;
      local_2ec = CONCAT44(0x90ba55,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90ba6a,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x4d;
        local_2ec = CONCAT44(0x90ba7e,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_a0,local_b4);
        local_8._0_1_ = 0x4e;
        FUN_009a8ee0();
        local_8._0_1_ = 0x4f;
        local_2ec = CONCAT44(0x90ba9d,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x50;
        local_2ec = CONCAT44(uVar4,0x90bad2);
        FUN_00988fa0();
        local_8._0_1_ = 0x51;
        local_2ec = CONCAT44(local_30,0x90bae7);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x52;
        FUN_00448aa0();
        if (0xf < local_54) {
          local_2ec = CONCAT44(local_68[0],&UNK_0090bb08);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_38) {
          local_2ec = CONCAT44(local_4c[0],&UNK_0090bb27);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_70) {
          local_2ec = CONCAT44(local_84[0],&UNK_0090bb41);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        local_8._0_1_ = 0x4e;
        local_2ec = CONCAT44(local_b4,0x90bb5d);
        FUN_009a9740();
        if (0xf < local_8c) {
          local_2ec = CONCAT44(local_a0[0],&UNK_0090bb71);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x1a;
        local_8c = 0xf;
        local_90 = 0;
        local_a0[0] = local_a0[0] & 0xffffff00;
        if (0xf < local_1c) {
          local_2ec = CONCAT44(local_30[0],&UNK_0090bb98);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_2ec = CONCAT44(0x90bba8,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90bbbd,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x53;
        local_2ec = CONCAT44(0x90bbd1,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_a0,local_b4);
        local_8._0_1_ = 0x54;
        FUN_009a8ee0();
        local_8._0_1_ = 0x55;
        local_2ec = CONCAT44(0x90bbf0,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x56;
        local_2ec = CONCAT44(uVar4,0x90bc25);
        FUN_00988fa0();
        local_8._0_1_ = 0x57;
        local_2ec = CONCAT44(local_30,0x90bc3a);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x58;
        FUN_00448aa0();
        if (0xf < local_54) {
          local_2ec = CONCAT44(local_68[0],&UNK_0090bc5b);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_38) {
          local_2ec = CONCAT44(local_4c[0],&UNK_0090bc7a);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_70) {
          local_2ec = CONCAT44(local_84[0],&UNK_0090bc94);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        local_8._0_1_ = 0x54;
        local_2ec = CONCAT44(local_b4,0x90bcb0);
        FUN_009a9740();
        if (0xf < local_8c) {
          local_2ec = CONCAT44(local_a0[0],&UNK_0090bcc4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x1a;
        local_8c = 0xf;
        local_90 = 0;
        local_a0[0] = local_a0[0] & 0xffffff00;
        if (0xf < local_1c) {
          local_2ec = CONCAT44(local_30[0],&UNK_0090bceb);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_2ec = CONCAT44(0x90bcfb,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90bd10,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x59;
        local_2ec = CONCAT44(0x90bd21,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_4c,local_b4);
        local_8._0_1_ = 0x5a;
        FUN_009a8ee0();
        local_8._0_1_ = 0x5b;
        local_2ec = CONCAT44(0x90bd40,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x5c;
        local_2ec = CONCAT44(uVar4,0x90bd7b);
        FUN_00988fa0();
        local_8._0_1_ = 0x5d;
        local_2ec = CONCAT44(local_84,0x90bd90);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x5e;
        FUN_00448aa0();
        if (0xf < local_54) {
          local_2ec = CONCAT44(local_68[0],&UNK_0090bdb1);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        local_2ec = CONCAT44(0x90bdcc,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90bdd7,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x5a;
        local_2ec = CONCAT44(local_b4,0x90bde7);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90bdef,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90bdfb,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90be08,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90be1d,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x5f;
        local_2ec = CONCAT44(0x90be2e,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x60;
        FUN_009a8ee0();
        local_8._0_1_ = 0x61;
        local_2ec = CONCAT44(0x90be4d,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x62;
        local_2ec = CONCAT44(uVar4,0x90be88);
        FUN_00988fa0();
        local_8._0_1_ = 99;
        local_2ec = CONCAT44(local_4c,0x90bea0);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 100;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90beba,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90bec5,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90bed0,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x60;
        local_2ec = CONCAT44(local_b4,0x90bee0);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90bee8,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90bef4,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90bf01,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90bf16,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x65;
        local_2ec = CONCAT44(0x90bf27,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x66;
        FUN_009a8ee0();
        local_8._0_1_ = 0x67;
        local_2ec = CONCAT44(0x90bf45,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x68;
        local_2ec = CONCAT44(uVar4,0x90bf7f);
        FUN_00988fa0();
        local_8._0_1_ = 0x69;
        local_2ec = CONCAT44(local_4c,0x90bf97);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x6a;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90bfb1,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90bfbc,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90bfc7,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x66;
        local_2ec = CONCAT44(local_b4,0x90bfd7);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90bfdf,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90bfeb,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90bffd,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c012,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x6b;
        local_2ec = CONCAT44(0x90c023,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x6c;
        FUN_009a8ee0();
        local_8._0_1_ = 0x6d;
        local_2ec = CONCAT44(0x90c041,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x6e;
        local_2ec = CONCAT44(uVar4,0x90c07b);
        FUN_00988fa0();
        local_8._0_1_ = 0x6f;
        local_2ec = CONCAT44(local_4c,0x90c093);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x70;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c0ad,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c0b8,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c0c3,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x6c;
        local_2ec = CONCAT44(local_b4,0x90c0d3);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c0db,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c0e7,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c0f9,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c10e,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x71;
        local_2ec = CONCAT44(0x90c11f,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x72;
        FUN_009a8ee0();
        local_8._0_1_ = 0x73;
        local_2ec = CONCAT44(0x90c13d,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x74;
        local_2ec = CONCAT44(uVar4,0x90c177);
        FUN_00988fa0();
        local_8._0_1_ = 0x75;
        local_2ec = CONCAT44(local_4c,0x90c18f);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x76;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c1a9,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c1b4,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c1bf,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x72;
        local_2ec = CONCAT44(local_b4,0x90c1cf);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c1d7,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c1e3,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c1f5,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c20a,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x77;
        local_2ec = CONCAT44(0x90c21b,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x78;
        FUN_009a8ee0();
        local_8._0_1_ = 0x79;
        local_2ec = CONCAT44(0x90c239,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x7a;
        local_2ec = CONCAT44(uVar4,0x90c273);
        FUN_00988fa0();
        local_8._0_1_ = 0x7b;
        local_2ec = CONCAT44(local_4c,0x90c28b);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x7c;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c2a5,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c2b0,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c2bb,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x78;
        local_2ec = CONCAT44(local_b4,0x90c2cb);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c2d3,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c2df,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c2f1,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c306,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x7d;
        local_2ec = CONCAT44(0x90c317,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x7e;
        FUN_009a8ee0();
        local_8._0_1_ = 0x7f;
        local_2ec = CONCAT44(0x90c335,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x80;
        local_2ec = CONCAT44(uVar4,0x90c36f);
        FUN_00988fa0();
        local_8._0_1_ = 0x81;
        local_2ec = CONCAT44(local_4c,0x90c387);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x82;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c3a1,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c3ac,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c3b7,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x7e;
        local_2ec = CONCAT44(local_b4,0x90c3c7);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c3cf,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c3db,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c3ed,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c402,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x83;
        local_2ec = CONCAT44(0x90c413,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x84;
        FUN_009a8ee0();
        local_8._0_1_ = 0x85;
        local_2ec = CONCAT44(0x90c431,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x86;
        local_2ec = CONCAT44(uVar4,0x90c46b);
        FUN_00988fa0();
        local_8._0_1_ = 0x87;
        local_2ec = CONCAT44(local_4c,0x90c483);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x88;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c49d,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c4a8,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c4b3,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x84;
        local_2ec = CONCAT44(local_b4,0x90c4c3);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c4cb,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c4d7,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c4e9,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c4fe,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x89;
        FUN_009a8ee0();
        local_8._0_1_ = 0x8a;
        local_2ec = CONCAT44(0x90c51d,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x8b;
        local_2ec = CONCAT44(uVar4,0x90c558);
        FUN_00988fa0();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x8c;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c579,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c580,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x89;
        local_2ec = CONCAT44(local_b4,0x90c590);
        FUN_009a9740();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c59c,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c5a9,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c5be,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x8d;
        local_2ec = CONCAT44(0x90c5cf,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x8e;
        FUN_009a8ee0();
        local_8._0_1_ = 0x8f;
        local_2ec = CONCAT44(0x90c5ed,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x90;
        local_2ec = CONCAT44(uVar4,0x90c627);
        FUN_00988fa0();
        local_8._0_1_ = 0x91;
        local_2ec = CONCAT44(local_4c,0x90c63f);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x92;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c659,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c664,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c66f,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x8e;
        local_2ec = CONCAT44(local_b4,0x90c67f);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c687,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c693,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(0x90c6a5,(undefined4)local_2ec);
      cVar3 = FUN_0090a800();
      if (cVar3 != '\0') {
        local_2ec = CONCAT44(0x90c6ba,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x93;
        local_2ec = CONCAT44(0x90c6cb,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x94;
        FUN_009a8ee0();
        local_8._0_1_ = 0x95;
        local_2ec = CONCAT44(0x90c6e9,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x96;
        local_2ec = CONCAT44(uVar4,0x90c723);
        FUN_00988fa0();
        local_8._0_1_ = 0x97;
        local_2ec = CONCAT44(local_4c,0x90c73b);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x98;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90c755,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c760,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90c76b,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x94;
        local_2ec = CONCAT44(local_b4,0x90c77b);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90c783,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        local_2ec = CONCAT44(0x90c78f,(undefined4)local_2ec);
        FUN_00408ad0();
      }
      local_2ec = CONCAT44(param_2,0x90c7a3);
      FUN_00989330();
      local_16c = 1;
      local_8 = CONCAT31(local_8._1_3_,0x17);
      local_2ec = CONCAT44(local_180,0x90c7bd);
      FUN_009a9740();
      if (0xf < local_1c0) {
        local_2ec = CONCAT44(local_1d4[0],&UNK_0090c7d1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c0 = 0xf;
      local_1c4 = 0;
      local_1d4[0] = local_1d4[0] & 0xffffff00;
      if (0xf < local_1a4) {
        local_2ec = CONCAT44(local_1b8[0],&UNK_0090c7ff);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1a4 = 0xf;
      local_1a8 = 0;
      local_1b8[0] = local_1b8[0] & 0xffffff00;
      if (0xf < local_1dc) {
        local_2ec = CONCAT44(local_1f0[0],&UNK_0090c828);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1dc = 0xf;
      local_1e0 = 0;
      local_1f0[0] = local_1f0[0] & 0xffffff00;
      if (0xf < local_138) {
        local_2ec = CONCAT44(local_14c,&UNK_0090c851);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_138 = 0xf;
      local_13c = 0;
      local_14c = local_14c & 0xffffff00;
      if (0xf < local_c8) {
        local_2ec = CONCAT44(local_dc,&UNK_0090c87a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_2;
    }
    if (*piVar1 == 0x942) {
      local_2ec = CONCAT44(0x90c8a0,(undefined4)local_2ec);
      FUN_009885d0();
      local_8._0_1_ = 0x47;
      local_2ec = CONCAT44(0x90c8b4,(undefined4)local_2ec);
      FUN_009885d0();
      local_2ec = CONCAT44(local_a0,local_b4);
      local_8._0_1_ = 0x48;
      FUN_009a8ee0();
      local_8._0_1_ = 0x49;
      local_2ec = CONCAT44(0x90c8d2,(undefined4)local_2ec);
      iVar5 = FUN_00475500();
      local_2ec = *(undefined8 *)(iVar5 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8._0_1_ = 0x4a;
      local_2ec = CONCAT44(uVar4,0x90c906);
      FUN_00988fa0();
      local_8._0_1_ = 0x4b;
      local_2ec = CONCAT44(local_30,0x90c91b);
      FUN_00988f20();
      local_2ec = 0xffffffff00000000;
      local_8._0_1_ = 0x4c;
      FUN_00448aa0();
      if (0xf < local_54) {
        local_2ec = CONCAT44(local_68[0],&UNK_0090c941);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_38) {
        local_2ec = CONCAT44(local_4c[0],&UNK_0090c960);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_70) {
        local_2ec = CONCAT44(local_84[0],&UNK_0090c97a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      local_8._0_1_ = 0x48;
      local_2ec = CONCAT44(local_b4,0x90c996);
      FUN_009a9740();
      if (0xf < local_8c) {
        local_2ec = CONCAT44(local_a0[0],&UNK_0090c9aa);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1a;
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      if (0xf < local_1c) {
        local_2ec = CONCAT44(local_30[0],&UNK_0090c9d5);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_0090ba48;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
joined_r0x0090b39c:
  if (piVar1 == (int *)0x0) {
LAB_0090b50f:
    if ((*(int *)(param_1 + 0x180) == 0) || ((int)local_14 < 5)) {
      if (local_20 != 0) {
        local_2ec = CONCAT44(0x90b5cc,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x32;
        local_2ec = CONCAT44(0x90b5dd,(undefined4)local_2ec);
        FUN_009885d0();
        local_8._0_1_ = 0x33;
        local_2ec = CONCAT44(0x90b5ee,(undefined4)local_2ec);
        FUN_009885d0();
        local_2ec = CONCAT44(local_68,local_b4);
        local_8._0_1_ = 0x34;
        FUN_009a8ee0();
        local_8._0_1_ = 0x35;
        local_2ec = CONCAT44(0x90b60c,(undefined4)local_2ec);
        iVar5 = FUN_00475500();
        local_2ec = *(undefined8 *)(iVar5 + 0x74);
        uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x36;
        local_2ec = CONCAT44(uVar4,0x90b646);
        FUN_00988fa0();
        local_8._0_1_ = 0x37;
        local_2ec = CONCAT44(local_4c,0x90b65e);
        FUN_00988f20();
        local_8._0_1_ = 0x38;
        local_2ec = CONCAT44(local_30,0x90b673);
        FUN_00988f20();
        local_8._0_1_ = 0x39;
        local_2ec = CONCAT44(local_84,0x90b688);
        FUN_00988f20();
        local_2ec = 0xffffffff00000000;
        local_8._0_1_ = 0x3a;
        FUN_00448aa0();
        local_2ec = CONCAT44(0x90b6a2,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90b6ad,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90b6b8,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90b6c3,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90b6ce,(undefined4)local_2ec);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x34);
        local_2ec = CONCAT44(local_b4,0x90b6de);
        FUN_009a9740();
        local_2ec = CONCAT44(0x90b6e6,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90b6ee,(undefined4)local_2ec);
        FUN_00408ad0();
        local_2ec = CONCAT44(0x90b6f6,(undefined4)local_2ec);
        FUN_00408ad0();
      }
    }
    else {
      local_2ec = CONCAT44(param_1 + 0x170,local_b4);
      FUN_009a8ee0();
      local_8._0_1_ = 0x2f;
      local_2ec = CONCAT44(0x90b548,(undefined4)local_2ec);
      iVar5 = FUN_00475500();
      local_2ec = *(undefined8 *)(iVar5 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8._0_1_ = 0x30;
      local_2ec = CONCAT44(uVar4,0x90b57c);
      FUN_00988fa0();
      local_2ec = 0xffffffff00000000;
      local_8._0_1_ = 0x31;
      FUN_00448aa0();
      local_2ec = CONCAT44(0x90b59a,(undefined4)local_2ec);
      FUN_00408ad0();
      local_2ec = CONCAT44(0x90b5a1,(undefined4)local_2ec);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      local_2ec = CONCAT44(local_b4,0x90b5b1);
      FUN_009a9740();
    }
    local_8._0_1_ = 0x1a;
    if (0xf < local_1c) {
      local_2ec = CONCAT44(local_30[0],&UNK_0090b70d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_0090b710;
  }
  piVar2 = (int *)*piVar1;
  piVar1 = (int *)piVar1[2];
  if (piVar2 != (int *)0x0) {
    if ((piVar2[0x13] - piVar2[0x12] & 0xfffffffcU) == 0) {
      local_2bc = 0;
    }
    else {
      local_2bc = *(undefined4 *)piVar2[0x12];
    }
  }
  local_2ec = CONCAT44(local_2d4,0x90b3e8);
  cVar3 = (**(code **)(*(int *)(param_1 + 0xa0) + 0x18))();
  if (cVar3 != '\0') {
    local_14 = local_14 + 1;
    if (local_14 == (undefined1 *)0x8) {
      local_2ec = 0x900e334c4;
      FUN_00448740();
      goto LAB_0090b50f;
    }
    if (local_20 != 0) {
      local_2ec = 0x200df8148;
      FUN_00448740();
    }
    local_2ec = 0x200df8514;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x2b;
    local_2ec = CONCAT44(local_84,0x90b44d);
    uVar4 = (**(code **)(*piVar2 + 0x20))();
    local_8._0_1_ = 0x2c;
    local_2ec = CONCAT44(uVar4,0x90b45f);
    FUN_00988fa0();
    local_8._0_1_ = 0x2d;
    local_2ec = CONCAT44(local_a0,0x90b477);
    FUN_00988f20();
    local_2ec = 0xffffffff00000000;
    local_8._0_1_ = 0x2e;
    FUN_00448aa0();
    if (0xf < local_54) {
      local_2ec = CONCAT44(local_68[0],&UNK_0090b495);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_38) {
      local_2ec = CONCAT44(local_4c[0],&UNK_0090b4b4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      local_2ec = CONCAT44(local_84[0],&UNK_0090b4ce);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x2a);
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_8c) {
      local_2ec = CONCAT44(local_a0[0],&UNK_0090b4f2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  goto joined_r0x0090b39c;
}

