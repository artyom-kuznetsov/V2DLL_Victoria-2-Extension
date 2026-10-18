// FUN_009ae320 @ 009ae320 body=[[009ae320, 009ae5a0]]


void FUN_009ae320(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuStack_190;
  undefined8 *puStack_18c;
  int iStack_188;
  undefined4 **ppuStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  undefined4 **ppuStack_174;
  undefined4 **ppuStack_170;
  undefined4 *puStack_16c;
  int iStack_168;
  undefined8 *puStack_164;
  undefined8 *puStack_160;
  undefined8 *puStack_15c;
  undefined1 *puStack_158;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_144;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  undefined8 uStack_104;
  undefined4 *puStack_fc;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_ec;
  undefined4 *puStack_e4;
  undefined8 uStack_e0;
  undefined1 auStack_d4 [12];
  undefined4 auStack_c8 [16];
  undefined4 auStack_88 [16];
  undefined4 auStack_48 [17];
  
  puStack_144 = (undefined4 *)0x9ae340;
  puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 0x1c) + 0x16c))();
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1c) + 0x174);
  puVar5 = auStack_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_144 = (undefined4 *)0x9ae35e;
  puVar2 = (undefined4 *)(*pcVar1)();
  puStack_144 = auStack_88;
  puVar5 = auStack_88;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_148 = auStack_48;
  puStack_14c = auStack_c8;
  puStack_150 = (undefined1 *)0x9ae38c;
  D3DXMatrixMultiply();
  puStack_158 = auStack_d4;
  uStack_154 = 0;
  puStack_15c = (undefined8 *)0x9ae39c;
  puStack_150 = puStack_158;
  D3DXMatrixInverse();
  uStack_134 = CONCAT44(DAT_00f092dc,DAT_00f092fc);
  uStack_128 = CONCAT44(DAT_00f092fc,DAT_00f092dc);
  uStack_11c = CONCAT44(DAT_00f092fc,DAT_00f092fc);
  uStack_12c = 0;
  uStack_110 = CONCAT44(DAT_00f092dc,DAT_00f092dc);
  uStack_120 = 0;
  uStack_104 = CONCAT44(DAT_00f092dc,DAT_00f092fc);
  uStack_114 = 0;
  puStack_108 = DAT_00f092fc;
  puStack_fc = DAT_00f092fc;
  uStack_f8 = CONCAT44(DAT_00f092fc,DAT_00f092dc);
  puStack_144 = DAT_00f092fc;
  puStack_14c = DAT_00f092fc;
  puStack_148 = DAT_00f092fc;
  uStack_ec = CONCAT44(DAT_00f092fc,DAT_00f092fc);
  puStack_f0 = DAT_00f092fc;
  puStack_e4 = DAT_00f092fc;
  puVar4 = (undefined8 *)&stack0xfffffec0;
  iVar3 = 8;
  do {
    puStack_15c = &uStack_e0;
    iStack_168 = 0x9ae4f9;
    puStack_164 = puVar4;
    puStack_160 = puVar4;
    D3DXVec3TransformCoord();
    puVar4 = (undefined8 *)((int)puVar4 + 0xc);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_15c = &uStack_128;
  puStack_160 = &uStack_134;
  puStack_164 = (undefined8 *)&stack0xfffffec0;
  iStack_168 = param_1 + 0x318;
  puStack_16c = (undefined4 *)0x9ae520;
  D3DXPlaneFromPoints();
  puStack_16c = &uStack_114;
  ppuStack_170 = &puStack_fc;
  ppuStack_174 = &puStack_108;
  iStack_178 = param_1 + 0x328;
  iStack_17c = 0x9ae538;
  D3DXPlaneFromPoints();
  iStack_17c = (int)&uStack_134 + 4;
  iStack_180 = (int)&uStack_11c + 4;
  ppuStack_184 = &puStack_148;
  iStack_188 = param_1 + 0x338;
  puStack_18c = (undefined8 *)0x9ae550;
  D3DXPlaneFromPoints();
  puStack_18c = &uStack_134;
  ppuStack_190 = &puStack_14c;
  D3DXPlaneFromPoints(param_1 + 0x348,&uStack_11c);
  D3DXPlaneFromPoints(param_1 + 0x358,&iStack_168,&puStack_15c,&stack0xfffffec8);
  D3DXPlaneFromPoints(param_1 + 0x368,&ppuStack_184,&ppuStack_190,&puStack_160);
  return;
}

