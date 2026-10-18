// FUN_009c00d0 @ 009c00d0 body=[[009c00d0, 009c0362]]


float10 FUN_009c00d0(undefined4 *param_1,float param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
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
  pfStack_170 = (float *)0x9c0109;
  puStack_164 = puStack_16c;
  D3DXMatrixInverse();
  iVar4 = *(int *)(*(int *)(in_ECX + 0x13c) + 0x6bc88);
  if (iVar4 == 0) {
    return (float10)DAT_00f092dc;
  }
  piVar1 = (int *)(iVar4 + 0x1c);
  pfStack_170 = (float *)0x9c0137;
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x16c))();
  puVar5 = auStack_94;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  pfStack_170 = (float *)0x9c0153;
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x174))();
  puVar5 = auStack_54;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = *(undefined8 **)(DAT_01258a74 + 0x6bc88);
  uStack_ec = *puVar2;
  uStack_e4 = puVar2[1];
  pfStack_170 = afStack_12c;
  uStack_dc = puVar2[2];
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
  puStack_178 = (undefined4 *)((float)param_1 - (float)puStack_16c);
  FUN_009c0370(puStack_174,pfStack_170,puStack_16c,
               CONCAT44((float)puStack_164 - (float)pfStack_170,fStack_168 - (float)puStack_174),
               puStack_178);
  return (float10)(float)puStack_174;
}

