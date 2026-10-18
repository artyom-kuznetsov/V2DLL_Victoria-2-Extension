// FUN_008193f0 @ 008193f0 body=[[008193f0, 008196f8]]


void FUN_008193f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  ulonglong *puStack_168;
  undefined4 *puStack_164;
  uint *puStack_160;
  undefined4 uStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  uint uStack_148;
  undefined *puStack_144;
  int *piStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  undefined4 uStack_130;
  undefined *puStack_12c;
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 auStack_cc [4];
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 auStack_8c [34];
  
  if (*(int *)(in_ECX + 0x94) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 +
                      *(int *)(in_ECX + 0x94) * 4);
  }
  puStack_12c = &DAT_00e0bce4;
  uStack_130 = 0;
  uStack_138 = 0x819432;
  piStack_134 = piVar5;
  uStack_13c = (**(code **)(*piVar5 + 0x24))();
  uVar1 = *(uint *)(in_ECX + 0x100);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uStack_138 = 0;
  }
  else {
    uStack_138 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x44));
  }
  puStack_144 = (undefined *)0x819460;
  piStack_140 = piVar5;
  (**(code **)(*piVar5 + 0xd0))();
  puStack_144 = &DAT_00e19384;
  uStack_148 = 0;
  uStack_150 = 0x81946f;
  piStack_14c = piVar5;
  uStack_154 = (**(code **)(*piVar5 + 0x24))();
  uVar1 = *(uint *)(in_ECX + 0x150);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uStack_150 = 0;
  }
  else {
    uStack_150 = *(undefined4 *)(uVar1 * 0x2c + 4 + *(int *)(in_ECX + 0x44));
  }
  uStack_15c = 0x81949d;
  piStack_158 = piVar5;
  (**(code **)(*piVar5 + 0xd0))();
  uStack_118 = 0;
  puStack_12c = (undefined *)0x0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_13c = 0;
  piStack_140 = (int *)0x0;
  puStack_144 = (undefined *)0x0;
  uStack_110 = (ulonglong)DAT_00f092fc << 0x20;
  piStack_134 = (int *)DAT_00f092fc;
  uStack_148 = DAT_00f092fc;
  puStack_160 = &uStack_148;
  uStack_15c = in_stack_00000028;
  puStack_164 = (undefined4 *)0x81951e;
  D3DXMatrixRotationZ();
  uStack_e0 = *(undefined4 *)(in_ECX + 0xf8);
  puStack_164 = &uStack_150;
  puStack_168 = &uStack_110;
  uStack_e4 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_108 = 0;
  uStack_e8 = DAT_00f092fc;
  uStack_fc = DAT_00f092fc;
  uStack_110 = (ulonglong)DAT_00f092fc;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = DAT_00f092fc;
  D3DXMatrixMultiply(puStack_164);
  puVar2 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_2 + 0x6bc88) + 0x1c) + 0x16c))();
  puVar6 = auStack_8c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  D3DXMatrixInverse(auStack_cc,0,auStack_8c);
  uStack_a8 = *(undefined4 *)(param_4 + 0x30);
  uStack_a4 = *(undefined4 *)(param_4 + 0x34);
  uStack_a0 = *(undefined4 *)(param_4 + 0x38);
  uStack_9c = DAT_00f092fc;
  auStack_cc[0] = 0;
  uStack_bc = 0;
  uStack_ac = 0;
  D3DXMatrixMultiply(&uStack_d8,&puStack_168,&uStack_d8);
  uVar3 = (**(code **)(*piVar5 + 0x24))(piVar5,0,"WorldMatrix");
  (**(code **)(*piVar5 + 0x98))(piVar5,uVar3,&uStack_f0);
  iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,0,"StatusColor");
  if (iVar4 != 0) {
    uStack_118 = *(undefined8 *)(in_stack_0000002c + 8);
    uStack_110 = *(ulonglong *)(in_stack_0000002c + 0x10);
    (**(code **)(*piVar5 + 0x88))(piVar5,iVar4,&uStack_118);
  }
  (**(code **)(*piVar5 + 0x104))(piVar5);
  FUN_009f9d50();
  return;
}

