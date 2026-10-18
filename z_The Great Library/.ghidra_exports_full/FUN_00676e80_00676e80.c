// FUN_00676e80 @ 00676e80 body=[[00676e80, 00677054] [00677058, 006770d8] [006770dc, 0067716c] [00677170, 00677223] [00677227, 00677279] [00677280, 006773aa] [006773ae, 00677440] [00677444, 00677510] [00677514, 00677623] [00677627, 00677657] [0067765b, 00677680] [00677684, 006776a0] [006776a4, 006777c8] [006777cc, 0067786a] [0067786e, 0067797d] [00677981, 006779b1] [006779b5, 006779da] [006779de, 006779fa] [006779fe, 00677a28] [00677a2c, 00677bc0] [00677bc4, 00677bfb] [00677bff, 00677da0] [00677da4, 00677dcd] [00677dd1, 00677e55] [00677e59, 00677e84] [00677e88, 00677eca]]


void FUN_00676e80(int *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  short *psVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *in_ECX;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  float10 fVar13;
  undefined4 **ppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined1 auStack_2b0 [104];
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 *puStack_240;
  undefined4 uStack_23c;
  uint *puStack_238;
  uint *puStack_234;
  char *pcStack_230;
  undefined4 **ppuStack_22c;
  uint *puStack_228;
  undefined4 *puStack_224;
  undefined1 *puStack_220;
  uint *puStack_21c;
  uint *puStack_218;
  uint *puStack_214;
  uint uVar18;
  uint local_204;
  undefined4 *local_200;
  undefined4 *puStack_1fc;
  uint local_1f8;
  uint3 uStack_1f4;
  char local_1f1;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  int *local_1d8;
  uint local_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 *puStack_1c8;
  uint uStack_1c4;
  uint auStack_1c0 [2];
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint auStack_1a4 [7];
  undefined4 uStack_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  int iStack_174;
  uint uStack_170;
  uint uStack_168;
  uint auStack_164 [4];
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint uStack_104;
  undefined1 auStack_fc [8];
  undefined4 uStack_f4;
  uint uStack_f0;
  int iStack_dc;
  undefined1 auStack_d4 [48];
  undefined4 uStack_a4;
  short sStack_90;
  undefined2 uStack_8e;
  undefined1 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_27;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b98f2f;
  local_14 = ExceptionList;
  local_1f8 = 0;
  local_1f1 = '\0';
  ExceptionList = &local_14;
  if ((char)param_1[9] == '\0') {
    puStack_214 = (uint *)DAT_012588e8;
    puStack_218 = (uint *)0x676ec7;
    ExceptionList = &local_14;
    FUN_0068b610();
    puStack_214 = (uint *)0x676ecf;
    cVar3 = FUN_00416db0();
    if (cVar3 == '\0') {
      local_1e8 = 0;
      local_1e4 = 0;
      local_1e0 = 0;
      local_1dc = local_1dc & 0xffffff00;
      puStack_214 = (uint *)param_1[0x11];
      while (puStack_214 != (uint *)0x0) {
        iVar9 = *(int *)((int)puStack_214 + 0x20);
        puStack_218 = (uint *)0x676efd;
        FUN_00408db0();
        puStack_214 = (uint *)iVar9;
      }
      local_c = 0;
      for (uVar18 = local_1e8; uVar18 != 0; uVar18 = *(uint *)(uVar18 + 0x20)) {
        puStack_218 = (uint *)0x676f20;
        puStack_214 = (uint *)DAT_012588e8;
        FUN_0068b610();
        puStack_214 = (uint *)0x676f27;
        cVar3 = FUN_00416db0();
        if (cVar3 != '\0') {
          local_1f1 = '\x01';
          break;
        }
      }
      puStack_214 = &local_1e8;
      local_c = 0xffffffff;
      puStack_218 = (uint *)0x676f4e;
      FUN_004097a0();
      if (local_1f1 == '\0') {
        ExceptionList = local_14;
        return;
      }
    }
  }
  local_1b0 = in_ECX[0x58e];
  puStack_214 = (uint *)0x28;
  puStack_218 = (uint *)0x676f69;
  local_200 = (undefined4 *)FUN_00aae9af();
  local_c = 1;
  if (local_200 == (undefined4 *)0x0) {
    local_200 = (undefined4 *)0x0;
  }
  else {
    puStack_214 = (uint *)0xa;
    puStack_218 = (uint *)0xe0a0bc;
    local_1d4 = 0xf;
    local_1d8 = (int *)0x0;
    local_1e8 = local_1e8 & 0xffffff00;
    puStack_21c = (uint *)0x676fa5;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,2);
    local_1f8 = 1;
    puStack_214 = (uint *)0x676fbe;
    puStack_1fc = (undefined4 *)(**(code **)(*in_ECX + 0x3c))();
    puStack_214 = (uint *)0x676fcb;
    piVar4 = (int *)(**(code **)(*in_ECX + 0x34))();
    local_200[1] = 0;
    local_200[2] = 0;
    local_200[3] = 0;
    *(undefined1 *)(local_200 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(local_200 + 5) = 0;
    *(undefined1 *)(local_200 + 6) = 0;
    local_200[7] = &PTR_FUN_00e39158;
    local_c = 6;
    puStack_214 = puStack_1fc;
    *local_200 = &PTR_FUN_00e392f0;
    local_200[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(local_200 + 9) = 0;
    puStack_218 = &local_1e8;
    puStack_21c = (uint *)0x677020;
    uVar5 = (**(code **)(*piVar4 + 0x2c))();
    local_200[8] = uVar5;
  }
  local_c = 0xffffffff;
  if ((local_1f8 & 1) != 0) {
    local_1f8 = local_1f8 & 0xfffffffe;
    if (0xf < local_1d4) {
      puStack_214 = (uint *)local_1e8;
                    /* WARNING: Subroutine does not return */
      puStack_218 = (uint *)&UNK_00677055;
      FUN_00aae91b();
    }
    local_1d4 = 0xf;
    local_1d8 = (int *)0x0;
    local_1e8 = local_1e8 & 0xffffff00;
  }
  puStack_214 = (uint *)0x4;
  puStack_218 = (uint *)&DAT_00dede68;
  uStack_13c = 0xf;
  uStack_140 = 0;
  uStack_150 = uStack_150 & 0xffffff00;
  puStack_21c = (uint *)0x677094;
  FUN_00409350();
  local_c = 8;
  puStack_214 = &uStack_150;
  puStack_218 = (uint *)0x6770b5;
  piVar4 = (int *)(**(code **)(*(int *)local_200[8] + 0x3c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_140) {
    puStack_218 = (uint *)uStack_154;
                    /* WARNING: Subroutine does not return */
    puStack_21c = (uint *)&UNK_006770d9;
    FUN_00aae91b();
  }
  uStack_140 = 0xf;
  uStack_144 = 0;
  uStack_154 = uStack_154 & 0xffffff00;
  puStack_218 = (uint *)0x6770fe;
  local_200 = (undefined4 *)(**(code **)(*in_ECX + 0x40))();
  puStack_218 = (uint *)(piVar4 + 0x18);
  puStack_21c = (uint *)0x677110;
  puStack_218 = (uint *)FUN_00973bd0();
  if (puStack_218 == (uint *)0x0) {
    puStack_218 = (uint *)(piVar4 + 0x18);
    puStack_21c = (uint *)0x677126;
    puStack_218 = (uint *)FUN_00973bd0();
  }
  auStack_1a4[2] = 0xf;
  auStack_1a4[1] = 0;
  local_1b0 = local_1b0 & 0xffffff00;
  puStack_21c = &local_1b0;
  puStack_220 = auStack_d4;
  puStack_10 = (undefined1 *)0x9;
  puStack_224 = (undefined4 *)0x677154;
  FUN_009f4bc0();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xb);
  if (0xf < auStack_1a4[2]) {
    puStack_218 = (uint *)local_1b0;
                    /* WARNING: Subroutine does not return */
    puStack_21c = (uint *)&UNK_0067716d;
    FUN_00aae91b();
  }
  puStack_218 = (uint *)&stack0xfffffdf8;
  auStack_1a4[2] = 0xf;
  auStack_1a4[1] = 0;
  local_1b0 = local_1b0 & 0xffffff00;
  puStack_21c = (uint *)0x677191;
  psVar6 = (short *)(**(code **)(*piVar4 + 0xbc))();
  sStack_90 = *psVar6 + -10;
  uStack_8e = 2000;
  puStack_21c = (uint *)&iStack_174;
  puStack_220 = (undefined1 *)0x6771be;
  uVar5 = (**(code **)(*param_1 + 0x20))();
  puStack_220 = (undefined1 *)0x0;
  puStack_224 = (undefined4 *)&DAT_00ded94d;
  uStack_18 = 0xc;
  puStack_228 = (uint *)0x6771da;
  FUN_00409350();
  uVar18 = 0;
  uStack_a4 = 0;
  uStack_27 = 1;
  puStack_224 = (undefined4 *)0x677205;
  puStack_220 = (undefined1 *)uVar5;
  (**(code **)(iStack_dc + 0x54))();
  uStack_1c = 0xb;
  if (0xf < uStack_168) {
    puStack_224 = (undefined4 *)uStack_17c;
                    /* WARNING: Subroutine does not return */
    puStack_228 = (uint *)&UNK_00677224;
    FUN_00aae91b();
  }
  puStack_224 = (undefined4 *)auStack_fc;
  puStack_228 = (uint *)0x67723b;
  FUN_009f6090();
  puStack_224 = (undefined4 *)0xa;
  puStack_228 = &uStack_144;
  uStack_1c = 0xd;
  ppuStack_22c = (undefined4 **)0x677259;
  FUN_00989510();
  uStack_1c = 0xe;
  puStack_224 = (undefined4 *)0x1;
  puStack_228 = (uint *)0x67726d;
  (**(code **)*unaff_EDI)();
  local_204 = uStack_148;
  do {
    if ((local_204 < uStack_148) || (uStack_144 <= local_204)) {
      puStack_1fc = (undefined4 *)0x0;
      local_1f8 = 0;
      _uStack_1f4 = 0;
      uStack_1f0 = uStack_1f0 & 0xffffff00;
      uStack_20._0_1_ = 0x2a;
      puStack_228 = (uint *)0x4;
      ppuStack_22c = (undefined4 **)&DAT_00df22f0;
      auStack_1a4[5] = 0xf;
      auStack_1a4[4] = 0;
      auStack_1a4[0] = auStack_1a4[0] & 0xffffff00;
      pcStack_230 = (char *)0x677a93;
      FUN_00409350();
      uStack_20 = CONCAT31(uStack_20._1_3_,0x2b);
      puStack_228 = &uStack_180;
      ppuStack_22c = (undefined4 **)0x677aad;
      puVar10 = (undefined1 *)(**(code **)(*param_1 + 0x20))();
      ppuStack_22c = (undefined4 **)0xffffffff;
      uStack_24._0_1_ = 0x2c;
      pcStack_230 = (char *)0x0;
      puStack_234 = &uStack_1a8;
      uStack_128 = 0xf;
      uStack_12c = 0;
      uStack_13c = uStack_13c & 0xffffff00;
      puStack_238 = (uint *)0x677ae7;
      FUN_00408ed0();
      ppuStack_22c = (undefined4 **)0xffffffff;
      uStack_24._0_1_ = 0x2d;
      pcStack_230 = (char *)0x0;
      uStack_10c = 0xf;
      uStack_110 = 0;
      auStack_120[0] = 0;
      puStack_238 = (uint *)0x677b18;
      puStack_234 = (uint *)puVar10;
      FUN_00408ed0();
      ppuStack_22c = (undefined4 **)0x44;
      uStack_24._0_1_ = 0x2e;
      pcStack_230 = (char *)0x677b27;
      puVar11 = (undefined4 *)FUN_00aae9af();
      uStack_24._0_1_ = 0x2f;
      uVar2 = (undefined1)uStack_24;
      uStack_24._0_1_ = 0x2f;
      puStack_1c8 = puVar11;
      if (puVar11 == (undefined4 *)0x0) {
        local_200 = (undefined4 *)0x0;
        uStack_24._0_1_ = uVar2;
      }
      else {
        ppuStack_22c = (undefined4 **)0xffffffff;
        pcStack_230 = (char *)0x0;
        puStack_234 = &uStack_13c;
        puVar11[5] = 0xf;
        puVar11[4] = 0;
        *(undefined1 *)puVar11 = 0;
        puStack_238 = (uint *)0x677b5a;
        FUN_00408ed0();
        ppuStack_22c = (undefined4 **)0xffffffff;
        uStack_24._0_1_ = 0x30;
        pcStack_230 = (char *)0x0;
        puStack_234 = (uint *)auStack_120;
        puVar11[0xc] = 0xf;
        puVar11[0xb] = 0;
        *(undefined1 *)(puVar11 + 7) = 0;
        puStack_238 = (uint *)0x677b81;
        FUN_00408ed0();
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        *(undefined1 *)(puVar11 + 0x10) = 0;
        local_200 = puVar11;
      }
      local_1f8 = 1;
      ppuStack_22c = (undefined4 **)0x677baa;
      puStack_1fc = local_200;
      FUN_00a39a80();
      if (0xf < uStack_170) {
        ppuStack_22c = (undefined4 **)uStack_184;
                    /* WARNING: Subroutine does not return */
        pcStack_230 = &UNK_00677bc1;
        FUN_00aae91b();
      }
      uStack_24._0_1_ = 0x2a;
      uStack_170 = 0xf;
      iStack_174 = 0;
      uStack_184 = uStack_184 & 0xffffff00;
      if (0xf < auStack_1a4[4]) {
        ppuStack_22c = (undefined4 **)uStack_1a8;
                    /* WARNING: Subroutine does not return */
        pcStack_230 = &UNK_00677bfc;
        FUN_00aae91b();
      }
      ppuStack_22c = (undefined4 **)0x0;
      pcStack_230 = "";
      uStack_1d0 = 0xf;
      local_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      puStack_234 = (uint *)0x677c20;
      FUN_00409350();
      uStack_24._0_1_ = 0x31;
      ppuStack_22c = (undefined4 **)0xb;
      pcStack_230 = "CHATMESSAGE";
      local_1b0 = 0xf;
      uStack_1b4 = 0;
      uStack_1c4 = uStack_1c4 & 0xffffff00;
      puStack_234 = (uint *)0x677c4b;
      FUN_00409350();
      uStack_24._0_1_ = 0x32;
      uVar2 = (undefined1)uStack_24;
      uStack_24._0_1_ = 0x32;
      ppuStack_22c = (undefined4 **)0x0;
      pcStack_230 = (char *)0x0;
      puStack_1c8 = (undefined4 *)auStack_2b0;
      puStack_21c = (uint *)auStack_2b0;
      puStack_214 = (uint *)&iStack_2b8;
      iStack_2b8 = 0;
      uStack_2b4 = 0;
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x15] * 4);
      auStack_1a4[6] = *(undefined4 *)(iVar9 + 0x1c);
      uStack_188 = *(undefined4 *)(iVar9 + 0x20);
      uVar18 = 0x2d2d2d;
      puVar7 = (uint *)auStack_2b0;
      puVar1 = (uint *)&iStack_2b8;
      puVar11 = (undefined4 *)auStack_2b0;
      if (DAT_01262ef4 == 0) {
        puStack_214 = (uint *)FUN_00aae9af(0x44);
        uStack_24._0_1_ = 0x33;
        if (puStack_214 == (uint *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_006a4e30();
        }
        uStack_24._0_1_ = 0x32;
        FUN_006a59b0(uVar5);
        puVar7 = puStack_21c;
        puVar1 = puStack_214;
        puVar11 = puStack_1c8;
        uVar2 = (undefined1)uStack_24;
      }
      uStack_24._0_1_ = uVar2;
      puStack_1c8 = puVar11;
      puStack_214 = puVar1;
      puStack_21c = puVar7;
      uVar17 = 0;
      uVar16 = 0;
      puVar7 = &local_1e4;
      uVar15 = 0;
      ppuVar14 = &local_200;
      uVar8 = auStack_1a4[6];
      uVar5 = uStack_188;
      uVar12 = FUN_006a55b0(ppuVar14,0,puVar7,0,auStack_1a4[6],uStack_188,0x2d2d2d,0);
      FUN_006a7ed0(puStack_1c8,uVar12,ppuVar14,uVar15,puVar7,uVar16,uVar8,uVar5,uVar18,uVar17);
      uStack_24._0_1_ = 0x34;
      if (DAT_01262ef4 == 0) {
        uStack_2b4 = 0x44;
        iStack_2b8 = 0x677d4d;
        puStack_1c8 = (undefined4 *)FUN_00aae9af();
        uStack_24._0_1_ = 0x35;
        if (puStack_1c8 == (undefined4 *)0x0) {
          uStack_2b4 = 0;
        }
        else {
          uStack_2b4 = 0x677d6a;
          uStack_2b4 = FUN_006a4e30();
        }
        uStack_24._0_1_ = 0x34;
        iStack_2b8 = 0x677d7c;
        FUN_006a59b0();
      }
      iStack_2b8 = DAT_01262ef4;
      uStack_24._0_1_ = 0x32;
      FUN_004933c0();
      if (local_1b0 < 0x10) {
        uStack_24 = CONCAT31(uStack_24._1_3_,0x2a);
        local_1b0 = 0xf;
        uStack_1b4 = 0;
        uStack_1c4 = uStack_1c4 & 0xffffff00;
        if (0xf < uStack_1d0) {
          ppuStack_22c = (undefined4 **)local_1e4;
                    /* WARNING: Subroutine does not return */
          pcStack_230 = &UNK_00677dce;
          FUN_00aae91b();
        }
        uStack_1d0 = 0xf;
        local_1d4 = 0;
        local_1e4 = local_1e4 & 0xffffff00;
        ppuStack_22c = (undefined4 **)0x677dea;
        fVar13 = (float10)(**(code **)(*(int *)in_ECX[0x65e] + 0x14))();
        *(double *)(in_ECX + 0x38) = (double)fVar13;
        ppuStack_22c = (undefined4 **)0x677dfd;
        (**(code **)(*(int *)in_ECX[0x58e] + 0x78))();
        ppuStack_22c = (undefined4 **)0x677e13;
        cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x1c))();
        if (cVar3 == '\0') {
          ppuStack_22c = (undefined4 **)0x677e28;
          (**(code **)(*(int *)(in_ECX[0x58e] + 4) + 0x6c))();
        }
        ppuStack_22c = &local_200;
        pcStack_230 = (char *)0x677e32;
        FUN_0042b9f0();
        if (uStack_14c == 0) {
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          if (uStack_f0 < 0x10) {
            uStack_f0 = 0xf;
            uStack_f4 = 0;
            uStack_104 = uStack_104 & 0xffffff00;
            uStack_24 = 0xffffffff;
            ppuStack_22c = (undefined4 **)0x677eb4;
            FUN_009f4d20();
            ExceptionList = local_14;
            return;
          }
          ppuStack_22c = (undefined4 **)uStack_104;
                    /* WARNING: Subroutine does not return */
          pcStack_230 = &UNK_00677e85;
          FUN_00aae91b();
        }
        ppuStack_22c = (undefined4 **)0x677e49;
        FUN_00413860();
        ppuStack_22c = (undefined4 **)uStack_14c;
                    /* WARNING: Subroutine does not return */
        pcStack_230 = &UNK_00677e56;
        FUN_00aae91b();
      }
      ppuStack_22c = (undefined4 **)uStack_1c4;
                    /* WARNING: Subroutine does not return */
      pcStack_230 = &UNK_00677da1;
      FUN_00aae91b();
    }
    puStack_228 = (uint *)0x28;
    if (local_204 == uStack_148) {
      ppuStack_22c = (undefined4 **)0x6772a8;
      puVar7 = (uint *)FUN_00aae9af();
      uStack_20._0_1_ = 0xf;
      puStack_218 = puVar7;
      if (puVar7 == (uint *)0x0) {
        puStack_214 = (uint *)0x0;
      }
      else {
        puStack_228 = (uint *)0xa;
        ppuStack_22c = (undefined4 **)0xe0a0bc;
        uStack_150 = 0xf;
        uStack_154 = 0;
        auStack_164[0] = auStack_164[0] & 0xffffff00;
        pcStack_230 = (char *)0x6772ed;
        FUN_00409350();
        uStack_20 = CONCAT31(uStack_20._1_3_,0x10);
        unaff_ESI = unaff_ESI | 2;
        puStack_228 = (uint *)0x677303;
        uVar5 = (**(code **)(*in_ECX + 0x3c))();
        puStack_228 = (uint *)0x677310;
        piVar4 = (int *)(**(code **)(*in_ECX + 0x34))();
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined1 *)(puVar7 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar7 + 5) = 0;
        *(undefined1 *)(puVar7 + 6) = 0;
        puVar7[7] = (uint)&PTR_FUN_00e39158;
        uStack_20 = 0x14;
        *puVar7 = (uint)&PTR_FUN_00e392f0;
        puVar7[7] = (uint)&PTR_FUN_00e39320;
        *(undefined1 *)(puVar7 + 9) = 0;
        ppuStack_22c = (undefined4 **)auStack_164;
        pcStack_230 = (char *)0x677368;
        puStack_228 = (uint *)uVar5;
        uVar8 = (**(code **)(*piVar4 + 0x2c))();
        puVar7[8] = uVar8;
        puStack_214 = puVar7;
      }
      puVar7 = puStack_214;
      uStack_20 = 0xe;
      if ((unaff_ESI & 2) != 0) {
        if (0xf < uStack_150) {
          puStack_228 = (uint *)auStack_164[0];
                    /* WARNING: Subroutine does not return */
          ppuStack_22c = (undefined4 **)&UNK_006773ab;
          FUN_00aae91b();
        }
        uStack_150 = 0xf;
        uStack_154 = 0;
        auStack_164[0] = auStack_164[0] & 0xffffff00;
      }
      puStack_228 = (uint *)0x4;
      ppuStack_22c = (undefined4 **)&DAT_00dede68;
      uStack_1cc = 0xf;
      uStack_1d0 = 0;
      local_1e0 = local_1e0 & 0xffffff00;
      pcStack_230 = (char *)0x6773e7;
      FUN_00409350();
      uStack_20 = CONCAT31(uStack_20._1_3_,0x16);
      puStack_228 = &local_1e0;
      ppuStack_22c = (undefined4 **)0x677402;
      (**(code **)(*(int *)puStack_214[8] + 0x3c))();
      ppuStack_22c = (undefined4 **)0xffffffff;
      pcStack_230 = (char *)0x0;
      puStack_238 = (uint *)0x677417;
      puStack_234 = (uint *)uVar18;
      FUN_00408ed0();
      ppuStack_22c = (undefined4 **)0x0;
      puStack_234 = (uint *)0x677428;
      pcStack_230 = (char *)uVar18;
      FUN_00a5ecc0();
      uStack_24._0_1_ = 0xe;
      if (0xf < uStack_1d0) {
        ppuStack_22c = (undefined4 **)local_1e4;
                    /* WARNING: Subroutine does not return */
        pcStack_230 = &UNK_00677441;
        FUN_00aae91b();
      }
      ppuStack_22c = (undefined4 **)0x6;
      pcStack_230 = "shield";
      uStack_1d0 = 0xf;
      local_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      puStack_234 = (uint *)0x677464;
      FUN_00409350();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x17);
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x15] * 4);
      auStack_1a4[6] = *(undefined4 *)(iVar9 + 0x1c);
      uStack_188 = *(undefined4 *)(iVar9 + 0x20);
      ppuStack_22c = (undefined4 **)&local_1e4;
      pcStack_230 = (char *)0x6774a5;
      iVar9 = (**(code **)(*(int *)puStack_218[8] + 0x44))();
      pcStack_230 = (char *)auStack_1a4[6];
      puStack_234 = (uint *)0x6774bf;
      (**(code **)(**(int **)(iVar9 + 0x94) + 0x14c))();
      puStack_224 = (undefined4 *)(**(int **)(iVar9 + 0x94) + 0x150);
      puStack_234 = (uint *)0x6774e9;
      puStack_234 = (uint *)FUN_0052fc10();
      puStack_238 = (uint *)0x6774f8;
      (*(code *)*puStack_224)();
      uStack_30 = 0xe;
      if (0xf < local_1dc) {
        puStack_238 = (uint *)uStack_1f0;
                    /* WARNING: Subroutine does not return */
        uStack_23c = &UNK_00677511;
        FUN_00aae91b();
      }
      puStack_238 = (uint *)0xb;
      uStack_23c = "text_shadow";
      auStack_1a4[1] = 0xf;
      auStack_1a4[0] = 0;
      uStack_1b4 = uStack_1b4 & 0xffffff00;
      puStack_240 = (undefined4 *)0x677541;
      FUN_00409350();
      uStack_30 = 0x18;
      puStack_228 = (uint *)puStack_224[8];
      puStack_238 = (uint *)0x2;
      uStack_23c = &DAT_00df8514;
      local_1dc = 0xf;
      local_1e0 = 0;
      uStack_1f0 = uStack_1f0 & 0xffffff00;
      puStack_240 = (undefined4 *)0x677570;
      FUN_00409350();
      uStack_30 = 0x19;
      puStack_238 = (uint *)0x2;
      uStack_23c = &DAT_00e05104;
      local_1f8 = 0xf;
      puStack_1fc = (undefined4 *)0x0;
      unaff_ESI = 0;
      puStack_240 = (undefined4 *)0x677594;
      FUN_00409350();
      uStack_30 = 0x1a;
      puStack_238 = puStack_214;
      uStack_23c = (char *)0x6775b1;
      FUN_00988f20();
      puStack_238 = &uStack_1f0;
      uStack_30 = 0x1b;
      uStack_23c = (char *)0x6775cc;
      uVar5 = FUN_00988f20();
      uStack_30 = 0x1c;
      puStack_238 = &uStack_1b4;
      uStack_23c = (char *)0x6775e9;
      ppuStack_22c = (undefined4 **)(**(code **)(*puStack_228 + 0x3c))();
      uStack_23c = (char *)0xffffffff;
      puStack_240 = (undefined4 *)0x0;
      uStack_248 = 0x6775fc;
      uStack_244 = uVar5;
      FUN_00408ed0();
      uStack_23c = (char *)0x0;
      uStack_244 = 0x67760d;
      puStack_240 = (undefined4 *)uVar5;
      FUN_00a5ecc0();
      if (0xf < uStack_138) {
        uStack_23c = (char *)uStack_14c;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_00677624;
        FUN_00aae91b();
      }
      uStack_138 = 0xf;
      uStack_13c = 0;
      uStack_14c = uStack_14c & 0xffffff00;
      if (0xf < uStack_180) {
        uStack_23c = (char *)auStack_1a4[4];
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_00677658;
        FUN_00aae91b();
      }
      uStack_180 = 0xf;
      uStack_184 = 0;
      auStack_1a4[4] = auStack_1a4[4] & 0xffffff00;
      if (0xf < puStack_1fc) {
        uStack_23c = (char *)puVar7;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_00677681;
        FUN_00aae91b();
      }
      puStack_1fc = (undefined4 *)0xf;
      local_200 = (undefined4 *)0x0;
      if (0xf < local_1e0) {
        uStack_23c._0_3_ = uStack_1f4;
        uStack_23c._3_1_ = local_1f1;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_006776a1;
        FUN_00aae91b();
      }
      uStack_1f4 = uStack_1f4 & 0xffff00;
      if (0xf < auStack_1a4[0]) {
        uStack_23c = (char *)uStack_1b8;
LAB_00677a24:
        uStack_34 = 0xe;
        uStack_138 = 0xf;
        uStack_13c = 0;
        uStack_180 = 0xf;
        uStack_184 = 0;
        local_1e0 = 0xf;
        local_1e4 = 0;
        puStack_1fc = (undefined4 *)0xf;
        local_200 = (undefined4 *)0x0;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_00677a29;
        FUN_00aae91b();
      }
    }
    else {
      ppuStack_22c = (undefined4 **)0x6776d8;
      puVar7 = (uint *)FUN_00aae9af();
      uStack_20._0_1_ = 0x1d;
      if (puVar7 == (uint *)0x0) {
        puStack_214 = (uint *)0x0;
      }
      else {
        puStack_228 = (uint *)0x10;
        ppuStack_22c = (undefined4 **)0xe0a0d4;
        uStack_1ac = 0xf;
        local_1b0 = 0;
        auStack_1c0[0] = auStack_1c0[0] & 0xffffff00;
        pcStack_230 = (char *)0x677714;
        FUN_00409350();
        uStack_20 = CONCAT31(uStack_20._1_3_,0x1e);
        unaff_ESI = unaff_ESI | 4;
        puStack_228 = (uint *)0x67772a;
        puStack_218 = (uint *)(**(code **)(*in_ECX + 0x3c))();
        puStack_228 = (uint *)0x677737;
        piVar4 = (int *)(**(code **)(*in_ECX + 0x34))();
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined1 *)(puVar7 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(puVar7 + 5) = 0;
        *(undefined1 *)(puVar7 + 6) = 0;
        puVar7[7] = (uint)&PTR_FUN_00e39158;
        uStack_20 = 0x22;
        puStack_228 = puStack_218;
        *puVar7 = (uint)&PTR_FUN_00e392f0;
        puVar7[7] = (uint)&PTR_FUN_00e39320;
        *(undefined1 *)(puVar7 + 9) = 0;
        ppuStack_22c = (undefined4 **)auStack_1c0;
        pcStack_230 = (char *)0x67778c;
        uVar8 = (**(code **)(*piVar4 + 0x2c))();
        puVar7[8] = uVar8;
        puStack_214 = puVar7;
      }
      puVar7 = puStack_214;
      uStack_20 = 0xe;
      if ((unaff_ESI & 4) != 0) {
        unaff_ESI = unaff_ESI & 0xfffffffb;
        if (0xf < uStack_1ac) {
          puStack_228 = (uint *)auStack_1c0[0];
                    /* WARNING: Subroutine does not return */
          ppuStack_22c = (undefined4 **)&UNK_006777c9;
          FUN_00aae91b();
        }
        uStack_1ac = 0xf;
        local_1b0 = 0;
        auStack_1c0[0] = auStack_1c0[0] & 0xffffff00;
      }
      puStack_228 = (uint *)0x4;
      ppuStack_22c = (undefined4 **)&DAT_00dede68;
      auStack_1a4[5] = 0xf;
      auStack_1a4[4] = 0;
      auStack_1a4[0] = auStack_1a4[0] & 0xffffff00;
      pcStack_230 = (char *)0x677808;
      FUN_00409350();
      uStack_20 = CONCAT31(uStack_20._1_3_,0x24);
      puStack_228 = auStack_1a4;
      ppuStack_22c = (undefined4 **)0x677826;
      (**(code **)(*(int *)puStack_214[8] + 0x3c))();
      ppuStack_22c = (undefined4 **)0xffffffff;
      pcStack_230 = (char *)0x0;
      puStack_238 = (uint *)0x67783b;
      puStack_234 = (uint *)uVar18;
      FUN_00408ed0();
      ppuStack_22c = (undefined4 **)0x0;
      puStack_234 = (uint *)0x67784c;
      pcStack_230 = (char *)uVar18;
      FUN_00a5ecc0();
      uStack_24._0_1_ = 0xe;
      if (0xf < auStack_1a4[4]) {
        ppuStack_22c = (undefined4 **)uStack_1a8;
                    /* WARNING: Subroutine does not return */
        pcStack_230 = &UNK_0067786b;
        FUN_00aae91b();
      }
      ppuStack_22c = (undefined4 **)0xb;
      pcStack_230 = "text_shadow";
      auStack_1a4[4] = 0xf;
      auStack_1a4[3] = 0;
      uStack_1a8 = uStack_1a8 & 0xffffff00;
      puStack_234 = (uint *)0x67789b;
      FUN_00409350();
      uStack_24._0_1_ = 0x25;
      puStack_21c = (uint *)puStack_218[8];
      ppuStack_22c = (undefined4 **)0x2;
      pcStack_230 = &DAT_00df8514;
      uStack_1ec = 0xf;
      uStack_1f0 = 0;
      local_200 = (undefined4 *)((uint)local_200 & 0xffffff00);
      puStack_234 = (uint *)0x6778ca;
      FUN_00409350();
      uStack_24._0_1_ = 0x26;
      ppuStack_22c = (undefined4 **)0x2;
      pcStack_230 = &DAT_00e05104;
      uStack_1d0 = 0xf;
      local_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      puStack_234 = (uint *)0x6778ee;
      FUN_00409350();
      uStack_24._0_1_ = 0x27;
      pcStack_230 = (char *)0x67790b;
      ppuStack_22c = (undefined4 **)uVar18;
      FUN_00988f20();
      ppuStack_22c = &local_200;
      uStack_24._0_1_ = 0x28;
      pcStack_230 = (char *)0x677926;
      uVar5 = FUN_00988f20();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x29);
      ppuStack_22c = (undefined4 **)&uStack_1a8;
      pcStack_230 = (char *)0x677943;
      ppuStack_22c = (undefined4 **)(**(code **)(*puStack_21c + 0x3c))();
      uStack_23c = (char *)0xffffffff;
      puStack_240 = (undefined4 *)0x0;
      uStack_248 = 0x677956;
      uStack_244 = uVar5;
      FUN_00408ed0();
      uStack_23c = (char *)0x0;
      uStack_244 = 0x677967;
      puStack_240 = (undefined4 *)uVar5;
      FUN_00a5ecc0();
      if (0xf < uStack_180) {
        uStack_23c = (char *)auStack_1a4[4];
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_0067797e;
        FUN_00aae91b();
      }
      uStack_180 = 0xf;
      uStack_184 = 0;
      auStack_1a4[4] = auStack_1a4[4] & 0xffffff00;
      if (0xf < uStack_138) {
        uStack_23c = (char *)uStack_14c;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_006779b2;
        FUN_00aae91b();
      }
      uStack_138 = 0xf;
      uStack_13c = 0;
      uStack_14c = uStack_14c & 0xffffff00;
      if (0xf < local_1e0) {
        uStack_23c._0_3_ = uStack_1f4;
        uStack_23c._3_1_ = local_1f1;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_006779db;
        FUN_00aae91b();
      }
      local_1e0 = 0xf;
      local_1e4 = 0;
      uStack_1f4 = uStack_1f4 & 0xffff00;
      if (0xf < puStack_1fc) {
        uStack_23c = (char *)puVar7;
                    /* WARNING: Subroutine does not return */
        puStack_240 = (undefined4 *)&UNK_006779fb;
        FUN_00aae91b();
      }
      if (0xf < auStack_1a4[0]) {
        uStack_23c = (char *)uStack_1b8;
        goto LAB_00677a24;
      }
    }
    uStack_34 = 0xe;
    uStack_138 = 0xf;
    uStack_13c = 0;
    uStack_180 = 0xf;
    uStack_184 = 0;
    local_1e0 = 0xf;
    local_1e4 = 0;
    puStack_1fc = (undefined4 *)0xf;
    local_200 = (undefined4 *)0x0;
    uStack_23c = (char *)0x1;
    puStack_240 = puStack_224;
    uStack_244 = 0x677a3e;
    (**(code **)(*local_1d8 + 0x10))();
    local_204 = local_204 + 0x1c;
  } while( true );
}

