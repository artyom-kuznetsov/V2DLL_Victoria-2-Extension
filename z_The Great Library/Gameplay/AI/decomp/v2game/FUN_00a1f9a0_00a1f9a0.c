// FUN_00a1f9a0 @ 00a1f9a0 body=[[00a1f9a0, 00a1fd3a]]


float10 FUN_00a1f9a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float param_4,
                    float param_5,float param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 auStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(in_ECX + 0xf8) == 0) {
    return (float10)0;
  }
  FUN_007eb4f0(in_ECX + 0x94);
  local_90 = auStack_5c[3];
  fStack_8c = fStack_4c;
  fStack_88 = fStack_48;
  fStack_84 = fStack_44;
  local_80 = local_40;
  fStack_7c = fStack_3c;
  fStack_78 = fStack_38;
  fStack_74 = fStack_34;
  local_70 = local_30;
  fStack_6c = fStack_2c;
  fStack_68 = fStack_28;
  fStack_64 = fStack_24;
  local_60 = local_20;
  auStack_5c[0] = uStack_1c;
  auStack_5c[1] = uStack_18;
  auStack_5c[2] = uStack_14;
  D3DXMatrixInverse(&local_90,0,&local_90);
  if ((char)param_8 == '\0') {
    fStack_b4 = fStack_8c * param_5 + fStack_9c * param_4 + fStack_7c * param_6;
    fStack_b0 = fStack_88 * param_5 + fStack_98 * param_4 + fStack_78 * param_6;
    fStack_ac = fStack_94 * param_4 + fStack_84 * param_5 + fStack_74 * param_6;
    fStack_a8 = fStack_6c;
    fStack_a4 = fStack_68;
    fStack_a0 = fStack_64;
  }
  else {
    fStack_a8 = fStack_8c * param_5 + fStack_9c * param_4 + fStack_7c * param_6 + fStack_6c;
    fStack_a4 = fStack_98 * param_4 + fStack_88 * param_5 + fStack_78 * param_6 + fStack_68;
    fVar1 = (float)param_3[0xe];
    fVar2 = (float)param_3[0xd];
    fStack_a0 = fStack_94 * param_4 + fStack_84 * param_5 + fStack_74 * param_6 + fStack_64;
    fVar3 = (float)param_3[0xc];
    puVar5 = auStack_5c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    fStack_b4 = 0.0;
    if (-0.01 <= fStack_48 * fVar2 + fStack_4c * fVar3 + fStack_44 * fVar1 + local_40 * 0.0) {
      fStack_b0 = 0.0;
      fStack_ac = DAT_00f092fc;
    }
    else {
      fStack_b0 = DAT_00f092dc;
      fStack_ac = 0.0;
    }
  }
  fVar6 = (float10)(**(code **)(**(int **)(in_ECX + 0xf8) + 0x54))
                             (CONCAT44(fStack_a4,fStack_a8),fStack_a0,CONCAT44(fStack_b0,fStack_b4),
                              fStack_ac,param_7,param_8);
  return fVar6;
}

