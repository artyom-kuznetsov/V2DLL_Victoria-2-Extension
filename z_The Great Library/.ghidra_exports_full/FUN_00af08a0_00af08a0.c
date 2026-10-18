// FUN_00af08a0 @ 00af08a0 body=[[00af08a0, 00af1087]]


void FUN_00af08a0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined8 uVar15;
  undefined1 auStack_234 [24];
  int *piStack_21c;
  float fStack_218;
  float local_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  int *piStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int local_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 auStack_160 [7];
  undefined4 uStack_144;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  byte bStack_d4;
  undefined4 uStack_d0;
  int iStack_c4;
  int iStack_b4;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b3851c;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_234;
  ExceptionList = &local_4c;
  local_214 = (float)*param_2;
  local_1b8 = param_2[3];
  iVar9 = param_2[7];
  (**(code **)(*param_1 + 8))(&local_118,0x90,DAT_00ef259c ^ (uint)&stack0xfffffdc0);
  uVar5 = FUN_00aee020();
  iVar12 = iStack_1dc;
  if (iVar9 == 1) {
    uVar2 = (undefined1)uStack_d8;
    uVar4 = uStack_d8._1_1_;
    uStack_d8._0_2_ = CONCAT11(uStack_d8._2_1_,uStack_d8._3_1_);
    uStack_d8 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_d8));
    uVar2 = (undefined1)uStack_dc;
    uVar4 = uStack_dc._1_1_;
    uStack_dc._0_2_ = CONCAT11(uStack_dc._2_1_,uStack_dc._3_1_);
    uStack_dc = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_dc));
    puVar6 = (undefined1 *)((int)&uStack_d0 + 2);
    iVar10 = 0x10;
    do {
      uVar2 = puVar6[-2];
      puVar6[-2] = puVar6[1];
      puVar6[1] = uVar2;
      uVar2 = puVar6[-1];
      puVar6[-1] = *puVar6;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (*(char *)(iStack_1dc + 0xc) != '\0') {
    FUN_00b15e80("- Node name = \'%s\'");
  }
  piVar8 = piStack_21c;
  if (*(char *)(iVar12 + 0xc) != '\0') {
    if (uStack_d8 != -1) {
      FUN_00b15770();
    }
    FUN_00b15e80("    + Parent = \'%s\'");
  }
  FUN_00ae0c30();
  piStack_1e0 = (int *)(*(code *)PTR_FUN_00f01b08)(0xa8,400,4,0,0);
  local_4c = (void *)0x0;
  if (piStack_1e0 == (int *)0x0) {
    piStack_21c = (int *)0x0;
  }
  else {
    piStack_21c = (int *)FUN_00ae96e0(uVar5,piStack_21c);
  }
  piVar1 = (int *)((int)piVar8 + 0x80);
  uVar7 = *(int *)((int)piVar8 + 0x84) + 1;
  local_4c = (void *)0xffffffff;
  *(uint *)((int)piVar8 + 0x84) = uVar7;
  piStack_1e0 = piVar1;
  if (*(uint *)((int)piVar8 + 0x88) < uVar7) {
    FUN_00aeb6c0();
  }
  puVar11 = (undefined4 *)(*piVar1 + -4 + *(int *)((int)piVar8 + 0x84) * 4);
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = piStack_21c;
  }
  iVar12 = *(int *)((int)piVar8 + 0x84) + -1;
  *piStack_21c = iVar12;
  iStack_1bc = *(int *)((int)piVar8 + 0x1c);
  uStack_1ec = uStack_100;
  fStack_1e8 = fStack_fc;
  fStack_1e4 = fStack_f8;
  fStack_1f8 = fStack_f4;
  fStack_1f4 = fStack_f0;
  fStack_1f0 = fStack_ec;
  fStack_208 = fStack_120;
  fStack_204 = fStack_11c;
  fStack_200 = local_118;
  fStack_1fc = fStack_114;
  fStack_218 = fStack_110;
  local_214 = fStack_10c;
  fStack_210 = fStack_108;
  fStack_20c = fStack_104;
  if (iVar9 == 1) {
    FUN_00ad8ea0(&uStack_1ec);
  }
  FUN_00b18c30(&uStack_1ec,1);
  if (iVar9 == 1) {
    FUN_00ad8ea0(&fStack_1f8);
  }
  FUN_00b18bf0(&fStack_1f8,1);
  pfVar14 = &fStack_208;
  uVar15 = CONCAT44(1,iVar9);
  FUN_00b00190();
  FUN_00b00190(&fStack_218,iVar9,1,pfVar14,uVar15);
  fVar3 = 1.0 / SQRT(fStack_1fc * fStack_1fc +
                     fStack_200 * fStack_200 + fStack_204 * fStack_204 + fStack_208 * fStack_208);
  fStack_208 = fVar3 * fStack_208;
  fStack_204 = fVar3 * fStack_204;
  fStack_200 = fStack_200 * fVar3;
  fStack_1fc = fVar3 * fStack_1fc;
  fVar3 = 1.0 / SQRT(fStack_20c * fStack_20c +
                     fStack_210 * fStack_210 + local_214 * local_214 + fStack_218 * fStack_218);
  fStack_218 = fVar3 * fStack_218;
  local_214 = local_214 * fVar3;
  fStack_210 = fVar3 * fStack_210;
  fStack_20c = fStack_20c * fVar3;
  *(undefined4 *)(iStack_1bc + 0x2c + iVar12 * 0x38) = uStack_1ec;
  pfVar14 = (float *)(iStack_1bc + iVar12 * 0x38);
  pfVar14[0xc] = fStack_1e8;
  pfVar14[0xd] = fStack_1e4;
  *pfVar14 = fStack_208;
  pfVar14[1] = fStack_204;
  pfVar14[2] = fStack_200;
  pfVar14[3] = fStack_1fc;
  pfVar14[8] = fStack_1f8;
  pfVar14[9] = fStack_1f4;
  pfVar14[10] = fStack_1f0;
  pfVar14[4] = fStack_218;
  pfVar14[5] = local_214;
  pfVar14[6] = fStack_210;
  pfVar14[7] = fStack_20c;
  if (*(char *)(iStack_1c0 + 8) != '\0') {
    piStack_21c[2] = uStack_dc;
  }
  if ((bStack_d4 & 1) == 0) {
    *(byte *)(piStack_21c + 0x29) = *(byte *)(piStack_21c + 0x29) & 0xfe;
  }
  else {
    *(byte *)(piStack_21c + 0x29) = *(byte *)(piStack_21c + 0x29) | 1;
  }
  if (uStack_d8 == -1) {
    uVar7 = *(int *)((int)piVar8 + 0xbc) + 1;
    *(uint *)((int)piVar8 + 0xbc) = uVar7;
    if (*(uint *)((int)piVar8 + 0xc0) < uVar7) {
      FUN_00aeb6c0();
    }
    piVar8 = (int *)(*(int *)((int)piVar8 + 0xb8) + -4 + *(int *)((int)piVar8 + 0xbc) * 4);
  }
  else {
    piStack_21c[1] = uStack_d8;
    iVar9 = *(int *)(*piStack_1e0 + uStack_d8 * 4);
    uVar7 = *(int *)(iVar9 + 0x40) + 1;
    *(uint *)(iVar9 + 0x40) = uVar7;
    if (*(uint *)(iVar9 + 0x44) < uVar7) {
      FUN_00aeb6c0();
    }
    piVar8 = (int *)(*(int *)(iVar9 + 0x3c) + -4 + *(int *)(iVar9 + 0x40) * 4);
  }
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar12;
  }
  iStack_1cc = iStack_a0;
  iStack_1c8 = iStack_9c;
  puVar11 = &uStack_d0;
  puVar13 = auStack_160;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  iStack_1c4 = iStack_98;
  iStack_1d8 = iStack_c4;
  local_1d4 = iStack_b4;
  iStack_1d0 = iStack_a4;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0x3f800000;
  auStack_160[3] = 0;
  uStack_144 = 0;
  uStack_134 = 0;
  FUN_00b18c30(&iStack_1cc,1);
  FUN_00b18c30(&iStack_1d8,1);
  FUN_00b18e30(auStack_160,1);
  local_1b8 = 0x3f800000;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_1a4 = 0x3f800000;
  uStack_190 = 0x3f800000;
  uStack_17c = 0x3f800000;
  iStack_16c = iStack_1cc;
  iStack_168 = iStack_1c8;
  iStack_164 = iStack_1c4;
  iStack_178 = iStack_1d8;
  iStack_174 = local_1d4;
  iStack_170 = iStack_1d0;
  FID_conflict__memcpy(&local_1b8,auStack_160,0x40);
  piVar8 = piStack_21c;
  FID_conflict__memcpy(piStack_21c + 0x13,&local_1b8,0x40);
  piVar8[0x23] = iStack_178;
  piVar8[0x24] = iStack_174;
  piVar8[0x25] = iStack_170;
  piVar8[0x26] = iStack_16c;
  piVar8[0x27] = iStack_168;
  piVar8[0x28] = iStack_164;
  if (*(char *)(iStack_1dc + 0xc) != '\0') {
    FUN_00b15e80();
    FUN_00b15e80("    + Rotation:      x=%f, y=%f, z=%f, w=%f",(double)fStack_208,(double)fStack_204
                 ,(double)fStack_200,(double)fStack_1fc);
    FUN_00b15e80();
    FUN_00b15e80("    + Scale Rot:     x=%f, y=%f, z=%f, w=%f",(double)fStack_218,(double)local_214,
                 (double)fStack_210,(double)fStack_20c);
    FUN_00b15e80("    + IncludeInBoundsCalc: %d",bStack_d4 & 1);
  }
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffdc4);
  return;
}

