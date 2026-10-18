// FUN_0083ec10 @ 0083ec10 body=[[0083ec10, 0083edba] [0083edbe, 0083ede6] [0083edea, 0083ee0d] [0083ee11, 0083ee2b] [0083ee2f, 0083ee56] [0083ee5a, 0083ee77] [0083ee7b, 0083eea1] [0083eea5, 0083eecf] [0083eee4, 0083f018] [0083f01c, 0083f033] [0083f037, 0083f051] [0083f055, 0083f075] [0083f079, 0083f0af] [0083f0b3, 0083f0d9] [0083f0dd, 0083f103] [0083f107, 0083f131] [0083f146, 0083f454] [0083f458, 0083f471] [0083f475, 0083f48f] [0083f493, 0083f4b3] [0083f4b7, 0083f4ed] [0083f4f1, 0083f517] [0083f51b, 0083f541] [0083f545, 0084132c] [00841330, 008415b8] [008415bc, 00841638]]


void FUN_0083ec10(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 local_33c;
  undefined1 local_328 [140];
  undefined1 local_29c [20];
  undefined1 local_288 [28];
  undefined1 local_26c [28];
  undefined1 local_250 [84];
  undefined1 local_1fc [56];
  undefined1 local_1c4 [28];
  undefined1 local_1a8 [84];
  undefined1 local_154 [28];
  undefined1 *local_138;
  undefined1 local_134 [20];
  uint local_120 [4];
  undefined4 local_110;
  uint local_10c;
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [2];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  uint local_9c;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined1 *local_30;
  char local_25;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar5 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba442c;
  local_10 = ExceptionList;
  if (((*(char *)(param_1 + 0xcf5) != '\0') || (*(char *)(param_1 + 0xcf4) != '\0')) &&
     (local_34 = *(undefined4 *)(param_1 + 0xcf8),
     *(int *)(param_1 + 0xcfc) == *(int *)(param_2 + 0x20))) {
    ExceptionList = &local_10;
    *param_3 = 1000;
    if (param_4 == 0) {
      ExceptionList = pvVar5;
      return;
    }
    local_33c = 0x300dfc7b4;
    local_f0 = 0xf;
    local_f4 = 0;
    local_104[0] = (uint)local_104[0]._1_3_ << 8;
    FUN_00409350();
    local_8 = 0;
    local_33c = 0x500e00658;
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 1;
    local_33c = 0x1100e26974;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_33c = CONCAT44(local_50,0x83ed07);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_b0,local_134);
    local_8._0_1_ = 3;
    FUN_009a8ee0();
    local_8._0_1_ = 4;
    local_33c = CONCAT44(0x83ed2c,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 5;
    local_33c = CONCAT44(local_cc,0x83ed67);
    FUN_00988f20();
    local_8._0_1_ = 6;
    local_33c = CONCAT44(uVar7,0x83ed79);
    FUN_00988f20();
    local_8._0_1_ = 7;
    local_33c = CONCAT44(local_104,0x83ed91);
    FUN_00988f20();
    local_33c = 0xffffffff00000000;
    local_8._0_1_ = 8;
    FUN_00448aa0();
    if (0xf < local_10c) {
      local_33c = CONCAT44(local_120[0],&UNK_0083edbb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_10c = 0xf;
    local_110 = 0;
    local_120[0] = local_120[0] & 0xffffff00;
    if (0xf < local_d4) {
      local_33c = CONCAT44(local_e8[0],&UNK_0083ede7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = local_e8[0] & 0xffffff00;
    if (0xf < local_74) {
      local_33c = CONCAT44(local_88[0],&UNK_0083ee0e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_58) {
      local_33c = CONCAT44(local_6c[0],&UNK_0083ee2c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,3);
    local_33c = CONCAT44(local_134,0x83ee49);
    FUN_009a9740();
    if (0xf < local_3c) {
      local_33c = CONCAT44(local_50[0],&UNK_0083ee57);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_9c) {
      local_33c = CONCAT44(local_b0[0],&UNK_0083ee78);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    if (0xf < local_b8) {
      local_33c = CONCAT44(local_cc[0],&UNK_0083eea2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc[0] = local_cc[0] & 0xffffff00;
LAB_0083eeb8:
    local_9c = 0xf;
    local_a0 = 0;
    local_b8 = 0xf;
    local_bc = 0;
    if (local_f0 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    local_33c = CONCAT44(local_104[0],&UNK_0083eed0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (((*(char *)(param_1 + 0xcf5) != '\0') || (*(char *)(param_1 + 0xcf4) != '\0')) &&
     (local_34 = *(undefined4 *)(param_1 + 0xcf8),
     *(int *)(param_1 + 0xcfc) != *(int *)(param_2 + 0x20))) {
    ExceptionList = &local_10;
    *param_3 = -1000;
    if (param_4 == 0) {
      ExceptionList = pvVar5;
      return;
    }
    local_33c = CONCAT44(0x83ef2f,(undefined4)local_33c);
    FUN_009885d0();
    local_8 = 9;
    local_33c = CONCAT44(0x83ef46,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 10;
    local_33c = CONCAT44(0x83ef5a,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0xb;
    local_33c = CONCAT44(local_120,0x83ef6f);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_104,local_134);
    local_8._0_1_ = 0xc;
    FUN_009a8ee0();
    local_8._0_1_ = 0xd;
    local_33c = CONCAT44(0x83ef8f,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 0xe;
    local_33c = CONCAT44(local_cc,0x83efcc);
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    local_33c = CONCAT44(uVar7,0x83efe0);
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    local_33c = CONCAT44(local_b0,0x83eff9);
    FUN_00988f20();
    local_33c = 0xffffffff00000000;
    local_8._0_1_ = 0x11;
    FUN_00448aa0();
    if (0xf < local_3c) {
      local_33c = CONCAT44(local_50[0],&UNK_0083f019);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_58) {
      local_33c = CONCAT44(local_6c[0],&UNK_0083f034);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_74) {
      local_33c = CONCAT44(local_88[0],&UNK_0083f052);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_d4) {
      local_33c = CONCAT44(local_e8[0],&UNK_0083f076);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = local_e8[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_33c = CONCAT44(local_134,0x83f09c);
    FUN_009a9740();
    if (0xf < local_10c) {
      local_33c = CONCAT44(local_120[0],&UNK_0083f0b0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_10c = 0xf;
    local_110 = 0;
    local_120[0] = local_120[0] & 0xffffff00;
    if (0xf < local_f0) {
      local_33c = CONCAT44(local_104[0],&UNK_0083f0da);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f0 = 0xf;
    local_f4 = 0;
    local_104[0] = local_104[0] & 0xffffff00;
    if (local_b8 < 0x10) {
      local_b8 = 0xf;
      local_bc = 0;
      local_cc[0] = local_cc[0] & 0xffffff00;
      if (local_9c < 0x10) {
        ExceptionList = local_10;
        return;
      }
      local_33c = CONCAT44(local_b0[0],&UNK_0083f132);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_33c = CONCAT44(local_cc[0],&UNK_0083f104);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = *(undefined4 *)(param_1 + 0x1428);
  if (((*(int *)(param_1 + 0x142c) != 0) && (*(int *)(param_1 + 0x142c) != *(int *)(param_2 + 0x20))
      ) && (*(char *)(param_2 + 0x31) != '\0')) {
    ExceptionList = &local_10;
    *param_3 = -1000;
    if (param_4 == 0) {
      ExceptionList = pvVar5;
      return;
    }
    local_33c = CONCAT44(0x83f19d,(undefined4)local_33c);
    FUN_009885d0();
    local_8 = 0x12;
    local_33c = CONCAT44(0x83f1b1,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x13;
    local_33c = CONCAT44(0x83f1c2,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x14;
    local_33c = CONCAT44(local_b0,0x83f1d7);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_50,local_134);
    local_8._0_1_ = 0x15;
    FUN_009a8ee0();
    local_8._0_1_ = 0x16;
    local_33c = CONCAT44(0x83f1f7,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 0x17;
    local_33c = CONCAT44(local_6c,0x83f231);
    FUN_00988f20();
    local_8._0_1_ = 0x18;
    local_33c = CONCAT44(uVar7,0x83f243);
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    local_33c = CONCAT44(local_88,0x83f25b);
    FUN_00988f20();
    local_33c = 0xffffffff00000000;
    local_8._0_1_ = 0x1a;
    FUN_00448aa0();
    local_33c = CONCAT44(0x83f273,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f27e,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f289,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f294,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x15);
LAB_0083f29f:
    local_33c._4_4_ = local_134;
    local_33c = CONCAT44(local_33c._4_4_,0x83f2a4);
    FUN_009a9740();
    local_33c = CONCAT44(0x83f2af,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f2b7,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f2bf,(undefined4)local_33c);
    FUN_00408ad0();
    goto LAB_00841623;
  }
  iVar8 = *(int *)(param_2 + 0xdac);
  iVar9 = *(int *)(param_2 + 0xda8);
  if (iVar9 != iVar8) {
    do {
      if (*(int *)(iVar9 + 4) == *(int *)(param_1 + 0x142c)) break;
      iVar9 = iVar9 + 8;
    } while (iVar9 != iVar8);
    if (iVar9 != iVar8) {
      ExceptionList = &local_10;
      *param_3 = -1000;
      if (param_4 == 0) {
        ExceptionList = pvVar5;
        return;
      }
      local_33c = 0x300dfc7b4;
      local_f0 = 0xf;
      local_f4 = 0;
      local_104[0] = (uint)local_104[0]._1_3_ << 8;
      FUN_00409350();
      local_8 = 0x1b;
      local_33c = 0x400dfc938;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1c;
      local_33c = 0x1f00e26a8c;
      local_b8 = 0xf;
      local_bc = 0;
      local_cc[0] = local_cc[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1d;
      local_33c = CONCAT44(local_120,0x83f3aa);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_cc,local_134);
      local_8._0_1_ = 0x1e;
      FUN_009a8ee0();
      local_8._0_1_ = 0x1f;
      local_33c = CONCAT44(0x83f3cf,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x20;
      local_33c = CONCAT44(local_b0,0x83f40d);
      FUN_00988f20();
      local_8._0_1_ = 0x21;
      local_33c = CONCAT44(uVar7,0x83f41c);
      FUN_00988f20();
      local_8._0_1_ = 0x22;
      local_33c = CONCAT44(local_104,0x83f431);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0x23;
      FUN_00448aa0();
      if (0xf < local_3c) {
        local_33c = CONCAT44(local_50[0],&UNK_0083f455);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_58) {
        local_33c = CONCAT44(local_6c[0],&UNK_0083f472);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_74) {
        local_33c = CONCAT44(local_88[0],&UNK_0083f490);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_d4) {
        local_33c = CONCAT44(local_e8[0],&UNK_0083f4b4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d4 = 0xf;
      local_d8 = 0;
      local_e8[0] = local_e8[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x1e);
      local_33c = CONCAT44(local_134,0x83f4da);
      FUN_009a9740();
      if (0xf < local_10c) {
        local_33c = CONCAT44(local_120[0],&UNK_0083f4ee);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_10c = 0xf;
      local_110 = 0;
      local_120[0] = local_120[0] & 0xffffff00;
      if (0xf < local_b8) {
        local_33c = CONCAT44(local_cc[0],&UNK_0083f518);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc[0] = local_cc[0] & 0xffffff00;
      if (0xf < local_9c) {
        local_33c = CONCAT44(local_b0[0],&UNK_0083f542);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0[0] = local_b0[0] & 0xffffff00;
      goto LAB_0083eeb8;
    }
  }
  iVar8 = *(int *)(param_2 + 0x156c);
  if (((iVar8 == 0) || (*(int *)(iVar8 + 0x14) != *(int *)(param_1 + 0x20))) ||
     (*(char *)(iVar8 + 0x18) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(int *)(param_1 + 0x156c) == 0) ||
     (*(int *)(*(int *)(param_1 + 0x156c) + 0x14) != *(int *)(param_2 + 0x20))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar3) || (bVar4)) {
    ExceptionList = &local_10;
    *param_3 = -1000;
    if (param_4 == 0) {
      ExceptionList = pvVar5;
      return;
    }
    local_33c = CONCAT44(0x8414db,(undefined4)local_33c);
    FUN_009885d0();
    local_8 = 0x24;
    local_33c = CONCAT44(0x8414f2,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x25;
    local_33c = CONCAT44(0x841503,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x26;
    local_33c = CONCAT44(local_1a8,0x841515);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_6c,local_a8);
    local_8._0_1_ = 0x27;
    FUN_009a8ee0();
    local_8._0_1_ = 0x28;
    local_33c = CONCAT44(0x841535,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 0x29;
    local_33c = CONCAT44(local_88,0x841572);
    FUN_00988f20();
    local_8._0_1_ = 0x2a;
    local_33c = CONCAT44(uVar7,0x841584);
    FUN_00988f20();
    local_8._0_1_ = 0x2b;
    local_33c = CONCAT44(local_e8,0x841599);
    FUN_00988f20();
    local_33c = 0xffffffff00000000;
    local_8._0_1_ = 0x2c;
    FUN_00448aa0();
    if (0xf < local_3c) {
      local_33c = CONCAT44(local_50[0],&UNK_008415b9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_33c = CONCAT44(0x8415d9,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x8415e4,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x8415ef,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x27);
    local_33c = CONCAT44(local_a8,0x8415ff);
    FUN_009a9740();
    local_33c = CONCAT44(0x84160a,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x841612,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x84161d,(undefined4)local_33c);
    FUN_00408ad0();
    goto LAB_00841623;
  }
  local_1c = param_2 + 0x1c;
  local_30 = (undefined1 *)(param_1 + 0x1c);
  local_33c = CONCAT44(local_1c,local_30);
  ExceptionList = &local_10;
  cVar6 = FUN_0092ede0();
  if ((cVar6 != '\0') && (*(char *)(param_1 + 0x67c) == '\0')) {
    piVar10 = *(int **)(param_1 + 0x9f8);
    local_18 = 0;
    if (piVar10 != (int *)0x0) {
      do {
        iVar8 = *piVar10;
        piVar10 = (int *)piVar10[2];
        if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar8 * 4) + 300) ==
            *(int *)(param_2 + 0x20)) {
          local_18 = local_18 + 1;
        }
      } while (piVar10 != (int *)0x0);
      if (2 < local_18) {
        *param_3 = -1000;
        if (param_4 == 0) {
          ExceptionList = local_10;
          return;
        }
        local_33c = CONCAT44(0x83f643,(undefined4)local_33c);
        FUN_009885d0();
        local_8 = 0x2d;
        local_33c = CONCAT44(0x83f657,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x2e;
        local_33c = CONCAT44(0x83f668,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x2f;
        local_33c = CONCAT44(local_b0,0x83f67a);
        uVar7 = FUN_009888f0();
        local_33c = CONCAT44(local_50,local_134);
        local_8._0_1_ = 0x30;
        FUN_009a8ee0();
        local_8._0_1_ = 0x31;
        local_33c = CONCAT44(0x83f69a,(undefined4)local_33c);
        iVar8 = FUN_00475500();
        local_33c = *(undefined8 *)(iVar8 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_8._0_1_ = 0x32;
        local_33c = CONCAT44(local_6c,0x83f6d4);
        FUN_00988f20();
        local_8._0_1_ = 0x33;
        local_33c = CONCAT44(uVar7,0x83f6e6);
        FUN_00988f20();
        local_8._0_1_ = 0x34;
        local_33c = CONCAT44(local_88,0x83f6fe);
        FUN_00988f20();
        local_8._0_1_ = 0x35;
        local_33c = CONCAT44(0x83f70a,(undefined4)local_33c);
        FUN_00989020();
        local_33c = CONCAT44(0x83f715,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83f720,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83f72b,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83f736,(undefined4)local_33c);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x30);
        local_33c = CONCAT44(local_134,0x83f746);
        FUN_009a9740();
        local_33c = CONCAT44(0x83f751,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83f759,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83f761,(undefined4)local_33c);
        FUN_00408ad0();
        goto LAB_00841623;
      }
    }
  }
  local_138 = *(undefined1 **)(param_2 + 0x20);
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + (int)local_138 * 4) + 0x3c) <
      *(int *)(*(int *)(DAT_012586dc + 0x60) + 0x2c)) {
    *param_3 = -1000;
    if (param_4 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_33c = CONCAT44(0x83f7b5,(undefined4)local_33c);
    FUN_009885d0();
    local_8 = 0x36;
    local_33c = CONCAT44(0x83f7c9,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x37;
    local_33c = CONCAT44(0x83f7da,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x38;
    local_33c = CONCAT44(local_b0,0x83f7ec);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_50,local_134);
    local_8._0_1_ = 0x39;
    FUN_009a8ee0();
    local_8._0_1_ = 0x3a;
    local_33c = CONCAT44(0x83f80c,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 0x3b;
    local_33c = CONCAT44(local_6c,0x83f846);
    FUN_00988f20();
    local_8._0_1_ = 0x3c;
    local_33c = CONCAT44(uVar7,0x83f858);
    FUN_00988f20();
    local_8._0_1_ = 0x3d;
    local_33c = CONCAT44(local_88,0x83f870);
    FUN_00988f20();
    local_8._0_1_ = 0x3e;
    local_33c = CONCAT44(0x83f87c,(undefined4)local_33c);
    FUN_00989020();
    local_33c = CONCAT44(0x83f887,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f892,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f89d,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f8a8,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x39);
    local_33c = CONCAT44(local_134,0x83f8b8);
    FUN_009a9740();
    local_33c = CONCAT44(0x83f8c3,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f8cb,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x83f8d3,(undefined4)local_33c);
    FUN_00408ad0();
    goto LAB_00841623;
  }
  iVar8 = *(int *)(param_1 + 0xd5c) - *(int *)(param_1 + 0xd58) >> 3;
  local_8c = 0;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0;
  local_25 = '\0';
  if (0 < iVar8) {
    iVar9 = *(int *)(DAT_012587e4 + 4);
    piVar10 = *(int **)(param_1 + 0xd58);
    local_24 = iVar8;
    do {
      iVar8 = *(int *)(iVar9 + piVar10[1] * 4);
      local_94 = *piVar10;
      if (((*(char *)(iVar8 + 0xcf5) == '\0') && (*(char *)(iVar8 + 0xcf4) == '\0')) &&
         (iVar8 = *(int *)(iVar9 + piVar10[1] * 4), local_94 = *(int *)(iVar8 + 0x1428),
         *(int *)(iVar8 + 0x142c) != *(int *)(param_1 + 0x20))) {
        local_8c = local_8c + 1;
        if (*(char *)(*(int *)(iVar9 + piVar10[1] * 4) + 0x31) != '\0') {
          local_14 = local_14 + 1;
        }
        local_94 = *piVar10;
        local_33c = CONCAT44(0x83f99d,(undefined4)local_33c);
        cVar6 = FUN_0042bb00();
        if (cVar6 != '\0') {
          local_25 = '\x01';
        }
      }
      piVar10 = piVar10 + 2;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    local_24 = 0;
  }
  iVar8 = *(int *)(param_2 + 0xd5c) - *(int *)(param_2 + 0xd58) >> 3;
  if (0 < iVar8) {
    iVar9 = *(int *)(DAT_012587e4 + 4);
    piVar10 = *(int **)(param_2 + 0xd58);
    local_24 = iVar8;
    do {
      local_94 = *piVar10;
      iVar8 = *(int *)(iVar9 + piVar10[1] * 4);
      if (((*(char *)(iVar8 + 0xcf5) == '\0') && (*(char *)(iVar8 + 0xcf4) == '\0')) &&
         (iVar8 = *(int *)(iVar9 + piVar10[1] * 4), local_94 = *(int *)(iVar8 + 0x1428),
         *(undefined1 **)(iVar8 + 0x142c) != local_138)) {
        local_94 = *piVar10;
        if (*(char *)(*(int *)(iVar9 + piVar10[1] * 4) + 0x31) != '\0') {
          local_20 = local_20 + 1;
        }
        local_18 = local_18 + 1;
      }
      piVar10 = piVar10 + 2;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  piVar10 = *(int **)(param_1 + 0xce4);
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)*piVar10;
    piVar10 = (int *)piVar10[2];
    local_33c = CONCAT44(0x83fa5f,(undefined4)local_33c);
    iVar8 = (**(code **)(*piVar1 + 0x20))();
    if (((iVar8 == 0x332) && (piVar1[9] == 3)) &&
       (local_94 = piVar1[2],
       *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar1[3] * 4) + 0x31) != '\0')) {
      local_14 = local_14 + 1;
    }
  }
  piVar10 = *(int **)(param_2 + 0xce4);
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)*piVar10;
    piVar10 = (int *)piVar10[2];
    local_33c = CONCAT44(0x83faae,(undefined4)local_33c);
    iVar8 = (**(code **)(*piVar1 + 0x20))();
    if (((iVar8 == 0x332) && (piVar1[9] == 3)) &&
       (local_94 = piVar1[2],
       *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar1[3] * 4) + 0x31) != '\0')) {
      local_20 = local_20 + 1;
    }
  }
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x20) == 0) &&
     (local_94 = *(int *)(param_1 + 0xcf8), *(int *)(param_1 + 0xcfc) != *(int *)(param_2 + 0x20)))
  {
    if (*(char *)(DAT_012588e8 + 0xb94) == '\0') {
      if ((*(char *)(param_2 + 0x31) != '\0') && (0 < local_14)) {
        *param_3 = -1000;
        if (param_4 == 0) {
          ExceptionList = local_10;
          return;
        }
        local_33c = CONCAT44(0x83fb5b,(undefined4)local_33c);
        FUN_009885d0();
        local_8 = 0x3f;
        local_33c = CONCAT44(0x83fb6f,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x40;
        local_33c = CONCAT44(0x83fb80,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x41;
        local_33c = CONCAT44(local_b0,0x83fb92);
        uVar7 = FUN_009888f0();
        local_33c = CONCAT44(local_50,local_134);
        local_8._0_1_ = 0x42;
        FUN_009a8ee0();
        local_8._0_1_ = 0x43;
        local_33c = CONCAT44(0x83fbb2,(undefined4)local_33c);
        iVar8 = FUN_00475500();
        local_33c = *(undefined8 *)(iVar8 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_8._0_1_ = 0x44;
        local_33c = CONCAT44(local_6c,0x83fbec);
        FUN_00988f20();
        local_8._0_1_ = 0x45;
        local_33c = CONCAT44(uVar7,0x83fbfe);
        FUN_00988f20();
        local_8._0_1_ = 0x46;
        local_33c = CONCAT44(local_88,0x83fc16);
        FUN_00988f20();
        local_8._0_1_ = 0x47;
        local_33c = CONCAT44(0x83fc22,(undefined4)local_33c);
        FUN_00989020();
        local_33c = CONCAT44(0x83fc2d,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fc38,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fc43,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fc4e,(undefined4)local_33c);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x42);
        local_33c = CONCAT44(local_134,0x83fc5e);
        FUN_009a9740();
        local_33c = CONCAT44(0x83fc69,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fc71,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fc79,(undefined4)local_33c);
        FUN_00408ad0();
        goto LAB_00841623;
      }
      if ((*(char *)(param_1 + 0x31) != '\0') && (0 < local_20)) {
        *param_3 = -1000;
        if (param_4 == 0) {
          ExceptionList = local_10;
          return;
        }
        local_33c = CONCAT44(0x83fcbb,(undefined4)local_33c);
        FUN_009885d0();
        local_8 = 0x48;
        local_33c = CONCAT44(0x83fccf,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x49;
        local_33c = CONCAT44(0x83fce0,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x4a;
        local_33c = CONCAT44(local_b0,0x83fcf2);
        uVar7 = FUN_009888f0();
        local_33c = CONCAT44(local_50,local_134);
        local_8._0_1_ = 0x4b;
        FUN_009a8ee0();
        local_8._0_1_ = 0x4c;
        local_33c = CONCAT44(0x83fd12,(undefined4)local_33c);
        iVar8 = FUN_00475500();
        local_33c = *(undefined8 *)(iVar8 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_8._0_1_ = 0x4d;
        local_33c = CONCAT44(local_6c,0x83fd4c);
        FUN_00988f20();
        local_8._0_1_ = 0x4e;
        local_33c = CONCAT44(uVar7,0x83fd5e);
        FUN_00988f20();
        local_8._0_1_ = 0x4f;
        local_33c = CONCAT44(local_88,0x83fd76);
        FUN_00988f20();
        local_8._0_1_ = 0x50;
        local_33c = CONCAT44(0x83fd82,(undefined4)local_33c);
        FUN_00989020();
        local_33c = CONCAT44(0x83fd8d,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fd98,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fda3,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x83fdae,(undefined4)local_33c);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x4b);
        goto LAB_0083f29f;
      }
    }
    else if (((*(char *)(param_1 + 0x31) != '\0') && (*(char *)(param_2 + 0x31) != '\0')) &&
            ((local_14 == 0 && ((local_20 == 0 && (*param_3 = *param_3 + 0x32, param_4 != 0)))))) {
      local_33c = CONCAT44(0x83fe06,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0x51;
      local_33c = CONCAT44(0x83fe1a,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x52;
      local_33c = CONCAT44(0x83fe2b,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x53;
      local_33c = CONCAT44(local_b0,0x83fe40);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_50,local_134);
      local_8._0_1_ = 0x54;
      FUN_009a8ee0();
      local_8._0_1_ = 0x55;
      local_33c = CONCAT44(0x83fe60,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x56;
      local_33c = CONCAT44(local_6c,0x83fe9a);
      FUN_00988f20();
      local_8._0_1_ = 0x57;
      local_33c = CONCAT44(uVar7,0x83feac);
      FUN_00988f20();
      local_8._0_1_ = 0x58;
      local_33c = CONCAT44(local_88,0x83fec4);
      FUN_00988f20();
      local_8._0_1_ = 0x59;
      local_33c = CONCAT44(0x83fed0,(undefined4)local_33c);
      FUN_00989020();
      local_33c = CONCAT44(0x83fedb,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x83fee6,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x83fef1,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x83fefc,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x54);
      local_33c = CONCAT44(local_134,0x83ff0c);
      FUN_009a9740();
      local_33c = CONCAT44(0x83ff17,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x83ff1f,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x83ff27,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = 0xffffffff;
      local_33c = CONCAT44(0x83ff39,(undefined4)local_33c);
      FUN_00408ad0();
    }
  }
  iVar9 = param_4;
  local_138 = (undefined1 *)&local_33c;
  local_33c = 1000;
  iVar8 = FUN_00834150(local_30,local_1c,param_4);
  *param_3 = *param_3 + iVar8;
  local_33c = CONCAT44(param_1,0x83ff71);
  piVar10 = (int *)FUN_004fb6a0();
  iVar8 = (int)((ulonglong)((longlong)*piVar10 * -0x10624dd3) >> 0x20);
  iVar8 = ((iVar8 >> 6) - (iVar8 >> 0x1f)) / 0x19;
  if (iVar8 < -0x19) {
    iVar8 = -0x19;
  }
  if ((*(char *)(param_1 + 0x12d0) == '\0') || (*(char *)(param_2 + 0x12d0) == '\0')) {
    iVar8 = iVar8 * 2;
  }
  *param_3 = *param_3 + iVar8;
  if (iVar9 != 0) {
    if (iVar8 < 1) {
      if (-1 < iVar8) goto LAB_0084022e;
      local_33c = CONCAT44(0x8400f9,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 99;
      local_33c = CONCAT44(0x84010d,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 100;
      local_33c = CONCAT44(0x84011e,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x65;
      local_33c = CONCAT44(local_b0,0x840130);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_50,local_134);
      local_8._0_1_ = 0x66;
      param_4 = FUN_009a8ee0();
      local_8._0_1_ = 0x67;
      local_33c = CONCAT44(0x840151,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x68;
      local_33c = CONCAT44(local_6c,0x84018c);
      FUN_00988f20();
      local_8._0_1_ = 0x69;
      local_33c = CONCAT44(uVar7,0x84019e);
      FUN_00988f20();
      local_8._0_1_ = 0x6a;
      local_33c = CONCAT44(local_88,0x8401b6);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0x6b;
      FUN_00448aa0();
      local_33c = CONCAT44(0x8401cd,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8401d8,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8401e3,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8401ee,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x66);
    }
    else {
      local_33c = CONCAT44(0x83ffde,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0x5a;
      local_33c = CONCAT44(0x83fff2,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x5b;
      local_33c = CONCAT44(0x840003,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x5c;
      local_33c = CONCAT44(local_b0,0x840015);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_50,local_134);
      local_8._0_1_ = 0x5d;
      param_4 = FUN_009a8ee0();
      local_8._0_1_ = 0x5e;
      local_33c = CONCAT44(0x840036,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x5f;
      local_33c = CONCAT44(local_6c,0x840071);
      FUN_00988f20();
      local_8._0_1_ = 0x60;
      local_33c = CONCAT44(uVar7,0x840083);
      FUN_00988f20();
      local_8._0_1_ = 0x61;
      local_33c = CONCAT44(local_88,0x84009b);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0x62;
      FUN_00448aa0();
      local_33c = CONCAT44(0x8400b2,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8400bd,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8400c8,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8400d3,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x5d);
    }
    local_33c._4_4_ = local_134;
    local_33c = CONCAT44(local_33c._4_4_,0x8401fe);
    FUN_009a9740();
    local_33c = CONCAT44(0x840209,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840211,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840219,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    local_33c = CONCAT44(0x84022b,(undefined4)local_33c);
    FUN_00408ad0();
  }
LAB_0084022e:
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x20) == 0) &&
     (local_94 = *(int *)(param_2 + 0x1428), *(int *)(param_2 + 0x142c) != *(int *)(param_1 + 0x20))
     ) {
    iVar8 = (local_8c + local_18) * -10;
    *param_3 = *param_3 + iVar8;
    if ((iVar9 != 0) && (iVar8 < 0)) {
      local_33c = CONCAT44(0x84029c,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0x6c;
      local_33c = CONCAT44(0x8402b0,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x6d;
      local_33c = CONCAT44(0x8402c1,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x6e;
      local_33c = CONCAT44(local_b0,0x8402d3);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_50,local_134);
      local_8._0_1_ = 0x6f;
      param_4 = FUN_009a8ee0();
      local_8._0_1_ = 0x70;
      local_33c = CONCAT44(0x8402f4,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x71;
      local_33c = CONCAT44(local_6c,0x84032f);
      FUN_00988f20();
      local_8._0_1_ = 0x72;
      local_33c = CONCAT44(uVar7,0x840341);
      FUN_00988f20();
      local_8._0_1_ = 0x73;
      local_33c = CONCAT44(local_88,0x840359);
      FUN_00988f20();
      local_8._0_1_ = 0x74;
      local_33c = CONCAT44(0x840364,(undefined4)local_33c);
      FUN_00989020();
      local_33c = CONCAT44(0x84036f,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x84037a,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840385,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840390,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x6f);
      local_33c = CONCAT44(local_134,0x8403a0);
      FUN_009a9740();
      local_33c = CONCAT44(0x8403ab,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8403b3,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8403bb,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = 0xffffffff;
      local_33c = CONCAT44(0x8403cd,(undefined4)local_33c);
      FUN_00408ad0();
    }
  }
  param_4 = 0;
  if ((local_25 != '\0') && (*param_3 = *param_3 + 0x14, iVar9 != 0)) {
    local_33c = CONCAT44(0x8403fc,(undefined4)local_33c);
    FUN_009885d0();
    local_8 = 0x75;
    local_33c = CONCAT44(0x840410,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x76;
    local_33c = CONCAT44(0x840421,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x77;
    local_33c = CONCAT44(local_b0,0x840436);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_50,local_134);
    local_8._0_1_ = 0x78;
    local_30 = (undefined1 *)FUN_009a8ee0();
    local_8._0_1_ = 0x79;
    local_33c = CONCAT44(0x840457,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 0x7a;
    local_33c = CONCAT44(local_6c,0x840492);
    FUN_00988f20();
    local_8._0_1_ = 0x7b;
    local_33c = CONCAT44(uVar7,0x8404a4);
    FUN_00988f20();
    local_8._0_1_ = 0x7c;
    local_33c = CONCAT44(local_88,0x8404bc);
    FUN_00988f20();
    local_33c = 0xffffffff00000000;
    local_8._0_1_ = 0x7d;
    FUN_00448aa0();
    local_33c = CONCAT44(0x8404d3,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x8404de,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x8404e9,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x8404f4,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x78);
    local_33c = CONCAT44(local_134,0x840504);
    FUN_009a9740();
    local_33c = CONCAT44(0x84050f,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840517,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x84051f,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    local_33c = CONCAT44(0x840531,(undefined4)local_33c);
    FUN_00408ad0();
  }
  local_33c = CONCAT44(&local_18,&local_8c);
  local_8c = 1000;
  local_18 = 1000;
  FUN_005dcbd0();
  local_33c = CONCAT44(&local_24,&local_1c);
  local_1c = 1000;
  local_24 = 1000;
  FUN_005dcbd0();
  iVar8 = local_8c;
  if (local_8c == 0) {
    local_20 = -1;
  }
  else if (local_1c + 0x189373U < 0x39580e) {
    local_20 = (local_1c * 1000) / local_8c;
  }
  else {
    local_33c = 1000;
    local_30 = (undefined1 *)(local_8c >> 0x1f);
    uVar14 = __allmul(local_1c,local_1c >> 0x1f);
    local_33c = CONCAT44(local_30,iVar8);
    local_20 = __alldiv(uVar14);
    local_90 = local_20 >> 0x1f;
  }
  iVar8 = local_18;
  if (local_18 == 0) {
    local_1c = -1;
  }
  else {
    if (local_24 + 0x189373U < 0x39580e) {
      local_1c = (local_24 * 1000) / local_18;
    }
    else {
      local_33c = 1000;
      local_30 = (undefined1 *)(local_18 >> 0x1f);
      uVar14 = __allmul(local_24,local_24 >> 0x1f);
      local_33c = CONCAT44(local_30,iVar8);
      local_1c = __alldiv(uVar14);
      local_90 = local_1c >> 0x1f;
    }
  }
  if ((DAT_01317d3c <= local_20) && (piVar10 = *(int **)(param_1 + 0x3a4), piVar10 != (int *)0x0)) {
    local_138 = *(undefined1 **)(param_2 + 0xd8c);
    local_30 = *(undefined1 **)(param_2 + 0xd88);
    do {
      iVar8 = *piVar10;
      piVar10 = (int *)piVar10[2];
      if (local_30 != local_138) {
        puVar11 = local_30;
        do {
          if (*(int *)(puVar11 + 4) == *(int *)(iVar8 + 0xc)) break;
          puVar11 = puVar11 + 8;
        } while (puVar11 != local_138);
        if (puVar11 != local_138) {
          iVar2 = *(int *)(param_1 + 0xd5c);
          iVar12 = *(int *)(param_1 + 0xd58);
          if (iVar12 != iVar2) {
            do {
              if (*(int *)(iVar12 + 4) == *(int *)(iVar8 + 0xc)) break;
              iVar12 = iVar12 + 8;
            } while (iVar12 != iVar2);
            if (iVar12 != iVar2) goto LAB_00840726;
          }
          iVar2 = *(int *)(param_2 + 0xd5c);
          iVar12 = *(int *)(param_2 + 0xd58);
          if (iVar12 != iVar2) {
            do {
              if (*(int *)(iVar12 + 4) == *(int *)(iVar8 + 0xc)) break;
              iVar12 = iVar12 + 8;
            } while (iVar12 != iVar2);
            if (iVar12 != iVar2) goto LAB_00840726;
          }
          if (local_20 < 1000) {
            if (local_20 < DAT_01317c5c) {
              if (local_20 < DAT_01317d08) {
                param_4 = param_4 + 5;
              }
              else {
                param_4 = param_4 + 10;
              }
            }
            else {
              param_4 = param_4 + 0xf;
            }
          }
          else {
            param_4 = param_4 + 0x14;
          }
        }
      }
LAB_00840726:
    } while (piVar10 != (int *)0x0);
  }
  *param_3 = *param_3 + param_4;
  if ((iVar9 != 0) && (0 < param_4)) {
    local_33c = CONCAT44(0x840756,(undefined4)local_33c);
    FUN_009885d0();
    local_8 = 0x7e;
    local_33c = CONCAT44(0x84076a,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x7f;
    local_33c = CONCAT44(0x84077b,(undefined4)local_33c);
    FUN_009885d0();
    local_8._0_1_ = 0x80;
    local_33c = CONCAT44(local_b0,0x84078e);
    uVar7 = FUN_009888f0();
    local_33c = CONCAT44(local_50,local_134);
    local_8._0_1_ = 0x81;
    param_4 = FUN_009a8ee0();
    local_8._0_1_ = 0x82;
    local_33c = CONCAT44(0x8407af,(undefined4)local_33c);
    iVar8 = FUN_00475500();
    local_33c = *(undefined8 *)(iVar8 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
    local_8._0_1_ = 0x83;
    local_33c = CONCAT44(local_6c,0x8407ea);
    FUN_00988f20();
    local_8._0_1_ = 0x84;
    local_33c = CONCAT44(uVar7,0x8407fc);
    FUN_00988f20();
    local_8._0_1_ = 0x85;
    local_33c = CONCAT44(local_88,0x840814);
    FUN_00988f20();
    local_33c = 0xffffffff00000000;
    local_8._0_1_ = 0x86;
    FUN_00448aa0();
    local_33c = CONCAT44(0x84082b,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840836,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840841,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x84084c,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x81);
    local_33c = CONCAT44(local_134,0x84085c);
    FUN_009a9740();
    local_33c = CONCAT44(0x840867,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x84086f,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840877,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    local_33c = CONCAT44(0x840889,(undefined4)local_33c);
    FUN_00408ad0();
  }
  local_33c = 0x461c42000084089c;
  FUN_00401000();
  local_33c = CONCAT44(0x8408a4,(undefined4)local_33c);
  iVar8 = FUN_00b31c00();
  local_33c = 1000;
  iVar8 = __alldiv((longlong)local_20 * (longlong)iVar8);
  local_14 = iVar8 / 1000 + -10;
  if (10 < local_14) {
    local_14 = 10;
  }
  local_33c = 0x459c4400008408f0;
  FUN_00401000();
  local_33c = CONCAT44(0x8408f8,(undefined4)local_33c);
  iVar8 = FUN_00b31c00();
  local_33c = 1000;
  iVar8 = __alldiv((longlong)local_1c * (longlong)iVar8);
  param_4 = iVar8 / 1000 + -5;
  if (5 < param_4) {
    param_4 = 5;
  }
  if (*(int *)(param_1 + 0xdd0) < 1) {
    param_4 = 0;
  }
  if (*(char *)(param_1 + 0x67c) != '\0') {
    local_1c = 1000;
    local_20 = 1000;
    local_24 = local_8c;
    local_33c = CONCAT44(&local_1c,param_1 + 0xda8);
    FUN_0055dcf0();
    local_33c = CONCAT44(&local_24,param_1 + 0xd58);
    FUN_0055dcf0();
    iVar8 = local_1c;
    if (local_1c == 0) {
      local_1c = -1;
    }
    else if (local_24 + 0x189373U < 0x39580e) {
      local_1c = (local_24 * 1000) / local_1c;
    }
    else {
      local_33c = 1000;
      local_30 = (undefined1 *)(local_1c >> 0x1f);
      uVar14 = __allmul(local_24,local_24 >> 0x1f);
      local_33c = CONCAT44(local_30,iVar8);
      local_1c = __alldiv(uVar14);
      local_90 = local_1c >> 0x1f;
    }
    iVar8 = local_20;
    if (local_20 == 0) {
      iVar8 = -1;
    }
    else if (local_18 + 0x189373U < 0x39580e) {
      iVar8 = (local_18 * 1000) / local_20;
    }
    else {
      local_33c = 1000;
      local_30 = (undefined1 *)(local_20 >> 0x1f);
      uVar14 = __allmul(local_18,local_18 >> 0x1f);
      local_33c = CONCAT44(local_30,iVar8);
      iVar8 = __alldiv(uVar14);
      local_90 = iVar8 >> 0x1f;
    }
    if (local_1c < DAT_01317d08) {
      local_14 = local_14 * 5;
LAB_00840a79:
      local_14 = local_14 * 2;
    }
    else if (local_1c < DAT_01317d28) {
      local_14 = local_14 * 5;
    }
    else if (local_1c < DAT_01317d84) goto LAB_00840a79;
    if (iVar8 < DAT_01317d08) {
      param_4 = param_4 * 10;
    }
    else if (iVar8 < DAT_01317d28) {
      param_4 = param_4 * 5;
    }
    else if (iVar8 < DAT_01317d84) {
      param_4 = param_4 * 2;
    }
  }
  *param_3 = *param_3 + param_4 + local_14;
  if (iVar9 != 0) {
    if (local_14 < 1) {
      if (local_14 < 0) {
        local_33c = CONCAT44(0x840c01,(undefined4)local_33c);
        FUN_009885d0();
        local_8 = 0x90;
        local_33c = CONCAT44(0x840c15,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x91;
        local_33c = CONCAT44(0x840c26,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0x92;
        local_33c = CONCAT44(local_cc,0x840c39);
        uVar7 = FUN_009888f0();
        local_33c = CONCAT44(local_50,local_134);
        local_8._0_1_ = 0x93;
        local_30 = (undefined1 *)FUN_009a8ee0();
        local_8._0_1_ = 0x94;
        local_33c = CONCAT44(0x840c5a,(undefined4)local_33c);
        iVar8 = FUN_00475500();
        local_33c = *(undefined8 *)(iVar8 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_8._0_1_ = 0x95;
        local_33c = CONCAT44(local_6c,0x840c95);
        FUN_00988f20();
        local_8._0_1_ = 0x96;
        local_33c = CONCAT44(uVar7,0x840ca7);
        FUN_00988f20();
        local_8._0_1_ = 0x97;
        local_33c = CONCAT44(local_88,0x840cbf);
        FUN_00988f20();
        local_33c = 0xffffffff00000000;
        local_8._0_1_ = 0x98;
        FUN_00448aa0();
        local_33c = CONCAT44(0x840cd6,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x840ce1,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x840cec,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x840cf7,(undefined4)local_33c);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x93);
        local_33c = CONCAT44(local_134,0x840d07);
        FUN_009a9740();
        goto LAB_00840d0d;
      }
    }
    else {
      local_33c = CONCAT44(0x840ada,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0x87;
      local_33c = CONCAT44(0x840aee,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x88;
      local_33c = CONCAT44(0x840aff,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x89;
      local_33c = CONCAT44(local_1fc,0x840b12);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_50,local_134);
      local_8._0_1_ = 0x8a;
      local_30 = (undefined1 *)FUN_009a8ee0();
      local_8._0_1_ = 0x8b;
      local_33c = CONCAT44(0x840b33,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x8c;
      local_33c = CONCAT44(local_6c,0x840b6e);
      FUN_00988f20();
      local_8._0_1_ = 0x8d;
      local_33c = CONCAT44(uVar7,0x840b80);
      FUN_00988f20();
      local_8._0_1_ = 0x8e;
      local_33c = CONCAT44(local_88,0x840b98);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0x8f;
      FUN_00448aa0();
      local_33c = CONCAT44(0x840baf,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840bba,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840bc5,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840bd0,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x8a);
      local_33c = CONCAT44(local_134,0x840be0);
      FUN_009a9740();
LAB_00840d0d:
      local_33c = CONCAT44(0x840d12,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840d1a,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840d22,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = 0xffffffff;
      local_33c = CONCAT44(0x840d34,(undefined4)local_33c);
      FUN_00408ad0();
    }
    if (param_4 < 1) {
      if (-1 < param_4) goto LAB_00840fc1;
      local_33c = CONCAT44(0x840e7f,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0xa2;
      local_33c = CONCAT44(0x840e96,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0xa3;
      local_33c = CONCAT44(0x840eaa,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0xa4;
      local_33c = CONCAT44(local_1c4,0x840ebd);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_e8,local_a8);
      local_8._0_1_ = 0xa5;
      param_4 = FUN_009a8ee0();
      local_8._0_1_ = 0xa6;
      local_33c = CONCAT44(0x840ede,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0xa7;
      local_33c = CONCAT44(local_120,0x840f1c);
      FUN_00988f20();
      local_8._0_1_ = 0xa8;
      local_33c = CONCAT44(uVar7,0x840f2e);
      FUN_00988f20();
      local_8._0_1_ = 0xa9;
      local_33c = CONCAT44(local_104,0x840f46);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0xaa;
      FUN_00448aa0();
      local_33c = CONCAT44(0x840f5d,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840f68,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840f73,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840f7e,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0xa5);
      local_33c = CONCAT44(local_a8,0x840f8e);
      FUN_009a9740();
    }
    else {
      local_33c = CONCAT44(0x840d4f,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0x99;
      local_33c = CONCAT44(0x840d66,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x9a;
      local_33c = CONCAT44(0x840d7a,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0x9b;
      local_33c = CONCAT44(local_154,0x840d8d);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_e8,local_a8);
      local_8._0_1_ = 0x9c;
      param_4 = FUN_009a8ee0();
      local_8._0_1_ = 0x9d;
      local_33c = CONCAT44(0x840dae,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0x9e;
      local_33c = CONCAT44(local_120,0x840dec);
      FUN_00988f20();
      local_8._0_1_ = 0x9f;
      local_33c = CONCAT44(uVar7,0x840dfe);
      FUN_00988f20();
      local_8._0_1_ = 0xa0;
      local_33c = CONCAT44(local_104,0x840e16);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0xa1;
      FUN_00448aa0();
      local_33c = CONCAT44(0x840e2d,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840e38,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840e43,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x840e4e,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x9c);
      local_33c = CONCAT44(local_a8,0x840e5e);
      FUN_009a9740();
    }
    local_33c = CONCAT44(0x840f99,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840fa4,(undefined4)local_33c);
    FUN_00408ad0();
    local_33c = CONCAT44(0x840faf,(undefined4)local_33c);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    local_33c = CONCAT44(0x840fc1,(undefined4)local_33c);
    FUN_00408ad0();
  }
LAB_00840fc1:
  if (*(char *)(param_2 + 0x67c) != '\0') {
    puVar13 = *(undefined4 **)(DAT_012588e8 + 0xb3c);
    param_4 = 0;
    if (puVar13 != (undefined4 *)0x0) {
      do {
        local_33c = CONCAT44(&param_4,*puVar13);
        FUN_00832dd0(param_1,param_2);
        puVar13 = (undefined4 *)puVar13[2];
      } while (puVar13 != (undefined4 *)0x0);
      if ((param_4 < 0) && (*param_3 = *param_3 + param_4, iVar9 != 0)) {
        local_33c = CONCAT44(0x841033,(undefined4)local_33c);
        FUN_009885d0();
        local_8 = 0xab;
        local_33c = CONCAT44(0x841047,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0xac;
        local_33c = CONCAT44(0x841058,(undefined4)local_33c);
        FUN_009885d0();
        local_8._0_1_ = 0xad;
        local_33c = CONCAT44(local_1c4,0x84106a);
        uVar7 = FUN_009888f0();
        local_33c = CONCAT44(local_50,local_a8);
        local_8._0_1_ = 0xae;
        param_4 = FUN_009a8ee0();
        local_8._0_1_ = 0xaf;
        local_33c = CONCAT44(0x84108b,(undefined4)local_33c);
        iVar8 = FUN_00475500();
        local_33c = *(undefined8 *)(iVar8 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_8._0_1_ = 0xb0;
        local_33c = CONCAT44(local_6c,0x8410c6);
        FUN_00988f20();
        local_8._0_1_ = 0xb1;
        local_33c = CONCAT44(uVar7,0x8410d8);
        FUN_00988f20();
        local_8._0_1_ = 0xb2;
        local_33c = CONCAT44(local_88,0x8410f0);
        FUN_00988f20();
        local_33c = 0xffffffff00000000;
        local_8._0_1_ = 0xb3;
        FUN_00448aa0();
        local_33c = CONCAT44(0x841107,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x841112,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x84111d,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x841128,(undefined4)local_33c);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0xae);
        local_33c = CONCAT44(local_a8,0x841138);
        FUN_009a9740();
        local_33c = CONCAT44(0x841143,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x84114b,(undefined4)local_33c);
        FUN_00408ad0();
        local_33c = CONCAT44(0x841153,(undefined4)local_33c);
        FUN_00408ad0();
        local_8 = 0xffffffff;
        local_33c = CONCAT44(0x841165,(undefined4)local_33c);
        FUN_00408ad0();
      }
    }
  }
  if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x58)) {
    puVar13 = *(undefined4 **)
               (*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x50);
    do {
      if (puVar13 == (undefined4 *)0x0) goto LAB_00841307;
      uVar7 = *puVar13;
      puVar13 = (undefined4 *)puVar13[2];
      local_33c = CONCAT44(uVar7,0x84119b);
      piVar10 = (int *)FUN_0092d400();
      local_33c = CONCAT44(0x8411a4,(undefined4)local_33c);
      cVar6 = (**(code **)(*piVar10 + 0x1c))();
    } while (cVar6 == '\0');
    *param_3 = *param_3 + -100;
    if (iVar9 != 0) {
      local_33c = CONCAT44(0x8411cf,(undefined4)local_33c);
      FUN_009885d0();
      local_8 = 0xb4;
      local_33c = CONCAT44(0x8411e3,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0xb5;
      local_33c = CONCAT44(0x8411f4,(undefined4)local_33c);
      FUN_009885d0();
      local_8._0_1_ = 0xb6;
      local_33c = CONCAT44(local_1c4,0x841209);
      uVar7 = FUN_009888f0();
      local_33c = CONCAT44(local_50,local_a8);
      local_8._0_1_ = 0xb7;
      param_4 = FUN_009a8ee0();
      local_8._0_1_ = 0xb8;
      local_33c = CONCAT44(0x84122a,(undefined4)local_33c);
      iVar8 = FUN_00475500();
      local_33c = *(undefined8 *)(iVar8 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_8._0_1_ = 0xb9;
      local_33c = CONCAT44(local_6c,0x841265);
      FUN_00988f20();
      local_8._0_1_ = 0xba;
      local_33c = CONCAT44(uVar7,0x841277);
      FUN_00988f20();
      local_8._0_1_ = 0xbb;
      local_33c = CONCAT44(local_88,0x84128f);
      FUN_00988f20();
      local_33c = 0xffffffff00000000;
      local_8._0_1_ = 0xbc;
      FUN_00448aa0();
      local_33c = CONCAT44(0x8412a6,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8412b1,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8412bc,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8412c7,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0xb7);
      local_33c = CONCAT44(local_a8,0x8412d7);
      FUN_009a9740();
      local_33c = CONCAT44(0x8412e2,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8412ea,(undefined4)local_33c);
      FUN_00408ad0();
      local_33c = CONCAT44(0x8412f2,(undefined4)local_33c);
      FUN_00408ad0();
      local_8 = 0xffffffff;
      local_33c = CONCAT44(0x841304,(undefined4)local_33c);
      FUN_00408ad0();
    }
  }
LAB_00841307:
  iVar8 = *(int *)(*(int *)(param_2 + 0xbe8) + *(int *)(param_1 + 0x20) * 4);
  if (*(int *)(iVar8 + 0x58) < 1) {
    ExceptionList = local_10;
    return;
  }
  puVar13 = *(undefined4 **)(iVar8 + 0x50);
  if (puVar13 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return;
  }
  while( true ) {
    uVar7 = *puVar13;
    puVar13 = (undefined4 *)puVar13[2];
    local_33c = CONCAT44(uVar7,0x84133b);
    piVar10 = (int *)FUN_0092d400();
    local_33c = CONCAT44(0x841344,(undefined4)local_33c);
    cVar6 = (**(code **)(*piVar10 + 0x1c))();
    if (cVar6 != '\0') break;
    if (puVar13 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
  }
  *param_3 = *param_3 + -10;
  if (iVar9 == 0) {
    ExceptionList = local_10;
    return;
  }
  local_33c = CONCAT44(0x84137b,(undefined4)local_33c);
  FUN_009885d0();
  local_8 = 0xbd;
  local_33c = CONCAT44(0x841392,(undefined4)local_33c);
  FUN_009885d0();
  local_8._0_1_ = 0xbe;
  local_33c = CONCAT44(0x8413a6,(undefined4)local_33c);
  FUN_009885d0();
  local_8._0_1_ = 0xbf;
  local_33c = CONCAT44(local_328,0x8413bb);
  uVar7 = FUN_009888f0();
  local_33c = CONCAT44(local_288,local_29c);
  local_8._0_1_ = 0xc0;
  param_4 = FUN_009a8ee0();
  local_8._0_1_ = 0xc1;
  local_33c = CONCAT44(0x8413dc,(undefined4)local_33c);
  iVar8 = FUN_00475500();
  local_33c = *(undefined8 *)(iVar8 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
  local_8._0_1_ = 0xc2;
  local_33c = CONCAT44(local_26c,0x84141a);
  FUN_00988f20();
  local_8._0_1_ = 0xc3;
  local_33c = CONCAT44(uVar7,0x84142c);
  FUN_00988f20();
  local_8._0_1_ = 0xc4;
  local_33c = CONCAT44(local_250,0x841444);
  FUN_00988f20();
  local_33c = 0xffffffff00000000;
  local_8._0_1_ = 0xc5;
  FUN_00448aa0();
  local_33c = CONCAT44(0x84145b,(undefined4)local_33c);
  FUN_00408ad0();
  local_33c = CONCAT44(0x841466,(undefined4)local_33c);
  FUN_00408ad0();
  local_33c = CONCAT44(0x841471,(undefined4)local_33c);
  FUN_00408ad0();
  local_33c = CONCAT44(0x84147c,(undefined4)local_33c);
  FUN_00408ad0();
  local_8 = CONCAT31(local_8._1_3_,0xc0);
  local_33c = CONCAT44(local_29c,0x84148c);
  FUN_009a9740();
  local_33c = CONCAT44(0x841497,(undefined4)local_33c);
  FUN_00408ad0();
  local_33c = CONCAT44(0x8414a2,(undefined4)local_33c);
  FUN_00408ad0();
  local_33c = CONCAT44(0x8414ad,(undefined4)local_33c);
  FUN_00408ad0();
LAB_00841623:
  local_33c = CONCAT44(0x841628,(undefined4)local_33c);
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

