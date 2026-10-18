// FUN_008e0320 @ 008e0320 body=[[008e0320, 008e03ca] [008e03ce, 008e0483] [008e0487, 008e04a6] [008e04aa, 008e04c0] [008e04c4, 008e04da] [008e04de, 008e04fe] [008e0502, 008e05ac] [008e05b0, 008e05c6] [008e05ca, 008e05e6] [008e05ea, 008e0609] [008e060d, 008e062d] [008e0631, 008e06d6] [008e06da, 008e06f0] [008e06f4, 008e0710] [008e0714, 008e0733] [008e0737, 008e0757] [008e075b, 008e07cc] [008e07d0, 008e07e7] [008e07eb, 008e082a] [008e0833, 008e0886] [008e088a, 008e093e] [008e0942, 008e0958] [008e095c, 008e0978] [008e097c, 008e099b] [008e099f, 008e09bf] [008e09c3, 008e0a31] [008e0a35, 008e0a4c] [008e0a50, 008e0a83] [008e0a8c, 008e0aef] [008e0af3, 008e0bac] [008e0bb0, 008e0bcb] [008e0bcf, 008e0beb] [008e0bef, 008e0c0e] [008e0c12, 008e0c32] [008e0c36, 008e0cb9] [008e0cbd, 008e0cd8] [008e0cdc, 008e0cf8] [008e0cfc, 008e0d1b] [008e0d1f, 008e0d3f] [008e0d43, 008e0dc4] [008e0dc8, 008e0fda]]


