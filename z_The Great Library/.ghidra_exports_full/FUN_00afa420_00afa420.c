// FUN_00afa420 @ 00afa420 body=[[00afa420, 00afa900]]


void FUN_00afa420(int *param_1,float *param_2)

{
  float fVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  double dVar9;
  int *piStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  int iStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_e8;
  float local_e4;
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
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b388e1;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)&piStack_134;
  ExceptionList = &local_4c;
  local_e4 = *param_2;
  fVar1 = param_2[7];
  (**(code **)(*param_1 + 8))(local_e0,0x54,DAT_00ef259c ^ (uint)&stack0xfffffec0);
  uVar5 = FUN_00aee020();
  fStack_130 = fStack_e8;
  fStack_12c = local_e4;
  fStack_128 = local_e0[0];
  uStack_124 = 0x3f800000;
  fStack_120 = fStack_d8;
  fStack_11c = fStack_d4;
  fStack_118 = fStack_d0;
  uStack_114 = 0x3f800000;
  fStack_110 = fStack_c8;
  fStack_10c = fStack_c4;
  fStack_108 = fStack_c0;
  uStack_104 = 0x3f800000;
  fStack_fc = fStack_b8;
  local_f8 = fStack_b4;
  fStack_f4 = fStack_b0;
  uStack_f0 = 0x3f800000;
  if (fVar1 == 1.4013e-45) {
    FUN_00ad8ea0(&fStack_130,4);
    FUN_00ad8ea0(&fStack_120,4);
    FUN_00ad8ea0(&fStack_110,4);
    FUN_00ad8ea0(&fStack_fc,4);
    uVar3 = (undefined1)uStack_a8;
    uVar4 = uStack_a8._1_1_;
    uStack_a8._0_2_ = CONCAT11(uStack_a8._2_1_,uStack_a8._3_1_);
    uStack_a8 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_a8));
    uVar3 = (undefined1)uStack_a4;
    uVar4 = uStack_a4._1_1_;
    uStack_a4._0_2_ = CONCAT11(uStack_a4._2_1_,uStack_a4._3_1_);
    uStack_a4 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_a4));
    uVar3 = (undefined1)uStack_a0;
    uVar4 = uStack_a0._1_1_;
    uStack_a0._0_2_ = CONCAT11(uStack_a0._2_1_,uStack_a0._3_1_);
    uStack_a0 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_a0));
    uVar3 = (undefined1)uStack_9c;
    uVar4 = uStack_9c._1_1_;
    uStack_9c._0_2_ = CONCAT11(uStack_9c._2_1_,uStack_9c._3_1_);
    uStack_9c = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_9c));
  }
  if (*(char *)(iStack_100 + 0xc) != '\0') {
    FUN_00b15e80("- Material name = \'%s\'",uVar5);
    FUN_00b15e80("    + Ambient       : (%f, %f, %f)",(double)fStack_130,(double)fStack_12c,
                 (double)fStack_128);
    FUN_00b15e80("    + Diffuse       : (%f, %f, %f)",(double)fStack_120,(double)fStack_11c,
                 (double)fStack_118);
    FUN_00b15e80("    + Specular      : (%f, %f, %f)",(double)fStack_110,(double)fStack_10c,
                 (double)fStack_108);
    FUN_00b15e80("    + Emissive      : (%f, %f, %f)",(double)fStack_fc,(double)local_f8,
                 (double)fStack_f4);
    FUN_00b15e80();
    FUN_00b15e80();
    FUN_00b15e80();
    dVar9 = (double)uStack_9c;
    pcVar7 = "    + IOR           : %f";
    FUN_00b15e80();
    uVar8 = CONCAT44(pcVar7,(uint)bStack_98);
    pcVar7 = "    + Double sided  : %d";
    FUN_00b15e80();
    FUN_00b15e80("    + WireFrame     : %d",cStack_97,pcVar7,uVar8,dVar9);
  }
  iStack_100 = (*(code *)PTR_FUN_00f01b08)(0x6c,0xc9,4,0,0,0xffffffff);
  local_4c = (void *)0x0;
  if (iStack_100 != 0) {
    FUN_00b10a30();
  }
  local_4c = (void *)0xffffffff;
  piStack_134 = (int *)0x0;
  FUN_00ad3250();
  piVar2 = piStack_134;
  local_4c = (void *)0x1;
  if (piStack_134 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(*piStack_134 + 0x10))();
  }
  *(float *)(iVar6 + 0x18) = fStack_130;
  *(float *)(iVar6 + 0x1c) = fStack_12c;
  *(float *)(iVar6 + 0x20) = fStack_128;
  *(undefined4 *)(iVar6 + 0x24) = uStack_124;
  *(float *)(iVar6 + 0x28) = fStack_120;
  *(float *)(iVar6 + 0x2c) = fStack_11c;
  *(float *)(iVar6 + 0x30) = fStack_118;
  *(undefined4 *)(iVar6 + 0x34) = uStack_114;
  *(float *)(iVar6 + 0x38) = fStack_110;
  *(float *)(iVar6 + 0x3c) = fStack_10c;
  *(float *)(iVar6 + 0x40) = fStack_108;
  *(undefined4 *)(iVar6 + 0x44) = uStack_104;
  *(float *)(iVar6 + 0x48) = fStack_fc;
  *(float *)(iVar6 + 0x4c) = local_f8;
  *(float *)(iVar6 + 0x50) = fStack_f4;
  *(undefined4 *)(iVar6 + 0x54) = uStack_f0;
  *(bool *)(iVar6 + 0x68) = bStack_98 != 0;
  *(float *)(iVar6 + 100) = uStack_9c;
  *(undefined4 *)(iVar6 + 0x60) = uStack_a0;
  *(undefined4 *)(iVar6 + 0x58) = uStack_a8;
  *(bool *)(iVar6 + 0x69) = cStack_97 != '\0';
  *(undefined4 *)(iVar6 + 0x5c) = uStack_a4;
  FUN_00ad8a20();
  local_4c = (void *)0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffec4);
  return;
}

