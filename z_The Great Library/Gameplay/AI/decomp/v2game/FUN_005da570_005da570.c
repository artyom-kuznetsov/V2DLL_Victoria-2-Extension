// FUN_005da570 @ 005da570 body=[[005da570, 005daaae]]


void FUN_005da570(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_005da1e0();
  fVar1 = unaff_ESI[1];
  fVar2 = *unaff_ESI;
  fVar3 = unaff_ESI[2];
  fVar4 = unaff_ESI[3];
  *unaff_ESI = local_38 * fVar1 + fVar2 * param_1 + local_28 * fVar3 + local_18 * fVar4;
  unaff_ESI[1] = local_44 * fVar2 + fVar1 * param_2 + local_24 * fVar3 + local_14 * fVar4;
  unaff_ESI[2] = local_30 * fVar1 + local_40 * fVar2 + fVar3 * param_3 + local_10 * fVar4;
  unaff_ESI[3] = local_2c * fVar1 + local_3c * fVar2 + local_1c * fVar3 + fVar4;
  fVar1 = unaff_ESI[5];
  fVar2 = unaff_ESI[4];
  fVar3 = unaff_ESI[6];
  fVar4 = unaff_ESI[7];
  unaff_ESI[4] = local_38 * fVar1 + fVar2 * param_1 + local_28 * fVar3 + local_18 * fVar4;
  unaff_ESI[5] = local_44 * fVar2 + fVar1 * param_2 + local_24 * fVar3 + local_14 * fVar4;
  unaff_ESI[6] = local_30 * fVar1 + local_40 * fVar2 + fVar3 * param_3 + local_10 * fVar4;
  unaff_ESI[7] = local_2c * fVar1 + local_3c * fVar2 + local_1c * fVar3 + fVar4;
  fVar1 = unaff_ESI[9];
  fVar2 = unaff_ESI[8];
  fVar3 = unaff_ESI[10];
  fVar4 = unaff_ESI[0xb];
  unaff_ESI[8] = local_38 * fVar1 + fVar2 * param_1 + local_28 * fVar3 + local_18 * fVar4;
  unaff_ESI[9] = local_44 * fVar2 + fVar1 * param_2 + local_24 * fVar3 + local_14 * fVar4;
  unaff_ESI[10] = local_30 * fVar1 + local_40 * fVar2 + fVar3 * param_3 + local_10 * fVar4;
  unaff_ESI[0xb] = local_2c * fVar1 + local_3c * fVar2 + local_1c * fVar3 + fVar4;
  fVar1 = unaff_ESI[0xd];
  fVar2 = unaff_ESI[0xc];
  fVar3 = unaff_ESI[0xe];
  fVar4 = unaff_ESI[0xf];
  unaff_ESI[0xc] = local_38 * fVar1 + fVar2 * param_1 + local_28 * fVar3 + local_18 * fVar4;
  unaff_ESI[0xd] = local_44 * fVar2 + fVar1 * param_2 + local_24 * fVar3 + local_14 * fVar4;
  unaff_ESI[0xe] = local_30 * fVar1 + local_40 * fVar2 + fVar3 * param_3 + local_10 * fVar4;
  unaff_ESI[0xf] = local_2c * fVar1 + local_3c * fVar2 + local_1c * fVar3 + fVar4;
  return;
}

