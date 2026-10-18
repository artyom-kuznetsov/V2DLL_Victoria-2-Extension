// FUN_007577d0 @ 007577d0 body=[[007577d0, 0075790a] [0075790e, 00757927] [0075792b, 00757948] [0075794c, 007579cd] [007579d1, 007579ea] [007579ee, 00757a07] [00757a0b, 00757a25] [00757a29, 00757aa6] [00757aaa, 00757ac3] [00757ac7, 00757ae0] [00757ae4, 00757afe] [00757b02, 00757ba1] [00757ba5, 00757bf9] [00757bfd, 00757c19] [00757c1d, 00757c49] [00757c4d, 00757d0a] [00757d0e, 00757d2a] [00757d2e, 00757d4d] [00757d51, 00757d6b] [00757d6f, 00757dec] [00757df0, 00757e0c] [00757e10, 00757e2f] [00757e33, 00757e4d] [00757e51, 00757ed5] [00757ed9, 00757f24] [00757f28, 00757f48] [00757f4c, 007580d3]]


void FUN_007577d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 ***pppuStack_28c;
  undefined4 uStack_288;
  undefined1 *puStack_284;
  undefined **local_1f8 [48];
  undefined **local_138 [18];
  undefined1 local_f0 [8];
  undefined4 ***local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  undefined ***local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  undefined1 *local_ac;
  undefined ***local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined ***local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined4 ***local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined ***local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined ***local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb0355;
  local_10 = ExceptionList;
  puStack_284 = local_f0;
  uStack_288 = 0x757805;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))();
  if (*(char *)(param_1 + 0x761) == '\0') {
    if (*(char *)(param_1 + 0x762) != '\0') {
      uStack_288 = 1;
      pppuStack_28c = (undefined4 ***)0x758041;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1e8) + 0xe4) + 0x10))();
      pppuStack_28c = (undefined4 ***)0xab8;
      iVar4 = FUN_00aae9af();
      local_8 = 0x23;
      if (iVar4 == 0) {
        pppuStack_28c = (undefined4 ***)0x0;
      }
      else {
        pppuStack_28c = *(undefined4 ****)(param_1 + 0x1e8);
        pppuStack_28c =
             (undefined4 ***)
             FUN_006b65a0(iVar4,*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x54));
      }
      local_ac = (undefined1 *)&pppuStack_28c;
      local_8 = 0x24;
      FUN_009df260();
      ExceptionList = local_10;
      return;
    }
    uStack_288 = 0x7580c1;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x74c) + *(int *)(param_1 + 0x75c) * 4) + 0x10))();
    ExceptionList = local_10;
    return;
  }
  uStack_288 = 1;
  pppuStack_28c = (undefined4 ***)0x757828;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x1e8) + 0xe4) + 0x10))();
  if (*(char *)(param_1 + 0x5c) == '\0') {
    pppuStack_28c = (undefined4 ***)0x26;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (undefined ***)((uint)local_8c[0] & 0xffffff00);
    FUN_00409350("\n\n\t\t[[ Launching SINGLEPLAYER-game ]]\n");
    local_8 = 0x12;
    pppuStack_28c = (undefined4 ***)0x1;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 0x13;
    pppuStack_28c = local_70;
    pppuStack_28c = (undefined4 ***)FUN_0043acd0(DAT_012588e8 + 0x2c3);
    local_8._0_1_ = 0x14;
    FUN_00988fa0();
    pppuStack_28c = local_34;
    local_8._0_1_ = 0x15;
    uVar3 = FUN_00988f20();
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 0x16;
    FUN_00448aa0(uVar3,0);
    if (0xf < local_3c) {
      pppuStack_28c = (undefined4 ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (undefined ***)((uint)local_50[0] & 0xffffff00);
    if (0xf < local_94) {
      pppuStack_28c = (undefined4 ***)local_a8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = (undefined ***)((uint)local_a8[0] & 0xffffff00);
    if (0xf < local_5c) {
      pppuStack_28c = local_70[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x12;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ***)((uint)local_70[0] & 0xffffff00);
    if (0xf < local_20) {
      pppuStack_28c = (undefined4 ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_28c = (undefined4 ***)0x2;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350(&DAT_00dfc988);
    local_8._0_1_ = 0x17;
    pppuStack_28c = (undefined4 ***)0x757d9d;
    pppuStack_28c = (undefined4 ***)FUN_0055dd40();
    local_8._0_1_ = 0x18;
    FUN_00988fa0();
    pppuStack_28c = local_34;
    local_8._0_1_ = 0x19;
    uVar3 = FUN_00988f20();
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 0x1a;
    FUN_00448aa0(uVar3,0);
    if (0xf < local_3c) {
      pppuStack_28c = (undefined4 ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (undefined ***)((uint)local_50[0] & 0xffffff00);
    if (0xf < local_94) {
      pppuStack_28c = (undefined4 ***)local_a8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = (undefined ***)((uint)local_a8[0] & 0xffffff00);
    if (0xf < local_5c) {
      pppuStack_28c = local_70[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x12;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ***)((uint)local_70[0] & 0xffffff00);
    if (0xf < local_20) {
      pppuStack_28c = (undefined4 ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_28c = (undefined4 ***)0xc;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350("frontend.cpp");
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 0x1b;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ***)((uint)local_70[0] & 0xffffff00);
    FUN_00408ed0(local_8c,0);
    pppuStack_28c = (undefined4 ***)0x10002;
    local_8._0_1_ = 0x1c;
    uVar3 = FUN_004015b0(local_34,0x2d5);
    local_8._0_1_ = 0x1f;
    pppuStack_28c = local_70[0];
    if (local_5c < 0x10) {
      pppuStack_28c = local_70;
    }
    local_18 = (undefined ***)FUN_00418e30(uVar3);
    local_8._0_1_ = 0x1e;
    if (0xf < local_5c) {
      pppuStack_28c = local_70[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ***)((uint)local_70[0] & 0xffffff00);
    pppuStack_28c = (undefined4 ***)local_18;
    FUN_00401280();
    pppuStack_28c = (undefined4 ***)local_1f8;
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    FUN_00987ac0();
    pppuStack_28c = (undefined4 ***)local_1f8;
    local_1f8[0] = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < local_20) {
      pppuStack_28c = (undefined4 ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    if (0xf < local_78) {
      pppuStack_28c = (undefined4 ***)local_8c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (undefined ***)((uint)local_8c[0] & 0xffffff00);
  }
  else {
    pppuStack_28c = (undefined4 ***)0x25;
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = (undefined ***)((uint)local_c8[0] & 0xffffff00);
    FUN_00409350("\n\n\t\t[[ Launching MULTIPLAYER-game ]]\n");
    local_8 = 0;
    pppuStack_28c = (undefined4 ***)0x3;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = (undefined ***)((uint)local_a8[0] & 0xffffff00);
    FUN_00409350(&DAT_00dfbbd0);
    local_8._0_1_ = 1;
    if (*(char *)(param_1 + 0x158) == '\0') {
      pppuStack_28c = (undefined4 ***)0x2;
      FUN_00409350(&DAT_00dfbbd4);
    }
    pppuStack_28c = (undefined4 ***)0x1;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350(&DAT_00dee2cc);
    pppuStack_28c = local_a8;
    local_8._0_1_ = 2;
    FUN_00988fa0();
    pppuStack_28c = local_34;
    local_8._0_1_ = 3;
    uVar3 = FUN_00988f20();
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar3,0);
    if (0xf < local_3c) {
      pppuStack_28c = (undefined4 ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (undefined ***)((uint)local_50[0] & 0xffffff00);
    if (0xf < local_78) {
      pppuStack_28c = (undefined4 ***)local_8c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (undefined ***)((uint)local_8c[0] & 0xffffff00);
    if (0xf < local_20) {
      pppuStack_28c = (undefined4 ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_28c = (undefined4 ***)0x1;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 5;
    pppuStack_28c = local_70;
    pppuStack_28c = (undefined4 ***)FUN_0043acd0(DAT_012588e8 + 0x2c3);
    local_8._0_1_ = 6;
    FUN_00988fa0();
    pppuStack_28c = local_34;
    local_8._0_1_ = 7;
    uVar3 = FUN_00988f20();
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 8;
    FUN_00448aa0(uVar3,0);
    if (0xf < local_3c) {
      pppuStack_28c = (undefined4 ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (undefined ***)((uint)local_50[0] & 0xffffff00);
    if (0xf < local_78) {
      pppuStack_28c = (undefined4 ***)local_8c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (undefined ***)((uint)local_8c[0] & 0xffffff00);
    if (0xf < local_5c) {
      pppuStack_28c = local_70[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ***)((uint)local_70[0] & 0xffffff00);
    if (0xf < local_20) {
      pppuStack_28c = (undefined4 ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_28c = (undefined4 ***)0x2;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined ***)((uint)local_34[0] & 0xffffff00);
    FUN_00409350(&DAT_00dfc988);
    local_8._0_1_ = 9;
    pppuStack_28c = (undefined4 ***)0x757a57;
    pppuStack_28c = (undefined4 ***)FUN_0055dd40();
    local_8._0_1_ = 10;
    FUN_00988fa0();
    pppuStack_28c = local_34;
    local_8._0_1_ = 0xb;
    uVar3 = FUN_00988f20();
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 0xc;
    FUN_00448aa0(uVar3,0);
    if (0xf < local_3c) {
      pppuStack_28c = (undefined4 ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    uVar2 = (uint)local_50[0] >> 8;
    local_50[0] = (undefined ***)(uVar2 << 8);
    if (0xf < local_78) {
      pppuStack_28c = (undefined4 ***)local_8c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (undefined ***)((uint)local_8c[0] & 0xffffff00);
    if (0xf < local_5c) {
      pppuStack_28c = local_70[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ***)((uint)local_70[0] & 0xffffff00);
    if (0xf < local_20) {
      pppuStack_28c = (undefined4 ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppuStack_28c = (undefined4 ***)0xc;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (undefined ***)(uVar2 << 8);
    FUN_00409350("frontend.cpp");
    pppuStack_28c = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 0xd;
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = (undefined4 ***)((uint)local_e8[0] & 0xffffff00);
    FUN_00408ed0(local_c8,0);
    pppuStack_28c = (undefined4 ***)0x10002;
    local_8._0_1_ = 0xe;
    uVar3 = FUN_004015b0(local_50,0x2ce);
    local_8._0_1_ = 0x11;
    pppuStack_28c = local_e8[0];
    if (local_d4 < 0x10) {
      pppuStack_28c = local_e8;
    }
    local_18 = (undefined ***)FUN_00418e30(uVar3);
    local_8._0_1_ = 0x10;
    if (0xf < local_d4) {
      pppuStack_28c = local_e8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = (undefined4 ***)((uint)local_e8[0] & 0xffffff00);
    pppuStack_28c = (undefined4 ***)local_18;
    FUN_00401280();
    pppuStack_28c = (undefined4 ***)local_138;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_00987ac0();
    pppuStack_28c = (undefined4 ***)local_138;
    local_138[0] = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < local_3c) {
      pppuStack_28c = (undefined4 ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (undefined ***)((uint)local_50[0] & 0xffffff00);
    if (0xf < local_94) {
      pppuStack_28c = (undefined4 ***)local_a8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = (undefined ***)((uint)local_a8[0] & 0xffffff00);
    if (0xf < local_b4) {
      pppuStack_28c = (undefined4 ***)local_c8[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = (undefined ***)((uint)local_c8[0] & 0xffffff00);
  }
  local_8 = 0xffffffff;
  pppuStack_28c = DAT_012588e8;
  FUN_0068b870();
  pppuStack_28c = (undefined4 ***)0x1ec8;
  local_18 = (undefined ***)FUN_00aae9af();
  local_8 = 0x20;
  if (local_18 == (undefined ***)0x0) {
    local_18 = (undefined ***)0x0;
  }
  else {
    pppuStack_28c = (undefined4 ***)(param_1 + 0x98);
    local_18 = (undefined ***)
               FUN_0064a6d0(local_18,*(undefined4 *)(param_1 + 0x1e4),
                            *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x1e8),
                            *(undefined1 *)(param_1 + 0x5c));
  }
  iVar4 = *(int *)(param_1 + 0x1e8);
  local_8 = 0x22;
  *(undefined1 *)(iVar4 + 0x88) = 1;
  puVar1 = *(undefined4 **)(iVar4 + 0xe0);
  local_ac = (undefined1 *)0x0;
  if ((local_18 != (undefined ***)puVar1) && (puVar1 != (undefined4 *)0x0)) {
    pppuStack_28c = (undefined4 ***)0x1;
    (**(code **)*puVar1)();
  }
  local_8 = 0xffffffff;
  *(undefined ****)(iVar4 + 0xe0) = local_18;
  pppuStack_28c = (undefined4 ***)0x758011;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x74c) + *(int *)(param_1 + 0x75c) * 4) + 0xc))();
  ExceptionList = local_10;
  return;
}

