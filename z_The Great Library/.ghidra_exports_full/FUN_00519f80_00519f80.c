// FUN_00519f80 @ 00519f80 body=[[00519f80, 0051a12d] [0051a131, 0051a15b] [0051a15f, 0051a267] [0051a26b, 0051a295] [0051a299, 0051a39e] [0051a3a2, 0051a3ce] [0051a3d2, 0051a5ab] [0051a5af, 0051a5dd] [0051a5e6, 0051a721] [0051a725, 0051a74f] [0051a753, 0051aeea] [0051aeee, 0051af04]]


void FUN_00519f80(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_228 [76];
  undefined4 uStack_1dc;
  uint *puStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 *puStack_1b4;
  uint *puStack_1b0;
  uint *puStack_1ac;
  uint auStack_184 [4];
  undefined4 uStack_174;
  uint uStack_170;
  uint auStack_168 [4];
  undefined4 uStack_158;
  uint uStack_154;
  undefined1 auStack_14c [56];
  undefined1 auStack_114 [28];
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba731c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(param_1 + 0xc00) != 0) {
    puStack_1ac = (uint *)0x519fc6;
    ExceptionList = &pvStack_14;
    cVar4 = (**(code **)(**(int **)(param_1 + 0xc00) + 0x18))();
    if (cVar4 != '\0') {
      puStack_1ac = (uint *)(param_1 + 0xc04);
      puStack_1b0 = (uint *)0x519fe0;
      cVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc00) + 0x7c) + 0x18))();
      if (cVar4 == '\0') {
        puStack_1ac = (uint *)0x51a5ed;
        cVar4 = FUN_008b1c00();
        if (cVar4 == '\0') {
          ExceptionList = pvStack_14;
          return;
        }
        puStack_1ac = (uint *)0xffffffff;
        puStack_1b0 = (uint *)0x0;
        puStack_1b4 = (undefined1 *)(*(int *)(param_1 + 0xc00) + 8);
        uStack_1b8 = 0x51a60d;
        FUN_00408ed0();
        puStack_1ac = (uint *)param_1;
        puStack_1b0 = (uint *)0x51a613;
        puVar5 = (undefined4 *)FUN_005061e0();
        puStack_1ac = (uint *)0x7;
        puStack_1b0 = (uint *)0xdf27b4;
        uStack_170 = 0xf;
        uStack_174 = 0;
        auStack_184[0] = auStack_184[0] & 0xffffff00;
        puStack_1b4 = (undefined1 *)0x51a639;
        FUN_00409350();
        uStack_c = 0x19;
        puStack_1ac = (uint *)0x51a64f;
        puStack_1ac = (uint *)FUN_004f97a0();
        puStack_1b0 = auStack_184;
        puStack_1b4 = auStack_14c;
        uStack_c._0_1_ = 0x1a;
        uStack_1b8 = 0x51a667;
        iVar6 = FUN_00424aa0();
        uStack_c._0_1_ = 0x1b;
        iVar1 = puVar5[1];
        puStack_1ac = (uint *)0x44;
        puStack_1b0 = (uint *)0x51a681;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x1c;
        uVar3 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x1c;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar3;
        }
        else {
          puStack_1ac = (uint *)0xffffffff;
          puStack_1b0 = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_1b8 = 0x51a6b1;
          puStack_1b4 = (undefined1 *)iVar6;
          FUN_00408ed0();
          puStack_1ac = (uint *)0xffffffff;
          uStack_c._0_1_ = 0x1d;
          puStack_1b0 = (uint *)0x0;
          puStack_1b4 = (undefined1 *)(iVar6 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_1b8 = 0x51a6d8;
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar1;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar6 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar1 + 0x3c) = puVar7;
        }
        puStack_1ac = (uint *)0x51a70d;
        FUN_00a39a80();
        if (0xf < uStack_154) {
          puStack_1ac = (uint *)auStack_168[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a722;
          FUN_00aae91b();
        }
        uStack_c = 0xffffffff;
        uStack_154 = 0xf;
        uStack_158 = 0;
        auStack_168[0] = auStack_168[0] & 0xffffff00;
        if (0xf < uStack_170) {
          puStack_1ac = (uint *)auStack_184[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a750;
          FUN_00aae91b();
        }
        puStack_1ac = (uint *)0x7;
        puStack_1b0 = (uint *)0xdfe8f8;
        uStack_170 = 0xf;
        uStack_174 = 0;
        auStack_184[0] = auStack_184[0] & 0xffffff00;
        puStack_1b4 = (undefined1 *)0x51a773;
        FUN_00409350();
        uStack_c = 0x1e;
        puStack_1ac = (uint *)0x51a78b;
        puStack_1ac = (uint *)FUN_008b1c70();
        puStack_1b0 = auStack_184;
        puStack_1b4 = auStack_14c;
        uStack_c._0_1_ = 0x1f;
        uStack_1b8 = 0x51a7a3;
        iVar6 = FUN_00424aa0();
        uStack_c._0_1_ = 0x20;
        iVar1 = puVar5[1];
        puStack_1ac = (uint *)0x44;
        puStack_1b0 = (uint *)0x51a7bf;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x21;
        uVar3 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x21;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar3;
        }
        else {
          puStack_1ac = (uint *)0xffffffff;
          puStack_1b0 = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_1b8 = 0x51a7eb;
          puStack_1b4 = (undefined1 *)iVar6;
          FUN_00408ed0();
          puStack_1ac = (uint *)0xffffffff;
          uStack_c._0_1_ = 0x22;
          puStack_1b0 = (uint *)0x0;
          puStack_1b4 = (undefined1 *)(iVar6 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_1b8 = 0x51a80e;
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar1;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar6 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar1 + 0x3c) = puVar7;
        }
        puStack_1ac = (uint *)0x51a847;
        FUN_00a39a80();
        puStack_1ac = (uint *)0x51a850;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        puStack_1ac = (uint *)0x51a864;
        FUN_00408ad0();
        puStack_1ac = (uint *)0x51a872;
        FUN_009885d0();
        puStack_1ac = auStack_168;
        uStack_c = 0x23;
        puStack_1b0 = (uint *)0x51a88b;
        puStack_1ac = (uint *)FUN_008b2080();
        puStack_1b4 = auStack_14c;
        uStack_c._0_1_ = 0x24;
        uStack_1b8 = 0x51a8a1;
        puStack_1b0 = auStack_184;
        FUN_00424aa0();
        uStack_c._0_1_ = 0x25;
        iVar1 = puVar5[1];
        puStack_1ac = (uint *)0x44;
        puStack_1b0 = (uint *)0x51a8bd;
        pcVar10 = (char *)FUN_00aae9af();
        uStack_c = CONCAT31(uStack_c._1_3_,0x26);
        if (pcVar10 == (char *)0x0) {
          uVar9 = 0;
        }
        else {
          puStack_1b4 = (undefined1 *)0x51a8dd;
          puStack_1b0 = (uint *)pcVar10;
          puStack_1ac = (uint *)iVar1;
          uVar9 = FUN_0042b900();
        }
        iVar6 = puVar5[2];
        puVar5[1] = uVar9;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = uVar9;
        }
        else {
          *(undefined4 *)(iVar1 + 0x3c) = uVar9;
        }
        puStack_1ac = (uint *)0x51a905;
        FUN_00a39a80();
        puStack_1ac = (uint *)0x51a90e;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        puStack_1ac = (uint *)0x51a922;
        FUN_00408ad0();
        if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
          puStack_1ac = (uint *)0x51a948;
          FUN_009885d0();
          uStack_c = 0x27;
          puStack_1ac = (uint *)0x51a961;
          FUN_009885d0();
          uStack_c._0_1_ = 0x28;
          uVar16 = 0;
          uVar15 = 0x2d2d2d;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar14 = *(undefined4 *)(param_1 + 0x1c);
          uVar13 = 0;
          puVar12 = auStack_168;
          uVar11 = 0;
          FUN_006a4f40(puVar5,0,puVar12,0,uVar14,uVar9,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_228,uVar8,puVar5,uVar11,puVar12,uVar13,uVar14,uVar9,uVar15,uVar16);
          uStack_c._0_1_ = 0x29;
          uVar9 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x28);
          FUN_0042bb30(uVar9);
          puStack_1ac = (uint *)0x51aa01;
          FUN_00408ad0();
          uStack_c = 0xffffffff;
          puStack_1ac = (uint *)0x51aa15;
          FUN_00408ad0();
        }
      }
      else {
        puStack_1ac = (uint *)0xffffffff;
        puStack_1b0 = (uint *)0x0;
        puStack_1b4 = (undefined1 *)(*(int *)(param_1 + 0xc00) + 8);
        uStack_1b8 = 0x51a000;
        FUN_00408ed0();
        puStack_1ac = (uint *)0x0;
        puStack_1b0 = (uint *)(param_1 + 0xc04);
        puStack_1b4 = (undefined1 *)0x51a019;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc00) + 0x98) + 0x2c))();
        puStack_1ac = (uint *)param_1;
        puStack_1b0 = (uint *)0x51a01f;
        puVar5 = (undefined4 *)FUN_005061e0();
        puStack_1ac = (uint *)0x7;
        puStack_1b0 = (uint *)0xdf27b4;
        uStack_154 = 0xf;
        uStack_158 = 0;
        auStack_168[0] = auStack_168[0] & 0xffffff00;
        puStack_1b4 = (undefined1 *)0x51a045;
        FUN_00409350();
        uStack_c = 2;
        puStack_1ac = (uint *)0x51a05b;
        puStack_1ac = (uint *)FUN_004f97a0();
        puStack_1b0 = auStack_168;
        puStack_1b4 = auStack_14c;
        uStack_c._0_1_ = 3;
        uStack_1b8 = 0x51a073;
        iVar6 = FUN_00424aa0();
        uStack_c._0_1_ = 4;
        iVar1 = puVar5[1];
        puStack_1ac = (uint *)0x44;
        puStack_1b0 = (uint *)0x51a08d;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 5;
        uVar3 = (undefined1)uStack_c;
        uStack_c._0_1_ = 5;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar3;
        }
        else {
          puStack_1ac = (uint *)0xffffffff;
          puStack_1b0 = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_1b8 = 0x51a0bd;
          puStack_1b4 = (undefined1 *)iVar6;
          FUN_00408ed0();
          uStack_c._0_1_ = 6;
          puStack_1ac = (uint *)0xffffffff;
          puStack_1b0 = (uint *)0x0;
          puStack_1b4 = (undefined1 *)(iVar6 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_1b8 = 0x51a0e4;
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar1;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar6 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar1 + 0x3c) = puVar7;
        }
        puStack_1ac = (uint *)0x51a119;
        FUN_00a39a80();
        if (0xf < uStack_170) {
          puStack_1ac = (uint *)auStack_184[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a12e;
          FUN_00aae91b();
        }
        uStack_c = 0xffffffff;
        uStack_170 = 0xf;
        uStack_174 = 0;
        auStack_184[0] = auStack_184[0] & 0xffffff00;
        if (0xf < uStack_154) {
          puStack_1ac = (uint *)auStack_168[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a15c;
          FUN_00aae91b();
        }
        puStack_1ac = (uint *)0x7;
        puStack_1b0 = (uint *)0xdfe8f8;
        uStack_154 = 0xf;
        uStack_158 = 0;
        auStack_168[0] = auStack_168[0] & 0xffffff00;
        puStack_1b4 = (undefined1 *)0x51a17f;
        FUN_00409350();
        uStack_c = 7;
        puStack_1ac = (uint *)0x51a197;
        puStack_1ac = (uint *)FUN_008b1c70();
        puStack_1b0 = auStack_168;
        puStack_1b4 = auStack_14c;
        uStack_c._0_1_ = 8;
        uStack_1b8 = 0x51a1af;
        iVar6 = FUN_00424aa0();
        uStack_c._0_1_ = 9;
        iVar1 = puVar5[1];
        puStack_1ac = (uint *)0x44;
        puStack_1b0 = (uint *)0x51a1cb;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 10;
        uVar3 = (undefined1)uStack_c;
        uStack_c._0_1_ = 10;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar3;
        }
        else {
          puStack_1ac = (uint *)0xffffffff;
          puStack_1b0 = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_1b8 = 0x51a1f7;
          puStack_1b4 = (undefined1 *)iVar6;
          FUN_00408ed0();
          puStack_1ac = (uint *)0xffffffff;
          uStack_c._0_1_ = 0xb;
          puStack_1b0 = (uint *)0x0;
          puStack_1b4 = (undefined1 *)(iVar6 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_1b8 = 0x51a21a;
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar1;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar6 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar1 + 0x3c) = puVar7;
        }
        puStack_1ac = (uint *)0x51a253;
        FUN_00a39a80();
        if (0xf < uStack_170) {
          puStack_1ac = (uint *)auStack_184[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a268;
          FUN_00aae91b();
        }
        uStack_c = 0xffffffff;
        uStack_170 = 0xf;
        uStack_174 = 0;
        auStack_184[0] = auStack_184[0] & 0xffffff00;
        if (0xf < uStack_154) {
          puStack_1ac = (uint *)auStack_168[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a296;
          FUN_00aae91b();
        }
        puStack_1ac = (uint *)0x4;
        puStack_1b0 = (uint *)&DAT_00dfaa80;
        uStack_154 = 0xf;
        uStack_158 = 0;
        auStack_168[0] = auStack_168[0] & 0xffffff00;
        puStack_1b4 = (undefined1 *)0x51a2b9;
        FUN_00409350();
        puStack_1ac = auStack_184;
        uStack_c = 0xc;
        puStack_1b0 = (uint *)0x51a2d2;
        puStack_1ac = (uint *)FUN_008b2080();
        puStack_1b0 = auStack_168;
        puStack_1b4 = auStack_14c;
        uStack_c._0_1_ = 0xd;
        uStack_1b8 = 0x51a2ea;
        iVar6 = FUN_00424aa0();
        uStack_c._0_1_ = 0xe;
        iVar1 = puVar5[1];
        puStack_1ac = (uint *)0x44;
        puStack_1b0 = (uint *)0x51a306;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0xf;
        uVar3 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0xf;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar3;
        }
        else {
          puStack_1ac = (uint *)0xffffffff;
          puStack_1b0 = (uint *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_1b8 = 0x51a332;
          puStack_1b4 = (undefined1 *)iVar6;
          FUN_00408ed0();
          puStack_1ac = (uint *)0xffffffff;
          uStack_c._0_1_ = 0x10;
          puStack_1b0 = (uint *)0x0;
          puStack_1b4 = (undefined1 *)(iVar6 + 0x1c);
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_1b8 = 0x51a355;
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar1;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar6 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar1 + 0x3c) = puVar7;
        }
        puStack_1ac = (uint *)0x51a38e;
        FUN_00a39a80();
        if (0xf < uStack_170) {
          puStack_1ac = (uint *)auStack_184[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a39f;
          FUN_00aae91b();
        }
        uStack_c = 0xffffffff;
        uStack_170 = 0xf;
        uStack_174 = 0;
        uVar2 = auStack_184[0] >> 8;
        auStack_184[0] = uVar2 << 8;
        if (0xf < uStack_154) {
          puStack_1ac = (uint *)auStack_168[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a3cf;
          FUN_00aae91b();
        }
        uStack_154 = 0xf;
        uStack_158 = 0;
        auStack_168[0] = auStack_168[0] & 0xffffff00;
        puStack_1ac = (uint *)0x0;
        puStack_1b0 = (uint *)&DAT_00ded94d;
        uStack_170 = 0xf;
        uStack_174 = 0;
        auStack_184[0] = uVar2 << 8;
        if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
          puStack_1b4 = (undefined1 *)0x51a415;
          FUN_00409350();
          uStack_c = 0x11;
          puStack_1ac = (uint *)0xd;
          puStack_1b0 = (uint *)0xdfe900;
          uStack_154 = 0xf;
          uStack_158 = 0;
          auStack_168[0] = auStack_168[0] & 0xffffff00;
          puStack_1b4 = (undefined1 *)0x51a440;
          FUN_00409350();
          uStack_c._0_1_ = 0x12;
          uVar16 = 0;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar14 = *(undefined4 *)(param_1 + 0x1c);
          uVar15 = 0x2d2d2d;
          uVar13 = 0;
          puVar12 = auStack_184;
          uVar11 = 0;
          FUN_006a4f40(puVar5,0,puVar12,0,uVar14,uVar9,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_228,uVar8,puVar5,uVar11,puVar12,uVar13,uVar14,uVar9,uVar15,uVar16);
          uStack_c._0_1_ = 0x13;
          uVar9 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x12);
        }
        else {
          puStack_1b4 = (undefined1 *)0x51a4d8;
          FUN_00409350();
          uStack_c = 0x14;
          puStack_1ac = (uint *)0x10;
          puStack_1b0 = (uint *)0xdfe910;
          uStack_154 = 0xf;
          uStack_158 = 0;
          auStack_168[0] = auStack_168[0] & 0xffffff00;
          puStack_1b4 = (undefined1 *)0x51a503;
          FUN_00409350();
          uStack_c._0_1_ = 0x15;
          uVar16 = 0;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar14 = *(undefined4 *)(param_1 + 0x1c);
          uVar15 = 0x2d2d2d;
          uVar13 = 0;
          puVar12 = auStack_184;
          uVar11 = 0;
          FUN_006a4f40(puVar5,0,puVar12,0,uVar14,uVar9,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_228,uVar8,puVar5,uVar11,puVar12,uVar13,uVar14,uVar9,uVar15,uVar16);
          uStack_c._0_1_ = 0x16;
          uVar9 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x15);
        }
        FUN_0042bb30(uVar9);
        if (0xf < uStack_154) {
          puStack_1ac = (uint *)auStack_168[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a5ac;
          FUN_00aae91b();
        }
        uStack_c = 0xffffffff;
        auStack_168[0] = auStack_168[0] & 0xffffff00;
        uStack_158 = 0;
        uStack_154 = 0xf;
        if (0xf < uStack_170) {
          puStack_1ac = (uint *)auStack_184[0];
                    /* WARNING: Subroutine does not return */
          puStack_1b0 = (uint *)&UNK_0051a5de;
          FUN_00aae91b();
        }
      }
      puStack_1ac = (uint *)0x51aa21;
      FUN_008b1a40();
      puStack_1ac = (uint *)0x51aa2c;
      FUN_00504700();
      ExceptionList = pvStack_14;
      return;
    }
  }
  puStack_1ac = (uint *)0x0;
  puStack_1b0 = (uint *)&DAT_00ded94d;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  puStack_1b4 = (undefined1 *)0x51aa6e;
  FUN_00409350();
  uStack_c = 0x2a;
  if (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(param_1 + 0xca0) + 0xab18) {
    puStack_1ac = (uint *)0xffffffff;
    puStack_1b0 = (uint *)0x0;
    puStack_1b4 = (undefined1 *)(param_1 + 0xca4);
    uStack_1b8 = 0x51aaa8;
    FUN_00408ed0();
  }
  puStack_1ac = *(uint **)(param_1 + 0x20);
  puStack_1b0 = *(uint **)(param_1 + 0x1c);
  uStack_1d0 = 0xffffffff;
  uStack_1d4 = 0;
  puStack_1d8 = local_f8;
  uStack_1b8 = 0xf;
  uStack_1bc = 0;
  uStack_1cc = 0;
  uStack_1dc = 0x51aad8;
  FUN_00408ed0();
  uStack_1d0 = 0x51aae1;
  FUN_008b1ab0();
  if (*(int *)(param_1 + 0xc00) != 0) {
    puStack_1ac = (uint *)0x51aaf4;
    cVar4 = (**(code **)(**(int **)(param_1 + 0xc00) + 0x18))();
    if ((cVar4 != '\0') && (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20))) {
      puStack_1ac = (uint *)param_1;
      puStack_1b0 = (uint *)0x51ab19;
      puVar5 = (undefined4 *)FUN_005061e0();
      puStack_1ac = (uint *)0x51ab2d;
      FUN_009885d0();
      uStack_c._0_1_ = 0x2d;
      puStack_1ac = (uint *)0x51ab44;
      puStack_1ac = (uint *)FUN_004f97a0();
      puStack_1b4 = auStack_14c;
      uStack_c._0_1_ = 0x2e;
      uStack_1b8 = 0x51ab5a;
      puStack_1b0 = auStack_184;
      FUN_00424aa0();
      uStack_c._0_1_ = 0x2f;
      iVar1 = puVar5[1];
      puStack_1ac = (uint *)0x44;
      puStack_1b0 = (uint *)0x51ab72;
      iVar6 = FUN_00aae9af();
      uStack_c._0_1_ = 0x30;
      if (iVar6 == 0) {
        uVar9 = 0;
      }
      else {
        puStack_1b4 = (undefined1 *)0x51ab92;
        puStack_1b0 = (uint *)iVar6;
        puStack_1ac = (uint *)iVar1;
        uVar9 = FUN_0042b900();
      }
      iVar6 = puVar5[2];
      puVar5[1] = uVar9;
      puVar5[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *puVar5 = uVar9;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3c) = uVar9;
      }
      puStack_1ac = (uint *)0x51abba;
      FUN_00a39a80();
      puStack_1ac = (uint *)0x51abc6;
      FUN_00408ad0();
      uStack_c._0_1_ = 0x2a;
      puStack_1ac = (uint *)0x51abd7;
      FUN_00408ad0();
      puStack_1ac = (uint *)0x51abe5;
      FUN_009885d0();
      puStack_1ac = (uint *)auStack_114;
      uStack_c._0_1_ = 0x31;
      puStack_1b0 = (uint *)0x51abfe;
      puStack_1ac = (uint *)FUN_008b1dd0();
      puStack_1b4 = auStack_14c;
      uStack_c._0_1_ = 0x32;
      uStack_1b8 = 0x51ac14;
      puStack_1b0 = auStack_184;
      FUN_00424aa0();
      uStack_c._0_1_ = 0x33;
      iVar1 = puVar5[1];
      puStack_1ac = (uint *)0x44;
      puStack_1b0 = (uint *)0x51ac2c;
      iVar6 = FUN_00aae9af();
      uStack_c._0_1_ = 0x34;
      if (iVar6 == 0) {
        uVar9 = 0;
      }
      else {
        puStack_1b4 = (undefined1 *)0x51ac4c;
        puStack_1b0 = (uint *)iVar6;
        puStack_1ac = (uint *)iVar1;
        uVar9 = FUN_0042b900();
      }
      iVar6 = puVar5[2];
      puVar5[1] = uVar9;
      puVar5[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *puVar5 = uVar9;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3c) = uVar9;
      }
      puStack_1ac = (uint *)0x51ac74;
      FUN_00a39a80();
      puStack_1ac = (uint *)0x51ac80;
      FUN_00408ad0();
      uStack_c._0_1_ = 0x2a;
      puStack_1ac = (uint *)0x51ac91;
      FUN_00408ad0();
      puStack_1ac = (uint *)0x51ac9f;
      FUN_009885d0();
      uStack_c._0_1_ = 0x35;
      puStack_1ac = (uint *)0x51acb7;
      puStack_1ac = (uint *)FUN_008b1c70();
      puStack_1b4 = auStack_14c;
      uStack_c._0_1_ = 0x36;
      uStack_1b8 = 0x51accd;
      puStack_1b0 = auStack_184;
      FUN_00424aa0();
      uStack_c._0_1_ = 0x37;
      iVar1 = puVar5[1];
      puStack_1ac = (uint *)0x44;
      puStack_1b0 = (uint *)0x51ace5;
      iVar6 = FUN_00aae9af();
      uStack_c._0_1_ = 0x38;
      if (iVar6 == 0) {
        uVar9 = 0;
      }
      else {
        puStack_1b4 = (undefined1 *)0x51ad01;
        puStack_1b0 = (uint *)iVar6;
        puStack_1ac = (uint *)iVar1;
        uVar9 = FUN_0042b900();
      }
      iVar6 = puVar5[2];
      puVar5[1] = uVar9;
      puVar5[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *puVar5 = uVar9;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3c) = uVar9;
      }
      puStack_1ac = (uint *)0x51ad29;
      FUN_00a39a80();
      puStack_1ac = (uint *)0x51ad35;
      FUN_00408ad0();
      uStack_c._0_1_ = 0x2a;
      puStack_1ac = (uint *)0x51ad46;
      FUN_00408ad0();
      puStack_1ac = (uint *)0x51ad54;
      FUN_009885d0();
      uStack_c._0_1_ = 0x39;
      puStack_1ac = (uint *)0x51ad6c;
      puStack_1ac = (uint *)FUN_008b1d20();
      puStack_1b4 = auStack_14c;
      uStack_c._0_1_ = 0x3a;
      uStack_1b8 = 0x51ad82;
      puStack_1b0 = auStack_184;
      FUN_00424aa0();
      uStack_c._0_1_ = 0x3b;
      iVar1 = puVar5[1];
      puStack_1ac = (uint *)0x44;
      puStack_1b0 = (uint *)0x51ad9a;
      iVar6 = FUN_00aae9af();
      uStack_c._0_1_ = 0x3c;
      if (iVar6 == 0) {
        uVar9 = 0;
      }
      else {
        puStack_1b4 = (undefined1 *)0x51adb6;
        puStack_1b0 = (uint *)iVar6;
        puStack_1ac = (uint *)iVar1;
        uVar9 = FUN_0042b900();
      }
      iVar6 = puVar5[2];
      puVar5[1] = uVar9;
      puVar5[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *puVar5 = uVar9;
      }
      else {
        *(undefined4 *)(iVar1 + 0x3c) = uVar9;
      }
      puStack_1ac = (uint *)0x51adde;
      FUN_00a39a80();
      puStack_1ac = (uint *)0x51adea;
      FUN_00408ad0();
      uStack_c._0_1_ = 0x2a;
      puStack_1ac = (uint *)0x51adfb;
      FUN_00408ad0();
      puStack_1ac = (uint *)0x51ae0c;
      FUN_009885d0();
      uStack_c._0_1_ = 0x3d;
      puStack_1ac = (uint *)0x51ae25;
      FUN_009885d0();
      uStack_c._0_1_ = 0x3e;
      uVar16 = 0;
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar14 = *(undefined4 *)(param_1 + 0x1c);
      uVar15 = 0x2d2d2d;
      uVar13 = 0;
      puVar7 = auStack_114;
      uVar11 = 0;
      FUN_006a4f40(puVar5,0,puVar7,0,uVar14,uVar9,0x2d2d2d,0);
      uVar8 = FUN_006a55b0();
      FUN_006a7ed0(auStack_228,uVar8,puVar5,uVar11,puVar7,uVar13,uVar14,uVar9,uVar15,uVar16);
      uStack_c._0_1_ = 0x3f;
      uVar9 = FUN_006a4f40();
      uStack_c = CONCAT31(uStack_c._1_3_,0x3e);
      FUN_0042bb30(uVar9);
      puStack_1ac = (uint *)0x51aec8;
      FUN_00408ad0();
      puStack_1ac = (uint *)0x51aed4;
      FUN_00408ad0();
    }
  }
  if (local_e4 < 0x10) {
    ExceptionList = pvStack_14;
    return;
  }
  puStack_1ac = (uint *)local_f8[0];
                    /* WARNING: Subroutine does not return */
  puStack_1b0 = (uint *)&UNK_0051aeeb;
  FUN_00aae91b();
}

