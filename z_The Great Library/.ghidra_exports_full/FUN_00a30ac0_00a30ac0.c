// FUN_00a30ac0 @ 00a30ac0 body=[[00a30ac0, 00a3114e]]


undefined4 FUN_00a30ac0(float *param_1,int param_2,ushort param_3,float param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puStack_13c;
  float fStack_138;
  float fStack_134;
  int iStack_124;
  float fStack_108;
  float fStack_104;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  undefined1 auStack_a8 [12];
  undefined4 auStack_9c [4];
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_50 [76];
  
  piVar7 = (int *)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bc88) + 0x1c);
  if (piVar7 != (int *)0x0) {
    _fStack_138 = CONCAT44(0xa30af2,fStack_138);
    uVar3 = (**(code **)(*piVar7 + 0x16c))();
    _fStack_138 = CONCAT44(0xa30b00,fStack_138);
    uVar4 = (**(code **)(*piVar7 + 0x174))();
    _fStack_138 = CONCAT44(uVar4,uVar3);
    puStack_13c = auStack_50;
    D3DXMatrixMultiply();
    D3DXMatrixInverse(auStack_9c,0,uVar3);
    uStack_78 = *(undefined4 *)(param_2 + 0x30);
    uStack_74 = *(undefined4 *)(param_2 + 0x34);
    uStack_70 = *(undefined4 *)(param_2 + 0x38);
    uStack_6c = DAT_00f092fc;
    auStack_9c[0] = 0;
    uStack_8c = 0;
    uStack_7c = 0;
    FUN_007eb4f0(auStack_a8);
    iVar1 = *(int *)(in_ECX + 0x8c);
    if (*(uint *)(in_ECX + 0x100) < 10000) {
      iVar6 = *(uint *)(in_ECX + 0x100) * 0x2c;
      iVar5 = *(int *)(iVar6 + 0x17c + iVar1);
      iStack_124 = *(int *)(iVar6 + 0x180 + iVar1);
    }
    else {
      iVar5 = 0;
      iStack_124 = 0;
    }
    iVar6 = *(int *)(in_ECX + 0xf0);
    param_4 = *(float *)(in_ECX + 0x98) * param_4;
    fVar8 = param_4 * ((float)(iVar5 / iVar6) / (float)iStack_124);
    puStack_13c = (undefined1 *)-param_4;
    fVar10 = -fVar8;
    fVar13 = fStack_ec * (float)puStack_13c + fStack_fc * fVar10 + fStack_dc * 0.0 + fStack_cc;
    fStack_134 = fStack_fc * fVar8 + fStack_ec * param_4 + fStack_dc * 0.0 + fStack_cc;
    fStack_138 = (fStack_108 * fVar8 + fStack_f8 * param_4 + fStack_e8 * 0.0 + fStack_d8) /
                 fStack_134;
    fStack_134 = (fStack_104 * fVar8 + fStack_f4 * param_4 + fStack_e4 * 0.0 + fStack_d4) /
                 fStack_134;
    fVar12 = ((fStack_f8 * (float)puStack_13c + fStack_108 * fVar10 + fStack_e8 * 0.0 + fStack_d8) /
              fVar13 + 1.0) * (float)*(int *)(iVar1 + 0x6b9bc) * 0.5;
    fVar13 = (1.0 - (fStack_104 * fVar10 + fStack_f4 * (float)puStack_13c + fStack_e4 * 0.0 +
                    fStack_d4) / fVar13) * (float)*(int *)(iVar1 + 0x6b9c0) * 0.5;
    fVar10 = (fStack_138 + 1.0) * (float)*(int *)(iVar1 + 0x6b9bc) * 0.5;
    fVar9 = (1.0 - fStack_134) * (float)*(int *)(iVar1 + 0x6b9c0) * 0.5;
    fVar8 = *param_1;
    if ((fVar12 < fVar8) && (fVar8 < fVar10)) {
      fVar11 = param_1[1];
      if ((fVar9 < fVar11) && (fVar11 < fVar13)) {
        FUN_009bcf20(*(undefined4 *)(in_ECX + 0x44));
        puStack_13c = (undefined1 *)
                      CONCAT22((short)(int)(((fVar11 - fVar9) / (fVar13 - fVar9)) *
                                           (float)(int)fStack_134),
                               (short)(int)(((fVar8 - fVar12) / (fVar10 - fVar12)) *
                                           (float)((int)fStack_138 / iVar6)));
        cVar2 = FUN_00a31150(&puStack_13c,param_3 - 1 & ((int)(param_3 - 1) < 0) - 1);
        if (cVar2 == '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

