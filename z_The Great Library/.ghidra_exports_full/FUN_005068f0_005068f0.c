// FUN_005068f0 @ 005068f0 body=[[005068f0, 00506b6a] [00506b6e, 00506b92] [00506b96, 00506bb5] [00506bb9, 00506bf3] [00506bf7, 00506c1b] [00506c1f, 00506c3c] [00506c40, 00506d53] [00506d57, 00506d76] [00506d7a, 00506d99] [00506d9d, 00506dba] [00506dbe, 00506ed1] [00506ed5, 00506ef4] [00506ef8, 00506f17] [00506f1b, 00506f38] [00506f3c, 00507058] [0050705c, 0050707e] [00507082, 00507138] [0050713c, 0050715d] [00507161, 0050739d] [005073a1, 005073de] [005073e2, 00507406] [0050740a, 00507427] [0050742b, 005074d8] [005074dc, 005074fd] [00507501, 005075ac] [005075b0, 005075d1] [005075d5, 005076f7] [005076fb, 0050771c] [00507720, 0050776e]]


void FUN_005068f0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [108];
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 local_e8 [4];
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  int *local_c4;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 *local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  int *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba7925;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125a660 == 0) {
    uStack_100 = 0x1c00506922;
    ExceptionList = &local_10;
    local_c4 = (int *)FUN_00aae9af();
    local_8 = 0;
    if (local_c4 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uStack_100 = CONCAT44(0x506939,(int)uStack_100);
      uVar4 = FUN_008b0060();
    }
    local_8 = 0xffffffff;
    uStack_100 = CONCAT44(uVar4,0x50694a);
    FUN_0044ec50();
  }
  iVar5 = *(int *)(DAT_0125a660 + 0xc);
  local_c4 = (int *)(DAT_0125a660 + 0xc);
  local_d0 = 0;
  if (0 < (int)(*(int *)(DAT_0125a660 + 0x10) - iVar5 & 0xfffffffcU)) {
    do {
      local_1c = *(int **)(iVar5 + local_d0 * 4);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      uVar15 = *(undefined4 *)(param_1 + 0x20);
      uStack_100 = 0x506994;
      FUN_008a8650();
      uStack_100 = CONCAT44(local_c0,0x5069b5);
      local_b8 = uVar4;
      local_b4 = uVar15;
      cVar3 = (**(code **)(local_1c[0x13] + 0x18))();
      if (cVar3 != '\0') {
        for (piVar11 = *(int **)(param_1 + 0x4e8); piVar11 != (int *)0x0;
            piVar11 = (int *)piVar11[2]) {
          if ((int *)*piVar11 == local_1c) goto LAB_005071ae;
        }
        if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
          uStack_100 = CONCAT44(param_1,0x506a00);
          local_18 = (int *)FUN_005061e0();
          uStack_100 = 0x1000df2714;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_108 = CONCAT44(0x506a20,(undefined4)uStack_108);
          FUN_00409350();
          local_8 = 1;
          uStack_100 = 0x900df2728;
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          uStack_108 = CONCAT44(0x506a3f,(undefined4)uStack_108);
          FUN_00409350();
          uStack_100 = CONCAT44(local_3c,local_e8);
          local_8._0_1_ = 2;
          uStack_108 = CONCAT44(0x506a53,(undefined4)uStack_108);
          FUN_009a8ee0();
          local_8._0_1_ = 3;
          uStack_100 = CONCAT44(0x506a5e,(int)uStack_100);
          iVar5 = FUN_00475500();
          uStack_108 = *(undefined8 *)(iVar5 + 0x6c);
          uStack_100 = *(undefined8 *)(iVar5 + 0x74);
          uStack_10c = 0x506a80;
          uVar4 = FUN_009a9880();
          local_8._0_1_ = 4;
          uStack_100 = 0xffffffff00000000;
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          uStack_108 = CONCAT44(local_78,0x506aaf);
          FUN_00408ed0();
          local_8._0_1_ = 5;
          uStack_100 = 0xffffffff00000000;
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          uStack_108 = CONCAT44(uVar4,0x506ace);
          FUN_00408ed0();
          local_8._0_1_ = 6;
          iVar5 = local_18[1];
          uStack_100 = 0x4400506adf;
          puVar6 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 7;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 7;
          local_20 = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)0x0;
            local_8._0_1_ = uVar2;
          }
          else {
            uStack_100 = 0xffffffff00000000;
            *(undefined4 *)(puVar6 + 0x14) = 0xf;
            *(undefined4 *)(puVar6 + 0x10) = 0;
            *puVar6 = 0;
            uStack_108 = CONCAT44(local_b0,0x506b0c);
            FUN_00408ed0();
            local_8._0_1_ = 8;
            uStack_100 = 0xffffffff00000000;
            *(undefined4 *)(puVar6 + 0x30) = 0xf;
            *(undefined4 *)(puVar6 + 0x2c) = 0;
            puVar6[0x1c] = 0;
            uStack_108 = CONCAT44(local_94,0x506b2e);
            FUN_00408ed0();
            *(int *)(puVar6 + 0x38) = iVar5;
            *(undefined4 *)(puVar6 + 0x3c) = 0;
            puVar6[0x40] = 0;
          }
          iVar10 = local_18[2];
          local_18[1] = (int)puVar6;
          local_18[2] = iVar10 + 1;
          if (iVar10 == 0) {
            *local_18 = (int)puVar6;
          }
          else {
            *(undefined1 **)(iVar5 + 0x3c) = puVar6;
          }
          if (0xf < local_80) {
            uStack_100 = CONCAT44(local_94[0],&UNK_00506b6b);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          if (0xf < local_9c) {
            uStack_100 = CONCAT44(local_b0[0],&UNK_00506b93);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          if (0xf < local_48) {
            uStack_100 = CONCAT44(local_5c[0],&UNK_00506bb6);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          local_8 = CONCAT31(local_8._1_3_,9);
          uStack_100 = CONCAT44(0x506bd3,(int)uStack_100);
          FUN_009adb70();
          if (local_e4 != 0) {
            uStack_100 = CONCAT44(0x506be8,(int)uStack_100);
            FUN_009e6a80();
            uStack_100 = CONCAT44(local_e4,&UNK_00506bf4);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_e4 = 0;
          local_e0 = 0;
          local_dc = 0;
          if (0xf < local_64) {
            uStack_100 = CONCAT44(local_78[0],&UNK_00506c1c);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          if (0xf < local_28) {
            uStack_100 = CONCAT44(local_3c[0],&UNK_00506c3d);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_100 = 0x400dfbf14;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_108 = CONCAT44(0x506c58,(undefined4)uStack_108);
          FUN_00409350();
          local_8 = 10;
          uStack_100._4_4_ = local_5c;
          uStack_100._0_4_ = 0x506c6d;
          uVar7 = (**(code **)(*local_1c + 0x18))();
          uStack_100._0_4_ = 0xffffffff;
          local_8._0_1_ = 0xb;
          uStack_108 = ZEXT48(local_3c);
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          uStack_10c = 0x506c97;
          FUN_00408ed0();
          uStack_100._0_4_ = 0xffffffff;
          local_8._0_1_ = 0xc;
          uStack_108 = (ulonglong)uVar7;
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          uStack_10c = 0x506cb6;
          FUN_00408ed0();
          local_8._0_1_ = 0xd;
          local_20 = (undefined1 *)local_18[1];
          uStack_100._0_4_ = 0x44;
          uStack_108 = CONCAT44(0x506cca,(undefined4)uStack_108);
          puVar6 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0xe;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 0xe;
          local_40 = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)0x0;
            local_8._0_1_ = uVar2;
          }
          else {
            uStack_100._0_4_ = 0xffffffff;
            uStack_108 = ZEXT48(local_b0);
            *(undefined4 *)(puVar6 + 0x14) = 0xf;
            *(undefined4 *)(puVar6 + 0x10) = 0;
            *puVar6 = 0;
            uStack_10c = 0x506cf3;
            FUN_00408ed0();
            uStack_100._0_4_ = 0xffffffff;
            local_8._0_1_ = 0xf;
            *(undefined4 *)(puVar6 + 0x30) = 0xf;
            *(undefined4 *)(puVar6 + 0x2c) = 0;
            uStack_108 = ZEXT48(local_94);
            puVar6[0x1c] = 0;
            uStack_10c = 0x506d11;
            FUN_00408ed0();
            *(undefined1 **)(puVar6 + 0x38) = local_20;
            *(undefined4 *)(puVar6 + 0x3c) = 0;
            puVar6[0x40] = 0;
          }
          iVar5 = local_18[2];
          local_18[1] = (int)puVar6;
          local_18[2] = iVar5 + 1;
          if (iVar5 == 0) {
            *local_18 = (int)puVar6;
          }
          else {
            *(undefined1 **)((int)local_20 + 0x3c) = puVar6;
          }
          if (0xf < local_80) {
            uStack_100 = CONCAT44(uStack_100._4_4_,local_94[0]);
            uStack_108 = CONCAT44(&UNK_00506d54,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          if (0xf < local_9c) {
            uStack_100 = CONCAT44(uStack_100._4_4_,local_b0[0]);
            uStack_108 = CONCAT44(&UNK_00506d77,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          if (0xf < local_48) {
            uStack_100 = CONCAT44(uStack_100._4_4_,local_5c[0]);
            uStack_108 = CONCAT44(&UNK_00506d9a,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          if (0xf < local_28) {
            uStack_100 = CONCAT44(uStack_100._4_4_,local_3c[0]);
            uStack_108 = CONCAT44(&UNK_00506dbb,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_100._0_4_ = 6;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_108 = 0xdfdcdc00506dd6;
          FUN_00409350();
          local_8 = 0x10;
          uStack_100 = CONCAT44(uStack_100._4_4_,local_5c);
          uStack_108 = CONCAT44(0x506deb,(undefined4)uStack_108);
          uVar4 = (**(code **)(*local_1c + 0x1c))();
          local_8._0_1_ = 0x11;
          uStack_100 = 0xffffffff00000000;
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          uStack_108 = CONCAT44(local_3c,0x506e15);
          FUN_00408ed0();
          local_8._0_1_ = 0x12;
          uStack_100 = 0xffffffff00000000;
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          uStack_108 = CONCAT44(uVar4,0x506e34);
          FUN_00408ed0();
          local_8._0_1_ = 0x13;
          local_20 = (undefined1 *)local_18[1];
          uStack_100 = 0x4400506e48;
          puVar6 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x14;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 0x14;
          local_40 = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)0x0;
            local_8._0_1_ = uVar2;
          }
          else {
            uStack_100 = 0xffffffff00000000;
            *(undefined4 *)(puVar6 + 0x14) = 0xf;
            *(undefined4 *)(puVar6 + 0x10) = 0;
            *puVar6 = 0;
            uStack_108 = CONCAT44(local_b0,0x506e71);
            FUN_00408ed0();
            local_8._0_1_ = 0x15;
            uStack_100 = 0xffffffff00000000;
            *(undefined4 *)(puVar6 + 0x30) = 0xf;
            *(undefined4 *)(puVar6 + 0x2c) = 0;
            puVar6[0x1c] = 0;
            uStack_108 = CONCAT44(local_94,0x506e8f);
            FUN_00408ed0();
            *(undefined1 **)(puVar6 + 0x38) = local_20;
            *(undefined4 *)(puVar6 + 0x3c) = 0;
            puVar6[0x40] = 0;
          }
          iVar5 = local_18[2];
          local_18[1] = (int)puVar6;
          local_18[2] = iVar5 + 1;
          if (iVar5 == 0) {
            *local_18 = (int)puVar6;
          }
          else {
            *(undefined1 **)((int)local_20 + 0x3c) = puVar6;
          }
          if (0xf < local_80) {
            uStack_100 = CONCAT44(local_94[0],&UNK_00506ed2);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          if (0xf < local_9c) {
            uStack_100 = CONCAT44(local_b0[0],&UNK_00506ef5);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          if (0xf < local_48) {
            uStack_100 = CONCAT44(local_5c[0],&UNK_00506f18);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          if (0xf < local_28) {
            uStack_100 = CONCAT44(local_3c[0],&UNK_00506f39);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_100 = 0xb00dfe400;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_108 = CONCAT44(0x506f59,(undefined4)uStack_108);
          FUN_00409350();
          local_8 = 0x16;
          uStack_100 = CONCAT44(0x506f6b,(int)uStack_100);
          uVar4 = FUN_0044e490();
          local_8._0_1_ = 0x17;
          uStack_100 = 0xffffffff00000000;
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          uStack_108 = CONCAT44(local_3c,0x506f95);
          FUN_00408ed0();
          local_8._0_1_ = 0x18;
          uStack_100 = 0xffffffff00000000;
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          uStack_108 = CONCAT44(uVar4,0x506fb4);
          FUN_00408ed0();
          local_8._0_1_ = 0x19;
          iVar5 = local_18[1];
          uStack_100 = 0x4400506fc5;
          puVar6 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x1a;
          uVar2 = (undefined1)local_8;
          local_8._0_1_ = 0x1a;
          local_40 = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)0x0;
            local_8._0_1_ = uVar2;
          }
          else {
            uStack_100 = 0xffffffff00000000;
            *(undefined4 *)(puVar6 + 0x14) = 0xf;
            *(undefined4 *)(puVar6 + 0x10) = 0;
            *puVar6 = 0;
            uStack_108 = CONCAT44(local_b0,0x506ff2);
            FUN_00408ed0();
            local_8._0_1_ = 0x1b;
            uStack_100 = 0xffffffff00000000;
            *(undefined4 *)(puVar6 + 0x30) = 0xf;
            *(undefined4 *)(puVar6 + 0x2c) = 0;
            puVar6[0x1c] = 0;
            uStack_108 = CONCAT44(local_94,0x507014);
            FUN_00408ed0();
            *(int *)(puVar6 + 0x38) = iVar5;
            *(undefined4 *)(puVar6 + 0x3c) = 0;
            puVar6[0x40] = 0;
          }
          iVar10 = local_18[2];
          local_18[1] = (int)puVar6;
          local_18[2] = iVar10 + 1;
          if (iVar10 == 0) {
            *local_18 = (int)puVar6;
          }
          else {
            *(undefined1 **)(iVar5 + 0x3c) = puVar6;
          }
          uStack_100 = CONCAT44(0x507046,(int)uStack_100);
          FUN_00a39a80();
          if (0xf < local_48) {
            uStack_100 = CONCAT44(local_5c[0],&UNK_00507059);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          if (0xf < local_28) {
            uStack_100 = CONCAT44(local_3c[0],&UNK_0050707f);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_100 = 0xded94d;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_108 = CONCAT44(0x507099,(undefined4)uStack_108);
          FUN_00409350();
          local_8 = 0x1c;
          uStack_100 = 0x700dfe40c;
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          uStack_108 = CONCAT44(0x5070b8,(undefined4)uStack_108);
          FUN_00409350();
          local_40 = auStack_178;
          local_8._0_1_ = 0x1d;
          local_20 = (undefined1 *)&iStack_180;
          uVar17 = 0;
          iStack_180 = 0;
          uStack_17c = 0;
          uVar4 = *(undefined4 *)(param_1 + 0x20);
          uVar15 = *(undefined4 *)(param_1 + 0x1c);
          local_cc = 0x2d2d2d;
          uVar16 = 0x2d2d2d;
          uVar14 = 0;
          puVar13 = local_3c;
          uVar12 = 0;
          piVar11 = local_18;
          FUN_006a4f40(local_18,0,puVar13,0,uVar15,uVar4,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_178,uVar8,piVar11,uVar12,puVar13,uVar14,uVar15,uVar4,uVar16,uVar17);
          uStack_17c = 0;
          iStack_180 = param_1;
          local_8._0_1_ = 0x1e;
          uVar4 = FUN_006a4f40();
          local_8 = CONCAT31(local_8._1_3_,0x1d);
          FUN_0042bb30(uVar4);
          if (0xf < local_64) {
            uStack_100 = CONCAT44(local_78[0],&UNK_00507139);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          if (0xf < local_28) {
            uStack_100 = CONCAT44(local_3c[0],&UNK_0050715e);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        iVar5 = *(int *)(param_1 + 0x4ec);
        uStack_100 = 0x1000507171;
        puVar9 = (undefined4 *)FUN_00aae9af();
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = local_1c;
          puVar9[1] = iVar5;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar10 = *(int *)(param_1 + 0x4f0);
        *(undefined4 **)(param_1 + 0x4ec) = puVar9;
        *(int *)(param_1 + 0x4f0) = iVar10 + 1;
        if (iVar10 == 0) {
          *(undefined4 **)(param_1 + 0x4e8) = puVar9;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar9;
        }
      }
LAB_005071ae:
      iVar5 = *local_c4;
      local_d0 = local_d0 + 1;
    } while (local_d0 < local_c4[1] - iVar5 >> 2);
  }
  piVar11 = *(undefined4 **)(param_1 + 0x4e8);
  do {
    do {
      if (piVar11 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      local_d4 = *(undefined4 *)(param_1 + 0x1c);
      local_18 = (int *)*piVar11;
      piVar11 = (int *)piVar11[2];
      local_d0 = *(undefined4 *)(param_1 + 0x20);
      uStack_100 = 0x507210;
      local_c4 = piVar11;
      FUN_008a8650();
      local_b4 = local_d0;
      local_b8 = local_d4;
      uStack_100 = CONCAT44(local_c0,0x50723d);
      cVar3 = (**(code **)(local_18[0x13] + 0x18))();
    } while (cVar3 != '\0');
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
      uStack_100 = CONCAT44(param_1,0x507262);
      local_1c = (int *)FUN_005061e0();
      uStack_100 = 0x1000df2714;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      uStack_108 = CONCAT44(0x507282,(undefined4)uStack_108);
      FUN_00409350();
      local_8 = 0x1f;
      uStack_100 = 0x900df2728;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      uStack_108 = CONCAT44(0x5072a1,(undefined4)uStack_108);
      FUN_00409350();
      uStack_100 = CONCAT44(local_3c,local_e8);
      local_8._0_1_ = 0x20;
      uStack_108 = CONCAT44(0x5072b5,(undefined4)uStack_108);
      FUN_009a8ee0();
      local_8._0_1_ = 0x21;
      uStack_100 = CONCAT44(0x5072c0,(int)uStack_100);
      iVar5 = FUN_00475500();
      uStack_108 = *(undefined8 *)(iVar5 + 0x6c);
      uStack_100 = *(undefined8 *)(iVar5 + 0x74);
      uStack_10c = 0x5072e2;
      uVar4 = FUN_009a9880();
      uStack_100 = 0xffffffff00000000;
      local_8._0_1_ = 0x22;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      uStack_108 = CONCAT44(local_78,0x507311);
      FUN_00408ed0();
      local_8._0_1_ = 0x23;
      uStack_100 = 0xffffffff00000000;
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      uStack_108 = CONCAT44(uVar4,0x507330);
      FUN_00408ed0();
      local_8._0_1_ = 0x24;
      iVar5 = local_1c[1];
      uStack_100 = 0x4400507341;
      iVar10 = FUN_00aae9af();
      local_8._0_1_ = 0x25;
      local_40 = (undefined1 *)iVar10;
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        uStack_100 = CONCAT44(iVar10,0x50735d);
        FUN_00a3ab70();
        *(int *)(iVar10 + 0x38) = iVar5;
        *(undefined4 *)(iVar10 + 0x3c) = 0;
        *(undefined1 *)(iVar10 + 0x40) = 0;
      }
      iVar1 = local_1c[2];
      local_1c[1] = iVar10;
      local_1c[2] = iVar1 + 1;
      if (iVar1 == 0) {
        *local_1c = iVar10;
      }
      else {
        *(int *)(iVar5 + 0x3c) = iVar10;
      }
      uStack_100 = CONCAT44(0x50738f,(int)uStack_100);
      FUN_00a39a80();
      if (0xf < local_48) {
        uStack_100 = CONCAT44(local_5c[0],&UNK_0050739e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x26);
      uStack_100 = CONCAT44(0x5073be,(int)uStack_100);
      FUN_009adb70();
      if (local_e4 != 0) {
        uStack_100 = CONCAT44(0x5073d3,(int)uStack_100);
        FUN_009e6a80();
        uStack_100 = CONCAT44(local_e4,&UNK_005073df);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e4 = 0;
      local_e0 = 0;
      local_dc = 0;
      if (0xf < local_64) {
        uStack_100 = CONCAT44(local_78[0],&UNK_00507407);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_100 = CONCAT44(local_3c[0],&UNK_00507428);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_100 = 0x400dfbf14;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      uStack_108 = CONCAT44(0x507443,(undefined4)uStack_108);
      FUN_00409350();
      local_8 = 0x27;
      uStack_100._4_4_ = local_5c;
      uStack_100._0_4_ = 0x507458;
      uStack_100._0_4_ = (**(code **)(*local_18 + 0x18))();
      uStack_108 = CONCAT44(local_3c,local_b0);
      local_8._0_1_ = 0x28;
      uStack_10c = 0x50746d;
      FUN_00424aa0();
      piVar11 = local_1c;
      local_8._0_1_ = 0x29;
      local_20 = (undefined1 *)local_1c[1];
      uStack_100._0_4_ = 0x44;
      uStack_108 = CONCAT44(0x507483,(undefined4)uStack_108);
      local_40 = (undefined1 *)FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      if (local_40 == (undefined1 *)0x0) {
        iVar5 = 0;
      }
      else {
        uStack_100._0_4_ = (int)local_20;
        uStack_108 = CONCAT44(local_40,0x50749d);
        iVar5 = FUN_0042b900();
      }
      iVar10 = piVar11[2];
      piVar11[1] = iVar5;
      piVar11[2] = iVar10 + 1;
      if (iVar10 == 0) {
        *piVar11 = iVar5;
      }
      else {
        *(int *)((int)local_20 + 0x3c) = iVar5;
      }
      uStack_100._0_4_ = 0x5074c6;
      FUN_00a39a80();
      if (0xf < local_48) {
        uStack_100 = CONCAT44(uStack_100._4_4_,local_5c[0]);
        uStack_108 = CONCAT44(&UNK_005074d9,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_100 = CONCAT44(uStack_100._4_4_,local_3c[0]);
        uStack_108 = CONCAT44(&UNK_005074fe,(undefined4)uStack_108);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_100._0_4_ = 6;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      uStack_108 = 0xdfdcdc0050751d;
      FUN_00409350();
      local_8 = 0x2b;
      uStack_100 = CONCAT44(uStack_100._4_4_,local_5c);
      uStack_108 = CONCAT44(0x507532,(undefined4)uStack_108);
      uVar4 = (**(code **)(*local_18 + 0x1c))();
      uStack_100 = CONCAT44(uVar4,local_3c);
      local_8._0_1_ = 0x2c;
      uStack_108 = CONCAT44(local_b0,0x507547);
      FUN_00424aa0();
      local_8._0_1_ = 0x2d;
      iVar5 = local_1c[1];
      uStack_100 = 0x440050755a;
      local_40 = (undefined1 *)FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,0x2e);
      if (local_40 == (undefined1 *)0x0) {
        iVar10 = 0;
      }
      else {
        uStack_100 = CONCAT44(iVar5,local_40);
        uStack_108 = CONCAT44(0x507571,(undefined4)uStack_108);
        iVar10 = FUN_0042b900();
      }
      iVar1 = local_1c[2];
      local_1c[1] = iVar10;
      local_1c[2] = iVar1 + 1;
      if (iVar1 == 0) {
        *local_1c = iVar10;
      }
      else {
        *(int *)(iVar5 + 0x3c) = iVar10;
      }
      uStack_100 = CONCAT44(0x50759a,(int)uStack_100);
      FUN_00a39a80();
      if (0xf < local_48) {
        uStack_100 = CONCAT44(local_5c[0],&UNK_005075ad);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_100 = CONCAT44(local_3c[0],&UNK_005075d2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_100 = 0xded94d;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      uStack_108 = CONCAT44(0x5075f1,(undefined4)uStack_108);
      FUN_00409350();
      local_8 = 0x2f;
      uStack_100 = 0xb00dfe414;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      uStack_108 = CONCAT44(0x507610,(undefined4)uStack_108);
      FUN_00409350();
      local_8._0_1_ = 0x30;
      local_40 = auStack_178;
      local_20 = (undefined1 *)&iStack_180;
      iStack_180 = 0;
      uStack_17c = 0;
      local_cc = 0x2d2d2d;
      puVar6 = auStack_178;
      piVar11 = &iStack_180;
      if (DAT_01262ef4 == 0) {
        local_20 = (undefined1 *)FUN_00aae9af(0x44);
        local_8._0_1_ = 0x31;
        if (local_20 == (undefined1 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_006a4e30();
        }
        local_8._0_1_ = 0x30;
        FUN_006a59b0(uVar4);
        puVar6 = local_40;
        piVar11 = (int *)local_20;
      }
      local_20 = (undefined1 *)piVar11;
      local_40 = puVar6;
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar15 = *(undefined4 *)(param_1 + 0x1c);
      uVar17 = 0;
      uVar16 = 0;
      puVar13 = local_3c;
      uVar14 = 0;
      piVar11 = local_1c;
      uVar8 = local_cc;
      uVar12 = FUN_006a55b0(local_1c,0,puVar13,0,uVar15,uVar4,local_cc,0);
      FUN_006a7ed0(auStack_178,uVar12,piVar11,uVar14,puVar13,uVar16,uVar15,uVar4,uVar8,uVar17);
      local_8._0_1_ = 0x32;
      if (DAT_01262ef4 == 0) {
        uStack_17c = 0x44;
        iStack_180 = 0x5076ad;
        local_20 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x33;
        if (local_20 == (undefined1 *)0x0) {
          uStack_17c = 0;
        }
        else {
          uStack_17c = 0x5076c2;
          uStack_17c = FUN_006a4e30();
        }
        local_8._0_1_ = 0x32;
        iStack_180 = 0x5076d0;
        FUN_006a59b0();
      }
      uStack_17c = 0;
      iStack_180 = param_1;
      local_8 = CONCAT31(local_8._1_3_,0x30);
      FUN_0042bb30(DAT_01262ef4);
      if (0xf < local_64) {
        uStack_100 = CONCAT44(local_78[0],&UNK_005076f8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_100 = CONCAT44(local_3c[0],&UNK_0050771d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    for (puVar9 = *(undefined4 **)(param_1 + 0x4e8);
        (puVar9 != (undefined4 *)0x0 && ((int *)*puVar9 != local_18));
        puVar9 = (undefined4 *)puVar9[2]) {
    }
    uStack_100 = CONCAT44(puVar9,0x50774b);
    FUN_005f2ae0();
    piVar11 = local_c4;
  } while( true );
}

