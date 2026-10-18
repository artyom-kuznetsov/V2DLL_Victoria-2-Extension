// FUN_00a30740 @ 00a30740 body=[[00a30740, 00a30ab3]]


void FUN_00a30740(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 short param_6,undefined4 param_7,int param_8,char param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_144;
  undefined4 uStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined *puStack_128;
  int *piStack_124;
  char *pcStack_120;
  undefined4 local_11c;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_80 [31];
  
  if (*(int *)(in_ECX + 0x94) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 +
                      *(int *)(in_ECX + 0x94) * 4);
  }
  piStack_124 = piVar5;
  if (param_6 == 1) {
    local_11c = DAT_00f141c8;
    pcStack_120 = "vMultiplier";
    puStack_128 = (undefined *)0xa307b1;
    (**(code **)(*piVar5 + 0x78))();
  }
  else {
    local_11c = DAT_00f092fc;
    pcStack_120 = "vMultiplier";
    puStack_128 = (undefined *)0xa30795;
    (**(code **)(*piVar5 + 0x78))();
  }
  puStack_128 = &DAT_00e0bce4;
  uStack_12c = 0;
  uStack_134 = 0xa307c0;
  piStack_130 = piVar5;
  uStack_138 = (**(code **)(*piVar5 + 0x24))();
  uVar1 = *(uint *)(in_ECX + 0x100);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uStack_134 = 0;
  }
  else {
    uStack_134 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x44));
  }
  uStack_140 = 0xa307ee;
  piStack_13c = piVar5;
  (**(code **)(*piVar5 + 0xd0))();
  if (param_9 == '\0') {
    uStack_f4 = 0;
    local_11c = 0;
    pcStack_120 = (char *)0x0;
    piStack_124 = (int *)0x0;
    puStack_128 = (undefined *)0x0;
    uStack_f0 = DAT_00f092fc;
    uStack_12c = DAT_00f092fc;
  }
  else {
    puStack_144 = &uStack_12c;
    uStack_140 = 0x40490fdb;
    puStack_148 = (undefined4 *)0xa30810;
    D3DXMatrixRotationY();
  }
  puStack_144 = &uStack_12c;
  uStack_140 = param_10;
  puStack_148 = (undefined4 *)0xa30890;
  D3DXMatrixRotationZ();
  uStack_c4 = *(undefined4 *)(in_ECX + 0xf8);
  puStack_148 = &uStack_134;
  puStack_14c = &uStack_f4;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_cc = DAT_00f092fc;
  uStack_e0 = DAT_00f092fc;
  uStack_f4 = DAT_00f092fc;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = DAT_00f092fc;
  D3DXMatrixMultiply(puStack_148);
  puVar2 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_2 + 0x6bc88) + 0x1c) + 0x16c))();
  puVar6 = auStack_80;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  D3DXMatrixInverse(&uStack_c0,0,auStack_80);
  uStack_9c = *(undefined4 *)(param_4 + 0x30);
  uStack_98 = *(undefined4 *)(param_4 + 0x34);
  uStack_94 = *(undefined4 *)(param_4 + 0x38);
  uStack_90 = DAT_00f092fc;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  D3DXMatrixMultiply(&uStack_cc,&puStack_14c,&uStack_cc);
  piVar7 = piVar5;
  uVar3 = (**(code **)(*piVar5 + 0x24))(piVar5,0,"WorldMatrix");
  (**(code **)(*piVar5 + 0x98))(piVar5,uVar3,&uStack_e4);
  if (param_8 < 0) {
    param_8 = 0;
  }
  (**(code **)(*piVar5 + 0x78))(piVar5,"vXOffset",(float)piVar7[0x3d] * (float)param_8);
  (**(code **)(*piVar5 + 0x78))(piVar5,"vScale",param_12);
  if (param_9 == '\0') {
    (**(code **)(*piVar5 + 0x78))(piVar5,"vFlip",DAT_00f092fc);
  }
  else {
    (**(code **)(*piVar5 + 0x78))(piVar5,"vFlip",DAT_00f092dc);
  }
  (**(code **)(*piVar5 + 0x104))(piVar5);
  FUN_009f9d50();
  return;
}

