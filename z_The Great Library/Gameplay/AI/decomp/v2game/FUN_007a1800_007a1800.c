// FUN_007a1800 @ 007a1800 body=[[007a1800, 007a18a0] [007a18a4, 007a1913] [007a191c, 007a1992] [007a1996, 007a1a31] [007a1a35, 007a1a70] [007a1a74, 007a1a97] [007a1a9b, 007a1b19] [007a1b1d, 007a1b41] [007a1b45, 007a1b94] [007a1b98, 007a1baa] [007a1bae, 007a1c9a]]


void FUN_007a1800(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *****pppppcVar4;
  undefined4 uVar5;
  undefined1 *in_ECX;
  byte *pbVar6;
  bool bVar7;
  undefined1 auStack_128 [16];
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [12];
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [8];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  undefined1 *puStack_cc;
  uint uStack_bc;
  undefined1 *puStack_b8;
  uint auStack_b4 [2];
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint auStack_7c [4];
  undefined4 uStack_6c;
  uint uStack_68;
  char ****ppppcStack_60;
  undefined1 auStack_5c [16];
  uint uStack_4c;
  uint uStack_44;
  undefined1 local_3c [8];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *puStack_24;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6bbf5;
  pvStack_14 = ExceptionList;
  puStack_cc = (undefined1 *)0x11;
  pcStack_d0 = "ChatWindowEditBox";
  local_28 = (undefined1 *)0xf;
  local_2c = 0;
  local_3c[0] = 0;
  uStack_d8 = CONCAT44(0x7a1859,(undefined4)uStack_d8);
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_cc = local_3c;
  pcStack_d0 = (char *)0x7a1872;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x40))();
  pcStack_d0 = auStack_5c;
  uStack_d8 = CONCAT44(0x7a1882,(undefined4)uStack_d8);
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x4c))();
  pvStack_14._0_1_ = 2;
  if (0xf < uStack_30) {
    uStack_d8 = CONCAT44(uStack_44,&UNK_007a18a1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_d8 = CONCAT44(auStack_7c,0x7a18c7);
  pbVar3 = (byte *)FUN_00989330();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pbVar6 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_007a18f8:
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_007a18fd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_007a18f8;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_007a18fd:
  if (0xf < uStack_68) {
    uStack_d8 = CONCAT44(auStack_7c[0],&UNK_007a1914);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (iVar2 == 0) {
    if (uStack_4c < 0x10) {
      ExceptionList = pvStack_1c;
      return;
    }
    uStack_d8._4_4_ = (char *****)ppppcStack_60;
  }
  else {
    pppppcVar4 = (char *****)ppppcStack_60;
    if (uStack_4c < 0x10) {
      pppppcVar4 = &ppppcStack_60;
    }
    if (*(char *)pppppcVar4 != '/') {
      uStack_d8 = CONCAT44(&ppppcStack_60,0x7a1962);
      uVar5 = FUN_00988fa0();
      uStack_d8 = 0xffffffff00000000;
      pvStack_14._0_1_ = 3;
      uStack_e0 = CONCAT44(uVar5,0x7a197a);
      FUN_00408ed0();
      pvStack_14._0_1_ = 2;
      if (0xf < uStack_68) {
        uStack_d8 = CONCAT44(auStack_7c[0],&UNK_007a1993);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (in_ECX[0xcc] == '\0') {
      uStack_d8 = 0x1900e17254;
      uStack_a0 = 0xf;
      uStack_a4 = 0;
      auStack_b4[0] = auStack_b4[0] & 0xffffff00;
      uStack_e0 = CONCAT44(0x7a19c2,(undefined4)uStack_e0);
      FUN_00409350();
      uStack_d8 = CONCAT44(auStack_b4,auStack_98);
      pvStack_14._0_1_ = 4;
      uStack_e0 = CONCAT44(0x7a19d9,(undefined4)uStack_e0);
      uStack_bc = FUN_009a8ee0();
      pvStack_14._0_1_ = 5;
      uStack_d8 = CONCAT44(0x7a19ea,(undefined4)uStack_d8);
      iVar2 = FUN_00475500();
      uStack_e0 = *(ulonglong *)(iVar2 + 0x6c);
      uStack_d8 = *(undefined8 *)(iVar2 + 0x74);
      uStack_e4 = 0x7a1a0f;
      uVar5 = FUN_009a9880();
      pvStack_14._0_1_ = 6;
      uStack_d8 = CONCAT44(uVar5,0x7a1a1d);
      FUN_007a1ca0();
      if (0xf < uStack_68) {
        uStack_d8 = CONCAT44(auStack_7c[0],&UNK_007a1a32);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_68 = 0xf;
      uStack_6c = 0;
      auStack_7c[0] = auStack_7c[0] & 0xffffff00;
      pvStack_14._0_1_ = 7;
      uStack_d8 = CONCAT44(0x7a1a56,(undefined4)uStack_d8);
      FUN_009adb70();
      if (iStack_94 != 0) {
        uStack_d8 = CONCAT44(0x7a1a67,(undefined4)uStack_d8);
        FUN_009e6a80();
        uStack_d8 = CONCAT44(iStack_94,&UNK_007a1a71);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14._0_1_ = 2;
      iStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      in_ECX = puStack_b8;
      if (0xf < uStack_a0) {
        uStack_d8 = CONCAT44(auStack_b4[0],&UNK_007a1a98);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      uStack_d8._4_4_ = (char *****)0xbc;
      uStack_d8._0_4_ = 0x7a1bcd;
      uStack_bc = FUN_00aae9af();
      pvStack_14._0_1_ = 8;
      if (uStack_bc == 0) {
        uVar5 = 0;
      }
      else {
        puStack_b8 = auStack_ec;
        uStack_f0 = 0xffffffff;
        uStack_f4 = 0;
        puStack_f8 = in_ECX + 0xa4;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,0xf);
        uStack_e0 = uStack_e0 & 0xffffffff;
        auStack_ec[0] = 0;
        uStack_fc = 0x7a1c09;
        FUN_00408ed0();
        puStack_24 = auStack_108;
        pvStack_14._0_1_ = 9;
        uStack_10c = 0xffffffff;
        uStack_110 = 0;
        puStack_114 = in_ECX + 0x88;
        uStack_f4 = 0xf;
        puStack_f8 = (undefined1 *)0x0;
        auStack_108[0] = 0;
        uStack_118 = 0x7a1c34;
        FUN_00408ed0();
        pvStack_14._0_1_ = 10;
        uStack_10c = *(undefined4 *)(in_ECX + 0xc0);
        local_28 = auStack_128;
        puStack_114 = (undefined1 *)0xf;
        uStack_118 = 0;
        auStack_128[0] = 0;
        FUN_00408ed0(&ppppcStack_60,0,0xffffffff);
        pvStack_14._0_1_ = 8;
        uVar5 = FUN_00a03390(uStack_bc);
      }
      pvStack_14._0_1_ = 2;
      uStack_d8 = CONCAT44(uVar5,0x7a1c96);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x84) + 0x38) + 0x18))();
    }
    uStack_d8 = 0xded94d;
    uStack_a0 = 0xf;
    uStack_a4 = 0;
    auStack_b4[0] = auStack_b4[0] & 0xffffff00;
    uStack_e0 = CONCAT44(0x7a1abf,(undefined4)uStack_e0);
    FUN_00409350();
    pvStack_14._0_1_ = 0xb;
    uStack_d8 = 0x1100e17224;
    uStack_84 = 0xf;
    uStack_88 = 0;
    auStack_98[0] = 0;
    uStack_e0 = CONCAT44(0x7a1ae3,(undefined4)uStack_e0);
    FUN_00409350();
    pvStack_14._0_1_ = 0xc;
    uStack_d8._4_4_ = (char *****)auStack_98;
    uStack_d8._0_4_ = 0x7a1afa;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x40))();
    uStack_d8 = CONCAT44(uStack_d8._4_4_,&puStack_b8);
    uStack_e0 = CONCAT44(0x7a1b09,(undefined4)uStack_e0);
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x40))();
    if (0xf < uStack_8c) {
      uStack_e0 = CONCAT44(uStack_a0,&UNK_007a1b1a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_1c._0_1_ = 2;
    uStack_8c = 0xf;
    uStack_90 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    if (0xf < uStack_a8) {
      uStack_e0 = CONCAT44(uStack_bc,&UNK_007a1b42);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_e0 = 0x1100e17224;
    uStack_a8 = 0xf;
    uStack_ac = 0;
    uStack_bc = uStack_bc & 0xffffff00;
    uStack_e4 = 0x7a1b61;
    FUN_00409350();
    pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,0xd);
    uStack_e0 = CONCAT44(&uStack_bc,0x7a1b7a);
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x40))();
    uStack_d8 = CONCAT44(uVar5,0x7a1b80);
    FUN_009b6400();
    if (0xf < uStack_a0) {
      uStack_d8 = CONCAT44(auStack_b4[0],&UNK_007a1b95);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (uStack_4c < 0x10) {
      ExceptionList = pvStack_1c;
      return;
    }
    uStack_d8._4_4_ = (char *****)ppppcStack_60;
  }
  uStack_d8 = CONCAT44(uStack_d8._4_4_,&UNK_007a1bab);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

