// FUN_009f87b0 @ 009f87b0 body=[[009f87b0, 009f87ce] [009f87d0, 009f8e76]]


void FUN_009f87b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float local_14;
  float fStack_10;
  double local_c;
  
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xd8)) {
    fVar1 = *(float *)(param_1 + 0x84);
    fVar2 = *(float *)(param_1 + 0x88);
    fVar3 = *param_2;
    fVar4 = param_2[4];
    fVar5 = *(float *)(param_1 + 0x8c);
    local_3c = fVar3 * fVar1 + fVar4 * fVar2 + param_2[8] * fVar5 +
               param_2[0xc] * *(float *)(param_1 + 0x90);
    fStack_38 = param_2[1] * fVar1 + param_2[5] * fVar2 + param_2[9] * fVar5 +
                param_2[0xd] * *(float *)(param_1 + 0x90);
    local_34 = fVar1 * param_2[2] + fVar2 * param_2[6] + fVar5 * param_2[10] +
               *(float *)(param_1 + 0x90) * param_2[0xe];
    local_c = (double)fVar2 * (double)param_2[7] + (double)fVar1 * (double)param_2[3] +
              (double)fVar5 * (double)param_2[0xb];
    fStack_30 = (float)(local_c + (double)*(float *)(param_1 + 0x90) * (double)param_2[0xf]);
    fVar1 = param_2[8];
    fVar2 = param_2[0xc];
    local_2c = fVar3 * *(float *)(param_1 + 0x74) + fVar4 * *(float *)(param_1 + 0x78) +
               fVar1 * *(float *)(param_1 + 0x7c) + fVar2 * *(float *)(param_1 + 0x80);
    fVar5 = param_2[5];
    fStack_28 = param_2[1] * *(float *)(param_1 + 0x74) + fVar5 * *(float *)(param_1 + 0x78) +
                param_2[9] * *(float *)(param_1 + 0x7c) + param_2[0xd] * *(float *)(param_1 + 0x80);
    local_24 = *(float *)(param_1 + 0x74) * param_2[2] + *(float *)(param_1 + 0x78) * param_2[6] +
               *(float *)(param_1 + 0x7c) * param_2[10] + *(float *)(param_1 + 0x80) * param_2[0xe];
    fStack_20 = *(float *)(param_1 + 0x74) * param_2[3] + *(float *)(param_1 + 0x78) * param_2[7] +
                *(float *)(param_1 + 0x7c) * param_2[0xb] +
                *(float *)(param_1 + 0x80) * param_2[0xf];
    local_1c = fVar3 * *(float *)(param_1 + 100) + fVar4 * *(float *)(param_1 + 0x68) +
               fVar1 * *(float *)(param_1 + 0x6c) + fVar2 * *(float *)(param_1 + 0x70);
    fStack_18 = param_2[1] * *(float *)(param_1 + 100) + fVar5 * *(float *)(param_1 + 0x68) +
                param_2[9] * *(float *)(param_1 + 0x6c) + param_2[0xd] * *(float *)(param_1 + 0x70);
    local_14 = *(float *)(param_1 + 100) * param_2[2] + *(float *)(param_1 + 0x68) * param_2[6] +
               *(float *)(param_1 + 0x6c) * param_2[10] + *(float *)(param_1 + 0x70) * param_2[0xe];
    fStack_10 = *(float *)(param_1 + 100) * param_2[3] + *(float *)(param_1 + 0x68) * param_2[7] +
                *(float *)(param_1 + 0x6c) * param_2[0xb] +
                *(float *)(param_1 + 0x70) * param_2[0xf];
    fVar6 = *(float *)(param_1 + 0x54);
    fVar7 = *(float *)(param_1 + 0x58);
    fVar8 = *(float *)(param_1 + 0x5c);
    fVar9 = *(float *)(param_1 + 0x60);
    local_4c = fVar3 * fVar6 + fVar4 * fVar7 + fVar1 * fVar8 + fVar2 * fVar9;
    fStack_48 = param_2[1] * fVar6 + fVar5 * fVar7 + param_2[9] * fVar8 + param_2[0xd] * fVar9;
    local_44 = fVar6 * param_2[2] + fVar7 * param_2[6] + fVar8 * param_2[10] + fVar9 * param_2[0xe];
    fStack_40 = fVar6 * param_2[3] + fVar7 * param_2[7] + fVar8 * param_2[0xb] +
                fVar9 * param_2[0xf];
    local_8c = CONCAT44(fStack_48,local_4c);
    local_84 = CONCAT44(fStack_40,local_44);
    local_7c = CONCAT44(fStack_18,local_1c);
    local_74 = CONCAT44(fStack_10,local_14);
    local_6c = CONCAT44(fStack_28,local_2c);
    local_64 = CONCAT44(fStack_20,local_24);
    local_5c = CONCAT44(fStack_38,local_3c);
    local_54 = CONCAT44(fStack_30,local_34);
    puVar11 = &local_8c;
    puVar12 = (undefined4 *)(param_1 + 0x94);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar12 = *(undefined4 *)puVar11;
      puVar11 = (undefined8 *)((int)puVar11 + 4);
      puVar12 = puVar12 + 1;
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      FUN_009f87b0(*(int *)(param_1 + 0xdc),(undefined4 *)(param_1 + 0x94));
    }
  }
  return;
}

