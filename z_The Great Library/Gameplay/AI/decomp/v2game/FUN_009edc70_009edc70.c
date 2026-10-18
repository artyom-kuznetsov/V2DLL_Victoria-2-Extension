// FUN_009edc70 @ 009edc70 body=[[009edc70, 009ee037]]


void FUN_009edc70(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int unaff_ESI;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  float *pfStack_e8;
  float *pfStack_e4;
  float *pfStack_e0;
  undefined1 *puStack_dc;
  float *pfStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  int iStack_cc;
  float fVar12;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_94;
  float fStack_8c;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 auStack_5c [4];
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_38;
  undefined1 auStack_20 [28];
  
  iStack_cc = in_ECX + 0x154;
  puStack_d0 = (undefined4 *)0x9edc95;
  (**(code **)(**(int **)(in_ECX + 0x148) + 0x3c))();
  fStack_a8 = *(float *)(in_ECX + 0x1c0);
  fVar12 = DAT_00f092fc;
  if (*(float *)(in_ECX + 0x1c8) - *(float *)(in_ECX + 0x1c8) * 0.25 < fStack_a8) {
    fVar12 = ((*(float *)(in_ECX + 0x1c8) - fStack_a8) / (*(float *)(in_ECX + 0x1c8) * 0.25)) * 1.0
             + 0.0;
  }
  if (*(char *)(in_ECX + 0x1d4) == '\0') {
    uStack_a4 = 0;
    fStack_a8 = fStack_a8 * 3.0;
    uStack_ac = 0;
  }
  else {
    iVar5 = *(int *)(in_ECX + 0x1d0);
    uStack_ac = *(undefined4 *)(iVar5 + 0x104);
    fStack_a8 = *(float *)(iVar5 + 0x108);
    uStack_a4 = *(undefined4 *)(iVar5 + 0x10c);
    fVar12 = DAT_00f092fc;
  }
  piStack_bc = (int *)(*(int *)(param_1 + 0x6bc88) + 0x1c);
  puStack_d0 = (undefined4 *)0x9edd9f;
  puVar4 = (undefined4 *)(**(code **)(*piStack_bc + 0x16c))();
  puVar7 = auStack_5c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puStack_d4 = &uStack_b8;
  uStack_b8 = auStack_5c[1];
  uStack_b4 = uStack_48;
  fStack_b0 = fStack_38;
  pfStack_d8 = (float *)0x9edde6;
  puStack_d0 = puStack_d4;
  D3DXVec3Normalize();
  piStack_78 = piStack_bc;
  uStack_74 = uStack_b8;
  uVar1 = *(undefined8 *)(unaff_ESI + 0xf8);
  fStack_8c = *(float *)(unaff_ESI + 0x100);
  fStack_80 = *(float *)(unaff_ESI + 0x10c);
  uVar2 = *(undefined8 *)(unaff_ESI + 0x104);
  uStack_94._0_4_ = (float)uVar1;
  uStack_88._0_4_ = (float)uVar2;
  fStack_70 = (float)uStack_88 - (float)uStack_94;
  uStack_94._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_88._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fStack_6c = uStack_88._4_4_ - uStack_94._4_4_;
  pfStack_d8 = &fStack_70;
  puStack_dc = auStack_20;
  fStack_68 = fStack_80 - fStack_8c;
  pfStack_e0 = (float *)0x9edead;
  uStack_94 = uVar1;
  uStack_88 = uVar2;
  fStack_7c = fVar12;
  D3DXVec3Normalize();
  pfStack_e4 = &fStack_b0;
  fStack_b0 = fStack_6c;
  uStack_ac = auStack_5c[0];
  fStack_a8 = fStack_4c;
  pfStack_e8 = (float *)0x9edee1;
  pfStack_e0 = pfStack_e4;
  D3DXVec3Normalize();
  if (*(char *)(in_ECX + 0x1d4) == '\0') {
    puStack_d4 = (undefined4 *)
                 (*(float *)(in_ECX + 0x1c8) - *(float *)(in_ECX + 0x1c8) * 0.5 * (float)pfStack_d8)
    ;
  }
  else {
    puStack_d4 = *(undefined4 **)(*(int *)(in_ECX + 0x1d0) + 0x110);
  }
  uVar6 = 2;
  if (*(char *)(in_ECX + 0x1d4) != '\0') {
    uVar6 = *(undefined4 *)(in_ECX + 0x1b8);
  }
  piStack_f0 = *(int **)(*(int *)(in_ECX + 0x140) + 100);
  pfStack_e8 = &fStack_a8;
  uStack_ec = 0xe;
  puStack_f4 = (undefined4 *)0x9edf5a;
  (**(code **)(*piStack_f0 + 0xe8))();
  piVar9 = *(int **)(*(int *)(in_ECX + 0x140) + 100);
  puStack_f4 = &uStack_b8;
  (**(code **)(*piVar9 + 0xe8))(piVar9,7);
  piVar9 = *(int **)(*(int *)(in_ECX + 0x140) + 100);
  uVar11 = 0;
  uVar10 = 0xe;
  (**(code **)(*piVar9 + 0xe4))(piVar9,0xe,0);
  piVar3 = *(int **)(*(int *)(in_ECX + 0x140) + 100);
  uVar8 = 7;
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,0);
  (**(code **)(**(int **)(in_ECX + 0x148) + 0x1c))
            (in_ECX + 0x18c,uVar6,0x140,&puStack_f4,&piStack_bc,&pfStack_e8,uVar10,piVar9,0,0xf);
  (**(code **)(**(int **)(in_ECX + 0x148) + 0x44))();
  piVar9 = *(int **)(*(int *)(in_ECX + 0x140) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,0xe,uVar11);
  piVar9 = *(int **)(*(int *)(in_ECX + 0x140) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,7,uVar8);
  return;
}

