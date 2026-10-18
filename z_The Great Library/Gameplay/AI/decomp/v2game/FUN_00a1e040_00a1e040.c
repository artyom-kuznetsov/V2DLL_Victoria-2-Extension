// FUN_00a1e040 @ 00a1e040 body=[[00a1e040, 00a1e68b]]


void FUN_00a1e040(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  FUN_005da1e0();
  fVar1 = *(float *)(in_ECX + 0x5c);
  fVar2 = *(float *)(in_ECX + 0x58);
  fVar3 = *(float *)(in_ECX + 0x54);
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  *(float *)(in_ECX + 0x54) =
       local_38 * fVar2 + local_48 * fVar3 + local_28 * fVar1 + fVar4 * *(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x58) =
       local_34 * fVar2 + local_44 * fVar3 + local_24 * fVar1 + fVar5 * *(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x5c) =
       local_30 * fVar2 + local_40 * fVar3 + local_20 * fVar1 + fVar6 * *(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x60) =
       local_2c * fVar2 + local_3c * fVar3 + local_1c * fVar1 + *(float *)(in_ECX + 0x60);
  fVar1 = *(float *)(in_ECX + 0x6c);
  fVar2 = *(float *)(in_ECX + 0x68);
  fVar3 = *(float *)(in_ECX + 100);
  *(float *)(in_ECX + 100) =
       local_38 * fVar2 + local_48 * fVar3 + local_28 * fVar1 + fVar4 * *(float *)(in_ECX + 0x70);
  *(float *)(in_ECX + 0x68) =
       local_34 * fVar2 + local_44 * fVar3 + local_24 * fVar1 + fVar5 * *(float *)(in_ECX + 0x70);
  *(float *)(in_ECX + 0x6c) =
       local_30 * fVar2 + local_40 * fVar3 + local_20 * fVar1 + fVar6 * *(float *)(in_ECX + 0x70);
  *(float *)(in_ECX + 0x70) =
       local_2c * fVar2 + local_3c * fVar3 + local_1c * fVar1 + *(float *)(in_ECX + 0x70);
  fVar1 = *(float *)(in_ECX + 0x7c);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x74);
  *(float *)(in_ECX + 0x74) =
       local_38 * fVar2 + local_48 * fVar3 + local_28 * fVar1 + fVar4 * *(float *)(in_ECX + 0x80);
  *(float *)(in_ECX + 0x78) =
       local_34 * fVar2 + local_44 * fVar3 + local_24 * fVar1 + fVar5 * *(float *)(in_ECX + 0x80);
  *(float *)(in_ECX + 0x7c) =
       local_30 * fVar2 + local_40 * fVar3 + local_20 * fVar1 + fVar6 * *(float *)(in_ECX + 0x80);
  *(float *)(in_ECX + 0x80) =
       local_2c * fVar2 + local_3c * fVar3 + local_1c * fVar1 + *(float *)(in_ECX + 0x80);
  fVar1 = *(float *)(in_ECX + 0x8c);
  fVar2 = *(float *)(in_ECX + 0x88);
  fVar3 = *(float *)(in_ECX + 0x84);
  fVar7 = *(float *)(in_ECX + 0x90);
  *(float *)(in_ECX + 0x84) = local_38 * fVar2 + local_48 * fVar3 + local_28 * fVar1 + fVar4 * fVar7
  ;
  *(float *)(in_ECX + 0x88) = local_34 * fVar2 + local_44 * fVar3 + local_24 * fVar1 + fVar5 * fVar7
  ;
  *(float *)(in_ECX + 0x8c) = local_30 * fVar2 + local_40 * fVar3 + local_20 * fVar1 + fVar6 * fVar7
  ;
  *(float *)(in_ECX + 0x90) = local_2c * fVar2 + local_3c * fVar3 + local_1c * fVar1 + fVar7;
  return;
}

