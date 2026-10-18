// FUN_00aec8a0 @ 00aec8a0 body=[[00aec8a0, 00aec904]]


void FUN_00aec8a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  undefined1 local_10 [16];
  
  pfVar5 = (float *)FUN_00aed370(local_10,in_ECX + 0xb);
  fVar1 = pfVar5[1];
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = pfVar5[2];
  fVar4 = *(float *)(param_1 + 0x34);
  in_ECX[0xb] = *pfVar5 + *(float *)(param_1 + 0x2c);
  in_ECX[0xc] = fVar1 + fVar2;
  in_ECX[0xd] = fVar3 + fVar4;
  puVar6 = (undefined4 *)FUN_00aed250(local_10);
  *in_ECX = *puVar6;
  in_ECX[1] = puVar6[1];
  in_ECX[2] = puVar6[2];
  in_ECX[3] = puVar6[3];
  return;
}

