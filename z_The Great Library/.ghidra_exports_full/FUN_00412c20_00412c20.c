// FUN_00412c20 @ 00412c20 body=[[00412c20, 00412f29]]


void FUN_00412c20(float *param_1,int *param_2)

{
  float fVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 local_114 [16];
  undefined4 local_d4 [16];
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined1 local_7c [8];
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
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x1c) + 0x16c))();
  puVar7 = local_d4;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x1c) + 0x174))();
  pcVar2 = *(code **)(*param_2 + 0x4c);
  puVar7 = local_114;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar3 = *(undefined8 **)(DAT_01258a74 + 0x6bc88);
  local_94 = *puVar3;
  local_8c = puVar3[1];
  local_84 = puVar3[2];
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_38 = DAT_00f092fc;
  local_4c = DAT_00f092fc;
  local_60 = DAT_00f092fc;
  local_74 = DAT_00f092fc;
  iVar6 = (*pcVar2)(local_7c);
  iVar6 = *(int *)(iVar6 + 4);
  piVar5 = (int *)(**(code **)(*param_2 + 0x4c))(&local_c);
  local_1c = (float)*piVar5;
  local_18 = (float)iVar6;
  local_14 = 0;
  D3DXVec3Unproject(&local_28,&local_1c,&local_94,local_114,local_d4,&local_74);
  iVar6 = (**(code **)(*param_2 + 0x4c))(&local_c);
  iVar6 = *(int *)(iVar6 + 4);
  piVar5 = (int *)(**(code **)(*param_2 + 0x4c))(local_7c);
  local_1c = (float)*piVar5;
  local_18 = (float)iVar6;
  local_14 = DAT_00f092fc;
  D3DXVec3Unproject(&local_34,&local_1c,&local_94,local_114,local_d4,&local_74);
  local_10 = local_34 - local_28;
  local_c = local_30 - local_24;
  local_8 = local_2c - local_20;
  fVar8 = (float10)FUN_00401030(local_10 * local_10 + local_c * local_c + local_8 * local_8);
  fVar1 = (float)((float10)1 / fVar8);
  local_10 = fVar1 * local_10;
  local_8 = local_8 * fVar1;
  fVar8 = (float10)FUN_0040b340(local_24 / (local_c * fVar1));
  *param_1 = local_10 * (float)fVar8 + local_28;
  param_1[1] = local_8 * (float)fVar8 + local_20;
  return;
}

