// FUN_004a1ef0 @ 004a1ef0 body=[[004a1ef0, 004a215b]]


void FUN_004a1ef0(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 local_178 [64];
  undefined4 local_138 [16];
  undefined4 local_f8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x2aac) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x16c))();
    puVar4 = local_f8;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x174))();
    puVar4 = local_138;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    local_90 = *puVar3;
    local_88 = puVar3[1];
    local_80 = puVar3[2];
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_3c = DAT_00f092fc;
    local_50 = DAT_00f092fc;
    local_64 = DAT_00f092fc;
    local_78 = DAT_00f092fc;
    D3DXMatrixInverse(local_178,0,local_f8);
    local_14 = *param_3;
    uStack_10 = param_3[1];
    local_c = 0;
    D3DXVec3Unproject(local_9c,&local_14,&local_90,local_138,local_f8,&local_78);
    local_14 = *param_3;
    uStack_10 = param_3[1];
    local_c = DAT_00f092fc;
    D3DXVec3Unproject(local_a8,&local_14,&local_90,local_138,local_f8,&local_78);
    local_14 = 0;
    uStack_10 = 0;
    local_c = DAT_00f092fc;
    local_38 = DAT_00f092fc;
    local_34 = 0;
    local_30 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    D3DXPlaneFromPoints(local_b8,&local_20,&local_38,&local_14);
    D3DXPlaneIntersectLine(&local_2c,local_b8,local_9c,local_a8);
    *param_2 = CONCAT44(local_28,local_2c);
    *(undefined4 *)(param_2 + 1) = local_24;
    return;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}

