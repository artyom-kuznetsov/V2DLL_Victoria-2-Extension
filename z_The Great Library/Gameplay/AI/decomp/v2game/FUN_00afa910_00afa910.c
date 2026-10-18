// FUN_00afa910 @ 00afa910 body=[[00afa910, 00afb2b0]]


void FUN_00afa910(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auStack_1b4 [48];
  uint uStack_184;
  int iStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  int *local_164;
  undefined **ppuStack_160;
  int *local_15c;
  int iStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  float fStack_140;
  float local_13c;
  float fStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int local_128;
  undefined4 *local_124;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined1 uStack_e9;
  float fStack_e8;
  float fStack_e4;
  float local_e0 [2];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte bStack_98;
  char cStack_97;
  byte bStack_95;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b38933;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_1b4;
  ExceptionList = &local_4c;
  local_164 = (int *)*param_2;
  local_13c = (float)param_2[3];
  iVar9 = param_2[7];
  local_15c = param_1;
  local_124 = param_2;
  local_128 = iVar9;
  (**(code **)(*param_1 + 8))(local_e0,0x54,DAT_00ef259c ^ (uint)&stack0xfffffe40);
  uVar3 = FUN_00aee020();
  fStack_154 = fStack_e8;
  local_150 = fStack_e4;
  fStack_14c = local_e0[0];
  uStack_148 = 0x3f800000;
  fStack_140 = fStack_d8;
  local_13c = fStack_d4;
  fStack_138 = fStack_d0;
  uStack_134 = 0x3f800000;
  fStack_17c = fStack_c8;
  fStack_178 = fStack_c4;
  fStack_174 = fStack_c0;
  uStack_170 = 0x3f800000;
  uStack_104 = fStack_b8;
  uStack_100 = fStack_b4;
  uStack_fc = fStack_b0;
  uStack_f8 = 0x3f800000;
  uStack_184 = uVar3;
  if (iVar9 == 1) {
    FUN_00ad8ea0(&fStack_154,4);
    FUN_00ad8ea0(&fStack_140,4);
    FUN_00ad8ea0(&fStack_17c,4);
    FUN_00ad8ea0(&uStack_104,4);
    uVar1 = (undefined1)uStack_a8;
    uVar2 = uStack_a8._1_1_;
    uStack_a8._0_2_ = CONCAT11(uStack_a8._2_1_,uStack_a8._3_1_);
    uStack_a8 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_a8));
    uVar1 = (undefined1)uStack_a4;
    uVar2 = uStack_a4._1_1_;
    uStack_a4._0_2_ = CONCAT11(uStack_a4._2_1_,uStack_a4._3_1_);
    uStack_a4 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_a4));
    uVar1 = (undefined1)uStack_a0;
    uVar2 = uStack_a0._1_1_;
    uStack_a0._0_2_ = CONCAT11(uStack_a0._2_1_,uStack_a0._3_1_);
    uStack_a0 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_a0));
    uVar1 = (undefined1)uStack_9c;
    uVar2 = uStack_9c._1_1_;
    uStack_9c._0_2_ = CONCAT11(uStack_9c._2_1_,uStack_9c._3_1_);
    uStack_9c = (float)CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_9c));
  }
  if (*(char *)(iStack_158 + 0xc) != '\0') {
    FUN_00b15e80("- Material name = \'%s\'",uVar3);
    FUN_00b15e80("    + Ambient       : (%f, %f, %f)",(double)fStack_154,(double)local_150,
                 (double)fStack_14c);
    FUN_00b15e80("    + Diffuse       : (%f, %f, %f)",(double)fStack_140,(double)local_13c,
                 (double)fStack_138);
    FUN_00b15e80("    + Specular      : (%f, %f, %f)",(double)fStack_17c,(double)fStack_178,
                 (double)fStack_174);
    FUN_00b15e80("    + Emissive      : (%f, %f, %f)",(double)uStack_104,(double)uStack_100,
                 (double)uStack_fc);
    FUN_00b15e80();
    FUN_00b15e80();
    FUN_00b15e80();
    dVar12 = (double)uStack_9c;
    pcVar10 = "    + IOR           : %f";
    FUN_00b15e80();
    uVar11 = CONCAT44(pcVar10,(uint)bStack_98);
    pcVar10 = "    + Double sided  : %d";
    FUN_00b15e80();
    FUN_00b15e80("    + WireFrame     : %d",cStack_97,pcVar10,uVar11,dVar12);
    FUN_00b15e80("    + Num Layers    : %d",bStack_95);
  }
  iVar7 = 0;
  iStack_168 = (*(code *)PTR_FUN_00f01b08)(0x6c,0xc9,4,0,0,0xffffffff);
  local_4c = (void *)0x0;
  if (iStack_168 != 0) {
    FUN_00b10a30();
  }
  local_4c = (void *)0xffffffff;
  ppuStack_160 = &PTR_FUN_00e3fb28;
  local_15c = (int *)0x0;
  FUN_00ad3250();
  local_4c = (void *)0x1;
  if (local_15c != (int *)0x0) {
    iVar7 = (**(code **)(*local_15c + 0x10))();
  }
  *(float *)(iVar7 + 0x18) = fStack_154;
  *(float *)(iVar7 + 0x1c) = local_150;
  *(float *)(iVar7 + 0x20) = fStack_14c;
  *(undefined4 *)(iVar7 + 0x24) = uStack_148;
  *(float *)(iVar7 + 0x28) = fStack_140;
  *(float *)(iVar7 + 0x2c) = local_13c;
  *(float *)(iVar7 + 0x30) = fStack_138;
  *(undefined4 *)(iVar7 + 0x34) = uStack_134;
  *(float *)(iVar7 + 0x38) = fStack_17c;
  *(float *)(iVar7 + 0x3c) = fStack_178;
  *(float *)(iVar7 + 0x40) = fStack_174;
  *(undefined4 *)(iVar7 + 0x44) = uStack_170;
  *(float *)(iVar7 + 0x48) = uStack_104;
  *(float *)(iVar7 + 0x4c) = uStack_100;
  *(float *)(iVar7 + 0x50) = uStack_fc;
  *(undefined4 *)(iVar7 + 0x54) = uStack_f8;
  *(bool *)(iVar7 + 0x68) = bStack_98 != 0;
  *(float *)(iVar7 + 100) = uStack_9c;
  *(undefined4 *)(iVar7 + 0x60) = uStack_a0;
  *(undefined4 *)(iVar7 + 0x58) = uStack_a8;
  *(bool *)(iVar7 + 0x69) = cStack_97 != '\0';
  *(undefined4 *)(iVar7 + 0x5c) = uStack_a4;
  FUN_00ad8a20();
  if ((*(char *)(iStack_144 + 2) != '\0') && (*(uint *)(iVar7 + 0x10) < (uint)bStack_95)) {
    FUN_00b00440();
  }
  uStack_184 = 0;
  if (bStack_95 != 0) {
    do {
      (**(code **)(*param_1 + 8))(&uStack_104,0x1c);
      iStack_168 = FUN_00aee020();
      if (*(char *)(iStack_144 + 2) != '\0') {
        if (iVar9 == 1) {
          uStack_ec = CONCAT11((undefined1)uStack_ec,uStack_ec._1_1_);
          uVar1 = (undefined1)uStack_104;
          uVar2 = uStack_104._1_1_;
          uStack_104._0_2_ = CONCAT11(uStack_104._2_1_,uStack_104._3_1_);
          uStack_104 = (float)CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_104));
          uVar1 = (undefined1)uStack_f0;
          uVar2 = uStack_f0._1_1_;
          uStack_f0._0_2_ = CONCAT11(uStack_f0._2_1_,uStack_f0._3_1_);
          uStack_f0 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_f0));
          uVar1 = (undefined1)uStack_100;
          uVar2 = uStack_100._1_1_;
          uStack_100._0_2_ = CONCAT11(uStack_100._2_1_,uStack_100._3_1_);
          uStack_100 = (float)CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_100));
          uVar1 = (undefined1)uStack_fc;
          uVar2 = uStack_fc._1_1_;
          uStack_fc._0_2_ = CONCAT11(uStack_fc._2_1_,uStack_fc._3_1_);
          uStack_fc = (float)CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_fc));
          uVar1 = (undefined1)uStack_f8;
          uVar2 = uStack_f8._1_1_;
          uStack_f8._0_2_ = CONCAT11(uStack_f8._2_1_,uStack_f8._3_1_);
          uStack_f8 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_f8));
          uVar1 = (undefined1)uStack_f4;
          uVar2 = uStack_f4._1_1_;
          uStack_f4._0_2_ = CONCAT11(uStack_f4._2_1_,uStack_f4._3_1_);
          uStack_f4 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_f4));
        }
        if (*(int *)(**(int **)(iStack_16c + 200) + 4 + (uint)uStack_ec * 8) == 0) {
          iStack_180 = 0;
        }
        else {
          iStack_180 = (**(code **)(**(int **)(**(int **)(iStack_16c + 200) + (uint)uStack_ec * 8 +
                                              4) + 0x10))();
        }
        puVar4 = (undefined4 *)FUN_00b10840();
        iVar7 = iStack_180;
        uVar5 = *(int *)(iStack_180 + 0xc) + 1;
        local_4c._0_1_ = 2;
        *(uint *)(iStack_180 + 0xc) = uVar5;
        if (*(uint *)(iStack_180 + 0x10) < uVar5) {
          FUN_00b00440();
        }
        puVar8 = (undefined4 *)(*(int *)(iVar7 + 8) + (*(int *)(iVar7 + 0xc) * 9 + -9) * 4);
        if (puVar8 != (undefined4 *)0x0) {
          for (iVar6 = 9; iVar9 = iStack_130, iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        iVar7 = *(int *)(iVar7 + 8) + -0x24 + *(int *)(iStack_180 + 0xc) * 0x24;
        local_4c = (void *)CONCAT31(local_4c._1_3_,1);
        FUN_00b10890();
        *(undefined1 *)(iVar7 + 0x20) = uStack_e9;
        *(undefined4 *)(iVar7 + 0x1c) = uStack_f0;
        *(float *)(iVar7 + 0xc) = uStack_100;
        *(float *)(iVar7 + 0x10) = uStack_fc;
        *(undefined4 *)(iVar7 + 0x14) = uStack_f8;
        *(undefined4 *)(iVar7 + 0x18) = uStack_f4;
        param_1 = local_164;
        if (*(char *)(iStack_158 + 0xc) != '\0') {
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00adf8e0();
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00b15e80();
          FUN_00b15e80();
          param_1 = local_164;
        }
      }
      uStack_184 = uStack_184 + 1;
    } while (uStack_184 < bStack_95);
  }
  local_4c = (void *)0xffffffff;
  if (local_15c != (int *)0x0) {
    (**(code **)(*local_15c + 8))();
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffe44);
  return;
}

