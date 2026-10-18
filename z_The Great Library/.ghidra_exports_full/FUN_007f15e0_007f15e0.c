// FUN_007f15e0 @ 007f15e0 body=[[007f15e0, 007f18a4]]


undefined4 FUN_007f15e0(int param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 local_180 [64];
  undefined4 local_140 [16];
  undefined4 local_100 [17];
  undefined1 local_bc [16];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  float local_7c [2];
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar6 = (undefined4 *)(**(code **)(*(int *)((int)param_3 + 0x1c) + 0x16c))();
  pcVar2 = *(code **)(*(int *)((int)param_3 + 0x1c) + 0x174);
  puVar10 = local_100;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar6 = (undefined4 *)(*pcVar2)();
  uVar1 = *param_3;
  puVar10 = local_140;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  local_8c = param_3[1];
  local_84 = param_3[2];
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_34 = DAT_00f092fc;
  local_48 = DAT_00f092fc;
  local_5c = DAT_00f092fc;
  local_70 = DAT_00f092fc;
  local_94 = uVar1;
  D3DXMatrixInverse(local_180,0,local_100);
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = 0;
  D3DXVec3Unproject(local_a0,&local_14,&local_94,local_140,local_100,&local_70);
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = DAT_00f092fc;
  D3DXVec3Unproject(local_ac,&local_14,&local_94,local_140,local_100,&local_70);
  local_14 = 0;
  local_10 = 0;
  local_c = DAT_00f092fc;
  local_2c = DAT_00f092fc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  D3DXPlaneFromPoints(local_bc,&local_20,&local_2c,&local_14);
  D3DXPlaneIntersectLine(local_7c,local_bc,local_a0,local_ac);
  iVar7 = (int)(*(float *)(*(int *)(param_1 + 0x10) + 0x33c) + local_7c[0]);
  iVar8 = (int)(*(float *)(*(int *)(param_1 + 0x10) + 0x340) + local_74);
  if (iVar7 < 0) {
    iVar7 = iVar7 + *(int *)(*(int *)(param_1 + 0x40) + 0x2abc);
  }
  iVar3 = *(int *)(param_1 + 0x40);
  iVar4 = *(int *)(iVar3 + 0x2abc);
  if (iVar4 <= iVar7) {
    iVar7 = iVar7 - iVar4;
  }
  if ((((-1 < iVar8) && (iVar8 < *(int *)(iVar3 + 0x2ac0))) && (-1 < iVar7)) && (iVar7 <= iVar4)) {
    iVar4 = *(int *)(iVar3 + 0x212c);
    iVar9 = *(int *)(iVar4 + 4) + -1;
    if (iVar7 <= iVar9) {
      iVar9 = iVar7;
    }
    iVar7 = *(int *)(iVar4 + 8) + -1;
    if (iVar7 < iVar8) {
      iVar8 = iVar7;
    }
    iVar8 = *(int *)(*(int *)(iVar3 + 0x2aa4) +
                    (uint)*(ushort *)
                           (*(int *)(iVar4 + 0x18) * iVar8 + *(int *)(iVar4 + 0xc) * iVar9 +
                           *(int *)(iVar4 + 0x20)) * 4);
    if (((iVar8 != 0) && (uVar5 = *(uint *)(iVar8 + 0xb4), -1 < (int)uVar5)) &&
       (uVar5 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2))) {
      return *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar5 * 4);
    }
  }
  return 0;
}

