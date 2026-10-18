// FUN_007db5e0 @ 007db5e0 body=[[007db5e0, 007dbc3b]]


undefined4 FUN_007db5e0(int param_1,float *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e4;
  undefined1 auStack_a8 [12];
  undefined4 auStack_9c [4];
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_50 [76];
  
  _fStack_158 = CONCAT44(0x7db600,fStack_158);
  piVar3 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x6c))();
  _fStack_158 = CONCAT44(0x7db60e,fStack_158);
  uVar4 = (**(code **)(*piVar3 + 0x16c))();
  _fStack_158 = CONCAT44(0x7db61c,fStack_158);
  uVar5 = (**(code **)(*piVar3 + 0x174))();
  _fStack_158 = CONCAT44(uVar5,uVar4);
  puStack_15c = auStack_50;
  D3DXMatrixMultiply();
  D3DXMatrixInverse(auStack_9c,0,uVar4);
  uStack_78 = *(undefined4 *)(unaff_EDI + 0x30);
  uStack_74 = *(undefined4 *)(unaff_EDI + 0x34);
  uStack_70 = *(undefined4 *)(unaff_EDI + 0x38);
  uStack_6c = DAT_00f092fc;
  auStack_9c[0] = 0;
  uStack_8c = 0;
  uStack_7c = 0;
  FUN_007eb4f0(auStack_a8);
  iVar1 = *(int *)(param_1 + 0x8c);
  if (*(uint *)(param_1 + 0xa4) < 10000) {
    iVar6 = *(uint *)(param_1 + 0xa4) * 0x2c;
    iVar7 = *(int *)(iVar6 + 0x17c + iVar1);
    iVar6 = *(int *)(iVar6 + 0x180 + iVar1);
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
  }
  fVar8 = *(float *)(param_1 + 0x9c);
  fVar13 = fVar8 * ((float)iVar7 / (float)iVar6);
  puStack_15c = (undefined1 *)-fVar8;
  fVar11 = -fVar13;
  fVar9 = fStack_104 * (float)puStack_15c + fStack_114 * fVar11 + fStack_f4 * 0.0 + fStack_e4;
  fStack_154 = fStack_114 * fVar13 + fStack_104 * fVar8 + fStack_f4 * 0.0 + fStack_e4;
  fStack_158 = (fStack_120 * fVar13 + fStack_110 * fVar8 + fStack_100 * 0.0 + fStack_f0) /
               fStack_154;
  fStack_154 = (fStack_11c * fVar13 + fStack_10c * fVar8 + fStack_fc * 0.0 + fStack_ec) / fStack_154
  ;
  fVar12 = ((fStack_110 * (float)puStack_15c + fStack_120 * fVar11 + fStack_100 * 0.0 + fStack_f0) /
            fVar9 + 1.0) * (float)*(int *)(iVar1 + 0x6b9bc) * 0.5;
  fVar10 = (fStack_158 + 1.0) * (float)*(int *)(iVar1 + 0x6b9bc) * 0.5;
  fVar13 = (1.0 - (fStack_11c * fVar11 + fStack_10c * (float)puStack_15c + fStack_fc * 0.0 +
                  fStack_ec) / fVar9) * (float)*(int *)(iVar1 + 0x6b9c0) * 0.5;
  fVar9 = (1.0 - fStack_154) * (float)*(int *)(iVar1 + 0x6b9c0) * 0.5;
  fVar8 = *param_2;
  if ((fVar12 < fVar8) && (fVar8 < fVar10)) {
    fVar11 = param_2[1];
    if ((fVar9 < fVar11) && (fVar11 < fVar13)) {
      FUN_009bcf20(*(undefined4 *)(param_1 + 0x44));
      puStack_15c = (undefined1 *)
                    CONCAT22((short)(int)(((fVar11 - fVar9) / (fVar13 - fVar9)) *
                                         (float)(int)fStack_154),
                             (short)(int)(((fVar8 - fVar12) / (fVar10 - fVar12)) *
                                         (float)(int)fStack_158));
      cVar2 = FUN_007db560(&puStack_15c);
      if (cVar2 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

