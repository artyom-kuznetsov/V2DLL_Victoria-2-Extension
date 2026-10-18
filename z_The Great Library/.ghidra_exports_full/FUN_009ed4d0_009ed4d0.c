// FUN_009ed4d0 @ 009ed4d0 body=[[009ed4d0, 009ed7b1]]


void FUN_009ed4d0(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 local_a0 [12];
  undefined4 local_94 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0xb40) != 0) {
    iVar4 = *(int *)(param_2 + 0x6bc88);
    puVar8 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x1c) + 0x16c))();
    puVar10 = local_94;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    local_10 = local_94[1];
    local_c = local_80;
    local_8 = local_70;
    D3DXVec3Normalize(&local_10,&local_10);
    local_50 = local_10;
    local_4c = local_c;
    local_48 = local_8;
    uVar2 = *(undefined8 *)(iVar4 + 0x114);
    local_30 = *(float *)(iVar4 + 0x11c);
    local_3c = *(float *)(iVar4 + 0x128);
    uVar3 = *(undefined8 *)(iVar4 + 0x120);
    local_38._0_4_ = (float)uVar2;
    local_44._0_4_ = (float)uVar3;
    local_1c = (float)local_44 - (float)local_38;
    local_38._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_44._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    local_18 = local_44._4_4_ - local_38._4_4_;
    local_14 = local_3c - local_30;
    local_44 = uVar3;
    local_38 = uVar2;
    D3DXVec3Normalize(local_a0,&local_1c);
    local_28 = local_94[0];
    local_24 = local_84;
    local_20 = local_74;
    D3DXVec3Normalize(&local_28,&local_28);
    (**(code **)(*param_3 + 0xb0))(param_3,0x100,param_4);
    iVar4 = *(int *)(param_1 + 0x13c);
    piVar5 = *(int **)(iVar4 + 0x130);
    if (piVar5 != (int *)0x0) {
      fVar1 = *(float *)(iVar4 + 0x104);
      fVar7 = *(float *)(iVar4 + 0x98) * 0.1;
      local_18 = *(float *)(iVar4 + 0x10c) * fVar7;
      local_14 = *(float *)(iVar4 + 0x110) * fVar7;
      local_1c = fVar7 * *(float *)(iVar4 + 0x108);
      piVar6 = *(int **)(*(int *)(param_1 + 0x140) + 100);
      (**(code **)(*piVar6 + 0xe8))(piVar6,7,&local_2c);
      piVar6 = *(int **)(*(int *)(param_1 + 0x140) + 100);
      (**(code **)(*piVar6 + 0xe8))(piVar6,0xe,&param_4);
      (**(code **)(**(int **)(param_2 + 100) + 0xe4))(*(int **)(param_2 + 100),7,1);
      (**(code **)(**(int **)(param_2 + 100) + 0xe4))(*(int **)(param_2 + 100),0xe,0);
      (**(code **)(*piVar5 + 0x1c))
                (param_1 + 0xb30,2,0x140,&local_1c,&local_50,&local_28,fVar7 * fVar1,DAT_00f092fc,
                 param_5,param_6);
      (**(code **)(**(int **)(param_2 + 100) + 0xe4))(*(int **)(param_2 + 100),0xe,param_4);
      (**(code **)(**(int **)(param_2 + 100) + 0xe4))(*(int **)(param_2 + 100),7,local_2c);
    }
  }
  return;
}