undefined4 FUN_008e0320(undefined4 param_1,int param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint local_dc [2];
  undefined1 local_d4 [4];
  int local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c0;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [2];
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b66722;
  local_10 = ExceptionList;
  local_c0 = 0;
  local_a0 = *(undefined4 *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    local_a0 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x24) + 0x14) + 0x6c);
  }
  ExceptionList = &local_10;
  cVar2 = (**(code **)(**(int **)(param_2 + 0x14) + 0x20))();
  if (param_3 == '\0') {
    if (cVar2 == '\0') {
      FUN_009885d0();
      local_8 = 0x35;
      FUN_009a8ee0(local_40,local_2c);
      local_8._0_1_ = 0x37;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x38;
      FUN_009885d0();
      local_8._0_1_ = 0x39;
      uVar3 = FUN_00974c50(local_a0);
      local_8._0_1_ = 0x3a;
      FUN_00988fa0(uVar3);
      local_8._0_1_ = 0x3b;
      uVar3 = FUN_00988f20(local_bc);
      local_8._0_1_ = 0x3c;
      FUN_009a9980(uVar3);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x37;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x3d;
      iVar4 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar4 + 0x74),
                   (int)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20));
      local_8 = CONCAT31(local_8._1_3_,0x3e);
      FUN_00988f20(local_80);
      local_c0 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
    }
    else {
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = (uint)local_9c[0]._1_3_ << 8;
      FUN_00409350("POP_HAVE_X_INY",0xe);
      local_8 = 0x21;
      FUN_009a8ee0(local_40,local_9c);
      local_8._0_1_ = 0x23;
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9c[0]);
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = local_dc[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      local_8._0_1_ = 0x24;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      FUN_00409350(&DAT_00df7e80,4);
      local_8._0_1_ = 0x25;
      uVar3 = FUN_0096d650(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x68),local_bc);
      local_8._0_1_ = 0x26;
      FUN_00988fa0(uVar3);
      local_8._0_1_ = 0x27;
      uVar3 = FUN_00988f20(local_dc);
      local_8._0_1_ = 0x28;
      FUN_009a9980(uVar3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_bc[0]);
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
      local_8._0_1_ = 0x23;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_dc[0]);
      }
      FUN_009885d0();
      local_8._0_1_ = 0x29;
      FUN_009885d0();
      local_8._0_1_ = 0x2a;
      uVar3 = (**(code **)(**(int **)(*(int *)(param_2 + 0x14) + 100) + 0x1c))(local_bc);
      local_8._0_1_ = 0x2b;
      FUN_00988fa0(uVar3);
      local_8._0_1_ = 0x2c;
      uVar3 = FUN_00988f20(local_dc);
      local_8._0_1_ = 0x2d;
      FUN_009a9980(uVar3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_bc[0]);
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
      local_8._0_1_ = 0x23;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_dc[0]);
      }
      FUN_009885d0();
      local_8._0_1_ = 0x2e;
      FUN_009885d0();
      local_8._0_1_ = 0x2f;
      uVar3 = FUN_00974c50(local_a0);
      local_8._0_1_ = 0x30;
      FUN_00988fa0(uVar3);
      local_8._0_1_ = 0x31;
      uVar3 = FUN_00988f20(local_bc);
      local_8._0_1_ = 0x32;
      FUN_009a9980(uVar3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x23;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x33;
      iVar4 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar4 + 0x74),
                   (int)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20));
      local_8 = CONCAT31(local_8._1_3_,0x34);
      FUN_00988f20(local_2c);
      local_c0 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
    }
    local_8 = local_8 & 0xffffff00;
    FUN_009a9740(local_40);
  }
  else if (cVar2 == '\0') {
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = (uint)local_9c[0]._1_3_ << 8;
    FUN_00409350("POP_NOT_OF_CULTURE",0x12);
    local_8 = 0x16;
    FUN_009a8ee0(local_40,local_9c);
    local_8._0_1_ = 0x18;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0x19;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e29cf4,4);
    local_8._0_1_ = 0x1a;
    uVar3 = FUN_00974c50(local_a0);
    local_8._0_1_ = 0x1b;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 0x1c;
    uVar3 = FUN_00988f20(local_dc);
    local_8._0_1_ = 0x1d;
    FUN_009a9980(uVar3);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_8._0_1_ = 0x18;
    local_50 = 0xf;
    local_54 = 0;
    uVar1 = local_64[0] >> 8;
    local_64[0] = uVar1 << 8;
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_dc[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = uVar1 << 8;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0x1e;
    iVar4 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar4 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20));
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    FUN_00988f20(local_64);
    local_c0 = 1;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8 = 0x20;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c);
    }
  }
  else {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("POP_DONT_HAVE_X_INY",0x13);
    local_8 = 1;
    FUN_009a8ee0(local_d4,local_64);
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e80,4);
    local_8._0_1_ = 5;
    uVar3 = FUN_0096d650(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x68),local_2c);
    local_8._0_1_ = 6;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 7;
    uVar3 = FUN_00988f20(local_9c);
    local_8._0_1_ = 8;
    FUN_009a9980(uVar3);
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 3;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 9;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00df85c0,4);
    local_8._0_1_ = 10;
    uVar3 = (**(code **)(**(int **)(*(int *)(param_2 + 0x14) + 100) + 0x1c))(local_bc);
    local_8._0_1_ = 0xb;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 0xc;
    uVar3 = FUN_00988f20(local_9c);
    local_8._0_1_ = 0xd;
    FUN_009a9980(uVar3);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 3;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0xe;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00e29cf4,4);
    local_8._0_1_ = 0xf;
    uVar3 = FUN_00974c50(local_a0);
    local_8._0_1_ = 0x10;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 0x11;
    uVar3 = FUN_00988f20(local_9c);
    local_8._0_1_ = 0x12;
    FUN_009a9980(uVar3);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 3;
    local_34 = 0xf;
    local_38 = 0;
    uVar1 = local_48[0] >> 8;
    local_48[0] = uVar1 << 8;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = uVar1 << 8;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 0x13;
    iVar4 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar4 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20));
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_00988f20(local_48);
    local_c0 = 1;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8 = 0x15;
    FUN_009adb70();
    if (local_d0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d0);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

