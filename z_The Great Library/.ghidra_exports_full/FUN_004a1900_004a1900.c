// FUN_004a1900 @ 004a1900 body=[[004a1900, 004a1baf]]


void FUN_004a1900(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
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
  
  if (*(int *)(param_1 + 0x2aac) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x16c))();
    puVar5 = local_100;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x1c) + 0x174))();
    puVar5 = local_140;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0x2aac) + 0x54))();
    local_94 = *puVar3;
    local_8c = puVar3[1];
    local_84 = puVar3[2];
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
    D3DXMatrixInverse(local_180,0,local_100);
    local_14 = *param_3;
    local_10 = param_3[1];
    local_c = 0;
    D3DXVec3Unproject(local_a0,&local_14,&local_94,local_140,local_100,&local_70);
    local_14 = *param_3;
    local_10 = param_3[1];
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
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2aac) + 0x6c))();
    iVar4 = (int)(*(float *)(iVar1 + 0x33c) + local_7c[0]);
    iVar1 = (int)(*(float *)(iVar1 + 0x340) + local_74);
    if (iVar4 < 0) {
      iVar4 = iVar4 + *(int *)(param_1 + 0x2abc);
    }
    if (*(int *)(param_1 + 0x2abc) <= iVar4) {
      iVar4 = iVar4 - *(int *)(param_1 + 0x2abc);
    }
    if (iVar1 < 0) {
      iVar1 = iVar1 + *(int *)(param_1 + 0x2ac0);
    }
    if (*(int *)(param_1 + 0x2ac0) <= iVar1) {
      iVar1 = iVar1 - *(int *)(param_1 + 0x2ac0);
    }
    if ((-1 < iVar4) && (-1 < iVar1)) {
      *param_2 = iVar4;
      param_2[1] = iVar1;
      return;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
  return;
}

