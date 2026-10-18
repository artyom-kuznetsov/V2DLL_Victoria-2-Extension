// FUN_00a46130 @ 00a46130 body=[[00a46130, 00a4639e]]


float10 FUN_00a46130(undefined4 *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 *puVar5;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  float *pfStack_124;
  undefined4 *puStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [24];
  float afStack_e0 [6];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float afStack_b8 [6];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [10];
  undefined1 auStack_60 [24];
  undefined4 auStack_48 [17];
  
  iVar4 = *(int *)(*(int *)(in_ECX + 0x13c) + 0x6bc88);
  if (iVar4 == 0) {
    return (float10)DAT_00f092dc;
  }
  pfStack_124 = (float *)0xa46172;
  puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x1c) + 0x16c))();
  puVar5 = auStack_88;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  pfStack_124 = (float *)0xa4618e;
  puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x1c) + 0x174))();
  puVar5 = auStack_48;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1 = *(undefined8 **)(DAT_01258a74 + 0x6bc88);
  uStack_a0 = *puVar1;
  uStack_98 = puVar1[1];
  uStack_90 = puVar1[2];
  pfStack_124 = afStack_e0;
  puStack_128 = auStack_88;
  puStack_12c = auStack_48;
  afStack_b8[5] = DAT_00f092fc;
  afStack_b8[0] = DAT_00f092fc;
  afStack_e0[5] = DAT_00f092fc;
  afStack_e0[0] = DAT_00f092fc;
  puStack_114 = param_1;
  afStack_b8[4] = 0.0;
  afStack_b8[3] = 0.0;
  afStack_b8[2] = 0.0;
  afStack_b8[1] = 0.0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  afStack_e0[4] = 0.0;
  afStack_e0[3] = 0.0;
  afStack_e0[2] = 0.0;
  afStack_e0[1] = 0.0;
  fStack_110 = param_2;
  uStack_10c = 0;
  D3DXVec3Unproject(auStack_f8,&puStack_114,&uStack_a0);
  puStack_12c = param_1;
  puStack_128 = (undefined4 *)param_2;
  pfStack_124 = (float *)DAT_00f092fc;
  D3DXVec3Unproject(auStack_104,&puStack_12c,afStack_b8,auStack_60,&uStack_a0,auStack_f8);
  puStack_12c = (undefined4 *)((float)puStack_114 - unaff_EDI);
  FUN_00a463a0(puStack_128,pfStack_124,unaff_EDI,
               CONCAT44(unaff_EBX - (float)pfStack_124,unaff_ESI - (float)puStack_128),puStack_12c);
  return (float10)(float)puStack_128;
}

