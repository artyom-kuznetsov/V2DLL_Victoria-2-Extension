// FUN_004baf50 @ 004baf50 body=[[004baf50, 004bb13b] [004bb13f, 004bb169] [004bb16d, 004bb192] [004bb196, 004bb1b8] [004bb1bc, 004bb1eb] [004bb1ef, 004bb205] [004bb209, 004bb22a] [004bb22e, 004bb253] [004bb257, 004bb279] [004bb27d, 004bb4d2] [004bb4d6, 004bb4f4] [004bb4f8, 004bb517] [004bb51b, 004bb550] [004bb554, 004bb570] [004bb574, 004bb598] [004bb59c, 004bb5bb] [004bb5bf, 004bb689] [004bb68d, 004bb6a6] [004bb6aa, 004bb6c9] [004bb6cd, 004bb6ef] [004bb6f3, 004bb806] [004bb80a, 004bb828] [004bb82c, 004bb84b] [004bb84f, 004bb884] [004bb888, 004bb8a4] [004bb8a8, 004bb8cc] [004bb8d0, 004bb8ef] [004bb8f3, 004bb9b7] [004bb9bb, 004bb9d4] [004bb9d8, 004bb9f7] [004bb9fb, 004bba1a] [004bba1e, 004bba33]]


undefined1 * FUN_004baf50(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_14c;
  undefined4 local_134;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  int local_dc;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  int local_bc;
  int local_b8;
  undefined4 *local_b0;
  int local_ac;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  int local_54;
  int local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b761eb;
  local_10 = ExceptionList;
  iVar2 = *(int *)(DAT_012586dc + 0x40);
  iVar5 = *(int *)(iVar2 + 0x30);
  local_ac = *(int *)(iVar2 + 0x38);
  local_50 = *(int *)(iVar2 + 0x34) - iVar5;
  local_b8 = 1000 - local_ac;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_14c = 0x400dfd048;
  local_fc = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_14c = 0x400dfc940;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  local_14c = 0xa00dfd03c;
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  FUN_00409350();
  local_b0 = (undefined4 *)&local_14c;
  local_14c = CONCAT44(1,extraout_ECX);
  local_8._0_1_ = 3;
  local_34 = CONCAT44(&local_14c,(undefined4)local_34);
  FUN_00401000();
  local_dc = FUN_00b31c00();
  uVar1 = __alldiv((longlong)local_dc * (longlong)iVar5,1000,0);
  *local_b0 = uVar1;
  uVar1 = FUN_00988a50();
  local_14c = CONCAT44(local_118,local_48);
  local_8._0_1_ = 4;
  local_34._4_4_ = uVar1;
  local_b0 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 5;
  local_14c = CONCAT44(0x4bb0a9,(undefined4)local_14c);
  iVar2 = FUN_00475500();
  local_14c = *(undefined8 *)(iVar2 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
  local_8._0_1_ = 6;
  local_14c = CONCAT44(local_d8,0x4bb0ea);
  FUN_00988f20();
  local_8._0_1_ = 7;
  local_14c = CONCAT44(local_34._4_4_,0x4bb0ff);
  FUN_00988f20();
  local_8._0_1_ = 8;
  local_14c = CONCAT44(local_2c,0x4bb114);
  FUN_00988f20();
  local_14c = 0xffffffff00000000;
  local_8._0_1_ = 9;
  FUN_00448aa0();
  if (0xf < local_120) {
    local_14c = CONCAT44(local_134,&UNK_004bb13c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_e4) {
    local_14c = CONCAT44(local_f8,&UNK_004bb16a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_94) {
    local_14c = CONCAT44(local_a8,&UNK_004bb193);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_78) {
    local_14c = CONCAT44(local_8c[0],&UNK_004bb1b9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_8._0_1_ = 10;
  local_14c = CONCAT44(0x4bb1d4,(undefined4)local_14c);
  FUN_009adb70();
  if (local_44 != 0) {
    local_14c = CONCAT44(0x4bb1e3,(undefined4)local_14c);
    FUN_009e6a80();
    local_14c = CONCAT44(local_44,&UNK_004bb1ec);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (0xf < local_5c) {
    local_14c = CONCAT44(local_70,&UNK_004bb206);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_104) {
    local_14c = CONCAT44(local_118[0],&UNK_004bb22b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  if (0xf < local_c4) {
    local_14c = CONCAT44(local_d8[0],&UNK_004bb254);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  if (0xf < local_18) {
    local_14c = CONCAT44(local_2c[0],&UNK_004bb27a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_34 = CONCAT44(local_34._4_4_,*(undefined4 *)(param_1 + 0x128));
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4) + 0x1234);
  if (*(int *)(iVar2 + 4) == 0) {
    local_34 = 0;
    local_34._4_4_ = 0;
    local_34._0_4_ = 0;
    uVar1 = local_34._4_4_;
    uVar6 = (undefined4)local_34;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
    uVar1 = *(undefined4 *)(iVar2 + 0x14);
    uVar6 = *(undefined4 *)(iVar2 + 0x10);
  }
  local_14c = 0x1f40000;
  lVar7 = __allmul(uVar6,uVar1);
  uVar3 = (uint)(lVar7 >> 0xf) >> 0xf | (int)((ulonglong)(lVar7 >> 0xf) >> 0x20) << 0x11;
  local_14c = 0x1f40000;
  lVar7 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x188) + 0xc0),
                   *(undefined4 *)(*(int *)(param_1 + 0x188) + 0xc4));
  iVar2 = local_50;
  uVar4 = (uint)(lVar7 >> 0xf) >> 0xf | (int)((ulonglong)(lVar7 >> 0xf) >> 0x20) << 0x11;
  local_14c = (longlong)local_50;
  local_54 = local_50;
  local_50 = local_50 >> 0x1f;
  uVar8 = __allmul(uVar3,(int)uVar3 >> 0x1f);
  local_14c = 1000;
  iVar5 = __alldiv(uVar8);
  local_14c = (longlong)local_b8;
  local_bc = local_b8;
  local_b8 = local_b8 >> 0x1f;
  uVar8 = __allmul(iVar5,iVar5 >> 0x1f);
  local_14c = 1000;
  iVar5 = __alldiv(uVar8);
  local_14c = CONCAT44(local_50,iVar2);
  uVar8 = __allmul(uVar4,(int)uVar4 >> 0x1f);
  local_14c = 1000;
  iVar2 = __alldiv(uVar8);
  local_34 = (longlong)local_ac;
  local_14c = (longlong)local_ac;
  uVar8 = __allmul(iVar2,iVar2 >> 0x1f);
  local_14c = 1000;
  local_ac = __alldiv(uVar8);
  if (iVar5 != 0) {
    local_14c = 0x300df8544;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0xb;
    local_14c = 0x2000dfd050;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_14c._4_4_ = 1;
    local_8._0_1_ = 0xc;
    uVar1 = __alldiv((longlong)iVar5 * (longlong)local_dc,1000,0);
    local_14c = CONCAT44(local_14c._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_14c = CONCAT44(local_2c,local_48);
    local_8._0_1_ = 0xd;
    FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    local_14c = CONCAT44(0x4bb463,(undefined4)local_14c);
    iVar2 = FUN_00475500();
    local_14c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0xf;
    local_14c = CONCAT44(uVar1,0x4bb49b);
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    local_14c = CONCAT44(local_d8,0x4bb4b0);
    FUN_00988f20();
    local_14c = 0xffffffff00000000;
    local_8._0_1_ = 0x11;
    FUN_00448aa0();
    if (0xf < local_5c) {
      local_14c = CONCAT44(local_70,&UNK_004bb4d3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_78) {
      local_14c = CONCAT44(local_8c[0],&UNK_004bb4f5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_94) {
      local_14c = CONCAT44(local_a8,&UNK_004bb518);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    local_8._0_1_ = 0x12;
    local_14c = CONCAT44(0x4bb539,(undefined4)local_14c);
    FUN_009adb70();
    if (local_44 != 0) {
      local_14c = CONCAT44(0x4bb548,(undefined4)local_14c);
      FUN_009e6a80();
      local_14c = CONCAT44(local_44,&UNK_004bb551);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_e4) {
      local_14c = CONCAT44(local_f8,&UNK_004bb571);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8 = local_f8 & 0xffffff00;
    if (0xf < local_18) {
      local_14c = CONCAT44(local_2c[0],&UNK_004bb599);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = 0xf;
    local_1c = 0;
    uVar3 = local_2c[0] >> 8;
    local_2c[0] = uVar3 << 8;
    if (0xf < local_c4) {
      local_14c = CONCAT44(local_d8[0],&UNK_004bb5bc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_14c = 0x100dee2cc;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = uVar3 << 8;
    FUN_00409350();
    local_8 = 0x13;
    local_14c = CONCAT44(local_50,local_54);
    uVar8 = __allmul(local_bc,local_b8);
    local_14c = 1000;
    iVar2 = __alldiv(uVar8);
    local_14c._4_4_ = 1;
    uVar8 = __allmul(iVar2,iVar2 >> 0x1f,100000,0);
    uVar1 = __alldiv(uVar8,1000,0);
    local_14c = CONCAT44(local_14c._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_14c = CONCAT44(uVar1,local_8c);
    local_8._0_1_ = 0x14;
    FUN_0042c180();
    local_8._0_1_ = 0x15;
    local_14c = CONCAT44(local_2c,0x4bb667);
    FUN_00988f20();
    local_14c = 0xffffffff00000000;
    local_8._0_1_ = 0x16;
    FUN_00448aa0();
    if (0xf < local_5c) {
      local_14c = CONCAT44(local_70,&UNK_004bb68a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_78) {
      local_14c = CONCAT44(local_8c[0],&UNK_004bb6a7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_94) {
      local_14c = CONCAT44(local_a8,&UNK_004bb6ca);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < local_18) {
      local_14c = CONCAT44(local_2c[0],&UNK_004bb6f0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar2 = local_ac;
  if (local_ac != 0) {
    local_14c = 0x300df8544;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0x17;
    local_14c = 0x1b00dfd088;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_14c._4_4_ = 1;
    local_8._0_1_ = 0x18;
    uVar1 = __alldiv((longlong)iVar2 * (longlong)local_dc,1000,0);
    local_14c = CONCAT44(local_14c._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_14c = CONCAT44(local_2c,local_48);
    local_8._0_1_ = 0x19;
    FUN_009a8ee0();
    local_8._0_1_ = 0x1a;
    local_14c = CONCAT44(0x4bb797,(undefined4)local_14c);
    iVar2 = FUN_00475500();
    local_14c = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0x1b;
    local_14c = CONCAT44(uVar1,0x4bb7cf);
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    local_14c = CONCAT44(local_d8,0x4bb7e4);
    FUN_00988f20();
    local_14c = 0xffffffff00000000;
    local_8._0_1_ = 0x1d;
    FUN_00448aa0();
    if (0xf < local_5c) {
      local_14c = CONCAT44(local_70,&UNK_004bb807);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_78) {
      local_14c = CONCAT44(local_8c[0],&UNK_004bb829);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_94) {
      local_14c = CONCAT44(local_a8,&UNK_004bb84c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    local_8._0_1_ = 0x1e;
    local_14c = CONCAT44(0x4bb86d,(undefined4)local_14c);
    FUN_009adb70();
    if (local_44 != 0) {
      local_14c = CONCAT44(0x4bb87c,(undefined4)local_14c);
      FUN_009e6a80();
      local_14c = CONCAT44(local_44,&UNK_004bb885);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_e4) {
      local_14c = CONCAT44(local_f8,&UNK_004bb8a5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8 = local_f8 & 0xffffff00;
    if (0xf < local_18) {
      local_14c = CONCAT44(local_2c[0],&UNK_004bb8cd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = 0xf;
    local_1c = 0;
    uVar3 = local_2c[0] >> 8;
    local_2c[0] = uVar3 << 8;
    if (0xf < local_c4) {
      local_14c = CONCAT44(local_d8[0],&UNK_004bb8f0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_14c = 0x100dee2cc;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = uVar3 << 8;
    FUN_00409350();
    local_8 = 0x1f;
    local_14c = CONCAT44(local_50,local_54);
    uVar8 = __allmul((undefined4)local_34,(int)((ulonglong)local_34 >> 0x20));
    local_14c = 1000;
    iVar2 = __alldiv(uVar8);
    local_14c._4_4_ = 1;
    uVar8 = __allmul(iVar2,iVar2 >> 0x1f,100000,0);
    uVar1 = __alldiv(uVar8,1000,0);
    local_14c = CONCAT44(local_14c._4_4_,uVar1);
    uVar1 = FUN_00988a50();
    local_14c = CONCAT44(uVar1,local_8c);
    local_8._0_1_ = 0x20;
    FUN_0042c180();
    local_8._0_1_ = 0x21;
    local_14c = CONCAT44(local_2c,0x4bb995);
    FUN_00988f20();
    local_14c = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x22);
    FUN_00448aa0();
    if (0xf < local_5c) {
      local_14c = CONCAT44(local_70,&UNK_004bb9b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    if (0xf < local_78) {
      local_14c = CONCAT44(local_8c[0],&UNK_004bb9d5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_94) {
      local_14c = CONCAT44(local_a8,&UNK_004bb9f8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < local_18) {
      local_14c = CONCAT44(local_2c[0],&UNK_004bba1b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

