// FUN_007680b0 @ 007680b0 body=[[007680b0, 00768152] [00768156, 007682fc] [00768300, 0076832c] [00768330, 00768362] [00768366, 00768475] [00768479, 007684ba] [007684be, 007684de] [007684e2, 00768505] [0076851e, 007685f5] [007685f9, 0076863a] [0076863e, 00768659] [0076865d, 00768688] [0076868c, 007687ec] [007687f0, 00768828]]


void FUN_007680b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint in_ECX;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined1 auStack_21c [20];
  undefined4 uStack_208;
  char *pcStack_204;
  int iStack_200;
  undefined1 auStack_1fc [16];
  undefined4 uStack_1ec;
  char *pcStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [12];
  undefined4 uStack_1d4;
  undefined1 *puStack_1d0;
  uint *puStack_1cc;
  uint *puStack_1c8;
  undefined4 uStack_1c4;
  uint *puStack_1c0;
  undefined4 uStack_1bc;
  uint *puStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined **ppuStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  int *piStack_188;
  uint *puStack_184;
  uint *puStack_180;
  undefined8 uStack_17c;
  uint *puStack_174;
  int iStack_164;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined1 auStack_138 [4];
  undefined4 uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  int iStack_10c;
  undefined1 *puStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f4;
  uint uStack_f0;
  uint auStack_e8 [4];
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined1 *puStack_cc;
  undefined1 auStack_c4 [152];
  void *pvStack_2c;
  undefined1 uStack_24;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6ced7;
  pvStack_14 = ExceptionList;
  local_160 = 0;
  puStack_174 = (uint *)0x7680ea;
  ExceptionList = &pvStack_14;
  local_158 = in_ECX;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  puStack_174 = (uint *)0x7680f4;
  cVar1 = (**(code **)(**(int **)(iVar2 + 0x38) + 0x38))();
  if (cVar1 == '\0') {
    puStack_174 = (uint *)0x5;
    uStack_140 = 0xf;
    uStack_144 = 0;
    uStack_154 = uStack_154 & 0xffffff00;
    uStack_17c = 0xe09e300076811c;
    FUN_00409350();
    uStack_c = 0;
    puStack_174 = &uStack_154;
    uStack_17c = CONCAT44(0x768135,(int)uStack_17c);
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x7c))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_144) {
      uStack_17c = CONCAT44(local_158,&UNK_00768153);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_144 = 0xf;
    uStack_148 = 0;
    local_158 = local_158 & 0xffffff00;
    uStack_17c = CONCAT44(0x76816f,(int)uStack_17c);
    (**(code **)(*piVar3 + 0x5c))();
    uStack_17c._4_4_ = 0;
    uStack_17c._0_4_ = 0x76817a;
    (**(code **)(**(int **)(in_ECX + 4) + 0x48))();
    uStack_17c._0_4_ = 0x260;
    puStack_180 = (uint *)0x768184;
    iStack_164 = FUN_00aae9af();
    pvStack_14 = (void *)0x1;
    if (iStack_164 == 0) {
      iStack_164 = 0;
    }
    else {
      uStack_17c._0_4_ = 0xf;
      puStack_180 = (uint *)0xe146d0;
      uStack_12c = 0xf;
      uStack_130 = 0;
      uStack_140 = uStack_140 & 0xffffff00;
      puStack_184 = (uint *)0x7681be;
      FUN_00409350();
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,2);
      uStack_17c._0_4_ = 1;
      puStack_180 = (uint *)&DAT_00ded950;
      uStack_110 = 0xf;
      uStack_114 = 0;
      uStack_124 = uStack_124 & 0xffffff00;
      puStack_184 = (uint *)0x7681ea;
      FUN_00409350();
      pvStack_14 = (void *)0x3;
      uStack_17c._0_4_ = 0xc;
      puStack_180 = (uint *)0xe146c0;
      uStack_148 = 0xf;
      uStack_14c = 0;
      uStack_15c = uStack_15c & 0xffffff00;
      puStack_184 = (uint *)0x768216;
      FUN_00409350();
      pvStack_14 = (void *)0x4;
      uStack_17c._0_4_ = 1;
      puStack_180 = (uint *)0x76823a;
      (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
      puStack_108 = (undefined1 *)&ppuStack_1ac;
      uStack_1b0 = 0x76824e;
      FUN_00648c30();
      uStack_1b0 = 1;
      uStack_1b4 = 0;
      puStack_1b8 = (uint *)0x7;
      uStack_1bc = 0;
      puStack_1c0 = &uStack_140;
      uStack_1c4 = 0x666;
      puStack_1c8 = &uStack_124;
      puStack_1cc = &uStack_15c;
      puStack_1d0 = auStack_c4;
      uStack_1d4 = 0x768278;
      FUN_009f8180();
      puStack_108 = auStack_21c;
      pvStack_14 = (void *)0x5;
      unaff_EBX = 0xf;
      FUN_00648af0(auStack_21c);
      iStack_164 = FUN_009ae5f0(iStack_164);
      in_ECX = local_160;
    }
    if ((unaff_EBX & 8) != 0) {
      unaff_EBX = unaff_EBX & 0xfffffff7;
      uStack_17c._0_4_ = 0x7682dc;
      FUN_00648a60();
    }
    iVar2 = iStack_164;
    if ((unaff_EBX & 4) != 0) {
      unaff_EBX = unaff_EBX & 0xfffffffb;
      if (0xf < uStack_148) {
        uStack_17c = CONCAT44(uStack_17c._4_4_,uStack_15c);
                    /* WARNING: Subroutine does not return */
        puStack_180 = (uint *)&UNK_007682fd;
        FUN_00aae91b();
      }
      uStack_148 = 0xf;
      uStack_14c = 0;
      uStack_15c = uStack_15c & 0xffffff00;
    }
    if ((unaff_EBX & 2) != 0) {
      unaff_EBX = unaff_EBX & 0xfffffffd;
      if (0xf < uStack_110) {
        uStack_17c = CONCAT44(uStack_17c._4_4_,uStack_124);
                    /* WARNING: Subroutine does not return */
        puStack_180 = (uint *)&UNK_0076832d;
        FUN_00aae91b();
      }
      uStack_110 = 0xf;
      uStack_114 = 0;
      uStack_124 = uStack_124 & 0xffffff00;
    }
    pvStack_14 = (void *)0xffffffff;
    if ((unaff_EBX & 1) != 0) {
      if (0xf < uStack_12c) {
        uStack_17c = CONCAT44(uStack_17c._4_4_,uStack_140);
                    /* WARNING: Subroutine does not return */
        puStack_180 = (uint *)&UNK_00768363;
        FUN_00aae91b();
      }
      uStack_12c = 0xf;
      uStack_130 = 0;
      uStack_140 = uStack_140 & 0xffffff00;
    }
    uStack_17c._0_4_ = 0x768380;
    (**(code **)(**(int **)(iStack_164 + 0x38) + 0x2c))();
    uStack_17c._0_4_ = in_ECX + 0x374;
    *(undefined4 *)(iVar2 + 0x18) = 6;
    puStack_180 = (uint *)0x768393;
    FUN_00768940();
    uStack_17c = CONCAT44(uStack_17c._4_4_,iVar2);
    puStack_180 = (uint *)0x76839e;
    (**(code **)(**(int **)(in_ECX + 4) + 0x48))();
    puStack_180 = (uint *)0x9;
    puStack_184 = (uint *)0xe146e0;
    uStack_114 = 0xf;
    uStack_118 = 0;
    uStack_128 = uStack_128 & 0xffffff00;
    piStack_188 = (int *)0x7683bf;
    FUN_00409350();
    uStack_18 = 10;
    puStack_180 = (uint *)0x4;
    puStack_184 = (uint *)&DAT_00e145d0;
    uStack_130 = 0xf;
    uStack_134 = 0;
    uStack_144 = uStack_144 & 0xffffff00;
    piStack_188 = (int *)0x7683e6;
    FUN_00409350();
    uStack_18 = CONCAT31(uStack_18._1_3_,0xb);
    puStack_180 = &uStack_144;
    puStack_184 = (uint *)0x768402;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x34))();
    puStack_184 = &uStack_12c;
    piStack_188 = &iStack_164;
    uStack_190 = CONCAT44(0x768413,(undefined4)uStack_190);
    iVar2 = FUN_009a8ee0();
    uStack_1c = 0xc;
    puStack_184 = (uint *)0x768424;
    iVar4 = FUN_00475500();
    uStack_190 = *(undefined8 *)(iVar4 + 0x6c);
    piStack_188 = (int *)*(undefined8 *)(iVar4 + 0x74);
    puStack_184 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    uStack_194 = 0x76844c;
    piStack_188 = (int *)FUN_009a9880();
    uStack_1c = 0xd;
    puStack_184 = (uint *)0x0;
    uStack_190 = CONCAT44(0x768462,(undefined4)uStack_190);
    (**(code **)(*piVar3 + 0xcc))();
    if (0xf < uStack_fc) {
      uStack_190 = CONCAT44(uStack_110,&UNK_00768476);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_fc = 0xf;
    uStack_100 = 0;
    uStack_110 = uStack_110 & 0xffffff00;
    uStack_24 = 0xe;
    uStack_190 = CONCAT44(0x7684a0,(undefined4)uStack_190);
    FUN_009adb70();
    if (iVar2 != 0) {
      uStack_190 = CONCAT44(0x7684b1,(undefined4)uStack_190);
      FUN_009e6a80();
      uStack_190 = CONCAT44(iVar2,&UNK_007684bb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_164 = 0;
    local_160 = 0;
    if (0xf < uStack_13c) {
      uStack_190 = CONCAT44(uStack_150,&UNK_007684df);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_13c = 0xf;
    uStack_140 = 0;
    uStack_150 = uStack_150 & 0xffffff00;
    if (0xf < uStack_120) {
      uStack_190 = CONCAT44(uStack_134,&UNK_00768506);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    puStack_174 = (uint *)0x4;
    puStack_108 = (undefined1 *)0xf;
    iStack_10c = 0;
    uStack_11c = 0;
    uStack_17c = 0xe145d80076853f;
    FUN_00409350();
    uStack_c = 0xf;
    puStack_174 = (uint *)0x4;
    uStack_124 = 0xf;
    uStack_128 = 0;
    auStack_138[0] = 0;
    uStack_17c = 0xe145d000768562;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,0x10);
    puStack_174 = (uint *)auStack_138;
    uStack_17c = CONCAT44(0x76857e,(int)uStack_17c);
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x34))();
    uStack_17c = CONCAT44(&uStack_120,&local_158);
    puStack_180 = (uint *)0x76858f;
    local_160 = FUN_009a8ee0();
    puStack_10._0_1_ = 0x11;
    uStack_17c = CONCAT44(0x7685a0,(int)uStack_17c);
    iVar2 = FUN_00475500();
    puStack_184 = (uint *)*(undefined8 *)(iVar2 + 0x6c);
    puStack_180 = (uint *)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    uStack_17c = *(undefined8 *)(iVar2 + 0x74);
    piStack_188 = (int *)0x7685c8;
    uVar5 = FUN_009a9880();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x12);
    uStack_17c = (ulonglong)uVar5;
    puStack_180 = (uint *)0x7685de;
    (**(code **)(*piVar3 + 0xcc))();
    if (0xf < uStack_f0) {
      puStack_180 = (uint *)uStack_104;
                    /* WARNING: Subroutine does not return */
      puStack_184 = (uint *)&UNK_007685f6;
      FUN_00aae91b();
    }
    uStack_f0 = 0xf;
    uStack_f4 = 0;
    uStack_104 = uStack_104 & 0xffffff00;
    uStack_18 = CONCAT31(uStack_18._1_3_,0x13);
    puStack_180 = (uint *)0x768620;
    FUN_009adb70();
    if (uStack_15c != 0) {
      puStack_180 = (uint *)0x768631;
      FUN_009e6a80();
      puStack_180 = (uint *)uStack_15c;
                    /* WARNING: Subroutine does not return */
      puStack_184 = (uint *)&UNK_0076863b;
      FUN_00aae91b();
    }
    uStack_15c = 0;
    local_158 = 0;
    uStack_154 = 0;
    if (0xf < uStack_130) {
      puStack_180 = (uint *)uStack_144;
                    /* WARNING: Subroutine does not return */
      puStack_184 = (uint *)&UNK_0076865a;
      FUN_00aae91b();
    }
    uStack_18 = 0xffffffff;
    uStack_130 = 0xf;
    uStack_134 = 0;
    uStack_144 = uStack_144 & 0xffffff00;
    if (0xf < uStack_114) {
      puStack_180 = (uint *)uStack_128;
                    /* WARNING: Subroutine does not return */
      puStack_184 = (uint *)&UNK_00768689;
      FUN_00aae91b();
    }
    puStack_180 = (uint *)0x76869a;
    iVar2 = (**(code **)(**(int **)(iStack_164 + 4) + 0x44))();
    puStack_180 = (uint *)0x7686a4;
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x30))();
    puStack_180 = (uint *)0x260;
    puStack_184 = (uint *)0x7686ae;
    iVar2 = FUN_00aae9af();
    uStack_18 = 0x14;
    iStack_10c = iVar2;
    if (iVar2 == 0) {
      puStack_180 = (uint *)0x0;
    }
    else {
      puStack_180 = (uint *)0x0;
      puStack_184 = (uint *)&DAT_00ded94d;
      uStack_d4 = 0xf;
      uStack_d8 = 0;
      auStack_e8[0] = auStack_e8[0] & 0xffffff00;
      piStack_188 = (int *)0x7686f1;
      FUN_00409350();
      puStack_108 = (undefined1 *)&ppuStack_1ac;
      uStack_1a8 = 0x18d;
      ppuStack_1ac = CVersion::vftable;
      uStack_1a4 = 0;
      puStack_184 = (uint *)0xf;
      piStack_188 = (int *)0x0;
      unaff_ESI = 0x10;
      uStack_198 = 0;
      uStack_1b0 = 0xffffffff;
      uStack_1b4 = 0;
      puStack_1b8 = auStack_e8;
      uStack_18 = 0x16;
      uStack_1bc = 0x768743;
      FUN_00408ed0();
      uStack_19c = 0;
      uStack_1a0 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1b4 = 0;
      puStack_1b8 = (uint *)0x0;
      uStack_1bc = 0x20;
      puStack_1c0 = (uint *)0x29a;
      uStack_1c4 = 2;
      puStack_108 = auStack_1e0;
      uStack_18 = 0x17;
      uStack_1e4 = 8;
      puStack_1cc = (uint *)0xf;
      puStack_1d0 = (undefined1 *)0x0;
      pcStack_1e8 = "NoAdress";
      auStack_1e0[0] = 0;
      uStack_1ec = 0x768788;
      FUN_00409350();
      puStack_cc = auStack_1fc;
      uStack_18._0_1_ = 0x18;
      iStack_200 = 0xe;
      pcStack_1e8 = (char *)0xf;
      uStack_1ec = 0;
      pcStack_204 = "InitialSession";
      auStack_1fc[0] = 0;
      uStack_208 = 0x7687b0;
      FUN_00409350();
      uStack_18 = CONCAT31(uStack_18._1_3_,0x15);
      pcStack_204 = (char *)0x7687be;
      iStack_200 = iVar2;
      puStack_180 = (uint *)FUN_009aeb90();
    }
    uStack_18 = 0xffffffff;
    if ((unaff_ESI & 0x10) != 0) {
      if (0xf < uStack_d4) {
        puStack_180 = (uint *)auStack_e8[0];
                    /* WARNING: Subroutine does not return */
        puStack_184 = (uint *)&UNK_007687ed;
        FUN_00aae91b();
      }
      uStack_d4 = 0xf;
      uStack_d8 = 0;
      auStack_e8[0] = auStack_e8[0] & 0xffffff00;
    }
    puStack_184 = (uint *)0x768814;
    (**(code **)(**(int **)(iStack_164 + 4) + 0x48))();
  }
  ExceptionList = pvStack_2c;
  return;
}

