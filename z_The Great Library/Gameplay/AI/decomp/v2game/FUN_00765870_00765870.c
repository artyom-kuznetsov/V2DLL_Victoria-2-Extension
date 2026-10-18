// FUN_00765870 @ 00765870 body=[[00765870, 00765aa5] [00765aa9, 00765ba7] [00765bab, 00765be6] [00765bea, 00765c0a] [00765c0e, 00765c39] [00765c3d, 00765ca4] [00765ca8, 00765ebb] [00765ebf, 00765ef3] [00765ef7, 00765f21] [00765f25, 00765f7b] [00765f7f, 007660f2] [007660f6, 0076612a] [0076612e, 00766158] [0076615c, 0076621a] [0076621e, 00766316] [0076631a, 00766355] [00766359, 0076637f] [00766383, 007663b7] [007663bb, 00766425] [0076642e, 007664ce] [007664d2, 007665ca] [007665ce, 00766609] [0076660d, 00766633] [00766637, 0076666b] [0076666f, 007666eb] [007666ef, 0076673b]]


void FUN_00765870(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint unaff_ESI;
  undefined1 auStack_1e8 [100];
  undefined *puStack_184;
  uint uStack_180;
  undefined8 uStack_17c;
  undefined1 **ppuStack_174;
  uint *puStack_170;
  char *pcStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint uStack_148;
  undefined4 *puStack_144;
  undefined1 *puStack_134;
  uint uStack_130;
  undefined4 local_12c;
  int iStack_128;
  uint uStack_124;
  undefined4 auStack_120 [2];
  int iStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint auStack_e8 [2];
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d0;
  uint auStack_cc [4];
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a4;
  void *pvStack_8c;
  undefined4 uStack_80;
  void *pvStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b6d1fc;
  pvStack_4c = ExceptionList;
  local_12c = 0;
  puStack_144 = (undefined4 *)0x7658ae;
  ExceptionList = &pvStack_4c;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x368) + 0x18) + 0x38))();
  puStack_144 = (undefined4 *)0x7658bf;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x370) + 0x18) + 0x34))();
  puStack_144 = (undefined4 *)0x0;
  uStack_148 = 0x7658ca;
  (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  uStack_148 = 0x260;
  uStack_150 = CONCAT44(0x7658d4,(int)uStack_150);
  iVar2 = FUN_00aae9af();
  puStack_48 = (undefined1 *)0x0;
  if (iVar2 == 0) {
    uStack_a4 = 0;
  }
  else {
    puStack_134 = auStack_1e8;
    FUN_00648af0(auStack_1e8);
    uStack_a4 = FUN_009ae5f0(iVar2);
  }
  uVar3 = uStack_a4;
  puStack_48 = (undefined1 *)0xffffffff;
  uStack_150 = CONCAT44(0x76593b,(int)uStack_150);
  uStack_148 = uStack_a4;
  (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  uStack_150 = CONCAT44(0x765948,(int)uStack_150);
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x100))();
  *(undefined4 *)(uVar3 + 0x1c4) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(uVar3 + 0x1c8) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(uVar3 + 0x1cc) = *(undefined4 *)(iVar2 + 0x2c);
  uStack_150 = 0xffffffff00000000;
  *(undefined4 *)(uVar3 + 0x1d0) = *(undefined4 *)(iVar2 + 0x30);
  uStack_158 = CONCAT44(iVar2 + 0x34,0x76597e);
  FUN_00408ed0();
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0x40140000;
  uStack_158 = CONCAT44(0x765998,(uint)uStack_158);
  uVar3 = (**(code **)(**(int **)(uVar3 + 0x38) + 0x24))();
  uStack_158 = 0x28007659a3;
  puVar4 = (undefined4 *)FUN_00aae9af();
  uStack_54 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puStack_144 = (undefined4 *)0x0;
  }
  else {
    uStack_158 = 0x1300e14648;
    uStack_b8 = 0xf;
    uStack_bc = 0;
    auStack_cc[0] = auStack_cc[0] & 0xffffff00;
    uStack_160 = CONCAT44(0x7659eb,(int)uStack_160);
    FUN_00409350();
    uStack_54 = CONCAT31(uStack_54._1_3_,2);
    unaff_ESI = 1;
    uStack_158 = CONCAT44(0x765a05,(uint)uStack_158);
    puStack_144 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    uStack_158 = CONCAT44(0x765a13,(uint)uStack_158);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x34))();
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(puVar4 + 5) = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    puVar4[7] = &PTR_FUN_00e39158;
    uStack_54 = 6;
    *puVar4 = &PTR_FUN_00e392f0;
    puVar4[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(puVar4 + 9) = 0;
    uStack_158 = CONCAT44(puStack_144,auStack_cc);
    uStack_160 = CONCAT44(0x765a6b,(int)uStack_160);
    uVar6 = (**(code **)(*piVar5 + 0x2c))();
    puVar4[8] = uVar6;
    puStack_144 = puVar4;
  }
  uStack_54 = 0xffffffff;
  if ((unaff_ESI & 1) != 0) {
    if (0xf < uStack_b8) {
      uStack_158 = CONCAT44(auStack_cc[0],&UNK_00765aa6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_b8 = 0xf;
    uStack_bc = 0;
    auStack_cc[0] = auStack_cc[0] & 0xffffff00;
  }
  uStack_158 = 0xa00e0b11c;
  auStack_120[0] = 0xf;
  uStack_124 = 0;
  puStack_134 = (undefined1 *)((uint)puStack_134 & 0xffffff00);
  uStack_160 = CONCAT44(0x765ae6,(int)uStack_160);
  FUN_00409350();
  uStack_54 = 8;
  uStack_158 = 0x400dede68;
  uStack_f0 = 0xf;
  uStack_f4 = 0;
  uStack_104 = uStack_104 & 0xffffff00;
  uStack_160 = CONCAT44(0x765b0d,(int)uStack_160);
  FUN_00409350();
  uStack_54._0_1_ = 9;
  piVar5 = (int *)puStack_144[8];
  uStack_158 = CONCAT44(&puStack_134,&iStack_118);
  uStack_160 = CONCAT44(0x765b2b,(int)uStack_160);
  uVar6 = FUN_009a8ee0();
  uStack_54._0_1_ = 10;
  uStack_158 = CONCAT44(0x765b3c,(uint)uStack_158);
  iVar2 = FUN_00475500();
  uStack_160 = *(undefined8 *)(iVar2 + 0x6c);
  uStack_158 = *(undefined8 *)(iVar2 + 0x74);
  uStack_168 = CONCAT44(0x765b61,(undefined4)uStack_168);
  uVar7 = FUN_009a9880();
  uStack_54 = CONCAT31(uStack_54._1_3_,0xb);
  uStack_158._4_4_ = &uStack_104;
  uStack_158._0_4_ = 0x765b79;
  (**(code **)(*piVar5 + 0x3c))();
  uStack_158._0_4_ = 0xffffffff;
  uStack_160 = (ulonglong)uVar7;
  uStack_168 = CONCAT44(0x765b8a,(undefined4)uStack_168);
  FUN_00408ed0();
  uStack_158 = ZEXT48(uStack_158._4_4_) << 0x20;
  uStack_160 = CONCAT44(uVar7,0x765b97);
  FUN_00a5ecc0();
  if (0xf < uStack_d8) {
    uStack_158 = CONCAT44(uStack_158._4_4_,uStack_ec);
    uStack_160 = CONCAT44(&UNK_00765ba8,(int)uStack_160);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_d8 = 0xf;
  uStack_dc = 0;
  uStack_ec = uStack_ec & 0xffffff00;
  uStack_58 = CONCAT31(uStack_58._1_3_,0xc);
  uStack_158._0_4_ = 0x765bcc;
  FUN_009adb70();
  if (iStack_118 != 0) {
    uStack_158._0_4_ = 0x765bdd;
    FUN_009e6a80();
    uStack_158 = CONCAT44(uStack_158._4_4_,iStack_118);
    uStack_160 = CONCAT44(&UNK_00765be7,(int)uStack_160);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  if (0xf < uStack_f4) {
    uStack_158 = CONCAT44(uStack_158._4_4_,uStack_108);
    uStack_160 = CONCAT44(&UNK_00765c0b,(int)uStack_160);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_58 = 0xffffffff;
  uStack_f4 = 0xf;
  uStack_f8 = 0;
  uStack_108 = uStack_108 & 0xffffff00;
  if (0xf < uStack_124) {
    uStack_158 = CONCAT44(uStack_158._4_4_,uVar6);
    uStack_160 = CONCAT44(&UNK_00765c3a,(int)uStack_160);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_158._0_4_ = 9;
  uStack_124 = 0xf;
  iStack_128 = 0;
  uStack_160 = 0xe1466800765c59;
  FUN_00409350();
  uStack_58 = 0xd;
  uStack_158 = CONCAT44(uStack_158._4_4_,&stack0xfffffec8);
  uStack_160 = CONCAT44(0x765c79,(int)uStack_160);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x370) + 0x7c))();
  uStack_160 = CONCAT44(1,uStack_150._4_4_);
  uStack_168 = CONCAT44(0x765c89,(undefined4)uStack_168);
  (**(code **)(*piVar5 + 0x10))();
  uStack_64 = 0xffffffff;
  if (0xf < uStack_130) {
    uStack_168 = CONCAT44(puStack_144,&UNK_00765ca5);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((int)uStack_150 == 6) {
    if (*(int *)(auStack_cc[3] + 0x2c) != 0xe) {
      iVar2 = *(int *)(param_1 + 4);
      uStack_168 = CONCAT44(0x765cd7,(undefined4)uStack_168);
      (**(code **)(**(int **)(*(int *)(iVar2 + 0x74c) + 0xc) + 0x30))();
      iVar2 = *(int *)(iVar2 + 0x1b4);
      if (*(int *)(iVar2 + 0x20) != 0) {
        uStack_168 = CONCAT44(0x765cf0,(undefined4)uStack_168);
        (**(code **)(*(int *)(*(int *)(iVar2 + 0x20) + 0x18) + 0x38))();
      }
      uStack_168 = CONCAT44(0x765cfd,(undefined4)uStack_168);
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x44))();
      uStack_168._0_4_ = 0x765d07;
      uStack_168._4_4_ = (uint *)(param_1 + 8);
      (**(code **)(*piVar5 + 4))();
      uVar7 = auStack_cc[2];
      uStack_168 = ZEXT48(uStack_168._4_4_) << 0x20;
      pcStack_16c = (char *)0x0;
      puStack_170 = (uint *)0x765d1a;
      cVar1 = (**(code **)(**(int **)(auStack_cc[2] + 0x38) + 8))();
      if (cVar1 == '\0') {
        if (*(int *)(uVar7 + 0x2c) == 9) goto LAB_00765d56;
        puStack_170 = (uint *)0x28;
        ppuStack_174 = (undefined1 **)0x765f94;
        iVar2 = FUN_00aae9af();
        uStack_70 = 0x16;
        if (iVar2 == 0) {
          uStack_160 = 0;
        }
        else {
          puStack_170 = (uint *)0x765fbb;
          uStack_160._4_4_ = (undefined8 *)iVar2;
          FUN_009885d0();
          uStack_70 = CONCAT31(uStack_70._1_3_,0x17);
          piVar5 = *(int **)(param_1 + 4);
          uStack_158 = uStack_158 | 4;
          puStack_170 = auStack_e8;
          ppuStack_174 = (undefined1 **)0x765fdc;
          uVar6 = (**(code **)(*piVar5 + 0x3c))();
          uStack_158 = CONCAT44(uVar6,(uint)uStack_158);
          ppuStack_174 = (undefined1 **)0x765fe9;
          (**(code **)(*piVar5 + 0x34))();
          ppuStack_174 = (undefined1 **)uStack_160._4_4_;
          uStack_17c = CONCAT44(0x765ff9,(undefined4)uStack_17c);
          uVar6 = FUN_009b1df0();
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
        }
        uStack_70 = 0xffffffff;
        if ((uStack_158 & 4) != 0) {
          puStack_170 = (uint *)0x766021;
          FUN_00408ad0();
        }
        puStack_170 = (uint *)0x76602f;
        FUN_009885d0();
        uStack_70 = 0x19;
        puStack_170 = (uint *)0x766048;
        FUN_009885d0();
        uStack_70._0_1_ = 0x1a;
        puStack_170 = auStack_120;
        ppuStack_174 = &puStack_134;
        uStack_158 = CONCAT44(*(undefined4 *)((int)uStack_160 + 0x20),(uint)uStack_158);
        uStack_17c = CONCAT44(0x76606a,(undefined4)uStack_17c);
        uVar6 = FUN_009a8ee0();
        uStack_70._0_1_ = 0x1b;
        puStack_170 = (uint *)0x76607b;
        uStack_160._4_4_ = (undefined8 *)uVar6;
        iVar2 = FUN_00475500();
        uStack_17c = *(undefined8 *)(iVar2 + 0x6c);
        ppuStack_174 = (undefined1 **)*(undefined8 *)(iVar2 + 0x74);
        puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar2 + 0x74) >> 0x20);
        uStack_180 = 0x7660a0;
        uVar7 = FUN_009a9880();
        uStack_70 = CONCAT31(uStack_70._1_3_,0x1c);
        puStack_170 = (uint *)&uStack_150;
        ppuStack_174 = (undefined1 **)0x7660ba;
        uVar6 = (**(code **)(*uStack_158._4_4_ + 0x3c))();
        ppuStack_174 = (undefined1 **)0xffffffff;
        uStack_17c = (ulonglong)uVar7;
        uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
        uStack_180 = 0x7660cd;
        FUN_00408ed0();
        ppuStack_174 = (undefined1 **)0x0;
        uStack_17c = CONCAT44(uVar7,0x7660de);
        FUN_00a5ecc0();
        if (0xf < uStack_f4) {
          ppuStack_174 = (undefined1 **)uStack_108;
          uStack_17c = CONCAT44(&UNK_007660f3,(undefined4)uStack_17c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppuStack_174 = (undefined1 **)&stack0xfffffec8;
        uStack_f4 = 0xf;
        uStack_f8 = 0;
        uStack_108 = uStack_108 & 0xffffff00;
        uStack_74 = CONCAT31(uStack_74._1_3_,0x1a);
        uStack_17c = CONCAT44(0x76611b,(undefined4)uStack_17c);
        FUN_009a9740();
        if (0xf < uVar3) {
          ppuStack_174 = (undefined1 **)uStack_158._4_4_;
          uStack_17c = CONCAT44(&UNK_0076612b,(undefined4)uStack_17c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_74 = 0xffffffff;
        puStack_144 = (undefined4 *)0x0;
        uStack_158._0_5_ = (uint5)(uint)uStack_158;
        if (0xf < uStack_110) {
          ppuStack_174 = (undefined1 **)uStack_124;
          uStack_17c = CONCAT44(&UNK_00766159,(undefined4)uStack_17c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppuStack_174 = (undefined1 **)0x76616a;
        FUN_009885d0();
        uStack_74 = 0x1d;
      }
      else {
        if (*(int *)(uVar7 + 0x2c) != 9) {
          puStack_170 = (uint *)0x765d2e;
          (**(code **)(**(int **)(param_1 + 4) + 0x44))();
          puStack_170 = (uint *)0x765d35;
          FUN_009b07a0();
          ExceptionList = pvStack_78;
          return;
        }
LAB_00765d56:
        puStack_170 = (uint *)0x28;
        ppuStack_174 = (undefined1 **)0x765d5d;
        iVar2 = FUN_00aae9af();
        uStack_70 = 0xe;
        if (iVar2 == 0) {
          uStack_160 = 0;
        }
        else {
          puStack_170 = (uint *)0x765d84;
          uStack_160._4_4_ = (undefined8 *)iVar2;
          FUN_009885d0();
          uStack_70 = CONCAT31(uStack_70._1_3_,0xf);
          piVar5 = *(int **)(param_1 + 4);
          uStack_158 = uStack_158 | 2;
          puStack_170 = auStack_e8;
          ppuStack_174 = (undefined1 **)0x765da5;
          uVar6 = (**(code **)(*piVar5 + 0x3c))();
          uStack_158 = CONCAT44(uVar6,(uint)uStack_158);
          ppuStack_174 = (undefined1 **)0x765db2;
          (**(code **)(*piVar5 + 0x34))();
          ppuStack_174 = (undefined1 **)uStack_160._4_4_;
          uStack_17c = CONCAT44(0x765dc2,(undefined4)uStack_17c);
          uVar6 = FUN_009b1df0();
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
        }
        uStack_70 = 0xffffffff;
        if ((uStack_158 & 2) != 0) {
          puStack_170 = (uint *)0x765dea;
          FUN_00408ad0();
        }
        puStack_170 = (uint *)0x765df8;
        FUN_009885d0();
        uStack_70 = 0x11;
        puStack_170 = (uint *)0x765e11;
        FUN_009885d0();
        uStack_70._0_1_ = 0x12;
        puStack_170 = auStack_120;
        ppuStack_174 = &puStack_134;
        uStack_158 = CONCAT44(*(undefined4 *)((int)uStack_160 + 0x20),(uint)uStack_158);
        uStack_17c = CONCAT44(0x765e33,(undefined4)uStack_17c);
        uVar6 = FUN_009a8ee0();
        uStack_70._0_1_ = 0x13;
        puStack_170 = (uint *)0x765e44;
        uStack_160._4_4_ = (undefined8 *)uVar6;
        iVar2 = FUN_00475500();
        uStack_17c = *(undefined8 *)(iVar2 + 0x6c);
        ppuStack_174 = (undefined1 **)*(undefined8 *)(iVar2 + 0x74);
        puStack_170 = (uint *)((ulonglong)*(undefined8 *)(iVar2 + 0x74) >> 0x20);
        uStack_180 = 0x765e69;
        uVar7 = FUN_009a9880();
        uStack_70 = CONCAT31(uStack_70._1_3_,0x14);
        puStack_170 = (uint *)&uStack_150;
        ppuStack_174 = (undefined1 **)0x765e83;
        uVar6 = (**(code **)(*uStack_158._4_4_ + 0x3c))();
        ppuStack_174 = (undefined1 **)0xffffffff;
        uStack_17c = (ulonglong)uVar7;
        uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
        uStack_180 = 0x765e96;
        FUN_00408ed0();
        ppuStack_174 = (undefined1 **)0x0;
        uStack_17c = CONCAT44(uVar7,0x765ea7);
        FUN_00a5ecc0();
        if (0xf < uStack_f4) {
          ppuStack_174 = (undefined1 **)uStack_108;
          uStack_17c = CONCAT44(&UNK_00765ebc,(undefined4)uStack_17c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppuStack_174 = (undefined1 **)&stack0xfffffec8;
        uStack_f4 = 0xf;
        uStack_f8 = 0;
        uStack_108 = uStack_108 & 0xffffff00;
        uStack_74 = CONCAT31(uStack_74._1_3_,0x12);
        uStack_17c = CONCAT44(0x765ee4,(undefined4)uStack_17c);
        FUN_009a9740();
        if (0xf < uVar3) {
          ppuStack_174 = (undefined1 **)uStack_158._4_4_;
          uStack_17c = CONCAT44(&UNK_00765ef4,(undefined4)uStack_17c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_74 = 0xffffffff;
        puStack_144 = (undefined4 *)0x0;
        uStack_158._0_5_ = (uint5)(uint)uStack_158;
        if (0xf < uStack_110) {
          ppuStack_174 = (undefined1 **)uStack_124;
          uStack_17c = CONCAT44(&UNK_00765f22,(undefined4)uStack_17c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppuStack_174 = (undefined1 **)0x765f33;
        FUN_009885d0();
        uStack_74 = 0x15;
      }
      ppuStack_174 = (undefined1 **)&uStack_108;
      uStack_17c = CONCAT44(0x765f50,(undefined4)uStack_17c);
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x370) + 0x7c))();
      uStack_17c = CONCAT44(1,(undefined4)uStack_168);
      uStack_180 = 0x765f60;
      (**(code **)(*piVar5 + 0x10))();
      uStack_80 = 0xffffffff;
      if (0xf < uStack_100) {
        uStack_180 = uStack_114;
                    /* WARNING: Subroutine does not return */
        puStack_184 = &UNK_00765f7c;
        FUN_00aae91b();
      }
      uStack_180 = param_1;
      puStack_184 = (undefined *)0x765f85;
      FUN_00766990();
      piVar5 = *(int **)(param_1 + 4);
      goto LAB_0076670d;
    }
    uStack_168 = 0x2800766181;
    iVar2 = FUN_00aae9af();
    uStack_150 = CONCAT44(uStack_150._4_4_,iVar2);
    uStack_64 = 0x1e;
    if (iVar2 == 0) {
      uStack_158 = uStack_158 & 0xffffffff;
    }
    else {
      uStack_168 = 0x1300e14648;
      uStack_100 = 0xf;
      uStack_104 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
      pcStack_16c = (char *)0x7661b3;
      FUN_00409350();
      uStack_64 = CONCAT31(uStack_64._1_3_,0x1f);
      piVar5 = *(int **)(param_1 + 4);
      uStack_150 = uStack_150 | 0x800000000;
      uStack_168._4_4_ = &uStack_114;
      uStack_168._0_4_ = 0x7661d1;
      uStack_148 = (**(code **)(*piVar5 + 0x3c))();
      uStack_168._0_4_ = 0x7661de;
      (**(code **)(*piVar5 + 0x34))();
      uStack_168 = CONCAT44(uStack_168._4_4_,(int)uStack_150);
      pcStack_16c = (char *)0x7661ee;
      uVar6 = FUN_009b1df0();
      uStack_158 = CONCAT44(uVar6,(uint)uStack_158);
    }
    uStack_64 = 0xffffffff;
    if ((uStack_150 & 0x800000000) != 0) {
      if (0xf < uStack_100) {
        uStack_168 = CONCAT44(uStack_114,&UNK_0076621b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_100 = 0xf;
      uStack_104 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
    }
    uStack_168 = 0xb00e14688;
    uStack_130 = 0xf;
    puStack_134 = (undefined1 *)0x0;
    puStack_144 = (undefined4 *)((uint)puStack_144 & 0xffffff00);
    pcStack_16c = (char *)0x766246;
    FUN_00409350();
    uStack_64 = 0x21;
    uStack_168 = 0x400dede68;
    auStack_cc[1] = 0xf;
    auStack_cc[0] = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    pcStack_16c = (char *)0x766279;
    FUN_00409350();
    uStack_64._0_1_ = 0x22;
    piVar5 = *(int **)((int)uStack_158._4_4_ + 0x20);
    uStack_168 = CONCAT44(&puStack_144,&iStack_128);
    pcStack_16c = (char *)0x766297;
    iVar2 = FUN_009a8ee0();
    uStack_64._0_1_ = 0x23;
    uStack_168 = CONCAT44(0x7662a8,(undefined4)uStack_168);
    uStack_150._0_4_ = iVar2;
    iVar2 = FUN_00475500();
    puStack_170 = (uint *)*(undefined8 *)(iVar2 + 0x6c);
    pcStack_16c = (char *)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    uStack_168 = *(undefined8 *)(iVar2 + 0x74);
    ppuStack_174 = (undefined1 **)0x7662cd;
    uVar6 = FUN_009a9880();
    uStack_64 = CONCAT31(uStack_64._1_3_,0x24);
    uStack_168._4_4_ = &uStack_dc;
    uStack_168._0_4_ = 0x7662e8;
    (**(code **)(*piVar5 + 0x3c))();
    uStack_168._0_4_ = 0xffffffff;
    pcStack_16c = (char *)0x0;
    ppuStack_174 = (undefined1 **)0x7662f9;
    puStack_170 = (uint *)uVar6;
    FUN_00408ed0();
    uStack_168 = ZEXT48(uStack_168._4_4_) << 0x20;
    puStack_170 = (uint *)0x766306;
    pcStack_16c = (char *)uVar6;
    FUN_00a5ecc0();
    if (0xf < auStack_e8[0]) {
      uStack_168 = CONCAT44(uStack_168._4_4_,uStack_fc);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_00766317;
      FUN_00aae91b();
    }
    auStack_e8[0] = 0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    uStack_68 = CONCAT31(uStack_68._1_3_,0x25);
    uStack_168._0_4_ = 0x76633b;
    FUN_009adb70();
    if (iStack_128 != 0) {
      uStack_168._0_4_ = 0x76634c;
      FUN_009e6a80();
      uStack_168 = CONCAT44(uStack_168._4_4_,iStack_128);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_00766356;
      FUN_00aae91b();
    }
    iStack_128 = 0;
    uStack_124 = 0;
    auStack_120[0] = 0;
    if (0xf < auStack_cc[0]) {
      uStack_168 = CONCAT44(uStack_168._4_4_,uStack_e0);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_00766380;
      FUN_00aae91b();
    }
    uStack_68 = 0xffffffff;
    auStack_cc[0] = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    if ((undefined1 *)0xf < puStack_134) {
      uStack_168 = CONCAT44(uStack_168._4_4_,uStack_148);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_007663b8;
      FUN_00aae91b();
    }
    uStack_168._0_4_ = 9;
    pcStack_16c = "info_list";
    puStack_134 = (undefined1 *)0xf;
    uStack_148 = uStack_148 & 0xffffff00;
    puStack_170 = (uint *)0x7663d7;
    FUN_00409350();
    uStack_68 = 0x26;
    uStack_168 = CONCAT44(uStack_168._4_4_,&uStack_148);
    pcStack_16c = (char *)0x7663f7;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x370) + 0x7c))();
    pcStack_16c = (char *)0x1;
    puStack_170 = (uint *)uStack_160._4_4_;
    ppuStack_174 = (undefined1 **)0x766407;
    (**(code **)(*piVar5 + 0x10))();
    uStack_80 = 0xffffffff;
    if (0xf < uStack_150._4_4_) {
      uStack_180 = (int)uStack_160;
                    /* WARNING: Subroutine does not return */
      puStack_184 = &UNK_00766426;
      FUN_00aae91b();
    }
  }
  else {
    uStack_168 = 0x2800766435;
    iVar2 = FUN_00aae9af();
    uStack_150 = CONCAT44(uStack_150._4_4_,iVar2);
    uStack_64 = 0x27;
    if (iVar2 == 0) {
      uStack_158 = uStack_158 & 0xffffffff;
    }
    else {
      uStack_168 = 0x1300e14648;
      uStack_100 = 0xf;
      uStack_104 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
      pcStack_16c = (char *)0x766467;
      FUN_00409350();
      uStack_64 = CONCAT31(uStack_64._1_3_,0x28);
      piVar5 = *(int **)(param_1 + 4);
      uStack_150 = uStack_150 | 0x1000000000;
      uStack_168._4_4_ = &uStack_114;
      uStack_168._0_4_ = 0x766485;
      uStack_148 = (**(code **)(*piVar5 + 0x3c))();
      uStack_168._0_4_ = 0x766492;
      (**(code **)(*piVar5 + 0x34))();
      uStack_168 = CONCAT44(uStack_168._4_4_,(int)uStack_150);
      pcStack_16c = (char *)0x7664a2;
      uVar6 = FUN_009b1df0();
      uStack_158 = CONCAT44(uVar6,(uint)uStack_158);
    }
    uStack_64 = 0xffffffff;
    if ((uStack_150 & 0x1000000000) != 0) {
      if (0xf < uStack_100) {
        uStack_168 = CONCAT44(uStack_114,&UNK_007664cf);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_100 = 0xf;
      uStack_104 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
    }
    uStack_168 = 0xe00e14694;
    uStack_130 = 0xf;
    puStack_134 = (undefined1 *)0x0;
    puStack_144 = (undefined4 *)((uint)puStack_144 & 0xffffff00);
    pcStack_16c = (char *)0x7664fa;
    FUN_00409350();
    uStack_64 = 0x2a;
    uStack_168 = 0x400dede68;
    auStack_cc[1] = 0xf;
    auStack_cc[0] = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    pcStack_16c = (char *)0x76652d;
    FUN_00409350();
    uStack_64._0_1_ = 0x2b;
    piVar5 = *(int **)((int)uStack_158._4_4_ + 0x20);
    uStack_168 = CONCAT44(&puStack_144,&iStack_128);
    pcStack_16c = (char *)0x76654b;
    iVar2 = FUN_009a8ee0();
    uStack_64._0_1_ = 0x2c;
    uStack_168 = CONCAT44(0x76655c,(undefined4)uStack_168);
    uStack_150._0_4_ = iVar2;
    iVar2 = FUN_00475500();
    puStack_170 = (uint *)*(undefined8 *)(iVar2 + 0x6c);
    pcStack_16c = (char *)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    uStack_168 = *(undefined8 *)(iVar2 + 0x74);
    ppuStack_174 = (undefined1 **)0x766581;
    uVar6 = FUN_009a9880();
    uStack_64 = CONCAT31(uStack_64._1_3_,0x2d);
    uStack_168._4_4_ = &uStack_dc;
    uStack_168._0_4_ = 0x76659c;
    (**(code **)(*piVar5 + 0x3c))();
    uStack_168._0_4_ = 0xffffffff;
    pcStack_16c = (char *)0x0;
    ppuStack_174 = (undefined1 **)0x7665ad;
    puStack_170 = (uint *)uVar6;
    FUN_00408ed0();
    uStack_168 = ZEXT48(uStack_168._4_4_) << 0x20;
    puStack_170 = (uint *)0x7665ba;
    pcStack_16c = (char *)uVar6;
    FUN_00a5ecc0();
    if (0xf < auStack_e8[0]) {
      uStack_168 = CONCAT44(uStack_168._4_4_,uStack_fc);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_007665cb;
      FUN_00aae91b();
    }
    auStack_e8[0] = 0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    uStack_68 = CONCAT31(uStack_68._1_3_,0x2e);
    uStack_168._0_4_ = 0x7665ef;
    FUN_009adb70();
    if (iStack_128 != 0) {
      uStack_168._0_4_ = 0x766600;
      FUN_009e6a80();
      uStack_168 = CONCAT44(uStack_168._4_4_,iStack_128);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_0076660a;
      FUN_00aae91b();
    }
    iStack_128 = 0;
    uStack_124 = 0;
    auStack_120[0] = 0;
    if (0xf < auStack_cc[0]) {
      uStack_168 = CONCAT44(uStack_168._4_4_,uStack_e0);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_00766634;
      FUN_00aae91b();
    }
    uStack_68 = 0xffffffff;
    auStack_cc[0] = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    if ((undefined1 *)0xf < puStack_134) {
      uStack_168 = CONCAT44(uStack_168._4_4_,uStack_148);
                    /* WARNING: Subroutine does not return */
      pcStack_16c = &UNK_0076666c;
      FUN_00aae91b();
    }
    uStack_168._0_4_ = 9;
    pcStack_16c = "info_list";
    uStack_ac = 0xf;
    uStack_b0 = 0;
    auStack_cc[3] = auStack_cc[3] & 0xffffff00;
    puStack_170 = (uint *)0x766697;
    FUN_00409350();
    uStack_68 = 0x2f;
    uStack_168 = CONCAT44(uStack_168._4_4_,auStack_cc + 3);
    pcStack_16c = (char *)0x7666ba;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x370) + 0x7c))();
    pcStack_16c = (char *)0x1;
    puStack_170 = (uint *)uStack_160._4_4_;
    ppuStack_174 = (undefined1 **)0x7666ca;
    (**(code **)(*piVar5 + 0x10))();
    uStack_80 = 0xffffffff;
    if (0xf < auStack_cc[2]) {
      uStack_180 = uStack_d8;
                    /* WARNING: Subroutine does not return */
      puStack_184 = &UNK_007666ec;
      FUN_00aae91b();
    }
    auStack_cc[2] = 0xf;
    auStack_cc[1] = 0;
    uStack_d8 = uStack_d8 & 0xffffff00;
  }
  uStack_80 = 0xffffffff;
  uStack_180 = param_1;
  puStack_184 = (undefined *)0x76670a;
  FUN_00766990();
  piVar5 = *(int **)(param_1 + 4);
LAB_0076670d:
  uStack_180 = 0x766717;
  iVar2 = (**(code **)(*piVar5 + 0x100))();
  uStack_180 = 0;
  puStack_184 = (undefined *)0x766725;
  (**(code **)(**(int **)(iVar2 + 0xe4) + 0x10))();
  ExceptionList = pvStack_8c;
  return;
}

