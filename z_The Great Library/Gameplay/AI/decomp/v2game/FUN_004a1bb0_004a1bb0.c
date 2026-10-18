// FUN_004a1bb0 @ 004a1bb0 body=[[004a1bb0, 004a1ed0]]


void FUN_004a1bb0(int param_1,ulonglong *param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 local_17c [64];
  undefined4 local_13c [16];
  undefined4 local_fc [17];
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78 [2];
  float local_70;
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
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x2aac) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x16c))();
    puVar4 = local_fc;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x174))();
    puVar4 = local_13c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    local_90 = *puVar3;
    local_88 = puVar3[1];
    local_80 = puVar3[2];
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_30 = DAT_00f092fc;
    local_44 = DAT_00f092fc;
    local_58 = DAT_00f092fc;
    local_6c = DAT_00f092fc;
    D3DXMatrixInverse(local_17c,0,local_fc);
    local_10 = *param_3;
    uStack_c = param_3[1];
    local_8 = 0;
    D3DXVec3Unproject(local_9c,&local_10,&local_90,local_13c,local_fc,&local_6c);
    local_10 = *param_3;
    uStack_c = param_3[1];
    local_8 = DAT_00f092fc;
    D3DXVec3Unproject(local_a8,&local_10,&local_90,local_13c,local_fc,&local_6c);
    local_10 = 0;
    uStack_c = 0;
    local_8 = DAT_00f092fc;
    local_28 = DAT_00f092fc;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    D3DXPlaneFromPoints(local_b8,&local_1c,&local_28,&local_10);
    D3DXPlaneIntersectLine(local_78,local_b8,local_9c,local_a8);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x6c))();
    local_78[0] = *(float *)(iVar1 + 0x33c) + local_78[0];
    local_70 = *(float *)(iVar1 + 0x340) + local_70;
    if (param_4 != '\0') {
      if (local_78[0] < 0.0) {
        local_78[0] = (float)*(int *)(param_1 + 0x2abc) + local_78[0];
      }
      if ((float)*(int *)(param_1 + 0x2abc) <= local_78[0]) {
        local_78[0] = local_78[0] - (float)*(int *)(param_1 + 0x2abc);
      }
    }
    if (local_70 < 0.0) {
      local_70 = 0.0;
    }
    if ((float)*(int *)(param_1 + 0x2ac0) <= local_70) {
      local_70 = (float)(*(int *)(param_1 + 0x2ac0) + -1);
    }
    *param_2 = (ulonglong)(uint)local_78[0];
    *(float *)(param_2 + 1) = local_70;
    return;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}

