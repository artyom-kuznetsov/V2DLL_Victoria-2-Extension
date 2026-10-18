// FUN_00aeca40 @ 00aeca40 body=[[00aeca40, 00aecb13]]


void FUN_00aeca40(float *param_1)

{
  float fVar1;
  float *pfVar2;
  float *in_ECX;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  fVar1 = in_ECX[3];
  param_1[3] = fVar1;
  fVar1 = 1.0 / (param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1] +
                fVar1 * fVar1);
  *param_1 = -(*param_1 * fVar1);
  param_1[1] = -(fVar1 * param_1[1]);
  param_1[2] = -(param_1[2] * fVar1);
  param_1[3] = fVar1 * param_1[3];
  local_18 = -in_ECX[0xb];
  local_14 = -in_ECX[0xc];
  local_10 = -in_ECX[0xd];
  pfVar2 = (float *)FUN_00aed370(local_c,&local_18);
  param_1[0xb] = *pfVar2;
  param_1[0xc] = pfVar2[1];
  param_1[0xd] = pfVar2[2];
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[5];
  param_1[6] = in_ECX[6];
  param_1[7] = in_ECX[7];
  param_1[8] = in_ECX[8];
  param_1[9] = in_ECX[9];
  param_1[10] = in_ECX[10];
  return;
}

