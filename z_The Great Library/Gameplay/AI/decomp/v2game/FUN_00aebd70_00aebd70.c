// FUN_00aebd70 @ 00aebd70 body=[[00aebd70, 00aebea1]]


void FUN_00aebd70(int param_1,int param_2,float param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined1 local_10 [16];
  
  if (1.0 <= param_3) {
    FUN_00ad2960(param_2);
    return;
  }
  if (0.0 < param_3) {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_2 + 0x34);
    fVar5 = 1.0 - param_3;
    fVar3 = *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0x34);
    param_4[0xb] = *(float *)(param_1 + 0x2c) * fVar5 + *(float *)(param_2 + 0x2c) * param_3;
    param_4[0xc] = fVar3 * fVar5 + fVar1 * param_3;
    param_4[0xd] = fVar4 * fVar5 + fVar2 * param_3;
    puVar6 = (undefined4 *)FUN_00adff20(local_10,param_2,param_3);
    *param_4 = *puVar6;
    param_4[1] = puVar6[1];
    param_4[2] = puVar6[2];
    param_4[3] = puVar6[3];
    fVar1 = *(float *)(param_2 + 0x24);
    fVar2 = *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 0x28);
    param_4[8] = *(float *)(param_1 + 0x20) * fVar5 + *(float *)(param_2 + 0x20) * param_3;
    param_4[9] = fVar3 * fVar5 + fVar1 * param_3;
    param_4[10] = fVar4 * fVar5 + fVar2 * param_3;
    puVar6 = (undefined4 *)FUN_00adff20(local_10,param_2 + 0x10,param_3);
    param_4[4] = *puVar6;
    param_4[5] = puVar6[1];
    param_4[6] = puVar6[2];
    param_4[7] = puVar6[3];
    return;
  }
  FUN_00ad2960(param_1);
  return;
}

