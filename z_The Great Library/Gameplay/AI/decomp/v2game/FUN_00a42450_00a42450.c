// FUN_00a42450 @ 00a42450 body=[[00a42450, 00a424d8]]


void FUN_00a42450(void)

{
  float fVar1;
  float *unaff_ESI;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00401030(*unaff_ESI * *unaff_ESI +
                                unaff_ESI[1] * unaff_ESI[1] + unaff_ESI[2] * unaff_ESI[2]);
  fVar1 = (float)((float10)1 / fVar2);
  *unaff_ESI = fVar1 * *unaff_ESI;
  unaff_ESI[1] = unaff_ESI[1] * fVar1;
  unaff_ESI[2] = fVar1 * unaff_ESI[2];
  return;
}

