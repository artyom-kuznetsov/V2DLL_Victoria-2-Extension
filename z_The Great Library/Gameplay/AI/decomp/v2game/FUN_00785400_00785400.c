// FUN_00785400 @ 00785400 body=[[00785400, 007854dd] [007854e1, 007855e9] [007855ed, 0078560f] [00785613, 0078563d] [00785641, 00785693] [00785699, 007856d1] [007856d5, 007857a9] [007857ad, 0078583d] [00785841, 00785859] [0078585d, 00785881] [00785885, 007858a8] [007858ac, 007859a2] [007859a6, 007859e3] [007859e7, 00785a0b] [00785a0f, 00785a2c] [00785a30, 00785aaf] [00785ab3, 00785b07] [00785b0b, 00785c53] [00785c57, 00785c79] [00785c7d, 00785c9d] [00785ca1, 00785cbf] [00785cc3, 00785d20] [00785d24, 00785e4c] [00785e50, 00785f04] [00785f08, 00785f2a] [00785f2e, 00785f91] [00785f95, 00785fe4] [00785fe8, 00786037] [0078603b, 007860bf] [007860c3, 007860e5] [007860e9, 0078616c] [00786170, 00786192] [00786196, 00786239] [0078623d, 0078625f] [00786263, 00786269] [00786270, 007862df] [007862e3, 0078630b] [0078630f, 007864fd] [00786501, 00786530] [00786534, 00786559] [0078655d, 0078657c] [00786580, 0078659c] [007865a0, 007865c5] [007865c9, 007866e2] [007866e6, 00786736] [0078673a, 00786764] [00786768, 00786952] [00786956, 00786985] [00786989, 007869ae] [007869b2, 007869d1] [007869d5, 007869f1] [007869f5, 00786a1a] [00786a1e, 00786b23] [00786b27, 00786cd6]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00785400(int param_1,int param_2,int *param_3)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined *****pppppuVar9;
  code *pcVar10;
  int iVar11;
  undefined *****pppppuStack_1dc;
  undefined *****pppppuStack_1d8;
  undefined *****pppppuStack_1d4;
  char *pcStack_1d0;
  undefined *****pppppuStack_1cc;
  char *pcStack_1c8;
  undefined *****pppppuStack_1c4;
  undefined *****pppppuStack_1c0;
  undefined *****pppppuStack_1bc;
  undefined *****pppppuStack_1b8;
  undefined *****pppppuStack_1b4;
  undefined8 uStack_1b0;
  undefined *****pppppuStack_1a8;
  undefined *****pppppuStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_184 [28];
  undefined1 local_168 [28];
  undefined ****local_14c [5];
  float local_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  undefined ****local_f8 [4];
  undefined4 local_e8;
  float local_e4;
  undefined *****local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  undefined ***local_c0;
  undefined1 *local_bc;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [2];
  undefined1 local_94 [4];
  int local_90;
  undefined4 local_8c;
  uint local_88;
  undefined *****local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined *****local_64;
  undefined *****local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined ***local_44;
  undefined *****local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined *****local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18;
  undefined *****local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6c81d;
  local_10 = ExceptionList;
  local_14 = (undefined *****)0x0;
  local_3c = 0x2d2d2d;
  local_38 = (undefined1 *)0x0;
  local_198 = CONCAT44(0x785443,(undefined *****)local_198);
  ExceptionList = &local_10;
  FUN_00595b90();
  local_198 = CONCAT44(0x78544a,(undefined *****)local_198);
  iVar5 = FUN_00595b90();
  if (iVar5 != 0) {
    local_198 = CONCAT44(0x785459,(undefined *****)local_198);
    iVar5 = FUN_00595b90();
    if (*(int *)(iVar5 + 0x88) != 0) {
      local_198 = CONCAT44(0x78546c,(undefined *****)local_198);
      iVar5 = FUN_00595b90();
      local_3c = *(undefined4 *)(*(int *)(iVar5 + 0x88) + 0xc0);
      local_38 = *(undefined1 **)(*(int *)(iVar5 + 0x88) + 0xc4);
      local_198 = 0xb00e15978;
      local_11c = 0xf;
      local_120 = 0;
      local_130[0] = local_130[0] & 0xffffff00;
      local_1a0 = CONCAT44(0x7854ac,(undefined4)local_1a0);
      FUN_00409350();
      local_8 = 0;
      local_198._4_4_ = (undefined *****)local_130;
      local_198._0_4_ = (undefined *****)0x7854bf;
      local_40 = (undefined *****)(**(code **)(*param_3 + 0x44))();
      local_8 = 0xffffffff;
      if (0xf < local_11c) {
        local_198 = CONCAT44(local_198._4_4_,local_130[0]);
        local_1a0 = CONCAT44(&UNK_007854de,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_11c = 0xf;
      local_120 = 0;
      local_130[0] = local_130[0] & 0xffffff00;
      local_198._0_4_ = (undefined *****)0x7854fe;
      local_34 = (undefined1 *)FUN_00595b90();
      local_198._0_4_ = (undefined *****)0x785517;
      FUN_00436780();
      local_8 = 1;
      local_198._0_4_ = (undefined *****)0x785531;
      FUN_004367c0();
      local_8._0_1_ = 2;
      local_64 = *(undefined ******)(DAT_012586e0 + 0x4c);
      if (local_64 == (undefined *****)0x1) {
        local_198._0_4_ = (undefined *****)0xffffffff;
        local_1a0 = ZEXT48(&local_30);
        pppppuStack_1a4 = (undefined *****)0x785557;
        FUN_00408ed0();
      }
      local_198._0_4_ = (undefined *****)0x4;
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = local_b8[0] & 0xffffff00;
      local_1a0 = 0xdf2c9c00785580;
      FUN_00409350();
      local_8._0_1_ = 3;
      local_198._0_4_ = (undefined *****)0x13;
      local_100 = 0xf;
      local_104 = 0;
      local_114 = local_114 & 0xffffff00;
      local_1a0 = 0xdf2c88007855a8;
      FUN_00409350();
      local_8._0_1_ = 4;
      local_198._0_4_ = (undefined *****)((int)local_34 + 0xb4);
      local_1a0 = CONCAT44(0x7855c3,(undefined4)local_1a0);
      FUN_00988f20();
      local_198._0_4_ = (undefined *****)local_b8;
      local_8._0_1_ = 5;
      local_1a0 = CONCAT44(0x7855db,(undefined4)local_1a0);
      FUN_00988f20();
      if (0xf < local_6c) {
        local_198 = CONCAT44(local_198._4_4_,local_80[0]);
        local_1a0 = CONCAT44(&UNK_007855ea,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
      if (0xf < local_100) {
        local_198 = CONCAT44(local_198._4_4_,local_114);
        local_1a0 = CONCAT44(&UNK_00785610,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_100 = 0xf;
      local_104 = 0;
      local_114 = local_114 & 0xffffff00;
      local_8._0_1_ = 9;
      uVar4 = (undefined1)local_8;
      local_8._0_1_ = 9;
      if (0xf < local_a4) {
        local_198 = CONCAT44(local_198._4_4_,local_b8[0]);
        local_1a0 = CONCAT44(&UNK_0078563e,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = local_b8[0] & 0xffffff00;
      local_198._0_4_ = (undefined *****)local_dc;
      if (local_64 == (undefined *****)0x2) {
        local_1a0 = CONCAT44(&local_30,local_60);
        pppppuStack_1a4 = (undefined *****)0x7856ad;
        local_8._0_1_ = uVar4;
        uVar6 = FUN_00436de0();
        local_198._0_4_ = (undefined *****)0xffffffff;
        local_1a0 = (ulonglong)uVar6;
        local_8._0_1_ = 0xb;
        pppppuStack_1a4 = (undefined *****)0x7856bf;
        FUN_00408ed0();
        local_8._0_1_ = 9;
        if (0xf < local_4c) {
          local_198 = CONCAT44(local_198._4_4_,local_60[0]);
          local_1a0 = CONCAT44(&UNK_007856d2,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        local_198._0_4_ = (undefined *****)local_9c;
        local_1a0 = CONCAT44(0x78566e,(undefined4)local_1a0);
        uVar6 = FUN_00988f20();
        local_198._0_4_ = (undefined *****)0xffffffff;
        local_1a0 = (ulonglong)uVar6;
        local_8._0_1_ = 10;
        pppppuStack_1a4 = (undefined *****)0x785681;
        FUN_00408ed0();
        local_8._0_1_ = 9;
        if (0xf < local_4c) {
          local_198 = CONCAT44(local_198._4_4_,local_60[0]);
          local_1a0 = CONCAT44(&UNK_00785694,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_8._0_1_ = 9;
      local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
      local_50 = 0;
      local_4c = 0xf;
      local_198._0_4_ = (undefined *****)0x7856f8;
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
      local_198._0_4_ = (undefined *****)0x1ac;
      local_1a0 = CONCAT44(0x785704,(undefined4)local_1a0);
      local_64 = (undefined *****)FUN_00aae9af();
      local_8._0_1_ = 0xc;
      if (local_64 == (undefined *****)0x0) {
        local_34 = (undefined1 *)0x0;
      }
      else {
        local_198._0_4_ = (undefined *****)0x13;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
        local_1a0 = 0xdf2ca40078572e;
        FUN_00409350();
        local_198._0_4_ = (undefined *****)local_60;
        local_8 = CONCAT31(local_8._1_3_,0xd);
        local_14 = (undefined *****)0x1;
        local_1a0 = CONCAT44(0x785748,(undefined4)local_1a0);
        uVar7 = FUN_005c2ad0();
        local_c0 = *(undefined ****)(iVar5 + 0x6b9bc);
        local_bc = *(undefined1 **)(iVar5 + 0x6b9c0);
        pppppuStack_1a4 =
             (undefined *****)CONCAT22((short)local_bc,(short)*(undefined4 *)(iVar5 + 0x6b9bc));
        local_1a0 = CONCAT44(uVar7,local_9c);
        pppppuStack_1a8 = local_64;
        uStack_1b0._4_4_ = (char *)0x785786;
        local_34 = (undefined1 *)pppppuStack_1a4;
        local_198._0_4_ = (undefined *****)iVar5;
        local_34 = (undefined1 *)FUN_009c4b50();
      }
      pppppuVar9 = local_40;
      local_8 = 9;
      if (((uint)local_14 & 1) != 0) {
        if (0xf < local_4c) {
          local_198 = CONCAT44(local_198._4_4_,local_60[0]);
          local_1a0 = CONCAT44(&UNK_007857aa,(undefined4)local_1a0);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
      }
      local_198 = CONCAT44(local_198._4_4_,local_34);
      local_1a0 = CONCAT44(0x7857cd,(undefined4)local_1a0);
      (*(code *)(*local_40)[0x38])();
      local_1a0 = CONCAT44(0x7857d6,(undefined4)local_1a0);
      (*(code *)(*pppppuVar9)[0xd])();
      local_1a0 = 0xb00e15984;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
      pppppuStack_1a4 = (undefined *****)0x7857f2;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      local_1a0 = CONCAT44(0x7857fd,(undefined4)local_1a0);
      iVar5 = FUN_00595b90();
      local_1a0 = CONCAT44(local_60,0x785811);
      (**(code **)(*param_3 + 0x3c))();
      local_198 = 0xffffffff00000000;
      local_1a0 = CONCAT44(iVar5 + 0x94U,0x785822);
      FUN_00408ed0();
      local_198 = (ulonglong)(iVar5 + 0x94U);
      local_1a0 = CONCAT44(0x78582f,(undefined4)local_1a0);
      FUN_00a5ecc0();
      if (0xf < local_4c) {
        local_198 = CONCAT44(local_60[0],&UNK_0078583e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_88) {
        local_198 = CONCAT44(local_9c[0],&UNK_0078585a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < (uint)local_1c) {
        local_198 = CONCAT44(local_30,&UNK_00785882);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 2.10195e-44;
      local_20 = 0.0;
      local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
      if (0xf < local_c8) {
        local_198 = CONCAT44(local_dc[0],&UNK_007858a9);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = (undefined *****)((uint)local_dc[0] & 0xffffff00);
      goto LAB_00785a30;
    }
  }
  if ((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34) & 0xfffffff8U) != 0) {
    local_3c = **(undefined4 **)(param_2 + 0x34);
    local_38 = (undefined1 *)(*(undefined4 **)(param_2 + 0x34))[1];
    local_198 = 0xc00e15b48;
    local_1c = 2.10195e-44;
    local_20 = 0.0;
    local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
    local_1a0 = CONCAT44(0x785902,(undefined4)local_1a0);
    FUN_00409350();
    local_8 = 0x10;
    local_198 = 0xb00e15984;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
    local_1a0 = CONCAT44(0x785921,(undefined4)local_1a0);
    FUN_00409350();
    local_198 = CONCAT44(&local_30,local_94);
    local_8._0_1_ = 0x11;
    local_1a0 = CONCAT44(0x785935,(undefined4)local_1a0);
    FUN_009a8ee0();
    local_8._0_1_ = 0x12;
    local_198 = CONCAT44(0x785940,(undefined *****)local_198);
    iVar5 = FUN_00475500();
    local_1a0 = *(undefined8 *)(iVar5 + 0x6c);
    local_198 = *(undefined8 *)(iVar5 + 0x74);
    pppppuStack_1a4 = (undefined *****)0x785962;
    uVar6 = FUN_009a9880();
    local_8._0_1_ = 0x13;
    local_198 = CONCAT44(local_60,0x785976);
    (**(code **)(*param_3 + 0x3c))();
    local_198 = 0xffffffff00000000;
    local_1a0 = CONCAT44(uVar6,0x785987);
    FUN_00408ed0();
    local_198 = (ulonglong)uVar6;
    local_1a0 = CONCAT44(0x785994,(undefined4)local_1a0);
    FUN_00a5ecc0();
    if (0xf < local_6c) {
      local_198 = CONCAT44(local_80[0],&UNK_007859a3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,0x14);
    local_198 = CONCAT44(0x7859c3,(undefined *****)local_198);
    FUN_009adb70();
    if (local_90 != 0) {
      local_198 = CONCAT44(0x7859d8,(undefined *****)local_198);
      FUN_009e6a80();
      local_198 = CONCAT44(local_90,&UNK_007859e4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    if (0xf < local_4c) {
      local_198 = CONCAT44(local_60[0],&UNK_00785a0c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
    if (0xf < (uint)local_1c) {
      local_198 = CONCAT44(local_30,&UNK_00785a2d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_00785a30:
  local_198 = 0x600e09188;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
  local_1a0 = CONCAT44(0x785a4c,(undefined4)local_1a0);
  FUN_00409350();
  local_8 = 0x15;
  local_198._4_4_ = (undefined *****)local_60;
  local_198._0_4_ = (undefined *****)0x785a63;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  local_198._0_4_ = (undefined *****)0x785a6f;
  local_40 = (undefined *****)(**(code **)(*piVar8 + 0xec))();
  ppppuVar1 = *local_40;
  local_198._0_4_ = (undefined *****)0x785a8a;
  uVar7 = FUN_0052fc10();
  local_198 = CONCAT44(local_198._4_4_,uVar7);
  local_1a0 = CONCAT44(0x785a96,(undefined4)local_1a0);
  (*(code *)ppppuVar1[0x54])();
  local_8 = 0xffffffff;
  if (0xf < local_4c) {
    local_1a0 = CONCAT44(local_60[0],&UNK_00785ab0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1a0 = 0x600e09188;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1a4 = (undefined *****)0x785acf;
  FUN_00409350();
  local_8 = 0x16;
  local_1a0._4_4_ = (undefined *****)&local_30;
  local_1a0._0_4_ = 0x785ae3;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  local_1a0 = CONCAT44(local_1a0._4_4_,local_38);
  pppppuStack_1a4 = (undefined *****)0x785af3;
  (**(code **)(*piVar8 + 0xd4))();
  local_8 = 0xffffffff;
  if (0xf < (uint)local_1c) {
    pppppuStack_1a4 = local_30;
                    /* WARNING: Subroutine does not return */
    pppppuStack_1a8 = (undefined *****)&UNK_00785b08;
    FUN_00aae91b();
  }
  pppppuStack_1a4 = (undefined *****)&local_40;
  pppppuStack_1a8 = (undefined *****)(param_2 + 0x20);
  iVar5 = 0;
  uStack_1b0._4_4_ = (char *)0x785b20;
  local_14 = pppppuStack_1a8;
  FUN_005dc630();
  pppppuVar9 = local_40;
  if (0 < (int)local_40) {
    pppppuStack_1a4 = (undefined *****)&local_38;
    pppppuStack_1a8 = (undefined *****)0x785b33;
    piVar8 = (int *)FUN_005dc710();
    if (pppppuVar9 == (undefined *****)0x0) {
      iVar5 = -1;
    }
    else {
      uStack_1b0._0_4_ = (undefined *****)*piVar8;
      if (((int)(undefined *****)uStack_1b0 < -0x189373) ||
         (0x20c49a < (int)(undefined *****)uStack_1b0)) {
        uStack_1b0._4_4_ = (char *)((int)(undefined *****)uStack_1b0 >> 0x1f);
        pppppuStack_1a4 = (undefined *****)0x0;
        pppppuStack_1a8 = (undefined *****)0x3e8;
        local_38 = (undefined1 *)((int)pppppuVar9 >> 0x1f);
        pppppuStack_1b4 = (undefined *****)0x785b71;
        uStack_1b0 = __allmul();
        pppppuStack_1a4 = (undefined *****)local_38;
        pppppuStack_1a8 = pppppuVar9;
        pppppuStack_1b4 = (undefined *****)0x785b7d;
        iVar5 = __alldiv();
        local_38 = (undefined1 *)(iVar5 >> 0x1f);
      }
      else {
        iVar5 = ((int)(undefined *****)uStack_1b0 * 1000) / (int)pppppuVar9;
      }
    }
  }
  pppppuStack_1a4 = (undefined *****)0x0;
  uStack_1b0._4_4_ = (char *)(iVar5 >> 0x1f);
  pppppuStack_1a8 = (undefined *****)0x186a0;
  pppppuStack_1b4 = (undefined *****)0x785b93;
  uStack_1b0._0_4_ = (undefined *****)iVar5;
  uStack_1b0 = __allmul();
  pppppuStack_1a4 = (undefined *****)0x0;
  pppppuStack_1a8 = (undefined *****)0x3e8;
  pppppuStack_1b4 = (undefined *****)0x785ba0;
  pppppuVar9 = (undefined *****)__alldiv();
  pppppuStack_1a4 = (undefined *****)0x1;
  pppppuStack_1a8 = (undefined *****)&DAT_00df9644;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  uStack_1b0._4_4_ = (char *)0x785bc2;
  local_64 = pppppuVar9;
  FUN_00409350();
  local_8 = 0x17;
  pppppuStack_1a4 = (undefined *****)0xb;
  pppppuStack_1a8 = (undefined *****)0xe15918;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
  uStack_1b0._4_4_ = (char *)0x785be1;
  FUN_00409350();
  pppppuStack_1a4 = (undefined *****)0x2;
  local_38 = (undefined1 *)&pppppuStack_1a8;
  local_8._0_1_ = 0x18;
  uStack_1b0._4_4_ = (char *)local_dc;
  uStack_1b0._0_4_ = (undefined *****)0x785bfb;
  pppppuStack_1a8 = pppppuVar9;
  FUN_00988a50();
  pppppuStack_1a4 = (undefined *****)&local_30;
  local_8._0_1_ = 0x19;
  pppppuStack_1a8 = (undefined *****)0x785c0d;
  uVar7 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  pppppuStack_1a4 = (undefined *****)local_60;
  pppppuStack_1a8 = (undefined *****)0x785c23;
  local_40 = (undefined *****)(**(code **)(*param_3 + 0x3c))();
  pppppuStack_1a8 = (undefined *****)0xffffffff;
  uStack_1b0._4_4_ = (char *)0x0;
  pppppuStack_1b4 = (undefined *****)0x785c35;
  uStack_1b0._0_4_ = (undefined *****)uVar7;
  FUN_00408ed0();
  pppppuStack_1a8 = (undefined *****)0x0;
  uStack_1b0._0_4_ = (undefined *****)0x785c45;
  uStack_1b0._4_4_ = (char *)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_6c) {
    pppppuStack_1a8 = local_80[0];
                    /* WARNING: Subroutine does not return */
    uStack_1b0._4_4_ = &UNK_00785c54;
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
  if (0xf < local_c8) {
    pppppuStack_1a8 = local_dc[0];
                    /* WARNING: Subroutine does not return */
    uStack_1b0._4_4_ = &UNK_00785c7a;
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = (undefined *****)((uint)local_dc[0] & 0xffffff00);
  if (0xf < local_4c) {
    pppppuStack_1a8 = local_60[0];
                    /* WARNING: Subroutine does not return */
    uStack_1b0._4_4_ = &UNK_00785c9e;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
  if (0xf < (uint)local_1c) {
    pppppuStack_1a8 = local_30;
                    /* WARNING: Subroutine does not return */
    uStack_1b0._4_4_ = &UNK_00785cc0;
    FUN_00aae91b();
  }
  pppppuStack_1a8 = (undefined *****)0x6;
  uStack_1b0._4_4_ = "morale";
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  uStack_1b0._0_4_ = (undefined *****)0x785cdb;
  FUN_00409350();
  local_8 = 0x1b;
  pppppuStack_1a8 = (undefined *****)&local_30;
  uStack_1b0._4_4_ = (char *)0x785cef;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  uStack_1b0._4_4_ = (char *)((int)local_64 / 1000);
  uStack_1b0._0_4_ = (undefined *****)0x785d0b;
  (**(code **)(*piVar8 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < (uint)local_1c) {
    uStack_1b0._0_4_ = local_30;
                    /* WARNING: Subroutine does not return */
    pppppuStack_1b4 = (undefined *****)&UNK_00785d21;
    FUN_00aae91b();
  }
  uStack_1b0._0_4_ = (undefined *****)0x3f000000;
  pppppuStack_1b4 = (undefined *****)0x785d4e;
  FUN_00401000();
  uStack_1b0._0_4_ = (undefined *****)0x785d56;
  local_34 = (undefined1 *)FUN_00b31c00();
  ppppuVar1 = *local_14;
  while (ppppuVar1 != (undefined ****)0x0) {
    pppuVar2 = *ppppuVar1;
    ppppuVar1 = (undefined ****)ppppuVar1[2];
    uStack_1b0._0_4_ = (undefined *****)&local_38;
    pppppuStack_1b4 = (undefined *****)0x785d72;
    piVar8 = (int *)(*(code *)(*pppuVar2)[0x14])();
    local_34 = (undefined1 *)((int)local_34 + *piVar8);
  }
  uStack_1b0._0_4_ = (undefined *****)&local_38;
  local_40 = (undefined *****)((float)(int)local_34 / 1000.0);
  pppppuStack_1b8 = (undefined *****)0x785da5;
  pppppuStack_1b4 = local_14;
  piVar8 = (int *)FUN_005dc180();
  ppppuVar1 = (undefined ****)((float)*piVar8 / 1000.0);
  if ((float)local_40 < (float)ppppuVar1) {
    local_40 = (undefined *****)ppppuVar1;
  }
  local_40 = (undefined *****)(((float)ppppuVar1 / (float)local_40) * 100.0);
  uStack_1b0._0_4_ = (undefined *****)0x8;
  pppppuStack_1b4 = (undefined *****)0xe15938;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1b8 = (undefined *****)0x785e14;
  FUN_00409350();
  local_8 = 0x1c;
  uStack_1b0._0_4_ = (undefined *****)&local_30;
  pppppuStack_1b4 = (undefined *****)0x785e28;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  pppppuStack_1b4 = (undefined *****)(int)(float)local_40;
  pppppuStack_1b8 = (undefined *****)0x785e37;
  (**(code **)(*piVar8 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < (uint)local_1c) {
    pppppuStack_1b8 = local_30;
                    /* WARNING: Subroutine does not return */
    pppppuStack_1bc = (undefined *****)&UNK_00785e4d;
    FUN_00aae91b();
  }
  pppppuStack_1b8 = (undefined *****)0xd;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1bc = (undefined *****)0xe15944;
  if (*(char *)(param_1 + 0xa20) == '\0') {
    pppppuStack_1c0 = (undefined *****)0x785e9e;
    FUN_00409350();
    local_38 = (undefined1 *)&pppppuStack_1b8;
    pppppuStack_1bc = (undefined *****)&pppppuStack_1b8;
    local_8 = 0x1f;
    pppppuStack_1c0 = local_14;
    pppppuStack_1c4 = (undefined *****)0x785eb5;
    FUN_005dc180();
    pppppuStack_1bc = (undefined *****)local_80;
    pppppuStack_1c0 = (undefined *****)0x785ebe;
    uVar7 = FUN_005c0800();
    local_8 = CONCAT31(local_8._1_3_,0x20);
  }
  else {
    pppppuStack_1c0 = (undefined *****)0x785e77;
    FUN_00409350();
    local_8 = 0x1d;
    pppppuStack_1b8 = (undefined *****)0x785e86;
    FUN_005dba20();
    pppppuStack_1b8 = (undefined *****)local_80;
    pppppuStack_1bc = (undefined *****)0x785e91;
    uVar7 = FUN_009888f0();
    local_8 = CONCAT31(local_8._1_3_,0x1e);
  }
  pppppuStack_1b8 = (undefined *****)&local_30;
  pppppuStack_1bc = (undefined *****)0x785ed4;
  local_40 = (undefined *****)(**(code **)(*param_3 + 0x3c))();
  pppppuStack_1bc = (undefined *****)0xffffffff;
  pppppuStack_1c0 = (undefined *****)0x0;
  pcStack_1c8 = (char *)0x785ee6;
  pppppuStack_1c4 = (undefined *****)uVar7;
  FUN_00408ed0();
  pppppuStack_1bc = (undefined *****)0x0;
  pppppuStack_1c4 = (undefined *****)0x785ef6;
  pppppuStack_1c0 = (undefined *****)uVar7;
  FUN_00a5ecc0();
  if (0xf < local_6c) {
    pppppuStack_1bc = local_80[0];
                    /* WARNING: Subroutine does not return */
    pppppuStack_1c0 = (undefined *****)&UNK_00785f05;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
  local_70 = 0;
  local_6c = 0xf;
  if (0xf < (uint)local_1c) {
    pppppuStack_1bc = local_30;
                    /* WARNING: Subroutine does not return */
    pppppuStack_1c0 = (undefined *****)&UNK_00785f2b;
    FUN_00aae91b();
  }
  if (*(char *)(param_1 + 0xa20) != '\0') {
    pppppuStack_1bc = (undefined *****)0x786b59;
    FUN_009885d0();
    local_8 = 0x40;
    pppppuStack_1bc = (undefined *****)0x4;
    pppppuStack_1c0 = (undefined *****)0x786b6a;
    FUN_005dc0a0();
    pppppuStack_1bc = (undefined *****)local_80;
    pppppuStack_1c0 = (undefined *****)0x786b75;
    uVar7 = FUN_009888f0();
    local_8 = CONCAT31(local_8._1_3_,0x41);
    pppppuStack_1bc = local_14c;
    pppppuStack_1c0 = (undefined *****)0x786b8b;
    (**(code **)(*param_3 + 0x3c))();
    pppppuStack_1c0 = (undefined *****)0xffffffff;
    pppppuStack_1c4 = (undefined *****)0x0;
    pppppuStack_1cc = (undefined *****)0x786b9d;
    pcStack_1c8 = (char *)uVar7;
    FUN_00408ed0();
    pppppuStack_1c0 = (undefined *****)0x0;
    pcStack_1c8 = (char *)0x786bad;
    pppppuStack_1c4 = (undefined *****)uVar7;
    FUN_00a5ecc0();
    pppppuStack_1c0 = (undefined *****)0x786bb5;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    pppppuStack_1c0 = (undefined *****)0x786bc7;
    FUN_00408ad0();
    pppppuStack_1c0 = (undefined *****)0x786bd7;
    FUN_009885d0();
    local_8 = 0x42;
    pppppuStack_1c0 = (undefined *****)0x5;
    pppppuStack_1c4 = (undefined *****)0x786be8;
    FUN_005dc0a0();
    pppppuStack_1c0 = local_14c;
    pppppuStack_1c4 = (undefined *****)0x786bf6;
    uVar7 = FUN_009888f0();
    local_8 = CONCAT31(local_8._1_3_,0x43);
    pppppuStack_1c0 = local_f8;
    pppppuStack_1c4 = (undefined *****)0x786c0c;
    (**(code **)(*param_3 + 0x3c))();
    pppppuStack_1c4 = (undefined *****)0xffffffff;
    pcStack_1c8 = (char *)0x0;
    pcStack_1d0 = (char *)0x786c1e;
    pppppuStack_1cc = (undefined *****)uVar7;
    FUN_00408ed0();
    pppppuStack_1c4 = (undefined *****)0x0;
    pppppuStack_1cc = (undefined *****)0x786c2e;
    pcStack_1c8 = (char *)uVar7;
    FUN_00a5ecc0();
    pppppuStack_1c4 = (undefined *****)0x786c39;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    pppppuStack_1c4 = (undefined *****)0x786c4b;
    FUN_00408ad0();
    pppppuStack_1c4 = (undefined *****)0x786c5b;
    FUN_009885d0();
    local_8 = 0x44;
    pppppuStack_1c4 = (undefined *****)0x6;
    pcStack_1c8 = (char *)0x786c6c;
    FUN_005dc0a0();
    pppppuStack_1c4 = (undefined *****)local_184;
    pcStack_1c8 = (char *)0x786c7a;
    uVar7 = FUN_009888f0();
    local_8 = CONCAT31(local_8._1_3_,0x45);
    pppppuStack_1c4 = (undefined *****)local_168;
    pcStack_1c8 = (char *)0x786c90;
    (**(code **)(*param_3 + 0x3c))();
    pcStack_1c8 = (char *)0xffffffff;
    pppppuStack_1cc = (undefined *****)0x0;
    pppppuStack_1d4 = (undefined *****)0x786ca1;
    pcStack_1d0 = (char *)uVar7;
    FUN_00408ed0();
    pcStack_1c8 = (char *)0x0;
    pcStack_1d0 = (char *)0x786cae;
    pppppuStack_1cc = (undefined *****)uVar7;
    FUN_00a5ecc0();
    pcStack_1c8 = (char *)0x786cb9;
    FUN_00408ad0();
    pcStack_1c8 = (char *)0x786cc4;
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  }
  pppppuStack_1bc = (undefined *****)0xb;
  pppppuStack_1c0 = (undefined *****)0xe15b58;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1c4 = (undefined *****)0x785f59;
  FUN_00409350();
  local_8 = 0x21;
  pppppuStack_1bc = (undefined *****)&local_30;
  pppppuStack_1c0 = (undefined *****)0x785f6d;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  pppppuStack_1c0 = (undefined *****)0x1;
  pppppuStack_1c4 = (undefined *****)0x785f78;
  (**(code **)(*piVar8 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < (uint)local_1c) {
    pppppuStack_1c4 = local_30;
                    /* WARNING: Subroutine does not return */
    pcStack_1c8 = &UNK_00785f92;
    FUN_00aae91b();
  }
  pppppuStack_1c4 = (undefined *****)0xb;
  pcStack_1c8 = "unit_type_1";
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1cc = (undefined *****)0x785fb1;
  FUN_00409350();
  local_8 = 0x22;
  pppppuStack_1c4 = (undefined *****)&local_30;
  pcStack_1c8 = (char *)0x785fc5;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  pcStack_1c8 = (char *)0x2;
  pppppuStack_1cc = (undefined *****)0x785fd0;
  (**(code **)(*piVar8 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < (uint)local_1c) {
    pppppuStack_1cc = local_30;
                    /* WARNING: Subroutine does not return */
    pcStack_1d0 = &UNK_00785fe5;
    FUN_00aae91b();
  }
  pppppuStack_1cc = (undefined *****)0xb;
  pcStack_1d0 = "unit_type_3";
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1d4 = (undefined *****)0x786004;
  FUN_00409350();
  local_8 = 0x23;
  pppppuStack_1cc = (undefined *****)&local_30;
  pcStack_1d0 = (char *)0x786018;
  piVar8 = (int *)(**(code **)(*param_3 + 0x44))();
  pcStack_1d0 = (char *)0x3;
  pppppuStack_1d4 = (undefined *****)0x786023;
  (**(code **)(*piVar8 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < (uint)local_1c) {
    pppppuStack_1d4 = local_30;
                    /* WARNING: Subroutine does not return */
    pppppuStack_1d8 = (undefined *****)&UNK_00786038;
    FUN_00aae91b();
  }
  pppppuStack_1d4 = (undefined *****)0x11;
  pppppuStack_1d8 = (undefined *****)0xe15b7c;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  pppppuStack_1dc = (undefined *****)0x786057;
  FUN_00409350();
  local_38 = (undefined1 *)&pppppuStack_1d4;
  pppppuStack_1dc = (undefined *****)&pppppuStack_1d4;
  local_8 = 0x24;
  pppppuStack_1d8 = (undefined *****)0x1;
  FUN_005dbfb0(local_14);
  pppppuStack_1d8 = (undefined *****)local_80;
  pppppuStack_1dc = (undefined *****)0x786079;
  pppppuVar9 = (undefined *****)FUN_005c0800();
  local_8 = CONCAT31(local_8._1_3_,0x25);
  pppppuStack_1d4 = (undefined *****)&local_30;
  pppppuStack_1d8 = (undefined *****)0x78608f;
  local_40 = (undefined *****)(**(code **)(*param_3 + 0x3c))();
  pppppuStack_1d8 = (undefined *****)0xffffffff;
  pppppuStack_1dc = (undefined *****)0x0;
  FUN_00408ed0(pppppuVar9);
  pppppuStack_1d8 = (undefined *****)0x0;
  pppppuStack_1dc = pppppuVar9;
  FUN_00a5ecc0();
  if (0xf < local_6c) {
    pppppuStack_1d8 = local_80[0];
                    /* WARNING: Subroutine does not return */
    pppppuStack_1dc = (undefined *****)&UNK_007860c0;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
  if (0xf < (uint)local_1c) {
    pppppuStack_1d8 = local_30;
                    /* WARNING: Subroutine does not return */
    pppppuStack_1dc = (undefined *****)&UNK_007860e6;
    FUN_00aae91b();
  }
  pppppuStack_1d8 = (undefined *****)0x11;
  pppppuStack_1dc = (undefined *****)0xe15b90;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  FUN_00409350();
  local_38 = (undefined1 *)&pppppuStack_1d8;
  local_8 = 0x26;
  pppppuStack_1dc = (undefined *****)0x0;
  FUN_005dbfb0(local_14,&pppppuStack_1d8);
  pppppuStack_1dc = (undefined *****)local_80;
  uVar7 = FUN_005c0800();
  local_8 = CONCAT31(local_8._1_3_,0x27);
  pppppuStack_1d8 = (undefined *****)&local_30;
  pppppuStack_1dc = (undefined *****)0x78613c;
  local_40 = (undefined *****)(**(code **)(*param_3 + 0x3c))();
  pppppuStack_1dc = (undefined *****)0xffffffff;
  FUN_00408ed0(uVar7,0);
  pppppuStack_1dc = (undefined *****)0x0;
  FUN_00a5ecc0(uVar7);
  if (0xf < local_6c) {
    pppppuStack_1dc = local_80[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
  if (0xf < (uint)local_1c) {
    pppppuStack_1dc = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pppppuStack_1dc = (undefined *****)0x11;
  local_1c = 2.10195e-44;
  local_20 = 0.0;
  local_30 = (undefined *****)((uint)local_30 & 0xffffff00);
  FUN_00409350("unit_type_3_value");
  pppppuStack_1dc = (undefined *****)0x3;
  local_8 = 0x28;
  local_40 = (undefined *****)FUN_005dbfb0(local_14,&local_38);
  local_bc = (undefined1 *)&pppppuStack_1dc;
  piVar8 = (int *)FUN_005dbfb0(local_14,&local_64,2);
  pppppuStack_1dc = (undefined *****)(*piVar8 + (int)*local_40);
  uVar7 = FUN_005c0800(local_80);
  local_8 = CONCAT31(local_8._1_3_,0x29);
  pppppuStack_1dc = (undefined *****)&local_30;
  (**(code **)(*param_3 + 0x3c))();
  FUN_00408ed0(uVar7,0,0xffffffff);
  FUN_00a5ecc0(uVar7,0);
  if (local_6c < 0x10) {
    local_8 = 0xffffffff;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
    if (0xf < (uint)local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
    local_34 = (undefined1 *)0x0;
    do {
      local_8 = 0xffffffff;
      local_38 = local_34 + 1;
      iVar5 = ((uint)(((uint)local_34 & 1) == 0) * 2 + -1) * ((int)local_38 / 2);
      iVar11 = iVar5 + 0x10;
      local_64 = (undefined *****)(iVar5 + 0xf);
      local_bc = (undefined1 *)iVar11;
      uVar7 = FUN_009888f0(local_dc);
      local_8 = 0x2a;
      uVar7 = FUN_00988fa0(uVar7);
      local_8 = CONCAT31(local_8._1_3_,0x2b);
      piVar8 = (int *)(**(code **)(*param_3 + 0x30))(uVar7);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_8 = 0xffffffff;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_dc[0]);
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = (undefined *****)((uint)local_dc[0] & 0xffffff00);
      if (((iVar11 < 0) || (0x1e < iVar11)) ||
         (local_14 = *(undefined ******)(param_2 + 0x6c + iVar11 * 4),
         local_14 == (undefined *****)0x0)) {
        iVar5 = FUN_0059c520(*(undefined4 *)(param_1 + 0x14));
        local_2c = 0x18d;
        local_30 = (undefined *****)CColor::vftable;
        local_18 = 0;
        if ((int)local_34 < iVar5) {
          local_28 = DAT_00f092fc;
          local_24 = DAT_00f092fc;
          local_20 = DAT_00f092fc;
          local_1c = DAT_00f17a20;
          (**(code **)(*(int *)piVar8[0x25] + 0x110))(&local_30);
          FUN_004471e0("regiment.0.0");
          local_8 = 0x33;
          pcVar10 = *(code **)(*piVar8 + 0x78);
        }
        else {
          local_28 = 0.0;
          local_24 = 0.0;
          local_20 = 0.0;
          local_1c = 0.0;
          (**(code **)(*(int *)piVar8[0x25] + 0x110))(&local_30,1);
          FUN_004471e0("regiment.0.0");
          local_8 = 0x34;
          pcVar10 = *(code **)(*piVar8 + 0x78);
        }
        (*pcVar10)(local_f8);
        ppppuVar1 = local_f8[0];
        fVar3 = local_e4;
      }
      else {
        local_44 = local_14[0x1d][0x30];
        FUN_004fb5c0();
        local_1c = ((float)(int)local_14[0xf] / 1000.0) * 0.6 + 0.4;
        if (((local_28 <= 0.999) || (local_24 <= 0.999)) ||
           ((local_20 <= 0.999 || (local_18 = 1, local_1c <= 0.999)))) {
          local_18 = 0;
        }
        (**(code **)(*(int *)piVar8[0x25] + 0x110))(&local_30,1);
        iVar5 = (int)local_14[0xe][0xd] + 1;
        if (iVar5 == 3) {
          iVar5 = 2;
        }
        (**(code **)(*piVar8 + 0x48))(iVar5);
        local_40 = (undefined *****)FUN_009888f0(local_14c);
        local_8 = 0x2c;
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8140,1);
        local_8._0_1_ = 0x2d;
        uVar7 = FUN_009888f0(local_f8);
        local_8._0_1_ = 0x2e;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
        FUN_00409350("regiment.",9);
        local_8._0_1_ = 0x2f;
        FUN_00988f20(uVar7);
        local_8._0_1_ = 0x30;
        FUN_00988f20(local_b8);
        local_8._0_1_ = 0x31;
        uVar7 = FUN_00988f20(local_40);
        local_8 = CONCAT31(local_8._1_3_,0x32);
        (**(code **)(*piVar8 + 0x78))(uVar7);
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_114);
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114 = local_114 & 0xffffff00;
        if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_130[0]);
        }
        local_11c = 0xf;
        local_120 = 0;
        local_130[0] = local_130[0] & 0xffffff00;
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_9c[0]);
        }
        local_88 = 0xf;
        local_8c = 0;
        local_9c[0] = local_9c[0] & 0xffffff00;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[0]);
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
        if (0xf < (uint)local_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_f8[0]);
        }
        local_e4 = 2.10195e-44;
        local_e8 = 0;
        local_f8[0] = (undefined ****)((uint)local_f8[0] & 0xffffff00);
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b8[0]);
        }
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        ppppuVar1 = local_14c[0];
        fVar3 = local_138;
      }
      if (0xf < (uint)fVar3) {
        local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppppuVar1);
      }
      local_8 = 0xffffffff;
      uVar7 = FUN_009888f0(local_80);
      local_8 = 0x35;
      uVar7 = FUN_00988fa0(uVar7);
      local_8 = CONCAT31(local_8._1_3_,0x36);
      piVar8 = (int *)(**(code **)(*param_3 + 0x30))(uVar7);
      if (0xf < (uint)local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f8[0]);
      }
      local_8 = 0xffffffff;
      local_e4 = 2.10195e-44;
      local_e8 = 0;
      local_f8[0] = (undefined ****)((uint)local_f8[0] & 0xffffff00);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = (undefined *****)((uint)local_80[0] & 0xffffff00);
      if ((((int)local_bc < 0) || (0x1e < (int)local_bc)) ||
         (local_14 = *(undefined ******)(param_2 + 0xec + (int)local_bc * 4),
         local_14 == (undefined *****)0x0)) {
        iVar5 = FUN_0059c520(*(undefined4 *)(param_1 + 0x14));
        local_2c = 0x18d;
        local_30 = (undefined *****)CColor::vftable;
        local_18 = 0;
        if ((int)local_34 < iVar5) {
          local_28 = DAT_00f092fc;
          local_24 = DAT_00f092fc;
          local_20 = DAT_00f092fc;
          local_1c = DAT_00f17a20;
          (**(code **)(*(int *)piVar8[0x25] + 0x110))(&local_30);
          FUN_009885d0();
          local_8 = 0x3e;
          pcVar10 = *(code **)(*piVar8 + 0x78);
        }
        else {
          local_28 = 0.0;
          local_24 = 0.0;
          local_20 = 0.0;
          local_1c = 0.0;
          (**(code **)(*(int *)piVar8[0x25] + 0x110))(&local_30,1);
          FUN_009885d0();
          local_8 = 0x3f;
          pcVar10 = *(code **)(*piVar8 + 0x78);
        }
        (*pcVar10)(&local_30);
        pppppuVar9 = local_30;
        fVar3 = local_1c;
      }
      else {
        local_c0 = local_14[0x1d][0x30];
        FUN_004fb5c0();
        local_1c = ((float)(int)local_14[0xf] / 1000.0) * 0.6 + 0.4;
        if ((((local_28 <= 0.999) || (local_24 <= 0.999)) || (local_20 <= 0.999)) ||
           (local_18 = 1, local_1c <= 0.999)) {
          local_18 = 0;
        }
        (**(code **)(*(int *)piVar8[0x25] + 0x110))(&local_30,1);
        (**(code **)(*piVar8 + 0x48))((int)local_14[0xe][0xd] + 1);
        local_bc = (undefined1 *)FUN_009888f0(local_14c);
        local_8 = 0x37;
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8140,1);
        local_8._0_1_ = 0x38;
        uVar7 = FUN_009888f0(local_9c);
        local_8._0_1_ = 0x39;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
        FUN_00409350("regiment.",9);
        local_8._0_1_ = 0x3a;
        FUN_00988f20(uVar7);
        local_8._0_1_ = 0x3b;
        FUN_00988f20(local_b8);
        local_8._0_1_ = 0x3c;
        uVar7 = FUN_00988f20(local_bc);
        local_8 = CONCAT31(local_8._1_3_,0x3d);
        (**(code **)(*piVar8 + 0x78))(uVar7);
        if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_dc[0]);
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc[0] = (undefined *****)((uint)local_dc[0] & 0xffffff00);
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_114);
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114 = local_114 & 0xffffff00;
        if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_130[0]);
        }
        local_11c = 0xf;
        local_120 = 0;
        local_130[0] = local_130[0] & 0xffffff00;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[0]);
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (undefined *****)((uint)local_60[0] & 0xffffff00);
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_9c[0]);
        }
        local_88 = 0xf;
        local_8c = 0;
        local_9c[0] = local_9c[0] & 0xffffff00;
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b8[0]);
        }
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        pppppuVar9 = (undefined *****)local_14c[0];
        fVar3 = local_138;
      }
      if (0xf < (uint)fVar3) {
        local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppppuVar9);
      }
      local_34 = local_38;
      if (0x1d < (int)local_38) {
        ExceptionList = local_10;
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_80[0]);
}

