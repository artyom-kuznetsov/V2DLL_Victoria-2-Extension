// FUN_00aec9a0 @ 00aec9a0 body=[[00aec9a0, 00aeca33]]


void FUN_00aec9a0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined1 local_10 [16];
  
  pfVar5 = (float *)FUN_00aed370(local_10,in_ECX + 0x2c);
  fVar1 = pfVar5[1];
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = pfVar5[2];
  fVar4 = *(float *)(param_1 + 0x34);
  param_2[0xb] = *(float *)(param_1 + 0x2c) + *pfVar5;
  param_2[0xc] = fVar1 + fVar2;
  param_2[0xd] = fVar3 + fVar4;
  puVar6 = (undefined4 *)FUN_00aed250(local_10);
  *param_2 = *puVar6;
  param_2[1] = puVar6[1];
  param_2[2] = puVar6[2];
  param_2[3] = puVar6[3];
  param_2[4] = *(undefined4 *)(in_ECX + 0x10);
  param_2[5] = *(undefined4 *)(in_ECX + 0x14);
  param_2[6] = *(undefined4 *)(in_ECX + 0x18);
  param_2[7] = *(undefined4 *)(in_ECX + 0x1c);
  param_2[8] = *(undefined4 *)(in_ECX + 0x20);
  param_2[9] = *(undefined4 *)(in_ECX + 0x24);
  param_2[10] = *(undefined4 *)(in_ECX + 0x28);
  return;
}

