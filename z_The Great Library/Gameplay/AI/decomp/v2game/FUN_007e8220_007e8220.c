// FUN_007e8220 @ 007e8220 body=[[007e8220, 007e84fa]]


float10 FUN_007e8220(undefined4 *param_1,float param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 *puStack_178;
  undefined4 *puStack_174;
  float *pfStack_170;
  undefined4 *puStack_16c;
  float fStack_168;
  undefined4 *puStack_164;
  undefined1 auStack_150 [12];
  undefined1 auStack_144 [24];
  float afStack_12c [6];
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float afStack_104 [6];
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 local_c8 [7];
  undefined1 auStack_ac [24];
  undefined4 auStack_94 [10];
  undefined1 auStack_6c [24];
  undefined4 auStack_54 [20];
  
  puStack_16c = local_c8;
  puVar3 = local_c8;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  fStack_168 = 0.0;
  pfStack_170 = (float *)0x7e8255;
  puStack_164 = puStack_16c;
  D3DXMatrixInverse();
  pfStack_170 = (float *)0x7e8268;
  puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_012588dc + 4) + 0x16c))();
  puVar5 = auStack_94;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  pfStack_170 = (float *)0x7e828a;
  puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_012588dc + 4) + 0x174))();
  puVar5 = auStack_54;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1 = *(undefined8 **)(DAT_01258a74 + 0x6bc88);
  uStack_ec = *puVar1;
  uStack_e4 = puVar1[1];
  uStack_dc = puVar1[2];
  pfStack_170 = afStack_12c;
  puStack_174 = auStack_94;
  puStack_178 = auStack_54;
  afStack_104[5] = DAT_00f092fc;
  afStack_104[0] = DAT_00f092fc;
  afStack_12c[5] = DAT_00f092fc;
  afStack_12c[0] = DAT_00f092fc;
  afStack_104[4] = 0.0;
  afStack_104[3] = 0.0;
  afStack_104[2] = 0.0;
  afStack_104[1] = 0.0;
  uStack_108 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_114 = 0;
  afStack_12c[4] = 0.0;
  afStack_12c[3] = 0.0;
  afStack_12c[2] = 0.0;
  afStack_12c[1] = 0.0;
  D3DXVec3Unproject(auStack_144,&stack0xfffffea0,&uStack_ec);
  puStack_178 = param_1;
  puStack_174 = (undefined4 *)param_2;
  pfStack_170 = (float *)DAT_00f092fc;
  D3DXVec3Unproject(auStack_150,&puStack_178,afStack_104,auStack_6c,auStack_ac,auStack_144);
  if (*(int *)(in_ECX + 0x124) != 0) {
    fVar6 = fStack_168 - (float)puStack_174;
    fVar7 = (float)puStack_164 - (float)pfStack_170;
    fVar2 = (float)param_1 - (float)puStack_16c;
    puStack_178 = puStack_16c;
    puVar3 = puStack_174;
    puVar5 = puStack_174;
    pfVar8 = pfStack_170;
    FUN_009c0370(puStack_174,pfStack_170,puStack_16c,CONCAT44(fVar7,fVar6),fVar2);
    if ((*(int *)(in_ECX + 300) != 0) && ((float)puVar3 < 0.0)) {
      FUN_009c0370(puVar5,pfVar8,puStack_178,CONCAT44(fVar7,fVar6),fVar2);
      puVar3 = puVar5;
    }
    return (float10)(float)puVar3;
  }
  return (float10)DAT_00f092dc;
}

