// FUN_00aefdb0 @ 00aefdb0 body=[[00aefdb0, 00af030e]]


void FUN_00aefdb0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  undefined8 uVar13;
  undefined1 auStack_134 [8];
  int *piStack_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int *piStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b384a4;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_134;
  ExceptionList = &local_4c;
  local_124 = (float)*param_2;
  local_dc = (float)param_2[3];
  iVar2 = param_2[7];
  (**(code **)(*param_1 + 8))(&local_d8,0x4c,DAT_00ef259c ^ (uint)&stack0xfffffec0);
  uVar6 = FUN_00aee020();
  iVar11 = iStack_ec;
  if (iVar2 == 1) {
    uVar4 = (undefined1)uStack_98;
    uVar5 = uStack_98._1_1_;
    uStack_98._0_2_ = CONCAT11(uStack_98._2_1_,uStack_98._3_1_);
    uStack_98 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_98));
    uVar4 = (undefined1)uStack_9c;
    uVar5 = uStack_9c._1_1_;
    uStack_9c._0_2_ = CONCAT11(uStack_9c._2_1_,uStack_9c._3_1_);
    uStack_9c = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_9c));
  }
  if (*(char *)(iStack_ec + 0xc) != '\0') {
    FUN_00b15e80("- Node name = \'%s\'",uVar6);
  }
  piVar10 = piStack_12c;
  if (*(char *)(iVar11 + 0xc) == '\0') goto LAB_00aeff08;
  if (uStack_98 == -1) {
LAB_00aefef5:
    puVar8 = &DAT_00ded94d;
  }
  else {
    puVar7 = (undefined4 *)FUN_00b15770();
    puVar8 = (undefined1 *)*puVar7;
    if (puVar8 == (undefined1 *)0x0) goto LAB_00aefef5;
  }
  FUN_00b15e80("    + Parent = \'%s\'",puVar8);
LAB_00aeff08:
  FUN_00ae0c30();
  piStack_f0 = (int *)(*(code *)PTR_FUN_00f01b08)(0xa8,400,4,0,0,0xffffffff);
  local_4c = (void *)0x0;
  if (piStack_f0 == (int *)0x0) {
    piStack_12c = (int *)0x0;
  }
  else {
    piStack_12c = (int *)FUN_00ae96e0(uVar6,piStack_12c);
  }
  piVar1 = (int *)((int)piVar10 + 0x80);
  uVar9 = *(int *)((int)piVar10 + 0x84) + 1;
  local_4c = (void *)0xffffffff;
  *(uint *)((int)piVar10 + 0x84) = uVar9;
  piStack_f0 = piVar1;
  if (*(uint *)((int)piVar10 + 0x88) < uVar9) {
    FUN_00aeb6c0();
  }
  puVar7 = (undefined4 *)(*piVar1 + -4 + *(int *)((int)piVar10 + 0x84) * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = piStack_12c;
  }
  iVar11 = *(int *)((int)piVar10 + 0x84) + -1;
  *piStack_12c = iVar11;
  iStack_e8 = *(int *)((int)piVar10 + 0x1c);
  uStack_108 = uStack_c0;
  fStack_104 = fStack_bc;
  fStack_100 = fStack_b8;
  fStack_fc = fStack_b4;
  fStack_f8 = fStack_b0;
  fStack_f4 = fStack_ac;
  fStack_128 = fStack_e0;
  local_124 = local_dc;
  fStack_120 = local_d8;
  fStack_11c = fStack_d4;
  fStack_118 = fStack_d0;
  fStack_114 = fStack_cc;
  fStack_110 = fStack_c8;
  fStack_10c = fStack_c4;
  if (iVar2 == 1) {
    FUN_00ad8ea0(&uStack_108,3);
  }
  FUN_00b18c30(&uStack_108,1);
  if (iVar2 == 1) {
    FUN_00ad8ea0(&fStack_fc,3);
  }
  FUN_00b18bf0(&fStack_fc,1);
  pfVar12 = &fStack_128;
  uVar13 = CONCAT44(1,iVar2);
  FUN_00b00190();
  FUN_00b00190(&fStack_118,iVar2,1,pfVar12,uVar13);
  fVar3 = 1.0 / SQRT(fStack_11c * fStack_11c +
                     fStack_120 * fStack_120 + local_124 * local_124 + fStack_128 * fStack_128);
  fStack_128 = fVar3 * fStack_128;
  local_124 = fVar3 * local_124;
  fStack_120 = fStack_120 * fVar3;
  fStack_11c = fVar3 * fStack_11c;
  fVar3 = 1.0 / SQRT(fStack_10c * fStack_10c +
                     fStack_110 * fStack_110 + fStack_114 * fStack_114 + fStack_118 * fStack_118);
  fStack_118 = fVar3 * fStack_118;
  fStack_114 = fStack_114 * fVar3;
  fStack_110 = fVar3 * fStack_110;
  fStack_10c = fStack_10c * fVar3;
  *(undefined4 *)(iStack_e8 + 0x2c + iVar11 * 0x38) = uStack_108;
  pfVar12 = (float *)(iStack_e8 + iVar11 * 0x38);
  pfVar12[0xc] = fStack_104;
  pfVar12[0xd] = fStack_100;
  *pfVar12 = fStack_128;
  pfVar12[1] = local_124;
  pfVar12[2] = fStack_120;
  pfVar12[3] = fStack_11c;
  pfVar12[8] = fStack_fc;
  pfVar12[9] = fStack_f8;
  pfVar12[10] = fStack_f4;
  pfVar12[4] = fStack_118;
  pfVar12[5] = fStack_114;
  pfVar12[6] = fStack_110;
  pfVar12[7] = fStack_10c;
  if (*(char *)(local_e4 + 8) != '\0') {
    piStack_12c[2] = uStack_9c;
  }
  if (uStack_98 == -1) {
    uVar9 = *(int *)((int)piVar10 + 0xbc) + 1;
    *(uint *)((int)piVar10 + 0xbc) = uVar9;
    if (*(uint *)((int)piVar10 + 0xc0) < uVar9) {
      FUN_00aeb6c0();
    }
    piVar10 = (int *)(*(int *)((int)piVar10 + 0xb8) + -4 + *(int *)((int)piVar10 + 0xbc) * 4);
  }
  else {
    piStack_12c[1] = uStack_98;
    iVar2 = *(int *)(*piStack_f0 + uStack_98 * 4);
    uVar9 = *(int *)(iVar2 + 0x40) + 1;
    *(uint *)(iVar2 + 0x40) = uVar9;
    if (*(uint *)(iVar2 + 0x44) < uVar9) {
      FUN_00aeb6c0();
    }
    piVar10 = (int *)(*(int *)(iVar2 + 0x3c) + -4 + *(int *)(iVar2 + 0x40) * 4);
  }
  if (piVar10 != (int *)0x0) {
    *piVar10 = iVar11;
  }
  if (*(char *)(iStack_ec + 0xc) != '\0') {
    FUN_00b15e80();
    FUN_00b15e80("    + Rotation:      x=%f, y=%f, z=%f, w=%f",(double)fStack_128,(double)local_124,
                 (double)fStack_120,(double)fStack_11c);
    FUN_00b15e80();
    FUN_00b15e80("    + Scale Rot:     x=%f, y=%f, z=%f, w=%f",(double)fStack_118,(double)fStack_114
                 ,(double)fStack_110,(double)fStack_10c);
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffec4);
  return;
}

