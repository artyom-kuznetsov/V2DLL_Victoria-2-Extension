// FUN_009ebb50 @ 009ebb50 body=[[009ebb50, 009ebd66]]


void FUN_009ebb50(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  float unaff_ESI;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  fVar1 = *(float *)(in_ECX + 0x128);
  fVar2 = *(float *)(in_ECX + 0x11c);
  fVar3 = *(float *)(in_ECX + 0x120);
  fVar4 = *(float *)(in_ECX + 300);
  fVar5 = *(float *)(in_ECX + 0x124);
  fVar6 = *(float *)(in_ECX + 0x130);
  fVar7 = param_1[1];
  fVar8 = *param_1;
  D3DXMatrixRotationYawPitchRoll(&local_48);
  *(ulonglong *)(in_ECX + 0x104) =
       CONCAT44(*(float *)(in_ECX + 0xfc) +
                local_48 * fVar8 + fStack_44 * fVar7 + fStack_40 * 0.0 + fStack_3c,
                unaff_ESI * fVar8 + (fVar1 - fVar2) * fVar7 + (fVar4 - fVar3) * 0.0 +
                (fVar6 - fVar5) + *(float *)(in_ECX + 0xf8));
  *(float *)(in_ECX + 0x10c) =
       *(float *)(in_ECX + 0x100) +
       fStack_34 * fVar7 + fStack_38 * fVar8 + fStack_30 * 0.0 + fStack_2c;
  FUN_009ebf10(in_ECX);
  return;
}

