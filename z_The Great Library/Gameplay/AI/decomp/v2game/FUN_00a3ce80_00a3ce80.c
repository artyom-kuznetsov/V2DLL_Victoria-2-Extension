// FUN_00a3ce80 @ 00a3ce80 body=[[00a3ce80, 00a3d10f]]


void FUN_00a3ce80(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 *puStack_1b4;
  int *piStack_1b0;
  undefined8 uStack_1ac;
  int *piStack_1a4;
  undefined4 uStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  int **ppiStack_190;
  undefined4 uStack_18c;
  int *piStack_188;
  undefined4 uStack_184;
  float fStack_180;
  int *piStack_17c;
  undefined4 uStack_178;
  undefined4 *puStack_174;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  undefined4 *puStack_160;
  undefined1 *puStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  int *piStack_144;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 auStack_128 [64];
  undefined4 auStack_e8 [16];
  undefined1 auStack_a8 [32];
  undefined1 local_88 [20];
  undefined1 auStack_74 [32];
  undefined1 auStack_54 [80];
  
  piVar1 = *(int **)(param_2 + 100);
  puStack_13c = local_88;
  uStack_140 = 2;
  puStack_148 = (undefined1 *)0xa3cead;
  piStack_144 = piVar1;
  (**(code **)(*piVar1 + 0xb4))();
  puStack_148 = auStack_54;
  uStack_14c = 3;
  uStack_154 = 0xa3cec2;
  piStack_150 = piVar1;
  (**(code **)(*piVar1 + 0xb4))();
  piStack_158 = *(int **)(param_1 + 0xf4);
  uStack_154 = *(undefined4 *)(param_1 + 0x100);
  puStack_15c = (undefined1 *)0xa3ceda;
  (**(code **)(*piStack_158 + 0xe8))();
  puVar3 = auStack_e8;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_15c = auStack_a8;
  puStack_160 = auStack_e8;
  puStack_164 = auStack_128;
  puStack_168 = (undefined1 *)0xa3cf02;
  D3DXMatrixMultiply();
  puStack_168 = auStack_74;
  puStack_170 = &stack0xfffffecc;
  puStack_174 = (undefined4 *)0xa3cf14;
  puStack_16c = puStack_170;
  D3DXMatrixMultiply();
  piStack_17c = *(int **)(param_1 + 0xf4);
  puStack_174 = &uStack_140;
  uStack_178 = *(undefined4 *)(param_1 + 0xf8);
  fStack_180 = 1.5043512e-38;
  (**(code **)(*piStack_17c + 0x98))();
  piStack_188 = *(int **)(param_1 + 0xf4);
  uStack_184 = *(undefined4 *)(param_1 + 0xfc);
  fStack_180 = (float)param_4 / 100.0;
  uStack_18c = 0xa3cf64;
  (**(code **)(*piStack_188 + 0x78))();
  piStack_194 = *(int **)(param_1 + 0xf4);
  uStack_18c = 0;
  ppiStack_190 = &piStack_17c;
  piStack_17c = (int *)0x0;
  uStack_198 = 0xa3cf84;
  (**(code **)(*piStack_194 + 0xfc))();
  piStack_19c = *(int **)(param_1 + 0xf4);
  uStack_198 = 0;
  uStack_1a0 = 0xa3cf97;
  (**(code **)(*piStack_19c + 0x100))();
  piStack_1a4 = *(int **)(param_2 + 100);
  uStack_1a0 = 0x102;
  uStack_1ac = CONCAT44(0xa3cfad,(undefined4)uStack_1ac);
  (**(code **)(*piStack_1a4 + 0x164))();
  piStack_1b0 = *(int **)(param_1 + 0xf4);
  piStack_194 = (int *)0x0;
  ppiStack_190 = (int **)0x0;
  uStack_18c = 0;
  piStack_188 = (int *)DAT_00f092fc;
  uStack_1ac = CONCAT44(&piStack_194,*(undefined4 *)(param_1 + 0x104));
  puStack_1b4 = (undefined4 *)0xa3cfed;
  (**(code **)(*piStack_1b0 + 0x88))();
  uStack_1c0._4_4_ = *(int **)(param_1 + 0xf4);
  puStack_1b4 = &uStack_1a0;
  uStack_1b8 = *(undefined4 *)(param_1 + 0x108);
  uStack_1c0._0_4_ = 0xa3d00a;
  (**(code **)(*uStack_1c0._4_4_ + 0x88))();
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,*(int **)(param_1 + 0xf4));
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x104))();
  (**(code **)(**(int **)(param_2 + 100) + 0x14c))
            (*(int **)(param_2 + 100),5,2,param_1 + 0x15c,0x14);
  puStack_1b4 = (undefined4 *)*(undefined8 *)(param_1 + 0x98);
  piStack_1b0 = (int *)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  uStack_1ac = *(undefined8 *)(param_1 + 0xa0);
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x88))
            (*(int **)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0x104),&puStack_1b4);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb4);
  uStack_1b8 = (undefined4)*(undefined8 *)(param_1 + 0xbc);
  puStack_1b4 = (undefined4 *)((ulonglong)*(undefined8 *)(param_1 + 0xbc) >> 0x20);
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x88))
            (*(int **)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0x108),&uStack_1c0);
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x104))(*(int **)(param_1 + 0xf4));
  (**(code **)(**(int **)(param_2 + 100) + 0x14c))
            (*(int **)(param_2 + 100),5,2,param_1 + 0x10c,0x14);
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x104))(*(int **)(param_1 + 0xf4));
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x108))(*(int **)(param_1 + 0xf4));
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x10c))(*(int **)(param_1 + 0xf4));
  return;
}

