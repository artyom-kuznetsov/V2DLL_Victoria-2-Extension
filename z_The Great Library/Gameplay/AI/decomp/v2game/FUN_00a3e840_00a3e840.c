// FUN_00a3e840 @ 00a3e840 body=[[00a3e840, 00a3eb3c]]


void FUN_00a3e840(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,ushort param_5,
                 undefined4 *param_6)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  undefined1 *puStack_14c;
  int *piStack_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  int *piStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int aiStack_dc [16];
  undefined4 auStack_9c [13];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  if ((uint)param_5 != *(uint *)(in_ECX + 0xc0)) {
    uStack_134 = 0xa3e868;
    FUN_00a3d720();
  }
  uStack_134 = 1;
  uStack_138 = 0x1b;
  piStack_13c = param_2;
  puStack_140 = (undefined4 *)0xa3e87a;
  (**(code **)(*param_2 + 0xe4))();
  if ((*(int *)(in_ECX + 0xe0) == 0) || (param_5 == 0)) {
    if (param_6 == (undefined4 *)0x0) {
      puStack_140 = *(undefined4 **)(in_ECX + 0x104);
      pcVar3 = *(code **)(*param_2 + 0x104);
    }
    else {
      pcVar3 = *(code **)(*param_2 + 0x104);
      puStack_140 = param_6;
    }
    puStack_144 = (undefined4 *)0x0;
    piStack_148 = param_2;
    puStack_14c = (undefined1 *)0xa3ea7b;
    (*pcVar3)();
    if (*(char *)(in_ECX + 0x74) == '\0') {
      uVar6 = 1;
      uVar5 = 1;
      FUN_009b6df0(1,1);
      FUN_009959e0(uVar5,uVar6);
    }
    goto LAB_00a3ea9a;
  }
  puVar4 = auStack_9c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_140 = (undefined4 *)DAT_00f092fc;
  puStack_144 = (undefined4 *)0x0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_114 = 0;
  uStack_118 = 0;
  piStack_148 = (int *)(float)*(int *)(param_1 + 0x6b9c0);
  puStack_14c = (undefined1 *)(float)*(int *)(param_1 + 0x6b9bc);
  puStack_150 = (undefined4 *)auStack_5c;
  uStack_e0 = DAT_00f092fc;
  uStack_f4 = DAT_00f092fc;
  uStack_108 = DAT_00f092fc;
  uStack_11c = DAT_00f092fc;
  puStack_154 = (undefined4 *)0xa3e95d;
  D3DXMatrixOrthoRH();
  puStack_140 = &uStack_11c;
  puStack_144 = auStack_9c;
  piStack_148 = aiStack_dc;
  puStack_14c = (undefined1 *)0xa3e977;
  D3DXMatrixMultiply();
  puStack_14c = auStack_68;
  puStack_154 = &uStack_e8;
  puStack_158 = (undefined4 *)0xa3e989;
  puStack_150 = puStack_154;
  D3DXMatrixMultiply();
  puStack_158 = &uStack_f4;
  uStack_15c = *(undefined4 *)(in_ECX + 0xe8);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x98))(*(int **)(in_ECX + 0xe0));
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0xd0))
            (*(int **)(in_ECX + 0xe0),*(undefined4 *)(in_ECX + 0xe4),*(undefined4 *)(in_ECX + 0x104)
            );
  if (param_5 == 2) {
    uVar5 = *(undefined4 *)(in_ECX + 0xf4);
LAB_00a3e9fa:
    piVar1 = *(int **)(in_ECX + 0xe0);
    iVar2 = *piVar1;
  }
  else {
    if (param_5 == 3) {
      uVar5 = *(undefined4 *)(in_ECX + 0xf0);
      goto LAB_00a3e9fa;
    }
    piVar1 = *(int **)(in_ECX + 0xe0);
    iVar2 = *piVar1;
    if (param_5 == 4) {
      uVar5 = *(undefined4 *)(in_ECX + 0xf8);
    }
    else {
      uVar5 = *(undefined4 *)(in_ECX + 0xec);
    }
  }
  (**(code **)(iVar2 + 0xe8))(piVar1,uVar5);
  uStack_15c = 0;
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0xfc))(*(int **)(in_ECX + 0xe0),&uStack_15c,0);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x100))(*(int **)(in_ECX + 0xe0),0);
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x104))(*(int **)(in_ECX + 0xe0));
LAB_00a3ea9a:
  (**(code **)(*param_2 + 0x164))(param_2,0x102);
  (**(code **)(*param_2 + 0x14c))
            (param_2,4,*(int *)(in_ECX + 0xbc) / 3,*(undefined4 *)(in_ECX + 0xb8),0x14);
  if ((*(int *)(in_ECX + 0xe0) == 0) || (param_5 == 0)) {
    if (*(char *)(in_ECX + 0x74) == '\0') {
      FUN_00995b80();
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0xe0) + 0x104))(*(int **)(in_ECX + 0xe0));
    (**(code **)(**(int **)(in_ECX + 0xe0) + 0x108))(*(int **)(in_ECX + 0xe0));
    (**(code **)(**(int **)(in_ECX + 0xe0) + 0x10c))(*(int **)(in_ECX + 0xe0));
  }
  (**(code **)(*param_2 + 0xe4))(param_2,0x1b,0);
  return;
}

