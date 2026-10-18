// FUN_00945c80 @ 00945c80 body=[[00945c80, 00945d17] [00945d1b, 00945dc6] [00945dca, 00945dee] [00945df2, 00945f20] [00945f24, 00945f5f] [00945f63, 00945f87] [00945f8b, 0094602a] [0094602e, 00946069] [0094606d, 00946095] [0094609e, 00946134] [00946138, 00946173] [00946177, 0094619f] [009461a8, 00946242] [00946246, 00946283] [0094628c, 00946600] [00946604, 0094663f] [00946643, 009466e9] [009466ed, 00946728] [0094672c, 00946750] [00946754, 009467ef] [009467f3, 0094682e] [00946832, 009468d8] [009468dc, 00946917] [0094691b, 0094693f] [00946943, 009469be] [009469c2, 00946a21] [00946a25, 00946a84] [00946a88, 00946b12] [00946b16, 00946b3e] [00946b42, 00946b57] [00946b5b, 00946b6d] [00946b71, 00946b87]]


void FUN_00945c80(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_f4;
  int iStack_f0;
  uint auStack_ec [3];
  uint auStack_e0 [7];
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  uint auStack_94 [2];
  uint uStack_8c;
  undefined1 auStack_88 [12];
  undefined4 uStack_7c;
  uint uStack_78;
  undefined1 auStack_74 [28];
  int *piStack_58;
  uint uStack_54;
  uint local_50 [3];
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  undefined1 uStack_38;
  void *pvStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b78f67;
  pvStack_14 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  piStack_58 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))(local_50);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  auStack_e0[5] = 0xf;
  auStack_e0[4] = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  FUN_00409350("PO_PD_NEG_100",0xd);
  puStack_10 = (undefined1 *)0x1;
  FUN_009a8ee0(&uStack_f4,auStack_e0);
  puStack_10._0_1_ = 2;
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  puStack_10._0_1_ = 5;
  FUN_009adb70();
  if (iStack_f0 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_f0 = 0;
  auStack_ec[0] = 0;
  auStack_ec[1] = 0;
  puStack_10._0_1_ = 6;
  if (0xf < auStack_e0[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  auStack_e0[5] = 0xf;
  auStack_e0[4] = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  iStack_9c = *(int *)(iVar5 + 0x10);
  auStack_94[0] =
       *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0xc) * 4)
                                  + 0xbe8) + *(int *)(iVar5 + 0x14) * 4) + 0x34);
  uStack_98 = *(undefined4 *)(iVar5 + 0x14);
  uStack_a4 = *(undefined4 *)(iVar5 + 8);
  uStack_a0 = *(undefined4 *)(iVar5 + 0xc);
  iStack_9c = FUN_00936fc0(auStack_94[0],&uStack_a4,&iStack_9c,0);
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = 0;
  puStack_10._0_1_ = 7;
  if (99 < iStack_9c) {
    auStack_e0[5] = 0xf;
    auStack_e0[4] = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    FUN_00409350("PO_PD_100",9);
    puStack_10._0_1_ = 8;
    FUN_009a8ee0(&uStack_f4,auStack_e0);
    puStack_10._0_1_ = 9;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 10;
    FUN_00408ed0();
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    puStack_10._0_1_ = 0xb;
    FUN_009adb70();
    if (iStack_f0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 7;
    iStack_f0 = 0;
    auStack_ec[0] = 0;
    auStack_ec[1] = 0;
    if (0xf < auStack_e0[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puStack_10._0_1_ = 7;
  if (iStack_9c < 0x46) {
    if (iStack_9c < 0x28) {
      if (iStack_9c < 10) {
        if (iStack_9c < -5) {
          if (iStack_9c < -0x19) {
            if (iStack_9c < -0x3c) {
              if (iStack_9c < -99) goto LAB_009464d9;
              FUN_009885d0();
              puStack_10._0_1_ = 0x20;
              FUN_009a8ee0(&uStack_f4,auStack_74);
              puStack_10._0_1_ = 0x21;
              iVar5 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
              puStack_10._0_1_ = 0x22;
              FUN_00408ed0();
              FUN_00408ad0();
              puStack_10._0_1_ = 0x20;
            }
            else {
              FUN_009885d0();
              puStack_10._0_1_ = 0x1d;
              FUN_009a8ee0(&uStack_f4,auStack_74);
              puStack_10._0_1_ = 0x1e;
              iVar5 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
              puStack_10._0_1_ = 0x1f;
              FUN_00408ed0();
              FUN_00408ad0();
              puStack_10._0_1_ = 0x1d;
            }
          }
          else {
            FUN_009885d0();
            puStack_10._0_1_ = 0x1a;
            FUN_009a8ee0(&uStack_f4,auStack_74);
            puStack_10._0_1_ = 0x1b;
            iVar5 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
            puStack_10._0_1_ = 0x1c;
            FUN_00408ed0();
            FUN_00408ad0();
            puStack_10._0_1_ = 0x1a;
          }
        }
        else {
          FUN_009885d0();
          puStack_10._0_1_ = 0x17;
          FUN_009a8ee0(&uStack_f4,auStack_74);
          puStack_10._0_1_ = 0x18;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
          puStack_10._0_1_ = 0x19;
          FUN_00408ed0();
          FUN_00408ad0();
          puStack_10._0_1_ = 0x17;
        }
        FUN_009a9740();
        puStack_10._0_1_ = 7;
        FUN_00408ad0();
      }
      else {
        auStack_e0[5] = 0xf;
        auStack_e0[4] = 0;
        auStack_e0[0] = (uint)auStack_e0[0]._1_3_ << 8;
        FUN_00409350("PO_PD_10",8);
        puStack_10._0_1_ = 0x14;
        FUN_009a8ee0(&uStack_f4,auStack_e0);
        puStack_10._0_1_ = 0x15;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        puStack_10._0_1_ = 0x16;
        FUN_00408ed0();
        if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_ac = 0xf;
        uStack_b0 = 0;
        uStack_c0 = uStack_c0 & 0xffffff00;
        puStack_10._0_1_ = 0x14;
        FUN_009a9740();
        puStack_10._0_1_ = 7;
        if (0xf < auStack_e0[5]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      auStack_e0[5] = 0xf;
      auStack_e0[4] = 0;
      auStack_e0[0] = (uint)auStack_e0[0]._1_3_ << 8;
      FUN_00409350("PO_PD_40",8);
      puStack_10._0_1_ = 0x10;
      FUN_009a8ee0(&uStack_f4,auStack_e0);
      puStack_10._0_1_ = 0x11;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      puStack_10._0_1_ = 0x12;
      FUN_00408ed0();
      if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_ac = 0xf;
      uStack_b0 = 0;
      uStack_c0 = uStack_c0 & 0xffffff00;
      puStack_10._0_1_ = 0x13;
      FUN_009adb70();
      if (iStack_f0 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_10._0_1_ = 7;
      iStack_f0 = 0;
      auStack_ec[0] = 0;
      auStack_ec[1] = 0;
      if (0xf < auStack_e0[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    auStack_e0[5] = 0xf;
    auStack_e0[4] = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    FUN_00409350("PO_PD_70",8);
    puStack_10._0_1_ = 0xc;
    FUN_009a8ee0(&uStack_f4,auStack_e0);
    puStack_10._0_1_ = 0xd;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 0xe;
    FUN_00408ed0();
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    puStack_10._0_1_ = 0xf;
    FUN_009adb70();
    if (iStack_f0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 7;
    iStack_f0 = 0;
    auStack_ec[0] = 0;
    auStack_ec[1] = 0;
    if (0xf < auStack_e0[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_009464d9:
  FUN_00448aa0();
  FUN_00448740(&DAT_00dee2cc,1);
  FUN_00448740(&DAT_00dee2cc,1);
  uVar3 = uStack_c4;
  iVar5 = *(int *)(param_1 + 0x6c);
  iVar1 = *(int *)(*(int *)(auStack_94[0] + 0x2c) + 4);
  bVar2 = false;
  uStack_c4 = uStack_c4 & 0xffffff;
  if ((iVar1 == *(int *)(iVar5 + 0xc)) ||
     (*(int *)(*(int *)(auStack_94[0] + 0x3c) + 4) == *(int *)(iVar5 + 0xc))) {
    bVar2 = true;
  }
  uStack_a4 = *(undefined4 *)(iVar5 + 0x10);
  if ((iVar1 == *(int *)(iVar5 + 0x14)) ||
     (*(int *)(*(int *)(auStack_94[0] + 0x3c) + 4) == *(int *)(iVar5 + 0x14))) {
    uStack_c4 = CONCAT13(1,(int3)uVar3);
  }
  auStack_e0[5] = 0xf;
  auStack_e0[4] = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  if (bVar2) {
    FUN_00409350("PO_WELEAD",9);
    puStack_10._0_1_ = 0x23;
    FUN_009a8ee0(&uStack_f4,auStack_e0);
    puStack_10._0_1_ = 0x24;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 0x25;
    FUN_00448aa0();
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    puStack_10._0_1_ = 0x26;
    FUN_009adb70();
    if (iStack_f0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350("PO_WENOTLEAD",0xc);
    puStack_10._0_1_ = 0x27;
    FUN_009a8ee0(&uStack_f4,auStack_e0);
    puStack_10._0_1_ = 0x28;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 0x29;
    FUN_00448aa0();
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    puStack_10._0_1_ = 0x2a;
    FUN_009adb70();
    if (iStack_f0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < auStack_e0[5]) {
    puStack_10._0_1_ = 7;
    auStack_ec[1] = 0;
    auStack_ec[0] = 0;
    iStack_f0 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 7;
  auStack_ec[1] = 0;
  auStack_ec[0] = 0;
  iStack_f0 = 0;
  auStack_e0[5] = 0xf;
  auStack_e0[4] = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  uStack_c4._3_1_ = (char)(uStack_c4 >> 0x18);
  if (uStack_c4._3_1_ == '\0') {
    FUN_00409350("PO_THEYNOTLEAD",0xe);
    puStack_10._0_1_ = 0x2f;
    FUN_009a8ee0(&uStack_f4,auStack_e0);
    puStack_10._0_1_ = 0x30;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 0x31;
    FUN_00448aa0();
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    puStack_10._0_1_ = 0x32;
    FUN_009adb70();
    if (iStack_f0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350("PO_THEYLEAD",0xb);
    puStack_10._0_1_ = 0x2b;
    FUN_009a8ee0(&uStack_f4,auStack_e0);
    puStack_10._0_1_ = 0x2c;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 0x2d;
    FUN_00448aa0();
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    puStack_10._0_1_ = 0x2e;
    FUN_009adb70();
    if (iStack_f0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < auStack_e0[5]) {
    puStack_10._0_1_ = 7;
    auStack_ec[1] = 0;
    auStack_ec[0] = 0;
    iStack_f0 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 7;
  auStack_ec[1] = 0;
  auStack_ec[0] = 0;
  iStack_f0 = 0;
  auStack_e0[5] = 0xf;
  auStack_e0[4] = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  FUN_00409350("war_desc",8);
  piVar4 = piStack_58;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x33);
  (**(code **)(*piStack_58 + 0x3c))();
  FUN_00408ed0(auStack_94,0,0xffffffff);
  FUN_00a5ecc0();
  pvStack_14._0_1_ = 7;
  if (0xf < auStack_e0[4]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_ec[2]);
  }
  auStack_e0[4] = 0xf;
  auStack_e0[3] = 0;
  auStack_ec[2] = auStack_ec[2] & 0xffffff00;
  FUN_00409350();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x34);
  iVar5 = (**(code **)(*piVar4 + 0x34))(auStack_ec + 2);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))();
  uStack_1c = 7;
  if (0xf < auStack_e0[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_ec[0]);
  }
  auStack_e0[2] = 0xf;
  auStack_e0[1] = 0;
  auStack_ec[0] = auStack_ec[0] & 0xffffff00;
  FUN_00409350("demand_button",0xd);
  uStack_1c = 0x35;
  iVar5 = (**(code **)(*piVar4 + 0x34))(auStack_ec);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x9c);
  uStack_24._0_1_ = 7;
  if (0xf < auStack_e0[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_f4);
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  auStack_e0[3] = auStack_e0[3] & 0xffffff00;
  FUN_00409350("warscore",8);
  uStack_24._0_1_ = 0x36;
  uVar6 = FUN_009888f0(auStack_88);
  uStack_24 = CONCAT31(uStack_24._1_3_,0x37);
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(auStack_e0 + 3);
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0(uVar6,0);
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_8c);
  }
  uStack_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_e0[2]);
  }
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (auStack_94[0] < 0x10) {
    ExceptionList = pvStack_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_a8);
}

