// FUN_00651ea0 @ 00651ea0 body=[[00651ea0, 006521ff]]


void FUN_00651ea0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined1 local_1b0 [64];
  undefined4 local_170 [16];
  undefined1 local_130 [64];
  undefined4 local_f0 [16];
  undefined1 local_b0 [68];
  undefined1 local_6c [8];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined4 local_18;
  float local_14 [2];
  undefined4 local_c;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))(local_6c);
  iVar2 = *(int *)(iVar2 + 4);
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x4c))((int)&local_20 + 4);
  local_28 = (float)*piVar3;
  local_24 = (float)iVar2;
  FUN_004a1bb0(DAT_0125870c,local_14,&local_28,1);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_1 + 0x17e0) + 0x1c) + 0x16c))();
  puVar5 = local_170;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_1 + 0x17e0) + 0x1c) + 0x174))();
  fVar1 = local_14[0];
  local_20 = *(undefined8 *)(param_1 + 0x15f0);
  local_18 = *(undefined4 *)(param_1 + 0x15f8);
  puVar5 = local_f0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)(DAT_0125870c + 0x2abc);
  fVar6 = (float)iVar2;
  if ((float)local_20 - fVar1 <= (float)iVar2 * 0.5) {
    if ((float)local_20 - fVar1 < -fVar6 * 0.5) {
      local_14[0] = fVar1 - (float)iVar2;
    }
  }
  else {
    local_14[0] = fVar1 + (float)iVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x1d14) + 0x2c))(*(int **)(param_1 + 0x1d14),DAT_00f17b54);
  (**(code **)(**(int **)(param_1 + 0x1d14) + 0x10))(*(int **)(param_1 + 0x1d14));
  piVar3 = *(int **)(*(int *)(param_1 + 0x17e4) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x17e4) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,0);
  fVar1 = *(float *)(param_1 + 0x1cc0);
  if (-fVar6 * 0.5 <= fVar1 - (float)local_20) {
    if (-fVar6 * 0.5 <= (float)local_20 - fVar1) goto LAB_006520d4;
    local_20._0_4_ = (float)local_20 + fVar6;
    local_14[0] = local_14[0] + fVar6;
  }
  else {
    local_20._0_4_ = (float)local_20 - fVar6;
    local_14[0] = local_14[0] - fVar6;
  }
LAB_006520d4:
  D3DXMatrixTranslation(local_b0,-fVar1,0,*(uint *)(param_1 + 0x1cc4) ^ 0x80000000);
  D3DXMatrixMultiply(local_130,local_b0,local_170);
  D3DXMatrixMultiply(local_1b0,local_130,local_f0);
  local_58 = local_14[0];
  local_4c = local_14[0];
  local_64 = (float)local_20;
  local_60 = 0;
  local_5c = local_18;
  local_54 = 0;
  local_50 = local_18;
  local_48 = 0;
  local_44 = local_c;
  local_40 = (float)local_20;
  local_3c = 0;
  local_38 = local_c;
  local_34 = (float)local_20;
  local_30 = 0;
  local_2c = local_18;
  (**(code **)(**(int **)(param_1 + 0x1d14) + 0x18))
            (*(int **)(param_1 + 0x1d14),&local_64,5,local_1b0,0xffffffff);
  piVar3 = *(int **)(*(int *)(param_1 + 0x17e4) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x17e4) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
  (**(code **)(**(int **)(param_1 + 0x1d14) + 0x44))(*(int **)(param_1 + 0x1d14));
  return;
}

