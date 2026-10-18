// FUN_00aec910 @ 00aec910 body=[[00aec910, 00aec99c]]


void FUN_00aec910(void)

{
  float fVar1;
  float *pfVar2;
  float *in_ECX;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  fVar1 = 1.0 / (in_ECX[3] * in_ECX[3] +
                in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
  *in_ECX = -(*in_ECX * fVar1);
  in_ECX[1] = -(fVar1 * in_ECX[1]);
  in_ECX[2] = -(fVar1 * in_ECX[2]);
  in_ECX[3] = fVar1 * in_ECX[3];
  local_18 = -in_ECX[0xb];
  local_14 = -in_ECX[0xc];
  local_10 = -in_ECX[0xd];
  pfVar2 = (float *)FUN_00aed370(local_c,&local_18);
  in_ECX[0xb] = *pfVar2;
  in_ECX[0xc] = pfVar2[1];
  in_ECX[0xd] = pfVar2[2];
  return;
}

